/* 
 * File:   OPHammer.cpp
 * Author: Hayden Rogers <hpr11@my.fsu.edu>
 *
 * Created on Feb 3, 2019
 */

#include "OPHammer.h"

double OPHammer::hit(double armor) {

	double damage = hitPoints - armor;

	damage += 4 * armor;


	if (damage < 0)
		return 0;


    return damage;
}
 
 
 
