#ifndef _sun_java2d_xr_XRMaskImage_h_
#define _sun_java2d_xr_XRMaskImage_h_
//$ class sun.java2d.xr.XRMaskImage
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BLIT_MASK_SIZE")
#undef BLIT_MASK_SIZE
#pragma push_macro("MASK_SCALE_FACTOR")
#undef MASK_SCALE_FACTOR

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace xr {
			class XRBackend;
			class XRCompositeManager;
			class XRSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class XRMaskImage : public ::java::lang::Object {
	$class(XRMaskImage, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XRMaskImage();
	void init$(::sun::java2d::xr::XRCompositeManager* xrMgr, int32_t parentDrawable);
	void ensureBlitMaskSize(int32_t minSizeX, int32_t minSizeY);
	void initBlitMask(int32_t parentDrawable, int32_t width, int32_t height);
	virtual int32_t prepareBlitMask(::sun::java2d::xr::XRSurfaceData* dst, ::java::awt::geom::AffineTransform* maskTX, int32_t width, int32_t height);
	static const int32_t MASK_SCALE_FACTOR = 8;
	static const int32_t BLIT_MASK_SIZE = 8;
	::java::awt::Dimension* blitMaskDimensions = nullptr;
	int32_t blitMaskPixmap = 0;
	int32_t blitMaskPicture = 0;
	int32_t lastMaskWidth = 0;
	int32_t lastMaskHeight = 0;
	int32_t lastEA = 0;
	::java::awt::geom::AffineTransform* lastMaskTransform = nullptr;
	::sun::java2d::xr::XRCompositeManager* xrMgr = nullptr;
	::sun::java2d::xr::XRBackend* con = nullptr;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("BLIT_MASK_SIZE")
#pragma pop_macro("MASK_SCALE_FACTOR")

#endif // _sun_java2d_xr_XRMaskImage_h_