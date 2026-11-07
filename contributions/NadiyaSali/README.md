# NadiyaSali: my first Phlex workflow


**Who i am** : Nadiya M, MSc physics graduate, Central University of Karnataka

## What this does

Runs the C++ example workflow on 20 spills
and writes only the `sum` product with FORM.

## How to run it

From your build directory:

```bash
phlex -c ../dune-tech-phlex-sandbox/contributions/NadiyaSali/my-workflow.jsonnet --stage NadiyaSali
```

## What you should see

`Processed layers: === form_output_module::save_data_products ===
Creator: add_cpp:add
Stage: NadiyaSali
Data cell: [spill:19]
Number of products: 1
  Product: add_cpp:add/sum
Wrote 1 products to FORM
[2026-10-27 11:24:29.892] [info] 

Seen layers:

  job
   │ 
   └ spill: 20`

## One thing I learned today

To run phlex i will run as phlex -c
git status

## One word for today

 Learned Cmake
