// furichess v1
#include <stdio.h>

enum Piece {
    ROOK,
    KNIGHT,
    BISHOP,
    QUEEN,
    KING,
    PAWN,
    NO_PIECE
};

enum Color {
    BLACK,
    WHITE,
    NO_COLOR
};

char piece_to_char(int piece, int color)
{
    switch (piece) {
        case ROOK:   return color == WHITE ? 'R' : 'r';
        case KNIGHT: return color == WHITE ? 'N' : 'n';
        case BISHOP: return color == WHITE ? 'B' : 'b';
        case QUEEN:  return color == WHITE ? 'Q' : 'q';
        case KING:   return color == WHITE ? 'K' : 'k';
        case PAWN:   return color == WHITE ? 'P' : 'p';
        default:     return '.';
    }
}

int pieces[64] = {
    ROOK,  KNIGHT, BISHOP, QUEEN, KING,  BISHOP, KNIGHT, ROOK,
    PAWN,  PAWN,   PAWN,   PAWN,  PAWN,  PAWN,  PAWN,   PAWN,
    NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
    NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
    NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
    NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
    NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
    NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
    NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
    NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
    PAWN,  PAWN,   PAWN,   PAWN,  PAWN,  PAWN,  PAWN,   PAWN,
    ROOK,  KNIGHT, BISHOP, QUEEN, KING,  BISHOP, KNIGHT, ROOK
};

int colors[64] = {
    BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK,
    BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK, BLACK,
    NO_COLOR, NO_COLOR, NO_COLOR, NO_COLOR,
    NO_COLOR, NO_COLOR, NO_COLOR, NO_COLOR,
    NO_COLOR, NO_COLOR, NO_COLOR, NO_COLOR,
    NO_COLOR, NO_COLOR, NO_COLOR, NO_COLOR,
    NO_COLOR, NO_COLOR, NO_COLOR, NO_COLOR,
    NO_COLOR, NO_COLOR, NO_COLOR, NO_COLOR,
    NO_COLOR, NO_COLOR, NO_COLOR, NO_COLOR,
    NO_COLOR, NO_COLOR, NO_COLOR, NO_COLOR,
    WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE,
    WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE, WHITE
};

int main(void) {
    for (int rank = 0; rank < 8; rank++) {
        printf("%d ", 8 - rank);

        for (int file = 0; file < 8; file++) {
            int square = rank * 8 + file;

            if (pieces[square] == NO_PIECE) {
                printf(". ");
            } else {
                printf("%c ", piece_to_char(pieces[square], colors[square]));
            }
        }

        printf("\n");
    }

    printf("  a b c d e f g h\n");

    return 0;
}
