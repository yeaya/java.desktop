#ifndef _sun_java2d_marlin_TransformingPathConsumer2D$CurveClipSplitter_h_
#define _sun_java2d_marlin_TransformingPathConsumer2D$CurveClipSplitter_h_
//$ class sun.java2d.marlin.TransformingPathConsumer2D$CurveClipSplitter
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DO_CHECK_LENGTH")
#undef DO_CHECK_LENGTH
#pragma push_macro("LEN_TH")
#undef LEN_TH
#pragma push_macro("MAX_N_CURVES")
#undef MAX_N_CURVES
#pragma push_macro("TRACE")
#undef TRACE

namespace sun {
	namespace java2d {
		namespace marlin {
			class Curve;
			class DPathConsumer2D;
			class RendererContext;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class TransformingPathConsumer2D$CurveClipSplitter : public ::java::lang::Object {
	$class(TransformingPathConsumer2D$CurveClipSplitter, 0, ::java::lang::Object)
public:
	TransformingPathConsumer2D$CurveClipSplitter();
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx);
	static void emitCurrent(int32_t type, $doubles* pts, int32_t off, ::sun::java2d::marlin::DPathConsumer2D* out);
	void init();
	void initPaddedClip();
	bool splitCurve(double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3, int32_t outCodeOR, ::sun::java2d::marlin::DPathConsumer2D* out);
	bool splitLine(double x0, double y0, double x1, double y1, int32_t outCodeOR, ::sun::java2d::marlin::DPathConsumer2D* out);
	bool splitQuad(double x0, double y0, double x1, double y1, double x2, double y2, int32_t outCodeOR, ::sun::java2d::marlin::DPathConsumer2D* out);
	bool subdivideAtIntersections(int32_t type, int32_t outCodeOR, ::sun::java2d::marlin::DPathConsumer2D* out);
	static double LEN_TH;
	static bool DO_CHECK_LENGTH;
	static const bool TRACE = false;
	static const int32_t MAX_N_CURVES = 12; // 3 * 4
	::sun::java2d::marlin::RendererContext* rdrCtx = nullptr;
	double minLength = 0.0;
	$doubles* clipRect = nullptr;
	$doubles* clipRectPad = nullptr;
	bool init_clipRectPad = false;
	$doubles* middle = nullptr;
	$doubles* subdivTs = nullptr;
	::sun::java2d::marlin::Curve* curve = nullptr;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("DO_CHECK_LENGTH")
#pragma pop_macro("LEN_TH")
#pragma pop_macro("MAX_N_CURVES")
#pragma pop_macro("TRACE")

#endif // _sun_java2d_marlin_TransformingPathConsumer2D$CurveClipSplitter_h_