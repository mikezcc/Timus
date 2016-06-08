//
//  main.cpp
//  1073
//
//  Created by CHENCHEN ZHANG on 3/21/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    if ((n*m - 1) % 2 == 0)
        cout << "[second]=:]" << endl;
    else
        cout << "[:=[first]" << endl;
    return 0;
}


