#ifndef _sun_java2d_xr_XRRenderer$XRDrawHandler_h_
#define _sun_java2d_xr_XRRenderer$XRDrawHandler_h_
//$ class sun.java2d.xr.XRRenderer$XRDrawHandler
//$ extends sun.java2d.loops.ProcessPath$DrawHandler

#include <sun/java2d/loops/ProcessPath$DrawHandler.h>

namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace xr {
			class DirtyRegion;
			class XRRenderer;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRRenderer$XRDrawHandler : public ::sun::java2d::loops::ProcessPath$DrawHandler {
	$class(XRRenderer$XRDrawHandler, $NO_CLASS_INIT, ::sun::java2d::loops::ProcessPath$DrawHandler)
public:
	XRRenderer$XRDrawHandler();
	void init$(::sun::java2d::xr::XRRenderer* this$0);
	virtual void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawPixel(int32_t x, int32_t y) override;
	virtual void drawScanline(int32_t x1, int32_t x2, int32_t y) override;
	virtual void validate(::sun::java2d::SunGraphics2D* sg2d);
	::sun::java2d::xr::XRRenderer* this$0 = nullptr;
	::sun::java2d::xr::DirtyRegion* region = nullptr;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRRenderer$XRDrawHandler_h_