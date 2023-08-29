#include "Reader.h"

#ifndef MENU_H
#define MENU_H

class Menu {
public:
    Menu();
    void showMenu();
    Reader *readerObj;

private:
    void showSubMenu1();
};

#endif