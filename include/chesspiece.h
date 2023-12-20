#ifndef CHESSPIECE_H
#define CHESSPIECE_H


class ChessPiece {
public:
    class PieceType;

    ChessPiece(PieceType type, PieceColor color, int row, int col){
        pieceType = type;
        pieceColor = color;
        currentRow = row;
        currentCol = col;
    }

    virtual ~ChessPiece();

    virtual bool isValidMove(int newRow, int newCol);
    virtual string getPieceImage();

    void setPosition(int row, int col);

    PieceType getPieceType() const;
    PieceColor getPieceColor() const;
    int getCurrentRow() const;
    int getCurrentCol() const;

protected:
    PieceType pieceType;
    PieceColor pieceColor;
    int currentRow;
    int currentCol;
};

#endif // CHESSPIECE_H
