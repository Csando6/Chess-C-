#ifndef PAWN_CPP
#define PAWN_CPP

#include <iostream>
#include "Piece.cpp"
using namespace std;

class pawn: public piece{
    
    public:
    pawn(int x, int y, char w):piece(x,y,w){};

    void move(){
        cout<<"move in pawn"<<endl;
    }
};

#endif