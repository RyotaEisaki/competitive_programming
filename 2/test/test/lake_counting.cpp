//
//  lake_counting.cpp
//  test
//
//  Created by Ryota on 2021/01/02.
//

#include "lake_counting.hpp"
#include<cstdio>

// 入力
static int N = 10;
static int M = 12;
static char field[10][12];

//現在位置(x, y)
static void dfs_(int x, int y) {
    //今いるところを.に置き換える
    field[x][y] = '.';
    
    //移動する8方向をループ
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            //x方向にdx, y方向にdy移動した場所を(nx, ny)とする
            int nx = x + dx, ny = y + dy;
            
            //nxとnyが庭の範囲内かどうかとfield[nx][ny]が水溜りかどうかを判定
            if (0 <= nx && nx <= N && 0 <= ny &&  ny <= M && field[nx][ny] == 'W') dfs_(nx, ny);
        }
    }
    return ;
}

static void solve_lake_counting(){
    int res = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (field[i][j] == 'W') {
                //Wが残っているならそこからdfsを始める
                dfs_(i, j);
                res++;
            }
        }
    }
    printf("%d\n", res);
}
