
#include <iostream>
#include <windows.h>
#include "API.h"

int main() {
	srand( (uint)time( NULL ) );

	Screen screen;
	Cube cube;

	while (true) {
		cube.scramble(); 

		cube.render( screen, vec2i( 1, 1 ) );
		screen.clear();
		screen.display();

		cube.question();
	}

	return 0;
}