//
//  main.cpp
//  Final Project
//
//  Created by Charottama Oshmar on 10/14/16.
//  Copyright © 2016 Charottama Oshmar. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
    
    char userInput1;
    char ch;                //just to enter
    int userInput2, life;

    for (life = 3; life>0; life--);
    
    cout<<"You are about to begin a glorious adventure! Press enter to continue"<<endl;
    cin.get(ch);
    cout<<"You and two of your friends are on a quest to find the mythical 'Daggers of Ice', which supposedly can grant its wielder a blissful and eternal life. You find a cave, with two entrances to it. Entrance A says 'Left side of the brain', while Entrance B says 'Right side of the brain.'\n"<<endl;
    cout<<"We want to go in through Entrance... (please input your choice)"<<endl;
    cin>>userInput1;
    if (userInput1 == 'a'){
                    const int MIN_VALUE = 30; // Minimum value
            const int MAX_VALUE = 5000; // Maximum value
        cout<<"You have chosen Entrance A, now you must solve this equation"<<endl;

            // Variables
            int die1; // To hold the value of rand #1
            int die2; // To hold the value of rand #2
        
            // Get the system time.
            unsigned seed = time(0);

            // Seed the random number generator.
            srand(seed);
            die1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
            die2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        cout << die1<< " + "<<die2<<" = ..."<<endl;
        cin>>userInput2;
        cout  << "test";
            if (userInput2 == die1 + die2)
        cout<<"You have succesfully made it through"<<endl;
            else
                cout<<"You have "<< life<< " lives remaining. Try again"<<endl;
    }
    
    
    
    return 0;
    }
