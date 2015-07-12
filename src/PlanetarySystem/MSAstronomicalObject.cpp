//
//  MSAstronomicalObject.cpp
//  Planets
//
//  Created by Miquel Àngel Soler on 12/7/15.
//
//

#include "MSAstronomicalObject.h"

MSAstronomicalObject::MSAstronomicalObject(double radiusEq, double radiusPolar, double rotationPeriod, double axialTilt, string textureFile)
{
    mRadiusEquatorial = radiusEq / SCALE_FACTOR;
    mRadiusPolar = radiusPolar / SCALE_FACTOR;
    mRotationPeriod = rotationPeriod;
    mAxialTilt = axialTilt;

    parent = NULL;

    m3DObject.setPosition(0, 0, 0);
    m3DObject.setRadius(mRadiusEquatorial);

    ofDisableArbTex();
    m3DObjectTexture.loadImage(textureFile);
    m3DObjectTexture.setAnchorPercent(0.5, 0.5);
//    m3DObjectTexture.getTextureReference().setTextureWrap( GL_REPEAT, GL_REPEAT );
    m3DObject.mapTexCoordsFromTexture(m3DObjectTexture.getTextureReference());
    m3DObject.mapTexCoords(0, 1, 1, 0);
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
    m3DObjectTexture.getTextureReference().bind();
    m3DObject.draw();
    m3DObjectTexture.getTextureReference().unbind();
}

double MSAstronomicalObject::getRadius()
{
    if (mRadiusEquatorial >= mRadiusPolar)
        return mRadiusEquatorial;
    else
        return mRadiusPolar;
}