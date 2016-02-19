/*
  ==============================================================================

    StereoWidthCtrl2.h
    Created: 25 Oct 2015 11:31:28pm
    Author:  Kristi Bancroft

  ==============================================================================
*/

#ifndef STEREOWIDTHCTRL2_H_INCLUDED
#define STEREOWIDTHCTRL2_H_INCLUDED
#include "StereoWidthCtrl2.h"

/*Volume-Normalized Stereo Width Control, contributed by Michael Gruhn to the 
MusicDSP Source Code Archive: http://musicdsp.org/showArchiveComment.php?ArchiveID=256
'width' is the stretch factor of the stereo field:
width < 1: decrease in stereo width
width = 1: no change
width > 1: increase in stereo width
width = 0: mono*/
class StereoWidthCtrl2
{
public:
StereoWidthCtrl2();
~StereoWidthCtrl2();

//Parameters
void SetWidth(float width);
float Getwidth(void){return m_width;};

//Use
void ClockProcess(float* LeftSample, float* RightSample); 

private:
float m_width, sumGain, diffGain;
};




#endif  // STEREOWIDTHCTRL2_H_INCLUDED
