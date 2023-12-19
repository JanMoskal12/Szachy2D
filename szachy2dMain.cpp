/***************************************************************
 * Name:      szachy2dMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2023-12-19
 * Copyright:  ()
 * License:
 **************************************************************/

#include "szachy2dMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(szachy2dDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(szachy2dDialog)
//*)

BEGIN_EVENT_TABLE(szachy2dDialog,wxDialog)
    //(*EventTable(szachy2dDialog)
    //*)
END_EVENT_TABLE()

szachy2dDialog::szachy2dDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(szachy2dDialog)
    Create(parent, id, _("wxWidgets app"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
    //*)
}

szachy2dDialog::~szachy2dDialog()
{
    //(*Destroy(szachy2dDialog)
    //*)
}

void szachy2dDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void szachy2dDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
