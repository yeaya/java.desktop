#ifndef _sun_java2d_loops_MaskFill_h_
#define _sun_java2d_loops_MaskFill_h_
//$ class sun.java2d.loops.MaskFill
//$ extends sun.java2d.loops.GraphicsPrimitive

#include <java/lang/Array.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>

namespace java {
	namespace awt {
		class Composite;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class CompositeType;
			class RenderCache;
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class MaskFill : public ::sun::java2d::loops::GraphicsPrimitive {
	$class(MaskFill, 0, ::sun::java2d::loops::GraphicsPrimitive)
public:
	MaskFill();
	void init$($String* alternateSignature, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	void init$(int64_t pNativePrim, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void DrawAAPgram(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, ::java::awt::Composite* comp, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2);
	virtual void FillAAPgram(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, ::java::awt::Composite* comp, double x, double y, double dx1, double dy1, double dx2, double dy2);
	virtual void MaskFill$(::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* sData, ::java::awt::Composite* comp, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* mask, int32_t maskoff, int32_t maskscan);
	virtual bool canDoParallelograms();
	static ::sun::java2d::loops::MaskFill* getFromCache(::sun::java2d::loops::SurfaceType* src, ::sun::java2d::loops::CompositeType* comp, ::sun::java2d::loops::SurfaceType* dst);
	static ::sun::java2d::loops::MaskFill* locate(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	static ::sun::java2d::loops::MaskFill* locatePrim(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual ::sun::java2d::loops::GraphicsPrimitive* makePrimitive(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	static $String* methodSignature;
	static $String* fillPgramSignature;
	static $String* drawPgramSignature;
	static int32_t primTypeID;
	static ::sun::java2d::loops::RenderCache* fillcache;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_MaskFill_h_