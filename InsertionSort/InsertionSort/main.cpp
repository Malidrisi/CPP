//
//  main.cpp
//  InsertionSort
//
//  Created by Maha Alidrisi on 1/31/17.
//  Copyright © 2017 Maha Alidrisi. All rights reserved.
//

#include <iostream>
using  namespace std;





int InsertionSort(){
    
    int x[5]={1,4,3,5,2};
    
    for (int i =1; i < 5; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (x[j] < x[j-1] )
            {
                int temp=x[j-1];
                x[j-1]=x[j];
                x[j]=temp;
            }
            
            
            // print every step
            for (int m=0; m<5; m++)
            {
                cout<<x[m];
            }
            cout<<"\n";
            
        }
        
    }
    return 0;

}

int main() {
    InsertionSort();
}
