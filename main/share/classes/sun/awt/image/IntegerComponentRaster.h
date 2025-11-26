#ifndef _sun_awt_image_IntegerComponentRaster_h_
#define _sun_awt_image_IntegerComponentRaster_h_
//$ class sun.awt.image.IntegerComponentRaster
//$ extends sun.awt.image.SunWritableRaster

#include <java/lang/Array.h>
#include <sun/awt/image/SunWritableRaster.h>

#pragma push_macro("TYPE_BYTE_BANDED_SAMPLES")
#undef TYPE_BYTE_BANDED_SAMPLES
#pragma push_macro("TYPE_BYTE_BINARY_SAMPLES")
#undef TYPE_BYTE_BINARY_SAMPLES
#pragma push_macro("TYPE_BYTE_PACKED_SAMPLES")
#undef TYPE_BYTE_PACKED_SAMPLES
#pragma push_macro("TYPE_BYTE_SAMPLES")
#undef TYPE_BYTE_SAMPLES
#pragma push_macro("TYPE_CUSTOM")
#undef TYPE_CUSTOM
#pragma push_macro("TYPE_INT_8BIT_SAMPLES")
#undef TYPE_INT_8BIT_SAMPLES
#pragma push_macro("TYPE_INT_BANDED_SAMPLES")
#undef TYPE_INT_BANDED_SAMPLES
#pragma push_macro("TYPE_INT_PACKED_SAMPLES")
#undef TYPE_INT_PACKED_SAMPLES
#pragma push_macro("TYPE_INT_SAMPLES")
#undef TYPE_INT_SAMPLES
#pragma push_macro("TYPE_USHORT_BANDED_SAMPLES")
#undef TYPE_USHORT_BANDED_SAMPLES
#pragma push_macro("TYPE_USHORT_PACKED_SAMPLES")
#undef TYPE_USHORT_PACKED_SAMPLES
#pragma push_macro("TYPE_USHORT_SAMPLES")
#undef TYPE_USHORT_SAMPLES

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class DataBufferInt;
			class Raster;
			class SampleModel;
			class WritableRaster;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class IntegerComponentRaster : public ::sun::awt::image::SunWritableRaster {
	$class(IntegerComponentRaster, 0, ::sun::awt::image::SunWritableRaster)
public:
	IntegerComponentRaster();
	using ::sun::awt::image::SunWritableRaster::createCompatibleWritableRaster;
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBufferInt* dataBuffer, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBufferInt* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* origin, ::sun::awt::image::IntegerComponentRaster* parent);
	virtual ::java::awt::image::Raster* createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster() override;
	virtual ::java::awt::image::WritableRaster* createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) override;
	virtual $Object* getDataElements(int32_t x, int32_t y, Object$* obj) override;
	virtual $Object* getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) override;
	virtual int32_t getDataOffset(int32_t band);
	virtual $ints* getDataOffsets();
	virtual $ints* getDataStorage();
	virtual int32_t getPixelStride();
	virtual int32_t getScanlineStride();
	static void initIDs();
	virtual void setDataElements(int32_t x, int32_t y, Object$* obj) override;
	virtual void setDataElements(int32_t x, int32_t y, ::java::awt::image::Raster* inRaster) override;
	void setDataElements(int32_t dstX, int32_t dstY, int32_t width, int32_t height, ::java::awt::image::Raster* inRaster);
	virtual void setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) override;
	virtual $String* toString() override;
	void verify();
	static const int32_t TYPE_CUSTOM = 0;
	static const int32_t TYPE_BYTE_SAMPLES = 1;
	static const int32_t TYPE_USHORT_SAMPLES = 2;
	static const int32_t TYPE_INT_SAMPLES = 3;
	static const int32_t TYPE_BYTE_BANDED_SAMPLES = 4;
	static const int32_t TYPE_USHORT_BANDED_SAMPLES = 5;
	static const int32_t TYPE_INT_BANDED_SAMPLES = 6;
	static const int32_t TYPE_BYTE_PACKED_SAMPLES = 7;
	static const int32_t TYPE_USHORT_PACKED_SAMPLES = 8;
	static const int32_t TYPE_INT_PACKED_SAMPLES = 9;
	static const int32_t TYPE_INT_8BIT_SAMPLES = 10;
	static const int32_t TYPE_BYTE_BINARY_SAMPLES = 11;
	int32_t bandOffset = 0;
	$ints* dataOffsets = nullptr;
	int32_t scanlineStride = 0;
	int32_t pixelStride = 0;
	$ints* data = nullptr;
	int32_t numDataElems = 0;
	int32_t type = 0;
	int32_t maxX = 0;
	int32_t maxY = 0;
};

		} // image
	} // awt
} // sun

#pragma pop_macro("TYPE_BYTE_BANDED_SAMPLES")
#pragma pop_macro("TYPE_BYTE_BINARY_SAMPLES")
#pragma pop_macro("TYPE_BYTE_PACKED_SAMPLES")
#pragma pop_macro("TYPE_BYTE_SAMPLES")
#pragma pop_macro("TYPE_CUSTOM")
#pragma pop_macro("TYPE_INT_8BIT_SAMPLES")
#pragma pop_macro("TYPE_INT_BANDED_SAMPLES")
#pragma pop_macro("TYPE_INT_PACKED_SAMPLES")
#pragma pop_macro("TYPE_INT_SAMPLES")
#pragma pop_macro("TYPE_USHORT_BANDED_SAMPLES")
#pragma pop_macro("TYPE_USHORT_PACKED_SAMPLES")
#pragma pop_macro("TYPE_USHORT_SAMPLES")

#endif // _sun_awt_image_IntegerComponentRaster_h_