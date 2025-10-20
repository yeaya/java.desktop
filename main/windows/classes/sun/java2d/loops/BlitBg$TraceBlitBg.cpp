#include <sun/java2d/loops/BlitBg$TraceBlitBg.h>

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
#include <sun/java2d/loops/BlitBg.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $BlitBg = ::sun::java2d::loops::BlitBg;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _BlitBg$TraceBlitBg_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/BlitBg;", nullptr, 0, $field(BlitBg$TraceBlitBg, target)},
	{}
};

$MethodInfo _BlitBg$TraceBlitBg_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/BlitBg;)V", nullptr, $PUBLIC, $method(static_cast<void(BlitBg$TraceBlitBg::*)($BlitBg*)>(&BlitBg$TraceBlitBg::init$))},
	{"BlitBg", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIIII)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BlitBg$TraceBlitBg_InnerClassesInfo_[] = {
	{"sun.java2d.loops.BlitBg$TraceBlitBg", "sun.java2d.loops.BlitBg", "TraceBlitBg", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BlitBg$TraceBlitBg_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.BlitBg$TraceBlitBg",
	"sun.java2d.loops.BlitBg",
	nullptr,
	_BlitBg$TraceBlitBg_FieldInfo_,
	_BlitBg$TraceBlitBg_MethodInfo_,
	nullptr,
	nullptr,
	_BlitBg$TraceBlitBg_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.BlitBg"
};

$Object* allocate$BlitBg$TraceBlitBg($Class* clazz) {
	return $of($alloc(BlitBg$TraceBlitBg));
}

void BlitBg$TraceBlitBg::init$($BlitBg* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$BlitBg::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* BlitBg$TraceBlitBg::traceWrap() {
	return this;
}

void BlitBg$TraceBlitBg::BlitBg$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t bgColor, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	tracePrimitive(this->target);
	$nc(this->target)->BlitBg$(src, dst, comp, clip, bgColor, srcx, srcy, dstx, dsty, width, height);
}

BlitBg$TraceBlitBg::BlitBg$TraceBlitBg() {
}

$Class* BlitBg$TraceBlitBg::load$($String* name, bool initialize) {
	$loadClass(BlitBg$TraceBlitBg, name, initialize, &_BlitBg$TraceBlitBg_ClassInfo_, allocate$BlitBg$TraceBlitBg);
	return class$;
}

$Class* BlitBg$TraceBlitBg::class$ = nullptr;

		} // loops
	} // java2d
} // sun