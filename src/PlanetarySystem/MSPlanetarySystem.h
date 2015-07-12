//
//  MSPlanetarySystem.h
//  Planets
//
//  Created by Miquel Àngel Soler on 12/7/15.
//
//

#pragma once

#ifndef __Planets__MSPlanetarySystem__
#define __Planets__MSPlanetarySystem__

#include "MSAstronomicalObject.h"

class MSPlanetarySystem
{
public:

    MSPlanetarySystem() {};
    MSPlanetarySystem(const MSAstronomicalObject &star);

    void addAstronomicalObject(const MSAstronomicalObject &astronomicalObject);

    void update();
    void draw();

private:

    MSAstronomicalObject            star;
    vector<MSAstronomicalObject>    astronomicalObjects;
};

#endif /* defined(__Planets__MSPlanetarySystem__) */
