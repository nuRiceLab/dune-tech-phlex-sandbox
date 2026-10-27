# Ayisha Shana: my first Phlex workflow

<!-- Replace everything in angle brackets. Delete these comments when you're done. -->

**Who I am:** ayisha shana, central university of karnataka, student

## What this does

runs the my-workflow.jsonnet for 20 spills (#total: 20) and need only the sum in the output file (#product: ['sum'])

## How to run it

From your build directory:

```bash
phlex -c ../dune-tech-phlex-sandbox/contributions/AyishaShana-git/my-workflow.jsonnet --stage <AyishaShana-git>
```

## What you should see

=== form_output_module::save_data_products ===
Creator: add_cpp:add
Stage: AyishaShana-git
Data cell: [spill:19]
Number of products: 1
  Product: add_cpp:add/sum
Wrote 1 products to FORM
[2026-10-27 11:28:34.754] [info] 

Seen layers:

  job
   │ 
   └ spill: 20

[2026-10-27 11:28:34.754] [info] CPU time: 0.45831s  Real time: 0.40076s  CPU efficiency: 114.36%
[2026-10-27 11:28:34.754] [info] Max. RSS: 301.056 MB

## One thing I learned today
git branch

## One word for today

superb
