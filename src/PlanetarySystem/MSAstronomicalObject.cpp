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
    mRadiusEquatorial = radiusEq / SCALE_FACTOR;
    mRadiusPolar = radiusPolar / SCALE_FACTOR;
    mRotationPeriod = rotationPeriod;
    mAxialTilt = axialTilt;

    parent = NULL;

    m3DObject.setPosition(0, 0, 0);
    m3DObject.setRadius(mRadiusEquatorial);
}

void MSAstronomicalObject::setParent(MSAstronomicalObject *_parent)
{
    parent = _parent;
    m3DObject.setParent(parent->m3DObject);
}

void MSAstronomicalObject::update()
{

}

void MSAstronomicalObject::draw()
{
    m3DObject.draw();
}

double MSAstronomicalObject::getRadius()
{
    if (mRadiusEquatorial >= mRadiusPolar)
        return mRadiusEquatorial;
    else
        return mRadiusPolar;
}