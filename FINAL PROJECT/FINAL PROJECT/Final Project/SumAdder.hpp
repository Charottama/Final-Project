//
//  SumAdder.hpp
//  Final Project
//
//  Created by Charottama Oshmar on 11/3/16.
//  Copyright © 2016 Charottama Oshmar. All rights reserved.
//

#ifndef SumAdder_hpp
#define SumAdder_hpp
#include <iostream>
using namespace std;

class sumAdder
{
private:
    int initial_input;
    int totalSum;
    
public:
    sumAdder ()
    {
        initial_input = 0;
        totalSum = 0;
    }
    
    void setInitialInput (int II)
    {
        initial_input = II;
    }
    
    int getInitialInput () const
    {
        return initial_input;
    }
    
    int getTotSum();
    
    int multiplicResult();

};


//#include <stdio.h>

#endif /* SumAdder_hpp */
