#ifndef _sun_java2d_marlin_TransformingPathConsumer2D$Path2DWrapper_h_
#define _sun_java2d_marlin_TransformingPathConsumer2D$Path2DWrapper_h_
//$ class sun.java2d.marlin.TransformingPathConsumer2D$Path2DWrapper
//$ extends sun.java2d.marlin.DPathConsumer2D

#include <sun/java2d/marlin/DPathConsumer2D.h>

namespace java {
	namespace awt {
		namespace geom {
			class Path2D$Double;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class TransformingPathConsumer2D$Path2DWrapper : public ::sun::java2d::marlin::DPathConsumer2D {
	$class(TransformingPathConsumer2D$Path2DWrapper, $NO_CLASS_INIT, ::sun::java2d::marlin::DPathConsumer2D)
public:
	TransformingPathConsumer2D$Path2DWrapper();
	void init$();
	virtual void closePath() override;
	virtual void curveTo(double x1, double y1, double x2, double y2, double x3, double y3) override;
	virtual int64_t getNativeConsumer() override;
	::sun::java2d::marlin::TransformingPathConsumer2D$Path2DWrapper* init(::java::awt::geom::Path2D$Double* p2d);
	virtual void lineTo(double x1, double y1) override;
	virtual void moveTo(double x0, double y0) override;
	virtual void pathDone() override;
	virtual void quadTo(double x1, double y1, double x2, double y2) override;
	::java::awt::geom::Path2D$Double* p2d = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_TransformingPathConsumer2D$Path2DWrapper_h_