#include"../headers/all.h"

void create_board(int s){
    for (int i=0; i<s; i++){
        for (int j=0; j<s; j++){
            board[i][j] = '-';
        }
    }
}

void show_board(void){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            printf("%c",board[i][j]);
        }
        printf("\n");
    }
}