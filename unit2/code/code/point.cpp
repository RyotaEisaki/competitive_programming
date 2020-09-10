//
//  point.cpp
//  code
//
//  Created by Ryota Eisaki on 2020/09/10.
//  Copyright © 2020 Ryota Eisaki. All rights reserved.
//

#include "point.hpp"

int N = 6;
int R = 10;
int X[6] = {1, 7, 15, 20, 30, 50};

void solve() {
    sort(X, X+N);
    
    int i = 0; ans = 0;
    while (i < N) {
        int s = X[i++];
        while (i < N && X[i] <= s + R) i++;
        
        int p = X[i - 1];
        while (i < N && X[i] <= p + R) i++;
        
        ans++;
    }
    
    printf("%d\n", ans);
}

