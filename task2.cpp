#include<iostream>
using namespace std;
float calDamage(int attack,int defence, string yourType,string oppType);

main()
{
	int attack, defence;
	string yourType, oppType;
	cout <<"Enter your Attack power: ";
	cin >> attack;
	cout << "Enter the opponent's defense power: ";
	cin >> defence;
	cout << "Enter Your Type: ";
	cin >> yourType;
	cout << "Enter the opponent's type:";
	cin >> oppType;
	cout<<  calDamage( attack, defence,  yourType, oppType);

}

float calDamage(int attack,int defence, string yourType,string oppType)
{
	float affective, damage;
	if (yourType == "grass" && oppType == "fire")
		affective = 0.5;
	else if (yourType == "fire" && oppType == "grass")
		affective = 2;

	else if (yourType == "water" && oppType == "electric")
		affective = 0.5;
	else if (yourType == "electric" && oppType == "water")
		affective = 2;

	else if (yourType =="water" && oppType =="fire")
	affective=2;
	else if (yourType =="fire" && oppType =="water")
	affective=0.5;

	else if (yourType =="grass" && oppType =="electric" || yourType =="electric" && oppType =="grass")
	affective=1;
	else if (yourType =="fire" && oppType =="electric" || yourType =="electric" && oppType =="fire")
	affective=1;

	else if (yourType =="fire" && oppType =="fire")
	affective=0.5;
	else if (yourType =="grass" && oppType =="grass")
	affective=0.5;
	else if (yourType =="water" && oppType =="water")
	affective=0.5;
	else if (yourType =="electric" && oppType =="electric")
	affective=0.5;

	damage = 50 * (attack / defence) * affective;
	return damage;

}