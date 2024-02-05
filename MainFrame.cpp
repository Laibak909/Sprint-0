#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);

    // Create a vertical box sizer
    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);

    // Add a static text
    wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "Hello, This is my First GUI project!");
    mainSizer->Add(staticText, 0, wxALIGN_CENTER | wxALL, 10);

    // Add a checkbox
    wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBox");
    mainSizer->Add(checkBox, 0, wxALIGN_CENTER | wxALL, 10);

    // Add a radio box
    wxString choices[] = { "Option 1", "Option 2", "Option 3" };
    wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "RadioBox", wxDefaultPosition, wxDefaultSize,
        WXSIZEOF(choices), choices, 1, wxRA_SPECIFY_COLS);
    mainSizer->Add(radioBox, 0, wxALIGN_CENTER | wxALL, 10);

    // Add another static text
    wxStaticText* staticText2 = new wxStaticText(panel, wxID_ANY, "This is the end. Thankyou!");
    mainSizer->Add(staticText2, 0, wxALIGN_CENTER | wxALL, 10);

    // Set the sizer for the panel
    panel->SetSizer(mainSizer);

}



