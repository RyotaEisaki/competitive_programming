//
//  partial_sum.cpp
//  test
//
//  Created by Ryota on 2021/01/01.
//

#include "partial_sum.hpp"
#include<cstdio>

static int n = 4;
static int a[] = {1, 2, 4, 7};
static int k = 15;

//iまででsumを作って、残りi以降を調べる
static bool dfs(int i, int sum) {
    //n個決め終わったら、今までの和sumがkと等しいかを返す
    if ( i == n ) return sum == k;
    
    //a[i]を使わない場合
    if (dfs(i + 1, sum)) return true;
    
    //a[i]を使う場合
    if (dfs(i + 1, sum + a[i])) return true;
    
    //a[i]を使わないに関わらずkが作れないのでfalseを返す
    return false;
}

static void solve_partial_sum() {
    if (dfs(0 ,0)) printf("Yes\n");
    else printf("No\n");
}
