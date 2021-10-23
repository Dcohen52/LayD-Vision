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
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (600, 800);

    juce::Image normalButton = juce::ImageCache::getFromMemory(BinaryData::phase_png, BinaryData::phase_pngSize);
    juce::Image overButton = juce::ImageCache::getFromMemory(BinaryData::phaseover_png, BinaryData::phaseover_pngSize);
    juce::Image downButton = juce::ImageCache::getFromMemory(BinaryData::phasedown_png, BinaryData::phasedown_pngSize);
    phaseButton.setImages(false, false, true, normalButton, 1.0f, {}, overButton, 1.0f, {}, downButton, 1.0f, {});
    addAndMakeVisible(phaseButton);
}

LayDVisionAudioProcessorEditor::~LayDVisionAudioProcessorEditor()
{
}

//==============================================================================
void LayDVisionAudioProcessorEditor::paint (juce::Graphics& g)
{
    juce::Image background = juce::ImageCache::getFromMemory(BinaryData::backgrounds_png, BinaryData::backgrounds_pngSize);
    g.drawImageAt(background, 0, 0);
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    //g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    //g.setColour (juce::Colours::white);
    //g.setFont (15.0f);
    //g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);


}

void LayDVisionAudioProcessorEditor::resized()
{
    phaseButton.setBounds(getWidth() / 2 - 31, getHeight() / 2 - 110, 78, 35);
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
