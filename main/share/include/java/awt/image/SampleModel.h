#ifndef _java_awt_image_SampleModel_h_
#define _java_awt_image_SampleModel_h_
//$ class java.awt.image.SampleModel
//$ extends java.lang.Object

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

class $import SampleModel : public ::java::lang::Object {
	$class(SampleModel, 0, ::java::lang::Object)
public:
	SampleModel();
	void init$(int32_t dataType, int32_t w, int32_t h, int32_t numBands);
	virtual ::java::awt::image::SampleModel* createCompatibleSampleModel(int32_t w, int32_t h) {return nullptr;}
	virtual ::java::awt::image::DataBuffer* createDataBuffer() {return nullptr;}
	virtual ::java::awt::image::SampleModel* createSubsetSampleModel($ints* bands) {return nullptr;}
	virtual $Object* getDataElements(int32_t x, int32_t y, Object$* obj, ::java::awt::image::DataBuffer* data) {return nullptr;}
	virtual $Object* getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj, ::java::awt::image::DataBuffer* data);
	int32_t getDataType();
	int32_t getHeight();
	int32_t getNumBands();
	virtual int32_t getNumDataElements() {return 0;}
	virtual $ints* getPixel(int32_t x, int32_t y, $ints* iArray, ::java::awt::image::DataBuffer* data);
	virtual $floats* getPixel(int32_t x, int32_t y, $floats* fArray, ::java::awt::image::DataBuffer* data);
	virtual $doubles* getPixel(int32_t x, int32_t y, $doubles* dArray, ::java::awt::image::DataBuffer* data);
	virtual $ints* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, ::java::awt::image::DataBuffer* data);
	virtual $floats* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $floats* fArray, ::java::awt::image::DataBuffer* data);
	virtual $doubles* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $doubles* dArray, ::java::awt::image::DataBuffer* data);
	virtual int32_t getSample(int32_t x, int32_t y, int32_t b, ::java::awt::image::DataBuffer* data) {return 0;}
	virtual double getSampleDouble(int32_t x, int32_t y, int32_t b, ::java::awt::image::DataBuffer* data);
	virtual float getSampleFloat(int32_t x, int32_t y, int32_t b, ::java::awt::image::DataBuffer* data);
	virtual $ints* getSampleSize() {return nullptr;}
	virtual int32_t getSampleSize(int32_t band) {return 0;}
	virtual $ints* getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, ::java::awt::image::DataBuffer* data);
	virtual $floats* getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $floats* fArray, ::java::awt::image::DataBuffer* data);
	virtual $doubles* getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $doubles* dArray, ::java::awt::image::DataBuffer* data);
	virtual int32_t getTransferType();
	int32_t getWidth();
	static void initIDs();
	virtual void setDataElements(int32_t x, int32_t y, Object$* obj, ::java::awt::image::DataBuffer* data) {}
	virtual void setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj, ::java::awt::image::DataBuffer* data);
	virtual void setPixel(int32_t x, int32_t y, $ints* iArray, ::java::awt::image::DataBuffer* data);
	virtual void setPixel(int32_t x, int32_t y, $floats* fArray, ::java::awt::image::DataBuffer* data);
	virtual void setPixel(int32_t x, int32_t y, $doubles* dArray, ::java::awt::image::DataBuffer* data);
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray, ::java::awt::image::DataBuffer* data);
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $floats* fArray, ::java::awt::image::DataBuffer* data);
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $doubles* dArray, ::java::awt::image::DataBuffer* data);
	virtual void setSample(int32_t x, int32_t y, int32_t b, int32_t s, ::java::awt::image::DataBuffer* data) {}
	virtual void setSample(int32_t x, int32_t y, int32_t b, float s, ::java::awt::image::DataBuffer* data);
	virtual void setSample(int32_t x, int32_t y, int32_t b, double s, ::java::awt::image::DataBuffer* data);
	virtual void setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray, ::java::awt::image::DataBuffer* data);
	virtual void setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $floats* fArray, ::java::awt::image::DataBuffer* data);
	virtual void setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $doubles* dArray, ::java::awt::image::DataBuffer* data);
	int32_t width = 0;
	int32_t height = 0;
	int32_t numBands = 0;
	int32_t dataType = 0;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_SampleModel_h_