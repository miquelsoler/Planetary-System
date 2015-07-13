//
//  MSPlanetarySystemSettings.h
//  PlanetarySystem
//
//  Created by Miquel Àngel Soler on 13/7/15.
//
//

#pragma once

#ifndef __PlanetarySystem__MSPlanetarySystemSettings__
#define __PlanetarySystem__MSPlanetarySystemSettings__

#include <stdio.h>

class MSPlanetarySystemSettings
{
public:

    static MSPlanetarySystemSettings &getInstance()
    {
        static MSPlanetarySystemSettings instance;
        return instance;
    }

    void setTimeScale(float timeScale);
    float getTimeScale();

private:

    MSPlanetarySystemSettings();

    float   mTimeScale;
};

#endif /* defined(__PlanetarySystem__MSPlanetarySystemSettings__) */
