#ifndef _sun_java2d_xr_XRSolidSrcPict_h_
#define _sun_java2d_xr_XRSolidSrcPict_h_
//$ class sun.java2d.xr.XRSolidSrcPict
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace xr {
			class XRBackend;
			class XRColor;
			class XRSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRSolidSrcPict : public ::java::lang::Object {
	$class(XRSolidSrcPict, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XRSolidSrcPict();
	void init$(::sun::java2d::xr::XRBackend* con, int32_t parentXid);
	virtual ::sun::java2d::xr::XRSurfaceData* prepareSrcPict(int32_t pixelVal);
	::sun::java2d::xr::XRBackend* con = nullptr;
	::sun::java2d::xr::XRSurfaceData* srcPict = nullptr;
	::sun::java2d::xr::XRColor* xrCol = nullptr;
	int32_t curPixVal = 0;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_XRSolidSrcPict_h_