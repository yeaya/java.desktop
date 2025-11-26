#include <sun/java2d/marlin/TransformingPathConsumer2D$ClosedPathDetector.h>

#include <java/lang/InternalError.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/Helpers$PolyStack.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <sun/java2d/marlin/RendererStats.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D.h>
#include <sun/java2d/marlin/stats/Histogram.h>
#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $Helpers$PolyStack = ::sun::java2d::marlin::Helpers$PolyStack;
using $RendererContext = ::sun::java2d::marlin::RendererContext;
using $RendererStats = ::sun::java2d::marlin::RendererStats;
using $TransformingPathConsumer2D = ::sun::java2d::marlin::TransformingPathConsumer2D;
using $Histogram = ::sun::java2d::marlin::stats::Histogram;
using $StatLong = ::sun::java2d::marlin::stats::StatLong;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _TransformingPathConsumer2D$ClosedPathDetector_FieldInfo_[] = {
	{"rdrCtx", "Lsun/java2d/marlin/RendererContext;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D$ClosedPathDetector, rdrCtx)},
	{"stack", "Lsun/java2d/marlin/Helpers$PolyStack;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D$ClosedPathDetector, stack)},
	{"out", "Lsun/java2d/marlin/DPathConsumer2D;", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$ClosedPathDetector, out)},
	{}
};

$MethodInfo _TransformingPathConsumer2D$ClosedPathDetector_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/marlin/RendererContext;)V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D$ClosedPathDetector::*)($RendererContext*)>(&TransformingPathConsumer2D$ClosedPathDetector::init$))},
	{"closePath", "()V", nullptr, $PUBLIC},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D$ClosedPathDetector::*)()>(&TransformingPathConsumer2D$ClosedPathDetector::dispose))},
	{"finish", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(TransformingPathConsumer2D$ClosedPathDetector::*)(bool)>(&TransformingPathConsumer2D$ClosedPathDetector::finish))},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC},
	{"init", "(Lsun/java2d/marlin/DPathConsumer2D;)Lsun/java2d/marlin/TransformingPathConsumer2D$ClosedPathDetector;", nullptr, 0, $method(static_cast<TransformingPathConsumer2D$ClosedPathDetector*(TransformingPathConsumer2D$ClosedPathDetector::*)($DPathConsumer2D*)>(&TransformingPathConsumer2D$ClosedPathDetector::init))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC},
	{"moveTo", "(DD)V", nullptr, $PUBLIC},
	{"pathDone", "()V", nullptr, $PUBLIC},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransformingPathConsumer2D$ClosedPathDetector_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.TransformingPathConsumer2D$ClosedPathDetector", "sun.java2d.marlin.TransformingPathConsumer2D", "ClosedPathDetector", $STATIC | $FINAL},
	{}
};

$ClassInfo _TransformingPathConsumer2D$ClosedPathDetector_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.TransformingPathConsumer2D$ClosedPathDetector",
	"java.lang.Object",
	"sun.java2d.marlin.DPathConsumer2D",
	_TransformingPathConsumer2D$ClosedPathDetector_FieldInfo_,
	_TransformingPathConsumer2D$ClosedPathDetector_MethodInfo_,
	nullptr,
	nullptr,
	_TransformingPathConsumer2D$ClosedPathDetector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.TransformingPathConsumer2D"
};

$Object* allocate$TransformingPathConsumer2D$ClosedPathDetector($Class* clazz) {
	return $of($alloc(TransformingPathConsumer2D$ClosedPathDetector));
}

void TransformingPathConsumer2D$ClosedPathDetector::init$($RendererContext* rdrCtx) {
	$set(this, rdrCtx, rdrCtx);
	$set(this, stack, ($nc(rdrCtx)->stats$ != nullptr) ? $new($Helpers$PolyStack, rdrCtx, $nc($nc(rdrCtx)->stats$)->stat_cpd_polystack_types, $nc(rdrCtx->stats$)->stat_cpd_polystack_curves, $nc(rdrCtx->stats$)->hist_cpd_polystack_curves, $nc(rdrCtx->stats$)->stat_array_cpd_polystack_curves, $nc(rdrCtx->stats$)->stat_array_cpd_polystack_types) : $new($Helpers$PolyStack, rdrCtx));
}

TransformingPathConsumer2D$ClosedPathDetector* TransformingPathConsumer2D$ClosedPathDetector::init($DPathConsumer2D* out) {
	$set(this, out, out);
	return this;
}

void TransformingPathConsumer2D$ClosedPathDetector::dispose() {
	$nc(this->stack)->dispose();
}

void TransformingPathConsumer2D$ClosedPathDetector::pathDone() {
	finish(false);
	$nc(this->out)->pathDone();
	dispose();
}

void TransformingPathConsumer2D$ClosedPathDetector::closePath() {
	finish(true);
	$nc(this->out)->closePath();
}

void TransformingPathConsumer2D$ClosedPathDetector::moveTo(double x0, double y0) {
	finish(false);
	$nc(this->out)->moveTo(x0, y0);
}

void TransformingPathConsumer2D$ClosedPathDetector::finish(bool closed) {
	$nc(this->rdrCtx)->closedPath = closed;
	$nc(this->stack)->pullAll(this->out);
}

void TransformingPathConsumer2D$ClosedPathDetector::lineTo(double x1, double y1) {
	$nc(this->stack)->pushLine(x1, y1);
}

void TransformingPathConsumer2D$ClosedPathDetector::curveTo(double x3, double y3, double x2, double y2, double x1, double y1) {
	$nc(this->stack)->pushCubic(x1, y1, x2, y2, x3, y3);
}

void TransformingPathConsumer2D$ClosedPathDetector::quadTo(double x2, double y2, double x1, double y1) {
	$nc(this->stack)->pushQuad(x1, y1, x2, y2);
}

int64_t TransformingPathConsumer2D$ClosedPathDetector::getNativeConsumer() {
	$throwNew($InternalError, "Not using a native peer"_s);
	$shouldNotReachHere();
}

TransformingPathConsumer2D$ClosedPathDetector::TransformingPathConsumer2D$ClosedPathDetector() {
}

$Class* TransformingPathConsumer2D$ClosedPathDetector::load$($String* name, bool initialize) {
	$loadClass(TransformingPathConsumer2D$ClosedPathDetector, name, initialize, &_TransformingPathConsumer2D$ClosedPathDetector_ClassInfo_, allocate$TransformingPathConsumer2D$ClosedPathDetector);
	return class$;
}

$Class* TransformingPathConsumer2D$ClosedPathDetector::class$ = nullptr;

		} // marlin
	} // java2d
} // sun