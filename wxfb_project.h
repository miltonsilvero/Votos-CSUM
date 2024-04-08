///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.0.0-0-g0efcecf)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class m_Ventana
///////////////////////////////////////////////////////////////////////////////
class m_Ventana : public wxFrame
{
	private:

	protected:
		wxStaticBitmap* m_fondo;
		wxStaticText* m_pais;
		wxStaticText* m_votacion;
		wxButton* m_cargarButton;
		wxButton* m_finButton;
		wxButton* m_resetButton;
		wxChoice* m_paisChoise;
		wxChoice* m_votoChoise;

		// Virtual event handlers, override them in your derived class
		virtual void cargarPressed( wxCommandEvent& event ) { event.Skip(); }
		virtual void finPressed( wxCommandEvent& event ) { event.Skip(); }
		virtual void resetPressed( wxCommandEvent& event ) { event.Skip(); }


	public:

		m_Ventana( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,700 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~m_Ventana();

};

