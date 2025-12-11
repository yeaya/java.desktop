#include <sun/java2d/marlin/TransformingPathConsumer2D$PathTracer.h>

#include <java/lang/InternalError.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $DPathConsumer2D = ::sun::java2d::marlin::DPathConsumer2D;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _TransformingPathConsumer2D$PathTracer_FieldInfo_[] = {
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TransformingPathConsumer2D$PathTracer, prefix)},
	{"out", "Lsun/java2d/marlin/DPathConsumer2D;", nullptr, $PRIVATE, $field(TransformingPathConsumer2D$PathTracer, out)},
	{}
};

$MethodInfo _TransformingPathConsumer2D$PathTracer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(TransformingPathConsumer2D$PathTracer::*)($String*)>(&TransformingPathConsumer2D$PathTracer::init$))},
	{"closePath", "()V", nullptr, $PUBLIC},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC},
	{"init", "(Lsun/java2d/marlin/DPathConsumer2D;)Lsun/java2d/marlin/TransformingPathConsumer2D$PathTracer;", nullptr, 0, $method(static_cast<TransformingPathConsumer2D$PathTracer*(TransformingPathConsumer2D$PathTracer::*)($DPathConsumer2D*)>(&TransformingPathConsumer2D$PathTracer::init))},
	{"lineTo", "(DD)V", nullptr, $PUBLIC},
	{"log", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(TransformingPathConsumer2D$PathTracer::*)($String*)>(&TransformingPathConsumer2D$PathTracer::log))},
	{"moveTo", "(DD)V", nullptr, $PUBLIC},
	{"pathDone", "()V", nullptr, $PUBLIC},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransformingPathConsumer2D$PathTracer_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.TransformingPathConsumer2D$PathTracer", "sun.java2d.marlin.TransformingPathConsumer2D", "PathTracer", $STATIC | $FINAL},
	{}
};

$ClassInfo _TransformingPathConsumer2D$PathTracer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.TransformingPathConsumer2D$PathTracer",
	"java.lang.Object",
	"sun.java2d.marlin.DPathConsumer2D",
	_TransformingPathConsumer2D$PathTracer_FieldInfo_,
	_TransformingPathConsumer2D$PathTracer_MethodInfo_,
	nullptr,
	nullptr,
	_TransformingPathConsumer2D$PathTracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.TransformingPathConsumer2D"
};

$Object* allocate$TransformingPathConsumer2D$PathTracer($Class* clazz) {
	return $of($alloc(TransformingPathConsumer2D$PathTracer));
}

void TransformingPathConsumer2D$PathTracer::init$($String* name) {
	$set(this, prefix, $str({name, ": "_s}));
}

TransformingPathConsumer2D$PathTracer* TransformingPathConsumer2D$PathTracer::init($DPathConsumer2D* out) {
	$set(this, out, out);
	return this;
}

void TransformingPathConsumer2D$PathTracer::moveTo(double x0, double y0) {
	$useLocalCurrentObjectStackCache();
	log($$str({"p.moveTo("_s, $$str(x0), ", "_s, $$str(y0), ");"_s}));
	$nc(this->out)->moveTo(x0, y0);
}

void TransformingPathConsumer2D$PathTracer::lineTo(double x1, double y1) {
	$useLocalCurrentObjectStackCache();
	log($$str({"p.lineTo("_s, $$str(x1), ", "_s, $$str(y1), ");"_s}));
	$nc(this->out)->lineTo(x1, y1);
}

void TransformingPathConsumer2D$PathTracer::curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	$useLocalCurrentObjectStackCache();
	log($$str({"p.curveTo("_s, $$str(x1), ", "_s, $$str(y1), ", "_s, $$str(x2), ", "_s, $$str(y2), ", "_s, $$str(x3), ", "_s, $$str(y3), ");"_s}));
	$nc(this->out)->curveTo(x1, y1, x2, y2, x3, y3);
}

void TransformingPathConsumer2D$PathTracer::quadTo(double x1, double y1, double x2, double y2) {
	$useLocalCurrentObjectStackCache();
	log($$str({"p.quadTo("_s, $$str(x1), ", "_s, $$str(y1), ", "_s, $$str(x2), ", "_s, $$str(y2), ");"_s}));
	$nc(this->out)->quadTo(x1, y1, x2, y2);
}

void TransformingPathConsumer2D$PathTracer::closePath() {
	log("p.closePath();"_s);
	$nc(this->out)->closePath();
}

void TransformingPathConsumer2D$PathTracer::pathDone() {
	log("p.pathDone();"_s);
	$nc(this->out)->pathDone();
}

void TransformingPathConsumer2D$PathTracer::log($String* message) {
	$MarlinUtils::logInfo($$str({this->prefix, message}));
}

int64_t TransformingPathConsumer2D$PathTracer::getNativeConsumer() {
	$throwNew($InternalError, "Not using a native peer"_s);
	$shouldNotReachHere();
}

TransformingPathConsumer2D$PathTracer::TransformingPathConsumer2D$PathTracer() {
}

$Class* TransformingPathConsumer2D$PathTracer::load$($String* name, bool initialize) {
	$loadClass(TransformingPathConsumer2D$PathTracer, name, initialize, &_TransformingPathConsumer2D$PathTracer_ClassInfo_, allocate$TransformingPathConsumer2D$PathTracer);
	return class$;
}

$Class* TransformingPathConsumer2D$PathTracer::class$ = nullptr;

		} // marlin
	} // java2d
} // sun