/* 
 * File:   OPHammer.h
 * Author: Hayden Rogers <hpr11@my.fsu.edu>
 *
 * Created on Feb 3, 2019
 *
 * I really like hammers, so I'm making one that's unfairy good.
 */

#include <string>
#include "Weapon.h"

#ifndef OPHAMMER_H
#define OPHAMMER_H

/**
 * Defines the behavior of a simple hammer (hitpoint = 4, damage is increased 
 * by 4x the armor points)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("OP hammer", 4.0) { // inspired by examples
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* OPHAMMER_H */
  
