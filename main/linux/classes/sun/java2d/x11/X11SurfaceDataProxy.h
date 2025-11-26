#ifndef _sun_java2d_x11_X11SurfaceDataProxy_h_
#define _sun_java2d_x11_X11SurfaceDataProxy_h_
//$ class sun.java2d.x11.X11SurfaceDataProxy
//$ extends sun.java2d.SurfaceDataProxy
//$ implements java.awt.Transparency

#include <java/awt/Transparency.h>
#include <sun/java2d/SurfaceDataProxy.h>

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
		namespace x11 {

class X11SurfaceDataProxy : public ::sun::java2d::SurfaceDataProxy, public ::java::awt::Transparency {
	$class(X11SurfaceDataProxy, $NO_CLASS_INIT, ::sun::java2d::SurfaceDataProxy, ::java::awt::Transparency)
public:
	X11SurfaceDataProxy();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::X11GraphicsConfig* x11gc);
	static ::sun::java2d::SurfaceDataProxy* createProxy(::sun::java2d::SurfaceData* srcData, ::sun::awt::X11GraphicsConfig* dstConfig);
	virtual $String* toString() override;
	virtual ::sun::java2d::SurfaceData* validateSurfaceData(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* cachedData, int32_t w, int32_t h) override;
	::sun::awt::X11GraphicsConfig* x11gc = nullptr;
};

		} // x11
	} // java2d
} // sun

#endif // _sun_java2d_x11_X11SurfaceDataProxy_h_