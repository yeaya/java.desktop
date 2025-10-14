#ifndef _sun_awt_image_ShortBandedRaster_h_
#define _sun_awt_image_ShortBandedRaster_h_
//$ class sun.awt.image.ShortBandedRaster
//$ extends sun.awt.image.SunWritableRaster

#include <java/lang/Array.h>
#include <sun/awt/image/SunWritableRaster.h>

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

class ShortBandedRaster : public ::sun::awt::image::SunWritableRaster {
	$class(ShortBandedRaster, $NO_CLASS_INIT, ::sun::awt::image::SunWritableRaster)
public:
	ShortBandedRaster();
	using ::sun::awt::image::SunWritableRaster::createCompatibleWritableRaster;
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBufferUShort* dataBuffer, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBufferUShort* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* origin, ::sun::awt::image::ShortBandedRaster* parent);
	virtual ::java::awt::image::Raster* createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster() override;
	virtual ::java::awt::image::WritableRaster* createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) override;
	virtual $Object* getDataElements(int32_t x, int32_t y, Object$* obj) override;
	virtual $Object* getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) override;
	virtual int32_t getDataOffset(int32_t band);
	virtual $ints* getDataOffsets();
	virtual $Array<int16_t, 2>* getDataStorage();
	virtual $shorts* getDataStorage(int32_t band);
	virtual int32_t getPixelStride();
	virtual int32_t getScanlineStride();
	virtual $shorts* getShortData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $shorts* outData);
	virtual $shorts* getShortData(int32_t x, int32_t y, int32_t w, int32_t h, $shorts* outData);
	virtual void putShortData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $shorts* inData);
	virtual void putShortData(int32_t x, int32_t y, int32_t w, int32_t h, $shorts* inData);
	virtual void setDataElements(int32_t x, int32_t y, Object$* obj) override;
	virtual void setDataElements(int32_t x, int32_t y, ::java::awt::image::Raster* inRaster) override;
	void setDataElements(int32_t dstX, int32_t dstY, int32_t width, int32_t height, ::java::awt::image::Raster* inRaster);
	virtual void setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) override;
	virtual $String* toString() override;
	void verify();
	$ints* dataOffsets = nullptr;
	int32_t scanlineStride = 0;
	$Array<int16_t, 2>* data = nullptr;
	int32_t maxX = 0;
	int32_t maxY = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ShortBandedRaster_h_