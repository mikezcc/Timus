//
//  main.cpp
//  1073
//
//  Created by CHENCHEN ZHANG on 3/21/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//

#include <iostream>
#include <climits>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, i, n, nc[60005];
    cin >> n;
    nc[0]=0;
    for (i=1; i<=n; i++){
        nc[i] = INT_MAX;
        a = 1;
        while (a*a <= i){
            nc[i] = min(nc[i], nc[i-a*a]+1);
            a++;
        }
    }
    cout << nc[n] << endl;
}

