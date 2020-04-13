#pragma once

#ifndef  _BITMAP_H_
#define _BITMAP_H

#include <string>
#include <memory>

namespace fractalimg {

	class Bitmap {
	public:
		Bitmap(int width, int height);
		virtual ~Bitmap();
		bool Write(std::string filename);
		void SetPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	private:
		int m_width;
		int m_height;
		std::unique_ptr<uint8_t> m_pixelData;
	};

}

#endif // ! _BITMAP_H_
