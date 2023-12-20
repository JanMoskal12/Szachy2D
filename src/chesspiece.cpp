#include "chesspiece.h"

ChessPiece::~ChessPiece(){
}

int ChessPiece::getCurrentCol() const{
    return currentCol;
}

int ChessPiece::getCurrentRow() const{
    return currentRow;
}

void ChessPiece::setPosition(int row, int col){
    currentRow = row;
    currentCol = col;
}
