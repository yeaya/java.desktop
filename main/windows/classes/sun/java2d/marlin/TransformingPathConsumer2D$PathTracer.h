#ifndef _sun_java2d_marlin_TransformingPathConsumer2D$PathTracer_h_
#define _sun_java2d_marlin_TransformingPathConsumer2D$PathTracer_h_
//$ class sun.java2d.marlin.TransformingPathConsumer2D$PathTracer
//$ extends sun.java2d.marlin.DPathConsumer2D

#include <sun/java2d/marlin/DPathConsumer2D.h>

namespace sun {
	namespace java2d {
		namespace marlin {

class TransformingPathConsumer2D$PathTracer : public ::sun::java2d::marlin::DPathConsumer2D {
	$class(TransformingPathConsumer2D$PathTracer, $NO_CLASS_INIT, ::sun::java2d::marlin::DPathConsumer2D)
public:
	TransformingPathConsumer2D$PathTracer();
	void init$($String* name);
	virtual void closePath() override;
	virtual void curveTo(double x1, double y1, double x2, double y2, double x3, double y3) override;
	virtual int64_t getNativeConsumer() override;
	::sun::java2d::marlin::TransformingPathConsumer2D$PathTracer* init(::sun::java2d::marlin::DPathConsumer2D* out);
	virtual void lineTo(double x1, double y1) override;
	void log($String* message);
	virtual void moveTo(double x0, double y0) override;
	virtual void pathDone() override;
	virtual void quadTo(double x1, double y1, double x2, double y2) override;
	$String* prefix = nullptr;
	::sun::java2d::marlin::DPathConsumer2D* out = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_TransformingPathConsumer2D$PathTracer_h_