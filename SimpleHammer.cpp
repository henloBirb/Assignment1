/* 
 * File:   SimpleHammer.cpp
 * Author: Hayden Rogers <hpr11@my.fsu.edu>
 *
 * Created on Feb 3, 2019
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {

	double damage = hitPoints - armor;

	if (armor < 30)
		damage = hitPoints;

	if (damage < 0)
		return 0;


    return damage;
}
 
