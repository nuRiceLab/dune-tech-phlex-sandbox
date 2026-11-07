 Sai Gade: my first Phlex workflow

<!-- Replace everything in angle brackets. Delete these comments when you're done. -->

**Who I am:** Sai Gade, University of Hyderabad, Work on Far Detectors

What this does:

Runs the C++ example workflow on 20 spills
and writes only the `sum` product with FORM.

How to run it:

From your build directory:

```bash
phlex -c ../dune-tech-phlex-sandbox/contributions/Sai_Gade/my-workflow.jsonnet --stage Sai_Gade
```

 What you should see:

Using configuration file: ../dune-tech-phlex-sandbox/contributions/Sai_Gade/my-workflow.jsonnet
[2026-10-27 11:28:26.181] [info] Number of worker threads: 128
Registering FORM output module...
Configuration:
  output 'default': output.root (ROOT_TTREE)
FORM output module registered successfully

=== form_output_module::save_data_products ===
Creator: geometry_source:provide_geometry
Stage: Sai_Gade
Data cell: []
Number of products: 1
  Product: input/geometry
No configuration found for product: geometry
Wrote 1 products to FORM

=== form_output_module::save_data_products ===
Creator: numbers_source:provide_j
Stage: Sai_Gade
Data cell: [spill:1]
Number of products: 1
  Product: input/j
No configuration found for product: j
Wrote 1 products to FORM

=== form_output_module::save_data_products ===
Creator: numbers_source:provide_j
Stage: Sai_Gade
Data cell: [spill:2]
Number of products: 1
  Product: input/j
Wrote 1 products to FORM

=== form_output_module::save_data_products ===
Creator: numbers_source:provide_j
Stage: Sai_Gade
Data cell: [spill:3]
Number of products: 1
  Product: input/j
Wrote 1 products to FORM

=== form_output_module::save_data_products ===
Creator: numbers_source:provide_j
Stage: Sai_Gade
Data cell: [spill:4]
Number of products: 1
  Product: input/j
Wrote 1 products to FORM

=== form_output_module::save_data_products ===
Creator: numbers_source:provide_j
Stage: Sai_Gade
Data cell: [spill:5]
Number of products: 1
  Product: input/j
Wrote 1 products to FORM

=== form_output_module::save_data_products ===
Creator: numbers_source:provide_i
Stage: Sai_Gade
Data cell: [spill:1]
Number of products: 1
  Product: input/i
No configuration found for product: i
Wrote 1 products to FORM

=== form_output_module::save_data_products ===
Creator: numbers_source:provide_j
Stage: Sai_Gade
Data cell: [spill:6]
Number of products: 1
  Product: input/j
Wrote 1 products to FORM

=== form_output_module::save_data_products ===
Creator: numbers_source:provide_j
Stage: Sai_Gade
Data cell: [spill:7]
Number of products: 1
  Product: input/j
Wrote 1 products to FORM

=== form_output_module::save_data_products ===
Creator: numbers_source:provide_j
Stage: Sai_Gade
Data cell: [spill:8]
Number of products: 1
  Product: input/j
Wrote 1 products to FORM

=== form_output_module::save_data_products ===
Creator: numbers_source:provide_j
Stage: Sai_Gade
Data cell: [spill:9]
Number of products: 1
  Product: input/j
Wrote 1 products to FORM

=== form_output_module::save_data_products ===
Creator: numbers_source:provide_i
Stage: Sai_Gade
Data cell: [spill:2]
Number of products: 1
  Product: input/i
Wrote 1 products to FORM
.
.
.
=== form_output_module::save_data_products ===
Creator: add_cpp:add
Stage: Sai_Gade
Data cell: [spill:18]
Number of products: 1
  Product: add_cpp:add/sum
Wrote 1 products to FORM
[2026-10-27 11:28:26.606] [info] 

Seen layers:

  job
   │ 
   └ spill: 20

[2026-10-27 11:28:26.606] [info] CPU time: 0.34552s  Real time: 0.42593s  CPU efficiency:  81.12%
[2026-10-27 11:28:26.606] [info] Max. RSS: 303.104 MB

One thing I learned today

Running Phlex : phlex -c

One word for today:
"Cold"


