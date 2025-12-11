#ifndef _sun_java2d_metal_MTLSurfaceData$MTLLayerSurfaceData_h_
#define _sun_java2d_metal_MTLSurfaceData$MTLLayerSurfaceData_h_
//$ class sun.java2d.metal.MTLSurfaceData$MTLLayerSurfaceData
//$ extends sun.java2d.metal.MTLSurfaceData

#include <sun/java2d/metal/MTLSurfaceData.h>

namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace metal {
			class MTLGraphicsConfig;
			class MTLLayer;
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

class MTLSurfaceData$MTLLayerSurfaceData : public ::sun::java2d::metal::MTLSurfaceData {
	$class(MTLSurfaceData$MTLLayerSurfaceData, $NO_CLASS_INIT, ::sun::java2d::metal::MTLSurfaceData)
public:
	MTLSurfaceData$MTLLayerSurfaceData();
	void init$(::sun::java2d::metal::MTLLayer* layer, ::sun::java2d::metal::MTLGraphicsConfig* gc, int32_t width, int32_t height);
	virtual ::sun::java2d::pipe::BufferedContext* getContext() override;
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	virtual int32_t getTransparency() override;
	virtual void invalidate() override;
	virtual bool isOnScreen() override;
	::sun::java2d::metal::MTLLayer* layer = nullptr;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLSurfaceData$MTLLayerSurfaceData_h_