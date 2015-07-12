//
//  MSPlanet.cpp
//  Planets
//
//  Created by Miquel Àngel Soler on 12/7/15.
//
//

#include "MSPlanet.h"

MSPlanet::MSPlanet(double radiusEq, double radiusPolar, double rotationPeriod, double axialTilt,
        double orbitalPeriod, double orbitalEccentricity, double orbitalInclination)
        : MSAstronomicalObject(radiusEq, radiusPolar, rotationPeriod, axialTilt)
{
    mOrbitalPeriod = orbitalPeriod;
    mOrbitalEccentricity = orbitalEccentricity;
    mOrbitalInclination = orbitalInclination;
}