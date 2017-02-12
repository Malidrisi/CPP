//
//  main.cpp
//  NCR
//
//  Created by Maha Alidrisi on 2/1/17.
//  Copyright © 2017 Maha Alidrisi. All rights reserved.
//

#include <iostream>
#include <random>

using namespace std;

void insertionSort(int x[], int n) {
    for (int i = 1; i < n; ++i) {
        // insert x[i] into the list before it into the correct location
        for (int j = i; j > 0; j--)
        {
            if (x[j] < x[j-1] )
            {
                int temp=x[j-1];
                x[j-1]=x[j];
                x[j]=temp;
            }
            
        }
    }
}
default_random_engine gen;

// fill an array of n elements with value from 0 to m
void randomArray(int x[], int n, int m) {
    uniform_int_distribution<int> distribution(0, m);
    for (int i = 0; i < n; ++i) {
        x[i] = distribution(gen);
    }
}

void print(int x[], int n) {
    for (int i = 0; i < n; ++i)
        cout << x[i] << ' ';
    cout << '\n';
}

int main() {
    const int n = 10;
    int x[n];
    randomArray(x, n, n);
    print(x, n);
    insertionSort(x, n);
    print(x, n);
}
