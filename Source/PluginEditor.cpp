/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include <BinaryData.cpp>
#include <BinaryData.h>

//==============================================================================
LayDVisionAudioProcessorEditor::LayDVisionAudioProcessorEditor (LayDVisionAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    setSize (600, 800);

    // Buttons
    juce::Image normalButton = juce::ImageCache::getFromMemory(BinaryData::phase_png, BinaryData::phase_pngSize);
    juce::Image overButton = juce::ImageCache::getFromMemory(BinaryData::phaseover_png, BinaryData::phaseover_pngSize);
    juce::Image downButton = juce::ImageCache::getFromMemory(BinaryData::phasedown_png, BinaryData::phasedown_pngSize);
    phaseButton.setImages(false, false, true, normalButton, 1.0f, {}, overButton, 1.0f, {}, downButton, 1.0f, {});
    addAndMakeVisible(phaseButton);

    juce::Image normalButton2 = juce::ImageCache::getFromMemory(BinaryData::sync_png, BinaryData::sync_pngSize);
    juce::Image overButton2 = juce::ImageCache::getFromMemory(BinaryData::syncover_png, BinaryData::syncover_pngSize);
    juce::Image downButton2 = juce::ImageCache::getFromMemory(BinaryData::syncdown_png, BinaryData::syncdown_pngSize);
    syncButton.setImages(false, false, true, normalButton2, 1.0f, {}, overButton2, 1.0f, {}, downButton2, 1.0f, {});
    addAndMakeVisible(syncButton);

    juce::Image normalButton3 = juce::ImageCache::getFromMemory(BinaryData::reverse_png, BinaryData::reverse_pngSize);
    juce::Image overButton3 = juce::ImageCache::getFromMemory(BinaryData::reverseover_png, BinaryData::reverseover_pngSize);
    juce::Image downButton3 = juce::ImageCache::getFromMemory(BinaryData::reversedown_png, BinaryData::reversedown_pngSize);
    reverseButton.setImages(false, false, true, normalButton3, 1.0f, {}, overButton3, 1.0f, {}, downButton3, 1.0f, {});
    addAndMakeVisible(reverseButton);

    // Dials
    time.setLookAndFeel(&myLookAndFeelV1);
    time.setSliderStyle(juce::Slider::RotaryVerticalDrag);
    time.setTextBoxStyle(juce::Slider::NoTextBox, false, 60, 20);
    addAndMakeVisible(time);

    feedback.setLookAndFeel(&myLookAndFeelV1);
    feedback.setSliderStyle(juce::Slider::RotaryVerticalDrag);
    feedback.setTextBoxStyle(juce::Slider::NoTextBox, false, 60, 20);
    addAndMakeVisible(feedback);

    pitch.setLookAndFeel(&myLookAndFeelV2);
    pitch.setSliderStyle(juce::Slider::RotaryVerticalDrag);
    pitch.setTextBoxStyle(juce::Slider::NoTextBox, false, 60, 20);
    addAndMakeVisible(pitch);

    mix.setLookAndFeel(&myLookAndFeelV2);
    mix.setSliderStyle(juce::Slider::RotaryVerticalDrag);
    mix.setTextBoxStyle(juce::Slider::NoTextBox, false, 60, 20);
    addAndMakeVisible(mix);
}

LayDVisionAudioProcessorEditor::~LayDVisionAudioProcessorEditor()
{
}

//==============================================================================
void LayDVisionAudioProcessorEditor::paint (juce::Graphics& g)
{
    juce::Image background = juce::ImageCache::getFromMemory(BinaryData::backgroundlabels_png, BinaryData::backgroundlabels_pngSize);
    g.drawImageAt(background, 0, 0);
}

void LayDVisionAudioProcessorEditor::resized()
{
    phaseButton.setBounds(getWidth() / 2 - 31, getHeight() / 2 - 110, 78, 35);
    syncButton.setBounds(getWidth() / 2 - 31, getHeight() / 2 - 15, 78, 35);
    reverseButton.setBounds(getWidth() / 2 - 40, getHeight() - 251, 95, 45);
    time.setBounds(getWidth() / 2 - 246, getHeight() / 2 - 112, 166, 166);
    feedback.setBounds(getWidth() - 215, getHeight() / 2 - 112, 166, 166);
    pitch.setBounds(getWidth() / 2 - 205, getHeight() - 170, 87, 87);
    mix.setBounds(getWidth() - 173, getHeight() - 170, 87, 87);
}
