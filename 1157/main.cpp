//
//  main.cpp
//  1157
//
//  Created by CHENCHEN ZHANG on 3/21/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int m,n,k;
    cin>>m>>n>>k;
    int array[10000];
    array[1]=1;
    for (int i=2;i<=10000;i++){
        int num;
        for (int j=1;j<=sqrt((double) i);j++){
            if (i%j==0){
                num++;
            }
        }
        array[i]=num;
        //cout<<num<<" ";
        num = 0;
    }
    int ans = 0;
    for (int i=2;i<=10000;i++){
        if (i>k){
            if (array[i-k]==m && array[i]==n){
                ans = i;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
