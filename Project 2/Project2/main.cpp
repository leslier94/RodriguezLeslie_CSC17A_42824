/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on June 8, 2016, 11:24 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include "PlayerOne.h"
#include "PlayerTwo.h"
#include "Characters.h"
#include "Health.h"
#include "PlayerLives.h"

using namespace std;
void playerChoice(int quarters, Health *you, PlayerOne *y, PlayerLives *h);
void compPlayer(Health *opp, PlayerLives *l);
bool coinFlip();
void displayArena();
void attack(Health *opp);
void oppAttack(Health *you);
/*
 * 
 */
int main(int argc, char** argv) {
    int quarters, arena;
    char c;
    char n;
    PlayerOne leslie;
    PlayerTwo mark;
    Health les;
    Health opp;
    Characters nightwing;
    Characters batman;
    Characters superman;
    Characters spiderman;
    string player;

    cout << "Welcome to Leslie's Awesome Battle " << endl;
    cout << "Each game costs 25 cents to play, enter amount that coresponds to how many times you would like to play" << endl;
    cout << "Example: 25 = 1 game, 50 = 2 games, 75 = 3 games, etc.. " << endl;
    cin >> quarters;
    Money mon(quarters);
    PlayerLives pOne (quarters);
    PlayerLives pTwo=pOne;
   // cout << "Opp " << pTwo.getLife() << endl;
    cout << "You entered " << mon.getMoney() << " you may play up to " << pOne.getLife() << " times" << endl;
    cout << "Would you like to play a friend or one of our highly trained opponents " << endl;
    cout << "A. 1 Player " << endl;
    cout << "B. 2 Players " << endl;
    cin >> n;
    if (n=='a')
    {
        cout << "You chose to play one of our highly trained opponents" << endl;
        cout << "Enter your name " << endl;
        cin >> player;
        leslie.setName(player);
        cout << "Welcome " << leslie.getName() << endl;    
        cout << "You have " << spiderman.getObjectCount() << " options to chose from " << endl;
        playerChoice (quarters, &les, &leslie, &pOne);
        cout <<"Chose the Arena " << endl;
        displayArena();
        while(pOne.getLife() > 0 ){
	cout << "Press C to continue " << endl;
	cin >> c;
        cout <<"**************************************" << endl;
        if (c == 'c')
	{
                compPlayer(&les, &pTwo);    
       // compPlayer(&leslie);
                les.health=50;
                opp.health=50;
                
                //les.health2=50;
              
                if (coinFlip()==true)
                {
                    
                    do{ 
                        
                        
                        attack(&les);
                        oppAttack(&les);
                    }while((les.health>0)||(opp.health>0));
                    if (les.health<=0)
                        {
                            pOne.loseLife();
                            cout << "Sorry you lost a life " << pOne.getLife() << endl;
                            cout <<"**************************************" << endl;
                            cout <<"**************************************" << endl;
                        }
                    else  if (opp.health<=0)
                        {
                            cout << "YOU WIN!" << endl;
                            leslie.upLevel();
                            cout << "Congratulations, you level up " << leslie.getLevel() << endl;
                            cout <<"**************************************" << endl;
                            cout <<"**************************************" << endl;
                            
                        }
                }
                else
                {
                    do{ 
                        
                        
                        attack(&les);
                        oppAttack(&les);
                    }while((les.health>0)||(opp.health>0));
                    if (les.health<=0)
                        {
                            pOne.loseLife();
                            cout << "Sorry you lost a life " << pOne.getLife() << endl;
                            cout <<"**************************************" << endl;
                            cout <<"**************************************" << endl;
                        }
                    else  if (opp.health<=0)
                        {
                            cout << "YOU WIN!" << endl;
                            leslie.upLevel();
                            cout << "Congratulations, you level up " << leslie.getLevel() << endl;
                            cout <<"**************************************" << endl;
                            cout <<"**************************************" << endl;
                        }
                    
                 } 
               // file.open("stats.txt", ios::out | ios::binary);
              //  cout << leslie.name << "'s final stats " << endl;
              //  cout << "Level: " << leslie.level << endl;
               // cout << "Lives : " << leslie.lives << endl;
               // file.write(leslie.name, leslie.level);
                //file.close();
                cout << "Your stats have been recorded " << endl;
              //  file.open("stats.txt", ios::in | ios::binary);
              //  file.read(leslie.name, leslie.level);
                cout << "Hope you enjoyed, have a nice day grading" << endl;
                }   
	else
	{
		cout << "Invalid entry, Goodbye " << endl;
	}
        }  
    }
    else 
    {
        cout << "You chose to play a friend, things are about to get interesting " << endl;
        cout << "Beware of possible loss of friendship" << endl;
        cout << "Enter player one name " << endl;
        cin >> player;
        cout <<"Enter player two name" << endl;
        leslie.setName(player);
        cout << "Welcome " << leslie.getName() << endl;    
        cout << "You have " << spiderman.getObjectCount() << " options to chose from " << endl;
        playerChoice (quarters, &les, &leslie, &pOne);
        cout <<"Chose the Arena " << endl;
        displayArena();
    }

        return 0;
        
        }
void displayArena()    
{
    char a;
    cout << "1. Grayson Manor " << endl;
    cout << "2. Gotham City " << endl;
    cout << "3. Planet Krypton" << endl;
    cout << "4. Forest Hills" << endl;
    cin >> a;
    if (a=='1')
    {
        cout << "You chose Grayson Manor " << endl;
        cout << "Grayson Manor is the home of Night Wing" << endl;
        cout << "His surroundings allow an advantage in his ability to fight " << endl;
        cout << "Goodluck in your quest of dominance " << endl;      
        
    }
    else if (a=='2')
    {
        cout << "You chose Gotham City " << endl;
        cout << "Gotham City is the home of Batman" << endl;
        cout << "His surroundings allow an advantage in his ability to fight " << endl;
        cout << "Goodluck in your quest of dominance " << endl;  
    }
    else if (a=='3')
    {
        cout << "You chose Planet Krypton " << endl;
        cout << "Planet Krypton is the home of Superman" << endl;
        cout << "His surroundings allow an advantage in his ability to fight " << endl;
        cout << "Goodluck in your quest of dominance " << endl;  
    }
    else if (a=='4')
    {
        cout << "You chose Forest Hills " << endl;
        cout << "Forest Hills is the home of Spiderman" << endl;
        cout << "His surroundings allow an advantage in his ability to fight " << endl;
        cout << "Goodluck in your quest of dominance " << endl;  
    }
}


void playerChoice(int quarters, Health *you, PlayerOne *y, PlayerLives *l)
{
	char choice;
        cout <<"**************************************" << endl;
        cout <<"**************************************" << endl;
        cout <<"**************************************" << endl;
	cout << "Choose your player " << endl;
	cout << "1. Night Wing" << endl;
	cout << "2. Batman " << endl;
	cout << "3. Superman" << endl;
	cout << "4. Spiderman " << endl;
	cin >> choice;
        cout <<"**************************************" << endl;
        cout <<"**************************************" << endl;
        cout <<"**************************************" << endl;
	if (choice == '1')
	{
		cout << "You chose Night Wing" << endl;
	}
	else if (choice == '2')
	{
		cout << "You chose Batman" << endl;
	}
	else if (choice == '3')
	{
	cout << "You chose Superman" << endl;
	}
        else if (choice =='4')
	{
		cout << "You chose Spiderman" << endl;

	}
        else 
        {
            cout << "Invalid entry!" << endl;
        }
       you->health=50;
       
	cout << "Level: " << y->getLevel() << endl;
	cout << "Health: " << you->health << endl;
	cout << "Lives: " << l->getLife() << endl;
        cout <<"**************************************" << endl;
        cout <<"**************************************" << endl;
	
}
void compPlayer(Health *opp, PlayerLives *l)
{
	srand(time(NULL));
	string comPlayer[4] = { "Night Wing", "Batman", "Superman", "Spiderman" };
	int ran = rand() % 4;
	cout << "Your opponent is " << comPlayer[ran] << endl;
	cout << comPlayer[ran] << " stats" << endl;
        opp->health=50;
	cout << "Health : " << opp->health << endl;
        cout << "Lives: " << l->getLife() << endl;
        cout <<"**************************************" << endl;
        cout <<"**************************************" << endl;
}
bool coinFlip()
{
	char flip;
	char coin;
	cout << "Pick heads or tails to see who will go first " << endl;
	cin >> flip;
	if (rand() % 2 == 0)
		coin = 'H';
	else
		coin = 'T';
	if (toupper(flip) == coin)
	{
		cout << "You chose right, you start" << endl;
                cout <<"**************************************" << endl;
                cout <<"**************************************" << endl;
                
		return true;
	}
	else
	{
		cout << "You chose wrong, sorry" << endl;
                cout <<"**************************************" << endl;
                cout <<"**************************************" << endl;
  
		return false;
        }
}
void attack(Health *opp)
{
	char att;
	srand(time(NULL));
	cout << "Choice of attack " << endl;
	cout << "1. Punch " << endl;
	cout << "2. Kick " << endl;
	cout << "3. Special " << endl;
	cin >> att;
	if (att == '1')
	{
		cout << "You chose punch " << endl;
		if (rand() % 6 != 0)
		{
			cout << "Your punch landed!" << endl;
			opp->health -=10;
			cout << "Opponent's Health : " << opp->health << endl;
                        cout <<"**************************************" << endl;
                        cout <<"**************************************" << endl;
                       
		}
		else
		{
			cout << "Your punch did not land " << endl;
                        cout << "Opponent's Health : " << opp->health << endl;
                        cout <<"**************************************" << endl;
                        cout <<"**************************************" << endl;
                        
		}
	}
	else if (att == '2')
	{
		cout << "You chose kick " << endl;
		if (rand() % 4 != 0)
		{
			cout << "Your kick landed!" << endl;
			opp->health -= 15;
			cout << "Opponent's Health : " << opp->health << endl;
                        cout <<"**************************************" << endl;
                        cout <<"**************************************" << endl;
		}
		else
		{
			cout << "Your punch did not land " << endl;
                        cout << "Opponent's Health : " << opp->health << endl;
                        cout <<"**************************************" << endl;
                        cout <<"**************************************" << endl;
		}
	}
	else 
	{
		cout << "You chose special attack " << endl;
		if (rand() % 2 != 0)
		{
			cout << "Your attack landed!" << endl;
			opp->health -= 20;
			cout << "Opponent's Health : " << opp->health << endl;
                        cout <<"**************************************" << endl;
                        cout <<"**************************************" << endl;
		}
		else
		{
			cout << "Your attack did not land " << endl;
                        cout << "Opponent's Health : " << opp->health << endl;
                        cout <<"**************************************" << endl;
                        cout <<"**************************************" << endl;
		}
	}
        
}
void oppAttack(Health *you)
{
	srand(time(NULL));
	char attack[3] = { '1', '2', '3' };
	int index = rand() % 3;
     
        if (attack[index] == '1')
	{
		cout << "Your opponent chose punch" << endl;
		if (rand() % 6 != 0)
		{
			cout << "Punch landed!" << endl;
			you->health -= 10;
			cout << "Your Health : " << you->health << endl;
                        cout <<"**************************************" << endl;
                        cout <<"**************************************" << endl;
		}
		else
		{
			cout << "Punch did not land " << endl;
                        cout << "Your Health : " << you->health << endl;
                        cout <<"**************************************" << endl;
                        cout <<"**************************************" << endl;
		}
	}
	else if (attack[index] == '2')
	{
		cout << "Your opponent chose kick" << endl;
		if (rand() % 4 != 0)
		{
			cout << "Kick landed!" << endl;
			you->health -= 15;
			cout << "Your Health : " << you->health << endl;
                        cout <<"**************************************" << endl;
                        cout <<"**************************************" << endl;
		}
		else
		{
			cout << "Kick did not land " << endl;
                        cout << "Your Health : " << you->health << endl;
                        cout <<"**************************************" << endl;
                        cout <<"**************************************" << endl;
                       
		}
	}
	else
	{
		cout << "Your opponent chose special attack" << endl;
		if (rand() % 2 != 0)
		{
			cout << "Attack landed!" << endl;
			you->health -= 20;
			cout << "Your Health : " << you->health << endl;
                        cout <<"**************************************" << endl;
                        cout <<"**************************************" << endl;
		}
		else
		{
			cout << "Attack did not land " << endl;
                        cout << "Your Health : " << you->health << endl;
                        cout <<"**************************************" << endl;
                        cout <<"**************************************" << endl;
		}
	}
     
}