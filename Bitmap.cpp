
#include "Bitmap.h"
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"
#include <fstream>

namespace fractalimg {

	Bitmap::Bitmap(int width, int height):m_width(width), m_height(height),
			m_pixelData(new uint8_t[width * height * 3]){}
	Bitmap::~Bitmap(){}

	bool Bitmap::Write(std::string filename) {

		BitmapFileHeader fileHeader;
		BitmapInfoHeader infoHeader;

		fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) +
			m_width * m_height * 3;
		fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

		infoHeader.height = m_height;
		infoHeader.width = m_width;

		std::ofstream file;
		file.open(filename, std::ios::out | std::ios::binary);
		if (!file)
			return false;

		file.write((char*)&fileHeader, sizeof(fileHeader));
		file.write((char*)&infoHeader, sizeof(infoHeader));
		int bufferSize = m_width * m_height * 3;
		file.write((char*)m_pixelData.get(), bufferSize);

		file.close();

		return true;

	}

	void Bitmap::SetPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {

	}

}



