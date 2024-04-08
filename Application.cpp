#include <wx/image.h>
#include "Application.h"
#include "WinExample.h"
#include "Ventana.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	Ventana *win = new Ventana(NULL);
	win->Show();
	return true;
}

