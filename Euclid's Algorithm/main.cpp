//
//  main.cpp
//  Euclid's Algorithm
//
//  Created by Tishaun Bristol on 1/29/19.
//  Copyright © 2019 Bristol Developers. All rights reserved.
//
//  Find the greatest common denominator of two numbers
//  Using Euclid's Algorithm

#include <iostream>
using namespace std;

//  function to find the GCD
//  Recursive version

int gcd (int a, int b)
{
    if (b == 0)
        return a;
    
    return gcd(b, a % b);
}

int main()
{
    //  Find GCD and Print to Screen
    cout<<"GCD of 60,95 is "<<gcd(60,95)<<endl;
    cout<<"GCD OF 20,8 is "<<gcd(20,8)<<endl;
    
    return 0;
}
