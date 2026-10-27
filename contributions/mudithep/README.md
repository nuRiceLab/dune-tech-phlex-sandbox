# <Mudit Kumar>: my first Phlex workflow

<!-- Replace everything in angle brackets. Delete these comments when you're done. -->

**Who I am:** <Mudit Kumar, IIT Kanpur, DUNE, >
# Check
## What this does

Runs the C++ example workflow on 20 spills
and writes only the `sum` product with FORM.

## How to run it

From your build directory:

```bash
phlex -c ../dune-tech-phlex-sandbox/contributions/mudithep/my-workflow.jsonnet --stage mudithep
```

## What you should see

=== form_output_module::save_data_products ===
Creator: add_cpp:add
Stage: mudithep
Data cell: [spill:18]
Number of products: 1
  Product: add_cpp:add/sum
Wrote 1 products to FORM
[2026-10-27 11:14:21.212] [info] 

Seen layers:

  job
   │ 
   └ spill: 20

[2026-10-27 11:14:21.212] [info] CPU time: 0.24439s  Real time: 0.36372s  CPU efficiency:  67.19%
[2026-10-27 11:14:21.212] [info] Max. RSS: 303.104 MB

## One thing I learned today

Editing phlex configuration file.


## One word for today

Good.
