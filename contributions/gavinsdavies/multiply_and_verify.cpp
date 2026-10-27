#include "phlex/module.hpp"

#include <cassert>

namespace {
  // Add i and j together
  int multiply(int i, int j) { return i * j; }
}

PHLEX_REGISTER_ALGORITHMS(m, config)
{
  using namespace phlex;

  auto const layer = config.get<std::string>("layer");
  int answer = 42;

  m.transform("multiply", multiply, concurrency::unlimited)
    .input_family(product_selector{.creator = "input", .layer = layer, .suffix = "i"},
                  product_selector{.creator = "input", .layer = layer, .suffix = "j"})
    .output_product_suffixes("product");

  m.observe(
     "verify_product", [](int product) { assert(product >= 0); }, concurrency::unlimited)
    .input_family(product_selector{.creator = "multiply", .layer = layer});
}
