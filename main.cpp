#include <iostream>
#include "board.cpp"
#include "Piece.cpp"
#include "Pawn.cpp"


int main(){
    piece* myPiece;
    myPiece = new piece(10,20,'w','p');
    //myPiece->move();
    myPiece = new pawn(10,20,'b','p');
    //myPiece->move();

    board myBoard;
    myBoard.print();

    return 0;
}