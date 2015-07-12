//
//  MSAstronomicalObject.cpp
//  Planets
//
//  Created by Miquel Àngel Soler on 12/7/15.
//
//

#include "MSAstronomicalObject.h"

MSAstronomicalObject::MSAstronomicalObject(double radiusEq, double radiusPolar, double rotationPeriod, double axialTilt)
{
    mRadiusEquatorial = radiusEq;
    mRadiusPolar = radiusPolar;
    mRotationPeriod = rotationPeriod;
    mAxialTilt = axialTilt;
}

void MSAstronomicalObject::update()
{

}

void MSAstronomicalObject::draw()
{

}
