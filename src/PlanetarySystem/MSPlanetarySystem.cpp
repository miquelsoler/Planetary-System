//
//  MSPlanetarySystem.cpp
//  Planets
//
//  Created by Miquel Àngel Soler on 12/7/15.
//
//

#include "MSPlanetarySystem.h"

const float DEFAULT_DISTANCE_FACTOR = 10.0f;
const float FAR_CLIP_FACTOR = 100.0f;

MSPlanetarySystem::MSPlanetarySystem(const MSAstronomicalObject &_star)
{
    star = _star;

    camera.setTarget(star.m3DObject);
    camera.setDistance(star.getRadius() * DEFAULT_DISTANCE_FACTOR);
    camera.setNearClip(0.001f);
    camera.setFarClip(star.getRadius() * FAR_CLIP_FACTOR);
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
    camera.begin();
    {
        star.draw();
        unsigned long numObjects = astronomicalObjects.size();
        for (int i=0; i<numObjects; i++)
            astronomicalObjects[i].draw();
    }
    camera.end();
}
