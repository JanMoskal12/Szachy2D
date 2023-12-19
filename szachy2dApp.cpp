/***************************************************************
 * Name:      szachy2dApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2023-12-19
 * Copyright:  ()
 * License:
 **************************************************************/

#include "szachy2dApp.h"

//(*AppHeaders
#include "szachy2dMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(szachy2dApp);

bool szachy2dApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	szachy2dDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
