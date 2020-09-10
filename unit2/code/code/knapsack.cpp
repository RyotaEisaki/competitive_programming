//
//  knapsack.cpp
//  code
//
//  Created by Ryota Eisaki on 2020/09/10.
//  Copyright © 2020 Ryota Eisaki. All rights reserved.
//

#include "knapsack.hpp"

int n, W;
int w[MAX_N], v[MAX_N];

int rec(int i, int j) {
    int res;
    if (i == n) {
        res = 0;
    }
    else if (j < w[i]) {
        res = rec(i + 1, j);
    }
    else {
        res = max(rec(i + 1, j), rec(i + 1, j - w[i])+ v[i]);
    }
    return res;
}

void solve() {
    printf("%d\n", rec(0,W));
}
