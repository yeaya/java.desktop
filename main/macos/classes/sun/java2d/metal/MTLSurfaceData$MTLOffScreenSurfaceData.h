#ifndef _sun_java2d_metal_MTLSurfaceData$MTLOffScreenSurfaceData_h_
#define _sun_java2d_metal_MTLSurfaceData$MTLOffScreenSurfaceData_h_
//$ class sun.java2d.metal.MTLSurfaceData$MTLOffScreenSurfaceData
//$ extends sun.java2d.metal.MTLSurfaceData

#include <sun/java2d/metal/MTLSurfaceData.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace metal {
			class MTLGraphicsConfig;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class BufferedContext;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace metal {

class MTLSurfaceData$MTLOffScreenSurfaceData : public ::sun::java2d::metal::MTLSurfaceData {
	$class(MTLSurfaceData$MTLOffScreenSurfaceData, $NO_CLASS_INIT, ::sun::java2d::metal::MTLSurfaceData)
public:
	MTLSurfaceData$MTLOffScreenSurfaceData();
	void init$(::sun::java2d::metal::MTLGraphicsConfig* gc, int32_t width, int32_t height, ::java::awt::Image* image, ::java::awt::image::ColorModel* cm, int32_t type);
	virtual ::sun::java2d::pipe::BufferedContext* getContext() override;
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	::java::awt::Image* offscreenImage = nullptr;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLSurfaceData$MTLOffScreenSurfaceData_h_