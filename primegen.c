// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2020 Bill Chow
// Generates primes up to (2 ^ 31) - 1.
// Stop when satisfied.

#include <stdio.h>
main() {
  register i, a = 1;
start:
  for (i = 2, ++a; i * i <= a; ++i) if (a % i == 0) goto start;
  printf("%d ", a);
  goto start;
}
