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

const double SCALE_FACTOR = 1000000.0;

class MSAstronomicalObject
{
public:

    MSAstronomicalObject() {};

    MSAstronomicalObject(double radiusEq, double radiusPolar, double rotationPeriod, double axialTilt, string textureFile);

    void setParent(MSAstronomicalObject *parent);

    void update();
    void draw();

    double getRadius();

    ofSpherePrimitive       m3DObject;

protected:

    double                  mRadiusEquatorial;      // In km
    double                  mRadiusPolar;           // In km

    double                  mRotationPeriod;        // In hours

    double                  mAxialTilt;             // Angle (0 for mStar)

    MSAstronomicalObject    *mParent;

    // Object draw
    ofImage                 m3DObjectTexture;
};

#endif /* defined(__Planets__MSAstronomicalObject__) */
