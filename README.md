# primegen

My repository for my simple prime number generator. The goals are:

1. To have a relatively fast prime number generator that does not pre-calculate the primes.
2. To have a simple, low memory, low space implementation without any sophisticated algorithm.


## Requirements

- Any C compiler.

## Build instructions

### On Linux/macOS

Compile with:

`cc primegen.c -march=native -Ofast -ansi -m64 -static`

If you receive:

`cc1:`**`sorry, unimplemented:`**`64-bit mode not compiled in`

Use this instead:

`cc primegen.c -march=native -Ofast -ansi -static`

The resulting programme is `a.out`.

### On Windows

Install a C compiler, such as from MinGW or Cygwin, and make sure that the compiler has been added to your `PATH`.
The command above should work. Note that the resulting programme is `a.exe` instead of `a.out`.
