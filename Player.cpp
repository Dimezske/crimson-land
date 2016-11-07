#include "Player.h"
#include <iostream>
#include <string>
using namespace std;



Player::Player(string Life,string Name, int pHealth, int pHunger, int pThirst)
     {
         lifeStatus = Life;
         Life = "Alive";
             cout << Life << endl;
    
         pName = "Player";
         ptrpName = &pName;
         setPlayerName = *ptrpName;
         Name = setPlayerName;
             cout <<"NAME: " << Name << endl;
    
         ptrpHealth = &pBaseHealth;
         pHealth = *ptrpHealth;
             cout << "HEALTH: " << pHealth << endl;
    
         ptrpHunger = &pBaseHunger;
         pHunger = *ptrpHunger;
             cout << "HUNGER: " << pHunger << endl;
    
         ptrpThirst = &pBaseThirst;
         pThirst = *ptrpThirst;
             cout << "THIRST: " << pThirst  << endl;
     }

Player::~Player()
     {
	     std::cout << "The Player Has Died" << endl;
     }

Player::setPlayerHealth(string hpMarker,int Health)
     {
         cout << hpMarker;
         return *ptrpHealth = Health;
     }
     
Player::setPlayerHunger(string hunMarker,int Hunger)
     {
         cout << hunMarker;
         return *ptrpHunger = Hunger;   
     }
Player::setPlayerThirst(string thirstMarker,int Thirst)
     {
         cout << thirstMarker;
         return *ptrpThirst = Thirst;
     }
     
     Player::showHealth()
          {
                return pBaseHealth;
          }
     
     Player::showHunger()
          {
                return pBaseHunger;
          }
       
     Player::showThirst()
          {
                return pBaseThirst;
          }
               
              void Player::showEXP()
                    {
                        int EXPERIANCE;
                        int *EXP;
                        EXP = &EXPERIANCE;
                        cout << EXP;
                    }
                    
               void Player::showREP()
                      {
                       int REPUTATION;
                        int *REP;
                        REP = &REPUTATION;
                        cout << REP;   
                      }
                      
        Money::Money(int Dollars,int Centsa,int Centsb)
        {
            cout << "$$MoneySystem$$::::initilized::::" << endl;
            cout << "Money: ";
            ptrpCashDollars = &pBaseCashDollars;
            Dollars = *ptrpCashDollars ;
            cout << Dollars;
            ptrpCashCentsA = &pBaseCashCentsA;
            Centsa = *ptrpCashCentsA;
            cout <<"." << Centsa;
            ptrpCashCentsB = &pBaseCashCentsB;
            Centsb = *ptrpCashCentsB;
            cout << Centsb;
            cout << endl;
            
        }
        
        Money::~Money()
             {
              cout << "$$$$Money Gone$$$$$" << endl;
              *ptrpCashDollars = 0; *ptrpCashCentsA = 0; *ptrpCashCentsB = 0;
             }
             
        void Money::setMoney(int D,int A, int B)
             {
            
                  *ptrpCashDollars = pBaseCashDollars = D;
                  *ptrpCashCentsA  = pBaseCashCentsA = A;
                  *ptrpCashCentsB  = pBaseCashCentsB = B;
                    
                        // 0.*0
                    if (*ptrpCashCentsA < 0)
                         {
                              pBaseCashCentsA = 0;
                         }
                    else if (*ptrpCashCentsA > 9)
                         {
                             
                                   pBaseCashCentsA = 0;
                                   pBaseCashDollars++;
                         }
                    else 
                         {
                             pBaseCashCentsA = *ptrpCashCentsA;
                         }
                          
                            
                         // 0.0*
                    if (*ptrpCashCentsB < 0)
                         {
                             pBaseCashCentsB = 0;
                         }
                    else if (*ptrpCashCentsB > 9)
                         {
                            pBaseCashCentsB = 0;
                            pBaseCashCentsA++;
                         }
                    else 
                         {
                           pBaseCashCentsB = *ptrpCashCentsB;
                         }
             }    
    
        
        void Money::showMoney()
             {
             cout << "$" << pBaseCashDollars << "." << pBaseCashCentsA << pBaseCashCentsB;
             }