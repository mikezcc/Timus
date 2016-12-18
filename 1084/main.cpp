//
//  main.cpp
//  1084
//
//  Created by CHENCHEN ZHANG on 3/21/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//
#define M_PI 3.14159265358979323846

#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int s, l;
    cin >> s >> l;
    if (s/2.0 >= l)
        cout << setprecision (3) << fixed << M_PI*l*l << endl;
    else if (l >= s/2.0*sqrt(2.0))
        cout << setprecision (3) << fixed << s*s << endl;
    else
        cout << setprecision (3) << fixed << M_PI*l*l-4*l*l/2*(2*acos(s/2.0/l)-sin(2*acos(s/2.0/l))) << endl;
    return 0;
}

