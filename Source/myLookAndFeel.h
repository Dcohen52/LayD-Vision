/*
  ==============================================================================

    myLookAndFeel.h
    Created: 24 Oct 2021 6:11:21pm
    Author:  Dekel's Studio

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
//class myLookAndFeel  : public juce::Component
//{
//public:
//    myLookAndFeel();
//    ~myLookAndFeel() override;
//
//    void paint (juce::Graphics&) override;
//    void resized() override;
//
//private:
//    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (myLookAndFeel)
//};

using namespace juce;

class myLookAndFeelV1 : public LookAndFeel_V4
{
public:
    myLookAndFeelV1();

    void drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPos,
        float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override;

private:
    Image img1;

};

////==============================================================================
class myLookAndFeelV2 : public LookAndFeel_V4
{

public:
    myLookAndFeelV2();

    void drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPos,
        float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override;

private:
    Image img2;

};

////==============================================================================
//class myLookAndFeelV3 : public LookAndFeel_V4
//{
//
//public:
//    myLookAndFeelV3();
//
//    void drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPos,
//        float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override;
//
//private:
//    Image img2;
//
//};
