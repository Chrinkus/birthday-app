#ifndef CONTACT_DETAILS_HPP
#define CONTACT_DETAILS_HPP

#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Input.H>

class Contact;

class Contact_details : public Fl_Group {
public:
    enum class Mode { write, read };

    Contact_details(int x, int y, int w, int h);

    void load_contact(const Contact& contact) const;
    void read_only(Mode m) const;

private:
    Fl_Input* first_io;
    Fl_Input* last_io;
    Fl_Input* birth_io;
    Fl_Input* phone_io;
    Fl_Input* email_io;
};

#endif  // CONTACT_DETAILS_HPP
