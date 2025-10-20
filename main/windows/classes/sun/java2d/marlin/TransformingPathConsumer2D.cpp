#include <sun/java2d/marlin/TransformingPathConsumer2D.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Double.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$ClosedPathDetector.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$DeltaScaleFilter.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$DeltaTransformFilter.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$Path2DWrapper.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$PathClipFilter.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$PathTracer.h>
#include <jcpp.h>

#undef CLIP_RECT_PADDING
#undef DO_LOG_CLIP

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Path2D$Double = ::java::awt::geom::Path2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;
using $RendererContext = ::sun::java2d::marlin::RendererContext;
using $TransformingPathConsumer2D$ClosedPathDetector = ::sun::java2d::marlin::TransformingPathConsumer2D$ClosedPathDetector;
using $TransformingPathConsumer2D$DeltaScaleFilter = ::sun::java2d::marlin::TransformingPathConsumer2D$DeltaScaleFilter;
using $TransformingPathConsumer2D$DeltaTransformFilter = ::sun::java2d::marlin::TransformingPathConsumer2D$DeltaTransformFilter;
using $TransformingPathConsumer2D$Path2DWrapper = ::sun::java2d::marlin::TransformingPathConsumer2D$Path2DWrapper;
using $TransformingPathConsumer2D$PathClipFilter = ::sun::java2d::marlin::TransformingPathConsumer2D$PathClipFilter;
using $TransformingPathConsumer2D$PathTracer = ::sun::java2d::marlin::TransformingPathConsumer2D$PathTracer;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _TransformingPathConsumer2D_FieldInfo_[] = {
	{"CLIP_RECT_PADDING", "D", nullptr, $STATIC | $FINAL, $staticField(TransformingPathConsumer2D, CLIP_RECT_PADDING)},
	{"rdrCtx", "Lsun/java2d/marlin/RendererContext;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, rdrCtx)},
	{"cpDetector", "Lsun/java2d/marlin/TransformingPathConsumer2D$ClosedPathDetector;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, cpDetector)},
	{"pathClipper", "Lsun/java2d/marlin/TransformingPathConsumer2D$PathClipFilter;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, pathClipper$)},
	{"wp_Path2DWrapper", "Lsun/java2d/marlin/TransformingPathConsumer2D$Path2DWrapper;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, wp_Path2DWrapper)},
	{"dt_DeltaScaleFilter", "Lsun/java2d/marlin/TransformingPathConsumer2D$DeltaScaleFilter;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, dt_DeltaScaleFilter)},
	{"dt_DeltaTransformFilter", "Lsun/java2d/marlin/TransformingPathConsumer2D$DeltaTransformFilter;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, dt_DeltaTransformFilter)},
	{"iv_DeltaScaleFilter", "Lsun/java2d/marlin/TransformingPathConsumer2D$DeltaScaleFilter;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, iv_DeltaScaleFilter)},
	{"iv_DeltaTransformFilter", "Lsun/java2d/marlin/TransformingPathConsumer2D$DeltaTransformFilter;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, iv_DeltaTransformFilter)},
	{"tracerInput", "Lsun/java2d/marlin/TransformingPathConsumer2D$PathTracer;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, tracerInput)},
	{"tracerCPDetector", "Lsun/java2d/marlin/TransformingPathConsumer2D$PathTracer;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, tracerCPDetector)},
	{"tracerFiller", "Lsun/java2d/marlin/TransformingPathConsumer2D$PathTracer;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, tracerFiller)},
	{"tracerStroker", "Lsun/java2d/marlin/TransformingPathConsumer2D$PathTracer;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, tracerStroker)},
	{"tracerDasher", "Lsun/java2d/marlin/TransformingPathConsumer2D$PathTracer;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D, tracerDasher)},
	{}
};

$MethodInfo _TransformingPathConsumer2D_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/marlin/RendererContext;)V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D::*)($RendererContext*)>(&TransformingPathConsumer2D::init$))},
	{"adjustClipInverseDelta", "([DDDDD)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)($doubles*,double,double,double,double)>(&TransformingPathConsumer2D::adjustClipInverseDelta))},
	{"adjustClipScale", "([DDD)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)($doubles*,double,double)>(&TransformingPathConsumer2D::adjustClipScale))},
	{"deltaTransformConsumer", "(Lsun/java2d/marlin/DPathConsumer2D;Ljava/awt/geom/AffineTransform;)Lsun/java2d/marlin/DPathConsumer2D;", nullptr, 0, $method(static_cast<$DPathConsumer2D*(TransformingPathConsumer2D::*)($DPathConsumer2D*,$AffineTransform*)>(&TransformingPathConsumer2D::deltaTransformConsumer))},
	{"detectClosedPath", "(Lsun/java2d/marlin/DPathConsumer2D;)Lsun/java2d/marlin/DPathConsumer2D;", nullptr, 0, $method(static_cast<$DPathConsumer2D*(TransformingPathConsumer2D::*)($DPathConsumer2D*)>(&TransformingPathConsumer2D::detectClosedPath))},
	{"inverseDeltaTransformConsumer", "(Lsun/java2d/marlin/DPathConsumer2D;Ljava/awt/geom/AffineTransform;)Lsun/java2d/marlin/DPathConsumer2D;", nullptr, 0, $method(static_cast<$DPathConsumer2D*(TransformingPathConsumer2D::*)($DPathConsumer2D*,$AffineTransform*)>(&TransformingPathConsumer2D::inverseDeltaTransformConsumer))},
	{"pathClipper", "(Lsun/java2d/marlin/DPathConsumer2D;)Lsun/java2d/marlin/DPathConsumer2D;", nullptr, 0, $method(static_cast<$DPathConsumer2D*(TransformingPathConsumer2D::*)($DPathConsumer2D*)>(&TransformingPathConsumer2D::pathClipper))},
	{"traceClosedPathDetector", "(Lsun/java2d/marlin/DPathConsumer2D;)Lsun/java2d/marlin/DPathConsumer2D;", nullptr, 0, $method(static_cast<$DPathConsumer2D*(TransformingPathConsumer2D::*)($DPathConsumer2D*)>(&TransformingPathConsumer2D::traceClosedPathDetector))},
	{"traceDasher", "(Lsun/java2d/marlin/DPathConsumer2D;)Lsun/java2d/marlin/DPathConsumer2D;", nullptr, 0, $method(static_cast<$DPathConsumer2D*(TransformingPathConsumer2D::*)($DPathConsumer2D*)>(&TransformingPathConsumer2D::traceDasher))},
	{"traceFiller", "(Lsun/java2d/marlin/DPathConsumer2D;)Lsun/java2d/marlin/DPathConsumer2D;", nullptr, 0, $method(static_cast<$DPathConsumer2D*(TransformingPathConsumer2D::*)($DPathConsumer2D*)>(&TransformingPathConsumer2D::traceFiller))},
	{"traceInput", "(Lsun/java2d/marlin/DPathConsumer2D;)Lsun/java2d/marlin/DPathConsumer2D;", nullptr, 0, $method(static_cast<$DPathConsumer2D*(TransformingPathConsumer2D::*)($DPathConsumer2D*)>(&TransformingPathConsumer2D::traceInput))},
	{"traceStroker", "(Lsun/java2d/marlin/DPathConsumer2D;)Lsun/java2d/marlin/DPathConsumer2D;", nullptr, 0, $method(static_cast<$DPathConsumer2D*(TransformingPathConsumer2D::*)($DPathConsumer2D*)>(&TransformingPathConsumer2D::traceStroker))},
	{"wrapPath2D", "(Ljava/awt/geom/Path2D$Double;)Lsun/java2d/marlin/DPathConsumer2D;", nullptr, 0, $method(static_cast<$DPathConsumer2D*(TransformingPathConsumer2D::*)($Path2D$Double*)>(&TransformingPathConsumer2D::wrapPath2D))},
	{}
};

$InnerClassInfo _TransformingPathConsumer2D_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.TransformingPathConsumer2D$PathTracer", "sun.java2d.marlin.TransformingPathConsumer2D", "PathTracer", $STATIC | $FINAL},
	{"sun.java2d.marlin.TransformingPathConsumer2D$CurveBasicMonotonizer", "sun.java2d.marlin.TransformingPathConsumer2D", "CurveBasicMonotonizer", $STATIC | $FINAL},
	{"sun.java2d.marlin.TransformingPathConsumer2D$CurveClipSplitter", "sun.java2d.marlin.TransformingPathConsumer2D", "CurveClipSplitter", $STATIC | $FINAL},
	{"sun.java2d.marlin.TransformingPathConsumer2D$PathClipFilter", "sun.java2d.marlin.TransformingPathConsumer2D", "PathClipFilter", $STATIC | $FINAL},
	{"sun.java2d.marlin.TransformingPathConsumer2D$ClosedPathDetector", "sun.java2d.marlin.TransformingPathConsumer2D", "ClosedPathDetector", $STATIC | $FINAL},
	{"sun.java2d.marlin.TransformingPathConsumer2D$Path2DWrapper", "sun.java2d.marlin.TransformingPathConsumer2D", "Path2DWrapper", $STATIC | $FINAL},
	{"sun.java2d.marlin.TransformingPathConsumer2D$DeltaTransformFilter", "sun.java2d.marlin.TransformingPathConsumer2D", "DeltaTransformFilter", $STATIC | $FINAL},
	{"sun.java2d.marlin.TransformingPathConsumer2D$DeltaScaleFilter", "sun.java2d.marlin.TransformingPathConsumer2D", "DeltaScaleFilter", $STATIC | $FINAL},
	{}
};

$ClassInfo _TransformingPathConsumer2D_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.TransformingPathConsumer2D",
	"java.lang.Object",
	nullptr,
	_TransformingPathConsumer2D_FieldInfo_,
	_TransformingPathConsumer2D_MethodInfo_,
	nullptr,
	nullptr,
	_TransformingPathConsumer2D_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.marlin.TransformingPathConsumer2D$PathTracer,sun.java2d.marlin.TransformingPathConsumer2D$CurveBasicMonotonizer,sun.java2d.marlin.TransformingPathConsumer2D$CurveClipSplitter,sun.java2d.marlin.TransformingPathConsumer2D$PathClipFilter,sun.java2d.marlin.TransformingPathConsumer2D$ClosedPathDetector,sun.java2d.marlin.TransformingPathConsumer2D$Path2DWrapper,sun.java2d.marlin.TransformingPathConsumer2D$DeltaTransformFilter,sun.java2d.marlin.TransformingPathConsumer2D$DeltaScaleFilter"
};

$Object* allocate$TransformingPathConsumer2D($Class* clazz) {
	return $of($alloc(TransformingPathConsumer2D));
}

double TransformingPathConsumer2D::CLIP_RECT_PADDING = 0.0;

void TransformingPathConsumer2D::init$($RendererContext* rdrCtx) {
	$set(this, wp_Path2DWrapper, $new($TransformingPathConsumer2D$Path2DWrapper));
	$set(this, dt_DeltaScaleFilter, $new($TransformingPathConsumer2D$DeltaScaleFilter));
	$set(this, dt_DeltaTransformFilter, $new($TransformingPathConsumer2D$DeltaTransformFilter));
	$set(this, iv_DeltaScaleFilter, $new($TransformingPathConsumer2D$DeltaScaleFilter));
	$set(this, iv_DeltaTransformFilter, $new($TransformingPathConsumer2D$DeltaTransformFilter));
	$set(this, tracerInput, $new($TransformingPathConsumer2D$PathTracer, "[Input]"_s));
	$set(this, tracerCPDetector, $new($TransformingPathConsumer2D$PathTracer, "ClosedPathDetector"_s));
	$set(this, tracerFiller, $new($TransformingPathConsumer2D$PathTracer, "Filler"_s));
	$set(this, tracerStroker, $new($TransformingPathConsumer2D$PathTracer, "Stroker"_s));
	$set(this, tracerDasher, $new($TransformingPathConsumer2D$PathTracer, "Dasher"_s));
	$set(this, rdrCtx, rdrCtx);
	$set(this, cpDetector, $new($TransformingPathConsumer2D$ClosedPathDetector, rdrCtx));
	$set(this, pathClipper$, $new($TransformingPathConsumer2D$PathClipFilter, rdrCtx));
}

$DPathConsumer2D* TransformingPathConsumer2D::wrapPath2D($Path2D$Double* p2d) {
	return $nc(this->wp_Path2DWrapper)->init(p2d);
}

$DPathConsumer2D* TransformingPathConsumer2D::traceInput($DPathConsumer2D* out) {
	return $nc(this->tracerInput)->init(out);
}

$DPathConsumer2D* TransformingPathConsumer2D::traceClosedPathDetector($DPathConsumer2D* out) {
	return $nc(this->tracerCPDetector)->init(out);
}

$DPathConsumer2D* TransformingPathConsumer2D::traceFiller($DPathConsumer2D* out) {
	return $nc(this->tracerFiller)->init(out);
}

$DPathConsumer2D* TransformingPathConsumer2D::traceStroker($DPathConsumer2D* out) {
	return $nc(this->tracerStroker)->init(out);
}

$DPathConsumer2D* TransformingPathConsumer2D::traceDasher($DPathConsumer2D* out) {
	return $nc(this->tracerDasher)->init(out);
}

$DPathConsumer2D* TransformingPathConsumer2D::detectClosedPath($DPathConsumer2D* out) {
	return $nc(this->cpDetector)->init(out);
}

$DPathConsumer2D* TransformingPathConsumer2D::pathClipper($DPathConsumer2D* out) {
	return $nc(this->pathClipper$)->init(out);
}

$DPathConsumer2D* TransformingPathConsumer2D::deltaTransformConsumer($DPathConsumer2D* out, $AffineTransform* at) {
	if (at == nullptr) {
		return out;
	}
	double mxx = $nc(at)->getScaleX();
	double mxy = at->getShearX();
	double myx = at->getShearY();
	double myy = at->getScaleY();
	if (mxy == 0.0 && myx == 0.0) {
		if (mxx == 1.0 && myy == 1.0) {
			return out;
		} else {
			if ($nc(this->rdrCtx)->doClip) {
				$nc(this->rdrCtx)->clipInvScale = adjustClipScale($nc(this->rdrCtx)->clipRect, mxx, myy);
			}
			return $nc(this->dt_DeltaScaleFilter)->init(out, mxx, myy);
		}
	} else {
		if ($nc(this->rdrCtx)->doClip) {
			$nc(this->rdrCtx)->clipInvScale = adjustClipInverseDelta($nc(this->rdrCtx)->clipRect, mxx, mxy, myx, myy);
		}
		return $nc(this->dt_DeltaTransformFilter)->init(out, mxx, mxy, myx, myy);
	}
}

double TransformingPathConsumer2D::adjustClipScale($doubles* clipRect, double mxx, double myy) {
	$init(TransformingPathConsumer2D);
	$useLocalCurrentObjectStackCache();
	double scaleY = 1.0 / myy;
	(*$nc(clipRect))[0] *= scaleY;
	(*clipRect)[1] *= scaleY;
	if (clipRect->get(1) < clipRect->get(0)) {
		double tmp = clipRect->get(0);
		clipRect->set(0, clipRect->get(1));
		clipRect->set(1, tmp);
	}
	double scaleX = 1.0 / mxx;
	(*clipRect)[2] *= scaleX;
	(*clipRect)[3] *= scaleX;
	if (clipRect->get(3) < clipRect->get(2)) {
		double tmp = clipRect->get(2);
		clipRect->set(2, clipRect->get(3));
		clipRect->set(3, tmp);
	}
	$init($MarlinConst);
	if ($MarlinConst::DO_LOG_CLIP) {
		$MarlinUtils::logInfo($$str({"clipRect (ClipScale): "_s, $($Arrays::toString(clipRect))}));
	}
	double var$0 = 0.5;
	double var$2 = $Math::abs(scaleX);
	double var$1 = (var$2 + $Math::abs(scaleY));
	return var$0 * var$1;
}

double TransformingPathConsumer2D::adjustClipInverseDelta($doubles* clipRect, double mxx, double mxy, double myx, double myy) {
	$init(TransformingPathConsumer2D);
	$useLocalCurrentObjectStackCache();
	double det = mxx * myy - mxy * myx;
	double imxx = myy / det;
	double imxy = -mxy / det;
	double imyx = -myx / det;
	double imyy = mxx / det;
	double xmin = 0.0;
	double xmax = 0.0;
	double ymin = 0.0;
	double ymax = 0.0;
	double x = 0.0;
	double y = 0.0;
	x = $nc(clipRect)->get(2) * imxx + clipRect->get(0) * imxy;
	y = clipRect->get(2) * imyx + clipRect->get(0) * imyy;
	xmin = (xmax = x);
	ymin = (ymax = y);
	x = clipRect->get(3) * imxx + clipRect->get(0) * imxy;
	y = clipRect->get(3) * imyx + clipRect->get(0) * imyy;
	if (x < xmin) {
		xmin = x;
	} else if (x > xmax) {
		xmax = x;
	}
	if (y < ymin) {
		ymin = y;
	} else if (y > ymax) {
		ymax = y;
	}
	x = clipRect->get(2) * imxx + clipRect->get(1) * imxy;
	y = clipRect->get(2) * imyx + clipRect->get(1) * imyy;
	if (x < xmin) {
		xmin = x;
	} else if (x > xmax) {
		xmax = x;
	}
	if (y < ymin) {
		ymin = y;
	} else if (y > ymax) {
		ymax = y;
	}
	x = clipRect->get(3) * imxx + clipRect->get(1) * imxy;
	y = clipRect->get(3) * imyx + clipRect->get(1) * imyy;
	if (x < xmin) {
		xmin = x;
	} else if (x > xmax) {
		xmax = x;
	}
	if (y < ymin) {
		ymin = y;
	} else if (y > ymax) {
		ymax = y;
	}
	clipRect->set(0, ymin);
	clipRect->set(1, ymax);
	clipRect->set(2, xmin);
	clipRect->set(3, xmax);
	$init($MarlinConst);
	if ($MarlinConst::DO_LOG_CLIP) {
		$MarlinUtils::logInfo($$str({"clipRect (ClipInverseDelta): "_s, $($Arrays::toString(clipRect))}));
	}
	double scaleX = $Math::sqrt(imxx * imxx + imxy * imxy);
	double scaleY = $Math::sqrt(imyx * imyx + imyy * imyy);
	return 0.5 * (scaleX + scaleY);
}

$DPathConsumer2D* TransformingPathConsumer2D::inverseDeltaTransformConsumer($DPathConsumer2D* out, $AffineTransform* at) {
	if (at == nullptr) {
		return out;
	}
	double mxx = $nc(at)->getScaleX();
	double mxy = at->getShearX();
	double myx = at->getShearY();
	double myy = at->getScaleY();
	if (mxy == 0.0 && myx == 0.0) {
		if (mxx == 1.0 && myy == 1.0) {
			return out;
		} else {
			return $nc(this->iv_DeltaScaleFilter)->init(out, 1.0 / mxx, 1.0 / myy);
		}
	} else {
		double det = mxx * myy - mxy * myx;
		return $nc(this->iv_DeltaTransformFilter)->init(out, myy / det, -mxy / det, -myx / det, mxx / det);
	}
}

TransformingPathConsumer2D::TransformingPathConsumer2D() {
}

void clinit$TransformingPathConsumer2D($Class* class$) {
	TransformingPathConsumer2D::CLIP_RECT_PADDING = 0.25;
}

$Class* TransformingPathConsumer2D::load$($String* name, bool initialize) {
	$loadClass(TransformingPathConsumer2D, name, initialize, &_TransformingPathConsumer2D_ClassInfo_, clinit$TransformingPathConsumer2D, allocate$TransformingPathConsumer2D);
	return class$;
}

$Class* TransformingPathConsumer2D::class$ = nullptr;

		} // marlin
	} // java2d
} // sun