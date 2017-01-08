///-----------------------------------------------------------------
///
/// @file      AffichageGraphique.cpp
/// @author    Laurent
/// Created:   08/01/2017 23:05:04
/// @section   DESCRIPTION
///            AffichageGraphique class implementation
///
///------------------------------------------------------------------

#include "AffichageGraphique.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
#include "Images/AffichageGraphique_frmNewForm_XPM.xpm"
////Header Include End

//----------------------------------------------------------------------------
// AffichageGraphique
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(AffichageGraphique,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(AffichageGraphique::OnClose)
	EVT_TEXT_ENTER(ID_WXEDIT1,AffichageGraphique::WxEdit1Enter)
	EVT_BUTTON(ID_WXBUTTON1,AffichageGraphique::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

AffichageGraphique::AffichageGraphique(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

AffichageGraphique::~AffichageGraphique()
{
}

void AffichageGraphique::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _("WxEdit1"), wxPoint(428, 124), wxSize(126, 38), 0, wxDefaultValidator, _("WxEdit1"));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("+"), wxPoint(188, 173), wxSize(30, 30), 0, wxDefaultValidator, _("WxButton1"));

	SetTitle(_("AffichageGraphique"));
	SetIcon(AffichageGraphique_frmNewForm_XPM);
	SetSize(8,8,853,477);
	Center();
	
	////GUI Items Creation End
}

void AffichageGraphique::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton1Click
 */
void AffichageGraphique::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxEdit1Enter
 */
void AffichageGraphique::WxEdit1Enter(wxCommandEvent& event)
{
	// insert your code here
}
