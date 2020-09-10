//
//  work.cpp
//  code
//
//  Created by Ryota Eisaki on 2020/09/10.
//  Copyright © 2020 Ryota Eisaki. All rights reserved.
//

#include "work.hpp"
#include <utility>
#include <iostream>

const int MAX_N = 1000;

int N, S[MAX_N], T[MAX_N];

std::pair<int, int> itv[MAX_N];

void solve() {
    for (int i = 0; i < N; i++) {
        itv[i].first = T[i];
        itv[i].second = S[i];
    }
    sort(itv, itv + N);
    
    int ans = 0, t = 0;
    for (int i = 0; i < N; i++) {
        if (t < itv[i].second) {
            ans++;
            t = itv[i].first;
        }
    }
    printf("%d\n", ans);
}
