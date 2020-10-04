#ifndef WEAPON_H
#define WEAPON_H
#include<iostream>
#include<string>
using namespace std;

class Weapon {
public:
  Weapon(string tp, int hp, int sc);
  int what_is_stamina_cost();
  bool did_I_hit();
  void display();
private:
  string type;
  int hit_percentage;
  int stamina_cost;

};

#endif
