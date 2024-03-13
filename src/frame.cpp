#include <frame.hpp>

IntedexFrame::IntedexFrame() : wxFrame(nullptr, wxID_ANY, "InteDex") {
  wxMenu *menuHelp = new wxMenu;
  menuHelp->Append(wxID_ABOUT);

  wxMenuBar *menuBar = new wxMenuBar;
  menuBar->Append(menuHelp, "Help");

  SetMenuBar(menuBar);

  CreateStatusBar();
  SetStatusText("Bottom status bar text");

  Bind(wxEVT_MENU, &IntedexFrame::OnAbout, this, wxID_ABOUT);
  Bind(wxEVT_MENU, &IntedexFrame::OnExit, this, wxID_EXIT);
}

void IntedexFrame::OnAbout(wxCommandEvent &event) {
  wxMessageBox("Letterbox pop-up message", "Letterbox pop-up title",
               wxOK | wxICON_INFORMATION);
}

void IntedexFrame::OnExit(wxCommandEvent &event) { Close(true); }
