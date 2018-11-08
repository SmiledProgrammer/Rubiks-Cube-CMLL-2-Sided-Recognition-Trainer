#pragma once

#include <cstdlib>
#include <cstdio>
#include <ctime>

#define SCREEN_WIDTH 13
#define SCREEN_HEIGHT 9

#define COLOR_BLACK			0
#define COLOR_DARK_BLUE		1
#define COLOR_DARK_GREEN	2
#define COLOR_DARK_AQUA		3
#define COLOR_DARK_RED		4
#define COLOR_DARK_PURPLE	5
#define COLOR_DARK_YELLOW	6
#define COLOR_LIGHT_GRAY	7
#define COLOR_DARK_GRAY		8
#define COLOR_BLUE			9
#define COLOR_GREEN			10
#define COLOR_AQUA			11
#define COLOR_RED			12
#define COLOR_PURPLE		13
#define COLOR_YELLOW		14
#define COLOR_WHITE			15
#define DEFAULT_CHARACTER_COLOR		COLOR_LIGHT_GRAY
#define DEFAULT_BACKGROUND_COLOR	COLOR_BLACK
#define DEFAULT_COLOR				DEFAULT_BACKGROUND_COLOR * 16 + DEFAULT_CHARACTER_COLOR

typedef unsigned int uint;
typedef unsigned char uchar;

struct vec2u {
	uint x, y;

	vec2u(uint x, uint y)
		: x( x ), y( y )
	{}
};

struct vec2i {
	int x, y;

	vec2i(int x, int y)
		: x( x ), y( y )
	{}
};

struct pixel {
	uchar character;
	uchar color;
};

class Screen {
private:
	pixel m_pixels[ SCREEN_WIDTH * SCREEN_HEIGHT ];

public:
	Screen() {
		for (uint i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++) {
			m_pixels[ i ].character = ' ';
			m_pixels[ i ].color = DEFAULT_COLOR;
		}
	}

public:
	void setPixel(vec2i pos, uchar pixel) {
		m_pixels[ pos.y * SCREEN_WIDTH + pos.x ].character = pixel;
	}

	void setPixel(vec2i pos, uchar pixel, uchar characterColor) {
		m_pixels[ pos.y * SCREEN_WIDTH + pos.x ].character = pixel;
		uchar currentCharacterColor = m_pixels[ pos.y * SCREEN_WIDTH + pos.x ].color % 16;
		uchar currentBackgroundColor = m_pixels[ pos.y * SCREEN_WIDTH + pos.x ].color - currentCharacterColor;
		m_pixels[ pos.y * SCREEN_WIDTH + pos.x ].color = currentBackgroundColor + characterColor;
	}

	void setPixel(vec2i pos, uchar pixel, uchar characterColor, uchar backgroundColor) {
		m_pixels[ pos.y * SCREEN_WIDTH + pos.x ].character = pixel;
		m_pixels[ pos.y * SCREEN_WIDTH + pos.x ].color = backgroundColor * 16 + characterColor;
	}

	void setPixels(vec2i pos, vec2u size, uchar pixel) {
		for (uint x = pos.x; x < pos.x + size.x; x++) {
			for (uint y = pos.y; y < pos.y + size.y; y++) {
				m_pixels[ y * SCREEN_WIDTH + x ].character = pixel;
			}
		}
	}

	void setPixels(vec2i pos, vec2u size, uchar pixel, uchar characterColor) {
		uchar currentCharacterColor = m_pixels[ pos.y * SCREEN_WIDTH + pos.x ].color % 16;
		uchar currentBackgroundColor = m_pixels[ pos.y * SCREEN_WIDTH + pos.x ].color - currentCharacterColor;
		uchar finalColor = currentBackgroundColor + characterColor;

		for (uint x = pos.x; x < pos.x + size.x; x++) {
			for (uint y = pos.y; y < pos.y + size.y; y++) {
				m_pixels[ y * SCREEN_WIDTH + x ].character = pixel;
				m_pixels[ y * SCREEN_WIDTH + x ].color = finalColor;
			}
		}
	}

	void setPixels(vec2i pos, vec2u size, uchar pixel, uchar characterColor, uchar backgroundColor) {
		for (uint x = pos.x; x < pos.x + size.x; x++) {
			for (uint y = pos.y; y < pos.y + size.y; y++) {
				m_pixels[ y * SCREEN_WIDTH + x ].character = pixel;
				m_pixels[ y * SCREEN_WIDTH + x ].color = backgroundColor * 16 + characterColor;
			}
		}
	}

	void clear() {
		system( "cls" );
	}

	void display() {
		HANDLE handle = GetStdHandle( STD_OUTPUT_HANDLE );

		for (uint y = 0; y < SCREEN_HEIGHT; y++) {
			for (uint x = 0; x < SCREEN_WIDTH; x++) {
				SetConsoleTextAttribute( handle, m_pixels[ y * SCREEN_WIDTH + x ].color );
				printf( "%c", m_pixels[ y * SCREEN_WIDTH + x ].character );
			}

			printf( "\n" );
		}

		SetConsoleTextAttribute( handle, DEFAULT_COLOR );
	}
};