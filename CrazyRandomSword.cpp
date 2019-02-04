/* 
 * File:   CrazyRandomSword.cpp
 * Author: Hayden Rogers <hpr11@my.fsu.edu>
 *
 * Created on Feb 3, 2019
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {

	srand(time(0));

	double damage = hitPoints - armor;

	int armorBonus = floor(armor/3);

	damage += 2 + rand()%armorBonus;


	if (damage < 0)
		return 0;


    return damage;
}
 
 
