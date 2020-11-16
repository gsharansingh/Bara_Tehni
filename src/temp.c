#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void create_board(int);
void show_board(void);

#define SIZE 5

char board[SIZE][SIZE];

int main (){
    create_board(5);
    show_board();
}

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