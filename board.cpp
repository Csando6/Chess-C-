#include <iostream>
#include "Piece.cpp"
#include "Pawn.cpp"

using namespace std;

const int width = 8;

class board{
    public:
    piece *myBoard[width][width];

    board(){
        for(int i=0;i<width;i++){
            for(int j=0;j<width;j++){
                myBoard[i][j] = new piece(10,20,'a');
            }
        }
    }
    void print(){
        cout<<"hello World"<<endl;
    }
};