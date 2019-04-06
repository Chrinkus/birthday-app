#include "Contact_details.hpp"

Contact_details::Contact_details(int x, int y, int w, int h)
    : Fl_Group{x, y, w, h},
    first_read{new Fl_Box{0, 0, 0, 0, "First:"}},
    last_read{new Fl_Box{0, 0, 0, 0, "Last:"}},
    birth_read{new Fl_Box{0, 0, 0, 0, "Birthday:"}},
    phone_read{new Fl_Box{0, 0, 0, 0, "Phone:"}},
    email_read{new Fl_Box{0, 0, 0, 0, "Email:"}}
{
    end();

    for (int i = 0; i < children(); ++i) {
        child(i)->resize(w * 0.3, y + 8 + i * 8 + i * 16, w * 0.6, 16);
    }

    copy_label("Details");
    box(FL_BORDER_BOX);
    align(FL_ALIGN_TOP_LEFT);
}
