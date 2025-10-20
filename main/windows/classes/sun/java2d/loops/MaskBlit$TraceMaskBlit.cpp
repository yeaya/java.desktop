#include <sun/java2d/loops/MaskBlit$TraceMaskBlit.h>

#include <java/awt/Composite.h>
#include <java/lang/Array.h>
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
#include <sun/java2d/loops/MaskBlit.h>
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
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _MaskBlit$TraceMaskBlit_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/MaskBlit;", nullptr, 0, $field(MaskBlit$TraceMaskBlit, target)},
	{}
};

$MethodInfo _MaskBlit$TraceMaskBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/MaskBlit;)V", nullptr, $PUBLIC, $method(static_cast<void(MaskBlit$TraceMaskBlit::*)($MaskBlit*)>(&MaskBlit$TraceMaskBlit::init$))},
	{"MaskBlit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII[BII)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MaskBlit$TraceMaskBlit_InnerClassesInfo_[] = {
	{"sun.java2d.loops.MaskBlit$TraceMaskBlit", "sun.java2d.loops.MaskBlit", "TraceMaskBlit", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MaskBlit$TraceMaskBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.MaskBlit$TraceMaskBlit",
	"sun.java2d.loops.MaskBlit",
	nullptr,
	_MaskBlit$TraceMaskBlit_FieldInfo_,
	_MaskBlit$TraceMaskBlit_MethodInfo_,
	nullptr,
	nullptr,
	_MaskBlit$TraceMaskBlit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.MaskBlit"
};

$Object* allocate$MaskBlit$TraceMaskBlit($Class* clazz) {
	return $of($alloc(MaskBlit$TraceMaskBlit));
}

void MaskBlit$TraceMaskBlit::init$($MaskBlit* target) {
	$useLocalCurrentObjectStackCache();
	int64_t var$0 = $nc(target)->getNativePrim();
	$var($SurfaceType, var$1, target->getSourceType());
	$var($CompositeType, var$2, target->getCompositeType());
	$MaskBlit::init$(var$0, var$1, var$2, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* MaskBlit$TraceMaskBlit::traceWrap() {
	return this;
}

void MaskBlit$TraceMaskBlit::MaskBlit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height, $bytes* mask, int32_t maskoff, int32_t maskscan) {
	tracePrimitive(this->target);
	$nc(this->target)->MaskBlit$(src, dst, comp, clip, srcx, srcy, dstx, dsty, width, height, mask, maskoff, maskscan);
}

MaskBlit$TraceMaskBlit::MaskBlit$TraceMaskBlit() {
}

$Class* MaskBlit$TraceMaskBlit::load$($String* name, bool initialize) {
	$loadClass(MaskBlit$TraceMaskBlit, name, initialize, &_MaskBlit$TraceMaskBlit_ClassInfo_, allocate$MaskBlit$TraceMaskBlit);
	return class$;
}

$Class* MaskBlit$TraceMaskBlit::class$ = nullptr;

		} // loops
	} // java2d
} // sun