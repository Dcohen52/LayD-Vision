/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "myLookAndFeel.h"

//==============================================================================
/**
*/
class LayDVisionAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    LayDVisionAudioProcessorEditor (LayDVisionAudioProcessor&);
    ~LayDVisionAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    LayDVisionAudioProcessor& audioProcessor;

    myLookAndFeelV1 myLookAndFeelV1;
    myLookAndFeelV2 myLookAndFeelV2;
    //myLookAndFeelV3 myLookAndFeelV3;

    juce::ImageButton phaseButton;
    juce::ImageButton syncButton;
    juce::ImageButton reverseButton;

    juce::Slider time;
    juce::Slider feedback;
    juce::Slider pitch;
    juce::Slider mix;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (LayDVisionAudioProcessorEditor)
};
