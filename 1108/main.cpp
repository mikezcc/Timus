//
//  main.cpp
//  1108
//
//  Created by CHENCHEN ZHANG on 3/22/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    long double ans[19];
    ans[1]=2;
    ans[2]=3;
    int n;
    cin>>n;
    for (int i=3;i<=n;i++){
        ans[i] = (ans[i-1]*ans[i-2])+1;
    }
    for (int i=1;i<=n;i++){
        cout<<fixed<<setprecision(0)<<ans[i]<<endl;
    }
    
    return 0;
}
