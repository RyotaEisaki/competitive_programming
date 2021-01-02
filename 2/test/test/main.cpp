#include<cstdio>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

#include "partial_sum.cpp"
#include "lake_counting.cpp"

int main(int argc, const char * argv[]) {

    // input from txt （提出時にこの箇所は削除すること）
        std::ifstream in("input.txt");
        std::cin.rdbuf(in.rdbuf());

        // cinを高速にするためのおまじない
        cin.tie(0);
        ios::sync_with_stdio(false);

    return 0;
}
