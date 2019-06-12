#ifndef PIECE_CPP
#define PIECE_CPP

#include <iostream>

using namespace std;
class piece{
    public:
    int x;
    int y;
    char color;//w:white, b:black
    char type;//p:pawn, r:rook, b:bishop, h:horse, q:queen, k:king
    
    piece(int x, int y, char w,char t){
        this->x = x;
        this->y = y;
        this->color = w;
        this->type = t;
    }

    virtual bool move(int x, int y){

        cout<<"move in class piece\n";
    }
};

#endif