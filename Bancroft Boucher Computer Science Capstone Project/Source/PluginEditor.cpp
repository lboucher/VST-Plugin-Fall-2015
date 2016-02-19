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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
StereoWidthCtrl2AudioProcessorEditor::StereoWidthCtrl2AudioProcessorEditor (StereoWidthCtrl2AudioProcessor& ownerFilter)
    : AudioProcessorEditor(ownerFilter)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (ByPassBtn = new TextButton ("Bypass Button"));
    ByPassBtn->setButtonText (TRANS("StereoWidth Bypass"));
    ByPassBtn->addListener (this);

    addAndMakeVisible (WidthCtrl2Sld = new Slider ("Width Factor Slider"));
    WidthCtrl2Sld->setRange (0, 10, 0.1);
    WidthCtrl2Sld->setSliderStyle (Slider::LinearHorizontal);
    WidthCtrl2Sld->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    WidthCtrl2Sld->addListener (this);

    addAndMakeVisible (label = new Label ("label",
                                          TRANS("Stereowidth Factor and Reverb")));
    label->setFont (Font (24.10f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (RoomSizeSlider = new Slider ("RSSlider"));
    RoomSizeSlider->setRange (0, 1, 0.01);
    RoomSizeSlider->setSliderStyle (Slider::LinearHorizontal);
    RoomSizeSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    RoomSizeSlider->addListener (this);

    addAndMakeVisible (StereoWidthLabel = new Label ("SWLabel",
                                                     TRANS("StereoWidth")));
    StereoWidthLabel->setFont (Font (15.00f, Font::plain));
    StereoWidthLabel->setJustificationType (Justification::centredLeft);
    StereoWidthLabel->setEditable (false, false, false);
    StereoWidthLabel->setColour (TextEditor::textColourId, Colours::black);
    StereoWidthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (RoomSizeLabel = new Label ("RSLabel",
                                                  TRANS("Roomsize")));
    RoomSizeLabel->setFont (Font (15.00f, Font::plain));
    RoomSizeLabel->setJustificationType (Justification::centredLeft);
    RoomSizeLabel->setEditable (false, false, false);
    RoomSizeLabel->setColour (TextEditor::textColourId, Colours::black);
    RoomSizeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Dampingslider = new Slider ("Dslider"));
    Dampingslider->setRange (0, 1, 0.01);
    Dampingslider->setSliderStyle (Slider::LinearHorizontal);
    Dampingslider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    Dampingslider->addListener (this);

    addAndMakeVisible (Dlabel = new Label ("Dlabelname",
                                           TRANS("Damping")));
    Dlabel->setFont (Font (15.00f, Font::plain));
    Dlabel->setJustificationType (Justification::centredLeft);
    Dlabel->setEditable (false, false, false);
    Dlabel->setColour (TextEditor::textColourId, Colours::black);
    Dlabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (WetLevelslider = new Slider ("WLslider"));
    WetLevelslider->setRange (0, 1, 0.01);
    WetLevelslider->setSliderStyle (Slider::LinearHorizontal);
    WetLevelslider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    WetLevelslider->addListener (this);

    addAndMakeVisible (WetLevelLabel = new Label ("WLLabel",
                                                  TRANS("Wet Level (Adjust this first)")));
    WetLevelLabel->setFont (Font (15.00f, Font::plain));
    WetLevelLabel->setJustificationType (Justification::centredLeft);
    WetLevelLabel->setEditable (false, false, false);
    WetLevelLabel->setColour (TextEditor::textColourId, Colours::black);
    WetLevelLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (DryLevelSlider = new Slider ("DLSlider"));
    DryLevelSlider->setRange (0, 1, 0.01);
    DryLevelSlider->setSliderStyle (Slider::LinearHorizontal);
    DryLevelSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    DryLevelSlider->addListener (this);

    addAndMakeVisible (DryLevelLabel = new Label ("DLLabel",
                                                  TRANS("Dry Level")));
    DryLevelLabel->setFont (Font (15.00f, Font::plain));
    DryLevelLabel->setJustificationType (Justification::centredLeft);
    DryLevelLabel->setEditable (false, false, false);
    DryLevelLabel->setColour (TextEditor::textColourId, Colours::black);
    DryLevelLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ReverbWidthSlider = new Slider ("RWSlider"));
    ReverbWidthSlider->setRange (0, 1, 0.01);
    ReverbWidthSlider->setSliderStyle (Slider::LinearHorizontal);
    ReverbWidthSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    ReverbWidthSlider->addListener (this);

    addAndMakeVisible (ReverbWidthLabel = new Label ("RWLabel",
                                                     TRANS("Reverb Width")));
    ReverbWidthLabel->setFont (Font (15.00f, Font::plain));
    ReverbWidthLabel->setJustificationType (Justification::centredLeft);
    ReverbWidthLabel->setEditable (false, false, false);
    ReverbWidthLabel->setColour (TextEditor::textColourId, Colours::black);
    ReverbWidthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (FreezeModeSlider = new Slider ("FMSlider"));
    FreezeModeSlider->setRange (0, 1, 0.1);
    FreezeModeSlider->setSliderStyle (Slider::LinearHorizontal);
    FreezeModeSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    FreezeModeSlider->addListener (this);

    addAndMakeVisible (FreezeModeLabel = new Label ("FMLabel",
                                                    TRANS("Freeze Mode")));
    FreezeModeLabel->setFont (Font (15.00f, Font::plain));
    FreezeModeLabel->setJustificationType (Justification::centredLeft);
    FreezeModeLabel->setEditable (false, false, false);
    FreezeModeLabel->setColour (TextEditor::textColourId, Colours::black);
    FreezeModeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ReverbBypassButton = new TextButton ("Rbypass"));
    ReverbBypassButton->setButtonText (TRANS("Reverb Bypass "));
    ReverbBypassButton->addListener (this);

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Compressor/Distortion(Broken)")));
    label2->setFont (Font (24.00f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ThresholdSlider = new Slider ("Tslider"));
    ThresholdSlider->setRange (0, 100, 0);
    ThresholdSlider->setSliderStyle (Slider::LinearHorizontal);
    ThresholdSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    ThresholdSlider->addListener (this);

    addAndMakeVisible (ThresholdLabel = new Label ("TLabel",
                                                   TRANS("Threshold/Distortion")));
    ThresholdLabel->setFont (Font (15.00f, Font::plain));
    ThresholdLabel->setJustificationType (Justification::centredLeft);
    ThresholdLabel->setEditable (false, false, false);
    ThresholdLabel->setColour (TextEditor::textColourId, Colours::black);
    ThresholdLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (RatioSlider = new Slider ("RSlider"));
    RatioSlider->setRange (0, 3, 0);
    RatioSlider->setSliderStyle (Slider::LinearHorizontal);
    RatioSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    RatioSlider->addListener (this);

    addAndMakeVisible (RatioLabel = new Label ("Rlabel",
                                               TRANS("Ratio (Be Careful)")));
    RatioLabel->setFont (Font (15.00f, Font::plain));
    RatioLabel->setJustificationType (Justification::centredLeft);
    RatioLabel->setEditable (false, false, false);
    RatioLabel->setColour (TextEditor::textColourId, Colours::black);
    RatioLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (CompressorBypassButton = new TextButton ("CBypass"));
    CompressorBypassButton->setButtonText (TRANS("Compressor Bypass Button"));
    CompressorBypassButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (800, 600);


    //[Constructor] You can add your own custom stuff here..
    getProcessor()->RequestUIUpdate();// UI update must be done each time a new editor is constructed
    startTimer(200);
    ByPassBtn->setClickingTogglesState(true);
    CompressorBypassButton->setClickingTogglesState(true);
    ReverbBypassButton->setClickingTogglesState(true);

    //[/Constructor]
}

StereoWidthCtrl2AudioProcessorEditor::~StereoWidthCtrl2AudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    ByPassBtn = nullptr;
    WidthCtrl2Sld = nullptr;
    label = nullptr;
    RoomSizeSlider = nullptr;
    StereoWidthLabel = nullptr;
    RoomSizeLabel = nullptr;
    Dampingslider = nullptr;
    Dlabel = nullptr;
    WetLevelslider = nullptr;
    WetLevelLabel = nullptr;
    DryLevelSlider = nullptr;
    DryLevelLabel = nullptr;
    ReverbWidthSlider = nullptr;
    ReverbWidthLabel = nullptr;
    FreezeModeSlider = nullptr;
    FreezeModeLabel = nullptr;
    ReverbBypassButton = nullptr;
    label2 = nullptr;
    ThresholdSlider = nullptr;
    ThresholdLabel = nullptr;
    RatioSlider = nullptr;
    RatioLabel = nullptr;
    CompressorBypassButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void StereoWidthCtrl2AudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff575454));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void StereoWidthCtrl2AudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    ByPassBtn->setBounds (16, 96, 344, 24);
    WidthCtrl2Sld->setBounds (32, 64, 300, 24);
    label->setBounds (24, 8, 304, 24);
    RoomSizeSlider->setBounds (24, 176, 150, 24);
    StereoWidthLabel->setBounds (32, 40, 150, 24);
    RoomSizeLabel->setBounds (24, 144, 150, 24);
    Dampingslider->setBounds (216, 176, 150, 24);
    Dlabel->setBounds (208, 144, 150, 24);
    WetLevelslider->setBounds (24, 240, 150, 24);
    WetLevelLabel->setBounds (24, 208, 150, 24);
    DryLevelSlider->setBounds (208, 240, 150, 24);
    DryLevelLabel->setBounds (208, 208, 150, 24);
    ReverbWidthSlider->setBounds (24, 304, 150, 24);
    ReverbWidthLabel->setBounds (24, 272, 150, 24);
    FreezeModeSlider->setBounds (208, 304, 150, 24);
    FreezeModeLabel->setBounds (192, 272, 150, 24);
    ReverbBypassButton->setBounds (104, 360, 150, 24);
    label2->setBounds (24, 416, 328, 24);
    ThresholdSlider->setBounds (16, 488, 150, 24);
    ThresholdLabel->setBounds (8, 456, 144, 24);
    RatioSlider->setBounds (200, 488, 150, 24);
    RatioLabel->setBounds (192, 456, 150, 24);
    CompressorBypassButton->setBounds (64, 528, 256, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void StereoWidthCtrl2AudioProcessorEditor::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    StereoWidthCtrl2AudioProcessor* ourProcessor = getProcessor();
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == ByPassBtn)
    {
        //[UserButtonCode_ByPassBtn] -- add your button handler code here..
        ourProcessor->setParameter(StereoWidthCtrl2AudioProcessor::StereoBypass, (float)ByPassBtn->getToggleState());
        //[/UserButtonCode_ByPassBtn]
    }
    else if (buttonThatWasClicked == ReverbBypassButton)
    {
        //[UserButtonCode_ReverbBypassButton] -- add your button handler code here..
        ourProcessor->setParameter(StereoWidthCtrl2AudioProcessor::ReverbBypass, (float)ReverbBypassButton->getToggleState());
        //[/UserButtonCode_ReverbBypassButton]
    }
    else if (buttonThatWasClicked == CompressorBypassButton)
    {
        //[UserButtonCode_CompressorBypassButton] -- add your button handler code here..
        ourProcessor->setParameter(StereoWidthCtrl2AudioProcessor::CompressorBypass, (float)CompressorBypassButton->getToggleState());
        //[/UserButtonCode_CompressorBypassButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void StereoWidthCtrl2AudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    StereoWidthCtrl2AudioProcessor* ourProcessor = getProcessor();
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == WidthCtrl2Sld)
    {
        //[UserSliderCode_WidthCtrl2Sld] -- add your slider handling code here..
        ourProcessor->setParameter(StereoWidthCtrl2AudioProcessor::StereoWidth, (float) WidthCtrl2Sld->getValue());
        //[/UserSliderCode_WidthCtrl2Sld]
    }
    else if (sliderThatWasMoved == RoomSizeSlider)
    {
        //[UserSliderCode_RoomSizeSlider] -- add your slider handling code here..
        ourProcessor->setParameter(StereoWidthCtrl2AudioProcessor::Roomsize, (float)RoomSizeSlider->getValue());

        //[/UserSliderCode_RoomSizeSlider]
    }
    else if (sliderThatWasMoved == Dampingslider)
    {
        //[UserSliderCode_Dampingslider] -- add your slider handling code here..
        ourProcessor->setParameter(StereoWidthCtrl2AudioProcessor::Damping, (float) Dampingslider->getValue());

        //[/UserSliderCode_Dampingslider]
    }
    else if (sliderThatWasMoved == WetLevelslider)
    {
        //[UserSliderCode_WetLevelslider] -- add your slider handling code here..
        ourProcessor->setParameter(StereoWidthCtrl2AudioProcessor::Wetlevel, (float) WetLevelslider->getValue());

        //[/UserSliderCode_WetLevelslider]
    }
    else if (sliderThatWasMoved == DryLevelSlider)
    {
        //[UserSliderCode_DryLevelSlider] -- add your slider handling code here..
        ourProcessor->setParameter(StereoWidthCtrl2AudioProcessor::Drylevel, (float) DryLevelSlider->getValue());

        //[/UserSliderCode_DryLevelSlider]
    }
    else if (sliderThatWasMoved == ReverbWidthSlider)
    {
        //[UserSliderCode_ReverbWidthSlider] -- add your slider handling code here..
        ourProcessor->setParameter(StereoWidthCtrl2AudioProcessor::Reverbwidth, (float) ReverbWidthSlider->getValue());

        //[/UserSliderCode_ReverbWidthSlider]
    }
    else if (sliderThatWasMoved == FreezeModeSlider)
    {
        //[UserSliderCode_FreezeModeSlider] -- add your slider handling code here..
        ourProcessor->setParameter(StereoWidthCtrl2AudioProcessor::Freezemode, (float) FreezeModeSlider->getValue());

        //[/UserSliderCode_FreezeModeSlider]
    }
    else if (sliderThatWasMoved == ThresholdSlider)
    {
        //[UserSliderCode_ThresholdSlider] -- add your slider handling code here..
        ourProcessor->setParameter(StereoWidthCtrl2AudioProcessor::threshold, (float) ThresholdSlider->getValue());

        //[/UserSliderCode_ThresholdSlider]
    }
    else if (sliderThatWasMoved == RatioSlider)
    {
        //[UserSliderCode_RatioSlider] -- add your slider handling code here..
        ourProcessor->setParameter(StereoWidthCtrl2AudioProcessor::ratio, (float) RatioSlider->getValue());

        //[/UserSliderCode_RatioSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void StereoWidthCtrl2AudioProcessorEditor::timerCallback()
    {
        StereoWidthCtrl2AudioProcessor* ourProcessor = getProcessor();
        //exchange any data you want between UI elements and the Plugin "ourProcessor"
        if(ourProcessor->NeedsUIUpdate())
        {
            ByPassBtn->setToggleState(1.0f == ourProcessor->getParameter(StereoWidthCtrl2AudioProcessor::StereoBypass), dontSendNotification);
            WidthCtrl2Sld->setValue(ourProcessor->getParameter(StereoWidthCtrl2AudioProcessor::StereoWidth), dontSendNotification);
            ourProcessor->ClearUIUpdateFlag();
            RoomSizeSlider->setValue(ourProcessor->getParameter(StereoWidthCtrl2AudioProcessor::Roomsize),dontSendNotification);
            Dampingslider->setValue(ourProcessor->getParameter(StereoWidthCtrl2AudioProcessor::Damping),dontSendNotification);
            WetLevelslider->setValue(ourProcessor->getParameter(StereoWidthCtrl2AudioProcessor::Wetlevel),dontSendNotification);
            DryLevelSlider->setValue(ourProcessor->getParameter(StereoWidthCtrl2AudioProcessor::Drylevel),dontSendNotification);
            ReverbWidthSlider->setValue(ourProcessor->getParameter(StereoWidthCtrl2AudioProcessor::Reverbwidth),dontSendNotification);
            FreezeModeSlider->setValue(ourProcessor->getParameter(StereoWidthCtrl2AudioProcessor::Freezemode),dontSendNotification);
            ThresholdSlider->setValue(ourProcessor->getParameter(StereoWidthCtrl2AudioProcessor::threshold),dontSendNotification);
            RatioSlider->setValue(ourProcessor->getParameter(StereoWidthCtrl2AudioProcessor::ratio),dontSendNotification);
            ReverbBypassButton->setToggleState(1.0f== ourProcessor->getParameter(StereoWidthCtrl2AudioProcessor::ReverbBypass),dontSendNotification);
            CompressorBypassButton->setToggleState(1.0f ==ourProcessor->getParameter(StereoWidthCtrl2AudioProcessor::CompressorBypass),dontSendNotification);
        }
    //exchange any data you want between UI elements and the Plugin "ourProcessor"
    }
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="StereoWidthCtrl2AudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="StereoWidthCtrl2AudioProcessor&amp; ownerFilter"
                 variableInitialisers="AudioProcessorEditor(ownerFilter)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330" fixedSize="0"
                 initialWidth="800" initialHeight="600">
  <BACKGROUND backgroundColour="ff575454"/>
  <TEXTBUTTON name="Bypass Button" id="31fed7b6889378d5" memberName="ByPassBtn"
              virtualName="" explicitFocusOrder="0" pos="16 96 344 24" buttonText="StereoWidth Bypass"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <SLIDER name="Width Factor Slider" id="ec8817173a27ff32" memberName="WidthCtrl2Sld"
          virtualName="" explicitFocusOrder="0" pos="32 64 300 24" min="0"
          max="10" int="0.10000000000000000555" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="label" id="ce0753335b5a5da0" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="24 8 304 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Stereowidth Factor and Reverb" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="24.100000000000001421" bold="0" italic="0" justification="33"/>
  <SLIDER name="RSSlider" id="62fa2b27561943a5" memberName="RoomSizeSlider"
          virtualName="" explicitFocusOrder="0" pos="24 176 150 24" min="0"
          max="1" int="0.010000000000000000208" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="SWLabel" id="e55a3080846fec6a" memberName="StereoWidthLabel"
         virtualName="" explicitFocusOrder="0" pos="32 40 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="StereoWidth" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="RSLabel" id="5f5315bdec2e28b2" memberName="RoomSizeLabel"
         virtualName="" explicitFocusOrder="0" pos="24 144 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Roomsize" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Dslider" id="90964dbfe998924c" memberName="Dampingslider"
          virtualName="" explicitFocusOrder="0" pos="216 176 150 24" min="0"
          max="1" int="0.010000000000000000208" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Dlabelname" id="5dc74d9bdbcad7ec" memberName="Dlabel" virtualName=""
         explicitFocusOrder="0" pos="208 144 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Damping" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="WLslider" id="6acf55790b111e41" memberName="WetLevelslider"
          virtualName="" explicitFocusOrder="0" pos="24 240 150 24" min="0"
          max="1" int="0.010000000000000000208" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="WLLabel" id="f52a63c01b4dde47" memberName="WetLevelLabel"
         virtualName="" explicitFocusOrder="0" pos="24 208 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Wet Level (Adjust this first)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="DLSlider" id="676db66fb4aed4d9" memberName="DryLevelSlider"
          virtualName="" explicitFocusOrder="0" pos="208 240 150 24" min="0"
          max="1" int="0.010000000000000000208" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="DLLabel" id="c86a7ecdd608d789" memberName="DryLevelLabel"
         virtualName="" explicitFocusOrder="0" pos="208 208 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Dry Level" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="RWSlider" id="1955ab45815ba2b3" memberName="ReverbWidthSlider"
          virtualName="" explicitFocusOrder="0" pos="24 304 150 24" min="0"
          max="1" int="0.010000000000000000208" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="RWLabel" id="d541249af03c613d" memberName="ReverbWidthLabel"
         virtualName="" explicitFocusOrder="0" pos="24 272 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Reverb Width" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="FMSlider" id="5c19599349f1661d" memberName="FreezeModeSlider"
          virtualName="" explicitFocusOrder="0" pos="208 304 150 24" min="0"
          max="1" int="0.10000000000000000555" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <LABEL name="FMLabel" id="3680fede8d2ba179" memberName="FreezeModeLabel"
         virtualName="" explicitFocusOrder="0" pos="192 272 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Freeze Mode" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="Rbypass" id="512df23500359838" memberName="ReverbBypassButton"
              virtualName="" explicitFocusOrder="0" pos="104 360 150 24" buttonText="Reverb Bypass "
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="1dd3d654adec261c" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="24 416 328 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Compressor/Distortion(Broken)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="24" bold="0" italic="0" justification="33"/>
  <SLIDER name="Tslider" id="3196e1bc486bbeb1" memberName="ThresholdSlider"
          virtualName="" explicitFocusOrder="0" pos="16 488 150 24" min="0"
          max="100" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="TLabel" id="f9e63151c029f77c" memberName="ThresholdLabel"
         virtualName="" explicitFocusOrder="0" pos="8 456 144 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Threshold/Distortion" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="RSlider" id="5bc5006c67db0224" memberName="RatioSlider"
          virtualName="" explicitFocusOrder="0" pos="200 488 150 24" min="0"
          max="3" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Rlabel" id="3bbbf5ba3b74418d" memberName="RatioLabel" virtualName=""
         explicitFocusOrder="0" pos="192 456 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Ratio (Be Careful)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="CBypass" id="4397da64781a9c25" memberName="CompressorBypassButton"
              virtualName="" explicitFocusOrder="0" pos="64 528 256 24" buttonText="Compressor Bypass Button"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
