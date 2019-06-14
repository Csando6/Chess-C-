#ifndef BOARD_CPP
#define BOARD_CPP

#include <iostream>
#include "Piece.cpp"

using namespace std;

const int width = 8;
const int height = 8;

class board{
    public:
    piece *myBoard[width][height];

    board(){ //init board
        for(int i=0;i<width;i++){
            for(int j=0;j<height;j++){
                myBoard[i][j] = NULL;
            }
        }
        for(int i=0;i<8;i++){
            myBoard[1][i] = new piece(white,pawn);
            myBoard[6][i] = new piece(black, pawn);
        }
    } 

    void print(){
        cout<<"       white"<<endl;
        cout<<"  ----------------"<<endl;
        for(int i=0;i<width;i++){
            cout<<i<<"|";
            for(int j=0;j<height;j++){
                if(myBoard[i][j] == NULL){
                    cout<<'.'<<" ";
                }
                else{
                    cout<<myBoard[i][j]->getType()[0]<<" ";
                }
            }
            cout<<endl;
        }
        cout<<"  ----------------"<<endl;
        cout<<"  ";
        for(int i=0;i<8;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        cout<<"       black"<<endl;
    }
};

#endif