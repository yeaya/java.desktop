#ifndef _sun_java2d_marlin_TransformingPathConsumer2D$ClosedPathDetector_h_
#define _sun_java2d_marlin_TransformingPathConsumer2D$ClosedPathDetector_h_
//$ class sun.java2d.marlin.TransformingPathConsumer2D$ClosedPathDetector
//$ extends sun.java2d.marlin.DPathConsumer2D

#include <sun/java2d/marlin/DPathConsumer2D.h>

namespace sun {
	namespace java2d {
		namespace marlin {
			class Helpers$PolyStack;
			class RendererContext;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class TransformingPathConsumer2D$ClosedPathDetector : public ::sun::java2d::marlin::DPathConsumer2D {
	$class(TransformingPathConsumer2D$ClosedPathDetector, $NO_CLASS_INIT, ::sun::java2d::marlin::DPathConsumer2D)
public:
	TransformingPathConsumer2D$ClosedPathDetector();
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx);
	virtual void closePath() override;
	virtual void curveTo(double x3, double y3, double x2, double y2, double x1, double y1) override;
	void dispose();
	void finish(bool closed);
	virtual int64_t getNativeConsumer() override;
	::sun::java2d::marlin::TransformingPathConsumer2D$ClosedPathDetector* init(::sun::java2d::marlin::DPathConsumer2D* out);
	virtual void lineTo(double x1, double y1) override;
	virtual void moveTo(double x0, double y0) override;
	virtual void pathDone() override;
	virtual void quadTo(double x2, double y2, double x1, double y1) override;
	::sun::java2d::marlin::RendererContext* rdrCtx = nullptr;
	::sun::java2d::marlin::Helpers$PolyStack* stack = nullptr;
	::sun::java2d::marlin::DPathConsumer2D* out = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_TransformingPathConsumer2D$ClosedPathDetector_h_