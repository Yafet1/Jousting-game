#include<iostream>
#include "Weapon.h"
#include "Knight.h"
#include "Random.h"
#include<string>

using namespace std;

int main ()
{
  string tp;
  int hp;
  int sc;
  string name;
  int stamina;



  cout << "What type weapon is the first knight using?" <<endl;
  cin >>tp;
  cout << "What is the hit percentage of the weapon?" <<endl;
  cin>>hp;
  cout << "How much stamina does the weapon cost with each use?" <<endl;
  cin>>sc;
  cout << "What is the name of the first knight ?" <<endl;
  cin >> name;

  cout << "What is the first knight stamina?" << endl;
  cin>> stamina;

  Knight k1(tp,hp, sc,name,stamina);

  cout << "What type of weapon is the second knight using ?" <<endl;
  cin >>tp;
  cout << "What is the hit percentage of the weapon ?" <<endl;
  cin>>hp;
  cout << "How much stamina does the weapon cost with each use?" <<endl;
  cin>>sc;
  cout << "What is the name of the second knight ?" <<endl;
  cin >> name;

  cout << "What is the second knight stamina?" << endl;
  cin>> stamina;

  Knight k2(tp,hp, sc,name,stamina);

  cout << "Your jousting contestants:"<<endl;
  cout << "--------------------------"<<endl;
  k1.display();
  k2.display();
  cout << endl << endl;
  cout << "Let thy joust begin!"<<endl;
  int round_number=1;



  while(k1.are_you_riding()==true && k2.are_you_riding()==true &&
  k1.are_you_exhausted()==false && k2.are_you_exhausted()==false)
  {

    bool knight_has_hit=k1.attack();
    if(knight_has_hit==true)
    k2.unhorse_yourself();

    knight_has_hit=k2.attack();
    if(knight_has_hit==true)
    k1.unhorse_yourself();

    cout << "Results of round " << round_number++ << endl;
    cout << "----------------"<<endl;


    k1.display();
    k2.display();
    cout << endl;

  }

}
