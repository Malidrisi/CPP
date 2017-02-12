//
//  main.cpp
//  NCR
//
//  Created by Maha Alidrisi on 2/1/17.
//  Copyright © 2017 Maha Alidrisi. All rights reserved.
//

#include <iostream>

using namespace std;

int factorial(int n){
    if (n<=1)
        return 1;
    else
        return n*factorial(n-1);
}

int choose(int n,int r){
    if (n==r)
        return 1;
    else if(r==0 && n!=0)
        return 1;
    else if (n>r>0)
        return (factorial(n)/(factorial(r)*factorial(n-r)));
    else
        return 0;
}



int main() {
    int n=5;
    int r=3;

    cout<<choose(n,r);
    cout << '\n';

}



