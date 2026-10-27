# <ankitwrites>: my first Phlex workflow

**Who I am:** I am Ankit Rana Magar from Jawaharlal Nehru University, New Delhi. I am an MSc Second Year Student. I am currently working to search for quantum decoherence on neutrino oscillations using Machine Learning.

## What this does

This is my first PHLEX workflow. It runs on 20 spills and writes only the `sum` product with FORM.

## How to run it

From the build directory:

```bash
phlex -c ../dune-tech-phlex-sandbox/contributions/ankitwrites/my-workflow.jsonnet --stage ankiwrites
```

## What you should see

Seen layers:

  job
   │ 
   └ spill: 20

## One thing I learned today

There was a cache loading error while building cmake. It was due to unwanted files on dune-tech-phlex-sandbox. Removing those files from git solved the issue.
I ran my first PHLEX program.

## One word for today

PRODUCTIVE!
