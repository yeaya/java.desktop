#include <sun/java2d/loops/OpaqueCopyArgbToAny.h>

#include <java/awt/Composite.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/CustomComponent.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $CustomComponent = ::sun::java2d::loops::CustomComponent;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _OpaqueCopyArgbToAny_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OpaqueCopyArgbToAny::*)()>(&OpaqueCopyArgbToAny::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OpaqueCopyArgbToAny_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.OpaqueCopyArgbToAny",
	"sun.java2d.loops.Blit",
	nullptr,
	nullptr,
	_OpaqueCopyArgbToAny_MethodInfo_
};

$Object* allocate$OpaqueCopyArgbToAny($Class* clazz) {
	return $of($alloc(OpaqueCopyArgbToAny));
}

void OpaqueCopyArgbToAny::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$Blit::init$($SurfaceType::IntArgb, $CompositeType::SrcNoEa, $SurfaceType::Any);
}

void OpaqueCopyArgbToAny::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h) {
	$var($Raster, srcRast, $nc(src)->getRaster(srcx, srcy, w, h));
	$var($IntegerComponentRaster, icr, $cast($IntegerComponentRaster, srcRast));
	$var($ints, srcPix, $nc(icr)->getDataStorage());
	$var($WritableRaster, dstRast, $cast($WritableRaster, $nc(dst)->getRaster(dstx, dsty, w, h)));
	$var($ColorModel, dstCM, dst->getColorModel());
	$var($Region, roi, $CustomComponent::getRegionOfInterest(src, dst, clip, srcx, srcy, dstx, dsty, w, h));
	$var($SpanIterator, si, $nc(roi)->getSpanIterator());
	$var($Object, dstPix, nullptr);
	int32_t srcScan = icr->getScanlineStride();
	srcx -= dstx;
	srcy -= dsty;
	$var($ints, span, $new($ints, 4));
	while ($nc(si)->nextSpan(span)) {
		int32_t rowoff = (icr->getDataOffset(0) + (srcy + span->get(1)) * srcScan + (srcx + span->get(0)));
		for (int32_t y = span->get(1); y < span->get(3); ++y) {
			int32_t off = rowoff;
			for (int32_t x = span->get(0); x < span->get(2); ++x) {
				$assign(dstPix, $nc(dstCM)->getDataElements($nc(srcPix)->get(off++), dstPix));
				$nc(dstRast)->setDataElements(x, y, dstPix);
			}
			rowoff += srcScan;
		}
	}
}

OpaqueCopyArgbToAny::OpaqueCopyArgbToAny() {
}

$Class* OpaqueCopyArgbToAny::load$($String* name, bool initialize) {
	$loadClass(OpaqueCopyArgbToAny, name, initialize, &_OpaqueCopyArgbToAny_ClassInfo_, allocate$OpaqueCopyArgbToAny);
	return class$;
}

$Class* OpaqueCopyArgbToAny::class$ = nullptr;

		} // loops
	} // java2d
} // sun