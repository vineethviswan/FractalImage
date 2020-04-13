
#include <iostream>
#include "Bitmap.h"

using namespace fractalimg;

int main() {
	Bitmap bitmap(800, 600);
	bitmap.Write("E:\\Projects\\FractalImage\\testimg.bmp");
	std::cout << "Finished..\n";
}