#ifndef _sun_awt_image_ShortInterleavedRaster_h_
#define _sun_awt_image_ShortInterleavedRaster_h_
//$ class sun.awt.image.ShortInterleavedRaster
//$ extends sun.awt.image.ShortComponentRaster

#include <java/lang/Array.h>
#include <sun/awt/image/ShortComponentRaster.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class DataBufferUShort;
			class Raster;
			class SampleModel;
			class WritableRaster;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ShortInterleavedRaster : public ::sun::awt::image::ShortComponentRaster {
	$class(ShortInterleavedRaster, $NO_CLASS_INIT, ::sun::awt::image::ShortComponentRaster)
public:
	ShortInterleavedRaster();
	using ::sun::awt::image::ShortComponentRaster::createCompatibleWritableRaster;
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBufferUShort* dataBuffer, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBufferUShort* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* origin, ::sun::awt::image::ShortInterleavedRaster* parent);
	virtual ::java::awt::image::Raster* createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster() override;
	virtual ::java::awt::image::WritableRaster* createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) override;
	virtual $Object* getDataElements(int32_t x, int32_t y, Object$* obj) override;
	virtual $Object* getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) override;
	virtual int32_t getDataOffset(int32_t band) override;
	virtual $ints* getDataOffsets() override;
	virtual $shorts* getDataStorage() override;
	virtual int32_t getPixelStride() override;
	virtual int32_t getScanlineStride() override;
	virtual $shorts* getShortData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $shorts* outData) override;
	virtual $shorts* getShortData(int32_t x, int32_t y, int32_t w, int32_t h, $shorts* outData) override;
	virtual void putShortData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $shorts* inData) override;
	virtual void putShortData(int32_t x, int32_t y, int32_t w, int32_t h, $shorts* inData) override;
	virtual void setDataElements(int32_t x, int32_t y, Object$* obj) override;
	virtual void setDataElements(int32_t x, int32_t y, ::java::awt::image::Raster* inRaster) override;
	void setDataElements(int32_t dstX, int32_t dstY, int32_t width, int32_t height, ::java::awt::image::Raster* inRaster);
	virtual void setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) override;
	virtual $String* toString() override;
	int32_t maxX = 0;
	int32_t maxY = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ShortInterleavedRaster_h_