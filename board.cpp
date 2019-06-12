#include <iostream>
#include "Piece.cpp"
#include "Pawn.cpp"

using namespace std;

const int width = 8;
const int height = 8;

class board{
    public:
    piece *myBoard[width][height];

    board(){
        for(int i=0;i<width;i++){
            for(int j=0;j<height;j++){
                myBoard[i][j] = NULL;
                //printf("%x ",myBoard[i][j]);
            }
            // cout<<endl;
        }
        //printf("board: %x\n",*myBoard);
        //printf("board: %x\n",&myBoard[0][0]);
        
        //spawn pawn
        for(int i=0;i<8;i++){
            myBoard[1][i] = new pawn(1,0,'w','p');
            myBoard[6][i] = new pawn(1,0,'b','p');
        }

    }
    void print(){
        for(int i=0;i<width;i++){
            for(int j=0;j<height;j++){
                if(myBoard[i][j] == NULL){
                    cout<<'.'<<" ";
                }
                else{
                    cout<<myBoard[i][j]->type<<" ";
                }
            }
            cout<<endl;
        }
    }
};