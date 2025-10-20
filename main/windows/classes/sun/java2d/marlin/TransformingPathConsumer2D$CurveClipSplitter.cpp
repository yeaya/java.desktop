#include <sun/java2d/marlin/TransformingPathConsumer2D$CurveClipSplitter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/marlin/Curve.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/Helpers.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinProperties.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D.h>
#include <jcpp.h>

#undef DO_CHECK_LENGTH
#undef DO_LOG_CLIP
#undef LEN_TH
#undef MAX_N_CURVES
#undef TRACE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Curve = ::sun::java2d::marlin::Curve;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $Helpers = ::sun::java2d::marlin::Helpers;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinProperties = ::sun::java2d::marlin::MarlinProperties;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;
using $RendererContext = ::sun::java2d::marlin::RendererContext;
using $TransformingPathConsumer2D = ::sun::java2d::marlin::TransformingPathConsumer2D;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _TransformingPathConsumer2D$CurveClipSplitter_FieldInfo_[] = {
	{"LEN_TH", "D", nullptr, $STATIC | $FINAL, $staticField(TransformingPathConsumer2D$CurveClipSplitter, LEN_TH)},
	{"DO_CHECK_LENGTH", "Z", nullptr, $STATIC | $FINAL, $staticField(TransformingPathConsumer2D$CurveClipSplitter, DO_CHECK_LENGTH)},
	{"TRACE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransformingPathConsumer2D$CurveClipSplitter, TRACE)},
	{"MAX_N_CURVES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransformingPathConsumer2D$CurveClipSplitter, MAX_N_CURVES)},
	{"rdrCtx", "Lsun/java2d/marlin/RendererContext;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D$CurveClipSplitter, rdrCtx)},
	{"minLength", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$CurveClipSplitter, minLength)},
	{"clipRect", "[D", nullptr, $FINAL, $field(TransformingPathConsumer2D$CurveClipSplitter, clipRect)},
	{"clipRectPad", "[D", nullptr, $FINAL, $field(TransformingPathConsumer2D$CurveClipSplitter, clipRectPad)},
	{"init_clipRectPad", "Z", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$CurveClipSplitter, init_clipRectPad)},
	{"middle", "[D", nullptr, $FINAL, $field(TransformingPathConsumer2D$CurveClipSplitter, middle)},
	{"subdivTs", "[D", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D$CurveClipSplitter, subdivTs)},
	{"curve", "Lsun/java2d/marlin/Curve;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D$CurveClipSplitter, curve)},
	{}
};

$MethodInfo _TransformingPathConsumer2D$CurveClipSplitter_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/marlin/RendererContext;)V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D$CurveClipSplitter::*)($RendererContext*)>(&TransformingPathConsumer2D$CurveClipSplitter::init$))},
	{"emitCurrent", "(I[DILsun/java2d/marlin/DPathConsumer2D;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$doubles*,int32_t,$DPathConsumer2D*)>(&TransformingPathConsumer2D$CurveClipSplitter::emitCurrent))},
	{"init", "()V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D$CurveClipSplitter::*)()>(&TransformingPathConsumer2D$CurveClipSplitter::init))},
	{"initPaddedClip", "()V", nullptr, $PRIVATE, $method(static_cast<void(TransformingPathConsumer2D$CurveClipSplitter::*)()>(&TransformingPathConsumer2D$CurveClipSplitter::initPaddedClip))},
	{"splitCurve", "(DDDDDDDDILsun/java2d/marlin/DPathConsumer2D;)Z", nullptr, 0, $method(static_cast<bool(TransformingPathConsumer2D$CurveClipSplitter::*)(double,double,double,double,double,double,double,double,int32_t,$DPathConsumer2D*)>(&TransformingPathConsumer2D$CurveClipSplitter::splitCurve))},
	{"splitLine", "(DDDDILsun/java2d/marlin/DPathConsumer2D;)Z", nullptr, 0, $method(static_cast<bool(TransformingPathConsumer2D$CurveClipSplitter::*)(double,double,double,double,int32_t,$DPathConsumer2D*)>(&TransformingPathConsumer2D$CurveClipSplitter::splitLine))},
	{"splitQuad", "(DDDDDDILsun/java2d/marlin/DPathConsumer2D;)Z", nullptr, 0, $method(static_cast<bool(TransformingPathConsumer2D$CurveClipSplitter::*)(double,double,double,double,double,double,int32_t,$DPathConsumer2D*)>(&TransformingPathConsumer2D$CurveClipSplitter::splitQuad))},
	{"subdivideAtIntersections", "(IILsun/java2d/marlin/DPathConsumer2D;)Z", nullptr, $PRIVATE, $method(static_cast<bool(TransformingPathConsumer2D$CurveClipSplitter::*)(int32_t,int32_t,$DPathConsumer2D*)>(&TransformingPathConsumer2D$CurveClipSplitter::subdivideAtIntersections))},
	{}
};

$InnerClassInfo _TransformingPathConsumer2D$CurveClipSplitter_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.TransformingPathConsumer2D$CurveClipSplitter", "sun.java2d.marlin.TransformingPathConsumer2D", "CurveClipSplitter", $STATIC | $FINAL},
	{}
};

$ClassInfo _TransformingPathConsumer2D$CurveClipSplitter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.TransformingPathConsumer2D$CurveClipSplitter",
	"java.lang.Object",
	nullptr,
	_TransformingPathConsumer2D$CurveClipSplitter_FieldInfo_,
	_TransformingPathConsumer2D$CurveClipSplitter_MethodInfo_,
	nullptr,
	nullptr,
	_TransformingPathConsumer2D$CurveClipSplitter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.TransformingPathConsumer2D"
};

$Object* allocate$TransformingPathConsumer2D$CurveClipSplitter($Class* clazz) {
	return $of($alloc(TransformingPathConsumer2D$CurveClipSplitter));
}

double TransformingPathConsumer2D$CurveClipSplitter::LEN_TH = 0.0;
bool TransformingPathConsumer2D$CurveClipSplitter::DO_CHECK_LENGTH = false;

void TransformingPathConsumer2D$CurveClipSplitter::init$($RendererContext* rdrCtx) {
	$set(this, clipRectPad, $new($doubles, 4));
	this->init_clipRectPad = false;
	$set(this, middle, $new($doubles, TransformingPathConsumer2D$CurveClipSplitter::MAX_N_CURVES * 8 + 2));
	$set(this, subdivTs, $new($doubles, TransformingPathConsumer2D$CurveClipSplitter::MAX_N_CURVES));
	$set(this, rdrCtx, rdrCtx);
	$set(this, clipRect, $nc(rdrCtx)->clipRect);
	$set(this, curve, rdrCtx->curve);
}

void TransformingPathConsumer2D$CurveClipSplitter::init() {
	$useLocalCurrentObjectStackCache();
	this->init_clipRectPad = true;
	if (TransformingPathConsumer2D$CurveClipSplitter::DO_CHECK_LENGTH) {
		this->minLength = ($nc(this->rdrCtx)->clipInvScale == 0.0) ? TransformingPathConsumer2D$CurveClipSplitter::LEN_TH : (TransformingPathConsumer2D$CurveClipSplitter::LEN_TH * $nc(this->rdrCtx)->clipInvScale);
		$init($MarlinConst);
		if ($MarlinConst::DO_LOG_CLIP) {
			$MarlinUtils::logInfo($$str({"CurveClipSplitter.minLength = "_s, $$str(this->minLength)}));
		}
	}
}

void TransformingPathConsumer2D$CurveClipSplitter::initPaddedClip() {
	$useLocalCurrentObjectStackCache();
	$var($doubles, _clipRect, this->clipRect);
	$var($doubles, _clipRectPad, this->clipRectPad);
	$nc(_clipRectPad)->set(0, $nc(_clipRect)->get(0) - 0.25);
	_clipRectPad->set(1, _clipRect->get(1) + 0.25);
	_clipRectPad->set(2, _clipRect->get(2) - 0.25);
	_clipRectPad->set(3, _clipRect->get(3) + 0.25);
}

bool TransformingPathConsumer2D$CurveClipSplitter::splitLine(double x0, double y0, double x1, double y1, int32_t outCodeOR, $DPathConsumer2D* out) {
	if (TransformingPathConsumer2D$CurveClipSplitter::DO_CHECK_LENGTH && $Helpers::fastLineLen(x0, y0, x1, y1) <= this->minLength) {
		return false;
	}
	$var($doubles, mid, this->middle);
	$nc(mid)->set(0, x0);
	mid->set(1, y0);
	mid->set(2, x1);
	mid->set(3, y1);
	return subdivideAtIntersections(4, outCodeOR, out);
}

bool TransformingPathConsumer2D$CurveClipSplitter::splitQuad(double x0, double y0, double x1, double y1, double x2, double y2, int32_t outCodeOR, $DPathConsumer2D* out) {
	if (TransformingPathConsumer2D$CurveClipSplitter::DO_CHECK_LENGTH && $Helpers::fastQuadLen(x0, y0, x1, y1, x2, y2) <= this->minLength) {
		return false;
	}
	$var($doubles, mid, this->middle);
	$nc(mid)->set(0, x0);
	mid->set(1, y0);
	mid->set(2, x1);
	mid->set(3, y1);
	mid->set(4, x2);
	mid->set(5, y2);
	return subdivideAtIntersections(6, outCodeOR, out);
}

bool TransformingPathConsumer2D$CurveClipSplitter::splitCurve(double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3, int32_t outCodeOR, $DPathConsumer2D* out) {
	if (TransformingPathConsumer2D$CurveClipSplitter::DO_CHECK_LENGTH && $Helpers::fastCurvelen(x0, y0, x1, y1, x2, y2, x3, y3) <= this->minLength) {
		return false;
	}
	$var($doubles, mid, this->middle);
	$nc(mid)->set(0, x0);
	mid->set(1, y0);
	mid->set(2, x1);
	mid->set(3, y1);
	mid->set(4, x2);
	mid->set(5, y2);
	mid->set(6, x3);
	mid->set(7, y3);
	return subdivideAtIntersections(8, outCodeOR, out);
}

bool TransformingPathConsumer2D$CurveClipSplitter::subdivideAtIntersections(int32_t type, int32_t outCodeOR, $DPathConsumer2D* out) {
	$useLocalCurrentObjectStackCache();
	$var($doubles, mid, this->middle);
	$var($doubles, subTs, this->subdivTs);
	if (this->init_clipRectPad) {
		this->init_clipRectPad = false;
		initPaddedClip();
	}
	int32_t nSplits = $Helpers::findClipPoints(this->curve, mid, subTs, type, outCodeOR, this->clipRectPad);
	if (nSplits == 0) {
		return false;
	}
	double prevT = 0.0;
	{
		int32_t i = 0;
		int32_t off = 0;
		for (; i < nSplits; ++i, off += type) {
			double t = $nc(subTs)->get(i);
			$Helpers::subdivideAt((t - prevT) / (1.0 - prevT), mid, off, mid, off, type);
			prevT = t;
		}
	}
	{
		int32_t i = 0;
		int32_t off = 0;
		for (; i <= nSplits; ++i, off += type) {
			emitCurrent(type, mid, off, out);
		}
	}
	return true;
}

void TransformingPathConsumer2D$CurveClipSplitter::emitCurrent(int32_t type, $doubles* pts, int32_t off, $DPathConsumer2D* out) {
	$init(TransformingPathConsumer2D$CurveClipSplitter);
	if (type == 8) {
		$nc(out)->curveTo($nc(pts)->get(off + 2), pts->get(off + 3), pts->get(off + 4), pts->get(off + 5), pts->get(off + 6), pts->get(off + 7));
	} else if (type == 4) {
		$nc(out)->lineTo($nc(pts)->get(off + 2), pts->get(off + 3));
	} else {
		$nc(out)->quadTo($nc(pts)->get(off + 2), pts->get(off + 3), pts->get(off + 4), pts->get(off + 5));
	}
}

void clinit$TransformingPathConsumer2D$CurveClipSplitter($Class* class$) {
	TransformingPathConsumer2D$CurveClipSplitter::LEN_TH = $MarlinProperties::getSubdividerMinLength();
	TransformingPathConsumer2D$CurveClipSplitter::DO_CHECK_LENGTH = (TransformingPathConsumer2D$CurveClipSplitter::LEN_TH > 0.0);
}

TransformingPathConsumer2D$CurveClipSplitter::TransformingPathConsumer2D$CurveClipSplitter() {
}

$Class* TransformingPathConsumer2D$CurveClipSplitter::load$($String* name, bool initialize) {
	$loadClass(TransformingPathConsumer2D$CurveClipSplitter, name, initialize, &_TransformingPathConsumer2D$CurveClipSplitter_ClassInfo_, clinit$TransformingPathConsumer2D$CurveClipSplitter, allocate$TransformingPathConsumer2D$CurveClipSplitter);
	return class$;
}

$Class* TransformingPathConsumer2D$CurveClipSplitter::class$ = nullptr;

		} // marlin
	} // java2d
} // sun