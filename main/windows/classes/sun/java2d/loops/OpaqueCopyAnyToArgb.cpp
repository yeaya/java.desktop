#include <sun/java2d/loops/OpaqueCopyAnyToArgb.h>

#include <java/awt/Composite.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
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
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
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

$MethodInfo _OpaqueCopyAnyToArgb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OpaqueCopyAnyToArgb::*)()>(&OpaqueCopyAnyToArgb::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OpaqueCopyAnyToArgb_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.OpaqueCopyAnyToArgb",
	"sun.java2d.loops.Blit",
	nullptr,
	nullptr,
	_OpaqueCopyAnyToArgb_MethodInfo_
};

$Object* allocate$OpaqueCopyAnyToArgb($Class* clazz) {
	return $of($alloc(OpaqueCopyAnyToArgb));
}

void OpaqueCopyAnyToArgb::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$Blit::init$($SurfaceType::Any, $CompositeType::SrcNoEa, $SurfaceType::IntArgb);
}

void OpaqueCopyAnyToArgb::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Raster, srcRast, $nc(src)->getRaster(srcx, srcy, w, h));
	$var($ColorModel, srcCM, src->getColorModel());
	$var($Raster, dstRast, $nc(dst)->getRaster(dstx, dsty, w, h));
	$var($IntegerComponentRaster, icr, $cast($IntegerComponentRaster, dstRast));
	$var($ints, dstPix, $nc(icr)->getDataStorage());
	$var($Region, roi, $CustomComponent::getRegionOfInterest(src, dst, clip, srcx, srcy, dstx, dsty, w, h));
	$var($SpanIterator, si, $nc(roi)->getSpanIterator());
	$var($Object, srcPix, nullptr);
	int32_t dstScan = icr->getScanlineStride();
	srcx -= dstx;
	srcy -= dsty;
	$var($ints, span, $new($ints, 4));
	while ($nc(si)->nextSpan(span)) {
		int32_t rowoff = icr->getDataOffset(0) + span->get(1) * dstScan + span->get(0);
		for (int32_t y = span->get(1); y < span->get(3); ++y) {
			int32_t off = rowoff;
			for (int32_t x = span->get(0); x < span->get(2); ++x) {
				$assign(srcPix, $nc(srcRast)->getDataElements(x + srcx, y + srcy, srcPix));
				$nc(dstPix)->set(off++, $nc(srcCM)->getRGB(srcPix));
			}
			rowoff += dstScan;
		}
	}
	icr->markDirty();
}

OpaqueCopyAnyToArgb::OpaqueCopyAnyToArgb() {
}

$Class* OpaqueCopyAnyToArgb::load$($String* name, bool initialize) {
	$loadClass(OpaqueCopyAnyToArgb, name, initialize, &_OpaqueCopyAnyToArgb_ClassInfo_, allocate$OpaqueCopyAnyToArgb);
	return class$;
}

$Class* OpaqueCopyAnyToArgb::class$ = nullptr;

		} // loops
	} // java2d
} // sun