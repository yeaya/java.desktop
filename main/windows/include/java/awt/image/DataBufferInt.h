#ifndef _java_awt_image_DataBufferInt_h_
#define _java_awt_image_DataBufferInt_h_
//$ class java.awt.image.DataBufferInt
//$ extends java.awt.image.DataBuffer

#include <java/awt/image/DataBuffer.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {

class $import DataBufferInt : public ::java::awt::image::DataBuffer {
	$class(DataBufferInt, $NO_CLASS_INIT, ::java::awt::image::DataBuffer)
public:
	DataBufferInt();
	void init$(int32_t size);
	void init$(int32_t size, int32_t numBanks);
	void init$($ints* dataArray, int32_t size);
	void init$($ints* dataArray, int32_t size, int32_t offset);
	void init$($Array<int32_t, 2>* dataArray, int32_t size);
	void init$($Array<int32_t, 2>* dataArray, int32_t size, $ints* offsets);
	$Array<int32_t, 2>* getBankData();
	$ints* getData();
	$ints* getData(int32_t bank);
	virtual int32_t getElem(int32_t i) override;
	virtual int32_t getElem(int32_t bank, int32_t i) override;
	virtual void setElem(int32_t i, int32_t val) override;
	virtual void setElem(int32_t bank, int32_t i, int32_t val) override;
	$ints* data = nullptr;
	$Array<int32_t, 2>* bankdata = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_DataBufferInt_h_