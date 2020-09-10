//
//  fencerepair.cpp
//  code
//
//  Created by Ryota Eisaki on 2020/09/10.
//  Copyright © 2020 Ryota Eisaki. All rights reserved.
//

#include "fencerepair.hpp"

typedef long long ll;

const int N = 3;
const int L[3] = {8, 5,3};

void solv() {
    ll ans = 0;
    
    while (N > 1) {
        int mii1 = 0, mii2 = 1;
        if (L[mii1] > L[mii2]) swap(mii1, mii2);
        
        for (int i = 2; i < N; i++) {
            if (L[i] < mii1) {
                mii2 = mii1;
            }
            else if (L[i] < L[mii2]) {
                mii2 = i;
            }
        }
        
        int t = L[mii1] + L[mii2];
        ans += t;
        
        if (mii1 == N - 1) swap(mii1, mii2);
        L[mii1] = t;
        L[mii2] = L[N - 1];
        N--;
    }
    
    printf("%lld\n", ans);
}
