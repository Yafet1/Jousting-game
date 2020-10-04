#include<iostream>
#include "Weapon.h"
using namespace std;

#include "Random.h"

Weapon::Weapon(string tp, int hp, int sc)
:type(tp),hit_percentage(hp),stamina_cost(sc)
{
}
bool Weapon::did_I_hit()
{
  Random r(1,100);
  int the_rand_num=r.get();
  if (the_rand_num <=hit_percentage){
    return true;
  }
  else {
    return false;
  }
}

int Weapon::what_is_stamina_cost()
{
  return stamina_cost;
}


void Weapon::display(){
  cout << type;
  cout << " that requires "<< stamina_cost;
  cout << " stamina and has a "<< hit_percentage;
  cout << "% chance to hit." << endl;
}
