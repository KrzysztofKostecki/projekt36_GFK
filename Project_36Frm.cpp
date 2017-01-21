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
	
	EVT_COMMAND_SCROLL(ID_WXSB_BarkLeftRotateZ,Project_36Frm::WxSB_BarkLeftRotateZScroll)
	
	EVT_COMMAND_SCROLL(wxID_BARKPRAWYROTATEZ,Project_36Frm::WxSB_BarkPrawyRotateZScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_BARKPRAWYROTATEY,Project_36Frm::WxSB_BarkPrawyRotateYScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_BarkLeftRotateY,Project_36Frm::WxSB_BarkLeftRotateYScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_HEADROTATEX,Project_36Frm::WxSB_HeadRotateXScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_HEADROTATEZ,Project_36Frm::WxSB_HeadRotateZScroll)
	
	EVT_COMMAND_SCROLL(wxID_OPEN,Project_36Frm::WxSB_RotateZScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_ROTATEY,Project_36Frm::WxSB_RotateYScroll)
	
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

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(5, 67), wxSize(431, 265));
	WxBoxSizer1->Add(WxPanel1, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer2 = new wxBoxSizer(wxVERTICAL);
	WxBoxSizer1->Add(WxBoxSizer2, 0, wxALIGN_CENTER | wxALL | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 10);

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Obrot ca³ego szkieletu"), wxPoint(148, 5), wxDefaultSize, 0, _("WxStaticText1"));
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

	WxSB_RotateY = new wxScrollBar(this, ID_WXSB_ROTATEY, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_RotateY"));
	WxSB_RotateY->Enable(false);
	WxBoxSizer4->Add(WxSB_RotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_RotateY = new wxStaticText(this, ID_WXSTATICTEXT3, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_RotateY"));
	WxBoxSizer4->Add(WxST_RotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer5, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText6 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OZ:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText6"));
	WxBoxSizer5->Add(WxStaticText6, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_RotateZ = new wxScrollBar(this, wxID_OPEN, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_RotateZ"));
	WxSB_RotateZ->Enable(false);
	WxBoxSizer5->Add(WxSB_RotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_RotateZ = new wxStaticText(this, ID_WXSTATICTEXT3, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_RotateZ"));
	WxBoxSizer5->Add(WxST_RotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText111 = new wxStaticText(this, ID_WXSTATICTEXT111, _("G³owa"), wxPoint(190, 151), wxDefaultSize, 0, _("WxStaticText111"));
	WxBoxSizer2->Add(WxStaticText111, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer6, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText5 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OZ:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText5"));
	WxBoxSizer6->Add(WxStaticText5, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_HeadRotateZ = new wxScrollBar(this, ID_WXSB_HEADROTATEZ, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_HeadRotateZ"));
	WxSB_HeadRotateZ->Enable(false);
	WxBoxSizer6->Add(WxSB_HeadRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_HeadRotateZ = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_HeadRotateZ"));
	WxBoxSizer6->Add(WxST_HeadRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer7, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OX:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText3"));
	WxBoxSizer7->Add(WxStaticText3, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_HeadRotateX = new wxScrollBar(this, ID_WXSB_HEADROTATEX, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_HeadRotateX"));
	WxSB_HeadRotateX->Enable(false);
	WxBoxSizer7->Add(WxSB_HeadRotateX, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_HeadRotateX = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_HeadRotateX"));
	WxBoxSizer7->Add(WxST_HeadRotateX, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer8, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer9 = new wxBoxSizer(wxVERTICAL);
	WxBoxSizer8->Add(WxBoxSizer9, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer10 = new wxBoxSizer(wxVERTICAL);
	WxBoxSizer8->Add(WxBoxSizer10, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText7 = new wxStaticText(this, ID_WXSTATICTEXT7, _("Bark Lewy"), wxPoint(68, 5), wxDefaultSize, 0, _("WxStaticText7"));
	WxBoxSizer9->Add(WxStaticText7, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText8 = new wxStaticText(this, ID_WXSTATICTEXT8, _("Bark Prawy"), wxPoint(66, 5), wxDefaultSize, 0, _("WxStaticText8"));
	WxBoxSizer10->Add(WxStaticText8, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer9->Add(WxBoxSizer11, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText9 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OY:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText9"));
	WxBoxSizer11->Add(WxStaticText9, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_BarkLeftRotateY = new wxScrollBar(this, ID_WXSB_BarkLeftRotateY, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_BarkLeftRotateY"));
	WxSB_BarkLeftRotateY->Enable(false);
	WxBoxSizer11->Add(WxSB_BarkLeftRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_BarkLeftRotateY = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_BarkLeftRotateY"));
	WxBoxSizer11->Add(WxST_BarkLeftRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer10->Add(WxBoxSizer12, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText11 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OY:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText11"));
	WxBoxSizer12->Add(WxStaticText11, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_BarkPrawyRotateY = new wxScrollBar(this, ID_WXSB_BARKPRAWYROTATEY, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_BarkPrawyRotateY"));
	WxSB_BarkPrawyRotateY->Enable(false);
	WxBoxSizer12->Add(WxSB_BarkPrawyRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_BarkPrawyRotateY = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_BarkPrawyRotateY"));
	WxBoxSizer12->Add(WxST_BarkPrawyRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer10->Add(WxBoxSizer14, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText15 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OZ:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText15"));
	WxBoxSizer14->Add(WxStaticText15, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_BarkPrawyRotateZ = new wxScrollBar(this, wxID_BARKPRAWYROTATEZ, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_BarkPrawyRotateZ"));
	WxSB_BarkPrawyRotateZ->Enable(false);
	WxBoxSizer14->Add(WxSB_BarkPrawyRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_BarkPrawyRotateZ = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_BarkPrawyRotateZ"));
	WxBoxSizer14->Add(WxST_BarkPrawyRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer9->Add(WxBoxSizer13, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText10 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OZ:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText10"));
	WxBoxSizer13->Add(WxStaticText10, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_BarkLeftRotateZ = new wxScrollBar(this, ID_WXSB_BarkLeftRotateZ, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_BarkLeftRotateZ"));
	WxSB_BarkLeftRotateZ->Enable(false);
	WxBoxSizer13->Add(WxSB_BarkLeftRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_BarkLeftRotateZ = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_BarkLeftRotateZ"));
	WxBoxSizer13->Add(WxST_BarkLeftRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

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
	
	WxSB_HeadRotateZ->SetScrollbar(0, 1, 201, 1,true);
	WxSB_HeadRotateZ->Enable(true);
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
    updatePoints();
    repaint();
}

/*
 * WxSB_RotateYScroll
 */
void Project_36Frm::WxSB_RotateYScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_RotateY->GetThumbPosition());
    WxST_RotateY->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_RotateZScroll
 */
void Project_36Frm::WxSB_RotateZScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_RotateZ->GetThumbPosition());
    WxST_RotateZ->SetLabel(str);
    updatePoints();
    repaint();
}

// Funkcja aktualizuj¹ca szkielet na podstawie punktów
void Project_36Frm::repaint()
{
	/* TODO (#1#): Implement Project_36Frm::repaint() */
}

/*
 * Funkcja aktualizuj¹ca punkty
 */
void Project_36Frm::updatePoints()
{
	/* TODO (#1#): Implement Project_36Frm::updatePoints() */
}

/*
 * WxSB_HeadRotateZScroll
 */
void Project_36Frm::WxSB_HeadRotateZScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_HeadRotateZ->GetThumbPosition());
    WxST_HeadRotateZ->SetLabel(str);
    updatePoints();
    repaint();
}
/*
 * WxSB_HeadRotateXScroll
 */
void Project_36Frm::WxSB_HeadRotateXScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_HeadRotateX->GetThumbPosition());
    WxST_HeadRotateX->SetLabel(str);
    updatePoints();
    repaint();
}


/*
 * WxSB_BarkLeftRotateYScroll
 */
void Project_36Frm::WxSB_BarkLeftRotateYScroll(wxScrollEvent& event)
{
	// insert your code here
}

/*
 * WxSB_BarkLeftRotateZScroll
 */
void Project_36Frm::WxSB_BarkLeftRotateZScroll(wxScrollEvent& event)
{
	// insert your code here
}

/*
 * WxSB_BarkPrawyRotateYScroll
 */
void Project_36Frm::WxSB_BarkPrawyRotateYScroll(wxScrollEvent& event)
{
	// insert your code here
}

/*
 * WxSB_BarkPrawyRotateZScroll
 */
void Project_36Frm::WxSB_BarkPrawyRotateZScroll(wxScrollEvent& event)
{
	// insert your code here
}
