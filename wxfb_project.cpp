///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.0.0-0-g0efcecf)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

m_Ventana::m_Ventana( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_fondo = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 700,500 ), 0 );
	bSizer2->Add( m_fondo, 0, wxALL, 5 );


	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	m_pais = new wxStaticText( this, wxID_ANY, wxT("País"), wxDefaultPosition, wxDefaultSize, 0 );
	m_pais->Wrap( -1 );
	bSizer6->Add( m_pais, 0, wxALL, 5 );

	m_votacion = new wxStaticText( this, wxID_ANY, wxT("Votación"), wxDefaultPosition, wxDefaultSize, 0 );
	m_votacion->Wrap( -1 );
	bSizer6->Add( m_votacion, 0, wxALL, 5 );

	m_cargarButton = new wxButton( this, wxID_ANY, wxT("Cargar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_cargarButton, 0, wxALL, 5 );

	m_finButton = new wxButton( this, wxID_ANY, wxT("Fin de Votacion"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_finButton, 0, wxALL, 5 );

	m_resetButton = new wxButton( this, wxID_ANY, wxT("Reiniciar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_resetButton, 0, wxALL, 5 );


	bSizer5->Add( bSizer6, 0, 0, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	wxString m_paisChoiseChoices[] = { wxEmptyString, wxT("Argelia"), wxT("China"), wxT("Corea del Sur"), wxT("Ecuador"), wxT("Eslovenia"), wxT("Estados Unidos"), wxT("Federación Rusa"), wxT("Francia"), wxT("Guyana"), wxT("Japón"), wxT("Malta"), wxT("Mozambique"), wxT("Reino Unido"), wxT("Sierra Leona"), wxT("Suiza") };
	int m_paisChoiseNChoices = sizeof( m_paisChoiseChoices ) / sizeof( wxString );
	m_paisChoise = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_paisChoiseNChoices, m_paisChoiseChoices, 0 );
	m_paisChoise->SetSelection( 0 );
	bSizer7->Add( m_paisChoise, 0, wxALL, 5 );

	wxString m_votoChoiseChoices[] = { wxT(" "), wxT("A favor"), wxT("En contra"), wxT("Abstención") };
	int m_votoChoiseNChoices = sizeof( m_votoChoiseChoices ) / sizeof( wxString );
	m_votoChoise = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_votoChoiseNChoices, m_votoChoiseChoices, 0 );
	m_votoChoise->SetSelection( 0 );
	bSizer7->Add( m_votoChoise, 0, wxALL, 5 );


	bSizer5->Add( bSizer7, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer5, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_cargarButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Ventana::cargarPressed ), NULL, this );
	m_finButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Ventana::finPressed ), NULL, this );
	m_resetButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Ventana::resetPressed ), NULL, this );
}

m_Ventana::~m_Ventana()
{
	// Disconnect Events
	m_cargarButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Ventana::cargarPressed ), NULL, this );
	m_finButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Ventana::finPressed ), NULL, this );
	m_resetButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Ventana::resetPressed ), NULL, this );

}
