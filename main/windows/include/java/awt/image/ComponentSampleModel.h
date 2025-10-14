#ifndef _java_awt_image_ComponentSampleModel_h_
#define _java_awt_image_ComponentSampleModel_h_
//$ class java.awt.image.ComponentSampleModel
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

class $import ComponentSampleModel : public ::java::awt::image::SampleModel {
	$class(ComponentSampleModel, $NO_CLASS_INIT, ::java::awt::image::SampleModel)
public:
	ComponentSampleModel();
	using ::java::awt::image::SampleModel::getDataElements;
	using ::java::awt::image::SampleModel::getPixel;
	using ::java::awt::image::SampleModel::getPixels;
	using ::java::awt::image::SampleModel::getSamples;
	void init$(int32_t dataType, int32_t w, int32_t h, int32_t pixelStride, int32_t scanlineStride, $ints* bandOffsets);
	void init$(int32_t dataType, int32_t w, int32_t h, int32_t pixelStride, int32_t scanlineStride, $ints* bankIndices, $ints* bandOffsets);
	virtual ::java::awt::image::SampleModel* createCompatibleSampleModel(int32_t w, int32_t h) override;
	virtual ::java::awt::image::DataBuffer* createDataBuffer() override;
	virtual ::java::awt::image::SampleModel* createSubsetSampleModel($ints* bands) override;
	virtual bool equals(Object$* o) override;
	$ints* getBandOffsets();
	$ints* getBankIndices();
	int32_t getBufferSize();
	virtual $Object* getDataElements(int32_t x, int32_t y, Object$* obj, ::java::awt::image::DataBuffer* data) override;
	virtual int32_t getNumDataElements() override;
	virtual int32_t getOffset(int32_t x, int32_t y);
	virtual int32_t getOffset(int32_t x, int32_t y, int32_t b);
	virtual $ints* getPixel(int32_t x, int32_t y, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	int32_t getPixelStride();
	virtual $ints* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	virtual int32_t getSample(int32_t x, int32_t y, int32_t b, ::java::awt::image::DataBuffer* data) override;
	virtual double getSampleDouble(int32_t x, int32_t y, int32_t b, ::java::awt::image::DataBuffer* data) override;
	virtual float getSampleFloat(int32_t x, int32_t y, int32_t b, ::java::awt::image::DataBuffer* data) override;
	virtual $ints* getSampleSize() override;
	virtual int32_t getSampleSize(int32_t band) override;
	virtual $ints* getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	int32_t getScanlineStride();
	virtual int32_t hashCode() override;
	virtual $ints* orderBands($ints* orig, int32_t step);
	using ::java::awt::image::SampleModel::setDataElements;
	virtual void setDataElements(int32_t x, int32_t y, Object$* obj, ::java::awt::image::DataBuffer* data) override;
	using ::java::awt::image::SampleModel::setPixel;
	virtual void setPixel(int32_t x, int32_t y, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	using ::java::awt::image::SampleModel::setPixels;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	virtual void setSample(int32_t x, int32_t y, int32_t b, int32_t s, ::java::awt::image::DataBuffer* data) override;
	virtual void setSample(int32_t x, int32_t y, int32_t b, float s, ::java::awt::image::DataBuffer* data) override;
	virtual void setSample(int32_t x, int32_t y, int32_t b, double s, ::java::awt::image::DataBuffer* data) override;
	using ::java::awt::image::SampleModel::setSamples;
	virtual void setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	void verify();
	$ints* bandOffsets = nullptr;
	$ints* bankIndices = nullptr;
	int32_t numBands = 0;
	int32_t numBanks = 0;
	int32_t scanlineStride = 0;
	int32_t pixelStride = 0;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_ComponentSampleModel_h_