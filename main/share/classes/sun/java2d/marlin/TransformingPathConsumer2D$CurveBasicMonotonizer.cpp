#include <sun/java2d/marlin/TransformingPathConsumer2D$CurveBasicMonotonizer.h>

#include <sun/java2d/marlin/Curve.h>
#include <sun/java2d/marlin/Helpers.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D.h>
#include <jcpp.h>

#undef MAX_N_CURVES

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Curve = ::sun::java2d::marlin::Curve;
using $Helpers = ::sun::java2d::marlin::Helpers;
using $RendererContext = ::sun::java2d::marlin::RendererContext;
using $TransformingPathConsumer2D = ::sun::java2d::marlin::TransformingPathConsumer2D;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _TransformingPathConsumer2D$CurveBasicMonotonizer_FieldInfo_[] = {
	{"MAX_N_CURVES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransformingPathConsumer2D$CurveBasicMonotonizer, MAX_N_CURVES)},
	{"lw2", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$CurveBasicMonotonizer, lw2)},
	{"nbSplits", "I", nullptr, 0, $field(TransformingPathConsumer2D$CurveBasicMonotonizer, nbSplits)},
	{"middle", "[D", nullptr, $FINAL, $field(TransformingPathConsumer2D$CurveBasicMonotonizer, middle)},
	{"subdivTs", "[D", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D$CurveBasicMonotonizer, subdivTs)},
	{"curve", "Lsun/java2d/marlin/Curve;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D$CurveBasicMonotonizer, curve$)},
	{}
};

$MethodInfo _TransformingPathConsumer2D$CurveBasicMonotonizer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/marlin/RendererContext;)V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D$CurveBasicMonotonizer::*)($RendererContext*)>(&TransformingPathConsumer2D$CurveBasicMonotonizer::init$))},
	{"curve", "(DDDDDDDD)Lsun/java2d/marlin/TransformingPathConsumer2D$CurveBasicMonotonizer;", nullptr, 0, $method(static_cast<TransformingPathConsumer2D$CurveBasicMonotonizer*(TransformingPathConsumer2D$CurveBasicMonotonizer::*)(double,double,double,double,double,double,double,double)>(&TransformingPathConsumer2D$CurveBasicMonotonizer::curve))},
	{"init", "(D)V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D$CurveBasicMonotonizer::*)(double)>(&TransformingPathConsumer2D$CurveBasicMonotonizer::init))},
	{"quad", "(DDDDDD)Lsun/java2d/marlin/TransformingPathConsumer2D$CurveBasicMonotonizer;", nullptr, 0, $method(static_cast<TransformingPathConsumer2D$CurveBasicMonotonizer*(TransformingPathConsumer2D$CurveBasicMonotonizer::*)(double,double,double,double,double,double)>(&TransformingPathConsumer2D$CurveBasicMonotonizer::quad))},
	{}
};

$InnerClassInfo _TransformingPathConsumer2D$CurveBasicMonotonizer_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.TransformingPathConsumer2D$CurveBasicMonotonizer", "sun.java2d.marlin.TransformingPathConsumer2D", "CurveBasicMonotonizer", $STATIC | $FINAL},
	{}
};

$ClassInfo _TransformingPathConsumer2D$CurveBasicMonotonizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.TransformingPathConsumer2D$CurveBasicMonotonizer",
	"java.lang.Object",
	nullptr,
	_TransformingPathConsumer2D$CurveBasicMonotonizer_FieldInfo_,
	_TransformingPathConsumer2D$CurveBasicMonotonizer_MethodInfo_,
	nullptr,
	nullptr,
	_TransformingPathConsumer2D$CurveBasicMonotonizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.TransformingPathConsumer2D"
};

$Object* allocate$TransformingPathConsumer2D$CurveBasicMonotonizer($Class* clazz) {
	return $of($alloc(TransformingPathConsumer2D$CurveBasicMonotonizer));
}

void TransformingPathConsumer2D$CurveBasicMonotonizer::init$($RendererContext* rdrCtx) {
	$set(this, middle, $new($doubles, TransformingPathConsumer2D$CurveBasicMonotonizer::MAX_N_CURVES * 6 + 2));
	$set(this, subdivTs, $new($doubles, TransformingPathConsumer2D$CurveBasicMonotonizer::MAX_N_CURVES - 1));
	$set(this, curve$, $nc(rdrCtx)->curve);
}

void TransformingPathConsumer2D$CurveBasicMonotonizer::init(double lineWidth) {
	this->lw2 = (lineWidth * lineWidth) / 4.0;
}

TransformingPathConsumer2D$CurveBasicMonotonizer* TransformingPathConsumer2D$CurveBasicMonotonizer::curve(double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3) {
	$useLocalCurrentObjectStackCache();
	$var($doubles, mid, this->middle);
	$nc(mid)->set(0, x0);
	mid->set(1, y0);
	mid->set(2, x1);
	mid->set(3, y1);
	mid->set(4, x2);
	mid->set(5, y2);
	mid->set(6, x3);
	mid->set(7, y3);
	$var($doubles, subTs, this->subdivTs);
	int32_t nSplits = $Helpers::findSubdivPoints(this->curve$, mid, subTs, 8, this->lw2);
	double prevT = 0.0;
	{
		int32_t i = 0;
		int32_t off = 0;
		for (; i < nSplits; ++i, off += 6) {
			double t = $nc(subTs)->get(i);
			$Helpers::subdivideCubicAt((t - prevT) / (1.0 - prevT), mid, off, mid, off, off + 6);
			prevT = t;
		}
	}
	this->nbSplits = nSplits;
	return this;
}

TransformingPathConsumer2D$CurveBasicMonotonizer* TransformingPathConsumer2D$CurveBasicMonotonizer::quad(double x0, double y0, double x1, double y1, double x2, double y2) {
	$useLocalCurrentObjectStackCache();
	$var($doubles, mid, this->middle);
	$nc(mid)->set(0, x0);
	mid->set(1, y0);
	mid->set(2, x1);
	mid->set(3, y1);
	mid->set(4, x2);
	mid->set(5, y2);
	$var($doubles, subTs, this->subdivTs);
	int32_t nSplits = $Helpers::findSubdivPoints(this->curve$, mid, subTs, 6, this->lw2);
	double prevt = 0.0;
	{
		int32_t i = 0;
		int32_t off = 0;
		for (; i < nSplits; ++i, off += 4) {
			double t = $nc(subTs)->get(i);
			$Helpers::subdivideQuadAt((t - prevt) / (1.0 - prevt), mid, off, mid, off, off + 4);
			prevt = t;
		}
	}
	this->nbSplits = nSplits;
	return this;
}

TransformingPathConsumer2D$CurveBasicMonotonizer::TransformingPathConsumer2D$CurveBasicMonotonizer() {
}

$Class* TransformingPathConsumer2D$CurveBasicMonotonizer::load$($String* name, bool initialize) {
	$loadClass(TransformingPathConsumer2D$CurveBasicMonotonizer, name, initialize, &_TransformingPathConsumer2D$CurveBasicMonotonizer_ClassInfo_, allocate$TransformingPathConsumer2D$CurveBasicMonotonizer);
	return class$;
}

$Class* TransformingPathConsumer2D$CurveBasicMonotonizer::class$ = nullptr;

		} // marlin
	} // java2d
} // sun