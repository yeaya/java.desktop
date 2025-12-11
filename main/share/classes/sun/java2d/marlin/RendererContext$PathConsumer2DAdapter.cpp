#include <sun/java2d/marlin/RendererContext$PathConsumer2DAdapter.h>

#include <java/lang/InternalError.h>
#include <sun/awt/geom/PathConsumer2D.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $PathConsumer2D = ::sun::awt::geom::PathConsumer2D;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _RendererContext$PathConsumer2DAdapter_FieldInfo_[] = {
	{"out", "Lsun/awt/geom/PathConsumer2D;", nullptr, $PRIVATE, $field(RendererContext$PathConsumer2DAdapter, out)},
	{}
};

$MethodInfo _RendererContext$PathConsumer2DAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RendererContext$PathConsumer2DAdapter::*)()>(&RendererContext$PathConsumer2DAdapter::init$))},
	{"closePath", "()V", nullptr, $PUBLIC},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC},
	{"init", "(Lsun/awt/geom/PathConsumer2D;)Lsun/java2d/marlin/RendererContext$PathConsumer2DAdapter;", nullptr, 0, $method(static_cast<RendererContext$PathConsumer2DAdapter*(RendererContext$PathConsumer2DAdapter::*)($PathConsumer2D*)>(&RendererContext$PathConsumer2DAdapter::init))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC},
	{"moveTo", "(DD)V", nullptr, $PUBLIC},
	{"pathDone", "()V", nullptr, $PUBLIC},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RendererContext$PathConsumer2DAdapter_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.RendererContext$PathConsumer2DAdapter", "sun.java2d.marlin.RendererContext", "PathConsumer2DAdapter", $STATIC | $FINAL},
	{}
};

$ClassInfo _RendererContext$PathConsumer2DAdapter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.RendererContext$PathConsumer2DAdapter",
	"java.lang.Object",
	"sun.java2d.marlin.DPathConsumer2D",
	_RendererContext$PathConsumer2DAdapter_FieldInfo_,
	_RendererContext$PathConsumer2DAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_RendererContext$PathConsumer2DAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.RendererContext"
};

$Object* allocate$RendererContext$PathConsumer2DAdapter($Class* clazz) {
	return $of($alloc(RendererContext$PathConsumer2DAdapter));
}

void RendererContext$PathConsumer2DAdapter::init$() {
}

RendererContext$PathConsumer2DAdapter* RendererContext$PathConsumer2DAdapter::init($PathConsumer2D* out) {
	$set(this, out, out);
	return this;
}

void RendererContext$PathConsumer2DAdapter::moveTo(double x0, double y0) {
	$nc(this->out)->moveTo((float)x0, (float)y0);
}

void RendererContext$PathConsumer2DAdapter::lineTo(double x1, double y1) {
	$nc(this->out)->lineTo((float)x1, (float)y1);
}

void RendererContext$PathConsumer2DAdapter::closePath() {
	$nc(this->out)->closePath();
}

void RendererContext$PathConsumer2DAdapter::pathDone() {
	$nc(this->out)->pathDone();
}

void RendererContext$PathConsumer2DAdapter::curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	$nc(this->out)->curveTo((float)x1, (float)y1, (float)x2, (float)y2, (float)x3, (float)y3);
}

void RendererContext$PathConsumer2DAdapter::quadTo(double x1, double y1, double x2, double y2) {
	$nc(this->out)->quadTo((float)x1, (float)y1, (float)x2, (float)y2);
}

int64_t RendererContext$PathConsumer2DAdapter::getNativeConsumer() {
	$throwNew($InternalError, "Not using a native peer"_s);
	$shouldNotReachHere();
}

RendererContext$PathConsumer2DAdapter::RendererContext$PathConsumer2DAdapter() {
}

$Class* RendererContext$PathConsumer2DAdapter::load$($String* name, bool initialize) {
	$loadClass(RendererContext$PathConsumer2DAdapter, name, initialize, &_RendererContext$PathConsumer2DAdapter_ClassInfo_, allocate$RendererContext$PathConsumer2DAdapter);
	return class$;
}

$Class* RendererContext$PathConsumer2DAdapter::class$ = nullptr;

		} // marlin
	} // java2d
} // sun