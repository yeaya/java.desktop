#ifndef _java_awt_image_DataBufferDouble_h_
#define _java_awt_image_DataBufferDouble_h_
//$ class java.awt.image.DataBufferDouble
//$ extends java.awt.image.DataBuffer

#include <java/awt/image/DataBuffer.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {

class $import DataBufferDouble : public ::java::awt::image::DataBuffer {
	$class(DataBufferDouble, $NO_CLASS_INIT, ::java::awt::image::DataBuffer)
public:
	DataBufferDouble();
	void init$(int32_t size);
	void init$(int32_t size, int32_t numBanks);
	void init$($doubles* dataArray, int32_t size);
	void init$($doubles* dataArray, int32_t size, int32_t offset);
	void init$($Array<double, 2>* dataArray, int32_t size);
	void init$($Array<double, 2>* dataArray, int32_t size, $ints* offsets);
	$Array<double, 2>* getBankData();
	$doubles* getData();
	$doubles* getData(int32_t bank);
	virtual int32_t getElem(int32_t i) override;
	virtual int32_t getElem(int32_t bank, int32_t i) override;
	virtual double getElemDouble(int32_t i) override;
	virtual double getElemDouble(int32_t bank, int32_t i) override;
	virtual float getElemFloat(int32_t i) override;
	virtual float getElemFloat(int32_t bank, int32_t i) override;
	virtual void setElem(int32_t i, int32_t val) override;
	virtual void setElem(int32_t bank, int32_t i, int32_t val) override;
	virtual void setElemDouble(int32_t i, double val) override;
	virtual void setElemDouble(int32_t bank, int32_t i, double val) override;
	virtual void setElemFloat(int32_t i, float val) override;
	virtual void setElemFloat(int32_t bank, int32_t i, float val) override;
	$Array<double, 2>* bankdata = nullptr;
	$doubles* data = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_DataBufferDouble_h_