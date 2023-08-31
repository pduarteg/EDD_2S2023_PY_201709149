#ifndef MENU_H
#define MENU_H

#include "Reader.h"
#include "Writer.h"

class Menu {
public:
    Menu();
    void showMenu();
    Reader *readerObj;
    Writer *writerObj;

private:
    void showSubMenu1();
};

#endif