/**
 * Copyright 2020, 2021 Bill Chow. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * Generates primes up to (2 ^ 31) - 1.
 * Stop when satisfied.
 */
#include <stdio.h>
main() {
  int i, a = 1;
start:
  for (i = 2, ++a; i * i <= a; ++i) if (a % i == 0) goto start;
  printf("%d ", a);
  goto start;
}
