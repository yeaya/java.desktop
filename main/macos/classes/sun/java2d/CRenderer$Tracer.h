#ifndef _sun_java2d_CRenderer$Tracer_h_
#define _sun_java2d_CRenderer$Tracer_h_
//$ class sun.java2d.CRenderer$Tracer
//$ extends sun.java2d.CRenderer

#include <java/lang/Array.h>
#include <sun/java2d/CRenderer.h>

namespace java {
	namespace nio {
		class FloatBuffer;
		class IntBuffer;
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}

namespace sun {
	namespace java2d {

class CRenderer$Tracer : public ::sun::java2d::CRenderer {
	$class(CRenderer$Tracer, $NO_CLASS_INIT, ::sun::java2d::CRenderer)
public:
	CRenderer$Tracer();
	void init$();
	virtual void doArc(::sun::java2d::SurfaceData* sData, float x, float y, float width, float height, float angleStart, float angleExtent, int32_t type, bool isfill) override;
	virtual void doImage(::sun::java2d::SurfaceData* sData, ::sun::java2d::SurfaceData* img, bool fliph, bool flipv, int32_t w, int32_t h, int32_t sx, int32_t sy, int32_t sw, int32_t sh, int32_t dx, int32_t dy, int32_t dw, int32_t dh) override;
	virtual void doLine(::sun::java2d::SurfaceData* sData, float x1, float y1, float x2, float y2) override;
	virtual void doOval(::sun::java2d::SurfaceData* sData, float x, float y, float width, float height, bool isfill) override;
	virtual void doPoly(::sun::java2d::SurfaceData* sData, $ints* xpoints, $ints* ypoints, int32_t npoints, bool ispolygon, bool isfill) override;
	virtual void doRect(::sun::java2d::SurfaceData* sData, float x, float y, float width, float height, bool isfill) override;
	virtual void doRoundRect(::sun::java2d::SurfaceData* sData, float x, float y, float width, float height, float arcW, float arcH, bool isfill) override;
	virtual void doShape(::sun::java2d::SurfaceData* sData, int32_t length, ::java::nio::FloatBuffer* coordinates, ::java::nio::IntBuffer* types, int32_t windingRule, bool isfill, bool shouldApplyOffset) override;
};

	} // java2d
} // sun

#endif // _sun_java2d_CRenderer$Tracer_h_