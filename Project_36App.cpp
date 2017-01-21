//---------------------------------------------------------------------------
//
// Name:        Project_36App.cpp
// Author:      Krzysztof
// Created:     21.01.2017 19:41:21
// Description: 
//
//---------------------------------------------------------------------------

#include "Project_36App.h"
#include "Project_36Frm.h"

IMPLEMENT_APP(Project_36FrmApp)

bool Project_36FrmApp::OnInit()
{
    Project_36Frm* frame = new Project_36Frm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int Project_36FrmApp::OnExit()
{
	return 0;
}
