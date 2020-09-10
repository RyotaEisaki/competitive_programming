//
//  greedy.cpp
//  code
//
//  Created by Ryota Eisaki on 2020/09/10.
//  Copyright © 2020 Ryota Eisaki. All rights reserved.
//

#include "greedy.hpp"

static const int V[6] = {1, 5, 10, 50, 100, 500};

static const int C[6] = {3, 2, 1, 3, 0, 2};
static int A = 620;
static int t;

void solve() {
    int ans = 0;
    for (int i = 5; i >= 0; i--) {
        if ((A/V[i])>C[i]) {
            t = C[i]; //コインiを使う枚数
        }
        else t = A/V[i];
        A -= t * V[i];
        ans += t;
    }
    
    printf("%d\n",ans);
}
