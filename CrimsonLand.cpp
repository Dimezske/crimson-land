// CrimsonLand.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include <conio.h>
// Class Files
#include "Player.h"
#include "Shop.h"
#include "Inventory.h"
using namespace std;

Inventory *sInventory = new Inventory;
Money *sMoney = new Money(0,0,0);

Player *sPlayer = new Player("Alive","Player",100,50,40);



int main()
     {    
          
          string input;
          cin >> sPlayer->pName;
          cout << "NAME: " << sPlayer->pName << endl;
          cout << sPlayer->setPlayerHealth("HEALTH: ",120) << endl;
          cout << sPlayer->setPlayerHunger("HUNGER: ",80) << endl;
          cout << sPlayer->setPlayerThirst("THIRST: ",50) << endl;

          
          sMoney->setMoney(1,0,0);
          sMoney->showMoney();
          cout << endl;
          
          char inventoryButton = getch();

      switch(inventoryButton)
           {
      case 'i':
      sInventory->showInventory();
      break;
            } 
            
            
         bool wait = true;
               while (wait == true)
                     {
                  
                     }

     }