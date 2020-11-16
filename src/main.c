#include"../headers/all.h"

const int SIZE = 5;

int board[SIZE][SIZE];

int main (){
    puts("Hello");
    create_board(&SIZE, &SIZE);
    show_board();
}