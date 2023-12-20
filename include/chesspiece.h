#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <iostream>

using std::string;

class ChessPiece {
public:
    class PieceType;

    ChessPiece(int type, int color, int row, int col){
        pieceType = type;
        pieceColor = color;
        currentRow = row;
        currentCol = col;
    }

    virtual ~ChessPiece();

    //virtual bool isValidMove(int newRow, int newCol); // do sprawdzania czy taki ruch moze wykonac ta figura
    //virtual string getPieceImage(); // return sciezke do obrazka (potrzebne do wxBitmap(wxImage(_(figura.getPieceImage()))))

    void setPosition(int row, int col); // zmiana pozycji figury

    int getPieceType() const;
    int getPieceColor() const;
    int getCurrentRow() const;
    int getCurrentCol() const;

protected:
    int pieceType;
    int pieceColor;
    int currentRow;
    int currentCol;
};

#endif // CHESSPIECE_H
