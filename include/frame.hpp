#ifndef FRAME_HPP
#define FRAME_HPP

#include <wx/wx.h>

class IntedexFrame : public wxFrame {
  public:
    IntedexFrame();
  private:
    virtual void OnAbout(wxCommandEvent &event);
    virtual void OnExit(wxCommandEvent &event);
};

#endif