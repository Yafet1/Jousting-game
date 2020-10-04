#include<iostream>
#include "Knight.h"
#include "Weapon.h"

using namespace std;

Knight::Knight(string tp, int hp, int sc,string nm, int stam)
:name(nm), stamina(stam), in_saddle(true), weapon_in_hand(tp, hp, sc)
{
}
bool Knight::are_you_riding()
{
  if(in_saddle==true)
  return true;
  else
  return false;
}
bool Knight::are_you_exhausted()
{
  if (stamina<=0)
  return true;
  else
  return false;
}

bool Knight::attack()
{
  int stam_cost=weapon_in_hand.what_is_stamina_cost();
  stamina-=stam_cost;
  bool result=weapon_in_hand.did_I_hit();
  return result;

}
void Knight::unhorse_yourself()
{
  if (in_saddle==false ){

  }
}
void Knight::display()
{
  cout << name << " is ";
  if(stamina > 0)
  cout <<"not exhausted (stamina=" << stamina << ") and ";
  if(stamina <=0){
    cout << "exhausted (stamina=" << stamina << ") and ";
    cout <<"has been knocked off of the horse." << endl;
  }
  else
  cout << "is still on the horse." << endl;
  cout << name << " is using: ";
  weapon_in_hand.display();
}
