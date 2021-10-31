/*
  ==============================================================================

    myLookAndFeel.h
    Created: 24 Oct 2021 6:11:21pm
    Author:  Dekel's Studio

  ==============================================================================
*/


#pragma once
#include <JuceHeader.h>

<<<<<<< HEAD
=======

>>>>>>> 5f128eefc2c581a893beac93187c452bdd9b5cfe
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

<<<<<<< HEAD

=======
>>>>>>> 5f128eefc2c581a893beac93187c452bdd9b5cfe
class myLookAndFeelV2 : public LookAndFeel_V4
{

public:
    myLookAndFeelV2();

    void drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPos,
        float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override;

private:
    Image img2;
};
<<<<<<< HEAD
=======

>>>>>>> 5f128eefc2c581a893beac93187c452bdd9b5cfe
