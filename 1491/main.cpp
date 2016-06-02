//
//  main.cpp
//  1491
//
//  Created by CHENCHEN ZHANG on 3/21/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//

#include <iostream>
using namespace std;

int knight[100002];

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int a,b,c;
    for (int i=0;i<=n;i++){
        cin>>a>>b>>c;
        knight[a]+=c;
        knight[b+1]-=c;
    }
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=knight[i];
        cout<<sum<<" ";
    }
    return 0;
}
