//
//  MSPlanetarySystemSettings.cpp
//  PlanetarySystem
//
//  Created by Miquel Àngel Soler on 13/7/15.
//
//

#include "MSPlanetarySystemSettings.h"

MSPlanetarySystemSettings::MSPlanetarySystemSettings()
{
}

void MSPlanetarySystemSettings::setTimeScale(float timeScale)
{
    mTimeScale = timeScale;
}

float MSPlanetarySystemSettings::getTimeScale()
{
    return mTimeScale;
}
