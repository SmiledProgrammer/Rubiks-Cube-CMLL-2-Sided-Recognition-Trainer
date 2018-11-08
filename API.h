#pragma once

#include <string>
#include "Application.h"

#define O_0 "R U R' F' R U R' U' R' F R2 U' R' [Adjacent Swap]"
#define O_1 "F R U' R' U' R U R' F' R U R' U' R' F R F' [Diagonal Swap]"

#define H_0 "R U R' U R U' R' U R U2' R' [Columns]"
#define H_1 "F R U R' U' R U R' U' R U R' U' F' [Rows]"
#define H_2 "R U2' R2' F R F' U2 R' F R F' [Column]"
#define H_3 "r U' r2' D' r U' r' D r2 U r' [Row]"

#define P_0 "F R U R' U' R U R' U' F' [Right Bar]"
#define P_1 "F R' F' R U2 R U' R' U R U2' R' [Back Slash]"
#define P_2 "R' F R U F U' R U R' U' F' [X Checkerboard]"
#define P_3 "R U2 R' U' R U R' U2' R' F R F' [Forward Slash]"
#define P_4 "r U' r2' D' r U r' D r2 U r' [Columns]"
#define P_5 "R' U' R' F R F' R U' R' U2 R [Left Bar]"

#define U_0 "R2 D R' U2 R D' R' U2 R' [Forward Slash]"
#define U_1 "R2' D' R U2 R' D R U2 R [Back Slash]"
#define U_2 "R2' F U' F U F2 R2 U' R' F R [Front Row]"
#define U_3 "F R2 D R' U R D' R2' U' F' [Rows]"
#define U_4 "r U' r' U r' D' r U' r' D r [X Checkerboard]"
#define U_5 "F R U R' U' F' [Back Row]"

#define T_0 "R U R' U' R' F R F' [Left Bar]"
#define T_1 "L' U' L U L F' L' F [Right Bar]"
#define T_2 "F R' F R2 U' R' U' R U R' F2 [Rows]"
#define T_3 "r' U r U2' R2' F R F' R [Front Row]"
#define T_4 "r' D' r U r' D r U' r U r' [Back Row]"
#define T_5 "r2' D' r U r' D r2 U' r' U' r [Columns]"

#define S_0 "R U R' U R U2 R' [Left Bar]"
#define S_1 "L' U2 L U2' L F' L' F [X Checkerboard]"
#define S_2 "F R' F' R U2 R U2' R' [Forward Slash]"
#define S_3 "R' U' R U' R2' F' R U R U' R' F U2' R [Columns]"
#define S_4 "R U R' U R' F R F' R U2' R' [Right Bar]"
#define S_5 "R U' L' U R' U' L [Back Slash]"

#define A_0 "R U2 R' U' R U' R' [Right Bar]"
#define A_1 "R2 D R' U R D' R' U R' U' R U' R' [Columns]"
#define A_2 "F' L F L' U2' L' U2 L [Back Slash]"
#define A_3 "R U2' R' U2 R' F R F' [X Checkerboard]"
#define A_4 "L' U R U' L U R' [Forward Slash]"
#define A_5 "R' U' R U' R' U R' F R F' U R [Left Bar]"

#define L_0 "F R U' R' U' R U R' F' [Mirror]"
#define L_1 "F R' F' R U R U' R' [Inverse]"
#define L_2 "R U R' U R U' R' U R U' R' U R U2 R' [Pure]"
#define L_3 "R U2 R D R' U2 R D' R2' [Front Commutator]"
#define L_4 "R' U' R U R' F' R U R' U' R' F R2 [Diag]"
#define L_5 "R' U2 R' D' R U2 R' D R2 [Back Commutator]"

enum Axis { X, Y, Z };

enum CMLLCaseGroup { O, H, P, U, T, S, A, L };

enum CMLLCase { O0, O1,
			H0, H1, H2, H3,
			P0, P1, P2, P3, P4, P5,
			U0, U1, U2, U3, U4, U5,
			T0, T1, T2, T3, T4, T5,
			S0, S1, S2, S3, S4, S5,
			A0, A1, A2, A3, A4, A5,
			L0, L1, L2, L3, L4, L5 };

std::string getCaseAlgorithm(CMLLCase cmllCase) {
	switch (cmllCase) {
	case O0 : return O_0; break;
	case O1 : return O_1; break;
	case H0 : return H_0; break;
	case H1 : return H_1; break;
	case H2 : return H_2; break;
	case H3 : return H_3; break;
	case P0 : return P_0; break;
	case P1 : return P_1; break;
	case P2 : return P_2; break;
	case P3 : return P_3; break;
	case P4 : return P_4; break;
	case P5 : return P_5; break;
	case U0 : return U_0; break;
	case U1 : return U_1; break;
	case U2 : return U_2; break;
	case U3 : return U_3; break;
	case U4 : return U_4; break;
	case U5 : return U_5; break;
	case T0 : return T_0; break;
	case T1 : return T_1; break;
	case T2 : return T_2; break;
	case T3 : return T_3; break;
	case T4 : return T_4; break;
	case T5 : return T_5; break;
	case S0 : return S_0; break;
	case S1 : return S_1; break;
	case S2 : return S_2; break;
	case S3 : return S_3; break;
	case S4 : return S_4; break;
	case S5 : return S_5; break;
	case A0 : return A_0; break;
	case A1 : return A_1; break;
	case A2 : return A_2; break;
	case A3 : return A_3; break;
	case A4 : return A_4; break;
	case A5 : return A_5; break;
	case L0 : return L_0; break;
	case L1 : return L_1; break;
	case L2 : return L_2; break;
	case L3 : return L_3; break;
	case L4 : return L_4; break;
	case L5 : return L_5; break;
	}

	return "";
}

struct Color {
	uchar colorCode;

	Color()
		: colorCode( DEFAULT_COLOR )
	{}

	Color(uchar code)
		: colorCode( code )
	{}

	Color oppositeColorOnCube() {
		if (colorCode == COLOR_RED)			return COLOR_DARK_YELLOW;
		if (colorCode == COLOR_DARK_YELLOW) return COLOR_RED;
		if (colorCode == COLOR_BLUE)		return COLOR_GREEN;
		if (colorCode == COLOR_GREEN)		return COLOR_BLUE;

		return COLOR_YELLOW;
	}

	inline bool operator==(Color other) { return (colorCode == other.colorCode); }
	inline bool operator!=(Color other) { return !(colorCode == other.colorCode); }
};

struct Corner {
	Color xColor, zColor;
	Axis yellowStickerTwistAxis;

	Corner() { }

	Corner(uchar xColor, uchar zColor)
		: xColor( xColor ), zColor( zColor ), yellowStickerTwistAxis( Y )
	{}

	void twistRight() {
		switch (yellowStickerTwistAxis) {
		case X : yellowStickerTwistAxis = Z; break;
		case Y : yellowStickerTwistAxis = X; break;
		case Z : yellowStickerTwistAxis = Y; break;
		}
	}
	
	void twistLeft() {
		switch (yellowStickerTwistAxis) {
		case X : yellowStickerTwistAxis = Y; break;
		case Y : yellowStickerTwistAxis = Z; break;
		case Z : yellowStickerTwistAxis = X; break;
		}
	}

	Color translateColor(Axis angle) {
		switch (angle) {
		case X :
			{
				switch (yellowStickerTwistAxis) {
				case X : return COLOR_YELLOW; break;
				case Y : return xColor; break;
				case Z : return zColor; break;
				}
			}
			break;

		case Y :
			{
				switch (yellowStickerTwistAxis) {
				case X : return zColor; break;
				case Y : return COLOR_YELLOW; break;
				case Z : return xColor; break;
				}
			}
			break;

		case Z :
			{
				switch (yellowStickerTwistAxis) {
				case X : return xColor; break;
				case Y : return zColor; break;
				case Z : return COLOR_YELLOW; break;
				}
			}
			break;
		}

		return COLOR_LIGHT_GRAY;
	}
};

struct Cube {
	Corner* corners;

	Cube() {
		corners = new Corner[ 4 ];
		corners[ 0 ] = Corner( COLOR_DARK_YELLOW, COLOR_GREEN );
		corners[ 1 ] = Corner( COLOR_GREEN, COLOR_RED );
		corners[ 2 ] = Corner( COLOR_RED, COLOR_BLUE );
		corners[ 3 ] = Corner( COLOR_BLUE, COLOR_DARK_YELLOW );
	}

	void twistCornersRandomly(uint times) {
		for (uint i = 0; i < times; i++) {
			bool correctIDs = false;
			uint cornerID1;
			uint cornerID2;

			while (!correctIDs) {
				cornerID1 = rand() % 4;
				cornerID2 = rand() % 4;

				correctIDs = ( cornerID1 != cornerID2 );
			}

			corners[ cornerID1 ].twistLeft();
			corners[ cornerID2 ].twistRight();
		}
	}

	void swap(uint cornerID1, uint cornerID2) {
		Corner copiedCorner = corners[ cornerID1 ];
		corners[ cornerID1 ] = corners[ cornerID2 ];
		corners[ cornerID2 ] = copiedCorner;
	}

	void swapCornersRandomly(uint times) {
		for (uint i = 0; i < times; i++) {
			uint swapID = rand() % 4;

			swap( swapID, ( swapID + 1 ) % 4 );
		}
	}

	bool solved() {
		bool result = true;
		
		for (uint i = 0; i < 4; i++) {
			if (corners[ i ].yellowStickerTwistAxis != Y)
				result = false;
		}

		if (corners[ 0 ].zColor != corners[ 1 ].xColor)
			result = false;

		if (corners[ 1 ].zColor != corners[ 2 ].xColor)
			result = false;

		return result;
	}

	void scramble() {
		bool scrambled = false;

		while (!scrambled) {
			twistCornersRandomly( 5 + rand() % 5 );
			swapCornersRandomly( 5 + rand() % 5 );

			scrambled = !( solved() );
		}
	}

	CMLLCaseGroup getCaseGroup() {
		CMLLCaseGroup group = O;

		uint Xs = 0;
		uint Ys = 0;
		uint Zs = 0;

		for (uint i = 0; i < 4; i++) {
			switch (corners[ i ].yellowStickerTwistAxis) {
			case X : Xs++; break;
			case Y : Ys++; break;
			case Z : Zs++; break;
			}
		}

		if (Ys == 4) { // O cases
			group = O;
		} else if (Ys == 1 && Xs == 3) { // A cases
			group = A;
		} else if (Ys == 1 && Zs == 3) { // S cases
			group = S;
		} else if (Ys == 0) { // H or P cases
			if (corners[ 0 ].yellowStickerTwistAxis != corners[ 1 ].yellowStickerTwistAxis && corners[ 1 ].yellowStickerTwistAxis != corners[ 2 ].yellowStickerTwistAxis) { // H cases
				group = H;
			} else { // P cases
				group = P;
			}
		} else { // U, T or L cases
			int flippedCornerID1 = -1;
			int flippedCornerID2 = -1;

			for (uint i = 0; i < 4; i++) {
				if (corners[ i ].yellowStickerTwistAxis != Y) {
					if (flippedCornerID1 == -1) {
						flippedCornerID1 = i;
					} else {
						flippedCornerID2 = i;
						break;
					}
				}
			}

			int breakBetweenCorners = -1;
			if (flippedCornerID2 - flippedCornerID1 == 1 || flippedCornerID1 == 0 && flippedCornerID2 == 3)
				breakBetweenCorners = 0;
			else
				breakBetweenCorners = 1;

			if (breakBetweenCorners == 1) {
				group = L;
			} else if (corners[ flippedCornerID1 ].yellowStickerTwistAxis == X && corners[ flippedCornerID2 ].yellowStickerTwistAxis == Z) {
				if (!( flippedCornerID1 == 0 && flippedCornerID2 == 3 ))
					group = T;
				else
					group = U;
			} else {
				if (!( flippedCornerID1 == 0 && flippedCornerID2 == 3 ))
					group = U;
				else
					group = T;
			}
		}

		return group;
	}

	CMLLCase getCase() {
		switch (getCaseGroup()) {
		case O : {
			bool jPerm = false;

			for (uint i = 0; i < 4; i++) {
				if (corners[ i ].zColor == corners[ (i + 1) % 4 ].xColor) {
					jPerm = true;
					break;
				}
			}

			if (jPerm)
				return O0;
			else
				return O1;
		} break;

		case H : {
			Axis hAxis = corners[ 0 ].yellowStickerTwistAxis;

			bool column0 = false;
			bool column1 = false;

			if (corners[ 0 ].translateColor( Y ) == corners[ 1 ].translateColor( Y )) column0 = true;
			if (corners[ 2 ].translateColor( Y ) == corners[ 3 ].translateColor( Y )) column1 = true;

			if (column0 && !column1 || !column0 && column1) {
				if (hAxis == X)
					return H2;
				else
					return H3;
			} else if (column0 && column1) {
				if (hAxis == X)
					return H0;
				else
					return H1;
			} else {
				bool row0 = false;
				bool row1 = false;

				if (corners[ 0 ].translateColor( Y ) == corners[ 3 ].translateColor( Y )) row0 = true;
				if (corners[ 1 ].translateColor( Y ) == corners[ 2 ].translateColor( Y )) row1 = true;

				if (row0 && !row1 || !row0 && row1) {
					if (hAxis == X)
						return H3;
					else
						return H2;
				} else {
					if (hAxis == X)
						return H1;
					else
						return H0;
				}
			}
		} break;

		case P : {
			uint rightHeadlightCornerID = 0;

			for (uint i = 0; i < 4; i++) {
				if (corners[ i ].yellowStickerTwistAxis == X && corners[ ( i + 1 ) % 4 ].yellowStickerTwistAxis == X)
					rightHeadlightCornerID = i;
			}

			bool column0 = false;
			bool column1 = false;

			if (corners[ rightHeadlightCornerID ].translateColor( Y ) == corners[ ( rightHeadlightCornerID + 3 ) % 4 ].translateColor( Y )) column0 = true;
			if (corners[ ( rightHeadlightCornerID + 1 ) % 4 ].translateColor( Y ) == corners[ ( rightHeadlightCornerID + 2 ) % 4 ].translateColor( Y )) column1 = true;

			if (column0 && !column1) {
				return P5;
			} else if (!column0 && column1) {
				return P0;
			} else if (column0 && column1) {
				return P4;
			} else {
				bool slash0 = false;
				bool slash1 = false;

				if (corners[ rightHeadlightCornerID ].translateColor( Y ) == corners[ ( rightHeadlightCornerID + 2 ) % 4 ].translateColor( Y )) slash0 = true;
				if (corners[ ( rightHeadlightCornerID + 1 ) % 4 ].translateColor( Y ) == corners[ ( rightHeadlightCornerID + 3 ) % 4 ].translateColor( Y )) slash1 = true;

				if (slash0 && !slash1) {
					return P1;
				} else if (!slash0 && slash1) {
					return P3;
				} else {
					return P2;
				}
			}
		} break;

		case U : {
			uint rightHeadlightCornerID = 0;

			for (uint i = 0; i < 4; i++) {
				if (corners[ i ].yellowStickerTwistAxis == X && corners[ ( i + 1 ) % 4 ].yellowStickerTwistAxis == Y)
					rightHeadlightCornerID = i;
			}

			bool topRow = false;
			bool bottomRow = false;

			if (corners[ rightHeadlightCornerID ].translateColor( Y ) == corners[ ( rightHeadlightCornerID + 3 ) % 4 ].translateColor( Y )) topRow = true;
			if (corners[ ( rightHeadlightCornerID + 1 ) % 4 ].translateColor( Z ) == corners[ ( rightHeadlightCornerID + 2 ) % 4 ].translateColor( X )) bottomRow = true;

			if (topRow && !bottomRow) {
				return U5;
			} else if (!topRow && bottomRow) {
				return U2;
			} else if (topRow && bottomRow) {
				return U3;
			} else {
				bool slash0 = false;
				bool slash1 = false;

				if (corners[ rightHeadlightCornerID ].translateColor( Y ) == corners[ ( rightHeadlightCornerID + 2 ) % 4 ].translateColor( X )) slash0 = true;
				if (corners[ ( rightHeadlightCornerID + 1 ) % 4 ].translateColor( Z ) == corners[ ( rightHeadlightCornerID + 3 ) % 4 ].translateColor( Y )) slash1 = true;

				if (slash0 && !slash1) {
					return U0;
				} else if (!slash0 && slash1) {
					return U1;
				} else {
					return U4;
				}
			}
		} break;

		case T : {
			uint rightEyeCornerID = 0;

			for (uint i = 0; i < 4; i++) {
				if (corners[ i ].yellowStickerTwistAxis == Z && corners[ ( i + 1 ) % 4 ].yellowStickerTwistAxis == Y)
					rightEyeCornerID = i;
			}

			bool column0 = false;
			bool column1 = false;

			if (corners[ rightEyeCornerID ].translateColor( Y ) == corners[ ( rightEyeCornerID + 1 ) % 4 ].translateColor( Z )) column0 = true;
			if (corners[ ( rightEyeCornerID + 3 ) % 4 ].translateColor( Y ) == corners[ ( rightEyeCornerID + 2 ) % 4 ].translateColor( X )) column1 = true;

			if (column0 && !column1) {
				return T1;
			} else if (!column0 && column1) {
				return T0;
			} else if (column0 && column1) {
				return T5;
			} else {
				bool topRow = false;
				bool bottomRow = false;

				if (corners[ rightEyeCornerID ].translateColor( Y ) == corners[ ( rightEyeCornerID + 3 ) % 4 ].translateColor( Y )) topRow = true;
				if (corners[ ( rightEyeCornerID + 1 ) % 4 ].translateColor( Z ) == corners[ ( rightEyeCornerID + 2 ) % 4 ].translateColor( X )) bottomRow = true;

				if (topRow && !bottomRow) {
					return T4;
				} else if (!topRow && bottomRow) {
					return T3;
				} else {
					return T2;
				}
			}
		} break;

		case S : {
			uint onlyTopYellowCornerID = 0;

			for (uint i = 0; i < 4; i++) {
				if (corners[ i ].yellowStickerTwistAxis == Y && corners[ ( i + 1 ) % 4 ].yellowStickerTwistAxis == Z)
					onlyTopYellowCornerID = i;
			}

			bool column0 = false;
			bool column1 = false;

			if (corners[ ( onlyTopYellowCornerID + 3 ) % 4 ].translateColor( Y ) == corners[ onlyTopYellowCornerID ].translateColor( Z )) column0 = true;
			if (corners[ ( onlyTopYellowCornerID + 2 ) % 4 ].translateColor( Y ) == corners[ ( onlyTopYellowCornerID + 1 ) % 4 ].translateColor( X )) column1 = true;

			if (column0 && !column1) {
				return S4;
			} else if (!column0 && column1) {
				return S0;
			} else if (column0 && column1) {
				return S3;
			} else {
				bool slash0 = false;
				bool slash1 = false;

				if (corners[ ( onlyTopYellowCornerID + 3 ) % 4 ].translateColor( Y ) == corners[ ( onlyTopYellowCornerID + 1 ) % 4 ].translateColor( X )) slash0 = true;
				if (corners[ ( onlyTopYellowCornerID + 2 ) % 4 ].translateColor( Y ) == corners[ onlyTopYellowCornerID ].translateColor( Z )) slash1 = true;

				if (slash0 && !slash1) {
					return S2;
				} else if (!slash0 && slash1) {
					return S5;
				} else {
					return S1;
				}
			}
		} break;

		case A : {
			uint onlyTopYellowCornerID = 0;

			for (uint i = 0; i < 4; i++) {
				if (corners[ i ].yellowStickerTwistAxis == Y && corners[ ( i + 1 ) % 4 ].yellowStickerTwistAxis == X)
					onlyTopYellowCornerID = i;
			}

			bool column0 = false;
			bool column1 = false;

			if (corners[ ( onlyTopYellowCornerID + 1 ) % 4 ].translateColor( Y ) == corners[ onlyTopYellowCornerID ].translateColor( X )) column0 = true;
			if (corners[ ( onlyTopYellowCornerID + 2 ) % 4 ].translateColor( Y ) == corners[ ( onlyTopYellowCornerID + 3 ) % 4 ].translateColor( Z )) column1 = true;

			if (column0 && !column1) {
				return A5;
			} else if (!column0 && column1) {
				return A0;
			} else if (column0 && column1) {
				return A1;
			} else {
				bool slash0 = false;
				bool slash1 = false;

				if (corners[ ( onlyTopYellowCornerID + 1 ) % 4 ].translateColor( Y ) == corners[ ( onlyTopYellowCornerID + 3 ) % 4 ].translateColor( Z )) slash0 = true;
				if (corners[ ( onlyTopYellowCornerID + 2 ) % 4 ].translateColor( Y ) == corners[ onlyTopYellowCornerID ].translateColor( X )) slash1 = true;

				if (slash0 && !slash1) {
					return A2;
				} else if (!slash0 && slash1) {
					return A4;
				} else {
					return A3;
				}
			}
		} break;

		case L : {
			uint rightEyeCornerID = 0;

			for (uint i = 0; i < 4; i++) {
				if (corners[ i ].yellowStickerTwistAxis == X && corners[ ( i + 1 ) % 4 ].yellowStickerTwistAxis == Y)
					rightEyeCornerID = i;
			}

			Color colorTop0 = corners[ rightEyeCornerID ].translateColor( Y );
			Color colorTop2 = corners[ ( rightEyeCornerID + 2 ) % 4 ].translateColor( Y );
			Color colorSide3 = corners[ ( rightEyeCornerID + 3 ) % 4 ].translateColor( X );

			if (colorTop0 == colorTop2) {
				if (colorSide3 == colorTop0.oppositeColorOnCube())
					return L3;
				else
					return L5;
			} else if (colorTop0 == colorTop2.oppositeColorOnCube()) {
				if (colorTop0 == colorSide3)
					return L0;
				else
					return L1;
			} else {
				if (colorTop0 == colorSide3)
					return L4;
				else
					return L2;
			}
		} break;
		}

		return O0;
	}

	void render(Screen& screen, vec2i pos) {
		screen.setPixels( vec2i( pos.x + 3, pos.y ), vec2u( 3, 6 ), ' ', DEFAULT_CHARACTER_COLOR, COLOR_YELLOW );
		screen.setPixels( vec2i( pos.x, pos.y + 2 ), vec2u( 9, 2 ), ' ', DEFAULT_CHARACTER_COLOR, COLOR_YELLOW );
		
		screen.setPixels( vec2i( pos.x, pos.y ), vec2u( 3, 2 ), ' ', DEFAULT_CHARACTER_COLOR, corners[ 0 ].translateColor( Y ).colorCode );
		screen.setPixels( vec2i( pos.x + 6, pos.y ), vec2u( 3, 2 ), ' ', DEFAULT_CHARACTER_COLOR, corners[ 1 ].translateColor( Y ).colorCode );
		screen.setPixels( vec2i( pos.x + 6, pos.y + 4 ), vec2u( 3, 2 ), ' ', DEFAULT_CHARACTER_COLOR, corners[ 2 ].translateColor( Y ).colorCode );
		screen.setPixels( vec2i( pos.x, pos.y + 4 ), vec2u( 3, 2 ), ' ', DEFAULT_CHARACTER_COLOR, corners[ 3 ].translateColor( Y ).colorCode );
		
		screen.setPixels( vec2i( pos.x + 9, pos.y ), vec2u( 2, 2 ), ' ', DEFAULT_CHARACTER_COLOR, corners[ 1 ].translateColor( Z ).colorCode );
		screen.setPixels( vec2i( pos.x + 9, pos.y + 4 ), vec2u( 2, 2 ), ' ', DEFAULT_CHARACTER_COLOR, corners[ 2 ].translateColor( X ).colorCode );

		screen.setPixels( vec2i( pos.x + 6, pos.y + 6 ), vec2u( 3, 1 ), ' ', DEFAULT_CHARACTER_COLOR, corners[ 2 ].translateColor( Z ).colorCode );
		screen.setPixels( vec2i( pos.x, pos.y + 6 ), vec2u( 3, 1 ), ' ', DEFAULT_CHARACTER_COLOR, corners[ 3 ].translateColor( X ).colorCode );
	}

	uint printPossibleAnswers() { //returns amount of possible answers
		CMLLCaseGroup group = getCaseGroup();

		std::cout << "Which one of these cases is it?" << std::endl;

		switch (group) {
		case O : {
			std::cout << "O case: " << std::endl;
			std::cout << "1. " << getCaseAlgorithm( O0 ) << std::endl;
			std::cout << "2. " << getCaseAlgorithm( O1 ) << std::endl;

			return 2;
		} break;

		case H : {
			std::cout << "H case: " << std::endl;
			std::cout << "1. " << getCaseAlgorithm( H0 ) << std::endl;
			std::cout << "2. " << getCaseAlgorithm( H1 ) << std::endl;
			std::cout << "3. " << getCaseAlgorithm( H2 ) << std::endl;
			std::cout << "4. " << getCaseAlgorithm( H3 ) << std::endl;

			return 4;
		} break;

		case P : {
			std::cout << "Pi case: " << std::endl;
			std::cout << "1. " << getCaseAlgorithm( P0 ) << std::endl;
			std::cout << "2. " << getCaseAlgorithm( P1 ) << std::endl;
			std::cout << "3. " << getCaseAlgorithm( P2 ) << std::endl;
			std::cout << "4. " << getCaseAlgorithm( P3 ) << std::endl;
			std::cout << "5. " << getCaseAlgorithm( P4 ) << std::endl;
			std::cout << "6. " << getCaseAlgorithm( P5 ) << std::endl;

			return 6;
		} break;

		case U : {
			std::cout << "U case: " << std::endl;
			std::cout << "1. " << getCaseAlgorithm( U0 ) << std::endl;
			std::cout << "2. " << getCaseAlgorithm( U1 ) << std::endl;
			std::cout << "3. " << getCaseAlgorithm( U2 ) << std::endl;
			std::cout << "4. " << getCaseAlgorithm( U3 ) << std::endl;
			std::cout << "5. " << getCaseAlgorithm( U4 ) << std::endl;
			std::cout << "6. " << getCaseAlgorithm( U5 ) << std::endl;

			return 6;
		} break;

		case T : {
			std::cout << "T case: " << std::endl;
			std::cout << "1. " << getCaseAlgorithm( T0 ) << std::endl;
			std::cout << "2. " << getCaseAlgorithm( T1 ) << std::endl;
			std::cout << "3. " << getCaseAlgorithm( T2 ) << std::endl;
			std::cout << "4. " << getCaseAlgorithm( T3 ) << std::endl;
			std::cout << "5. " << getCaseAlgorithm( T4 ) << std::endl;
			std::cout << "6. " << getCaseAlgorithm( T5 ) << std::endl;

			return 6;
		} break;

		case S : {
			std::cout << "Sune case: " << std::endl;
			std::cout << "1. " << getCaseAlgorithm( S0 ) << std::endl;
			std::cout << "2. " << getCaseAlgorithm( S1 ) << std::endl;
			std::cout << "3. " << getCaseAlgorithm( S2 ) << std::endl;
			std::cout << "4. " << getCaseAlgorithm( S3 ) << std::endl;
			std::cout << "5. " << getCaseAlgorithm( S4 ) << std::endl;
			std::cout << "6. " << getCaseAlgorithm( S5 ) << std::endl;

			return 6;
		} break;

		case A : {
			std::cout << "Anti-Sune case: " << std::endl;
			std::cout << "1. " << getCaseAlgorithm( A0 ) << std::endl;
			std::cout << "2. " << getCaseAlgorithm( A1 ) << std::endl;
			std::cout << "3. " << getCaseAlgorithm( A2 ) << std::endl;
			std::cout << "4. " << getCaseAlgorithm( A3 ) << std::endl;
			std::cout << "5. " << getCaseAlgorithm( A4 ) << std::endl;
			std::cout << "6. " << getCaseAlgorithm( A5 ) << std::endl;

			return 6;
		} break;

		case L : {
			std::cout << "L case: " << std::endl;
			std::cout << "1. " << getCaseAlgorithm( L0 ) << std::endl;
			std::cout << "2. " << getCaseAlgorithm( L1 ) << std::endl;
			std::cout << "3. " << getCaseAlgorithm( L2 ) << std::endl;
			std::cout << "4. " << getCaseAlgorithm( L3 ) << std::endl;
			std::cout << "5. " << getCaseAlgorithm( L4 ) << std::endl;
			std::cout << "6. " << getCaseAlgorithm( L5 ) << std::endl;

			return 6;
		} break;
		}

		return 0;
	}

	bool checkAnswerIsInRange(char answer) {
		CMLLCase cmll = getCase();
		int answerLimit = 0;
		int answerCode = (int)answer;

		if (!(answerCode >= (int)'0' && answerCode <= (int)'9')) {
			std::cout << "Your answer isn't a number!" << std::endl;
			return false;
		}

		int answerNumber = answer - '0';

		if (cmll >= 6) {
			answerLimit = 6;
		} else if (cmll >= 2) {
			answerLimit = 4;
		} else {
			answerLimit = 2;
		}

		if (answerNumber < 1) {
			std::cout << "Your answer number has to be greater than 0!" << std::endl;
			return false;
		}

		if (answerNumber > answerLimit) {
			std::cout << "Your answer number has to be smaller than " << ( answerLimit + 1 ) << "!" << std::endl;
			return false;
		}

		return true;
	}

	bool checkAnswerCorrectness(char answer) {
		CMLLCase cmll = getCase();

		if (answer == '1' && (cmll == O0 || cmll == H0 || cmll == P0 || cmll == U0 || cmll == T0 || cmll == S0 || cmll == A0 || cmll == L0)) return true;
		if (answer == '2' && (cmll == O1 || cmll == H1 || cmll == P1 || cmll == U1 || cmll == T1 || cmll == S1 || cmll == A1 || cmll == L1)) return true;
		if (answer == '3' && (cmll == H2 || cmll == P2 || cmll == U2 || cmll == T2 || cmll == S2 || cmll == A2 || cmll == L2)) return true;
		if (answer == '4' && (cmll == H3 || cmll == P3 || cmll == U3 || cmll == T3 || cmll == S3 || cmll == A3 || cmll == L3)) return true;
		if (answer == '5' && (cmll == P4 || cmll == U4 || cmll == T4 || cmll == S4 || cmll == A4 || cmll == L4)) return true;
		if (answer == '6' && (cmll == P5 || cmll == U5 || cmll == T5 || cmll == S5 || cmll == A5 || cmll == L5)) return true;

		return false;
	}

	void question() {
		char answer;
		bool answerInRange = false;

		// Asking Question
		printPossibleAnswers();

		while (!answerInRange) {
			// User Input
			std::cout << "Your answer: ";
			std::cin >> answer;

			// Checking whether Answer is in Range
			if (checkAnswerIsInRange( answer ))
				answerInRange = true;
		}
		
		// Checking Answer Correctness
		if (checkAnswerCorrectness( answer ))
			std::cout << "Correct answer!" << std::endl;
		else
			std::cout << "Your answer is incorrect. The correct answer was: " << std::endl << getCaseAlgorithm( getCase() ) << std::endl;

		std::cout << std::endl;
		system("pause");
	}
};