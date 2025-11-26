#include <sun/java2d/x11/X11PMBlitLoops$DelegateBlitLoop.h>

#include <java/awt/Composite.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/x11/X11PMBlitLoops.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ColorModel = ::java::awt::image::ColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $X11PMBlitLoops = ::sun::java2d::x11::X11PMBlitLoops;

namespace sun {
	namespace java2d {
		namespace x11 {

$FieldInfo _X11PMBlitLoops$DelegateBlitLoop_FieldInfo_[] = {
	{"dstType", "Lsun/java2d/loops/SurfaceType;", nullptr, 0, $field(X11PMBlitLoops$DelegateBlitLoop, dstType)},
	{}
};

$MethodInfo _X11PMBlitLoops$DelegateBlitLoop_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(X11PMBlitLoops$DelegateBlitLoop::*)($SurfaceType*,$SurfaceType*)>(&X11PMBlitLoops$DelegateBlitLoop::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11PMBlitLoops$DelegateBlitLoop_InnerClassesInfo_[] = {
	{"sun.java2d.x11.X11PMBlitLoops$DelegateBlitLoop", "sun.java2d.x11.X11PMBlitLoops", "DelegateBlitLoop", $STATIC},
	{}
};

$ClassInfo _X11PMBlitLoops$DelegateBlitLoop_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.x11.X11PMBlitLoops$DelegateBlitLoop",
	"sun.java2d.loops.Blit",
	nullptr,
	_X11PMBlitLoops$DelegateBlitLoop_FieldInfo_,
	_X11PMBlitLoops$DelegateBlitLoop_MethodInfo_,
	nullptr,
	nullptr,
	_X11PMBlitLoops$DelegateBlitLoop_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.x11.X11PMBlitLoops"
};

$Object* allocate$X11PMBlitLoops$DelegateBlitLoop($Class* clazz) {
	return $of($alloc(X11PMBlitLoops$DelegateBlitLoop));
}

void X11PMBlitLoops$DelegateBlitLoop::init$($SurfaceType* realDstType, $SurfaceType* delegateDstType) {
	$init($SurfaceType);
	$init($CompositeType);
	$Blit::init$($SurfaceType::Any, $CompositeType::SrcNoEa, realDstType);
	$set(this, dstType, delegateDstType);
}

void X11PMBlitLoops$DelegateBlitLoop::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$init($CompositeType);
	$var($Blit, blit, $Blit::getFromCache($($nc(src)->getSurfaceType()), $CompositeType::SrcNoEa, this->dstType));
	$nc(blit)->Blit$(src, dst, comp, clip, sx, sy, dx, dy, w, h);
	$X11PMBlitLoops::updateBitmask(src, dst, $instanceOf($IndexColorModel, $($nc(src)->getColorModel())));
}

X11PMBlitLoops$DelegateBlitLoop::X11PMBlitLoops$DelegateBlitLoop() {
}

$Class* X11PMBlitLoops$DelegateBlitLoop::load$($String* name, bool initialize) {
	$loadClass(X11PMBlitLoops$DelegateBlitLoop, name, initialize, &_X11PMBlitLoops$DelegateBlitLoop_ClassInfo_, allocate$X11PMBlitLoops$DelegateBlitLoop);
	return class$;
}

$Class* X11PMBlitLoops$DelegateBlitLoop::class$ = nullptr;

		} // x11
	} // java2d
} // sun