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
		// Funkcja aktualizująca szkielet na podstawie punktów
		void repaint();
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
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
			ID_WXSTATICTEXT3 = 15,
			ID_WXSCROLLBAR1 = 14,
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
};

#endif
