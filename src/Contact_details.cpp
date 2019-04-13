#include "Contact_details.hpp"
#include "Contact.hpp"

Contact_details::Contact_details(int x, int y, int w, int h)
    : Fl_Group{x, y, w, h},
    first_read{new Fl_Output{0, 0, 0, 0, "First:"}},
    last_read{new Fl_Output{0, 0, 0, 0, "Last:"}},
    birth_read{new Fl_Output{0, 0, 0, 0, "Birthday:"}},
    phone_read{new Fl_Output{0, 0, 0, 0, "Phone:"}},
    email_read{new Fl_Output{0, 0, 0, 0, "Email:"}}
{
    end();

    for (int i = 0; i < children(); ++i) {
        auto po = static_cast<Fl_Output*>(child(i));
        po->resize(x + w * 0.3, y + 8 + i * 8 + i * 20, w * 0.6, 20);
        po->box(FL_FLAT_BOX);
        po->cursor_color(FL_WHITE);
    }

    copy_label("Details");
    box(FL_BORDER_BOX);
    align(FL_ALIGN_TOP_LEFT);

    // TEST
    Contact c { "Chris", "Schick", "1979-02-27" };
    c.email("chris@schick.com");
    c.phone("(999) 555-1234");
    load_contact(c);
}

void Contact_details::load_contact(const Contact& contact)
{
    first_read->value(contact.first().data());
    last_read->value(contact.last().data());
    birth_read->value(contact.birth().data());
    phone_read->value(contact.phone().data());
    email_read->value(contact.email().data());
}
