//
//  MSPlanet.h
//  Planets
//
//  Created by Miquel Àngel Soler on 12/7/15.
//
//

#pragma once

#ifndef __Planets__MSPlanet__
#define __Planets__MSPlanet__

#include <stdio.h>

#include "MSAstronomicalObject.h"


class MSPlanet : public MSAstronomicalObject
{
public:

    MSPlanet(double radiusEq, double radiusPolar, double rotationPeriod, double axialTilt,
        double orbitalPeriod, double orbitalEccentricity, double orbitalInclination);

//    void setup();
//    void update();
//    void draw();

private:

    double mOrbitalPeriod;          // In years
    double mOrbitalEccentricity;    // From 0 to 1
    double mOrbitalInclination;     // In degrees
};

#endif /* defined(__Planets__MSPlanet__) */
