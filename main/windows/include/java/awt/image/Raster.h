#ifndef _java_awt_image_Raster_h_
#define _java_awt_image_Raster_h_
//$ class java.awt.image.Raster
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class DataBuffer;
			class SampleModel;
			class WritableRaster;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $import Raster : public ::java::lang::Object {
	$class(Raster, 0, ::java::lang::Object)
public:
	Raster();
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBuffer* dataBuffer, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBuffer* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* sampleModelTranslate, ::java::awt::image::Raster* parent);
	static ::java::awt::image::WritableRaster* createBandedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, ::java::awt::Point* location);
	static ::java::awt::image::WritableRaster* createBandedRaster(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, $ints* bankIndices, $ints* bandOffsets, ::java::awt::Point* location);
	static ::java::awt::image::WritableRaster* createBandedRaster(::java::awt::image::DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, $ints* bankIndices, $ints* bandOffsets, ::java::awt::Point* location);
	virtual ::java::awt::image::Raster* createChild(int32_t parentX, int32_t parentY, int32_t width, int32_t height, int32_t childMinX, int32_t childMinY, $ints* bandList);
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster();
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h);
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(::java::awt::Rectangle* rect);
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t x, int32_t y, int32_t w, int32_t h);
	static ::java::awt::image::WritableRaster* createInterleavedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, ::java::awt::Point* location);
	static ::java::awt::image::WritableRaster* createInterleavedRaster(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, int32_t pixelStride, $ints* bandOffsets, ::java::awt::Point* location);
	static ::java::awt::image::WritableRaster* createInterleavedRaster(::java::awt::image::DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, int32_t pixelStride, $ints* bandOffsets, ::java::awt::Point* location);
	static ::java::awt::image::WritableRaster* createPackedRaster(int32_t dataType, int32_t w, int32_t h, $ints* bandMasks, ::java::awt::Point* location);
	static ::java::awt::image::WritableRaster* createPackedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, int32_t bitsPerBand, ::java::awt::Point* location);
	static ::java::awt::image::WritableRaster* createPackedRaster(::java::awt::image::DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, $ints* bandMasks, ::java::awt::Point* location);
	static ::java::awt::image::WritableRaster* createPackedRaster(::java::awt::image::DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t bitsPerPixel, ::java::awt::Point* location);
	static ::java::awt::image::Raster* createRaster(::java::awt::image::SampleModel* sm, ::java::awt::image::DataBuffer* db, ::java::awt::Point* location);
	virtual ::java::awt::image::Raster* createTranslatedChild(int32_t childMinX, int32_t childMinY);
	static ::java::awt::image::WritableRaster* createWritableRaster(::java::awt::image::SampleModel* sm, ::java::awt::Point* location);
	static ::java::awt::image::WritableRaster* createWritableRaster(::java::awt::image::SampleModel* sm, ::java::awt::image::DataBuffer* db, ::java::awt::Point* location);
	virtual ::java::awt::Rectangle* getBounds();
	virtual ::java::awt::image::DataBuffer* getDataBuffer();
	virtual $Object* getDataElements(int32_t x, int32_t y, Object$* outData);
	virtual $Object* getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* outData);
	int32_t getHeight();
	int32_t getMinX();
	int32_t getMinY();
	int32_t getNumBands();
	int32_t getNumDataElements();
	virtual ::java::awt::image::Raster* getParent();
	virtual $ints* getPixel(int32_t x, int32_t y, $ints* iArray);
	virtual $floats* getPixel(int32_t x, int32_t y, $floats* fArray);
	virtual $doubles* getPixel(int32_t x, int32_t y, $doubles* dArray);
	virtual $ints* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray);
	virtual $floats* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $floats* fArray);
	virtual $doubles* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $doubles* dArray);
	virtual int32_t getSample(int32_t x, int32_t y, int32_t b);
	virtual double getSampleDouble(int32_t x, int32_t y, int32_t b);
	virtual float getSampleFloat(int32_t x, int32_t y, int32_t b);
	virtual ::java::awt::image::SampleModel* getSampleModel();
	int32_t getSampleModelTranslateX();
	int32_t getSampleModelTranslateY();
	virtual $ints* getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray);
	virtual $floats* getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $floats* fArray);
	virtual $doubles* getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $doubles* dArray);
	int32_t getTransferType();
	int32_t getWidth();
	static void initIDs();
	::java::awt::image::SampleModel* sampleModel = nullptr;
	::java::awt::image::DataBuffer* dataBuffer = nullptr;
	int32_t minX = 0;
	int32_t minY = 0;
	int32_t width = 0;
	int32_t height = 0;
	int32_t sampleModelTranslateX = 0;
	int32_t sampleModelTranslateY = 0;
	int32_t numBands = 0;
	int32_t numDataElements = 0;
	::java::awt::image::Raster* parent = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_Raster_h_