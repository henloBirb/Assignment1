/* 
 * File:   SimpleHammer.h
 * Author: Hayden Rogers <hpr11@my.fsu.edu>
 *
 * Created on Feb 3, 2019
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer (hitpoint = 25, ignores armor if 
 * armor points)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple hammer", 25.0) { // inspired by examples
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */
 
