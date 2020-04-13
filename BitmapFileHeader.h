#pragma once

#ifndef _BITMAPFILEHEADER_H_
#define _BITMAPFILEHEADER_H_

#pragma pack(2)

namespace fractalimg {

	struct BitmapFileHeader {
		char header[2]{ 'B', 'M' };
		__int32 fileSize{ 0 };
		__int32 reserver{ 0 };
		__int32 dataOffset{ 0 };
	};

}
#endif _BITMAPFILEHEADER_H_
