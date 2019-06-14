#ifndef PIECE_CPP
#define PIECE_CPP

#include <iostream>
#include <string>
#include "board.cpp"
#include "Pawn.h"
using namespace std;
enum color{black,white};
enum type{pawn,rook,bishop,knight,king,queen};
static const string enumColor[] = {"black","white"};
static const string enumType[] = {"pawn","rook","bishop","knight","king","queen"};


class piece{
    private:
    color pieceColor;//w:white, b:black
    type pieceType;//p:pawn, r:rook, b:bishop, h:horse, q:queen, k:king
    public:
    piece(color pColor,type pType){
        this->pieceColor = pColor;
        this->pieceType = pType;
    }
    string getColor(){

        return enumColor[this->pieceColor]; 
    }
    string getType(){
        return enumType[this->pieceType];
    }
};

#endif