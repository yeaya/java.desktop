#ifndef _sun_java2d_marlin_TransformingPathConsumer2D$CurveBasicMonotonizer_h_
#define _sun_java2d_marlin_TransformingPathConsumer2D$CurveBasicMonotonizer_h_
//$ class sun.java2d.marlin.TransformingPathConsumer2D$CurveBasicMonotonizer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_N_CURVES")
#undef MAX_N_CURVES

namespace sun {
	namespace java2d {
		namespace marlin {
			class Curve;
			class RendererContext;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class TransformingPathConsumer2D$CurveBasicMonotonizer : public ::java::lang::Object {
	$class(TransformingPathConsumer2D$CurveBasicMonotonizer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TransformingPathConsumer2D$CurveBasicMonotonizer();
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx);
	::sun::java2d::marlin::TransformingPathConsumer2D$CurveBasicMonotonizer* curve(double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3);
	void init(double lineWidth);
	::sun::java2d::marlin::TransformingPathConsumer2D$CurveBasicMonotonizer* quad(double x0, double y0, double x1, double y1, double x2, double y2);
	static const int32_t MAX_N_CURVES = 11;
	double lw2 = 0.0;
	int32_t nbSplits = 0;
	$doubles* middle = nullptr;
	$doubles* subdivTs = nullptr;
	::sun::java2d::marlin::Curve* curve$ = nullptr;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("MAX_N_CURVES")

#endif // _sun_java2d_marlin_TransformingPathConsumer2D$CurveBasicMonotonizer_h_