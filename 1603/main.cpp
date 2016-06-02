//
//  main.cpp
//  1603
//
//  Created by CHENCHEN ZHANG on 3/22/15.
//  Copyright (c) 2015 CHENCHEN ZHANG. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

char table[4][4];

bool canBeFound(int i, int j, string str, int visited[]);

int main(int argc, const char * argv[]) {
    char ch;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cin>>ch;
            table[i][j] = ch;
        }
    }
//        string test = "ta";
//        cout<<test.length()<<" "<<test.substr(1,test.length())<<" "<<test.at(0);
    bool ans = false;
    for (int i=0;i<4;i++){
        if (!ans){
            for (int j=0;j<4;j++){
                //int visited[16];
                ans = canBeFound(i,j,"abracad",new int[16]);
                if (ans){

                    cout<<endl;
                    break;
                }
            }
        }else {
            break;
        }
    }
    cout<<ans;
    return 0;
}

bool canBeFound(int i, int j, string str, int visited[]){
    if (i<0 || i>3){
        return false;
    }else if(j<0 || j>3){
        return false;
    }else if (visited[i*4+j]!=0){
        return false;
    } else if (table[i][j]!=str.at(0)){
        return false;
    } else{
        if (str.length()==1){
            return true;
        }else {
            visited[i*4+j]=1;
            return canBeFound(i+1, j, str.substr(1,str.length()), visited)
            || canBeFound(i-1, j, str.substr(1,str.length()), visited)
            || canBeFound(i, j-1, str.substr(1,str.length()), visited)
            || canBeFound(i, j+1, str.substr(1,str.length()), visited)
            ;
        }
    }
}
