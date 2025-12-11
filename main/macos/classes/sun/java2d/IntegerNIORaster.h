#ifndef _sun_java2d_IntegerNIORaster_h_
#define _sun_java2d_IntegerNIORaster_h_
//$ class sun.java2d.IntegerNIORaster
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
			class SampleModel;
			class WritableRaster;
		}
	}
}
namespace java {
	namespace nio {
		class IntBuffer;
	}
}
namespace sun {
	namespace java2d {
		class DataBufferNIOInt;
	}
}

namespace sun {
	namespace java2d {

class IntegerNIORaster : public ::sun::awt::image::SunWritableRaster {
	$class(IntegerNIORaster, $NO_CLASS_INIT, ::sun::awt::image::SunWritableRaster)
public:
	IntegerNIORaster();
	void init$(::java::awt::image::SampleModel* sampleModel, ::sun::java2d::DataBufferNIOInt* dataBuffer, ::java::awt::Point* origin);
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster() override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(::java::awt::Rectangle* rect) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	static ::java::awt::image::WritableRaster* createNIORaster(int32_t w, int32_t h, $ints* bandMasks, ::java::awt::Point* location);
	virtual ::java::nio::IntBuffer* getBuffer();
	virtual $String* toString() override;
	::java::nio::IntBuffer* data = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_IntegerNIORaster_h_