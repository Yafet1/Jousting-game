#ifndef KNIGHT_H
#define KNIGHT_H
#include<iostream>
#include<string>
#include "Weapon.h"

using namespace std;

class Knight {
public:
  Knight(string tp, int hp, int sc,string nm, int stam);
  bool are_you_riding();
  bool are_you_exhausted();
  bool attack();
  void unhorse_yourself();
  void display();
  
private:
  Weapon weapon_in_hand;
  string name;
  int stamina;
  bool in_saddle;
};

#endif
