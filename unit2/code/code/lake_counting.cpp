//
//  lake_counting.cpp
//  code
//
//  Created by Ryota Eisaki on 2020/09/10.
//  Copyright © 2020 Ryota Eisaki. All rights reserved.
//

#include "lake_counting.hpp"

static const int N=10;
static const int M=12;

char field[50][50];

static void dfs(int x, int y) {
    field[x][y] = '.';
    
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            int nx = x + dx, ny = y + dy;
            if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W') dfs(nx, ny);
        }
    }
    return ;
}

void solve() {
    int res = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (field[i][j] == 'W') {
                dfs(i,j);
                res++;
            }
        }
    }
    printf("%d\n",res);
}
