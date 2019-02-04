/* 
 * File:   CrazyRandomSword.cpp
 * Author: Hayden Rogers <hpr11@my.fsu.edu>
 *
 * Created on Feb 3, 2019
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {

	double damage = hitPoints - armor;

	damage += floor(2 + rand()%(armor/3));


	if (damage < 0)
		return 0;


    return damage;
}
 
 
