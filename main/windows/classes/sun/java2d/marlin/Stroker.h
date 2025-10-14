#ifndef _sun_java2d_marlin_Stroker_h_
#define _sun_java2d_marlin_Stroker_h_
//$ class sun.java2d.marlin.Stroker
//$ extends sun.java2d.marlin.DPathConsumer2D
//$ implements sun.java2d.marlin.MarlinConst

#include <java/lang/Array.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/MarlinConst.h>

#pragma push_macro("C")
#undef C
#pragma push_macro("CLOSE")
#undef CLOSE
#pragma push_macro("DRAWING_OP_TO")
#undef DRAWING_OP_TO
#pragma push_macro("ERR_JOIN")
#undef ERR_JOIN
#pragma push_macro("MOVE_TO")
#undef MOVE_TO
#pragma push_macro("ROUND_JOIN_THRESHOLD")
#undef ROUND_JOIN_THRESHOLD
#pragma push_macro("SQRT_2")
#undef SQRT_2

namespace sun {
	namespace java2d {
		namespace marlin {
			class Curve;
			class Helpers$PolyStack;
			class RendererContext;
			class TransformingPathConsumer2D$CurveClipSplitter;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class Stroker : public ::sun::java2d::marlin::DPathConsumer2D, public ::sun::java2d::marlin::MarlinConst {
	$class(Stroker, 0, ::sun::java2d::marlin::DPathConsumer2D, ::sun::java2d::marlin::MarlinConst)
public:
	Stroker();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx);
	void _curveTo(double x1, double y1, double x2, double y2, double x3, double y3, int32_t outcode0);
	void _moveTo(double x0, double y0, int32_t outcode);
	void _quadTo(double x1, double y1, double x2, double y2, int32_t outcode0);
	virtual void closePath() override;
	static void computeMiter(double x0, double y0, double x1, double y1, double x0p, double y0p, double x1p, double y1p, $doubles* m);
	static void computeOffset(double lx, double ly, double w, $doubles* m);
	int32_t computeOffsetCubic($doubles* pts, int32_t off, $doubles* leftOff, $doubles* rightOff);
	int32_t computeOffsetQuad($doubles* pts, int32_t off, $doubles* leftOff, $doubles* rightOff);
	virtual void curveTo(double x1, double y1, double x2, double y2, double x3, double y3) override;
	void disableClipping();
	void dispose();
	void drawBezApproxForArc(double cx, double cy, double omx, double omy, double mx, double my, bool rev);
	void drawJoin(double pdx, double pdy, double x0, double y0, double dx, double dy, double omx, double omy, double mx, double my, int32_t outcode);
	void drawMiter(double pdx, double pdy, double x0, double y0, double dx, double dy, double omx, double omy, double mx, double my, bool rev);
	void drawRoundCap(double cx, double cy, double mx, double my);
	void drawRoundJoin(double cx, double cy, double omx, double omy, double mx, double my, bool rev);
	void emitClose();
	void emitCurveTo(double x1, double y1, double x2, double y2, double x3, double y3);
	void emitCurveTo(double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3, bool rev);
	void emitCurveToRev(double x0, double y0, double x1, double y1, double x2, double y2);
	void emitLineTo(double x1, double y1);
	void emitLineTo(double x1, double y1, bool rev);
	void emitLineToRev(double x1, double y1);
	void emitMoveTo(double x0, double y0);
	void emitQuadTo(double x1, double y1, double x2, double y2);
	void emitQuadToRev(double x0, double y0, double x1, double y1);
	void emitReverse();
	void finish(int32_t outcode);
	void getLineOffsets(double x1, double y1, double x2, double y2, $doubles* left, $doubles* right);
	virtual int64_t getNativeConsumer() override;
	::sun::java2d::marlin::Stroker* init(::sun::java2d::marlin::DPathConsumer2D* pc2d, double lineWidth, int32_t capStyle, int32_t joinStyle, double miterLimit, bool subdivideCurves);
	static bool isCW(double dx1, double dy1, double dx2, double dy2);
	virtual void lineTo(double x1, double y1) override;
	void lineTo(double x1, double y1, bool force);
	void mayDrawRoundJoin(double cx, double cy, double omx, double omy, double mx, double my, bool rev);
	virtual void moveTo(double x0, double y0) override;
	virtual void pathDone() override;
	virtual void quadTo(double x1, double y1, double x2, double y2) override;
	static void safeComputeMiter(double x0, double y0, double x1, double y1, double x0p, double y0p, double x1p, double y1p, $doubles* m);
	virtual $String* toString() override;
	static bool within(double x1, double y1, double x2, double y2, double err);
	static bool $assertionsDisabled;
	static const int32_t MOVE_TO = 0;
	static const int32_t DRAWING_OP_TO = 1;
	static const int32_t CLOSE = 2;
	static double ERR_JOIN;
	static double ROUND_JOIN_THRESHOLD;
	static double C;
	static double SQRT_2;
	::sun::java2d::marlin::DPathConsumer2D* out = nullptr;
	int32_t capStyle = 0;
	int32_t joinStyle = 0;
	double lineWidth2 = 0.0;
	double invHalfLineWidth2Sq = 0.0;
	$doubles* offset0 = nullptr;
	$doubles* offset1 = nullptr;
	$doubles* offset2 = nullptr;
	$doubles* miter = nullptr;
	double miterLimitSq = 0.0;
	int32_t prev = 0;
	double sx0 = 0.0;
	double sy0 = 0.0;
	double sdx = 0.0;
	double sdy = 0.0;
	double cx0 = 0.0;
	double cy0 = 0.0;
	double cdx = 0.0;
	double cdy = 0.0;
	double smx = 0.0;
	double smy = 0.0;
	double cmx = 0.0;
	double cmy = 0.0;
	::sun::java2d::marlin::Helpers$PolyStack* reverse = nullptr;
	$doubles* lp = nullptr;
	$doubles* rp = nullptr;
	::sun::java2d::marlin::RendererContext* rdrCtx = nullptr;
	::sun::java2d::marlin::Curve* curve = nullptr;
	$doubles* clipRect = nullptr;
	int32_t cOutCode = 0;
	int32_t sOutCode = 0;
	bool opened = false;
	bool capStart = false;
	bool monotonize = false;
	bool subdivide = false;
	::sun::java2d::marlin::TransformingPathConsumer2D$CurveClipSplitter* curveSplitter = nullptr;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("C")
#pragma pop_macro("CLOSE")
#pragma pop_macro("DRAWING_OP_TO")
#pragma pop_macro("ERR_JOIN")
#pragma pop_macro("MOVE_TO")
#pragma pop_macro("ROUND_JOIN_THRESHOLD")
#pragma pop_macro("SQRT_2")

#endif // _sun_java2d_marlin_Stroker_h_