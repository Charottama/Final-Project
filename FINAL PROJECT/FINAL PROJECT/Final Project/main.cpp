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
#include "SumAdder.hpp"
#define MAX_VALUE 1000
#define MIN_VALUE 30
using namespace std;

unsigned int seed;

int random_number(){
    return ((rand()) % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
}

int RPS(int &life, bool &stillAlive);

int main(int argc, const char * argv[]) {
    
    char userInput1, userInput3, userInput4;
    char ch;                //just to enter
    int userInput2, life = 3;
    string status, riddle;
    int n, answer;
    bool stillAlive = true;
    int die1; // To hold the value of rand #1
    int die2; // To hold the value of rand #2
    int die3, die4, die5, die6, die7;
    
    
    cout<<"You are about to begin a glorious adventure! Press enter to continue"<<endl;
    cin.get(ch);
    cout<<"You are on a quest to find the mythical 'Daggers of Ice', which supposedly can grant its wielder a blissful and eternal life."<<endl;
    cin.get(ch);
    cout<< "You find a cave, with two entrances to it. Entrance A says 'Left side of the brain', while Entrance B says 'Right side of the brain."<<endl;
    //cin.get(ch);
    cout<<"I want to go in through Entrance... (please input your choice)"<<endl;
    cin>>userInput1;
    
    if (userInput1 == 'a' || userInput1 == 'A'){
        
        cout<<"You have chosen Entrance A, now you must solve this equation"<<endl;

        do{
            seed=time(0);
            srand(seed);
            // Seed the random number generator.
            die1 = random_number();
            die2 = random_number();
                
        cout << die1<< " + "<<die2<<" = ..."<<endl;
        cin>>userInput2;
            
            if (userInput2 == die1 + die2){
                status = "true";
                cout<<"You have succesfully made it in. "<<endl;
            }
            
            else{
                do{
                    status = "false";
                    life--;
                    if (life == 0){
                        cout<<"The curse of the cave has taken your life!"<< endl;
                        stillAlive = false;
                        break;
                    }
                    
                    else
                        cout<<"\nYou have "<<life<<" lives remaining. Try again"<<endl;
                    
                        die1 = random_number();
                        die2 = random_number();
                    
                        cout << die1<< " + "<<die2<<" = ..."<<endl;
                        cin>>userInput2;
                        if(userInput2 == die1 + die2) break;
                    }while(life > 0);
                }
                status = "true";
        }
        while (life > 0 && status == "false");
        
        if (stillAlive == true){
        cout<<"\nAs you venture deeper into the cave, you come across a raging underground river."<<endl;
            cin.ignore();
        cin.get(ch);
        cout<<"The opposite end of the river is frozen, however, and you can tell you're getting close to the Daggers of Ice."<<endl;
        cin.get(ch);
        cout<<"There are three ancient-looking wooden bridges crossing the river. Which one would you like to take?"<<endl;
        cout<<"I would like to risk my life crossing bridge... \n(Enter A, B, or C)"<<endl;
        cin>>userInput3;
        
        if(userInput3 == 'a' || userInput3 == 'A'){
            cout<<"\nYou have chosen the first bridge. Along the way, you see that some planks are out of place. To reassemble them, their are numbers on them, and you can sort them in descending order."<<endl;
            cin.ignore();
            cin.get(ch);
            bool flag;
            do{
                
//********************************************************************************************************
                seed=time(0);
                srand(seed);
                die3 = random_number();
                die4 = random_number();
                die5 = random_number();
                die6 = random_number();
                die7 = random_number();
                int bridgeA1 [5] = {die3, die4, die5, die6, die7};
                
                for(int a = 0; a<5; a++)
                    cout<<bridgeA1 [a]<<" ";
                cout<<endl;
                //seeding (and reseeding) and cout the array
//********************************************************************************************************

                sort (bridgeA1, bridgeA1 + 5);
                int ans[5];
                for(int i=0;i<5;i++){
                    cin>>ans[i];
                }                           //input answer
                cout<<endl;
                
                //checking
                flag=true;                  //this is presumption, temporarily true
                
                for(int i=0;i<5;i++){
                    if(ans[i] != bridgeA1[4-i]){                //DESCENDING
                        flag=false;
                        break;
                    }
                }
                
                if(flag==false) {
                    life--;
                    cout<<"You have "<<life<<" lives remaining. Try again"<<endl;
                    if (life == 0){
                        cout<<"The curse of the cave has taken your life!"<<endl;
                        stillAlive = false;
                        break;
                    }
                }
                
                else{
                    cout<<"Oops, you chose the wrong bridge. The wooden planks broke off and you fall to your death!"<<endl;
                    break;
                }
            }while (flag == false);
        }
        
            else if (userInput3 == 'b' || userInput3 == 'B')
            {
                bool flagB;
            sumAdder sumz;
                cout<<"\nBridge B is protected by very sharp stalactites. There are some scratcing however, saying you to shout a number."<<endl;
                cin>>n;
                sumz.setInitialInput(n);
                cout<<"Therefore, n = "<<n<<endl;
    
                do{
                cout<<"The formula is 1 + 2 + 3 ... + n. Now you must solve it!"<<endl;
                cin>>answer;
                    flagB = true;
                    
                if (answer == sumz.getTotSum()){
                    cout<<"Correct!"<<endl<<endl;
                    cout<<"The bridge you chose leads to an island on an underground lake. ";
                    cin.ignore();
                    cin.get(ch);
                    cout<<"At the center you find the Daggers of Ice! You attempt to use it by swinging it, but it turns out to be a fake. ";
                    cin.get(ch);
                    cout<<"The sword crumbles in your hand, and you are left in shock that this whole adventure was meaningless."<<endl;
                }
                    
                else {
                    flagB = false;
                    life--;
                    if (life == 0){
                        cout<<"The curse of the cave has taken your life!"<< endl;
                        break;
                    }
                        else
                            cout<<"\nYou have "<<life<<" lives remaining. Try again"<<endl;
                }
                }while (flagB == false);
            }
        
        else if (userInput3 == 'c' || userInput3 == 'C')
        {
            cout << "\nThe bridge you crossed was relatively secure. You climbed down a cliff and you find a doorway. ";
            cin.ignore();
            cin.get(ch);
            cout<<"After looking around, you find that the chamber is empty. Refusing to walk home empty-handed, you rubbed the walls and suddenly the wall panels move around, opening a very narrow tunnel. At the end of the tunnel, you find a golem sentinel." << endl;
            cin.get(ch);
            cout<<"'Greetings, Brave One' its deep voice taking you aback. 'I know what you seek, but first you must play a Rock-Paper-Scissors with me, and you must win.'"<<endl<<endl;

            
            int flagWin = 3;
            while (flagWin != 1) {
               flagWin = RPS(life, stillAlive);
                if (flagWin == 3){
                    life --;
                    if (life == 0){
                        cout<<"The curse of the cave has taken your life!"<< endl;
                        stillAlive = false;
                    }
                    else
                        cout<<"\nYou have "<<life<<" lives remaining. Try again"<<endl;
                    }
                
                if (flagWin == 1){
                    cout<<"Congratulations, you have now become the new champion of Rock-Paper-Scissors. And now, I shall give you your prize. The Daggers of Ice!!'"<<endl;
                }
            }
        }
    }
    }
    
    
    
//********************************************************************************************************
    
    
    
    if (userInput1 == 'b' || userInput1 == 'B'){
        bool flagC = false;
        cout<<"\nYou have chosen Entrance B, but to gain entrance you must solve this riddle"<<endl;
        cin.ignore();
        cin.get(ch);
        
        do{
            cout<<"'When you have me, you feel like sharing me. But, if you do share me, you don't have me. What am I?'"<<endl;
        getline (cin, riddle);
            
        if (riddle == "secret" || riddle == "a secret"){
            cout<<"\nThe doorway opened!";
            flagC = true;
        }
            
            else
            {
                life--;
                if (life == 0){
                    cout<<"The curse of the cave has taken your life!"<< endl;
                    stillAlive = false;                 //player dies
                    break;
                }
                
                else
                    cout<<"\nYou have "<<life<<" lives remaining. Try again"<<endl;
                }
        }while (flagC == false && life > 0);
        
        if (stillAlive == true)
        {
            cout<<"\nAfter entering the cave, you find a fork. Which path will you take?"<<endl;
            cout<<"(Enter A to take the left pathway, B to take the right, and C to exit.)"<<endl;;
            cin>>userInput4;
            
            
            if (userInput4 == 'a' || userInput4 == 'A')
            {
                bool flagD;
                cout<<"\nYou chose the left pathway. ";
                cout<<"After a long walk you see a bat. You are very shocked to see that the bat can talk.";
                cin.get(ch);
                cout<<"It wants you to sort some numbers, or else it will drink your blood. And remember, in ascending order!"<<endl;
                cin.get(ch);
                do{
                    
//********************************************************************************************************
                    seed=time(0);
                    srand(seed);
                    die3 = random_number();
                    die4 = random_number();
                    die5 = random_number();
                    die6 = random_number();
                    die7 = random_number();
                    int bridgeA1 [5] = {die3, die4, die5, die6, die7};
                    
                    for(int a = 0; a<5; a++)
                        cout<<bridgeA1 [a]<<" ";
                    cout<<endl;
                    //seeding (and reseeding) and cout the array
//********************************************************************************************************
                    
                    sort (bridgeA1, bridgeA1 + 5);
                    int ans[5];
                    for(int i=0;i<5;i++){
                        cin>>ans[i];
                    }                           //input answer
                    
                    cout<<endl;
                    
                    //checking
                    flagD=true;                  //this is presumption, temporarily true
                    
                    for(int i=0;i<5;i++){
                        if(ans[i] != bridgeA1[i]){              //ASCENDING
                            flagD=false;
                            break;
                        }
                    }
                    
                    if(flagD==false) {
                        life--;
                        
                        if (life == 0){
                            cout<<"The curse of the cave has taken your life!"<<endl;
                            stillAlive = false;
                            break;
                        }
                        
                        else
                            cout<<"You have "<<life<<" lives remaining. Try again"<<endl;
                    }
                    
                    else{
                        cout<<"Being so kind to the bat that you help soving its problem, it decides to return the favor. It shows you the way to the Daggers of Ice!"<<endl;
                        cin.ignore();
                        cin.get(ch);
                        cout<<"Once you touched the Daggers, the cave reveals a hidden passage to the Fountain of Life, and around it, are sacks of gold!"<<endl;
                        break;
                    }
                }while (flagD == false);
            }
            
            else if (userInput4 == 'b' || userInput4 == 'B')
            {
                bool flagZ;
                sumAdder sumz;
                
                cout<<"\n'Inscribed along the walls, you find a message that says 'enter a number, or I will cruble while you walk under me."<<endl;
                cin>>n;
                sumz.setInitialInput(n);
                cout<<"Therefore, n = "<<n<<endl;
                
                do{
                    cout<<"The formula is 1 x 2 x 3 ... x n. Now you must solve it!"<<endl;
                    cin>>answer;
                    flagZ = true;
                    //cout<<sumz.multiplicResult();
                    if (answer == sumz.multiplicResult()){
                        cout<<"Correct!"<<endl<<endl;
                        cout<<"With heart beating so fast, you decided to go deeper into the cave.";
                        cin.ignore();
                        cin.get(ch);
                        cout<<"After spending more than 4 hours exploring, you begin to realize that you have been walking in circles. You gave up, and left the cave"<<endl;
                    }
                    
                    else {
                        flagZ = false;
                        life--;
                        if (life == 0){
                            cout<<"The curse of the cave has taken your life!"<< endl;
                            break;
                        }
                        
                        else
                            cout<<"\nYou have "<<life<<" lives remaining. Try again"<<endl;
                    }
                }while (flagZ == false);
            }
            
            else if (userInput4 == 'c' || userInput4 == 'C')
            {
                cout<<"\nYou chose to leave the cave. You can start to see the light of the outside world, but suddenly an old man reveals himself from behind a big boulder.";
                cin.ignore();
                cin.get(ch);
                cout<<"\n'Will you please play a game of Rock-Paper-Scissors with me? But please let me win, I haven't played for a very long time."<<endl;;
                int flagWin = 1;
                while (flagWin != 3) {
                    //flagWin = RPS(life, stillAlive);
                    if (flagWin == 1){
                        life--;
                        if (life == 0){
                            cout<<"The curse of the cave has taken your life!"<< endl;
                            stillAlive = false;
                        }
                        
                        else
                            cout<<"\nYou have "<<life<<" lives remaining. Try again"<<endl;
                    }
                    
                    if (flagWin == 3){
                        cout<<"\nAfter losing on purpose to the old man, he suddenly stabs you. You give your best to fight back, but you are bleeding too severely and you black out!"<<endl;
                    }
                }
            }
            }
    }
            cout<<endl;
            return 0;
    }

int RPS(int &life, bool &stillAlive){
    
    char userChoice;
    int computer;
    int flagwin = 0;
    
    
        cout << "Enter A for Rock, B for Paper, or C for scissors"<<endl;
        
        cin >> userChoice;
        userChoice = tolower(userChoice);
        switch (userChoice) {
            case 'a':
                cout<<"you chose rock"<<endl;
                break;
                
            case 'b':
                cout<<"you chose paper"<<endl;
                break;
                
            case 'c':
                cout<<"you chose scissors"<<endl;
                break;
                
            default:
                break;
        }
        
        
        srand(time(NULL));
        
        computer = rand() % 10 + 1;
        //Computer "brain"
        
        if (computer <= 3)
        {
            
            cout << "Computer chose: Rock" << endl;
            
        }
        
        else if (computer <= 6)
        {
            
            cout << "Computer chose: Paper" << endl;
            
        }
        else if (computer >= 7)
        {
            
            cout << "Computer chose: Scissors" << endl;

            
        }
        
        //Determines winner
        //Rock
        if (userChoice == 'a' && computer <= 3)
        {
            
            cout << "It's a tie!\n\n";
            flagwin = 2;
            
        }
        else if (userChoice == 'a' && computer <= 6)
        {
            
            cout << "You lose!\n";
            flagwin = 3;
            
        }
        else if (userChoice == 'a' && computer >= 7)
        {
            
            cout << "You win!\n\n";
            flagwin = 1;
            
        }
    
        //Paper
        if (userChoice == 'b' && computer <= 3)
        {
            
            cout << "You win!\n\n";
            flagwin = 1;
        }
    
        else if (userChoice == 'b' && computer <= 6)
        {
            
            cout << "It's a tie!\n\n";
            flagwin = 2;
            
        }
        else if (userChoice == 'b' && computer >= 7)
        {
            
            cout << "You lose!\n";
            flagwin = 3;
    
        }
    
        //Scissors
        if (userChoice == 'c' && computer <= 3)
        {
            
            cout << "You lose!\n";
            flagwin = 3;
            
        }
    
        else if (userChoice == 'c' && computer <= 6)
        {
            
            cout << "You win!\n\n";
            flagwin = 1;
            
        }
        else if (userChoice == 'c' && computer >= 7)
        {
            
            cout << "It's a tie!\n\n";
            flagwin = 2;
            
        }
    
    return flagwin;
        
        }

