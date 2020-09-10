//
//  dictionary.cpp
//  code
//
//  Created by Ryota Eisaki on 2020/09/10.
//  Copyright © 2020 Ryota Eisaki. All rights reserved.
//

#include "dictionary.hpp"

int N;
char S[MAX_N + 1];

void solve() {
    int a = 0, b = N - 1;
    
    while (a <= b) {
        bool left = false;
        for (int i = 0; a + i <= b; i++ ) {
            if (S[a + i] < S[b - 1]) {
                left = true;
                break;
            }
            else if ( S[a + i] > S[b - 1]) {
                left = false;
                break;
            }
        }
        
        if (left) putchar(S[a++]);
        else putchar(S[b - 1]);
    }
    
    putchar("\n");
}
