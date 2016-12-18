//
//  main.cpp
//  1964
//
//  Created by CHENCHEN ZHANG on 3/21/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, k, rem;
    cin>>n>>k;
    int start = n;

    for (int i=0;i<k;i++){
        int temp;
        cin >> temp;
        rem = start + temp - n;
        start = rem;
    }
    cout << max(rem,0) << endl;
    return 0;
}
