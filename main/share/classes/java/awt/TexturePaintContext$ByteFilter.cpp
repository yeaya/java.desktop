#include <java/awt/TexturePaintContext$ByteFilter.h>

#include <java/awt/TexturePaintContext.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <sun/awt/image/ByteInterleavedRaster.h>
#include <sun/awt/image/IntegerInterleavedRaster.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef OPAQUE

using $TexturePaintContext = ::java::awt::TexturePaintContext;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ColorModel = ::java::awt::image::ColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteInterleavedRaster = ::sun::awt::image::ByteInterleavedRaster;
using $IntegerInterleavedRaster = ::sun::awt::image::IntegerInterleavedRaster;

namespace java {
	namespace awt {

$FieldInfo _TexturePaintContext$ByteFilter_FieldInfo_[] = {
	{"srcRas", "Lsun/awt/image/ByteInterleavedRaster;", nullptr, 0, $field(TexturePaintContext$ByteFilter, srcRas)},
	{"inPalette", "[I", nullptr, 0, $field(TexturePaintContext$ByteFilter, inPalette)},
	{"inData", "[B", nullptr, 0, $field(TexturePaintContext$ByteFilter, inData)},
	{"inOff", "I", nullptr, 0, $field(TexturePaintContext$ByteFilter, inOff)},
	{"inSpan", "I", nullptr, 0, $field(TexturePaintContext$ByteFilter, inSpan)},
	{"outData", "[I", nullptr, 0, $field(TexturePaintContext$ByteFilter, outData)},
	{"outOff", "I", nullptr, 0, $field(TexturePaintContext$ByteFilter, outOff)},
	{"outSpan", "I", nullptr, 0, $field(TexturePaintContext$ByteFilter, outSpan)},
	{}
};

$MethodInfo _TexturePaintContext$ByteFilter_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/ByteInterleavedRaster;Ljava/awt/image/ColorModel;Ljava/awt/geom/AffineTransform;I)V", nullptr, $PUBLIC, $method(static_cast<void(TexturePaintContext$ByteFilter::*)($ByteInterleavedRaster*,$ColorModel*,$AffineTransform*,int32_t)>(&TexturePaintContext$ByteFilter::init$))},
	{"makeRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"setRaster", "(IIIIIIIIIIIIIIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TexturePaintContext$ByteFilter_InnerClassesInfo_[] = {
	{"java.awt.TexturePaintContext$ByteFilter", "java.awt.TexturePaintContext", "ByteFilter", $STATIC},
	{}
};

$ClassInfo _TexturePaintContext$ByteFilter_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.TexturePaintContext$ByteFilter",
	"java.awt.TexturePaintContext",
	nullptr,
	_TexturePaintContext$ByteFilter_FieldInfo_,
	_TexturePaintContext$ByteFilter_MethodInfo_,
	nullptr,
	nullptr,
	_TexturePaintContext$ByteFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.TexturePaintContext"
};

$Object* allocate$TexturePaintContext$ByteFilter($Class* clazz) {
	return $of($alloc(TexturePaintContext$ByteFilter));
}

void TexturePaintContext$ByteFilter::init$($ByteInterleavedRaster* srcRas, $ColorModel* cm, $AffineTransform* xform, int32_t maxw) {
	$useLocalCurrentObjectStackCache();
	$init($TexturePaintContext);
	$var($ColorModel, var$0, ($nc(cm)->getTransparency() == $Transparency::OPAQUE ? $TexturePaintContext::xrgbmodel : $TexturePaintContext::argbmodel));
	$var($AffineTransform, var$1, xform);
	int32_t var$2 = $nc(srcRas)->getWidth();
	$TexturePaintContext::init$(var$0, var$1, var$2, srcRas->getHeight(), maxw);
	$set(this, inPalette, $new($ints, 256));
	$nc(($cast($IndexColorModel, cm)))->getRGBs(this->inPalette);
	$set(this, srcRas, srcRas);
	$set(this, inData, $nc(srcRas)->getDataStorage());
	this->inSpan = srcRas->getScanlineStride();
	this->inOff = srcRas->getDataOffset(0);
}

$WritableRaster* TexturePaintContext$ByteFilter::makeRaster(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($WritableRaster, ras, $TexturePaintContext::makeRaster(this->colorModel, nullptr, w, h));
	$var($IntegerInterleavedRaster, iiRas, $cast($IntegerInterleavedRaster, ras));
	$set(this, outData, $nc(iiRas)->getDataStorage());
	this->outSpan = iiRas->getScanlineStride();
	this->outOff = iiRas->getDataOffset(0);
	return ras;
}

void TexturePaintContext$ByteFilter::setRaster(int32_t x, int32_t y, int32_t xerr, int32_t yerr, int32_t w, int32_t h, int32_t bWidth, int32_t bHeight, int32_t colincx, int32_t colincxerr, int32_t colincy, int32_t colincyerr, int32_t rowincx, int32_t rowincxerr, int32_t rowincy, int32_t rowincyerr) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, inData, this->inData);
	$var($ints, outData, this->outData);
	int32_t out = this->outOff;
	int32_t inSpan = this->inSpan;
	int32_t inOff = this->inOff;
	int32_t outSpan = this->outSpan;
	int32_t rowx = x;
	int32_t rowy = y;
	int32_t rowxerr = xerr;
	int32_t rowyerr = yerr;
	$var($ints, rgbs, $new($ints, 4));
	for (int32_t j = 0; j < h; ++j) {
		x = rowx;
		y = rowy;
		xerr = rowxerr;
		yerr = rowyerr;
		for (int32_t i = 0; i < w; ++i) {
			int32_t nextx = 0;
			int32_t nexty = 0;
			if ((nextx = x + 1) >= bWidth) {
				nextx = 0;
			}
			if ((nexty = y + 1) >= bHeight) {
				nexty = 0;
			}
			rgbs->set(0, $nc(this->inPalette)->get((int32_t)(255 & (uint32_t)(int32_t)$nc(inData)->get(inOff + x + inSpan * y))));
			rgbs->set(1, $nc(this->inPalette)->get((int32_t)(255 & (uint32_t)(int32_t)inData->get(inOff + nextx + inSpan * y))));
			rgbs->set(2, $nc(this->inPalette)->get((int32_t)(255 & (uint32_t)(int32_t)inData->get(inOff + x + inSpan * nexty))));
			rgbs->set(3, $nc(this->inPalette)->get((int32_t)(255 & (uint32_t)(int32_t)inData->get(inOff + nextx + inSpan * nexty))));
			$nc(outData)->set(out + i, $TexturePaintContext::blend(rgbs, xerr, yerr));
			if ((xerr += colincxerr) < 0) {
				xerr &= (uint32_t)$Integer::MAX_VALUE;
				++x;
			}
			if ((x += colincx) >= bWidth) {
				x -= bWidth;
			}
			if ((yerr += colincyerr) < 0) {
				yerr &= (uint32_t)$Integer::MAX_VALUE;
				++y;
			}
			if ((y += colincy) >= bHeight) {
				y -= bHeight;
			}
		}
		if ((rowxerr += rowincxerr) < 0) {
			rowxerr &= (uint32_t)$Integer::MAX_VALUE;
			++rowx;
		}
		if ((rowx += rowincx) >= bWidth) {
			rowx -= bWidth;
		}
		if ((rowyerr += rowincyerr) < 0) {
			rowyerr &= (uint32_t)$Integer::MAX_VALUE;
			++rowy;
		}
		if ((rowy += rowincy) >= bHeight) {
			rowy -= bHeight;
		}
		out += outSpan;
	}
}

TexturePaintContext$ByteFilter::TexturePaintContext$ByteFilter() {
}

$Class* TexturePaintContext$ByteFilter::load$($String* name, bool initialize) {
	$loadClass(TexturePaintContext$ByteFilter, name, initialize, &_TexturePaintContext$ByteFilter_ClassInfo_, allocate$TexturePaintContext$ByteFilter);
	return class$;
}

$Class* TexturePaintContext$ByteFilter::class$ = nullptr;

	} // awt
} // java