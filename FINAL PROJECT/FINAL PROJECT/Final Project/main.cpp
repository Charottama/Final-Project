//
//  main.cpp
//  Final Project
//
//  Created by Charottama Oshmar on 10/14/16.
//  Copyright © 2016 Charottama Oshmar. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    
    char userInput1, userInput3;
    char ch;                //just to enter
    int userInput2, life = 3;
    int sorting1[5];
    const int bridgeA1 = 30;
    char bridgeeA1[bridgeA1];
    string status, lala, status2;
    
    cout<<"You are about to begin a glorious adventure! Press enter to continue"<<endl;
    cin.get(ch);
    cout<<"You are on a quest to find the mythical 'Daggers of Ice', which supposedly can grant its wielder a blissful and eternal life. You find a cave, with two entrances to it. Entrance A says 'Left side of the brain', while Entrance B says 'Right side of the brain.'\n"<<endl;
    cout<<"I want to go in through Entrance... (please input your choice)"<<endl;
    cin>>userInput1;
    
    cout<<"You have chosen Entrance A, now you must solve this equation"<<endl;
    if (userInput1 == 'a' || userInput1 == 'A'){
                    const int MIN_VALUE = 30; // Minimum value
            const int MAX_VALUE = 1000; // Maximum value
        

            // Variables
            int die1; // To hold the value of rand #1
            int die2; // To hold the value of rand #2
            int die3, die4, die5, die6, die7;
        
        
            do{
            // Get the system time.
            unsigned seed = time(0);
        
            // Seed the random number generator.
            srand(seed);
            die1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
            die2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
                
            die3 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
                die4 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
                die5 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
                die6 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
                die7 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
                
        cout << die1<< " + "<<die2<<" = ..."<<endl;
        cin>>userInput2;
            if (userInput2 == die1 + die2){
                status = "true";
                cout<<endl;
        cout<<"You have succesfully made it in. ";
            }
            else{
                status = "false";
                life -=1;
                cout<<"You have "<<life<<" lives remaining. Try again"<<endl;
            }
                if (life == 0){
                    cout<<"The curse of the cave has taken your life!"<<endl;
                    return 0;}
            }while (status == "false");
        
        cout<<"As you venture deeper into the cave, you come across a raging underground river. The opposite end of the river is frozen, however, and you can tell you're getting close to the Daggers of Ice. There are three ancient-looking wooden bridges crossing the river. Which one would you like to take?"<<endl<<endl;
        cout<<"I would like to risk my life crossing bridge..."<<endl;
        cin>>userInput3;
        int bridgeA1 [5] = {die3, die4, die5, die6, die7};
        if(userInput3 == 'a' || userInput3 == 'A'){
            do{
        

            for(int a = 0; a<5; a++)
        cout<<bridgeA1 [a]<<" ";
        
            cout<<"\nYou have chosen the first bridge. Now you must sort these numbers in descending order."<<endl;
                
                sort (bridgeA1, bridgeA1 + 5);
                for (int c = 4; c >=0; c--){
                    cout<<bridgeA1[c]<<" ";         //this is supposed to be the answer
                }

                int array2[5];
                for(int j=0; j<5; j++){
                    cin>>array2[j];
                }
                int counter=0;
                for(int k =0; k<5; k++){
                    if(bridgeA1[k] == array2[k])
                        counter++;
                }
                
                if(counter==5)
                    cout<<"The same";
                

                            }while (status2 == "false");
            
            }
        
        
    }
    
        
            return 0;
    }
