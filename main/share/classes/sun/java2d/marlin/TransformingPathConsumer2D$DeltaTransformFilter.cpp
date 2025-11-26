#include <sun/java2d/marlin/TransformingPathConsumer2D$DeltaTransformFilter.h>

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

$FieldInfo _TransformingPathConsumer2D$DeltaTransformFilter_FieldInfo_[] = {
	{"out", "Lsun/java2d/marlin/DPathConsumer2D;", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$DeltaTransformFilter, out)},
	{"mxx", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$DeltaTransformFilter, mxx)},
	{"mxy", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$DeltaTransformFilter, mxy)},
	{"myx", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$DeltaTransformFilter, myx)},
	{"myy", "D", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$DeltaTransformFilter, myy)},
	{}
};

$MethodInfo _TransformingPathConsumer2D$DeltaTransformFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D$DeltaTransformFilter::*)()>(&TransformingPathConsumer2D$DeltaTransformFilter::init$))},
	{"closePath", "()V", nullptr, $PUBLIC},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC},
	{"init", "(Lsun/java2d/marlin/DPathConsumer2D;DDDD)Lsun/java2d/marlin/TransformingPathConsumer2D$DeltaTransformFilter;", nullptr, 0, $method(static_cast<TransformingPathConsumer2D$DeltaTransformFilter*(TransformingPathConsumer2D$DeltaTransformFilter::*)($DPathConsumer2D*,double,double,double,double)>(&TransformingPathConsumer2D$DeltaTransformFilter::init))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC},
	{"moveTo", "(DD)V", nullptr, $PUBLIC},
	{"pathDone", "()V", nullptr, $PUBLIC},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransformingPathConsumer2D$DeltaTransformFilter_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.TransformingPathConsumer2D$DeltaTransformFilter", "sun.java2d.marlin.TransformingPathConsumer2D", "DeltaTransformFilter", $STATIC | $FINAL},
	{}
};

$ClassInfo _TransformingPathConsumer2D$DeltaTransformFilter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.TransformingPathConsumer2D$DeltaTransformFilter",
	"java.lang.Object",
	"sun.java2d.marlin.DPathConsumer2D",
	_TransformingPathConsumer2D$DeltaTransformFilter_FieldInfo_,
	_TransformingPathConsumer2D$DeltaTransformFilter_MethodInfo_,
	nullptr,
	nullptr,
	_TransformingPathConsumer2D$DeltaTransformFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.TransformingPathConsumer2D"
};

$Object* allocate$TransformingPathConsumer2D$DeltaTransformFilter($Class* clazz) {
	return $of($alloc(TransformingPathConsumer2D$DeltaTransformFilter));
}

void TransformingPathConsumer2D$DeltaTransformFilter::init$() {
}

TransformingPathConsumer2D$DeltaTransformFilter* TransformingPathConsumer2D$DeltaTransformFilter::init($DPathConsumer2D* out, double mxx, double mxy, double myx, double myy) {
	$set(this, out, out);
	this->mxx = mxx;
	this->mxy = mxy;
	this->myx = myx;
	this->myy = myy;
	return this;
}

void TransformingPathConsumer2D$DeltaTransformFilter::moveTo(double x0, double y0) {
	$nc(this->out)->moveTo(x0 * this->mxx + y0 * this->mxy, x0 * this->myx + y0 * this->myy);
}

void TransformingPathConsumer2D$DeltaTransformFilter::lineTo(double x1, double y1) {
	$nc(this->out)->lineTo(x1 * this->mxx + y1 * this->mxy, x1 * this->myx + y1 * this->myy);
}

void TransformingPathConsumer2D$DeltaTransformFilter::quadTo(double x1, double y1, double x2, double y2) {
	$nc(this->out)->quadTo(x1 * this->mxx + y1 * this->mxy, x1 * this->myx + y1 * this->myy, x2 * this->mxx + y2 * this->mxy, x2 * this->myx + y2 * this->myy);
}

void TransformingPathConsumer2D$DeltaTransformFilter::curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	$nc(this->out)->curveTo(x1 * this->mxx + y1 * this->mxy, x1 * this->myx + y1 * this->myy, x2 * this->mxx + y2 * this->mxy, x2 * this->myx + y2 * this->myy, x3 * this->mxx + y3 * this->mxy, x3 * this->myx + y3 * this->myy);
}

void TransformingPathConsumer2D$DeltaTransformFilter::closePath() {
	$nc(this->out)->closePath();
}

void TransformingPathConsumer2D$DeltaTransformFilter::pathDone() {
	$nc(this->out)->pathDone();
}

int64_t TransformingPathConsumer2D$DeltaTransformFilter::getNativeConsumer() {
	return 0;
}

TransformingPathConsumer2D$DeltaTransformFilter::TransformingPathConsumer2D$DeltaTransformFilter() {
}

$Class* TransformingPathConsumer2D$DeltaTransformFilter::load$($String* name, bool initialize) {
	$loadClass(TransformingPathConsumer2D$DeltaTransformFilter, name, initialize, &_TransformingPathConsumer2D$DeltaTransformFilter_ClassInfo_, allocate$TransformingPathConsumer2D$DeltaTransformFilter);
	return class$;
}

$Class* TransformingPathConsumer2D$DeltaTransformFilter::class$ = nullptr;

		} // marlin
	} // java2d
} // sun