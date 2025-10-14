#include <sun/java2d/loops/XorCopyArgbToAny.h>

#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Float.h>
#include <java/lang/InternalError.h>
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
#include <sun/java2d/loops/XORComposite.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $CustomComponent = ::sun::java2d::loops::CustomComponent;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $XORComposite = ::sun::java2d::loops::XORComposite;
using $Region = ::sun::java2d::pipe::Region;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _XorCopyArgbToAny_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XorCopyArgbToAny::*)()>(&XorCopyArgbToAny::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XorCopyArgbToAny_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.XorCopyArgbToAny",
	"sun.java2d.loops.Blit",
	nullptr,
	nullptr,
	_XorCopyArgbToAny_MethodInfo_
};

$Object* allocate$XorCopyArgbToAny($Class* clazz) {
	return $of($alloc(XorCopyArgbToAny));
}

void XorCopyArgbToAny::init$() {
	$init($SurfaceType);
	$init($CompositeType);
	$Blit::init$($SurfaceType::IntArgb, $CompositeType::Xor, $SurfaceType::Any);
}

void XorCopyArgbToAny::Blit$($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t w, int32_t h) {
	$var($Raster, srcRast, $nc(src)->getRaster(srcx, srcy, w, h));
	$var($IntegerComponentRaster, icr, $cast($IntegerComponentRaster, srcRast));
	$var($ints, srcPix, $nc(icr)->getDataStorage());
	$var($WritableRaster, dstRast, $cast($WritableRaster, $nc(dst)->getRaster(dstx, dsty, w, h)));
	$var($ColorModel, dstCM, dst->getColorModel());
	$var($Region, roi, $CustomComponent::getRegionOfInterest(src, dst, clip, srcx, srcy, dstx, dsty, w, h));
	$var($SpanIterator, si, $nc(roi)->getSpanIterator());
	int32_t xorrgb = $nc($($nc(($cast($XORComposite, comp)))->getXorColor()))->getRGB();
	$var($Object, xorPixel, $nc(dstCM)->getDataElements(xorrgb, nullptr));
	$var($Object, srcPixel, nullptr);
	$var($Object, dstPixel, nullptr);
	int32_t srcScan = icr->getScanlineStride();
	srcx -= dstx;
	srcy -= dsty;
	$var($ints, span, $new($ints, 4));
	while ($nc(si)->nextSpan(span)) {
		int32_t rowoff = (icr->getDataOffset(0) + (srcy + span->get(1)) * srcScan + (srcx + span->get(0)));
		for (int32_t y = span->get(1); y < span->get(3); ++y) {
			int32_t off = rowoff;
			for (int32_t x = span->get(0); x < span->get(2); ++x) {
				$assign(srcPixel, dstCM->getDataElements($nc(srcPix)->get(off++), srcPixel));
				$assign(dstPixel, $nc(dstRast)->getDataElements(x, y, dstPixel));
				{
					$var($bytes, bytesrcarr, nullptr)
					$var($bytes, bytedstarr, nullptr)
					$var($bytes, bytexorarr, nullptr)
					$var($shorts, shortsrcarr, nullptr)
					$var($shorts, shortdstarr, nullptr)
					$var($shorts, shortxorarr, nullptr)
					$var($ints, intsrcarr, nullptr)
					$var($ints, intdstarr, nullptr)
					$var($ints, intxorarr, nullptr)
					$var($floats, floatsrcarr, nullptr)
					$var($floats, floatdstarr, nullptr)
					$var($floats, floatxorarr, nullptr)
					$var($doubles, doublesrcarr, nullptr)
					$var($doubles, doubledstarr, nullptr)
					$var($doubles, doublexorarr, nullptr)
					switch (dstCM->getTransferType()) {
					case $DataBuffer::TYPE_BYTE:
						{
							$assign(bytesrcarr, $cast($bytes, srcPixel));
							$assign(bytedstarr, $cast($bytes, dstPixel));
							$assign(bytexorarr, $cast($bytes, xorPixel));
							for (int32_t i = 0; i < $nc(bytedstarr)->length; ++i) {
								(*bytedstarr)[i] ^= $nc(bytesrcarr)->get(i) ^ $nc(bytexorarr)->get(i);
							}
							break;
						}
					case $DataBuffer::TYPE_SHORT:
						{}
					case $DataBuffer::TYPE_USHORT:
						{
							$assign(shortsrcarr, $cast($shorts, srcPixel));
							$assign(shortdstarr, $cast($shorts, dstPixel));
							$assign(shortxorarr, $cast($shorts, xorPixel));
							for (int32_t i = 0; i < $nc(shortdstarr)->length; ++i) {
								(*shortdstarr)[i] ^= $nc(shortsrcarr)->get(i) ^ $nc(shortxorarr)->get(i);
							}
							break;
						}
					case $DataBuffer::TYPE_INT:
						{
							$assign(intsrcarr, $cast($ints, srcPixel));
							$assign(intdstarr, $cast($ints, dstPixel));
							$assign(intxorarr, $cast($ints, xorPixel));
							for (int32_t i = 0; i < $nc(intdstarr)->length; ++i) {
								(*intdstarr)[i] ^= $nc(intsrcarr)->get(i) ^ $nc(intxorarr)->get(i);
							}
							break;
						}
					case $DataBuffer::TYPE_FLOAT:
						{
							$assign(floatsrcarr, $cast($floats, srcPixel));
							$assign(floatdstarr, $cast($floats, dstPixel));
							$assign(floatxorarr, $cast($floats, xorPixel));
							for (int32_t i = 0; i < $nc(floatdstarr)->length; ++i) {
								int32_t var$1 = $Float::floatToIntBits(floatdstarr->get(i));
								int32_t var$0 = var$1 ^ $Float::floatToIntBits($nc(floatsrcarr)->get(i));
								int32_t v = (var$0 ^ $Float::floatToIntBits($nc(floatxorarr)->get(i)));
								floatdstarr->set(i, $Float::intBitsToFloat(v));
							}
							break;
						}
					case $DataBuffer::TYPE_DOUBLE:
						{
							$assign(doublesrcarr, $cast($doubles, srcPixel));
							$assign(doubledstarr, $cast($doubles, dstPixel));
							$assign(doublexorarr, $cast($doubles, xorPixel));
							for (int32_t i = 0; i < $nc(doubledstarr)->length; ++i) {
								int64_t var$3 = $Double::doubleToLongBits(doubledstarr->get(i));
								int64_t var$2 = var$3 ^ $Double::doubleToLongBits($nc(doublesrcarr)->get(i));
								int64_t v = (var$2 ^ $Double::doubleToLongBits($nc(doublexorarr)->get(i)));
								doubledstarr->set(i, $Double::longBitsToDouble(v));
							}
							break;
						}
					default:
						{
							$throwNew($InternalError, "Unsupported XOR pixel type"_s);
						}
					}
				}
				dstRast->setDataElements(x, y, dstPixel);
			}
			rowoff += srcScan;
		}
	}
}

XorCopyArgbToAny::XorCopyArgbToAny() {
}

$Class* XorCopyArgbToAny::load$($String* name, bool initialize) {
	$loadClass(XorCopyArgbToAny, name, initialize, &_XorCopyArgbToAny_ClassInfo_, allocate$XorCopyArgbToAny);
	return class$;
}

$Class* XorCopyArgbToAny::class$ = nullptr;

		} // loops
	} // java2d
} // sun