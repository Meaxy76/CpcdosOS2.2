
#include <ncurses.h>

void __CPCDOS_INIT_1(){
    initscr();

    WINDOW *win = newwin(4,80,0,0);
    //printw("Heya from Cpcdos");
    refresh();

    box(win, 0,0);

    mvwprintw(win, 1, 1, "CpcdosOS2.2 Alpha 0.3.0");
    mvwprintw(win, 2, 30, "CpcdosC+ Console");
    wrefresh(win);
    getch();
    endwin();
    //return 0;

}

/*
    This is called from CPCDOS_INIT.BAS
*/

namespace cpc_init {

    int cpcdos_loader(){
        __CPCDOS_INIT_1();
    }

}

int main(){
    __CPCDOS_INIT_1();
}