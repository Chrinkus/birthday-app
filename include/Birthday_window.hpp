#ifndef BIRTHDAY_WINDOW_HPP
#define BIRTHDAY_WINDOW_HPP

#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>

#include <string>

class Contact_details;

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// Formatting tools
const int padding = 20;
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 

class Birthday_window : public Fl_Double_Window {
public:
    Birthday_window(int x, int y, int w, int h, const std::string& l);
private:
    Contact_details* details;
};

#endif  // BIRTHDAY_WINDOW_HPP
