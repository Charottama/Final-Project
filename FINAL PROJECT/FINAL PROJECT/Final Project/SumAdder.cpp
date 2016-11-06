//
//  SumAdder.cpp
//  Final Project
//
//  Created by Charottama Oshmar on 11/3/16.
//  Copyright © 2016 Charottama Oshmar. All rights reserved.
//

#include "SumAdder.hpp"

int sumAdder::getTotSum()
{
    int dumdum = initial_input;
    totalSum = 0;
    while (dumdum > 0)
    {
        totalSum += dumdum;
        dumdum--;
    }
    
    
    return totalSum;
}

int sumAdder::multiplicResult()
{
    int dumdum = initial_input;
    totalSum = 1;
    while (dumdum > 0)
    {
        totalSum *= dumdum;
        dumdum--;
    }
    
    
    return totalSum;

}
