//
//  main.cpp
//  1222
//
//  Created by CHENCHEN ZHANG on 3/21/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    long double dp[3001];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    
    
    cout<<fixed<<setprecision(0)<<dp[n]<<endl;
    return 0;
}
