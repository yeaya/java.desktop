#ifndef _com_sun_imageio_plugins_tiff_TIFFLZWUtil_h_
#define _com_sun_imageio_plugins_tiff_TIFFLZWUtil_h_
//$ class com.sun.imageio.plugins.tiff.TIFFLZWUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFLZWUtil : public ::java::lang::Object {
	$class(TIFFLZWUtil, 0, ::java::lang::Object)
public:
	TIFFLZWUtil();
	void init$();
	virtual void addStringToTable($bytes* oldString, int8_t newString);
	virtual void addStringToTable($bytes* string);
	virtual $bytes* composeString($bytes* oldString, int8_t newString);
	virtual $bytes* decode($bytes* data, int32_t predictor, int32_t samplesPerPixel, int32_t width, int32_t height);
	void ensureCapacity(int32_t bytesToAdd);
	virtual int32_t getNextCode();
	virtual void initializeStringTable();
	virtual void writeString($bytes* string);
	$bytes* srcData = nullptr;
	int32_t srcIndex = 0;
	$bytes* dstData = nullptr;
	int32_t dstIndex = 0;
	$Array<int8_t, 2>* stringTable = nullptr;
	int32_t tableIndex = 0;
	int32_t bitsToGet = 0;
	int32_t nextData = 0;
	int32_t nextBits = 0;
	static $ints* andTable;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFLZWUtil_h_