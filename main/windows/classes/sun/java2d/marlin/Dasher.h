#ifndef _sun_java2d_marlin_Dasher_h_
#define _sun_java2d_marlin_Dasher_h_
//$ class sun.java2d.marlin.Dasher
//$ extends sun.java2d.marlin.DPathConsumer2D
//$ implements sun.java2d.marlin.MarlinConst

#include <java/lang/Array.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/MarlinConst.h>

#pragma push_macro("CURVE_LEN_ERR")
#undef CURVE_LEN_ERR
#pragma push_macro("EPS")
#undef EPS
#pragma push_macro("MAX_CYCLES")
#undef MAX_CYCLES
#pragma push_macro("MIN_T_INC")
#undef MIN_T_INC
#pragma push_macro("REC_LIMIT")
#undef REC_LIMIT

namespace sun {
	namespace java2d {
		namespace marlin {
			class Dasher$LengthIterator;
			class DoubleArrayCache$Reference;
			class RendererContext;
			class TransformingPathConsumer2D$CurveClipSplitter;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class Dasher : public ::sun::java2d::marlin::DPathConsumer2D, public ::sun::java2d::marlin::MarlinConst {
	$class(Dasher, 0, ::sun::java2d::marlin::DPathConsumer2D, ::sun::java2d::marlin::MarlinConst)
public:
	Dasher();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx);
	void _curveTo(double x1, double y1, double x2, double y2, double x3, double y3);
	void _lineTo(double x1, double y1);
	void _quadTo(double x1, double y1, double x2, double y2);
	virtual void closePath() override;
	$doubles* copyDashArray($floats* dashes);
	virtual void curveTo(double x1, double y1, double x2, double y2, double x3, double y3) override;
	void dispose();
	void emitFirstSegments();
	void emitSeg($doubles* buf, int32_t off, int32_t type);
	virtual int64_t getNativeConsumer() override;
	void goTo($doubles* pts, int32_t off, int32_t type, bool on);
	void goTo_starting($doubles* pts, int32_t off, int32_t type);
	::sun::java2d::marlin::Dasher* init(::sun::java2d::marlin::DPathConsumer2D* out, $doubles* dash, int32_t dashLen, double phase, bool recycleDashes);
	virtual void lineTo(double x1, double y1) override;
	virtual void moveTo(double x0, double y0) override;
	virtual void pathDone() override;
	static bool pointCurve($doubles* curve, int32_t type);
	virtual void quadTo(double x1, double y1, double x2, double y2) override;
	void skipCurveTo(double x1, double y1, double x2, double y2, double x3, double y3);
	void skipLen();
	void skipLineTo(double x1, double y1);
	void skipQuadTo(double x1, double y1, double x2, double y2);
	void skipSomethingTo(int32_t type);
	void somethingTo(int32_t type);
	virtual $String* toString() override;
	static const int32_t REC_LIMIT = 16;
	static double CURVE_LEN_ERR;
	static double MIN_T_INC;
	static double EPS;
	static double MAX_CYCLES;
	::sun::java2d::marlin::DPathConsumer2D* out = nullptr;
	$doubles* dash = nullptr;
	int32_t dashLen = 0;
	double startPhase = 0.0;
	bool startDashOn = false;
	int32_t startIdx = 0;
	bool starting = false;
	bool needsMoveTo = false;
	int32_t idx = 0;
	bool dashOn = false;
	double phase = 0.0;
	double sx0 = 0.0;
	double sy0 = 0.0;
	double cx0 = 0.0;
	double cy0 = 0.0;
	$doubles* curCurvepts = nullptr;
	::sun::java2d::marlin::RendererContext* rdrCtx = nullptr;
	bool recycleDashes = false;
	$doubles* firstSegmentsBuffer = nullptr;
	int32_t firstSegidx = 0;
	::sun::java2d::marlin::DoubleArrayCache$Reference* dashes_ref = nullptr;
	::sun::java2d::marlin::DoubleArrayCache$Reference* firstSegmentsBuffer_ref = nullptr;
	$doubles* clipRect = nullptr;
	int32_t cOutCode = 0;
	bool subdivide = false;
	::sun::java2d::marlin::Dasher$LengthIterator* li = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$CurveClipSplitter* curveSplitter = nullptr;
	double cycleLen = 0.0;
	bool outside = false;
	double totalSkipLen = 0.0;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("CURVE_LEN_ERR")
#pragma pop_macro("EPS")
#pragma pop_macro("MAX_CYCLES")
#pragma pop_macro("MIN_T_INC")
#pragma pop_macro("REC_LIMIT")

#endif // _sun_java2d_marlin_Dasher_h_