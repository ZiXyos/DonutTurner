/*
** Moudery Killian
** DonutTurner
** File description:
** main
*/

#include "./include/project.hpp"

int main(int ac, char *const *av) {

    struct winsize size;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
    std::cout << "y: " << size.ws_row << " x: " << size.ws_col << std::endl;
}