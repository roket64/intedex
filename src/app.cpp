#include <app.hpp>
#include <frame.hpp>

bool IntedexApp::OnInit() {
  IntedexFrame *frame = new IntedexFrame();
  frame->Show(true);
  return true;
}

wxIMPLEMENT_APP(IntedexApp);