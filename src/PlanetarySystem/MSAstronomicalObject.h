//
//  MSAstronomicalObject.h
//  Planets
//
//  Created by Miquel Àngel Soler on 12/7/15.
//
//

#ifndef __Planets__MSAstronomicalObject__
#define __Planets__MSAstronomicalObject__

#include <stdio.h>
#include "ofMain.h"

class MSAstronomicalObject
{
public:

    MSAstronomicalObject() {};

    MSAstronomicalObject(double radiusEq, double radiusPolar, double rotationPeriod, double axialTilt);

    void update();
    void draw();

protected:

    double              mRadiusEquatorial;      // In km
    double              mRadiusPolar;           // In km

    double              mRotationPeriod;        // In hours

    double              mAxialTilt;             // Angle (0 for star)

    ofSpherePrimitive   m3DObject;

};

#endif /* defined(__Planets__MSAstronomicalObject__) */
