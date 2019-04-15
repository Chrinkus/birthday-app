#include <memory>

#include <FL/Fl.H>
#include "Birthday_window.hpp"

int main()
{
    auto win = std::make_unique<Birthday_window>(100, 100, 680, 232,
            "Birthday");
    win->show();

    return Fl::run();
}
