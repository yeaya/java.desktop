#include <sun/java2d/loops/Blit$TraceBlit.h>

#include <java/awt/Composite.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
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
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _Blit$TraceBlit_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/Blit;", nullptr, 0, $field(Blit$TraceBlit, target)},
	{}
};

$MethodInfo _Blit$TraceBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/Blit;)V", nullptr, $PUBLIC, $method(static_cast<void(Blit$TraceBlit::*)($Blit*)>(&Blit$TraceBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Blit$TraceBlit_InnerClassesInfo_[] = {
	{"sun.java2d.loops.Blit$TraceBlit", "sun.java2d.loops.Blit", "TraceBlit", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Blit$TraceBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.Blit$TraceBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_Blit$TraceBlit_FieldInfo_,
	_Blit$TraceBlit_MethodInfo_,
	nullptr,
	nullptr,
	_Blit$TraceBlit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.Blit"
};

$Object* allocate$Blit$TraceBlit($Class* clazz) {
	return $of($alloc(Blit$TraceBlit));
}

void Blit$TraceBlit::init$($Blit* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$Blit::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* Blit$TraceBlit::traceWrap() {
	return this;
}

void Blit$TraceBlit::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	tracePrimitive(this->target);
	$nc(this->target)->Blit$(src, dst, comp, clip, srcx, srcy, dstx, dsty, width, height);
}

Blit$TraceBlit::Blit$TraceBlit() {
}

$Class* Blit$TraceBlit::load$($String* name, bool initialize) {
	$loadClass(Blit$TraceBlit, name, initialize, &_Blit$TraceBlit_ClassInfo_, allocate$Blit$TraceBlit);
	return class$;
}

$Class* Blit$TraceBlit::class$ = nullptr;

		} // loops
	} // java2d
} // sun