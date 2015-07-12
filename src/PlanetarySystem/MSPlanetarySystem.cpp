//
//  MSPlanetarySystem.cpp
//  Planets
//
//  Created by Miquel Àngel Soler on 12/7/15.
//
//

#include "MSPlanetarySystem.h"

MSPlanetarySystem::MSPlanetarySystem(const MSAstronomicalObject &_star)
{
    star = _star;
}

void MSPlanetarySystem::addAstronomicalObject(const MSAstronomicalObject &astronomicalObject)
{
    astronomicalObjects.push_back(astronomicalObject);
}

void MSPlanetarySystem::update()
{
    star.update();
    unsigned long numObjects = astronomicalObjects.size();
    for (int i=0; i<numObjects; i++)
        astronomicalObjects[i].update();
}

void MSPlanetarySystem::draw()
{
    star.draw();
    unsigned long numObjects = astronomicalObjects.size();
    for (int i=0; i<numObjects; i++)
        astronomicalObjects[i].draw();
}
