/*
  ==============================================================================

    StereoWidthCtrl2.cpp
    Created: 25 Oct 2015 11:30:15pm
    Author:  Kristi Bancroft

  ==============================================================================
*/

#include "StereoWidthCtrl2.h"

StereoWidthCtrl2::StereoWidthCtrl2(){SetWidth(1.0f);}
StereoWidthCtrl2::~StereoWidthCtrl2(){}

void StereoWidthCtrl2::SetWidth(float width)
{
    m_width=width;
    float tmp;
    if(1.0f+width>2.0f)
        tmp=1.0f/(1.0f+m_width);
    else
        tmp=1.0f/2.0f;

    diffGain=m_width*tmp;
    sumGain=tmp;
}

void StereoWidthCtrl2::ClockProcess(float* LeftSample, float* RightSample)
{
    float m = sumGain*(*LeftSample+*RightSample);
    float s = diffGain*
    (*RightSample-*LeftSample);
    *LeftSample=m-s;
    *RightSample=m+s;
}

    
      
    
    
