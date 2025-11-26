#ifndef _sun_java2d_marlin_RendererContext$PathConsumer2DAdapter_h_
#define _sun_java2d_marlin_RendererContext$PathConsumer2DAdapter_h_
//$ class sun.java2d.marlin.RendererContext$PathConsumer2DAdapter
//$ extends sun.java2d.marlin.DPathConsumer2D

#include <sun/java2d/marlin/DPathConsumer2D.h>

namespace sun {
	namespace awt {
		namespace geom {
			class PathConsumer2D;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class RendererContext$PathConsumer2DAdapter : public ::sun::java2d::marlin::DPathConsumer2D {
	$class(RendererContext$PathConsumer2DAdapter, $NO_CLASS_INIT, ::sun::java2d::marlin::DPathConsumer2D)
public:
	RendererContext$PathConsumer2DAdapter();
	void init$();
	virtual void closePath() override;
	virtual void curveTo(double x1, double y1, double x2, double y2, double x3, double y3) override;
	virtual int64_t getNativeConsumer() override;
	::sun::java2d::marlin::RendererContext$PathConsumer2DAdapter* init(::sun::awt::geom::PathConsumer2D* out);
	virtual void lineTo(double x1, double y1) override;
	virtual void moveTo(double x0, double y0) override;
	virtual void pathDone() override;
	virtual void quadTo(double x1, double y1, double x2, double y2) override;
	::sun::awt::geom::PathConsumer2D* out = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_RendererContext$PathConsumer2DAdapter_h_