#ifndef CONTACT_DETAILS_HPP
#define CONTACT_DETAILS_HPP

#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>

class Contact_details : public Fl_Group {
public:
    Contact_details(int x, int y, int w, int h);
private:
    Fl_Box* first_read;
    Fl_Box* last_read;
    Fl_Box* birth_read;
    Fl_Box* phone_read;
    Fl_Box* email_read;
};

#endif  // CONTACT_DETAILS_HPP
