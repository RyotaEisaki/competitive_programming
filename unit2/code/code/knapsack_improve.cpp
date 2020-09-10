//
//  knapsack_improve.cpp
//  code
//
//  Created by Ryota Eisaki on 2020/09/10.
//  Copyright © 2020 Ryota Eisaki. All rights reserved.
//

#include "knapsack_improve.hpp"

int dp[MAX_N+1][MAX_W+1];

int rec(int i , int j) {
    if (dp[i][j] >= 0) {
        return dp[i][j];
    }
    int res;
    if (i == N) {
        res = 0;
    }
    else if (j < w[i]) {
        res = rec(i+1, j);
    }
    else {
        res = max(rec(i + 1, j),rec(i + 1, j - w[i]) + v[i]);
    }
    
    return dp[i][j] = res;
}

void solve() {
    memset(dp, -1, sezeof(dp));
    printf("%d\n", rec(0,W));
}
