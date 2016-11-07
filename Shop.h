#pragma once

class Shop
{
protected:
     int itemAmount;
     
public:
    Shop();
    ~Shop();
    void Buy();

};

class BakeryShop : protected Shop
{
private:
      int bshopItemAmount;
protected:
     buyBread();
     buyDonut();
     buyPizza();
public:

};

class WeaponsStore : protected Shop
{
private:
     int wstoreItemAmount;
protected:
     buyKnife();
     buyKatana();
     buyKalisticks();
public:

};

class GunShop : protected Shop
{
private:

protected:

public:    
};