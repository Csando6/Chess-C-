#ifndef PIECE_CPP
#define PIECE_CPP

#include <iostream>

using namespace std;
class piece{
    public:

    int x;
    int y;
    char color;
    
    piece(int x, int y, char w){
        this->x = x;
        this->y = y;
        this->color = w;
    }

    virtual void move(){
        cout<<"move in class piece\n";
    }
};

#endif