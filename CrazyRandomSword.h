/* 
 * File:   CrazyRandomSword.h
 * Author: Hayden Rogers <hpr11@my.fsu.edu>
 *
 * Created on Feb 3, 2019
 */

#include <string>
#include <time.h>
#include <cmath>
#include <stdlib.h>
//#include <random>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a simple hammer (hitpoint = rand between 7-100, ignores rand # 
 * of armor points ranging between 2 and 1/3 of the armor points)
 */
class CrazyRandomSword : public Weapon {
public:
	//std::srand(std::time(0));

    CrazyRandomSword() : Weapon("Crazy random sword", 7 + ( rand() % 93 ) ) { // inspired by examples
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */
 
 
