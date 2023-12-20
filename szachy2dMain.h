/***************************************************************
 * Name:      szachy2dMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2023-12-19
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef SZACHY2DMAIN_H
#define SZACHY2DMAIN_H

//(*Headers(szachy2dDialog)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
//*)

class szachy2dDialog: public wxDialog
{
    public:

        szachy2dDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~szachy2dDialog();

    private:

        //(*Handlers(szachy2dDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnBitmapButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(szachy2dDialog)
        static const long ID_BITMAPBUTTON1;
        static const long ID_BUTTON1;
        //*)

        //(*Declarations(szachy2dDialog)
        wxBitmapButton* BitmapButton1;
        wxButton* Button1;
        //*)

        DECLARE_EVENT_TABLE()
        wxBitmapButton *pola[64];
        wxBitmap rysunki[2];
};

#endif // SZACHY2DMAIN_H
