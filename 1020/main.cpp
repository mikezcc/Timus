//
//  main.cpp
//  1020
//
//  Created by CHENCHEN ZHANG on 3/21/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#define PI 3.14159
using namespace std;

int main(int argc, const char * argv[]) {
    int i, N;
	double R, x, y, x1, y1;
	double ox, oy;
	double len = 0;
    cin >> N >> R;
	cout << fixed;
	cout << setprecision(2);
	if (N==1){
		cout << 2*R*PI <<endl;
		return 0;
	}	  

	cin >> x >> y;
	ox = x;
	oy = y;
	for (i=1;i<N;i++) {
		cin >> x1 >> y1;
		len += sqrt(pow(x1-x, 2)+pow(y1-y,2));
		x = x1;
		y = y1;
	}
	len += sqrt(pow(x-ox, 2)+pow(y-oy,2));
	len += 2*R*PI;
    cout << len << endl;
}

