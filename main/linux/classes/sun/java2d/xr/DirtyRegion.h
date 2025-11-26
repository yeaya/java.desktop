#ifndef _sun_java2d_xr_DirtyRegion_h_
#define _sun_java2d_xr_DirtyRegion_h_
//$ class sun.java2d.xr.DirtyRegion
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace sun {
	namespace java2d {
		namespace xr {

class DirtyRegion : public ::java::lang::Cloneable {
	$class(DirtyRegion, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	DirtyRegion();
	void init$();
	virtual void clear();
	virtual ::sun::java2d::xr::DirtyRegion* cloneRegion();
	static ::sun::java2d::xr::DirtyRegion* combineRegion(::sun::java2d::xr::DirtyRegion* region1, ::sun::java2d::xr::DirtyRegion* region2);
	virtual int32_t getHeight();
	virtual int32_t getWidth();
	virtual void growDirtyRegion(int32_t x, int32_t y, int32_t x2, int32_t y2);
	virtual void growDirtyRegionTileLimit(int32_t x, int32_t y, int32_t x2, int32_t y2);
	virtual void setDirtyLineRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	virtual $String* toString() override;
	virtual void translate(int32_t x, int32_t y);
	int32_t x = 0;
	int32_t y = 0;
	int32_t x2 = 0;
	int32_t y2 = 0;
};

		} // xr
	} // java2d
} // sun

#endif // _sun_java2d_xr_DirtyRegion_h_