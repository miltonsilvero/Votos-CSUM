/*Armar un switch para los votos y
revisar que hacer con los banners.
Ver que se carguen bien los bitmaps.
*/

#include "Ventana.h"
#include <wx/msgdlg.h>
#include <iostream>
#include <wx/dcmemory.h>
Ventana::Ventana(wxWindow *parent) : m_Ventana(parent) {
	wxString rutaImagen1 = "prueba_onu.png";
	wxImage image1(rutaImagen1, wxBITMAP_TYPE_PNG);
	bitmap1 = wxBitmap(image1);
	
	
	
	wxString rutaImagen = "neutro.png";
	
	wxImage image3(rutaImagen, wxBITMAP_TYPE_PNG);
	int newWidth = image3.GetWidth() * 0.08;
	int newHeight = image3.GetHeight() * 0.08;
	wxImage image3_scaled = image3.Scale(newWidth, newHeight, wxIMAGE_QUALITY_HIGH);
	bitmapAR = wxBitmap(image3_scaled);
	bitmapCH = wxBitmap(image3_scaled);
	bitmapCS = wxBitmap(image3_scaled);
	bitmapEC = wxBitmap(image3_scaled);
	bitmapES = wxBitmap(image3_scaled);
	bitmapEU = wxBitmap(image3_scaled);
	bitmapRU = wxBitmap(image3_scaled);
	bitmapFR = wxBitmap(image3_scaled);
	bitmapGU = wxBitmap(image3_scaled);
	bitmapJA = wxBitmap(image3_scaled);
	bitmapMA = wxBitmap(image3_scaled);
	bitmapMO = wxBitmap(image3_scaled);
	bitmapUK = wxBitmap(image3_scaled);
	bitmapSL = wxBitmap(image3_scaled);
	bitmapSU = wxBitmap(image3_scaled);
	
	
	wxString rutaImagen4 = "encontra.png";
	wxImage image4(rutaImagen4, wxBITMAP_TYPE_PNG);
	wxImage image4_scaled = image4.Scale(newWidth, newHeight, wxIMAGE_QUALITY_HIGH);
	bitmapDESA = wxBitmap(image4_scaled);
	
	wxString rutaImagen5 = "afavor.png";
	wxImage image5(rutaImagen5, wxBITMAP_TYPE_PNG);
	wxImage image5_scaled = image5.Scale(newWidth, newHeight, wxIMAGE_QUALITY_HIGH);
	bitmapAPRO = wxBitmap(image5_scaled);
	
	
	
	
	wxString rutaImagenBanner = "banner_wait.png";
	wxImage imageBanner(rutaImagenBanner, wxBITMAP_TYPE_PNG);
	bitmapBanner = wxBitmap(imageBanner);
	
	wxString rutaImagenBannerA = "banner_apr.png";
	wxImage imageBannerA(rutaImagenBannerA, wxBITMAP_TYPE_PNG);
	bitmapBannerApr = wxBitmap(imageBannerA);
	
	wxString rutaImagenBannerD = "banner_des.png";
	wxImage imageBannerD(rutaImagenBannerD, wxBITMAP_TYPE_PNG);
	bitmapBannerDes = wxBitmap(imageBannerD);
	
	bitmapCompuesto = wxBitmap(600, 400);
	wxMemoryDC dc(bitmapCompuesto);
	dc.DrawBitmap(bitmap1, 0, 0);
	dc.DrawBitmap(bitmapAR, 450, 28);
	dc.DrawBitmap(bitmapCH, 450, 82);
	dc.DrawBitmap(bitmapCS, 450, 140);
	dc.DrawBitmap(bitmapEC, 450, 198);
	dc.DrawBitmap(bitmapES, 450, 252);
	dc.DrawBitmap(bitmapEU, 450, 310);
	dc.DrawBitmap(bitmapRU, 360, 310);
	dc.DrawBitmap(bitmapFR, 282, 310);
	dc.DrawBitmap(bitmapGU, 200, 310);
	dc.DrawBitmap(bitmapJA, 100, 310);
	dc.DrawBitmap(bitmapMA, 100, 252);
	dc.DrawBitmap(bitmapMO, 100, 198);
	dc.DrawBitmap(bitmapUK, 100, 140);
	dc.DrawBitmap(bitmapSL, 100, 82);
	dc.DrawBitmap(bitmapSU, 100, 28);
	
	
	m_fondo->SetBitmap(bitmapCompuesto);
	dc.SelectObject(wxNullBitmap);
}


void Ventana::cargarPressed( wxCommandEvent& event )  {
	votos v;
	bool ya_voto = false;
	for(size_t i=0;i<lista_votos.size();i++){
		if(lista_votos[i].pais == m_paisChoise->GetSelection()){
			ya_voto = true;
		}
	}
	if(ya_voto == false){
		v.pais = m_paisChoise->GetSelection();
		v.voto = m_votoChoise->GetSelection();
		if(v.pais == 0 or v.voto == 0){
			wxMessageBox("No ha completado ambos campos.","ERROR");
		}else{
			wxMemoryDC dc;
			if(v.pais == 2 or v.pais == 6 or v.pais == 7 or v.pais == 8 or v.pais == 13){
				v.rango = 1;
			} else{
				v.rango = 2;
			}
			
			switch(v.pais){
			case 0:
				break;
			case 1:
				if (v.voto == 1) {
					bitmapAR = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapAR = bitmapDESA;
				}
				break;
			case 2:
				if (v.voto == 1) {
					bitmapCH = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapCH = bitmapDESA;
				}
				break;
			case 3:
				if (v.voto == 1) {
					bitmapCS = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapCS = bitmapDESA;
				}
				break;
			case 4:
				if (v.voto == 1) {
					bitmapEC = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapEC = bitmapDESA;
				}
				break;
			case 5:
				if (v.voto == 1) {
					bitmapES = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapES = bitmapDESA;
				}
				break;
			case 6:
				if (v.voto == 1) {
					bitmapEU = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapEU = bitmapDESA;
				}
				break;
			case 7:
				if (v.voto == 1) {
					bitmapRU = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapRU = bitmapDESA;
				}
				break;
			case 8:
				if (v.voto == 1) {
					bitmapFR = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapFR = bitmapDESA;
				}
				break;
			case 9:
				if (v.voto == 1) {
					bitmapGU = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapGU = bitmapDESA;
				}
				break;
			case 10:
				if (v.voto == 1) {
					bitmapJA = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapJA = bitmapDESA;
				}
				break;
			case 11:
				if (v.voto == 1) {
					bitmapMA = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapMA = bitmapDESA;
				}
				break;
			case 12:
				if (v.voto == 1) {
					bitmapMO = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapMO = bitmapDESA;
				}
				break;
			case 13:
				if (v.voto == 1) {
					bitmapUK = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapUK = bitmapDESA;
				}
				break;
			case 14:if (v.voto == 1) {
				bitmapSL = bitmapAPRO;
			}
			else if (v.voto == 2) {
				bitmapSL = bitmapDESA;
			}
				break;
			case 15:
				if (v.voto == 1) {
					bitmapSU = bitmapAPRO;
				}
				else if (v.voto == 2) {
					bitmapSU = bitmapDESA;
				}
				break;
			}
			
			
			dc.SelectObject(bitmapCompuesto);
			dc.Clear();
			dc.DrawBitmap(bitmap1, 0, 0);
			dc.DrawBitmap(bitmapAR, 450, 28);
			dc.DrawBitmap(bitmapCH, 450, 82);
			dc.DrawBitmap(bitmapCS, 450, 140);
			dc.DrawBitmap(bitmapEC, 450, 198);
			dc.DrawBitmap(bitmapES, 450, 252);
			dc.DrawBitmap(bitmapEU, 450, 310);
			dc.DrawBitmap(bitmapRU, 360, 310);
			dc.DrawBitmap(bitmapFR, 282, 310);
			dc.DrawBitmap(bitmapGU, 200, 310);
			dc.DrawBitmap(bitmapJA, 100, 310);
			dc.DrawBitmap(bitmapMA, 100, 252);
			dc.DrawBitmap(bitmapMO, 100, 198);
			dc.DrawBitmap(bitmapUK, 100, 140);
			dc.DrawBitmap(bitmapSL, 100, 82);
			dc.DrawBitmap(bitmapSU, 100, 28);
			dc.SelectObject(wxNullBitmap);
			
			m_fondo->SetBitmap(bitmapCompuesto);
			m_fondo->Refresh();
			dc.SelectObject(wxNullBitmap);
			
			lista_votos.push_back(v);
		}
	}else{
		wxMessageBox("Este pais ya voto.","ERROR");
	}
}


void Ventana::resetPressed( wxCommandEvent& event )  {
	//VOLVER EL BITMAP 2 Y 3 AL ESTADO ORIGINAL
	/*bitmap2 = wxBitmap(wxImage("neutro.png", wxBITMAP_TYPE_PNG));
	bitmap3 = wxBitmap(wxImage("neutro.png", wxBITMAP_TYPE_PNG));
	bitmapBanner = wxBitmap(wxImage("banner_wait.png", wxBITMAP_TYPE_PNG));*/
	wxImage image("neutro.png", wxBITMAP_TYPE_PNG);
	image.Rescale(image.GetWidth() * 0.08, image.GetHeight() * 0.08, wxIMAGE_QUALITY_HIGH);
	bitmapAR = wxBitmap(image);
	bitmapCH = wxBitmap(image);
	bitmapCS = wxBitmap(image);
	bitmapEC = wxBitmap(image);
	bitmapES = wxBitmap(image);
	bitmapEU = wxBitmap(image);
	bitmapRU = wxBitmap(image);
	bitmapFR = wxBitmap(image);
	bitmapGU = wxBitmap(image);
	bitmapJA = wxBitmap(image);
	bitmapMA = wxBitmap(image);
	bitmapMO = wxBitmap(image);
	bitmapUK = wxBitmap(image);
	bitmapSL = wxBitmap(image);
	bitmapSU = wxBitmap(image);
	
	// Actualizar el bitmap compuesto
	wxMemoryDC dc(bitmapCompuesto);
	dc.Clear();
	dc.DrawBitmap(bitmap1, 0, 0);
	dc.DrawBitmap(bitmapAR, 450, 28);
	dc.DrawBitmap(bitmapCH, 450, 82);
	dc.DrawBitmap(bitmapCS, 450, 140);
	dc.DrawBitmap(bitmapEC, 450, 198);
	dc.DrawBitmap(bitmapES, 450, 252);
	dc.DrawBitmap(bitmapEU, 450, 310);
	dc.DrawBitmap(bitmapRU, 360, 310);
	dc.DrawBitmap(bitmapFR, 282, 310);
	dc.DrawBitmap(bitmapGU, 200, 310);
	dc.DrawBitmap(bitmapJA, 100, 310);
	dc.DrawBitmap(bitmapMA, 100, 252);
	dc.DrawBitmap(bitmapMO, 100, 198);
	dc.DrawBitmap(bitmapUK, 100, 140);
	dc.DrawBitmap(bitmapSL, 100, 82);
	dc.DrawBitmap(bitmapSU, 100, 28);
	
	m_fondo->SetBitmap(bitmapCompuesto);
	m_fondo->Refresh();
	dc.SelectObject(wxNullBitmap);
	
	lista_votos.clear();
	wxMessageBox("Se reseteo con exito.","SUCCESS");
}


void Ventana::finPressed( wxCommandEvent& event )  {
	wxMemoryDC dc;
	if(lista_votos.size() >= 9){
		int afirmativos = 0;
		bool veto = false;
		for(size_t i=0;i<lista_votos.size();i++){ //9 votos a favor y ningun rango 1 en contra
			if(lista_votos[i].voto == 1){
				afirmativos++;
			}
			if(lista_votos[i].rango == 1){
				if(lista_votos[i].voto == 2){
					veto = true;
				}
			}
		}
		
		if(afirmativos >= 9 && veto == false){
			std::cout << "APROBADO" << std::endl;
			bitmapBanner = bitmapBannerApr;
		} else{
			std::cout << "DESAPROBADO" << std::endl;
			bitmapBanner = bitmapBannerDes;
		}
		dc.SelectObject(bitmapCompuesto);
		dc.Clear();
		dc.DrawBitmap(bitmap1, 0, 0);
		dc.DrawBitmap(bitmapAR, 450, 28);
		dc.DrawBitmap(bitmapCH, 450, 82);
		dc.DrawBitmap(bitmapCS, 450, 140);
		dc.DrawBitmap(bitmapEC, 450, 198);
		dc.DrawBitmap(bitmapES, 450, 252);
		dc.DrawBitmap(bitmapEU, 450, 310);
		dc.DrawBitmap(bitmapRU, 360, 310);
		dc.DrawBitmap(bitmapFR, 282, 310);
		dc.DrawBitmap(bitmapGU, 200, 310);
		dc.DrawBitmap(bitmapJA, 100, 310);
		dc.DrawBitmap(bitmapMA, 100, 252);
		dc.DrawBitmap(bitmapMO, 100, 198);
		dc.DrawBitmap(bitmapUK, 100, 140);
		dc.DrawBitmap(bitmapSL, 100, 82);
		dc.DrawBitmap(bitmapSU, 100, 28);
		dc.SelectObject(wxNullBitmap);
		
		m_fondo->SetBitmap(bitmapCompuesto);
		m_fondo->Refresh();
		dc.SelectObject(wxNullBitmap);
		
	}else{
		std::cout << "NO SE LLEGO AL MINIMO DE VOTOS" << std::endl;
	}
}
//No olvidarse que en este testeo no se puede actualizar el banner por ser dos países.
//Arreglar tamaño.
