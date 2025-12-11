#include <sun/java2d/marlin/TransformingPathConsumer2D$Path2DWrapper.h>

#include <java/awt/geom/Path2D$Double.h>
#include <java/lang/InternalError.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D.h>
#include <jcpp.h>

using $Path2D$Double = ::java::awt::geom::Path2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _TransformingPathConsumer2D$Path2DWrapper_FieldInfo_[] = {
	{"p2d", "Ljava/awt/geom/Path2D$Double;", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$Path2DWrapper, p2d)},
	{}
};

$MethodInfo _TransformingPathConsumer2D$Path2DWrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D$Path2DWrapper::*)()>(&TransformingPathConsumer2D$Path2DWrapper::init$))},
	{"closePath", "()V", nullptr, $PUBLIC},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC},
	{"init", "(Ljava/awt/geom/Path2D$Double;)Lsun/java2d/marlin/TransformingPathConsumer2D$Path2DWrapper;", nullptr, 0, $method(static_cast<TransformingPathConsumer2D$Path2DWrapper*(TransformingPathConsumer2D$Path2DWrapper::*)($Path2D$Double*)>(&TransformingPathConsumer2D$Path2DWrapper::init))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC},
	{"moveTo", "(DD)V", nullptr, $PUBLIC},
	{"pathDone", "()V", nullptr, $PUBLIC},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransformingPathConsumer2D$Path2DWrapper_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.TransformingPathConsumer2D$Path2DWrapper", "sun.java2d.marlin.TransformingPathConsumer2D", "Path2DWrapper", $STATIC | $FINAL},
	{}
};

$ClassInfo _TransformingPathConsumer2D$Path2DWrapper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.TransformingPathConsumer2D$Path2DWrapper",
	"java.lang.Object",
	"sun.java2d.marlin.DPathConsumer2D",
	_TransformingPathConsumer2D$Path2DWrapper_FieldInfo_,
	_TransformingPathConsumer2D$Path2DWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_TransformingPathConsumer2D$Path2DWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.TransformingPathConsumer2D"
};

$Object* allocate$TransformingPathConsumer2D$Path2DWrapper($Class* clazz) {
	return $of($alloc(TransformingPathConsumer2D$Path2DWrapper));
}

void TransformingPathConsumer2D$Path2DWrapper::init$() {
}

TransformingPathConsumer2D$Path2DWrapper* TransformingPathConsumer2D$Path2DWrapper::init($Path2D$Double* p2d) {
	$set(this, p2d, p2d);
	return this;
}

void TransformingPathConsumer2D$Path2DWrapper::moveTo(double x0, double y0) {
	$nc(this->p2d)->moveTo(x0, y0);
}

void TransformingPathConsumer2D$Path2DWrapper::lineTo(double x1, double y1) {
	$nc(this->p2d)->lineTo(x1, y1);
}

void TransformingPathConsumer2D$Path2DWrapper::closePath() {
	$nc(this->p2d)->closePath();
}

void TransformingPathConsumer2D$Path2DWrapper::pathDone() {
}

void TransformingPathConsumer2D$Path2DWrapper::curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	$nc(this->p2d)->curveTo(x1, y1, x2, y2, x3, y3);
}

void TransformingPathConsumer2D$Path2DWrapper::quadTo(double x1, double y1, double x2, double y2) {
	$nc(this->p2d)->quadTo(x1, y1, x2, y2);
}

int64_t TransformingPathConsumer2D$Path2DWrapper::getNativeConsumer() {
	$throwNew($InternalError, "Not using a native peer"_s);
	$shouldNotReachHere();
}

TransformingPathConsumer2D$Path2DWrapper::TransformingPathConsumer2D$Path2DWrapper() {
}

$Class* TransformingPathConsumer2D$Path2DWrapper::load$($String* name, bool initialize) {
	$loadClass(TransformingPathConsumer2D$Path2DWrapper, name, initialize, &_TransformingPathConsumer2D$Path2DWrapper_ClassInfo_, allocate$TransformingPathConsumer2D$Path2DWrapper);
	return class$;
}

$Class* TransformingPathConsumer2D$Path2DWrapper::class$ = nullptr;

		} // marlin
	} // java2d
} // sun