#ifndef _java_awt_image_DataBufferShort_h_
#define _java_awt_image_DataBufferShort_h_
//$ class java.awt.image.DataBufferShort
//$ extends java.awt.image.DataBuffer

#include <java/awt/image/DataBuffer.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {

class $import DataBufferShort : public ::java::awt::image::DataBuffer {
	$class(DataBufferShort, $NO_CLASS_INIT, ::java::awt::image::DataBuffer)
public:
	DataBufferShort();
	void init$(int32_t size);
	void init$(int32_t size, int32_t numBanks);
	void init$($shorts* dataArray, int32_t size);
	void init$($shorts* dataArray, int32_t size, int32_t offset);
	void init$($Array<int16_t, 2>* dataArray, int32_t size);
	void init$($Array<int16_t, 2>* dataArray, int32_t size, $ints* offsets);
	$Array<int16_t, 2>* getBankData();
	$shorts* getData();
	$shorts* getData(int32_t bank);
	virtual int32_t getElem(int32_t i) override;
	virtual int32_t getElem(int32_t bank, int32_t i) override;
	virtual void setElem(int32_t i, int32_t val) override;
	virtual void setElem(int32_t bank, int32_t i, int32_t val) override;
	$shorts* data = nullptr;
	$Array<int16_t, 2>* bankdata = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_DataBufferShort_h_