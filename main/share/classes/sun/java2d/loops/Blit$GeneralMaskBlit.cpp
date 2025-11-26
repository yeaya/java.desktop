#include <sun/java2d/loops/Blit$GeneralMaskBlit.h>

#include <java/awt/Composite.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
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
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _Blit$GeneralMaskBlit_FieldInfo_[] = {
	{"performop", "Lsun/java2d/loops/MaskBlit;", nullptr, 0, $field(Blit$GeneralMaskBlit, performop)},
	{}
};

$MethodInfo _Blit$GeneralMaskBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(Blit$GeneralMaskBlit::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&Blit$GeneralMaskBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Blit$GeneralMaskBlit_InnerClassesInfo_[] = {
	{"sun.java2d.loops.Blit$GeneralMaskBlit", "sun.java2d.loops.Blit", "GeneralMaskBlit", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Blit$GeneralMaskBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.Blit$GeneralMaskBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_Blit$GeneralMaskBlit_FieldInfo_,
	_Blit$GeneralMaskBlit_MethodInfo_,
	nullptr,
	nullptr,
	_Blit$GeneralMaskBlit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.Blit"
};

$Object* allocate$Blit$GeneralMaskBlit($Class* clazz) {
	return $of($alloc(Blit$GeneralMaskBlit));
}

void Blit$GeneralMaskBlit::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$Blit::init$(srctype, comptype, dsttype);
	$set(this, performop, $MaskBlit::locate(srctype, comptype, dsttype));
}

void Blit$GeneralMaskBlit::Blit$($SurfaceData* srcData, $SurfaceData* dstData, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	$nc(this->performop)->MaskBlit$(srcData, dstData, comp, clip, srcx, srcy, dstx, dsty, width, height, nullptr, 0, 0);
}

Blit$GeneralMaskBlit::Blit$GeneralMaskBlit() {
}

$Class* Blit$GeneralMaskBlit::load$($String* name, bool initialize) {
	$loadClass(Blit$GeneralMaskBlit, name, initialize, &_Blit$GeneralMaskBlit_ClassInfo_, allocate$Blit$GeneralMaskBlit);
	return class$;
}

$Class* Blit$GeneralMaskBlit::class$ = nullptr;

		} // loops
	} // java2d
} // sun