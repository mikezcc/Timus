//
//  main.cpp
//  1009
//
//  Created by CHENCHEN ZHANG on 3/21/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int i, n, k;
    cin >> n >> k;
    int res[n][2];
    res[0][0] = 0;
    res[0][1] = k-1;

    for (i=1; i<n; ++i){
        res[i][0] = res[i-1][1];
        res[i][1] = (res[i-1][0] + res[i-1][1]) * (k-1);
    }
    cout << res[n-1][0] + res[n-1][1] << endl;
}
