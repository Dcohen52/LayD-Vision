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
    syncButton.setBounds(getWidth() / 2 - 31, getHeight() / 2 - 15, 78, 35);
    reverseButton.setBounds(getWidth() / 2 - 40, getHeight() - 251, 95, 45);
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
