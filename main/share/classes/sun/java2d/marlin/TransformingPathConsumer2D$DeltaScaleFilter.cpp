#include <sun/java2d/marlin/TransformingPathConsumer2D$DeltaScaleFilter.h>

#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $TransformingPathConsumer2D = ::sun::java2d::marlin::TransformingPathConsumer2D;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _TransformingPathConsumer2D$DeltaScaleFilter_FieldInfo_[] = {
	{"out", "Lsun/java2d/marlin/DPathConsumer2D;", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$DeltaScaleFilter, out)},
	{"sx", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$DeltaScaleFilter, sx)},
	{"sy", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$DeltaScaleFilter, sy)},
	{}
};

$MethodInfo _TransformingPathConsumer2D$DeltaScaleFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D$DeltaScaleFilter::*)()>(&TransformingPathConsumer2D$DeltaScaleFilter::init$))},
	{"closePath", "()V", nullptr, $PUBLIC},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC},
	{"init", "(Lsun/java2d/marlin/DPathConsumer2D;DD)Lsun/java2d/marlin/TransformingPathConsumer2D$DeltaScaleFilter;", nullptr, 0, $method(static_cast<TransformingPathConsumer2D$DeltaScaleFilter*(TransformingPathConsumer2D$DeltaScaleFilter::*)($DPathConsumer2D*,double,double)>(&TransformingPathConsumer2D$DeltaScaleFilter::init))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC},
	{"moveTo", "(DD)V", nullptr, $PUBLIC},
	{"pathDone", "()V", nullptr, $PUBLIC},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransformingPathConsumer2D$DeltaScaleFilter_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.TransformingPathConsumer2D$DeltaScaleFilter", "sun.java2d.marlin.TransformingPathConsumer2D", "DeltaScaleFilter", $STATIC | $FINAL},
	{}
};

$ClassInfo _TransformingPathConsumer2D$DeltaScaleFilter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.TransformingPathConsumer2D$DeltaScaleFilter",
	"java.lang.Object",
	"sun.java2d.marlin.DPathConsumer2D",
	_TransformingPathConsumer2D$DeltaScaleFilter_FieldInfo_,
	_TransformingPathConsumer2D$DeltaScaleFilter_MethodInfo_,
	nullptr,
	nullptr,
	_TransformingPathConsumer2D$DeltaScaleFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.TransformingPathConsumer2D"
};

$Object* allocate$TransformingPathConsumer2D$DeltaScaleFilter($Class* clazz) {
	return $of($alloc(TransformingPathConsumer2D$DeltaScaleFilter));
}

void TransformingPathConsumer2D$DeltaScaleFilter::init$() {
}

TransformingPathConsumer2D$DeltaScaleFilter* TransformingPathConsumer2D$DeltaScaleFilter::init($DPathConsumer2D* out, double mxx, double myy) {
	$set(this, out, out);
	this->sx = mxx;
	this->sy = myy;
	return this;
}

void TransformingPathConsumer2D$DeltaScaleFilter::moveTo(double x0, double y0) {
	$nc(this->out)->moveTo(x0 * this->sx, y0 * this->sy);
}

void TransformingPathConsumer2D$DeltaScaleFilter::lineTo(double x1, double y1) {
	$nc(this->out)->lineTo(x1 * this->sx, y1 * this->sy);
}

void TransformingPathConsumer2D$DeltaScaleFilter::quadTo(double x1, double y1, double x2, double y2) {
	$nc(this->out)->quadTo(x1 * this->sx, y1 * this->sy, x2 * this->sx, y2 * this->sy);
}

void TransformingPathConsumer2D$DeltaScaleFilter::curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	$nc(this->out)->curveTo(x1 * this->sx, y1 * this->sy, x2 * this->sx, y2 * this->sy, x3 * this->sx, y3 * this->sy);
}

void TransformingPathConsumer2D$DeltaScaleFilter::closePath() {
	$nc(this->out)->closePath();
}

void TransformingPathConsumer2D$DeltaScaleFilter::pathDone() {
	$nc(this->out)->pathDone();
}

int64_t TransformingPathConsumer2D$DeltaScaleFilter::getNativeConsumer() {
	return 0;
}

TransformingPathConsumer2D$DeltaScaleFilter::TransformingPathConsumer2D$DeltaScaleFilter() {
}

$Class* TransformingPathConsumer2D$DeltaScaleFilter::load$($String* name, bool initialize) {
	$loadClass(TransformingPathConsumer2D$DeltaScaleFilter, name, initialize, &_TransformingPathConsumer2D$DeltaScaleFilter_ClassInfo_, allocate$TransformingPathConsumer2D$DeltaScaleFilter);
	return class$;
}

$Class* TransformingPathConsumer2D$DeltaScaleFilter::class$ = nullptr;

		} // marlin
	} // java2d
} // sun