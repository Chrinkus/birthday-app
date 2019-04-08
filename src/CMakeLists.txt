add_library(birthday_gui
    Birthday_window.cpp
    Contact_details.cpp
)

target_include_directories(birthday_gui PUBLIC ${FLTK_INCLUDE_DIRS})
target_link_libraries(birthday_gui PUBLIC fltk)
target_link_libraries(birthday_gui PRIVATE birthday-data)

add_executable(birthday_app main.cpp)
target_link_libraries(birthday_app PRIVATE birthday_gui)
