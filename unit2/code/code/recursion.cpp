//
//  recursion.cpp
//  code
//
//  Created by Ryota Eisaki on 2020/09/10.
//  Copyright © 2020 Ryota Eisaki. All rights reserved.
//

#include "recursion.hpp"

static const int MAX_N = 100;
static int memo[MAX_N];

static inline int fact(int n){
    if (n == 0 ) return 1;
    return n * fact(n - 1);
}

static inline int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

static inline int fib2(int n) {

    if (n <= 1) return n;
    if (memo[n] != 0) return memo[n];
    return memo[n] = fib2(n - 2) + fib2(n - 1);
}
