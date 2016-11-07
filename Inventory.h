#pragma once
#include "Player.h"

using namespace std;


Inventory::Inventory()
{
    cout << "###Inventory###::::Initilized::::" << endl;
}

Inventory::~Inventory()
{
    cout << "#I deleted" << endl;
}
void Inventory::showInventory()
{         
          Player *sPlayer = new Player("Alive","Player",100,50,40);
          Money *sMoney = new Money(0,0,0);
          cout  << "|---------------------------:::::-Inventory-:::::-------------------------------" << endl;
          cout  << "|    Player Health:  " << sPlayer->showHealth() << " HP   | "; 
                   sMoney->showMoney(); cout << " ";
                   sPlayer->showEXP();
                   sPlayer->showREP();cout << endl;
           cout << "|"<<endl;
           cout << "|    <stats> - to view players statistics";
           cout << "|    <items> - to view players items";
          
               bool wait = true;
               while (wait == true)
                     {
                  
                     } 
}