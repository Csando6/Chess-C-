#ifndef PIECE_CPP
#define PIECE_CPP

#include <iostream>
#include <string>
using namespace std;
enum pieceColor{white,black};
enum pieceType{pawn,rook,bishop,knight,queen,king};
static const string pColor[]= {"white","black"};
static const string pType[] = {"pawn","rook","bishop","knight","queen","king"};

class piece{
    public:
    pieceColor myColor;
    pieceType myType;

    piece(pieceColor color,pieceType type){
        myColor = color;
        myType = type;
    }

    string pieceName(){
        return pType[myType];
    }
    pieceType getType(){
        return myType;
    }
    pieceColor getColor(){
        return myColor;
    }
};

#endif