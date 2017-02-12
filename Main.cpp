#include "libtcod.hpp"

int main() {
    TCODConsole::initRoot(80,50,"test",false);
    while (! TCODConsole::isWindowClosed()) {
        TCODConsole::root->clear();
 //       TCODConsole::root->printCenter(40,25,TCOD_BKGND_NONE,"Hello world!");
        TCODConsole::flush();
        TCODConsole::checkForKeypress();
    }
}
