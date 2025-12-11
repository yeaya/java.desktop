#ifndef _sun_lwawt_macosx_CFLayer_h_
#define _sun_lwawt_macosx_CFLayer_h_
//$ class sun.lwawt.macosx.CFLayer
//$ extends sun.lwawt.macosx.CFRetainedResource

#include <sun/lwawt/macosx/CFRetainedResource.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Rectangle;
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace lwawt {
		class LWWindowPeer;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CFLayer : public ::sun::lwawt::macosx::CFRetainedResource {
	$class(CFLayer, $NO_CLASS_INIT, ::sun::lwawt::macosx::CFRetainedResource)
public:
	CFLayer();
	void init$(int64_t ptr, bool disposeOnAppKitThread);
	virtual void dispose() override;
	virtual ::java::awt::Rectangle* getBounds();
	virtual $Object* getDestination();
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration();
	virtual int64_t getPointer();
	virtual ::sun::java2d::SurfaceData* getSurfaceData();
	virtual int32_t getTransparency();
	virtual bool isOpaque();
	virtual ::sun::java2d::SurfaceData* replaceSurfaceData() {return nullptr;}
	::sun::java2d::SurfaceData* surfaceData = nullptr;
	::sun::lwawt::LWWindowPeer* peer = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CFLayer_h_