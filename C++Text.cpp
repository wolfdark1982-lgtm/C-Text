#include <windows.h>
#include <iostream>
int main (){
    std::cout<<"Welcome to C++Text";
    std::cout<<" ";
    std::cout<<"read the msgbox popup";
    MessageBox(
        NULL,
        "Welcome to C++Text press OK or X to start!",
        "Welcome (C++Text)",
        MB_OK
    );
    std::cout<<" ";
    std::cout<<"thanks for reading the msgbox popup!";
    MessageBox(
        NULL,
        "Hello Good C++ Programmers!",
        "C++Text",
        MB_OK
    );
    std::cout<<" ";
    std::cout<<"Done! Enjoy!";
    MessageBox(
        NULL,
        "so Done!",
        "Done (C++Text)",
        MB_OK|
        MB_ICONINFORMATION
    );
    std::cout<<" ";
    std::cout<<"Written on C++";
    MessageBox(
        NULL,
        "Written on C++",
        "Done (C++Text)",
        MB_OK|
        MB_ICONINFORMATION
    );
    std::cout<<" ";
    std::cout<<"the application is done";
    return 0;
}