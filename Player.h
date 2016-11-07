#pragma once
#include <string>

using namespace std;
class Player
{
private:
	// These are the Players Normalities Gui bars.
	string lifeStatus;
     int pBaseHealth = 100;
     int *ptrpHealth;
	 int pBaseHunger = 50;
	 int *ptrpHunger;
	 int pBaseThirst = 40;
	 int *ptrpThirst;

// ***TODO Stats
     int pBaseStrength = 0;
     int *ptrpStrength;
     int pBaseDextarity = 0;
     int *ptrpDextarity;
      
public:
    
    string setPlayerName;
    string pName;
    string *ptrpName;
          
	Player(string Life,string Name, int pHealth, int pHunger, int pThirst);
	~Player();
    
    int setPlayerHealth(string hpMarker,int Health);
    int setPlayerHunger(string hunMarker,int Hunger);
    int setPlayerThirst(string thirstMarker,int Thirst);
    
    int showHealth();
    int showHunger();
    int showThirst();
    void showEXP();
    void showREP();
}; 

class Money 
{
private:
     int pBaseCashDollars = 0;
     int *ptrpCashDollars;
     int pBaseCashCentsA = 0;
     int *ptrpCashCentsA;
     int pBaseCashCentsB = 0;
     int *ptrpCashCentsB;
     
     int newCentsA;
     int newCentsB;
     
public:
     Money(int Dollars,int Centsa,int Centsb);
    ~Money();
        void setMoney(int D,int A,int B);
        void showMoney();
        
};

class Inventory
{
public: 
     Inventory();
     ~Inventory();   
     void showInventory();
};


// ***TODO BANKING SYSTEM***