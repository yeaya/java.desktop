#ifndef _sun_java2d_windows_GDIRenderer$Tracer_h_
#define _sun_java2d_windows_GDIRenderer$Tracer_h_
//$ class sun.java2d.windows.GDIRenderer$Tracer
//$ extends sun.java2d.windows.GDIRenderer

#include <java/lang/Array.h>
#include <sun/java2d/windows/GDIRenderer.h>

namespace java {
	namespace awt {
		class Composite;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Path2D$Float;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace windows {
			class GDIWindowSurfaceData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace windows {

class GDIRenderer$Tracer : public ::sun::java2d::windows::GDIRenderer {
	$class(GDIRenderer$Tracer, $NO_CLASS_INIT, ::sun::java2d::windows::GDIRenderer)
public:
	GDIRenderer$Tracer();
	using ::sun::java2d::windows::GDIRenderer::doShape;
	void init$();
	virtual void devCopyArea(::sun::java2d::windows::GDIWindowSurfaceData* sData, int32_t srcx, int32_t srcy, int32_t dx, int32_t dy, int32_t w, int32_t h) override;
	virtual void doDrawArc(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent) override;
	virtual void doDrawLine(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void doDrawOval(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void doDrawPoly(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints, bool isclosed) override;
	virtual void doDrawRect(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void doDrawRoundRect(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) override;
	virtual void doFillArc(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t angleStart, int32_t angleExtent) override;
	virtual void doFillOval(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void doFillPoly(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t transx, int32_t transy, $ints* xpoints, $ints* ypoints, int32_t npoints) override;
	virtual void doFillRect(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void doFillRoundRect(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) override;
	virtual void doShape(::sun::java2d::windows::GDIWindowSurfaceData* sData, ::sun::java2d::pipe::Region* clip, ::java::awt::Composite* comp, int32_t color, int32_t transX, int32_t transY, ::java::awt::geom::Path2D$Float* p2df, bool isfill) override;
};

		} // windows
	} // java2d
} // sun

#endif // _sun_java2d_windows_GDIRenderer$Tracer_h_