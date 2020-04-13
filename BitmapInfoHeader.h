#pragma once

#ifndef  _BITMAPINFOHEADER_H_
#define _BITMAPINFOHEADER_H_

#pragma pack(2)

namespace fractalimg {

	struct BitmapInfoHeader {
		__int32 headerSize{ 40 };
		__int32 width{ 0 };
		__int32 height{ 0 };
		__int16 planes{ 1 };
		__int16 bitsPerPixel{ 24 };
		__int32 compression{ 0 };
		__int32 dataSize{ 0 };
		__int32 horizontalResolution{ 2400 };
		__int32 verticalResolution{ 2400 };
		__int32 colors{ 0 };
		__int32 importantColors{ 0 };
	};
}

#endif // ! _BITMAPINFOHEADER_H_
