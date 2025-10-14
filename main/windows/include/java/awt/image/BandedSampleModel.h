#ifndef _java_awt_image_BandedSampleModel_h_
#define _java_awt_image_BandedSampleModel_h_
//$ class java.awt.image.BandedSampleModel
//$ extends java.awt.image.ComponentSampleModel

#include <java/awt/image/ComponentSampleModel.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {
			class DataBuffer;
			class SampleModel;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import BandedSampleModel : public ::java::awt::image::ComponentSampleModel {
	$class(BandedSampleModel, $NO_CLASS_INIT, ::java::awt::image::ComponentSampleModel)
public:
	BandedSampleModel();
	using ::java::awt::image::ComponentSampleModel::getDataElements;
	using ::java::awt::image::ComponentSampleModel::getPixel;
	using ::java::awt::image::ComponentSampleModel::getPixels;
	using ::java::awt::image::ComponentSampleModel::getSamples;
	void init$(int32_t dataType, int32_t w, int32_t h, int32_t numBands);
	void init$(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, $ints* bankIndices, $ints* bandOffsets);
	virtual ::java::awt::image::SampleModel* createCompatibleSampleModel(int32_t w, int32_t h) override;
	virtual ::java::awt::image::DataBuffer* createDataBuffer() override;
	static $ints* createIndicesArray(int32_t numBands);
	static $ints* createOffsetArray(int32_t numBands);
	virtual ::java::awt::image::SampleModel* createSubsetSampleModel($ints* bands) override;
	virtual $Object* getDataElements(int32_t x, int32_t y, Object$* obj, ::java::awt::image::DataBuffer* data) override;
	virtual $ints* getPixel(int32_t x, int32_t y, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	virtual $ints* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	virtual int32_t getSample(int32_t x, int32_t y, int32_t b, ::java::awt::image::DataBuffer* data) override;
	virtual double getSampleDouble(int32_t x, int32_t y, int32_t b, ::java::awt::image::DataBuffer* data) override;
	virtual float getSampleFloat(int32_t x, int32_t y, int32_t b, ::java::awt::image::DataBuffer* data) override;
	virtual $ints* getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	virtual int32_t hashCode() override;
	using ::java::awt::image::ComponentSampleModel::setDataElements;
	virtual void setDataElements(int32_t x, int32_t y, Object$* obj, ::java::awt::image::DataBuffer* data) override;
	using ::java::awt::image::ComponentSampleModel::setPixel;
	virtual void setPixel(int32_t x, int32_t y, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	using ::java::awt::image::ComponentSampleModel::setPixels;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
	virtual void setSample(int32_t x, int32_t y, int32_t b, int32_t s, ::java::awt::image::DataBuffer* data) override;
	virtual void setSample(int32_t x, int32_t y, int32_t b, float s, ::java::awt::image::DataBuffer* data) override;
	virtual void setSample(int32_t x, int32_t y, int32_t b, double s, ::java::awt::image::DataBuffer* data) override;
	using ::java::awt::image::ComponentSampleModel::setSamples;
	virtual void setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, ::java::awt::image::DataBuffer* data) override;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_BandedSampleModel_h_