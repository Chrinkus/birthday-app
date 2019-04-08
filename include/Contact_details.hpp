#ifndef CONTACT_DETAILS_HPP
#define CONTACT_DETAILS_HPP

#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Output.H>

class Contact;

class Contact_details : public Fl_Group {
public:
    Contact_details(int x, int y, int w, int h);

    void load_contact(const Contact& contact);

private:
    Fl_Output* first_read;
    Fl_Output* last_read;
    Fl_Output* birth_read;
    Fl_Output* phone_read;
    Fl_Output* email_read;
};

#endif  // CONTACT_DETAILS_HPP
