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
    mStar = _star;

    mCamera.setTarget(mStar.m3DObject);
    mCamera.setDistance(float(mStar.getRadius() * DEFAULT_DISTANCE_FACTOR));
    mCamera.setNearClip(0.001f);
    mCamera.setFarClip(float(mStar.getRadius() * FAR_CLIP_FACTOR));
}

void MSPlanetarySystem::addAstronomicalObject(const MSAstronomicalObject &astronomicalObject)
{
    mAstronomicalObjects.push_back(astronomicalObject);
}

void MSPlanetarySystem::update()
{
    mStar.update();
    unsigned long numObjects = mAstronomicalObjects.size();
    for (int i=0; i<numObjects; i++)
        mAstronomicalObjects[i].update();
}

void MSPlanetarySystem::draw()
{
    ofEnableDepthTest();

    mCamera.begin();
    {
        mStar.draw();
        unsigned long numObjects = mAstronomicalObjects.size();
        for (int i=0; i<numObjects; i++)
            mAstronomicalObjects[i].draw();
    }
    mCamera.end();

    ofDisableDepthTest();
}
