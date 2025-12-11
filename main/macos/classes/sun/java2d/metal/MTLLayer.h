#ifndef _sun_java2d_metal_MTLLayer_h_
#define _sun_java2d_metal_MTLLayer_h_
//$ class sun.java2d.metal.MTLLayer
//$ extends sun.lwawt.macosx.CFLayer

#include <sun/lwawt/macosx/CFLayer.h>

namespace java {
	namespace awt {
		class Insets;
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
			class MTLSurfaceData;
		}
	}
}
namespace sun {
	namespace lwawt {
		class LWWindowPeer;
	}
}

namespace sun {
	namespace java2d {
		namespace metal {

class MTLLayer : public ::sun::lwawt::macosx::CFLayer {
	$class(MTLLayer, $NO_CLASS_INIT, ::sun::lwawt::macosx::CFLayer)
public:
	MTLLayer();
	void init$(::sun::lwawt::LWWindowPeer* peer);
	static void blitTexture(int64_t layerPtr);
	virtual void dispose() override;
	void drawInMTLContext();
	static void lambda$drawInMTLContext$3(int64_t ptr);
	static void lambda$replaceSurfaceData$0(::java::awt::Insets* insets, int64_t ptr);
	void lambda$setScale$2(int64_t ptr);
	static void lambda$validate$1(::sun::java2d::metal::MTLSurfaceData* mtlsd, int64_t ptr);
	int64_t nativeCreateLayer();
	static void nativeSetInsets(int64_t layerPtr, int32_t top, int32_t left);
	static void nativeSetScale(int64_t layerPtr, double scale);
	virtual ::sun::java2d::SurfaceData* replaceSurfaceData() override;
	void setScale(int32_t _scale);
	static void validate(int64_t layerPtr, ::sun::java2d::metal::MTLSurfaceData* mtlsd);
	virtual void validate(::sun::java2d::metal::MTLSurfaceData* mtlsd);
	int32_t scale = 0;
};

		} // metal
	} // java2d
} // sun

#endif // _sun_java2d_metal_MTLLayer_h_