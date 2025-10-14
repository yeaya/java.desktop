#ifndef _sun_java2d_marlin_TransformingPathConsumer2D$DeltaTransformFilter_h_
#define _sun_java2d_marlin_TransformingPathConsumer2D$DeltaTransformFilter_h_
//$ class sun.java2d.marlin.TransformingPathConsumer2D$DeltaTransformFilter
//$ extends sun.java2d.marlin.DPathConsumer2D

#include <sun/java2d/marlin/DPathConsumer2D.h>

namespace sun {
	namespace java2d {
		namespace marlin {

class TransformingPathConsumer2D$DeltaTransformFilter : public ::sun::java2d::marlin::DPathConsumer2D {
	$class(TransformingPathConsumer2D$DeltaTransformFilter, $NO_CLASS_INIT, ::sun::java2d::marlin::DPathConsumer2D)
public:
	TransformingPathConsumer2D$DeltaTransformFilter();
	void init$();
	virtual void closePath() override;
	virtual void curveTo(double x1, double y1, double x2, double y2, double x3, double y3) override;
	virtual int64_t getNativeConsumer() override;
	::sun::java2d::marlin::TransformingPathConsumer2D$DeltaTransformFilter* init(::sun::java2d::marlin::DPathConsumer2D* out, double mxx, double mxy, double myx, double myy);
	virtual void lineTo(double x1, double y1) override;
	virtual void moveTo(double x0, double y0) override;
	virtual void pathDone() override;
	virtual void quadTo(double x1, double y1, double x2, double y2) override;
	::sun::java2d::marlin::DPathConsumer2D* out = nullptr;
	double mxx = 0.0;
	double mxy = 0.0;
	double myx = 0.0;
	double myy = 0.0;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_TransformingPathConsumer2D$DeltaTransformFilter_h_