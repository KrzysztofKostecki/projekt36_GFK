//---------------------------------------------------------------------------
//
// Name:        Project_36App.h
// Author:      Krzysztof
// Created:     21.01.2017 19:41:21
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __PROJECT_36FRMApp_h__
#define __PROJECT_36FRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Project_36FrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
