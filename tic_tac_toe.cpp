#include<iostream>
using namespace std;
//tic tac toe board
void game_board(char board[3][3]){
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            cout<<board[i][j];
            if(j<2){
                cout<<" | ";
            }
        }
        cout<<endl;
        if(i<2){
            cout<<"----------"<<endl;
        }
    }
    cout<<endl;
}
bool check_result(char board[3][3], char player){
    for(int i=0; i<3; i++){
        if(board[i][0]==player && board[i][1]==player && board[i][2]==player ){
            return true;
        }
        if(board[0][i]==player && board[1][i]==player && board[2][i]==player ){
            return true;
        }
    }
    if(board[0][0]==player && board[1][1]==player && board[2][2]==player){
        true;
    }
    if(board[2][0]==player && board[1][1]==player && board[0][2]==player ){
        return true;
    }
    return false;
}
bool check_draw(char board[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(board[i][j] != 'X' && board[i][j] != '0'){
                return false;
            }
        }
    }
    return true;
}

int main(){
    char board[3][3]={{'1', '2', '3'}, {'4', '5','6'},{'7','8','9'}};
    char player='X';
    int choice,row, column;
    cout<<"Tic tac toe game "<<endl;
    game_board(board);
    while(true){
        cout<<"player "<<player<<" , enter a number of player (1-9)";
        cin>>choice;
        row=(choice-1)/3;
        column=(choice-1)%3;
        if(board[row][column]=='X' || board[row][column]=='0'){
            cout<<"invlaid move";
            continue;
        }
        board[row][column]=player;
        game_board(board);
        // Check if the current player has won
        if(check_result(board, player)){
            cout<<"player"<<player<<"wins!"<<endl;
            break;
        }
        if(check_draw(board)){
            cout<<"it's draw"<<endl;
            break;
        }
        player=(player=='X')?'0':'X';
    }

    return 0;

}