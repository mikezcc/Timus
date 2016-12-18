//
//  main.cpp
//  1021
//
//  Created by CHENCHEN ZHANG on 3/21/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, m, i, temp;
    int res = 0;
    set<int> s;
    cin >> n;
    for (i=0; i<n; i++){
        cin >> temp;
        s.insert(10000-temp);
    }
    cin >> m;
    for (i=0; i<m; i++){
        cin >> temp;
        if (s.find(temp) != s.end()){
            res=1;
        }
    }
    if (res)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
