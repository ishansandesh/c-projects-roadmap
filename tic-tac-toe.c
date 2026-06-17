#include <stdio.h>

char board[3][3] = {
    {' ',' ',' '},
    {' ',' ',' '},
    {' ',' ',' '}
};

void draw(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %c ",board[i][j]);
            if(j<2) printf("|");
        }
        if(i<2) printf("\n-----------\n");
    }
    printf("\n\n");
}

int checkWin(){
    for(int i=0;i<3;i++){
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=' ')
            return 1;
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]!=' ')
            return 1;
    }

    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!=' ')
        return 1;

    if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=' ')
        return 1;

    return 0;
}

int drawGame(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]==' ')
                return 0;
        }
    }
    return 1;
}

void aiMove(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]==' '){
                board[i][j]='O';
                return;
            }
        }
    }
}

int main(){
    int op,row,col;

    draw();

    while(1){
        printf("Enter position (1-9): ");
        scanf("%d",&op);

        if(op<1 || op>9){
            printf("Invalid\n");
            continue;
        }

        row=(op-1)/3;
        col=(op-1)%3;

        if(board[row][col]!=' '){
            printf("Occupied\n");
            continue;
        }

        board[row][col]='X';

        if(checkWin()){
            printf("Player Wins\n");
            break;
        }

        if(drawGame()){
            printf("Draw\n");
            break;
        }

        aiMove();

        draw();

        if(checkWin()){
            printf("AI Wins\n");
            break;
        }

        if(drawGame()){
            printf("Draw\n");
            break;
        }
    }

    return 0;
}