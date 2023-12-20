#ifndef PAWN_H
#define PAWN_H


class Pawn: public ChessPiece
{
    public:
        Pawn(int row, int col, bool isWhite = true);
        ~Pawn();
        string getPieceImage(){
            if(isWhite) return "images\\Pieces\\wp.png";
                return "images\\Pieces\\bp.png";
        }


    protected:
        bool iswhite = true;

};

#endif // PAWN_H
