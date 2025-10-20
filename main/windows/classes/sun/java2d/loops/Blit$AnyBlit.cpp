#include <sun/java2d/loops/Blit$AnyBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/CompositeContext.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $CompositeContext = ::java::awt::CompositeContext;
using $RenderingHints = ::java::awt::RenderingHints;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _Blit$AnyBlit_FieldInfo_[] = {
	{"instance", "Lsun/java2d/loops/Blit$AnyBlit;", nullptr, $PUBLIC | $STATIC, $staticField(Blit$AnyBlit, instance)},
	{}
};

$MethodInfo _Blit$AnyBlit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Blit$AnyBlit::*)()>(&Blit$AnyBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Blit$AnyBlit_InnerClassesInfo_[] = {
	{"sun.java2d.loops.Blit$AnyBlit", "sun.java2d.loops.Blit", "AnyBlit", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Blit$AnyBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.Blit$AnyBlit",
	"sun.java2d.loops.Blit",
	nullptr,
	_Blit$AnyBlit_FieldInfo_,
	_Blit$AnyBlit_MethodInfo_,
	nullptr,
	nullptr,
	_Blit$AnyBlit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.Blit"
};

$Object* allocate$Blit$AnyBlit($Class* clazz) {
	return $of($alloc(Blit$AnyBlit));
}

Blit$AnyBlit* Blit$AnyBlit::instance = nullptr;

void Blit$AnyBlit::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$Blit::init$($SurfaceType::Any, $CompositeType::Any, $SurfaceType::Any);
}

void Blit$AnyBlit::Blit$($SurfaceData* srcData, $SurfaceData* dstData, $Composite* comp, $Region* clip$renamed, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($Region, clip, clip$renamed);
	$var($ColorModel, srcCM, $nc(srcData)->getColorModel());
	$var($ColorModel, dstCM, $nc(dstData)->getColorModel());
	$var($CompositeContext, ctx, $nc(comp)->createContext(srcCM, dstCM, $$new($RenderingHints, nullptr)));
	$var($Raster, srcRas, srcData->getRaster(srcx, srcy, width, height));
	$var($WritableRaster, dstRas, $cast($WritableRaster, dstData->getRaster(dstx, dsty, width, height)));
	if (clip == nullptr) {
		$assign(clip, $Region::getInstanceXYWH(dstx, dsty, width, height));
	}
	$var($ints, span, $new($ints, {
		dstx,
		dsty,
		dstx + width,
		dsty + height
	}));
	$var($SpanIterator, si, $nc(clip)->getSpanIterator(span));
	srcx -= dstx;
	srcy -= dsty;
	while ($nc(si)->nextSpan(span)) {
		int32_t w = span->get(2) - span->get(0);
		int32_t h = span->get(3) - span->get(1);
		$var($Raster, tmpSrcRas, $nc(srcRas)->createChild(srcx + span->get(0), srcy + span->get(1), w, h, 0, 0, nullptr));
		$var($WritableRaster, tmpDstRas, $nc(dstRas)->createWritableChild(span->get(0), span->get(1), w, h, 0, 0, nullptr));
		$nc(ctx)->compose(tmpSrcRas, tmpDstRas, tmpDstRas);
	}
	$nc(ctx)->dispose();
}

void clinit$Blit$AnyBlit($Class* class$) {
	$assignStatic(Blit$AnyBlit::instance, $new(Blit$AnyBlit));
}

Blit$AnyBlit::Blit$AnyBlit() {
}

$Class* Blit$AnyBlit::load$($String* name, bool initialize) {
	$loadClass(Blit$AnyBlit, name, initialize, &_Blit$AnyBlit_ClassInfo_, clinit$Blit$AnyBlit, allocate$Blit$AnyBlit);
	return class$;
}

$Class* Blit$AnyBlit::class$ = nullptr;

		} // loops
	} // java2d
} // sun