#ifndef _sun_java2d_x11_X11SurfaceDataProxy$Opaque_h_
#define _sun_java2d_x11_X11SurfaceDataProxy$Opaque_h_
//$ class sun.java2d.x11.X11SurfaceDataProxy$Opaque
//$ extends sun.java2d.x11.X11SurfaceDataProxy

#include <sun/java2d/x11/X11SurfaceDataProxy.h>

namespace java {
	namespace awt {
		class Color;
	}
}
namespace sun {
	namespace awt {
		class X11GraphicsConfig;
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class CompositeType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace x11 {

class X11SurfaceDataProxy$Opaque : public ::sun::java2d::x11::X11SurfaceDataProxy {
	$class(X11SurfaceDataProxy$Opaque, $NO_CLASS_INIT, ::sun::java2d::x11::X11SurfaceDataProxy)
public:
	X11SurfaceDataProxy$Opaque();
	void init$(::sun::awt::X11GraphicsConfig* x11gc);
	virtual int32_t getTransparency() override;
	virtual bool isSupportedOperation(::sun::java2d::SurfaceData* srcData, int32_t txtype, ::sun::java2d::loops::CompositeType* comp, ::java::awt::Color* bgColor) override;
};

		} // x11
	} // java2d
} // sun

#endif // _sun_java2d_x11_X11SurfaceDataProxy$Opaque_h_