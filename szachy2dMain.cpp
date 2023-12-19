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
#include <wx/bitmap.h>
#include <wx/image.h>
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
const long szachy2dDialog::ID_BITMAPBUTTON1 = wxNewId();
const long szachy2dDialog::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(szachy2dDialog,wxDialog)
    //(*EventTable(szachy2dDialog)
    //*)
END_EVENT_TABLE()

szachy2dDialog::szachy2dDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(szachy2dDialog)
    wxFlexGridSizer* FlexGridSizer1;
    wxGridSizer* GridSizer1;

    Create(parent, wxID_ANY, _("wxWidgets app"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
    GridSizer1 = new wxGridSizer(8, 8, -4, -4);
    BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("C:\\Users\\szymo\\OneDrive\\Dokumenty\\GitHub\\Szachy2D\\images\\pole_biale.jpg"))), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    GridSizer1->Add(BitmapButton1, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer1->Add(GridSizer1, 1, wxEXPAND, 1);
    Button1 = new wxButton(this, ID_BUTTON1, _("ok"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&szachy2dDialog::OnBitmapButton1Click);
    //*)

    pola[0] = BitmapButton1;
    for(int i = 0;i < 8; i++){
        for(int j = 0; j < 8; j++){
        if(i == 0 && j == 0){
           j++;
        }
        if((i+j)%2 == 0){
            pola[8*i+j] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(_T("images/pole_biale.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
        }else{
            pola[8*i+j] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(_T("images/pole_czarne.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
            pola[8*i+j]-> SetBackgroundColour(wxColour(0,0,0));
            pola[8*i+j]->SetBackgroundColour(wxColour(0,0,0));
        }

        GridSizer1->Add(pola[8*i+j], 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
        Connect(pola[8*i+j]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&szachy2dDialog::OnBitmapButton1Click);
    }
}


    rysunki[0] = wxBitmap(wxImage("images/pole_biale.jpg"));
    rysunki[1] = wxBitmap(wxImage(_("images/pole_czarne.jpg")));
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

void szachy2dDialog::OnBitmapButton1Click(wxCommandEvent& event)
{
}
