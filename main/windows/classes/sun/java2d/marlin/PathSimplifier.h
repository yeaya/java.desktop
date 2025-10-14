#ifndef _sun_java2d_marlin_PathSimplifier_h_
#define _sun_java2d_marlin_PathSimplifier_h_
//$ class sun.java2d.marlin.PathSimplifier
//$ extends sun.java2d.marlin.DPathConsumer2D

#include <sun/java2d/marlin/DPathConsumer2D.h>

#pragma push_macro("PIX_THRESHOLD")
#undef PIX_THRESHOLD
#pragma push_macro("SQUARE_TOLERANCE")
#undef SQUARE_TOLERANCE

namespace sun {
	namespace java2d {
		namespace marlin {

class PathSimplifier : public ::sun::java2d::marlin::DPathConsumer2D {
	$class(PathSimplifier, 0, ::sun::java2d::marlin::DPathConsumer2D)
public:
	PathSimplifier();
	void init$();
	virtual void closePath() override;
	virtual void curveTo(double x1, double y1, double x2, double y2, double xe, double ye) override;
	virtual int64_t getNativeConsumer() override;
	::sun::java2d::marlin::PathSimplifier* init(::sun::java2d::marlin::DPathConsumer2D* delegate);
	virtual void lineTo(double xe, double ye) override;
	virtual void moveTo(double xe, double ye) override;
	virtual void pathDone() override;
	virtual void quadTo(double x1, double y1, double xe, double ye) override;
	static double PIX_THRESHOLD;
	static double SQUARE_TOLERANCE;
	::sun::java2d::marlin::DPathConsumer2D* delegate = nullptr;
	double cx = 0.0;
	double cy = 0.0;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("PIX_THRESHOLD")
#pragma pop_macro("SQUARE_TOLERANCE")

#endif // _sun_java2d_marlin_PathSimplifier_h_