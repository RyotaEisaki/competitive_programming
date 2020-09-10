//
//  main.cpp
//  code
//
//  Created by Ryota Eisaki on 2020/09/10.
//  Copyright © 2020 Ryota Eisaki. All rights reserved.
//

#include <iostream>
#include "recursion.cpp"
#include "stack"
#include <cstdio>
#include "queue"
#include "deep_first_search.cpp"

int main(int argc, const char * argv[]) {

    
//    std::cout <<solve()<< std::endl;
    solve();
    return 0;
}

//using namespace std;
//
//int main() {
//    stack<int> s; //int型をデータとするスタックを用意
//    s.push(1);
//    s.push(2);
//    s.push(3);
//    printf("%d\n", s.top());
//    s.pop(); // 一番上から取り除く
//    printf("%d\n", s.top());
//    s.pop();
//    printf("%d\n",s.top());
//    s.pop();
//    return 0;
//}
//
//int main() {
//    queue<int> que;
//    que.push(1);
//    que.push(2);
//    que.push(3);
//    printf("%d\n",que.front());
//    que.pop();
//    printf("%d\n", que.front());
//    que.pop();
//    printf("%d\n", que.front());
//    que.pop();
//    return 0;
//}
