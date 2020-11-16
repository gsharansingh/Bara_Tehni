#include"../headers/all.h"

void create_board(int* size, int* size){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            board[i][j] = '-';
        }
    }
}

void show_board(void){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            board[i][j] = '-';
        }
        printf("\n");
    }
}