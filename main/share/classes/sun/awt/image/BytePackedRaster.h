#ifndef _sun_awt_image_BytePackedRaster_h_
#define _sun_awt_image_BytePackedRaster_h_
//$ class sun.awt.image.BytePackedRaster
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

class BytePackedRaster : public ::sun::awt::image::SunWritableRaster {
	$class(BytePackedRaster, 0, ::sun::awt::image::SunWritableRaster)
public:
	BytePackedRaster();
	using ::sun::awt::image::SunWritableRaster::createCompatibleWritableRaster;
	using ::sun::awt::image::SunWritableRaster::getPixels;
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBufferByte* dataBuffer, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBufferByte* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* origin, ::sun::awt::image::BytePackedRaster* parent);
	virtual ::java::awt::image::Raster* createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster() override;
	virtual ::java::awt::image::WritableRaster* createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) override;
	virtual $bytes* getByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* outData);
	virtual $bytes* getByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* outData);
	virtual int32_t getDataBitOffset();
	virtual $Object* getDataElements(int32_t x, int32_t y, Object$* obj) override;
	virtual $Object* getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* outData) override;
	virtual $bytes* getDataStorage();
	virtual int32_t getPixelBitStride();
	virtual $Object* getPixelData(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj);
	virtual $ints* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray) override;
	virtual int32_t getScanlineStride();
	static void initIDs();
	virtual void putByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* inData);
	virtual void putByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* inData);
	virtual void setDataElements(int32_t x, int32_t y, Object$* obj) override;
	virtual void setDataElements(int32_t x, int32_t y, ::java::awt::image::Raster* inRaster) override;
	void setDataElements(int32_t dstX, int32_t dstY, int32_t srcX, int32_t srcY, int32_t width, int32_t height, ::sun::awt::image::BytePackedRaster* inRaster);
	virtual void setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) override;
	using ::sun::awt::image::SunWritableRaster::setPixels;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray) override;
	using ::sun::awt::image::SunWritableRaster::setRect;
	virtual void setRect(int32_t dx, int32_t dy, ::java::awt::image::Raster* srcRaster) override;
	virtual $String* toString() override;
	void verify(bool strictCheck);
	int32_t dataBitOffset = 0;
	int32_t scanlineStride = 0;
	int32_t pixelBitStride = 0;
	int32_t bitMask = 0;
	$bytes* data = nullptr;
	int32_t shiftOffset = 0;
	int32_t type = 0;
	int32_t maxX = 0;
	int32_t maxY = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_BytePackedRaster_h_