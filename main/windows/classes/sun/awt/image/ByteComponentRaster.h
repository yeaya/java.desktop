#ifndef _sun_awt_image_ByteComponentRaster_h_
#define _sun_awt_image_ByteComponentRaster_h_
//$ class sun.awt.image.ByteComponentRaster
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
			class DataBufferByte;
			class Raster;
			class SampleModel;
			class WritableRaster;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ByteComponentRaster : public ::sun::awt::image::SunWritableRaster {
	$class(ByteComponentRaster, 0, ::sun::awt::image::SunWritableRaster)
public:
	ByteComponentRaster();
	using ::sun::awt::image::SunWritableRaster::createCompatibleWritableRaster;
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBufferByte* dataBuffer, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBufferByte* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* origin, ::sun::awt::image::ByteComponentRaster* parent);
	virtual ::java::awt::image::Raster* createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster() override;
	virtual ::java::awt::image::WritableRaster* createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) override;
	virtual $bytes* getByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* outData);
	virtual $bytes* getByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* outData);
	virtual $Object* getDataElements(int32_t x, int32_t y, Object$* obj) override;
	virtual $Object* getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) override;
	virtual int32_t getDataOffset(int32_t band);
	virtual $ints* getDataOffsets();
	virtual $bytes* getDataStorage();
	virtual int32_t getPixelStride();
	virtual int32_t getScanlineStride();
	static void initIDs();
	virtual void putByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* inData);
	virtual void putByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* inData);
	virtual void setDataElements(int32_t x, int32_t y, Object$* obj) override;
	virtual void setDataElements(int32_t x, int32_t y, ::java::awt::image::Raster* inRaster) override;
	void setDataElements(int32_t dstX, int32_t dstY, int32_t width, int32_t height, ::java::awt::image::Raster* inRaster);
	virtual void setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) override;
	virtual $String* toString() override;
	void verify();
	int32_t bandOffset = 0;
	$ints* dataOffsets = nullptr;
	int32_t scanlineStride = 0;
	int32_t pixelStride = 0;
	$bytes* data = nullptr;
	int32_t type = 0;
	int32_t maxX = 0;
	int32_t maxY = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ByteComponentRaster_h_