/*==============================================================================
//  MainHostWindow.cpp
//  Part of the Zentropia JUCE Collection
//  @author Casey Bailey (<a href="SonicZentropy@gmail.com">email</a>)
//  @version 0.1
//  @date 2016/01/11
//  Copyright (C) 2016 by Casey Bailey
//  Provided under the [GNU license]
//
//  Details: This class implements the desktop window that contains an instance
//           of our MainContentComponent class.
//
//  Zentropia is hosted on Github at [https://github.com/SonicZentropy]
===============================================================================*/


#include "MainHostWindow.h"

MainHostWindow::MainHostWindow(String name) : DocumentWindow(name,
	Colours::lightgrey,
	DocumentWindow::allButtons)
{
	setUsingNativeTitleBar(true);
	setContentOwned(createMainContentComponent(), true);
	setResizable(true, true);

	centreWithSize(getWidth(), getHeight());
	setVisible(true);
}

void MainHostWindow::closeButtonPressed()
{
	// This is called when the user tries to close this window. Here, we'll just
	// ask the app to quit when this happens, but you can change this to do
	// whatever you need.
	JUCEApplication::getInstance()->systemRequestedQuit();
}

void MainHostWindow::tryToQuitApplication()
{
	throw std::logic_error("The method or operation is not implemented.");
}

