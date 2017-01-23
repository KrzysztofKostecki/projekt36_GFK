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
	
	EVT_COMMAND_SCROLL(ID_WxSB_KolanoPraweRotateZ,Project_36Frm::WxSB_KolanoPraweRotateZScroll)
	
	EVT_COMMAND_SCROLL(ID_WxSB_BiodroPraweRotateZ,Project_36Frm::WxSB_BiodroPraweRotateZScroll)
	
	EVT_COMMAND_SCROLL(ID_WxSB_BiodroPraweRotateY,Project_36Frm::WxSB_BiodroPraweRotateYScroll)
	
	EVT_COMMAND_SCROLL(ID_WxSB_KolanoLeweRotateZ,Project_36Frm::WxSB_KolanoLeweRotateZScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_WxSB_BiodroLeweRotateZ,Project_36Frm::WxSB_BiodroLeweRotateZScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_WxSB_BiodroLeweRotateY,Project_36Frm::WxSB_BiodroLeweRotateYScroll)
	
	EVT_COMMAND_SCROLL(wxID_STOMACHROTATEX,Project_36Frm::WxSB_StomachRotateXScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_STOMACHROTATEZ,Project_36Frm::WxSB_StomachRotateZScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_RekaRightRotateY,Project_36Frm::WxSB_RekaRightRotateYScroll)
	
	EVT_COMMAND_SCROLL(wxID_BARKPRAWYROTATEZ,Project_36Frm::WxSB_BarkPrawyRotateZScroll0)
	
	EVT_COMMAND_SCROLL(ID_WXSB_BARKPRAWYROTATEY,Project_36Frm::WxSB_BarkPrawyRotateYScroll0)
	
	EVT_COMMAND_SCROLL(ID_WXSB_RekaLeftRotateY,Project_36Frm::WxSB_RekaLeftRotateYScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_BarkLeftRotateZ,Project_36Frm::WxSB_BarkLeftRotateZScroll0)
	
	EVT_COMMAND_SCROLL(ID_WXSB_BarkLeftRotateY,Project_36Frm::WxSB_BarkLeftRotateYScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_HEADROTATEX,Project_36Frm::WxSB_HeadRotateXScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_HEADROTATEZ,Project_36Frm::WxSB_HeadRotateZScroll)
	
	EVT_COMMAND_SCROLL(wxID_OPEN,Project_36Frm::WxSB_RotateZScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_ROTATEY,Project_36Frm::WxSB_RotateYScroll)
	
	EVT_COMMAND_SCROLL(ID_WXSB_ROTATEX,Project_36Frm::WxSB_RotateXScroll)
	
	EVT_UPDATE_UI(ID_WXPANEL1,Project_36Frm::WxPanel1UpdateUI)
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

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(5, 369), wxSize(231, 61));
	WxBoxSizer1->Add(WxPanel1, 5, wxEXPAND | wxALL, 5);

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

	WxStaticText7 = new wxStaticText(this, ID_WXSTATICTEXT7, _("Bark Lewy"), wxPoint(68, 5), wxDefaultSize, 0, _("WxStaticText7"));
	WxBoxSizer9->Add(WxStaticText7, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer9->Add(WxBoxSizer11, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText9 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OY:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText9"));
	WxBoxSizer11->Add(WxStaticText9, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_BarkLeftRotateY = new wxScrollBar(this, ID_WXSB_BarkLeftRotateY, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_BarkLeftRotateY"));
	WxSB_BarkLeftRotateY->Enable(false);
	WxBoxSizer11->Add(WxSB_BarkLeftRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_BarkLeftRotateY = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_BarkLeftRotateY"));
	WxBoxSizer11->Add(WxST_BarkLeftRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer9->Add(WxBoxSizer13, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText10 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OZ:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText10"));
	WxBoxSizer13->Add(WxStaticText10, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_BarkLeftRotateZ = new wxScrollBar(this, ID_WXSB_BarkLeftRotateZ, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_BarkLeftRotateZ"));
	WxSB_BarkLeftRotateZ->Enable(false);
	WxBoxSizer13->Add(WxSB_BarkLeftRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_BarkLeftRotateZ = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_BarkLeftRotateZ"));
	WxBoxSizer13->Add(WxST_BarkLeftRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText12 = new wxStaticText(this, ID_WXSTATICTEXT12, _("Reka Lewy"), wxPoint(67, 112), wxDefaultSize, 0, _("WxStaticText12"));
	WxBoxSizer9->Add(WxStaticText12, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer9->Add(WxBoxSizer15, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText13 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OY:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText13"));
	WxBoxSizer15->Add(WxStaticText13, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_RekaLeftRotateY = new wxScrollBar(this, ID_WXSB_RekaLeftRotateY, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_RekaLeftRotateY"));
	WxSB_RekaLeftRotateY->Enable(false);
	WxBoxSizer15->Add(WxSB_RekaLeftRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_RekaLeftRotateY = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_RekaLeftRotateY"));
	WxBoxSizer15->Add(WxST_RekaLeftRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer10 = new wxBoxSizer(wxVERTICAL);
	WxBoxSizer8->Add(WxBoxSizer10, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText8 = new wxStaticText(this, ID_WXSTATICTEXT8, _("Bark Prawy"), wxPoint(66, 5), wxDefaultSize, 0, _("WxStaticText8"));
	WxBoxSizer10->Add(WxStaticText8, 0, wxALIGN_CENTER | wxALL, 5);

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

	WxStaticText18 = new wxStaticText(this, ID_WXSTATICTEXT18, _("Reka Prawy"), wxPoint(65, 112), wxDefaultSize, 0, _("WxStaticText18"));
	WxBoxSizer10->Add(WxStaticText18, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer10->Add(WxBoxSizer17, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText19 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OY:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText19"));
	WxBoxSizer17->Add(WxStaticText19, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_RekaRightRotateY = new wxScrollBar(this, ID_WXSB_RekaRightRotateY, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_RekaRightRotateY"));
	WxSB_RekaRightRotateY->Enable(false);
	WxBoxSizer17->Add(WxSB_RekaRightRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_RekaRightRotateY = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_RekaRightRotateY"));
	WxBoxSizer17->Add(WxST_RekaRightRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText14 = new wxStaticText(this, ID_WXSTATICTEXT14, _("Brzuch"), wxPoint(189, 453), wxDefaultSize, 0, _("WxStaticText14"));
	WxBoxSizer2->Add(WxStaticText14, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer16, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText16 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OZ:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText16"));
	WxBoxSizer16->Add(WxStaticText16, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_StomachRotateZ = new wxScrollBar(this, ID_WXSB_STOMACHROTATEZ, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_StomachRotateZ"));
	WxSB_StomachRotateZ->Enable(false);
	WxBoxSizer16->Add(WxSB_StomachRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_StomachRotateZ = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_StomachRotateZ"));
	WxBoxSizer16->Add(WxST_StomachRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer18, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText20 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OX:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText20"));
	WxBoxSizer18->Add(WxStaticText20, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_StomachRotateX = new wxScrollBar(this, wxID_STOMACHROTATEX, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_StomachRotateX"));
	WxSB_StomachRotateX->Enable(false);
	WxBoxSizer18->Add(WxSB_StomachRotateX, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_StomachRotateX = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_StomachRotateX"));
	WxBoxSizer18->Add(WxST_StomachRotateX, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText17 = new wxStaticText(this, ID_WXSTATICTEXT17, _("Nogi"), wxPoint(194, 560), wxDefaultSize, 0, _("WxStaticText17"));
	WxBoxSizer2->Add(WxStaticText17, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer2->Add(WxBoxSizer19, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer20 = new wxBoxSizer(wxVERTICAL);
	WxBoxSizer19->Add(WxBoxSizer20, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer21 = new wxBoxSizer(wxVERTICAL);
	WxBoxSizer19->Add(WxBoxSizer21, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText21 = new wxStaticText(this, ID_WXSTATICTEXT21, _("Biodro Lewe"), wxPoint(62, 5), wxDefaultSize, 0, _("WxStaticText21"));
	WxBoxSizer20->Add(WxStaticText21, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer22 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer20->Add(WxBoxSizer22, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText22 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OY:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText22"));
	WxBoxSizer22->Add(WxStaticText22, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_BiodroLeweRotateY = new wxScrollBar(this, ID_WXSB_WxSB_BiodroLeweRotateY, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_BiodroLeweRotateY"));
	WxSB_BiodroLeweRotateY->Enable(false);
	WxBoxSizer22->Add(WxSB_BiodroLeweRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_BiodroLeweRotateY = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_BiodroLeweRotateY"));
	WxBoxSizer22->Add(WxST_BiodroLeweRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer20->Add(WxBoxSizer23, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText24 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OZ:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText24"));
	WxBoxSizer23->Add(WxStaticText24, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_BiodroLeweRotateZ = new wxScrollBar(this, ID_WXSB_WxSB_BiodroLeweRotateZ, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_BiodroLeweRotateZ"));
	WxSB_BiodroLeweRotateZ->Enable(false);
	WxBoxSizer23->Add(WxSB_BiodroLeweRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_BiodroLeweRotateZ = new wxStaticText(this, ID_WXST_WxST_BiodroLeweRotateZ, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_BiodroLeweRotateZ"));
	WxBoxSizer23->Add(WxST_BiodroLeweRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText26 = new wxStaticText(this, ID_WXSTATICTEXT26, _("Kolano Lewe"), wxPoint(61, 112), wxDefaultSize, 0, _("WxStaticText26"));
	WxBoxSizer20->Add(WxStaticText26, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer20->Add(WxBoxSizer24, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText27 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OZ:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText27"));
	WxBoxSizer24->Add(WxStaticText27, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_KolanoLeweRotateZ = new wxScrollBar(this, ID_WxSB_KolanoLeweRotateZ, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_KolanoLeweRotateZ"));
	WxSB_KolanoLeweRotateZ->Enable(false);
	WxBoxSizer24->Add(WxSB_KolanoLeweRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_KolanoLeweRotateZ = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_KolanoLeweRotateZ"));
	WxBoxSizer24->Add(WxST_KolanoLeweRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText29 = new wxStaticText(this, ID_WXSTATICTEXT29, _("Biodro Prawe"), wxPoint(60, 5), wxDefaultSize, 0, _("WxStaticText29"));
	WxBoxSizer21->Add(WxStaticText29, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer25 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer21->Add(WxBoxSizer25, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText30 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OY:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText30"));
	WxBoxSizer25->Add(WxStaticText30, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_BiodroPraweRotateY = new wxScrollBar(this, ID_WxSB_BiodroPraweRotateY, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_BiodroPraweRotateY"));
	WxSB_BiodroPraweRotateY->Enable(false);
	WxBoxSizer25->Add(WxSB_BiodroPraweRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_BiodroPraweRotateY = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_BiodroPraweRotateY"));
	WxBoxSizer25->Add(WxST_BiodroPraweRotateY, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer21->Add(WxBoxSizer26, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText32 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OZ:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText32"));
	WxBoxSizer26->Add(WxStaticText32, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_BiodroPraweRotateZ = new wxScrollBar(this, ID_WxSB_BiodroPraweRotateZ, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_BiodroPraweRotateZ"));
	WxSB_BiodroPraweRotateZ->Enable(false);
	WxBoxSizer26->Add(WxSB_BiodroPraweRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_BiodroPraweRotateZ = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_BiodroPraweRotateZ"));
	WxBoxSizer26->Add(WxST_BiodroPraweRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText34 = new wxStaticText(this, ID_WXSTATICTEXT34, _("Kolano Prawe"), wxPoint(59, 112), wxDefaultSize, 0, _("WxStaticText34"));
	WxBoxSizer21->Add(WxStaticText34, 0, wxALIGN_CENTER | wxALL, 5);

	WxBoxSizer27 = new wxBoxSizer(wxHORIZONTAL);
	WxBoxSizer21->Add(WxBoxSizer27, 0, wxALIGN_CENTER | wxALL, 5);

	WxStaticText35 = new wxStaticText(this, ID_WXSTATICTEXT2, _("OZ:"), wxPoint(5, 5), wxDefaultSize, 0, _("WxStaticText35"));
	WxBoxSizer27->Add(WxStaticText35, 0, wxALIGN_CENTER | wxALL, 5);

	WxSB_KolanoPraweRotateZ = new wxScrollBar(this, ID_WxSB_KolanoPraweRotateZ, wxPoint(38, 6), wxSize(121, 17), wxSB_HORIZONTAL, wxDefaultValidator, _("WxSB_KolanoPraweRotateZ"));
	WxSB_KolanoPraweRotateZ->Enable(false);
	WxBoxSizer27->Add(WxSB_KolanoPraweRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

	WxST_KolanoPraweRotateZ = new wxStaticText(this, ID_WXST_ROTATEX, _("0"), wxPoint(169, 5), wxDefaultSize, 0, _("WxST_KolanoPraweRotateZ"));
	WxBoxSizer27->Add(WxST_KolanoPraweRotateZ, 0, wxALIGN_CENTER | wxALL, 5);

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
	
	
	
	
	
	WxSB_HeadRotateZ->SetScrollbar(0, 1, 201, 1,true);
	WxSB_HeadRotateZ->Enable(true);
	WxSB_HeadRotateX->SetScrollbar(0, 1, 201, 1,true);
	WxSB_HeadRotateX->Enable(true);
	
	WxSB_BarkLeftRotateY->SetScrollbar(0, 1, 201, 1,true);
	WxSB_BarkLeftRotateY->Enable(true);
	WxSB_BarkLeftRotateZ->SetScrollbar(0, 1, 201, 1,true);
	WxSB_BarkLeftRotateZ->Enable(true);
	
	WxSB_BarkPrawyRotateY->SetScrollbar(0, 1, 201, 1,true);
	WxSB_BarkPrawyRotateY->Enable(true);
	WxSB_BarkPrawyRotateZ->SetScrollbar(0, 1, 201, 1,true);
	WxSB_BarkPrawyRotateZ->Enable(true);
	
    WxSB_RekaLeftRotateY->SetScrollbar(0, 1, 201, 1,true);
    WxSB_RekaLeftRotateY->Enable(true);
    WxSB_RekaRightRotateY->SetScrollbar(0, 1, 201, 1,true);
    WxSB_RekaRightRotateY->Enable(true);
    
    WxSB_StomachRotateX->SetScrollbar(0, 1, 201, 1,true);
    WxSB_StomachRotateX->Enable(true);
    WxSB_StomachRotateZ->SetScrollbar(0, 1, 201, 1,true);
    WxSB_StomachRotateZ->Enable(true);
    
    WxSB_BiodroLeweRotateY->SetScrollbar(0, 1, 201, 1,true);
    WxSB_BiodroLeweRotateY->Enable(true);
    WxSB_BiodroPraweRotateY->SetScrollbar(0, 1, 201, 1,true);
    WxSB_BiodroPraweRotateY->Enable(true);
    
    WxSB_BiodroLeweRotateZ->SetScrollbar(0, 1, 201, 1,true);
    WxSB_BiodroLeweRotateZ->Enable(true);
    WxSB_BiodroPraweRotateZ->SetScrollbar(0, 1, 201, 1,true);
    WxSB_BiodroPraweRotateZ->Enable(true);
    
    WxSB_KolanoPraweRotateZ->SetScrollbar(0, 1, 201, 1,true);
    WxSB_KolanoPraweRotateZ->Enable(true);
    WxSB_KolanoLeweRotateZ->SetScrollbar(0, 1, 201, 1,true);
    WxSB_KolanoLeweRotateZ->Enable(true);
    
    
    
	
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
    Project_36Frm::initPoints();
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
    Project_36Frm::initPoints();
    updatePoints();
    repaint();
}


void Project_36Frm::initPoints()
{
    points = vector<Point>(16);
    points[HEAD] = Point(0, 0.8, 0);
    points[NECK] = Point(0, 0.5, 0);
    points[HIP] = Point(0,-0.5,0);
    points[LLEG] = Point(-0.15, -0.52, 0);
    points[RLEG] = Point(0.15, -0.52, 0);
    points[LKNEE] = Point(-0.4, -0.8, 0);
    points[RKNEE] = Point(0.4, -0.8, 0);
    points[LFOOT] = Point(-0.65, -1.1, 0);
    points[RFOOT] = Point(0.65, -1.1, 1.0);
    points[LARM] = Point(-0.15, 0.5, 0);
    points[RARM] = Point(0.15, 0.5, 0);
    points[LELBOW] = Point(-0.4, 0.5, 0);
    points[RELBOW] = Point(0.4, 0.5, 0);
    points[LHAND] = Point(-0.7, 0.5, 0);
    points[RHAND] = Point(0.7, 0.5, 0);   
}

// Funkcja aktualizuj¹ca szkielet na podstawie punktów
void Project_36Frm::repaint()
{
	/* TODO (#1#): Implement Project_36Frm::repaint() */
	wxClientDC dc1(WxPanel1);
    int w,h;
    wxBufferedDC dc(&dc1);   
    WxPanel1->GetSize(&w,&h);
    dc.SetBackground(wxBrush(RGB(255,255,255)));
    dc.Clear();
    
    
    PointsConverter *pointsConverter = new PointsConverter(w, h, 2.0);
    
    vector<wxPoint> nodes = pointsConverter->calculateWxPointsVector(points);
    
    dc.SetBrush(wxBrush(wxColor(0,0,0)));
    for(int i=0; i<11; i++){
        dc.DrawCircle(nodes[i], 2);
    }
    
    dc.DrawLine(nodes[HEAD], nodes[NECK]);
    dc.DrawLine(nodes[NECK], nodes[HIP]);
    dc.DrawLine(nodes[HIP], nodes[SPINE]);
    dc.DrawLine(nodes[HIP], nodes[LLEG]);
    dc.DrawLine(nodes[HIP], nodes[RLEG]);
    dc.DrawLine(nodes[LLEG], nodes[LKNEE]);
    dc.DrawLine(nodes[RLEG], nodes[RKNEE]);
    dc.DrawLine(nodes[LKNEE], nodes[LFOOT]);
    dc.DrawLine(nodes[RKNEE], nodes[RFOOT]);
    dc.DrawLine(nodes[NECK], nodes[LARM]);
    dc.DrawLine(nodes[NECK], nodes[RARM]);
    dc.DrawLine(nodes[LARM], nodes[LELBOW]);
    dc.DrawLine(nodes[RARM], nodes[RELBOW]);
    dc.DrawLine(nodes[LELBOW], nodes[LHAND]);
    dc.DrawLine(nodes[RELBOW], nodes[RHAND]);
	
	
}


 #include "vecmat.h"



void translate(double a, double b, double c, double* x1, double* y1, double* z1, double* x2, double* y2, double* z2){
    Matrix4 tran;
    Vector4 v1, v2, w;
    v1.Set(*x1, *y1, *z1);
    v2.Set(*x2, *y2, *z2);
    tran.data[0][0] = 1.0;
    tran.data[1][1] = 1.0;
    tran.data[2][2] = 1.0;
    tran.data[0][3] = a;
    tran.data[1][3] = b;
    tran.data[2][3] = c;
    
    
    w = tran*v1;
    *x1 = w.GetX();
    *y1 = w.GetY();
    *z1 = w.GetZ();
    
    w = tran*v2;
    *x2 = w.GetX();
    *y2 = w.GetY();
    *z2 = w.GetZ();
    
}


void rotateX(double alpha, double* x1, double* y1, double* z1, double* x2, double* y2, double* z2){
    Matrix4 m;
    double a = alpha*M_PI/180;
    
    Vector4 v1, v2, w;
    v1.Set(*x1, *y1, *z1);
    v2.Set(*x2, *y2, *z2);
    
    m.data[0][0] = 1.0;
    m.data[1][1] = cos(a);
    m.data[2][2] = cos(a);
    m.data[1][2] = -sin(a);
    m.data[2][1] = sin(a);
    
    w = m*v1;
    *x1 = w.GetX();
    *y1 = w.GetY();
    *z1 = w.GetZ();
    
    w = m*v2;
    *x2 = w.GetX();
    *y2 = w.GetY();
    *z2 = w.GetZ();
    
}

void rotateY(double alpha, double* x1, double* y1, double* z1, double* x2, double* y2, double* z2){
    Matrix4 m;
    double a = alpha*M_PI/180;

    
    Vector4 v1, v2, w;
    v1.Set(*x1, *y1, *z1);
    v2.Set(*x2, *y2, *z2);
    
    m.data[0][0] = cos(a);
    m.data[0][2] = sin(a);
    m.data[1][1] = 1.0;
    m.data[2][0] = -sin(a);
    m.data[2][2] = cos(a);
    
    w = m*v1;
    *x1 = w.GetX();
    *y1 = w.GetY();
    *z1 = w.GetZ();
    
    w = m*v2;
    *x2 = w.GetX();
    *y2 = w.GetY();
    *z2 = w.GetZ();
    
}

void rotateZ(double alpha, double* x1, double* y1, double* z1, double* x2, double* y2, double* z2){
    Matrix4 m;
    double a = alpha*M_PI/180;
    //double a = alpha;
    
    Vector4 v1, v2, w;
    v1.Set(*x1, *y1, *z1);
    v2.Set(*x2, *y2, *z2);
    
    m.data[0][0] = cos(a);
    m.data[0][1] = -sin(a);
    m.data[1][0] = sin(a);
    m.data[1][1] = cos(a);
    m.data[2][2] = 1.0;
    
    w = m*v1;
    *x1 = w.GetX();
    *y1 = w.GetY();
    *z1 = w.GetZ();
    
    w = m*v2;
    *x2 = w.GetX();
    *y2 = w.GetY();
    *z2 = w.GetZ();
    
}





/*
 * Funkcja aktualizuj¹ca punkty
 */

 
void normalization(Vector4 *v){
    for(int i = 0; i<=3; i++){
        v->data[i] = v->data[i]/v->data[3];
    }
}

//"point" który obracamy "around" 
/*void transformBodyPart(Matrix m, Point &p, Point wokol){
    Vector4 v;
       v.Set(p.x,p.y,p.z);
       v=m*v;
       normalization(&v);
       p.x = v.GetX();
       p.y = v.GetY();
       p.z = v.GetZ();
}*/
void Project_36Frm::updatePoints()
{
    Project_36Frm::initPoints();
	/* TODO (#1#): Implement Project_36Frm::updatePoints() */
	
	
	//HEAD rotation
    double alpha = (WxSB_HeadRotateZ->GetThumbPosition());
	
	double a, b, c;
	a = points[NECK].x;
	b = points[NECK].y;
	c = points[NECK].z;

	translate(-a,-b,-c, &(points[NECK].x), &(points[NECK].y), &(points[NECK].z), &(points[HEAD].x), &(points[HEAD].y), &(points[HEAD].z));
	rotateZ(alpha, &(points[NECK].x), &(points[NECK].y), &(points[NECK].z), &(points[HEAD].x), &(points[HEAD].y), &(points[HEAD].z));
	translate(a , b, c, &(points[NECK].x), &(points[NECK].y), &(points[NECK].z), &(points[HEAD].x), &(points[HEAD].y), &(points[HEAD].z));

	
	
	
	//whole skeleton rotation
	 Matrix4 m;
	 m.data[0][0]=1.0;
     m.data[1][1]=1.0;
     m.data[2][2]=1.0;
	 Matrix4 Rx,Ry,Rz;
     Rx.data[0][0]=1;
     Rx.data[1][1]=cos(M_PI/180*WxSB_RotateX->GetThumbPosition());
     Rx.data[2][1]=-sin(M_PI/180*WxSB_RotateX->GetThumbPosition());
     Rx.data[1][2]=sin(M_PI/180*WxSB_RotateX->GetThumbPosition());
     Rx.data[2][2]=cos(M_PI/180*WxSB_RotateX->GetThumbPosition());
     m=m*Rx;
     Ry.data[1][1]=1.0;
     Ry.data[0][0]=cos(M_PI/180*WxSB_RotateY->GetThumbPosition());
     Ry.data[0][2]=-sin(M_PI/180*WxSB_RotateY->GetThumbPosition());
     Ry.data[2][0]=sin(M_PI/180*WxSB_RotateY->GetThumbPosition());
     Ry.data[2][2]=cos(M_PI/180*WxSB_RotateY->GetThumbPosition());
     m=m*Ry;
     Rz.data[2][2]=1.0;
     Rz.data[0][0]=cos(M_PI/180*WxSB_RotateZ->GetThumbPosition());
     Rz.data[1][0]=-sin(M_PI/180*WxSB_RotateZ->GetThumbPosition());
     Rz.data[0][1]=sin(M_PI/180*WxSB_RotateZ->GetThumbPosition());
     Rz.data[1][1]=cos(M_PI/180*WxSB_RotateZ->GetThumbPosition());
     m=m*Rz;
     Vector4 v;
     for(std::vector<Point>::size_type i = 0; i != points.size(); i++) {
       v.Set(points[i].x,points[i].y,points[i].z);
       v=m*v;
       normalization(&v);
       points[i].x = v.GetX();
       points[i].y = v.GetY();
       points[i].z = v.GetZ();
    }
     
    
     
     
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
	wxString str;
    str<<(WxSB_BarkLeftRotateY->GetThumbPosition());
    WxST_BarkLeftRotateY->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_BarkLeftRotateZScroll
 */
void Project_36Frm::WxSB_BarkLeftRotateZScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_BarkLeftRotateZ->GetThumbPosition());
    WxST_BarkLeftRotateZ->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_BarkPrawyRotateYScroll
 */
void Project_36Frm::WxSB_BarkPrawyRotateYScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_BarkPrawyRotateY->GetThumbPosition());
    WxST_BarkPrawyRotateY->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_BarkPrawyRotateZScroll
 */
void Project_36Frm::WxSB_BarkPrawyRotateZScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_BarkPrawyRotateZ->GetThumbPosition());
    WxST_BarkPrawyRotateZ->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_RekaLeftRotateYScroll
 */
void Project_36Frm::WxSB_RekaLeftRotateYScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_RekaLeftRotateY->GetThumbPosition());
    WxST_RekaLeftRotateY->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_RekaLeftRotateZScroll
 */


/*
 * WxSB_RekaRightRotateYScroll
 */
void Project_36Frm::WxSB_RekaRightRotateYScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_RekaRightRotateY->GetThumbPosition());
    WxST_RekaRightRotateY->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_StomachRotateZScroll
 */
void Project_36Frm::WxSB_StomachRotateZScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_StomachRotateZ->GetThumbPosition());
    WxST_StomachRotateZ->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_StomachRotateXScroll
 */
void Project_36Frm::WxSB_StomachRotateXScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_StomachRotateX->GetThumbPosition());
    WxST_StomachRotateX->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxPanel1UpdateUI
 */
void Project_36Frm::WxPanel1UpdateUI(wxUpdateUIEvent& event)
{
	// insert your code here
	Project_36Frm::repaint();
	
	
}

/*
 * WxSB_BiodroLeweRotateYScroll
 */
void Project_36Frm::WxSB_BiodroLeweRotateYScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_BiodroLeweRotateY->GetThumbPosition());
    WxST_BiodroLeweRotateY->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_BiodroLeweRotateZScroll
 */
void Project_36Frm::WxSB_BiodroLeweRotateZScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_BiodroLeweRotateZ->GetThumbPosition());
    WxST_BiodroLeweRotateZ->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_BiodroPraweRotateYScroll
 */
void Project_36Frm::WxSB_BiodroPraweRotateYScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_BiodroPraweRotateY->GetThumbPosition());
    WxST_BiodroPraweRotateY->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_BiodroPraweRotateZScroll
 */
void Project_36Frm::WxSB_BiodroPraweRotateZScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_BiodroPraweRotateZ->GetThumbPosition());
    WxST_BiodroPraweRotateZ->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_KolanoLeweRotateZScroll
 */
void Project_36Frm::WxSB_KolanoLeweRotateZScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_KolanoLeweRotateZ->GetThumbPosition());
    WxST_KolanoLeweRotateZ->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_KolanoPraweRotateZScroll
 */
void Project_36Frm::WxSB_KolanoPraweRotateZScroll(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_KolanoPraweRotateZ->GetThumbPosition());
    WxST_KolanoPraweRotateZ->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_BarkLeftRotateZScroll0
 */
void Project_36Frm::WxSB_BarkLeftRotateZScroll0(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_BarkLeftRotateZ->GetThumbPosition());
    WxST_BarkLeftRotateZ->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_BarkPrawyRotateYScroll0
 */
void Project_36Frm::WxSB_BarkPrawyRotateYScroll0(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_BarkPrawyRotateY->GetThumbPosition());
    WxST_BarkPrawyRotateY->SetLabel(str);
    updatePoints();
    repaint();
}

/*
 * WxSB_BarkPrawyRotateZScroll0
 */
void Project_36Frm::WxSB_BarkPrawyRotateZScroll0(wxScrollEvent& event)
{
	wxString str;
    str<<(WxSB_BarkPrawyRotateZ->GetThumbPosition());
    WxST_BarkPrawyRotateZ->SetLabel(str);
    updatePoints();
    repaint();
}
