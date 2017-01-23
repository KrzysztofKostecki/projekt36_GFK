///-----------------------------------------------------------------
///
/// @file      Project_36Frm.h
/// @author    Krzysztof
/// Created:   21.01.2017 19:41:22
/// @section   DESCRIPTION
///            Project_36Frm class declaration
///
///------------------------------------------------------------------

#ifndef __PROJECT_36FRM_H__
#define __PROJECT_36FRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/scrolbar.h>
#include <wx/stattext.h>
#include <wx/panel.h>
#include <wx/sizer.h>
////Header Include End
//#include "vecmat.h"
#include "Nodes.h"

////Dialog Style Start
#undef Project_36Frm_STYLE
#define Project_36Frm_STYLE wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class Project_36Frm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		Project_36Frm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Project_36"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Project_36Frm_STYLE);
		virtual ~Project_36Frm();
		void WxSB_RotateXScroll(wxScrollEvent& event);
		void WxSB_RotateYScroll(wxScrollEvent& event);
		void WxSB_RotateZScroll(wxScrollEvent& event);
		void initPoints();
		// Funkcja aktualizuj¹ca szkielet na podstawie punktów
		void repaint();
		/**
		 * Funkcja aktualizuj¹ca punkty
		 */
		void updatePoints();
		void WxSB_HeadRotateZScroll(wxScrollEvent& event);
		void WxSB_HeadRotateXScroll(wxScrollEvent& event);
		void WxSB_BarkLeftRotateYScroll(wxScrollEvent& event);
		void WxSB_BarkLeftRotateZScroll(wxScrollEvent& event);
		void WxSB_BarkPrawyRotateYScroll(wxScrollEvent& event);
		void WxSB_BarkPrawyRotateZScroll(wxScrollEvent& event);
		void WxSB_RekaLeftRotateYScroll(wxScrollEvent& event);
		void WxSB_RekaLeftRotateZScroll(wxScrollEvent& event);
		void WxSB_RekaRightRotateYScroll(wxScrollEvent& event);
		void WxSB_RekaRightRotateZScroll(wxScrollEvent& event);
		void WxSB_StomachRotateZScroll(wxScrollEvent& event);
		void WxSB_StomachRotateXScroll(wxScrollEvent& event);
		void WxPanel1UpdateUI(wxUpdateUIEvent& event);
		void WxSB_BiodroLeweRotateYScroll(wxScrollEvent& event);
		void WxSB_BiodroLeweRotateZScroll(wxScrollEvent& event);
		void WxSB_BiodroPraweRotateYScroll(wxScrollEvent& event);
		void WxSB_BiodroPraweRotateZScroll(wxScrollEvent& event);
		void WxSB_KolanoLeweRotateZScroll(wxScrollEvent& event);
		void WxSB_KolanoPraweRotateZScroll(wxScrollEvent& event);
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxStaticText *WxST_KolanoPraweRotateZ;
		wxScrollBar *WxSB_KolanoPraweRotateZ;
		wxStaticText *WxStaticText35;
		wxBoxSizer *WxBoxSizer27;
		wxStaticText *WxStaticText34;
		wxStaticText *WxST_BiodroPraweRotateZ;
		wxScrollBar *WxSB_BiodroPraweRotateZ;
		wxStaticText *WxStaticText32;
		wxBoxSizer *WxBoxSizer26;
		wxStaticText *WxST_BiodroPraweRotateY;
		wxScrollBar *WxSB_BiodroPraweRotateY;
		wxStaticText *WxStaticText30;
		wxBoxSizer *WxBoxSizer25;
		wxStaticText *WxStaticText29;
		wxStaticText *WxStaticText28;
		wxScrollBar *WxSB_KolanoLeweRotateZ;
		wxStaticText *WxStaticText27;
		wxBoxSizer *WxBoxSizer24;
		wxStaticText *WxStaticText26;
		wxStaticText *WxST_BiodroLeweRotateZ;
		wxScrollBar *WxSB_BiodroLeweRotateZ;
		wxStaticText *WxStaticText24;
		wxBoxSizer *WxBoxSizer23;
		wxStaticText *WxST_BiodroLeweRotateY;
		wxScrollBar *WxSB_BiodroLeweRotateY;
		wxStaticText *WxStaticText22;
		wxBoxSizer *WxBoxSizer22;
		wxStaticText *WxStaticText21;
		wxBoxSizer *WxBoxSizer21;
		wxBoxSizer *WxBoxSizer20;
		wxBoxSizer *WxBoxSizer19;
		wxStaticText *WxStaticText17;
		wxStaticText *WxST_StomachRotateX;
		wxScrollBar *WxSB_StomachRotateX;
		wxStaticText *WxStaticText20;
		wxBoxSizer *WxBoxSizer18;
		wxStaticText *WxST_StomachRotateZ;
		wxScrollBar *WxSB_StomachRotateZ;
		wxStaticText *WxStaticText16;
		wxBoxSizer *WxBoxSizer16;
		wxStaticText *WxStaticText14;
		wxStaticText *WxST_RekaRightRotateY;
		wxScrollBar *WxSB_RekaRightRotateY;
		wxStaticText *WxStaticText19;
		wxBoxSizer *WxBoxSizer17;
		wxStaticText *WxStaticText18;
		wxStaticText *WxST_BarkPrawyRotateZ;
		wxScrollBar *WxSB_BarkPrawyRotateZ;
		wxStaticText *WxStaticText15;
		wxBoxSizer *WxBoxSizer14;
		wxStaticText *WxST_BarkPrawyRotateY;
		wxScrollBar *WxSB_BarkPrawyRotateY;
		wxStaticText *WxStaticText11;
		wxBoxSizer *WxBoxSizer12;
		wxStaticText *WxStaticText8;
		wxBoxSizer *WxBoxSizer10;
		wxStaticText *WxST_RekaLeftRotateY;
		wxScrollBar *WxSB_RekaLeftRotateY;
		wxStaticText *WxStaticText13;
		wxBoxSizer *WxBoxSizer15;
		wxStaticText *WxStaticText12;
		wxStaticText *WxST_BarkLeftRotateZ;
		wxScrollBar *WxSB_BarkLeftRotateZ;
		wxStaticText *WxStaticText10;
		wxBoxSizer *WxBoxSizer13;
		wxStaticText *WxST_BarkLeftRotateY;
		wxScrollBar *WxSB_BarkLeftRotateY;
		wxStaticText *WxStaticText9;
		wxBoxSizer *WxBoxSizer11;
		wxStaticText *WxStaticText7;
		wxBoxSizer *WxBoxSizer9;
		wxBoxSizer *WxBoxSizer8;
		wxStaticText *WxST_HeadRotateX;
		wxScrollBar *WxSB_HeadRotateX;
		wxStaticText *WxStaticText3;
		wxBoxSizer *WxBoxSizer7;
		wxStaticText *WxST_HeadRotateZ;
		wxScrollBar *WxSB_HeadRotateZ;
		wxStaticText *WxStaticText5;
		wxBoxSizer *WxBoxSizer6;
		wxStaticText *WxStaticText111;
		wxStaticText *WxST_RotateZ;
		wxScrollBar *WxSB_RotateZ;
		wxStaticText *WxStaticText6;
		wxBoxSizer *WxBoxSizer5;
		wxStaticText *WxST_RotateY;
		wxScrollBar *WxSB_RotateY;
		wxStaticText *WxStaticText4;
		wxBoxSizer *WxBoxSizer4;
		wxStaticText *WxST_RotateX;
		wxScrollBar *WxSB_RotateX;
		wxStaticText *WxStaticText2;
		wxBoxSizer *WxBoxSizer3;
		wxStaticText *WxStaticText1;
		wxBoxSizer *WxBoxSizer2;
		wxPanel *WxPanel1;
		wxBoxSizer *WxBoxSizer1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WxSB_KolanoPraweRotateZ = 71,
			ID_WXSTATICTEXT34 = 104,
			ID_WxSB_BiodroPraweRotateZ = 81,
			ID_WxSB_BiodroPraweRotateY = 80,
			ID_WXSTATICTEXT29 = 101,
			ID_WxSB_KolanoLeweRotateZ = 70,
			ID_WXSTATICTEXT26 = 89,
			ID_WXST_WxST_BiodroLeweRotateZ = 15,
			ID_WXSB_WxSB_BiodroLeweRotateZ = 61,
			ID_WXSB_WxSB_BiodroLeweRotateY = 60,
			ID_WXSTATICTEXT21 = 86,
			ID_WXSTATICTEXT17 = 72,
			wxID_STOMACHROTATEX = 41,
			ID_WXSB_STOMACHROTATEZ = 40,
			ID_WXSTATICTEXT14 = 62,
			ID_WXSB_RekaRightRotateY = 34,
			ID_WXSTATICTEXT18 = 53,
			wxID_BARKPRAWYROTATEZ = 23,
			ID_WXSB_BARKPRAWYROTATEY = 22,
			ID_WXSTATICTEXT8 = 27,
			ID_WXSB_RekaLeftRotateY = 32,
			ID_WXSTATICTEXT12 = 47,
			ID_WXSB_BarkLeftRotateZ = 21,
			ID_WXSB_BarkLeftRotateY = 20,
			ID_WXSTATICTEXT7 = 26,
			ID_WXSB_HEADROTATEX = 18,
			ID_WXSB_HEADROTATEZ = 17,
			ID_WXSTATICTEXT111 = 19,
			ID_WXSTATICTEXT3 = 15,
			ID_WXSB_ROTATEY = 15,
			ID_WXST_ROTATEX = 15,
			ID_WXSB_ROTATEX = 14,
			ID_WXSTATICTEXT2 = 13,
			ID_WXSTATICTEXT1 = 6,
			ID_WXPANEL1 = 4,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
		vector<Point> points;
};

#endif
