//
//  MSAstronomicalObject.cpp
//  Planets
//
//  Created by Miquel Àngel Soler on 12/7/15.
//
//

#include "MSAstronomicalObject.h"

#include "MSPlanetarySystemSettings.h"

MSAstronomicalObject::MSAstronomicalObject(double radiusEq, double radiusPolar, double rotationPeriod, double axialTilt, string textureFile)
{
    mRadiusEquatorial = radiusEq / SCALE_FACTOR;
    mRadiusPolar = radiusPolar / SCALE_FACTOR;
    mRotationPeriod = rotationPeriod;
    mAxialTilt = axialTilt;

    mParent = NULL;

    m3DObject.setPosition(0, 0, 0);
    m3DObject.setRadius(float(mRadiusEquatorial));

    ofDisableArbTex();
    m3DObjectTexture.loadImage(textureFile);
    m3DObjectTexture.setAnchorPercent(0.5, 0.5);
    m3DObjectTexture.getTextureReference().setTextureWrap( GL_REPEAT, GL_REPEAT );
    m3DObject.mapTexCoordsFromTexture(m3DObjectTexture.getTextureReference());
    m3DObject.mapTexCoords(0, 1, 1, 0);

    m3DObject.setResolution(64);
}

void MSAstronomicalObject::setParent(MSAstronomicalObject *_parent)
{
    mParent = _parent;
    m3DObject.setParent(mParent->m3DObject);
}

void MSAstronomicalObject::update()
{

}

void MSAstronomicalObject::draw()
{
    ofPushMatrix();
    {
        ofRotateZ(float(mAxialTilt));
        double rotationPeriodAngle = (ofGetElapsedTimeMillis() / (mRotationPeriod * 60.0 * 60.0 * 1000.0)) * MSPlanetarySystemSettings::getInstance().getTimeScale();
        ofRotate(float(rotationPeriodAngle), 0, 1, 0);
        m3DObjectTexture.getTextureReference().bind();
        m3DObject.draw();
        m3DObjectTexture.getTextureReference().unbind();
    }
    ofPopMatrix();
}

double MSAstronomicalObject::getRadius()
{
    if (mRadiusEquatorial >= mRadiusPolar)
        return mRadiusEquatorial;
    else
        return mRadiusPolar;
}