#ifndef _java_awt_image_DataBufferFloat_h_
#define _java_awt_image_DataBufferFloat_h_
//$ class java.awt.image.DataBufferFloat
//$ extends java.awt.image.DataBuffer

#include <java/awt/image/DataBuffer.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {

class $export DataBufferFloat : public ::java::awt::image::DataBuffer {
	$class(DataBufferFloat, $NO_CLASS_INIT, ::java::awt::image::DataBuffer)
public:
	DataBufferFloat();
	void init$(int32_t size);
	void init$(int32_t size, int32_t numBanks);
	void init$($floats* dataArray, int32_t size);
	void init$($floats* dataArray, int32_t size, int32_t offset);
	void init$($Array<float, 2>* dataArray, int32_t size);
	void init$($Array<float, 2>* dataArray, int32_t size, $ints* offsets);
	$Array<float, 2>* getBankData();
	$floats* getData();
	$floats* getData(int32_t bank);
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
	$Array<float, 2>* bankdata = nullptr;
	$floats* data = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_DataBufferFloat_h_