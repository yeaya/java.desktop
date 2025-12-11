#include <sun/java2d/metal/MTLGeneralBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $Composite = ::java::awt::Composite;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLGeneralBlit_FieldInfo_[] = {
	{"performop", "Lsun/java2d/loops/Blit;", nullptr, $PRIVATE | $FINAL, $field(MTLGeneralBlit, performop)},
	{"srcTmp", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", $PRIVATE, $field(MTLGeneralBlit, srcTmp)},
	{}
};

$MethodInfo _MTLGeneralBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/Blit;)V", nullptr, 0, $method(static_cast<void(MTLGeneralBlit::*)($SurfaceType*,$CompositeType*,$Blit*)>(&MTLGeneralBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _MTLGeneralBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLGeneralBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_MTLGeneralBlit_FieldInfo_,
	_MTLGeneralBlit_MethodInfo_
};

$Object* allocate$MTLGeneralBlit($Class* clazz) {
	return $of($alloc(MTLGeneralBlit));
}

void MTLGeneralBlit::init$($SurfaceType* dstType, $CompositeType* compType, $Blit* performop) {
	$init($SurfaceType);
	$Blit::init$($SurfaceType::Any, compType, dstType);
	$set(this, performop, performop);
}

void MTLGeneralBlit::Blit$($SurfaceData* src$renamed, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SurfaceData, src, src$renamed);
		$init($CompositeType);
		$init($SurfaceType);
		$var($Blit, convertsrc, $Blit::getFromCache($($nc(src)->getSurfaceType()), $CompositeType::SrcNoEa, $SurfaceType::IntArgbPre));
		$var($SurfaceData, cachedSrc, nullptr);
		if (this->srcTmp != nullptr) {
			$assign(cachedSrc, $cast($SurfaceData, $nc(this->srcTmp)->get()));
		}
		$assign(src, convertFrom(convertsrc, src, sx, sy, w, h, cachedSrc, $BufferedImage::TYPE_INT_ARGB_PRE));
		$nc(this->performop)->Blit$(src, dst, comp, clip, 0, 0, dx, dy, w, h);
		if (src != cachedSrc) {
			$set(this, srcTmp, $new($WeakReference, src));
		}
	}
}

MTLGeneralBlit::MTLGeneralBlit() {
}

$Class* MTLGeneralBlit::load$($String* name, bool initialize) {
	$loadClass(MTLGeneralBlit, name, initialize, &_MTLGeneralBlit_ClassInfo_, allocate$MTLGeneralBlit);
	return class$;
}

$Class* MTLGeneralBlit::class$ = nullptr;

		} // metal
	} // java2d
} // sun