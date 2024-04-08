#ifndef VENTANA_H
#define VENTANA_H
#include "wxfb_project.h"
#include <wx/msgdlg.h>
#include <vector>
#include <utility>
#include <wx/string.h>
#include <wx/image.h>
#include <wx/dcmemory.h>
#include <wx/bitmap.h>
struct votos{
	int pais;
	int rango;
	int voto;
};
class Ventana : public m_Ventana {

private:
	std::vector<votos>lista_votos;
	wxBitmap bitmap1;
	wxBitmap bitmapAR;
	wxBitmap bitmapCH;
	wxBitmap bitmapCS;
	wxBitmap bitmapEC;
	wxBitmap bitmapES;
	wxBitmap bitmapEU;
	wxBitmap bitmapRU;
	wxBitmap bitmapFR;
	wxBitmap bitmapGU;
	wxBitmap bitmapJA;
	wxBitmap bitmapMA;
	wxBitmap bitmapMO;
	wxBitmap bitmapUK;
	wxBitmap bitmapSL;
	wxBitmap bitmapSU;
	
	wxBitmap bitmapAPRO;
	wxBitmap bitmapDESA;
	wxBitmap bitmapBanner;
	wxBitmap bitmapBannerApr;
	wxBitmap bitmapBannerDes;
	wxBitmap bitmapCompuesto;
protected:
	void cargarPressed( wxCommandEvent& event )  override;
	void finPressed( wxCommandEvent& event )  override;
	void resetPressed( wxCommandEvent& event )  override;
	
public:
	Ventana(wxWindow *parent=NULL);
};

#endif

