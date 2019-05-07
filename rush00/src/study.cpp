#include <ncurses.h>

int main()
{
        int nlines, ncols, y0, x0;
        x0 = 5;
        y0 = 5;
        nlines = 500;
        ncols = 500;
        initscr();                      /* Start curses mode            */
        cbreak();
        keypad(stdscr, TRUE);           /* We get F1, F2 etc..          */
        noecho();                       /* Don't echo() while we do getch */
        WINDOW * win = newwin(nlines, ncols, y0, x0);


        wrefresh(win);

        refresh();                      /* Print it on to the real screen */
        getch();                        /* Wait for user input */
        endwin();                       /* End curses mode                */

        return 0;
}
