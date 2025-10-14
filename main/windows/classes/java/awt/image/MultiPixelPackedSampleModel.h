#ifndef _java_awt_image_MultiPixelPackedSampleModel_h_
#define _java_awt_image_MultiPixelPackedSampleModel_h_
//$ class java.awt.image.MultiPixelPackedSampleModel
//$ extends java.awt.image.SampleModel

#include <java/awt/image/SampleModel.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {
			class DataBuffer;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export MultiPixelPackedSampleModel : public ::java::awt::image::SampleModel {
	$class(MultiPixelPackedSampleModel, $NO_CLASS_INIT, ::java::awt::image::SampleModel)
public:
	MultiPixelPackedSampleModel();
	using ::java::awt::image::SampleModel::getDataElements;
	using ::java::awt::image::SampleModel::getPixel;
	void init$(int32_t dataType, int32_t w, int32_t h, int32_t numberOfBits);
	void init$(int32_t dataType, int32_t w, int32_t h, int32_t numberOfBits, int32_t scanlineStride, int32_t dataBitOffset);
	virtual ::java::awt::image::SampleModel* createCompatibleSampleModel(int32_t w, int32_t h) override;
	virtual ::java::awt::image::DataBuffer* createDataBuffer() override;
	virtual ::java::awt::image::SampleModel* createSubsetSampleModel($ints* bands) override;
	virtual bool equals(Object$* o) override;
	virtual int32_t getBitOffset(int32_t x);
	virtual int32_t getDataBitOffset();
	virtual $Object* getDataElements(int32_t x, int32_t y, Object$* obj, ::java::awt::image::DataBuffer* data) override;
	virtual int32_t getNumDataElements() override;
	virtual int32_t getOffset(int32_t x, int32_t y);
	virtual $ints* getPixel(int32_t x, int32_t y, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	virtual int32_t getPixelBitStride();
	virtual int32_t getSample(int32_t x, int32_t y, int32_t b, ::java::awt::image::DataBuffer* data) override;
	virtual $ints* getSampleSize() override;
	virtual int32_t getSampleSize(int32_t band) override;
	virtual int32_t getScanlineStride();
	virtual int32_t getTransferType() override;
	virtual int32_t hashCode() override;
	using ::java::awt::image::SampleModel::setDataElements;
	virtual void setDataElements(int32_t x, int32_t y, Object$* obj, ::java::awt::image::DataBuffer* data) override;
	using ::java::awt::image::SampleModel::setPixel;
	virtual void setPixel(int32_t x, int32_t y, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	using ::java::awt::image::SampleModel::setSample;
	virtual void setSample(int32_t x, int32_t y, int32_t b, int32_t s, ::java::awt::image::DataBuffer* data) override;
	int32_t pixelBitStride = 0;
	int32_t bitMask = 0;
	int32_t pixelsPerDataElement = 0;
	int32_t dataElementSize = 0;
	int32_t dataBitOffset = 0;
	int32_t scanlineStride = 0;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_MultiPixelPackedSampleModel_h_