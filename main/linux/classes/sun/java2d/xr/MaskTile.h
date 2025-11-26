#ifndef _sun_java2d_xr_MaskTile_h_
#define _sun_java2d_xr_MaskTile_h_
//$ class sun.java2d.xr.MaskTile
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace xr {
			class DirtyRegion;
			class GrowableRectArray;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class MaskTile : public ::java::lang::Object {
	$class(MaskTile, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MaskTile();
	void init$();
	virtual void calculateDirtyAreas();
	virtual ::sun::java2d::xr::DirtyRegion* getDirtyArea();
	virtual ::sun::java2d::xr::GrowableRectArray* getRects();
	virtual void reset();
	virtual void translate(int32_t x, int32_t y);
	::sun::java2d::xr::GrowableRectArray* rects = nullptr;
	::sun::java2d::xr::DirtyRegion* dirtyArea = nullptr;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_MaskTile_h_