#ifndef _sun_java2d_xr_MaskTileManager_h_
#define _sun_java2d_xr_MaskTileManager_h_
//$ class sun.java2d.xr.MaskTileManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MASK_SIZE")
#undef MASK_SIZE

namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace sun {
	namespace java2d {
		namespace xr {
			class DirtyRegion;
			class GrowableRectArray;
			class MaskTile;
			class XRBackend;
			class XRColor;
			class XRCompositeManager;
			class XRSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace xr {

class MaskTileManager : public ::java::lang::Object {
	$class(MaskTileManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MaskTileManager();
	void init$(::sun::java2d::xr::XRCompositeManager* xrMgr, int32_t parentXid);
	virtual void allocTiles(::sun::java2d::xr::DirtyRegion* maskArea);
	virtual void clearUploadMask(int32_t mask, int32_t w, int32_t h);
	virtual void compositeSingleTile(::sun::java2d::xr::XRSurfaceData* dst, ::sun::java2d::xr::MaskTile* tile, ::sun::java2d::xr::DirtyRegion* dirtyArea, bool maskRequired, int32_t tileStartX, int32_t tileStartY, ::sun::java2d::xr::XRColor* maskColor);
	virtual void fillMask(::sun::java2d::xr::XRSurfaceData* dst);
	virtual ::sun::java2d::xr::MaskTile* getMainTile();
	void limitRectCoords(::sun::java2d::xr::GrowableRectArray* rects, int32_t index);
	virtual void tileRects();
	virtual int32_t uploadMask(int32_t w, int32_t h, int32_t maskscan, int32_t maskoff, $bytes* mask);
	static const int32_t MASK_SIZE = 256;
	::sun::java2d::xr::MaskTile* mainTile = nullptr;
	::java::util::ArrayList* tileList = nullptr;
	int32_t allocatedTiles = 0;
	int32_t xTiles = 0;
	int32_t yTiles = 0;
	::sun::java2d::xr::XRCompositeManager* xrMgr = nullptr;
	::sun::java2d::xr::XRBackend* con = nullptr;
	int32_t maskPixmap = 0;
	int32_t maskPicture = 0;
	int64_t maskGC = 0;
};

		} // xr
	} // java2d
} // sun

#pragma pop_macro("MASK_SIZE")

#endif // _sun_java2d_xr_MaskTileManager_h_