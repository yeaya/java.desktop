#ifndef _sun_java2d_NullSurfaceData_h_
#define _sun_java2d_NullSurfaceData_h_
//$ class sun.java2d.NullSurfaceData
//$ extends sun.java2d.SurfaceData

#include <sun/java2d/SurfaceData.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class Raster;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class NullPipe;
		}
	}
}

namespace sun {
	namespace java2d {

class NullSurfaceData : public ::sun::java2d::SurfaceData {
	$class(NullSurfaceData, 0, ::sun::java2d::SurfaceData)
public:
	NullSurfaceData();
	void init$();
	virtual void checkCustomComposite() override;
	virtual bool copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual $Object* getDestination() override;
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	virtual void invalidate() override;
	using ::sun::java2d::SurfaceData::pixelFor;
	virtual int32_t pixelFor(int32_t rgb) override;
	virtual int32_t rgbFor(int32_t pixel) override;
	virtual bool useTightBBoxes() override;
	virtual void validatePipe(::sun::java2d::SunGraphics2D* sg2d) override;
	static ::sun::java2d::SurfaceData* theInstance;
	static ::sun::java2d::pipe::NullPipe* nullpipe;
};

	} // java2d
} // sun

#endif // _sun_java2d_NullSurfaceData_h_