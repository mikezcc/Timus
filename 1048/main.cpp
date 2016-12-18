//
//  main.cpp
//  1048
//
//  Created by CHENCHEN ZHANG on 3/21/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//

#include <stdio.h>

const int N = 1000 * 1000;

int a[N], b[N], c[N];

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    int carry=0;
    for (int i=n-1;i>=0;i--){
        c[i] = (a[i]+b[i]+carry)%10;
        carry = (a[i]+b[i]+carry)/10;
    }
    for (int i=0;i<n;i++){
        printf("%d",c[i]);
    }
    return 0;
}
