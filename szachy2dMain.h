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
#include <wx/dialog.h>
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
        //*)

        //(*Identifiers(szachy2dDialog)
        //*)

        //(*Declarations(szachy2dDialog)
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // SZACHY2DMAIN_H
