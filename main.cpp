#include <iostream>
#include "board.cpp"
#include "Piece.cpp"
#include "Pawn.cpp"


int main(){
    piece* myPiece;
    myPiece = new piece(10,20,'w');
    myPiece->move();
    myPiece = new pawn(10,20,'b');
    myPiece->move();

    board myBoard;
    myBoard.print();

    return 0;
}