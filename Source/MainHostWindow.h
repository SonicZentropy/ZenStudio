/*==============================================================================
//  MainHostWindow.h
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


#pragma once
#ifndef MAINHOSTWINDOW_H_INCLUDED
#define MAINHOSTWINDOW_H_INCLUDED

#include "JuceHeader.h"

Component* createMainContentComponent();

class MainHostWindow    : public DocumentWindow
{
public:
explicit MainHostWindow (String name);

void tryToQuitApplication();

void closeButtonPressed() override;

    /* Note: Be careful if you override any DocumentWindow methods - the base
        class uses a lot of them, so by overriding you might break its functionality.
        It's best to do all your work in your content component instead, but if
        you really have to override any DocumentWindow methods, make sure your
        subclass also calls the superclass's method.
    */

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainHostWindow)
		
};


#endif // MAINHOSTWINDOW_H_INCLUDED
