/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.2.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_50C298CC3E0FE9F4__
#define __JUCE_HEADER_50C298CC3E0FE9F4__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "PluginProcessor.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class StereoWidthCtrl2AudioProcessorEditor  : public AudioProcessorEditor,
                                              public Timer,
                                              public ButtonListener,
                                              public SliderListener
{
public:
    //==============================================================================
    StereoWidthCtrl2AudioProcessorEditor (StereoWidthCtrl2AudioProcessor& ownerFilter);
    ~StereoWidthCtrl2AudioProcessorEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    void timerCallback();
    StereoWidthCtrl2AudioProcessor* getProcessor() const
    {return static_cast <StereoWidthCtrl2AudioProcessor*>(getAudioProcessor());}
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);
    void sliderValueChanged (Slider* sliderThatWasMoved);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextButton> ByPassBtn;
    ScopedPointer<Slider> WidthCtrl2Sld;
    ScopedPointer<Label> label;
    ScopedPointer<Slider> RoomSizeSlider;
    ScopedPointer<Label> StereoWidthLabel;
    ScopedPointer<Label> RoomSizeLabel;
    ScopedPointer<Slider> Dampingslider;
    ScopedPointer<Label> Dlabel;
    ScopedPointer<Slider> WetLevelslider;
    ScopedPointer<Label> WetLevelLabel;
    ScopedPointer<Slider> DryLevelSlider;
    ScopedPointer<Label> DryLevelLabel;
    ScopedPointer<Slider> ReverbWidthSlider;
    ScopedPointer<Label> ReverbWidthLabel;
    ScopedPointer<Slider> FreezeModeSlider;
    ScopedPointer<Label> FreezeModeLabel;
    ScopedPointer<TextButton> ReverbBypassButton;
    ScopedPointer<Label> label2;
    ScopedPointer<Slider> ThresholdSlider;
    ScopedPointer<Label> ThresholdLabel;
    ScopedPointer<Slider> RatioSlider;
    ScopedPointer<Label> RatioLabel;
    ScopedPointer<TextButton> CompressorBypassButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (StereoWidthCtrl2AudioProcessorEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_50C298CC3E0FE9F4__
