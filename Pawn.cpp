#ifndef PAWN_CPP
#define PAWN_CPP

#include <iostream>
#include "Piece.cpp"
using namespace std;

class pawn: public piece{
    public:
    pawn(int x, int y, char w, char t):piece(x,y,w,t){};

    bool move(int x, int y){
        cout<<"move in pawn"<<endl;
    }
};

#endif