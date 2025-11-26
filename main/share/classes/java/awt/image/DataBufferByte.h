#ifndef _java_awt_image_DataBufferByte_h_
#define _java_awt_image_DataBufferByte_h_
//$ class java.awt.image.DataBufferByte
//$ extends java.awt.image.DataBuffer

#include <java/awt/image/DataBuffer.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {

class $export DataBufferByte : public ::java::awt::image::DataBuffer {
	$class(DataBufferByte, $NO_CLASS_INIT, ::java::awt::image::DataBuffer)
public:
	DataBufferByte();
	void init$(int32_t size);
	void init$(int32_t size, int32_t numBanks);
	void init$($bytes* dataArray, int32_t size);
	void init$($bytes* dataArray, int32_t size, int32_t offset);
	void init$($Array<int8_t, 2>* dataArray, int32_t size);
	void init$($Array<int8_t, 2>* dataArray, int32_t size, $ints* offsets);
	$Array<int8_t, 2>* getBankData();
	$bytes* getData();
	$bytes* getData(int32_t bank);
	virtual int32_t getElem(int32_t i) override;
	virtual int32_t getElem(int32_t bank, int32_t i) override;
	virtual void setElem(int32_t i, int32_t val) override;
	virtual void setElem(int32_t bank, int32_t i, int32_t val) override;
	$bytes* data = nullptr;
	$Array<int8_t, 2>* bankdata = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_DataBufferByte_h_