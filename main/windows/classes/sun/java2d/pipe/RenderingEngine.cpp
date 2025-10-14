#include <sun/java2d/pipe/RenderingEngine.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/geom/PathConsumer2D.h>
#include <sun/java2d/pipe/AATileGenerator.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderingEngine$Tracer.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO

using $BasicStroke = ::java::awt::BasicStroke;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Constructor = ::java::lang::reflect::Constructor;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PathConsumer2D = ::sun::awt::geom::PathConsumer2D;
using $AATileGenerator = ::sun::java2d::pipe::AATileGenerator;
using $Region = ::sun::java2d::pipe::Region;
using $RenderingEngine$Tracer = ::sun::java2d::pipe::RenderingEngine$Tracer;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _RenderingEngine_FieldInfo_[] = {
	{"reImpl", "Lsun/java2d/pipe/RenderingEngine;", nullptr, $PRIVATE | $STATIC, $staticField(RenderingEngine, reImpl)},
	{}
};

$MethodInfo _RenderingEngine_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RenderingEngine::*)()>(&RenderingEngine::init$))},
	{"createStrokedShape", "(Ljava/awt/Shape;FIIF[FF)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{"feedConsumer", "(Ljava/awt/geom/PathIterator;Lsun/awt/geom/PathConsumer2D;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($PathIterator*,$PathConsumer2D*)>(&RenderingEngine::feedConsumer))},
	{"getAATileGenerator", "(Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;Lsun/java2d/pipe/Region;Ljava/awt/BasicStroke;ZZ[I)Lsun/java2d/pipe/AATileGenerator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAATileGenerator", "(DDDDDDDDLsun/java2d/pipe/Region;[I)Lsun/java2d/pipe/AATileGenerator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInstance", "()Lsun/java2d/pipe/RenderingEngine;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<RenderingEngine*(*)()>(&RenderingEngine::getInstance))},
	{"getMinimumAAPenSize", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"strokeTo", "(Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;Ljava/awt/BasicStroke;ZZZLsun/awt/geom/PathConsumer2D;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"strokeTo", "(Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;Lsun/java2d/pipe/Region;Ljava/awt/BasicStroke;ZZZLsun/awt/geom/PathConsumer2D;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RenderingEngine_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.RenderingEngine$Tracer", "sun.java2d.pipe.RenderingEngine", "Tracer", $STATIC},
	{}
};

$ClassInfo _RenderingEngine_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.pipe.RenderingEngine",
	"java.lang.Object",
	nullptr,
	_RenderingEngine_FieldInfo_,
	_RenderingEngine_MethodInfo_,
	nullptr,
	nullptr,
	_RenderingEngine_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.pipe.RenderingEngine$Tracer"
};

$Object* allocate$RenderingEngine($Class* clazz) {
	return $of($alloc(RenderingEngine));
}

RenderingEngine* RenderingEngine::reImpl = nullptr;

void RenderingEngine::init$() {
}

RenderingEngine* RenderingEngine::getInstance() {
	$load(RenderingEngine);
	$synchronized(class$) {
		$load(RenderingEngine);
		$beforeCallerSensitive();
		$init(RenderingEngine);
		if (RenderingEngine::reImpl != nullptr) {
			return RenderingEngine::reImpl;
		}
		$var($GetPropertyAction, gpa, $new($GetPropertyAction, "sun.java2d.renderer"_s));
		$var($String, reClass, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(gpa))));
		if (reClass != nullptr) {
			try {
				$Class* cls = $Class::forName(reClass);
				$assignStatic(RenderingEngine::reImpl, $cast(RenderingEngine, $nc($($nc(cls)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
			} catch ($ReflectiveOperationException&) {
				$catch();
			}
		}
		if (RenderingEngine::reImpl == nullptr) {
			$var($String, marlinREClass, "sun.java2d.marlin.DMarlinRenderingEngine"_s);
			try {
				$Class* cls = $Class::forName(marlinREClass);
				$assignStatic(RenderingEngine::reImpl, $cast(RenderingEngine, $nc($($nc(cls)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
			} catch ($ReflectiveOperationException&) {
				$catch();
			}
		}
		if (RenderingEngine::reImpl == nullptr) {
			$throwNew($InternalError, "No RenderingEngine module found"_s);
		}
		$assign(gpa, $new($GetPropertyAction, "sun.java2d.renderer.verbose"_s));
		$var($String, verbose, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(gpa))));
		if (verbose != nullptr && verbose->startsWith("t"_s)) {
			$init($System);
			$nc($System::out)->println($$str({"RenderingEngine = "_s, RenderingEngine::reImpl}));
		}
		$assign(gpa, $new($GetPropertyAction, "sun.java2d.renderer.trace"_s));
		$var($String, reTrace, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(gpa))));
		if (reTrace != nullptr) {
			$assignStatic(RenderingEngine::reImpl, $new($RenderingEngine$Tracer, RenderingEngine::reImpl));
		}
		return RenderingEngine::reImpl;
	}
}

void RenderingEngine::strokeTo($Shape* src, $AffineTransform* at, $Region* clip, $BasicStroke* bs, bool thin, bool normalize, bool antialias, $PathConsumer2D* consumer) {
	strokeTo(src, at, bs, thin, normalize, antialias, consumer);
}

void RenderingEngine::feedConsumer($PathIterator* pi, $PathConsumer2D* consumer) {
	$var($floats, coords, $new($floats, 6));
	while (!$nc(pi)->isDone()) {
		switch (pi->currentSegment(coords)) {
		case $PathIterator::SEG_MOVETO:
			{
				$nc(consumer)->moveTo(coords->get(0), coords->get(1));
				break;
			}
		case $PathIterator::SEG_LINETO:
			{
				$nc(consumer)->lineTo(coords->get(0), coords->get(1));
				break;
			}
		case $PathIterator::SEG_QUADTO:
			{
				$nc(consumer)->quadTo(coords->get(0), coords->get(1), coords->get(2), coords->get(3));
				break;
			}
		case $PathIterator::SEG_CUBICTO:
			{
				$nc(consumer)->curveTo(coords->get(0), coords->get(1), coords->get(2), coords->get(3), coords->get(4), coords->get(5));
				break;
			}
		case $PathIterator::SEG_CLOSE:
			{
				$nc(consumer)->closePath();
				break;
			}
		}
		pi->next();
	}
}

RenderingEngine::RenderingEngine() {
}

$Class* RenderingEngine::load$($String* name, bool initialize) {
	$loadClass(RenderingEngine, name, initialize, &_RenderingEngine_ClassInfo_, allocate$RenderingEngine);
	return class$;
}

$Class* RenderingEngine::class$ = nullptr;

		} // pipe
	} // java2d
} // sun