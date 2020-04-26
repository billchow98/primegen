# primegen

My repository for my simple prime number generator. The goals are:
1. To have an as fast as possible prime number generator that does not pre-calculate the primes.
2. To have a simple implementation without any sophisticated algorithm.

Licensed under the Apache-2.0 License. See COPYING file in the project root for full license information.

## Requirements:
- Any ANSI C compiler.

## Build instructions:
### On Linux:
Compile with:

`cc primegen.c -march=native -Ofast -ansi -m64 -static`
    
If you receive:

`cc1:`**`sorry, unimplemented:`**`64-bit mode not compiled in`

Use this instead:

`cc primegen.c -march=native -Ofast -ansi -static`

The resulting programme is a.out.
