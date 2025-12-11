#include <sun/java2d/marlin/Stroker.h>

#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <sun/java2d/marlin/Curve.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/Helpers$PolyStack.h>
#include <sun/java2d/marlin/Helpers.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <sun/java2d/marlin/RendererStats.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$CurveBasicMonotonizer.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$CurveClipSplitter.h>
#include <sun/java2d/marlin/stats/Histogram.h>
#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

#undef C
#undef CAP_ROUND
#undef CAP_SQUARE
#undef CLOSE
#undef DO_CLIP_SUBDIVIDER
#undef DO_LOG_CLIP
#undef DRAWING_OP_TO
#undef ERR_JOIN
#undef JOIN_MITER
#undef JOIN_ROUND
#undef MIN_SUBPIXELS
#undef MOVE_TO
#undef ROUND_JOIN_THRESHOLD
#undef SQRT_2

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $Helpers = ::sun::java2d::marlin::Helpers;
using $Helpers$PolyStack = ::sun::java2d::marlin::Helpers$PolyStack;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;
using $RendererContext = ::sun::java2d::marlin::RendererContext;
using $TransformingPathConsumer2D$CurveBasicMonotonizer = ::sun::java2d::marlin::TransformingPathConsumer2D$CurveBasicMonotonizer;
using $TransformingPathConsumer2D$CurveClipSplitter = ::sun::java2d::marlin::TransformingPathConsumer2D$CurveClipSplitter;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _Stroker_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Stroker, $assertionsDisabled)},
	{"MOVE_TO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Stroker, MOVE_TO)},
	{"DRAWING_OP_TO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Stroker, DRAWING_OP_TO)},
	{"CLOSE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Stroker, CLOSE)},
	{"ERR_JOIN", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Stroker, ERR_JOIN)},
	{"ROUND_JOIN_THRESHOLD", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Stroker, ROUND_JOIN_THRESHOLD)},
	{"C", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Stroker, C)},
	{"SQRT_2", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Stroker, SQRT_2)},
	{"out", "Lsun/java2d/marlin/DPathConsumer2D;", nullptr, $PRIVATE, $field(Stroker, out)},
	{"capStyle", "I", nullptr, $PRIVATE, $field(Stroker, capStyle)},
	{"joinStyle", "I", nullptr, $PRIVATE, $field(Stroker, joinStyle)},
	{"lineWidth2", "D", nullptr, $PRIVATE, $field(Stroker, lineWidth2)},
	{"invHalfLineWidth2Sq", "D", nullptr, $PRIVATE, $field(Stroker, invHalfLineWidth2Sq)},
	{"offset0", "[D", nullptr, $PRIVATE | $FINAL, $field(Stroker, offset0)},
	{"offset1", "[D", nullptr, $PRIVATE | $FINAL, $field(Stroker, offset1)},
	{"offset2", "[D", nullptr, $PRIVATE | $FINAL, $field(Stroker, offset2)},
	{"miter", "[D", nullptr, $PRIVATE | $FINAL, $field(Stroker, miter)},
	{"miterLimitSq", "D", nullptr, $PRIVATE, $field(Stroker, miterLimitSq)},
	{"prev", "I", nullptr, $PRIVATE, $field(Stroker, prev)},
	{"sx0", "D", nullptr, $PRIVATE, $field(Stroker, sx0)},
	{"sy0", "D", nullptr, $PRIVATE, $field(Stroker, sy0)},
	{"sdx", "D", nullptr, $PRIVATE, $field(Stroker, sdx)},
	{"sdy", "D", nullptr, $PRIVATE, $field(Stroker, sdy)},
	{"cx0", "D", nullptr, $PRIVATE, $field(Stroker, cx0)},
	{"cy0", "D", nullptr, $PRIVATE, $field(Stroker, cy0)},
	{"cdx", "D", nullptr, $PRIVATE, $field(Stroker, cdx)},
	{"cdy", "D", nullptr, $PRIVATE, $field(Stroker, cdy)},
	{"smx", "D", nullptr, $PRIVATE, $field(Stroker, smx)},
	{"smy", "D", nullptr, $PRIVATE, $field(Stroker, smy)},
	{"cmx", "D", nullptr, $PRIVATE, $field(Stroker, cmx)},
	{"cmy", "D", nullptr, $PRIVATE, $field(Stroker, cmy)},
	{"reverse", "Lsun/java2d/marlin/Helpers$PolyStack;", nullptr, $PRIVATE | $FINAL, $field(Stroker, reverse)},
	{"lp", "[D", nullptr, $PRIVATE | $FINAL, $field(Stroker, lp)},
	{"rp", "[D", nullptr, $PRIVATE | $FINAL, $field(Stroker, rp)},
	{"rdrCtx", "Lsun/java2d/marlin/RendererContext;", nullptr, $FINAL, $field(Stroker, rdrCtx)},
	{"curve", "Lsun/java2d/marlin/Curve;", nullptr, $FINAL, $field(Stroker, curve)},
	{"clipRect", "[D", nullptr, $PRIVATE, $field(Stroker, clipRect)},
	{"cOutCode", "I", nullptr, $PRIVATE, $field(Stroker, cOutCode)},
	{"sOutCode", "I", nullptr, $PRIVATE, $field(Stroker, sOutCode)},
	{"opened", "Z", nullptr, $PRIVATE, $field(Stroker, opened)},
	{"capStart", "Z", nullptr, $PRIVATE, $field(Stroker, capStart)},
	{"monotonize", "Z", nullptr, $PRIVATE, $field(Stroker, monotonize)},
	{"subdivide", "Z", nullptr, $PRIVATE, $field(Stroker, subdivide)},
	{"curveSplitter", "Lsun/java2d/marlin/TransformingPathConsumer2D$CurveClipSplitter;", nullptr, $PRIVATE | $FINAL, $field(Stroker, curveSplitter)},
	{}
};

$MethodInfo _Stroker_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/marlin/RendererContext;)V", nullptr, 0, $method(static_cast<void(Stroker::*)($RendererContext*)>(&Stroker::init$))},
	{"_curveTo", "(DDDDDDI)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double,double,double,int32_t)>(&Stroker::_curveTo))},
	{"_moveTo", "(DDI)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,int32_t)>(&Stroker::_moveTo))},
	{"_quadTo", "(DDDDI)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double,int32_t)>(&Stroker::_quadTo))},
	{"closePath", "()V", nullptr, $PUBLIC},
	{"computeMiter", "(DDDDDDDD[D)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(double,double,double,double,double,double,double,double,$doubles*)>(&Stroker::computeMiter))},
	{"computeOffset", "(DDD[D)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(double,double,double,$doubles*)>(&Stroker::computeOffset))},
	{"computeOffsetCubic", "([DI[D[D)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Stroker::*)($doubles*,int32_t,$doubles*,$doubles*)>(&Stroker::computeOffsetCubic))},
	{"computeOffsetQuad", "([DI[D[D)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Stroker::*)($doubles*,int32_t,$doubles*,$doubles*)>(&Stroker::computeOffsetQuad))},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC},
	{"disableClipping", "()V", nullptr, 0, $method(static_cast<void(Stroker::*)()>(&Stroker::disableClipping))},
	{"dispose", "()V", nullptr, 0, $method(static_cast<void(Stroker::*)()>(&Stroker::dispose))},
	{"drawBezApproxForArc", "(DDDDDDZ)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double,double,double,bool)>(&Stroker::drawBezApproxForArc))},
	{"drawJoin", "(DDDDDDDDDDI)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double,double,double,double,double,double,double,int32_t)>(&Stroker::drawJoin))},
	{"drawMiter", "(DDDDDDDDDDZ)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double,double,double,double,double,double,double,bool)>(&Stroker::drawMiter))},
	{"drawRoundCap", "(DDDD)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double)>(&Stroker::drawRoundCap))},
	{"drawRoundJoin", "(DDDDDDZ)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double,double,double,bool)>(&Stroker::drawRoundJoin))},
	{"emitClose", "()V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)()>(&Stroker::emitClose))},
	{"emitCurveTo", "(DDDDDD)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double,double,double)>(&Stroker::emitCurveTo))},
	{"emitCurveTo", "(DDDDDDDDZ)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double,double,double,double,double,bool)>(&Stroker::emitCurveTo))},
	{"emitCurveToRev", "(DDDDDD)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double,double,double)>(&Stroker::emitCurveToRev))},
	{"emitLineTo", "(DD)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double)>(&Stroker::emitLineTo))},
	{"emitLineTo", "(DDZ)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,bool)>(&Stroker::emitLineTo))},
	{"emitLineToRev", "(DD)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double)>(&Stroker::emitLineToRev))},
	{"emitMoveTo", "(DD)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double)>(&Stroker::emitMoveTo))},
	{"emitQuadTo", "(DDDD)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double)>(&Stroker::emitQuadTo))},
	{"emitQuadToRev", "(DDDD)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double)>(&Stroker::emitQuadToRev))},
	{"emitReverse", "()V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)()>(&Stroker::emitReverse))},
	{"finish", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(int32_t)>(&Stroker::finish))},
	{"getLineOffsets", "(DDDD[D[D)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double,$doubles*,$doubles*)>(&Stroker::getLineOffsets))},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC},
	{"init", "(Lsun/java2d/marlin/DPathConsumer2D;DIIDZ)Lsun/java2d/marlin/Stroker;", nullptr, 0, $method(static_cast<Stroker*(Stroker::*)($DPathConsumer2D*,double,int32_t,int32_t,double,bool)>(&Stroker::init))},
	{"isCW", "(DDDD)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(double,double,double,double)>(&Stroker::isCW))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC},
	{"lineTo", "(DDZ)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,bool)>(&Stroker::lineTo))},
	{"mayDrawRoundJoin", "(DDDDDDZ)V", nullptr, $PRIVATE, $method(static_cast<void(Stroker::*)(double,double,double,double,double,double,bool)>(&Stroker::mayDrawRoundJoin))},
	{"moveTo", "(DD)V", nullptr, $PUBLIC},
	{"pathDone", "()V", nullptr, $PUBLIC},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC},
	{"safeComputeMiter", "(DDDDDDDD[D)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(double,double,double,double,double,double,double,double,$doubles*)>(&Stroker::safeComputeMiter))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"within", "(DDDDD)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(double,double,double,double,double)>(&Stroker::within))},
	{}
};

$ClassInfo _Stroker_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.Stroker",
	"java.lang.Object",
	"sun.java2d.marlin.DPathConsumer2D,sun.java2d.marlin.MarlinConst",
	_Stroker_FieldInfo_,
	_Stroker_MethodInfo_
};

$Object* allocate$Stroker($Class* clazz) {
	return $of($alloc(Stroker));
}

int32_t Stroker::hashCode() {
	 return this->$DPathConsumer2D::hashCode();
}

bool Stroker::equals(Object$* arg0) {
	 return this->$DPathConsumer2D::equals(arg0);
}

$Object* Stroker::clone() {
	 return this->$DPathConsumer2D::clone();
}

$String* Stroker::toString() {
	 return this->$DPathConsumer2D::toString();
}

void Stroker::finalize() {
	this->$DPathConsumer2D::finalize();
}

bool Stroker::$assertionsDisabled = false;
double Stroker::ERR_JOIN = 0.0;
double Stroker::ROUND_JOIN_THRESHOLD = 0.0;
double Stroker::C = 0.0;
double Stroker::SQRT_2 = 0.0;

void Stroker::init$($RendererContext* rdrCtx) {
	$set(this, offset0, $new($doubles, 2));
	$set(this, offset1, $new($doubles, 2));
	$set(this, offset2, $new($doubles, 2));
	$set(this, miter, $new($doubles, 2));
	$set(this, lp, $new($doubles, 8));
	$set(this, rp, $new($doubles, 8));
	this->cOutCode = 0;
	this->sOutCode = 0;
	this->opened = false;
	this->capStart = false;
	this->subdivide = false;
	$set(this, rdrCtx, rdrCtx);
	$set(this, reverse, ($nc(rdrCtx)->stats$ != nullptr) ? $new($Helpers$PolyStack, rdrCtx, $nc($nc(rdrCtx)->stats$)->stat_str_polystack_types, $nc(rdrCtx->stats$)->stat_str_polystack_curves, $nc(rdrCtx->stats$)->hist_str_polystack_curves, $nc(rdrCtx->stats$)->stat_array_str_polystack_curves, $nc(rdrCtx->stats$)->stat_array_str_polystack_types) : $new($Helpers$PolyStack, rdrCtx));
	$set(this, curve, $nc(rdrCtx)->curve);
	$set(this, curveSplitter, rdrCtx->curveClipSplitter);
}

Stroker* Stroker::init($DPathConsumer2D* pc2d, double lineWidth, int32_t capStyle, int32_t joinStyle, double miterLimit, bool subdivideCurves) {
	$useLocalCurrentObjectStackCache();
	$set(this, out, pc2d);
	this->lineWidth2 = lineWidth / 2.0;
	this->invHalfLineWidth2Sq = 1.0 / (2.0 * this->lineWidth2 * this->lineWidth2);
	this->monotonize = subdivideCurves;
	this->capStyle = capStyle;
	this->joinStyle = joinStyle;
	double limit = miterLimit * this->lineWidth2;
	this->miterLimitSq = limit * limit;
	this->prev = Stroker::CLOSE;
	$nc(this->rdrCtx)->stroking = 1;
	if ($nc(this->rdrCtx)->doClip) {
		double margin = this->lineWidth2;
		if (capStyle == $MarlinConst::CAP_SQUARE) {
			margin *= Stroker::SQRT_2;
		}
		if ((joinStyle == $MarlinConst::JOIN_MITER) && (margin < limit)) {
			margin = limit;
		}
		$var($doubles, _clipRect, $nc(this->rdrCtx)->clipRect);
		(*$nc(_clipRect))[0] -= margin;
		(*_clipRect)[1] += margin;
		(*_clipRect)[2] -= margin;
		(*_clipRect)[3] += margin;
		$set(this, clipRect, _clipRect);
		$init($MarlinConst);
		if ($MarlinConst::DO_LOG_CLIP) {
			$MarlinUtils::logInfo($$str({"clipRect (stroker): "_s, $($Arrays::toString($nc(this->rdrCtx)->clipRect))}));
		}
		if ($MarlinConst::DO_CLIP_SUBDIVIDER) {
			this->subdivide = subdivideCurves;
			$nc(this->curveSplitter)->init();
		} else {
			this->subdivide = false;
		}
	} else {
		$set(this, clipRect, nullptr);
		this->cOutCode = 0;
		this->sOutCode = 0;
	}
	return this;
}

void Stroker::disableClipping() {
	$set(this, clipRect, nullptr);
	this->cOutCode = 0;
	this->sOutCode = 0;
}

void Stroker::dispose() {
	$nc(this->reverse)->dispose();
	this->opened = false;
	this->capStart = false;
}

void Stroker::computeOffset(double lx, double ly, double w, $doubles* m) {
	$init(Stroker);
	double len = lx * lx + ly * ly;
	if (len == 0.0) {
		$nc(m)->set(0, 0.0);
		m->set(1, 0.0);
	} else {
		len = $Math::sqrt(len);
		$nc(m)->set(0, (ly * w) / len);
		m->set(1, -(lx * w) / len);
	}
}

bool Stroker::isCW(double dx1, double dy1, double dx2, double dy2) {
	$init(Stroker);
	return dx1 * dy2 <= dy1 * dx2;
}

void Stroker::mayDrawRoundJoin(double cx, double cy, double omx, double omy, double mx, double my, bool rev) {
	if ((omx == 0.0 && omy == 0.0) || (mx == 0.0 && my == 0.0)) {
		return;
	}
	double domx = omx - mx;
	double domy = omy - my;
	double lenSq = domx * domx + domy * domy;
	if (lenSq < Stroker::ROUND_JOIN_THRESHOLD) {
		return;
	}
	if (rev) {
		omx = -omx;
		omy = -omy;
		mx = -mx;
		my = -my;
	}
	drawRoundJoin(cx, cy, omx, omy, mx, my, rev);
}

void Stroker::drawRoundJoin(double cx, double cy, double omx, double omy, double mx, double my, bool rev) {
	double cosext = omx * mx + omy * my;
	if (cosext >= 0.0) {
		drawBezApproxForArc(cx, cy, omx, omy, mx, my, rev);
	} else {
		double nx = my - omy;
		double ny = omx - mx;
		double nlen = $Math::sqrt(nx * nx + ny * ny);
		double scale = this->lineWidth2 / nlen;
		double mmx = nx * scale;
		double mmy = ny * scale;
		if (rev) {
			mmx = -mmx;
			mmy = -mmy;
		}
		drawBezApproxForArc(cx, cy, omx, omy, mmx, mmy, rev);
		drawBezApproxForArc(cx, cy, mmx, mmy, mx, my, rev);
	}
}

void Stroker::drawBezApproxForArc(double cx, double cy, double omx, double omy, double mx, double my, bool rev) {
	double cosext2 = (omx * mx + omy * my) * this->invHalfLineWidth2Sq;
	if (cosext2 >= 0.5) {
		return;
	}
	double var$0 = (4.0 / 3.0) * $Math::sqrt(0.5 - cosext2);
	double cv = (var$0 / (1.0 + $Math::sqrt(cosext2 + 0.5)));
	if (rev) {
		cv = -cv;
	}
	double x1 = cx + omx;
	double y1 = cy + omy;
	double x2 = x1 - cv * omy;
	double y2 = y1 + cv * omx;
	double x4 = cx + mx;
	double y4 = cy + my;
	double x3 = x4 + cv * my;
	double y3 = y4 - cv * mx;
	emitCurveTo(x1, y1, x2, y2, x3, y3, x4, y4, rev);
}

void Stroker::drawRoundCap(double cx, double cy, double mx, double my) {
	double Cmx = Stroker::C * mx;
	double Cmy = Stroker::C * my;
	emitCurveTo(cx + mx - Cmy, cy + my + Cmx, cx - my + Cmx, cy + mx + Cmy, cx - my, cy + mx);
	emitCurveTo(cx - my - Cmx, cy + mx - Cmy, cx - mx - Cmy, cy - my + Cmx, cx - mx, cy - my);
}

void Stroker::computeMiter(double x0, double y0, double x1, double y1, double x0p, double y0p, double x1p, double y1p, $doubles* m) {
	$init(Stroker);
	double x10 = x1 - x0;
	double y10 = y1 - y0;
	double x10p = x1p - x0p;
	double y10p = y1p - y0p;
	double den = x10 * y10p - x10p * y10;
	double t = x10p * (y0 - y0p) - y10p * (x0 - x0p);
	t /= den;
	$nc(m)->set(0, x0 + t * x10);
	m->set(1, y0 + t * y10);
}

void Stroker::safeComputeMiter(double x0, double y0, double x1, double y1, double x0p, double y0p, double x1p, double y1p, $doubles* m) {
	$init(Stroker);
	double x10 = x1 - x0;
	double y10 = y1 - y0;
	double x10p = x1p - x0p;
	double y10p = y1p - y0p;
	double den = x10 * y10p - x10p * y10;
	if (den == 0.0) {
		$nc(m)->set(2, (x0 + x0p) / 2.0);
		m->set(3, (y0 + y0p) / 2.0);
	} else {
		double t = x10p * (y0 - y0p) - y10p * (x0 - x0p);
		t /= den;
		$nc(m)->set(2, x0 + t * x10);
		m->set(3, y0 + t * y10);
	}
}

void Stroker::drawMiter(double pdx, double pdy, double x0, double y0, double dx, double dy, double omx, double omy, double mx, double my, bool rev) {
	if ((mx == omx && my == omy) || (pdx == 0.0 && pdy == 0.0) || (dx == 0.0 && dy == 0.0)) {
		return;
	}
	if (rev) {
		omx = -omx;
		omy = -omy;
		mx = -mx;
		my = -my;
	}
	computeMiter((x0 - pdx) + omx, (y0 - pdy) + omy, x0 + omx, y0 + omy, (dx + x0) + mx, (dy + y0) + my, x0 + mx, y0 + my, this->miter);
	double miterX = $nc(this->miter)->get(0);
	double miterY = $nc(this->miter)->get(1);
	double lenSq = (miterX - x0) * (miterX - x0) + (miterY - y0) * (miterY - y0);
	if (lenSq < this->miterLimitSq) {
		emitLineTo(miterX, miterY, rev);
	}
}

void Stroker::moveTo(double x0, double y0) {
	_moveTo(x0, y0, this->cOutCode);
	this->sx0 = x0;
	this->sy0 = y0;
	this->sdx = 1.0;
	this->sdy = 0.0;
	this->opened = false;
	this->capStart = false;
	if (this->clipRect != nullptr) {
		int32_t outcode = $Helpers::outcode(x0, y0, this->clipRect);
		this->cOutCode = outcode;
		this->sOutCode = outcode;
	}
}

void Stroker::_moveTo(double x0, double y0, int32_t outcode) {
	if (this->prev == Stroker::MOVE_TO) {
		this->cx0 = x0;
		this->cy0 = y0;
	} else {
		if (this->prev == Stroker::DRAWING_OP_TO) {
			finish(outcode);
		}
		this->prev = Stroker::MOVE_TO;
		this->cx0 = x0;
		this->cy0 = y0;
		this->cdx = 1.0;
		this->cdy = 0.0;
	}
}

void Stroker::lineTo(double x1, double y1) {
	lineTo(x1, y1, false);
}

void Stroker::lineTo(double x1, double y1, bool force) {
	int32_t outcode0 = this->cOutCode;
	if (!force && this->clipRect != nullptr) {
		int32_t outcode1 = $Helpers::outcode(x1, y1, this->clipRect);
		int32_t orCode = (outcode0 | outcode1);
		if (orCode != 0) {
			int32_t sideCode = (int32_t)(outcode0 & (uint32_t)outcode1);
			if (sideCode == 0) {
				if (this->subdivide) {
					this->subdivide = false;
					bool ret = $nc(this->curveSplitter)->splitLine(this->cx0, this->cy0, x1, y1, orCode, this);
					this->subdivide = true;
					if (ret) {
						return;
					}
				}
			} else {
				this->cOutCode = outcode1;
				_moveTo(x1, y1, outcode0);
				this->opened = true;
				return;
			}
		}
		this->cOutCode = outcode1;
	}
	double dx = x1 - this->cx0;
	double dy = y1 - this->cy0;
	if (dx == 0.0 && dy == 0.0) {
		dx = 1.0;
	}
	computeOffset(dx, dy, this->lineWidth2, this->offset0);
	double mx = $nc(this->offset0)->get(0);
	double my = $nc(this->offset0)->get(1);
	drawJoin(this->cdx, this->cdy, this->cx0, this->cy0, dx, dy, this->cmx, this->cmy, mx, my, outcode0);
	emitLineTo(this->cx0 + mx, this->cy0 + my);
	emitLineTo(x1 + mx, y1 + my);
	emitLineToRev(this->cx0 - mx, this->cy0 - my);
	emitLineToRev(x1 - mx, y1 - my);
	this->prev = Stroker::DRAWING_OP_TO;
	this->cx0 = x1;
	this->cy0 = y1;
	this->cdx = dx;
	this->cdy = dy;
	this->cmx = mx;
	this->cmy = my;
}

void Stroker::closePath() {
	if (this->prev != Stroker::DRAWING_OP_TO && !this->opened) {
		if (this->prev == Stroker::CLOSE) {
			return;
		}
		emitMoveTo(this->cx0, this->cy0 - this->lineWidth2);
		this->sdx = 1.0;
		this->sdy = 0.0;
		this->cdx = 1.0;
		this->cdy = 0.0;
		this->smx = 0.0;
		this->smy = -this->lineWidth2;
		this->cmx = 0.0;
		this->cmy = -this->lineWidth2;
		finish(this->cOutCode);
		return;
	}
	if (((int32_t)(this->sOutCode & (uint32_t)this->cOutCode)) == 0) {
		if (this->cx0 != this->sx0 || this->cy0 != this->sy0) {
			lineTo(this->sx0, this->sy0, true);
		}
		drawJoin(this->cdx, this->cdy, this->cx0, this->cy0, this->sdx, this->sdy, this->cmx, this->cmy, this->smx, this->smy, this->sOutCode);
		emitLineTo(this->sx0 + this->smx, this->sy0 + this->smy);
		if (this->opened) {
			emitLineTo(this->sx0 - this->smx, this->sy0 - this->smy);
		} else {
			emitMoveTo(this->sx0 - this->smx, this->sy0 - this->smy);
		}
	}
	emitReverse();
	this->prev = Stroker::CLOSE;
	this->cx0 = this->sx0;
	this->cy0 = this->sy0;
	this->cOutCode = this->sOutCode;
	if (this->opened) {
		this->opened = false;
	} else {
		emitClose();
	}
}

void Stroker::emitReverse() {
	$nc(this->reverse)->popAll(this->out);
}

void Stroker::pathDone() {
	if (this->prev == Stroker::DRAWING_OP_TO) {
		finish(this->cOutCode);
	}
	$nc(this->out)->pathDone();
	this->prev = Stroker::CLOSE;
	dispose();
}

void Stroker::finish(int32_t outcode) {
	if ($nc(this->rdrCtx)->closedPath) {
		emitReverse();
	} else {
		if (outcode == 0) {
			if (this->capStyle == $MarlinConst::CAP_ROUND) {
				drawRoundCap(this->cx0, this->cy0, this->cmx, this->cmy);
			} else if (this->capStyle == $MarlinConst::CAP_SQUARE) {
				emitLineTo(this->cx0 - this->cmy + this->cmx, this->cy0 + this->cmx + this->cmy);
				emitLineTo(this->cx0 - this->cmy - this->cmx, this->cy0 + this->cmx - this->cmy);
			}
		}
		emitReverse();
		if (!this->capStart) {
			this->capStart = true;
			if (this->sOutCode == 0) {
				if (this->capStyle == $MarlinConst::CAP_ROUND) {
					drawRoundCap(this->sx0, this->sy0, -this->smx, -this->smy);
				} else if (this->capStyle == $MarlinConst::CAP_SQUARE) {
					emitLineTo(this->sx0 + this->smy - this->smx, this->sy0 - this->smx - this->smy);
					emitLineTo(this->sx0 + this->smy + this->smx, this->sy0 - this->smx + this->smy);
				}
			}
		}
	}
	emitClose();
}

void Stroker::emitMoveTo(double x0, double y0) {
	$nc(this->out)->moveTo(x0, y0);
}

void Stroker::emitLineTo(double x1, double y1) {
	$nc(this->out)->lineTo(x1, y1);
}

void Stroker::emitLineToRev(double x1, double y1) {
	$nc(this->reverse)->pushLine(x1, y1);
}

void Stroker::emitLineTo(double x1, double y1, bool rev) {
	if (rev) {
		emitLineToRev(x1, y1);
	} else {
		emitLineTo(x1, y1);
	}
}

void Stroker::emitQuadTo(double x1, double y1, double x2, double y2) {
	$nc(this->out)->quadTo(x1, y1, x2, y2);
}

void Stroker::emitQuadToRev(double x0, double y0, double x1, double y1) {
	$nc(this->reverse)->pushQuad(x0, y0, x1, y1);
}

void Stroker::emitCurveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	$nc(this->out)->curveTo(x1, y1, x2, y2, x3, y3);
}

void Stroker::emitCurveToRev(double x0, double y0, double x1, double y1, double x2, double y2) {
	$nc(this->reverse)->pushCubic(x0, y0, x1, y1, x2, y2);
}

void Stroker::emitCurveTo(double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3, bool rev) {
	if (rev) {
		$nc(this->reverse)->pushCubic(x0, y0, x1, y1, x2, y2);
	} else {
		$nc(this->out)->curveTo(x1, y1, x2, y2, x3, y3);
	}
}

void Stroker::emitClose() {
	$nc(this->out)->closePath();
}

void Stroker::drawJoin(double pdx, double pdy, double x0, double y0, double dx, double dy, double omx, double omy, double mx, double my, int32_t outcode) {
	if (this->prev != Stroker::DRAWING_OP_TO) {
		emitMoveTo(x0 + mx, y0 + my);
		if (!this->opened) {
			this->sdx = dx;
			this->sdy = dy;
			this->smx = mx;
			this->smy = my;
		}
	} else {
		bool cw = isCW(pdx, pdy, dx, dy);
		if (outcode == 0) {
			if (this->joinStyle == $MarlinConst::JOIN_MITER) {
				drawMiter(pdx, pdy, x0, y0, dx, dy, omx, omy, mx, my, cw);
			} else if (this->joinStyle == $MarlinConst::JOIN_ROUND) {
				mayDrawRoundJoin(x0, y0, omx, omy, mx, my, cw);
			}
		}
		emitLineTo(x0, y0, !cw);
	}
	this->prev = Stroker::DRAWING_OP_TO;
}

bool Stroker::within(double x1, double y1, double x2, double y2, double err) {
	$init(Stroker);
	if (!Stroker::$assertionsDisabled && !(err > 0)) {
		$throwNew($AssertionError, $of(""_s));
	}
	bool var$0 = $Helpers::within(x1, x2, err);
	return (var$0 && $Helpers::within(y1, y2, err));
}

void Stroker::getLineOffsets(double x1, double y1, double x2, double y2, $doubles* left, $doubles* right) {
	computeOffset(x2 - x1, y2 - y1, this->lineWidth2, this->offset0);
	double mx = $nc(this->offset0)->get(0);
	double my = $nc(this->offset0)->get(1);
	$nc(left)->set(0, x1 + mx);
	left->set(1, y1 + my);
	left->set(2, x2 + mx);
	left->set(3, y2 + my);
	$nc(right)->set(0, x1 - mx);
	right->set(1, y1 - my);
	right->set(2, x2 - mx);
	right->set(3, y2 - my);
}

int32_t Stroker::computeOffsetCubic($doubles* pts, int32_t off, $doubles* leftOff, $doubles* rightOff) {
	double x1 = $nc(pts)->get(off);
	double y1 = pts->get(off + 1);
	double x2 = pts->get(off + 2);
	double y2 = pts->get(off + 3);
	double x3 = pts->get(off + 4);
	double y3 = pts->get(off + 5);
	double x4 = pts->get(off + 6);
	double y4 = pts->get(off + 7);
	double dx4 = x4 - x3;
	double dy4 = y4 - y3;
	double dx1 = x2 - x1;
	double dy1 = y2 - y1;
	bool p1eqp2 = within(x1, y1, x2, y2, 6.0 * $Math::ulp(y2));
	bool p3eqp4 = within(x3, y3, x4, y4, 6.0 * $Math::ulp(y4));
	if (p1eqp2 && p3eqp4) {
		getLineOffsets(x1, y1, x4, y4, leftOff, rightOff);
		return 4;
	} else if (p1eqp2) {
		dx1 = x3 - x1;
		dy1 = y3 - y1;
	} else if (p3eqp4) {
		dx4 = x4 - x2;
		dy4 = y4 - y2;
	}
	double dotsq = (dx1 * dx4 + dy1 * dy4);
	dotsq *= dotsq;
	double l1sq = dx1 * dx1 + dy1 * dy1;
	double l4sq = dx4 * dx4 + dy4 * dy4;
	if ($Helpers::within(dotsq, l1sq * l4sq, 4.0 * $Math::ulp(dotsq))) {
		getLineOffsets(x1, y1, x4, y4, leftOff, rightOff);
		return 4;
	}
	double x = (x1 + 3.0 * (x2 + x3) + x4) / 8.0;
	double y = (y1 + 3.0 * (y2 + y3) + y4) / 8.0;
	double dxm = x3 + x4 - x1 - x2;
	double dym = y3 + y4 - y1 - y2;
	computeOffset(dx1, dy1, this->lineWidth2, this->offset0);
	computeOffset(dxm, dym, this->lineWidth2, this->offset1);
	computeOffset(dx4, dy4, this->lineWidth2, this->offset2);
	double x1p = x1 + $nc(this->offset0)->get(0);
	double y1p = y1 + $nc(this->offset0)->get(1);
	double xi = x + $nc(this->offset1)->get(0);
	double yi = y + $nc(this->offset1)->get(1);
	double x4p = x4 + $nc(this->offset2)->get(0);
	double y4p = y4 + $nc(this->offset2)->get(1);
	double invdet43 = 4.0 / (3.0 * (dx1 * dy4 - dy1 * dx4));
	double two_pi_m_p1_m_p4x = 2.0 * xi - x1p - x4p;
	double two_pi_m_p1_m_p4y = 2.0 * yi - y1p - y4p;
	double c1 = invdet43 * (dy4 * two_pi_m_p1_m_p4x - dx4 * two_pi_m_p1_m_p4y);
	double c2 = invdet43 * (dx1 * two_pi_m_p1_m_p4y - dy1 * two_pi_m_p1_m_p4x);
	double x2p = 0.0;
	double y2p = 0.0;
	double x3p = 0.0;
	double y3p = 0.0;
	x2p = x1p + c1 * dx1;
	y2p = y1p + c1 * dy1;
	x3p = x4p + c2 * dx4;
	y3p = y4p + c2 * dy4;
	$nc(leftOff)->set(0, x1p);
	leftOff->set(1, y1p);
	leftOff->set(2, x2p);
	leftOff->set(3, y2p);
	leftOff->set(4, x3p);
	leftOff->set(5, y3p);
	leftOff->set(6, x4p);
	leftOff->set(7, y4p);
	x1p = x1 - $nc(this->offset0)->get(0);
	y1p = y1 - $nc(this->offset0)->get(1);
	xi = xi - 2.0 * $nc(this->offset1)->get(0);
	yi = yi - 2.0 * $nc(this->offset1)->get(1);
	x4p = x4 - $nc(this->offset2)->get(0);
	y4p = y4 - $nc(this->offset2)->get(1);
	two_pi_m_p1_m_p4x = 2.0 * xi - x1p - x4p;
	two_pi_m_p1_m_p4y = 2.0 * yi - y1p - y4p;
	c1 = invdet43 * (dy4 * two_pi_m_p1_m_p4x - dx4 * two_pi_m_p1_m_p4y);
	c2 = invdet43 * (dx1 * two_pi_m_p1_m_p4y - dy1 * two_pi_m_p1_m_p4x);
	x2p = x1p + c1 * dx1;
	y2p = y1p + c1 * dy1;
	x3p = x4p + c2 * dx4;
	y3p = y4p + c2 * dy4;
	$nc(rightOff)->set(0, x1p);
	rightOff->set(1, y1p);
	rightOff->set(2, x2p);
	rightOff->set(3, y2p);
	rightOff->set(4, x3p);
	rightOff->set(5, y3p);
	rightOff->set(6, x4p);
	rightOff->set(7, y4p);
	return 8;
}

int32_t Stroker::computeOffsetQuad($doubles* pts, int32_t off, $doubles* leftOff, $doubles* rightOff) {
	double x1 = $nc(pts)->get(off);
	double y1 = pts->get(off + 1);
	double x2 = pts->get(off + 2);
	double y2 = pts->get(off + 3);
	double x3 = pts->get(off + 4);
	double y3 = pts->get(off + 5);
	double dx3 = x3 - x2;
	double dy3 = y3 - y2;
	double dx1 = x2 - x1;
	double dy1 = y2 - y1;
	bool p1eqp2 = within(x1, y1, x2, y2, 6.0 * $Math::ulp(y2));
	bool p2eqp3 = within(x2, y2, x3, y3, 6.0 * $Math::ulp(y3));
	if (p1eqp2 || p2eqp3) {
		getLineOffsets(x1, y1, x3, y3, leftOff, rightOff);
		return 4;
	}
	double dotsq = (dx1 * dx3 + dy1 * dy3);
	dotsq *= dotsq;
	double l1sq = dx1 * dx1 + dy1 * dy1;
	double l3sq = dx3 * dx3 + dy3 * dy3;
	if ($Helpers::within(dotsq, l1sq * l3sq, 4.0 * $Math::ulp(dotsq))) {
		getLineOffsets(x1, y1, x3, y3, leftOff, rightOff);
		return 4;
	}
	computeOffset(dx1, dy1, this->lineWidth2, this->offset0);
	computeOffset(dx3, dy3, this->lineWidth2, this->offset1);
	double x1p = x1 + $nc(this->offset0)->get(0);
	double y1p = y1 + $nc(this->offset0)->get(1);
	double x3p = x3 + $nc(this->offset1)->get(0);
	double y3p = y3 + $nc(this->offset1)->get(1);
	safeComputeMiter(x1p, y1p, x1p + dx1, y1p + dy1, x3p, y3p, x3p - dx3, y3p - dy3, leftOff);
	$nc(leftOff)->set(0, x1p);
	leftOff->set(1, y1p);
	leftOff->set(4, x3p);
	leftOff->set(5, y3p);
	x1p = x1 - $nc(this->offset0)->get(0);
	y1p = y1 - $nc(this->offset0)->get(1);
	x3p = x3 - $nc(this->offset1)->get(0);
	y3p = y3 - $nc(this->offset1)->get(1);
	safeComputeMiter(x1p, y1p, x1p + dx1, y1p + dy1, x3p, y3p, x3p - dx3, y3p - dy3, rightOff);
	$nc(rightOff)->set(0, x1p);
	rightOff->set(1, y1p);
	rightOff->set(4, x3p);
	rightOff->set(5, y3p);
	return 6;
}

void Stroker::curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	int32_t outcode0 = this->cOutCode;
	if (this->clipRect != nullptr) {
		int32_t outcode1 = $Helpers::outcode(x1, y1, this->clipRect);
		int32_t outcode2 = $Helpers::outcode(x2, y2, this->clipRect);
		int32_t outcode3 = $Helpers::outcode(x3, y3, this->clipRect);
		int32_t orCode = (((outcode0 | outcode1) | outcode2) | outcode3);
		if (orCode != 0) {
			int32_t sideCode = (int32_t)(((int32_t)(((int32_t)(outcode0 & (uint32_t)outcode1)) & (uint32_t)outcode2)) & (uint32_t)outcode3);
			if (sideCode == 0) {
				if (this->subdivide) {
					this->subdivide = false;
					bool ret = $nc(this->curveSplitter)->splitCurve(this->cx0, this->cy0, x1, y1, x2, y2, x3, y3, orCode, this);
					this->subdivide = true;
					if (ret) {
						return;
					}
				}
			} else {
				this->cOutCode = outcode3;
				_moveTo(x3, y3, outcode0);
				this->opened = true;
				return;
			}
		}
		this->cOutCode = outcode3;
	}
	_curveTo(x1, y1, x2, y2, x3, y3, outcode0);
}

void Stroker::_curveTo(double x1, double y1, double x2, double y2, double x3, double y3, int32_t outcode0) {
	$useLocalCurrentObjectStackCache();
	double dxs = x1 - this->cx0;
	double dys = y1 - this->cy0;
	double dxf = x3 - x2;
	double dyf = y3 - y2;
	if ((dxs == 0.0) && (dys == 0.0)) {
		dxs = x2 - this->cx0;
		dys = y2 - this->cy0;
		if ((dxs == 0.0) && (dys == 0.0)) {
			dxs = x3 - this->cx0;
			dys = y3 - this->cy0;
		}
	}
	if ((dxf == 0.0) && (dyf == 0.0)) {
		dxf = x3 - x1;
		dyf = y3 - y1;
		if ((dxf == 0.0) && (dyf == 0.0)) {
			dxf = x3 - this->cx0;
			dyf = y3 - this->cy0;
		}
	}
	if ((dxs == 0.0) && (dys == 0.0)) {
		if (this->clipRect != nullptr) {
			this->cOutCode = outcode0;
		}
		lineTo(this->cx0, this->cy0);
		return;
	}
	bool var$0 = $Math::abs(dxs) < 0.1;
	if (var$0 && $Math::abs(dys) < 0.1) {
		double len = $Math::sqrt(dxs * dxs + dys * dys);
		dxs /= len;
		dys /= len;
	}
	bool var$1 = $Math::abs(dxf) < 0.1;
	if (var$1 && $Math::abs(dyf) < 0.1) {
		double len = $Math::sqrt(dxf * dxf + dyf * dyf);
		dxf /= len;
		dyf /= len;
	}
	computeOffset(dxs, dys, this->lineWidth2, this->offset0);
	drawJoin(this->cdx, this->cdy, this->cx0, this->cy0, dxs, dys, this->cmx, this->cmy, $nc(this->offset0)->get(0), $nc(this->offset0)->get(1), outcode0);
	int32_t nSplits = 0;
	$var($doubles, mid, nullptr);
	$var($doubles, l, this->lp);
	if (this->monotonize) {
		$var($TransformingPathConsumer2D$CurveBasicMonotonizer, monotonizer, $nc($nc(this->rdrCtx)->monotonizer)->curve(this->cx0, this->cy0, x1, y1, x2, y2, x3, y3));
		nSplits = $nc(monotonizer)->nbSplits;
		$assign(mid, monotonizer->middle);
	} else {
		$assign(mid, l);
		$nc(mid)->set(0, this->cx0);
		mid->set(1, this->cy0);
		mid->set(2, x1);
		mid->set(3, y1);
		mid->set(4, x2);
		mid->set(5, y2);
		mid->set(6, x3);
		mid->set(7, y3);
	}
	$var($doubles, r, this->rp);
	int32_t kind = 0;
	{
		int32_t i = 0;
		int32_t off = 0;
		for (; i <= nSplits; ++i, off += 6) {
			kind = computeOffsetCubic(mid, off, l, r);
			emitLineTo($nc(l)->get(0), l->get(1));
			switch (kind) {
			case 8:
				{
					emitCurveTo($nc(l)->get(2), l->get(3), l->get(4), l->get(5), l->get(6), l->get(7));
					emitCurveToRev($nc(r)->get(0), r->get(1), r->get(2), r->get(3), r->get(4), r->get(5));
					break;
				}
			case 4:
				{
					emitLineTo($nc(l)->get(2), l->get(3));
					emitLineToRev($nc(r)->get(0), r->get(1));
					break;
				}
			default:
				{}
			}
			emitLineToRev($nc(r)->get(kind - 2), r->get(kind - 1));
		}
	}
	this->prev = Stroker::DRAWING_OP_TO;
	this->cx0 = x3;
	this->cy0 = y3;
	this->cdx = dxf;
	this->cdy = dyf;
	this->cmx = ($nc(l)->get(kind - 2) - $nc(r)->get(kind - 2)) / 2.0;
	this->cmy = (l->get(kind - 1) - r->get(kind - 1)) / 2.0;
}

void Stroker::quadTo(double x1, double y1, double x2, double y2) {
	int32_t outcode0 = this->cOutCode;
	if (this->clipRect != nullptr) {
		int32_t outcode1 = $Helpers::outcode(x1, y1, this->clipRect);
		int32_t outcode2 = $Helpers::outcode(x2, y2, this->clipRect);
		int32_t orCode = ((outcode0 | outcode1) | outcode2);
		if (orCode != 0) {
			int32_t sideCode = (int32_t)(((int32_t)(outcode0 & (uint32_t)outcode1)) & (uint32_t)outcode2);
			if (sideCode == 0) {
				if (this->subdivide) {
					this->subdivide = false;
					bool ret = $nc(this->curveSplitter)->splitQuad(this->cx0, this->cy0, x1, y1, x2, y2, orCode, this);
					this->subdivide = true;
					if (ret) {
						return;
					}
				}
			} else {
				this->cOutCode = outcode2;
				_moveTo(x2, y2, outcode0);
				this->opened = true;
				return;
			}
		}
		this->cOutCode = outcode2;
	}
	_quadTo(x1, y1, x2, y2, outcode0);
}

void Stroker::_quadTo(double x1, double y1, double x2, double y2, int32_t outcode0) {
	$useLocalCurrentObjectStackCache();
	double dxs = x1 - this->cx0;
	double dys = y1 - this->cy0;
	double dxf = x2 - x1;
	double dyf = y2 - y1;
	if (((dxs == 0.0) && (dys == 0.0)) || ((dxf == 0.0) && (dyf == 0.0))) {
		dxs = (dxf = x2 - this->cx0);
		dys = (dyf = y2 - this->cy0);
	}
	if ((dxs == 0.0) && (dys == 0.0)) {
		if (this->clipRect != nullptr) {
			this->cOutCode = outcode0;
		}
		lineTo(this->cx0, this->cy0);
		return;
	}
	bool var$0 = $Math::abs(dxs) < 0.1;
	if (var$0 && $Math::abs(dys) < 0.1) {
		double len = $Math::sqrt(dxs * dxs + dys * dys);
		dxs /= len;
		dys /= len;
	}
	bool var$1 = $Math::abs(dxf) < 0.1;
	if (var$1 && $Math::abs(dyf) < 0.1) {
		double len = $Math::sqrt(dxf * dxf + dyf * dyf);
		dxf /= len;
		dyf /= len;
	}
	computeOffset(dxs, dys, this->lineWidth2, this->offset0);
	drawJoin(this->cdx, this->cdy, this->cx0, this->cy0, dxs, dys, this->cmx, this->cmy, $nc(this->offset0)->get(0), $nc(this->offset0)->get(1), outcode0);
	int32_t nSplits = 0;
	$var($doubles, mid, nullptr);
	$var($doubles, l, this->lp);
	if (this->monotonize) {
		$var($TransformingPathConsumer2D$CurveBasicMonotonizer, monotonizer, $nc($nc(this->rdrCtx)->monotonizer)->quad(this->cx0, this->cy0, x1, y1, x2, y2));
		nSplits = $nc(monotonizer)->nbSplits;
		$assign(mid, monotonizer->middle);
	} else {
		$assign(mid, l);
		$nc(mid)->set(0, this->cx0);
		mid->set(1, this->cy0);
		mid->set(2, x1);
		mid->set(3, y1);
		mid->set(4, x2);
		mid->set(5, y2);
	}
	$var($doubles, r, this->rp);
	int32_t kind = 0;
	{
		int32_t i = 0;
		int32_t off = 0;
		for (; i <= nSplits; ++i, off += 4) {
			kind = computeOffsetQuad(mid, off, l, r);
			emitLineTo($nc(l)->get(0), l->get(1));
			switch (kind) {
			case 6:
				{
					emitQuadTo($nc(l)->get(2), l->get(3), l->get(4), l->get(5));
					emitQuadToRev($nc(r)->get(0), r->get(1), r->get(2), r->get(3));
					break;
				}
			case 4:
				{
					emitLineTo($nc(l)->get(2), l->get(3));
					emitLineToRev($nc(r)->get(0), r->get(1));
					break;
				}
			default:
				{}
			}
			emitLineToRev($nc(r)->get(kind - 2), r->get(kind - 1));
		}
	}
	this->prev = Stroker::DRAWING_OP_TO;
	this->cx0 = x2;
	this->cy0 = y2;
	this->cdx = dxf;
	this->cdy = dyf;
	this->cmx = ($nc(l)->get(kind - 2) - $nc(r)->get(kind - 2)) / 2.0;
	this->cmy = (l->get(kind - 1) - r->get(kind - 1)) / 2.0;
}

int64_t Stroker::getNativeConsumer() {
	$throwNew($InternalError, "Stroker doesn\'t use a native consumer"_s);
	$shouldNotReachHere();
}

void clinit$Stroker($Class* class$) {
	Stroker::$assertionsDisabled = !Stroker::class$->desiredAssertionStatus();
	$init($MarlinConst);
	Stroker::ERR_JOIN = (1.0f / $MarlinConst::MIN_SUBPIXELS);
	Stroker::ROUND_JOIN_THRESHOLD = Stroker::ERR_JOIN * Stroker::ERR_JOIN;
	Stroker::C = (4.0 * ($Math::sqrt(2.0) - 1.0) / 3.0);
	Stroker::SQRT_2 = $Math::sqrt(2.0);
}

Stroker::Stroker() {
}

$Class* Stroker::load$($String* name, bool initialize) {
	$loadClass(Stroker, name, initialize, &_Stroker_ClassInfo_, clinit$Stroker, allocate$Stroker);
	return class$;
}

$Class* Stroker::class$ = nullptr;

		} // marlin
	} // java2d
} // sun