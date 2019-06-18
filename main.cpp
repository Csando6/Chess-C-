#include <iostream>
#include "board.cpp"
#include "Piece.cpp"



int main(){
    board myBoard;
    myBoard.print();
    myBoard.move(1,0,2,2);
    myBoard.print();
    return 0;
}