// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2020 Bill Chow

#include <stdio.h>
#include <limits.h>
main() {
    register i, a = 1;
    start:
    for (i = 2, ++a; i * i <= a; ++i) {
        if (a == INT_MAX) return 0;
        if (a % i == 0) goto start;
    }
    printf("%d ", a);
    goto start;
}
