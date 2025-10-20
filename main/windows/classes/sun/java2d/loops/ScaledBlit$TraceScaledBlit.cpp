#include <sun/java2d/loops/ScaledBlit$TraceScaledBlit.h>

#include <java/awt/Composite.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/ScaledBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $ScaledBlit = ::sun::java2d::loops::ScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _ScaledBlit$TraceScaledBlit_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/ScaledBlit;", nullptr, 0, $field(ScaledBlit$TraceScaledBlit, target)},
	{}
};

$MethodInfo _ScaledBlit$TraceScaledBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/ScaledBlit;)V", nullptr, $PUBLIC, $method(static_cast<void(ScaledBlit$TraceScaledBlit::*)($ScaledBlit*)>(&ScaledBlit$TraceScaledBlit::init$))},
	{"Scale", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIDDDD)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ScaledBlit$TraceScaledBlit_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ScaledBlit$TraceScaledBlit", "sun.java2d.loops.ScaledBlit", "TraceScaledBlit", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ScaledBlit$TraceScaledBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.ScaledBlit$TraceScaledBlit",
	"sun.java2d.loops.ScaledBlit",
	nullptr,
	_ScaledBlit$TraceScaledBlit_FieldInfo_,
	_ScaledBlit$TraceScaledBlit_MethodInfo_,
	nullptr,
	nullptr,
	_ScaledBlit$TraceScaledBlit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.ScaledBlit"
};

$Object* allocate$ScaledBlit$TraceScaledBlit($Class* clazz) {
	return $of($alloc(ScaledBlit$TraceScaledBlit));
}

void ScaledBlit$TraceScaledBlit::init$($ScaledBlit* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$ScaledBlit::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* ScaledBlit$TraceScaledBlit::traceWrap() {
	return this;
}

void ScaledBlit$TraceScaledBlit::Scale($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	tracePrimitive(this->target);
	$nc(this->target)->Scale(src, dst, comp, clip, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2);
}

ScaledBlit$TraceScaledBlit::ScaledBlit$TraceScaledBlit() {
}

$Class* ScaledBlit$TraceScaledBlit::load$($String* name, bool initialize) {
	$loadClass(ScaledBlit$TraceScaledBlit, name, initialize, &_ScaledBlit$TraceScaledBlit_ClassInfo_, allocate$ScaledBlit$TraceScaledBlit);
	return class$;
}

$Class* ScaledBlit$TraceScaledBlit::class$ = nullptr;

		} // loops
	} // java2d
} // sun