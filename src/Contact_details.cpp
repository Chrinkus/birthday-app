#include "Contact_details.hpp"
#include "Contact.hpp"

Contact_details::Contact_details(int x, int y, int w, int h)
    : Fl_Group{x, y, w, h},
    first_io{new Fl_Input{0, 0, 0, 0, "First:"}},
    last_io{new Fl_Input{0, 0, 0, 0, "Last:"}},
    birth_io{new Fl_Input{0, 0, 0, 0, "Birthday:"}},
    phone_io{new Fl_Input{0, 0, 0, 0, "Phone:"}},
    email_io{new Fl_Input{0, 0, 0, 0, "Email:"}}
{
    end();

    const int pad = 8;
    const int xx = x + (w - 2 * pad) * 0.3;
    const int yy = y + pad;
    const int ww = (w - 2 * pad) * 0.7;
    const int hh = 20;

    for (int i = 0; i < children(); ++i) {
        auto po = static_cast<Fl_Input*>(child(i));
        po->resize(xx, yy + i * (pad + hh), ww, hh);
        po->box(FL_FLAT_BOX);
    }

    read_only(Mode::read);

    copy_label("Details");
    box(FL_BORDER_BOX);
    align(FL_ALIGN_TOP_LEFT);

    // TEST
    Contact c { "Chris", "Schick", "1979-02-27" };
    c.email("chris@schick.com");
    c.phone("(999) 555-1234");
    load_contact(c);
}

void Contact_details::load_contact(const Contact& contact) const
{
    first_io->value(contact.first().data());
    last_io->value(contact.last().data());
    birth_io->value(contact.birth().data());
    phone_io->value(contact.phone().data());
    email_io->value(contact.email().data());
}

void Contact_details::read_only(Mode m) const
{
    for (auto i = 0; i < children(); ++i) {
        static_cast<Fl_Input*>(child(i))->readonly(static_cast<int>(m));
    }
}
