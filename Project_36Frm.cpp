///-----------------------------------------------------------------
///
/// @file      Project_36Frm.cpp
/// @author    Krzysztof
/// Created:   21.01.2017 19:41:22
/// @section   DESCRIPTION
///            Project_36Frm class implementation
///
///------------------------------------------------------------------

#include "Project_36Frm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Project_36Frm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Project_36Frm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Project_36Frm::OnClose)
	
	EVT_COMMAND_SCROLL(ID_WXSCROLLBAR1,Project_36Frm::WxSB_RotateZScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSCROLLBAR1,Project_36Frm::WxSB_RotateYScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_ROTATEX,Project_36Frm::WxSB_RotateXScroll)
END_EVENT_TABLE()
////Event Table End

Project_36Frm::Project_36Frm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Project_36Frm::~Project_36Frm()
{
}

void Project_36Frm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxBoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	this->SetSizer(WxBoxSizer1);
	this->SetAutoLayout(true);

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(5, 5), wxSize(431, 265));
	WxBoxSizer1->Add(WxPanel1, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	WxBoxSizer1->Add(WxBoxSizer2, 0, wxALIGN_CENTER | wxALL | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 10);

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Obrot ca³ego szkieletu"), wxPoint(36, 5), wxDefaultSize, 0, _("WxStaticText1"));
	WxBoxSizer2->Add(WxStaticText1, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer3, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OX:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText2"));
	WxBoxSizer3->Add(WxStaticText2, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_RotateX = new wxScrollBar(this, ID_WXSB_ROTATEX, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_RotateX"));
	WxSB_RotateX->Enable(false);
	WxBoxSizer3->Add(WxSB_RotateX, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_RotateX = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_RotateX"));
	WxBoxSizer3->Add(WxST_RotateX, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer4, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText4 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OY:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText4"));
	WxBoxSizer4->Add(WxStaticText4, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_RotateY = new wxScrollBar(this, ID_WXSCROLLBAR1, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_RotateY"));
	WxSB_RotateY->Enable(false);
	WxBoxSizer4->Add(WxSB_RotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_RotateY = new wxStaticText(this, ID_WXSTATICTEXT3, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_RotateY"));
	WxBoxSizer4->Add(WxST_RotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer5, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText6 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OZ:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText6"));
	WxBoxSizer5->Add(WxStaticText6, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_RotateZ = new wxScrollBar(this, ID_WXSCROLLBAR1, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_RotateZ"));
	WxSB_RotateZ->Enable(false);
	WxBoxSizer5->Add(WxSB_RotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_RotateZ = new wxStaticText(this, ID_WXSTATICTEXT3, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_RotateZ"));
	WxBoxSizer5->Add(WxST_RotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	SetTitle(_("Project_36"));
	SetIcon(wxNullIcon);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
	
	WxSB_RotateX->SetScrollbar(0, 1, 361, 1,true);
	WxSB_RotateX->Enable(true);
	WxSB_RotateY->SetScrollbar(0, 1, 361, 1,true);
	WxSB_RotateY->Enable(true);
	WxSB_RotateZ->SetScrollbar(0, 1, 361, 1,true);
	WxSB_RotateZ->Enable(true);
}

void Project_36Frm::OnClose(wxCloseEvent& event)
{
	Destroy();
}



/*
 * WxSB_RotateXScroll
 */
void Project_36Frm::WxSB_RotateXScroll(wxScrollEvent& event)
{
	wxString str;
     str<<(WxSB_RotateX->GetThumbPosition());
     WxST_RotateX->SetLabel(str);
 //    Repaint();
}

/*
 * WxSB_RotateYScroll
 */
void Project_36Frm::WxSB_RotateYScroll(wxScrollEvent& event)
{
	wxString str;
     str<<(WxSB_RotateY->GetThumbPosition());
     WxST_RotateY->SetLabel(str);
 //    Repaint();
}

/*
 * WxSB_RotateZScroll
 */
void Project_36Frm::WxSB_RotateZScroll(wxScrollEvent& event)
{
	wxString str;
     str<<(WxSB_RotateZ->GetThumbPosition());
     WxST_RotateZ->SetLabel(str);
 //    Repaint();
}
