#ifndef _sun_awt_image_ByteInterleavedRaster_h_
#define _sun_awt_image_ByteInterleavedRaster_h_
//$ class sun.awt.image.ByteInterleavedRaster
//$ extends sun.awt.image.ByteComponentRaster

#include <java/lang/Array.h>
#include <sun/awt/image/ByteComponentRaster.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ComponentSampleModel;
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

class ByteInterleavedRaster : public ::sun::awt::image::ByteComponentRaster {
	$class(ByteInterleavedRaster, $NO_CLASS_INIT, ::sun::awt::image::ByteComponentRaster)
public:
	ByteInterleavedRaster();
	using ::sun::awt::image::ByteComponentRaster::createCompatibleWritableRaster;
	using ::sun::awt::image::ByteComponentRaster::getPixels;
	using ::sun::awt::image::ByteComponentRaster::getSamples;
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBufferByte* dataBuffer, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBufferByte* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* origin, ::sun::awt::image::ByteInterleavedRaster* parent);
	virtual ::java::awt::image::Raster* createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster() override;
	virtual ::java::awt::image::WritableRaster* createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) override;
	virtual $bytes* getByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* outData) override;
	virtual $bytes* getByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* outData) override;
	virtual $Object* getDataElements(int32_t x, int32_t y, Object$* obj) override;
	virtual $Object* getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) override;
	virtual int32_t getDataOffset(int32_t band) override;
	virtual $ints* getDataOffsets() override;
	virtual $bytes* getDataStorage() override;
	virtual int32_t getPixelStride() override;
	virtual $ints* getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray) override;
	virtual int32_t getSample(int32_t x, int32_t y, int32_t b) override;
	virtual $ints* getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray) override;
	virtual int32_t getScanlineStride() override;
	bool isInterleaved(::java::awt::image::ComponentSampleModel* sm);
	virtual void putByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* inData) override;
	virtual void putByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* inData) override;
	virtual void setDataElements(int32_t x, int32_t y, Object$* obj) override;
	virtual void setDataElements(int32_t x, int32_t y, ::java::awt::image::Raster* inRaster) override;
	void setDataElements(int32_t dstX, int32_t dstY, int32_t srcX, int32_t srcY, int32_t width, int32_t height, ::java::awt::image::Raster* inRaster);
	virtual void setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) override;
	using ::sun::awt::image::ByteComponentRaster::setPixels;
	virtual void setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray) override;
	using ::sun::awt::image::ByteComponentRaster::setRect;
	virtual void setRect(int32_t dx, int32_t dy, ::java::awt::image::Raster* srcRaster) override;
	using ::sun::awt::image::ByteComponentRaster::setSample;
	virtual void setSample(int32_t x, int32_t y, int32_t b, int32_t s) override;
	using ::sun::awt::image::ByteComponentRaster::setSamples;
	virtual void setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray) override;
	virtual $String* toString() override;
	bool inOrder = false;
	int32_t dbOffset = 0;
	int32_t dbOffsetPacked = 0;
	bool packed = false;
	$ints* bitMasks = nullptr;
	$ints* bitOffsets = nullptr;
	int32_t maxX = 0;
	int32_t maxY = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ByteInterleavedRaster_h_