#include <sun/java2d/loops/CustomComponent.h>

#include <java/awt/Rectangle.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/GraphicsPrimitiveProxy.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $GraphicsPrimitiveProxy = ::sun::java2d::loops::GraphicsPrimitiveProxy;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _CustomComponent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CustomComponent::*)()>(&CustomComponent::init$))},
	{"getRegionOfInterest", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Lsun/java2d/pipe/Region;IIIIII)Lsun/java2d/pipe/Region;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Region*(*)($SurfaceData*,$SurfaceData*,$Region*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&CustomComponent::getRegionOfInterest))},
	{"register", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&CustomComponent::register$))},
	{}
};

$ClassInfo _CustomComponent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.loops.CustomComponent",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CustomComponent_MethodInfo_
};

$Object* allocate$CustomComponent($Class* clazz) {
	return $of($alloc(CustomComponent));
}

void CustomComponent::init$() {
}

void CustomComponent::register$() {
	$useLocalCurrentObjectStackCache();
	$load(CustomComponent);
	$Class* owner = CustomComponent::class$;
	$init($Blit);
	$init($SurfaceType);
	$init($CompositeType);
	$var($GraphicsPrimitiveArray, primitives, $new($GraphicsPrimitiveArray, {
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "OpaqueCopyAnyToArgb"_s, $Blit::methodSignature, $Blit::primTypeID, $SurfaceType::Any, $CompositeType::SrcNoEa, $SurfaceType::IntArgb)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "OpaqueCopyArgbToAny"_s, $Blit::methodSignature, $Blit::primTypeID, $SurfaceType::IntArgb, $CompositeType::SrcNoEa, $SurfaceType::Any)),
		static_cast<$GraphicsPrimitive*>($$new($GraphicsPrimitiveProxy, owner, "XorCopyArgbToAny"_s, $Blit::methodSignature, $Blit::primTypeID, $SurfaceType::IntArgb, $CompositeType::Xor, $SurfaceType::Any))
	}));
	$GraphicsPrimitiveMgr::register$(primitives);
}

$Region* CustomComponent::getRegionOfInterest($SurfaceData* src, $SurfaceData* dst, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, ret, $Region::getInstanceXYWH(dstx, dsty, w, h));
	$assign(ret, $nc(ret)->getIntersection($($nc(dst)->getBounds())));
	$var($Rectangle, r, $nc(src)->getBounds());
	$nc(r)->translate(dstx - srcx, dsty - srcy);
	$assign(ret, ret->getIntersection(r));
	if (clip != nullptr) {
		$assign(ret, ret->getIntersection(clip));
	}
	return ret;
}

CustomComponent::CustomComponent() {
}

$Class* CustomComponent::load$($String* name, bool initialize) {
	$loadClass(CustomComponent, name, initialize, &_CustomComponent_ClassInfo_, allocate$CustomComponent);
	return class$;
}

$Class* CustomComponent::class$ = nullptr;

		} // loops
	} // java2d
} // sun