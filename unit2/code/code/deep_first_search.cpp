//
//  deep_first_search.cpp
//  code
//
//  Created by Ryota Eisaki on 2020/09/10.
//  Copyright © 2020 Ryota Eisaki. All rights reserved.
//

#include "deep_first_search.hpp"

static const int n = 4;
static const int a[4] = {1,2,4,7};
static const int k=13;

static bool dfs(int i, int sum) {
    if (i == n) return sum == k;
    
    if (dfs(i + 1, sum)) return true;
    
    if (dfs(i + 1, sum + a[i])) return true;
    
    return false;
}

static void solve() {
    if (dfs(0, 0)) printf("Yes\n");
    else printf("No\n");
}
