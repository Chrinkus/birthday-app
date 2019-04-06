#include "Birthday_window.hpp"
#include "Contact_details.hpp"

Birthday_window::Birthday_window(int x, int y, int w, int h,
        const std::string& l)
    : Fl_Double_Window{x, y, w, h},
    details{new Contact_details{padding,
                                2 * padding,
                                w - 2 * padding,
                                h - 3 * padding}}
{
    copy_label(l.data());

    end();
}
