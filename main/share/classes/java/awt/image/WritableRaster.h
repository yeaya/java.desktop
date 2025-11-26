#ifndef _java_awt_image_WritableRaster_h_
#define _java_awt_image_WritableRaster_h_
//$ class java.awt.image.WritableRaster
//$ extends java.awt.image.Raster

#include <java/awt/image/Raster.h>
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
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export WritableRaster : public ::java::awt::image::Raster {
	$class(WritableRaster, $NO_CLASS_INIT, ::java::awt::image::Raster)
public:
	WritableRaster();
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBuffer* dataBuffer, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBuffer* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* sampleModelTranslate, ::java::awt::image::WritableRaster* parent);
	virtual ::java::awt::image::WritableRaster* createWritableChild(int32_t parentX, int32_t parentY, int32_t w, int32_t h, int32_t childMinX, int32_t childMinY, $ints* bandList);
	virtual ::java::awt::image::WritableRaster* createWritableTranslatedChild(int32_t childMinX, int32_t childMinY);
	virtual ::java::awt::image::WritableRaster* getWritableParent();
	virtual void setDataElements(int32_t x, int32_t y, Object$* inData);
	virtual void setDataElements(int32_t x, int32_t y, ::java::awt::image::Raster* inRaster);
	virtual void setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* inData);
	virtual void setPixel(int32_t x, int32_t y, $ints* iArray);
	virtual void setPixel(int32_t x, int32_t y, $floats* fArray);
	virtual void setPixel(int32_t x, int32_t y, $doubles* dArray);
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray);
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $floats* fArray);
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $doubles* dArray);
	virtual void setRect(::java::awt::image::Raster* srcRaster);
	virtual void setRect(int32_t dx, int32_t dy, ::java::awt::image::Raster* srcRaster);
	virtual void setSample(int32_t x, int32_t y, int32_t b, int32_t s);
	virtual void setSample(int32_t x, int32_t y, int32_t b, float s);
	virtual void setSample(int32_t x, int32_t y, int32_t b, double s);
	virtual void setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray);
	virtual void setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $floats* fArray);
	virtual void setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $doubles* dArray);
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_WritableRaster_h_