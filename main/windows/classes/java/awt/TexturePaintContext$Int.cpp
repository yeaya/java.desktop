#include <java/awt/TexturePaintContext$Int.h>

#include <java/awt/TexturePaintContext.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/image/IntegerInterleavedRaster.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

#undef MAX_VALUE

using $TexturePaintContext = ::java::awt::TexturePaintContext;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $IntegerInterleavedRaster = ::sun::awt::image::IntegerInterleavedRaster;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace java {
	namespace awt {

$FieldInfo _TexturePaintContext$Int_FieldInfo_[] = {
	{"srcRas", "Lsun/awt/image/IntegerInterleavedRaster;", nullptr, 0, $field(TexturePaintContext$Int, srcRas)},
	{"inData", "[I", nullptr, 0, $field(TexturePaintContext$Int, inData)},
	{"inOff", "I", nullptr, 0, $field(TexturePaintContext$Int, inOff)},
	{"inSpan", "I", nullptr, 0, $field(TexturePaintContext$Int, inSpan)},
	{"outData", "[I", nullptr, 0, $field(TexturePaintContext$Int, outData)},
	{"outOff", "I", nullptr, 0, $field(TexturePaintContext$Int, outOff)},
	{"outSpan", "I", nullptr, 0, $field(TexturePaintContext$Int, outSpan)},
	{"filter", "Z", nullptr, 0, $field(TexturePaintContext$Int, filter)},
	{}
};

$MethodInfo _TexturePaintContext$Int_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/IntegerInterleavedRaster;Ljava/awt/image/ColorModel;Ljava/awt/geom/AffineTransform;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(TexturePaintContext$Int::*)($IntegerInterleavedRaster*,$ColorModel*,$AffineTransform*,int32_t,bool)>(&TexturePaintContext$Int::init$))},
	{"makeRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"setRaster", "(IIIIIIIIIIIIIIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TexturePaintContext$Int_InnerClassesInfo_[] = {
	{"java.awt.TexturePaintContext$Int", "java.awt.TexturePaintContext", "Int", $STATIC},
	{}
};

$ClassInfo _TexturePaintContext$Int_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.TexturePaintContext$Int",
	"java.awt.TexturePaintContext",
	nullptr,
	_TexturePaintContext$Int_FieldInfo_,
	_TexturePaintContext$Int_MethodInfo_,
	nullptr,
	nullptr,
	_TexturePaintContext$Int_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.TexturePaintContext"
};

$Object* allocate$TexturePaintContext$Int($Class* clazz) {
	return $of($alloc(TexturePaintContext$Int));
}

void TexturePaintContext$Int::init$($IntegerInterleavedRaster* srcRas, $ColorModel* cm, $AffineTransform* xform, int32_t maxw, bool filter) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, var$0, cm);
	$var($AffineTransform, var$1, xform);
	int32_t var$2 = $nc(srcRas)->getWidth();
	$TexturePaintContext::init$(var$0, var$1, var$2, srcRas->getHeight(), maxw);
	$set(this, srcRas, srcRas);
	$set(this, inData, $nc(srcRas)->getDataStorage());
	this->inSpan = srcRas->getScanlineStride();
	this->inOff = srcRas->getDataOffset(0);
	this->filter = filter;
}

$WritableRaster* TexturePaintContext$Int::makeRaster(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($WritableRaster, ras, $TexturePaintContext::makeRaster(this->colorModel, this->srcRas, w, h));
	$var($IntegerInterleavedRaster, iiRas, $cast($IntegerInterleavedRaster, ras));
	$set(this, outData, $nc(iiRas)->getDataStorage());
	this->outSpan = iiRas->getScanlineStride();
	this->outOff = iiRas->getDataOffset(0);
	return ras;
}

void TexturePaintContext$Int::setRaster(int32_t x, int32_t y, int32_t xerr, int32_t yerr, int32_t w, int32_t h, int32_t bWidth, int32_t bHeight, int32_t colincx, int32_t colincxerr, int32_t colincy, int32_t colincyerr, int32_t rowincx, int32_t rowincxerr, int32_t rowincy, int32_t rowincyerr) {
	$useLocalCurrentObjectStackCache();
	$var($ints, inData, this->inData);
	$var($ints, outData, this->outData);
	int32_t out = this->outOff;
	int32_t inSpan = this->inSpan;
	int32_t inOff = this->inOff;
	int32_t outSpan = this->outSpan;
	bool filter = this->filter;
	bool normalx = (colincx == 1 && colincxerr == 0 && colincy == 0 && colincyerr == 0) && !filter;
	int32_t rowx = x;
	int32_t rowy = y;
	int32_t rowxerr = xerr;
	int32_t rowyerr = yerr;
	if (normalx) {
		outSpan -= w;
	}
	$var($ints, rgbs, filter ? $new($ints, 4) : ($ints*)nullptr);
	for (int32_t j = 0; j < h; ++j) {
		if (normalx) {
			int32_t in = inOff + rowy * inSpan + bWidth;
			x = bWidth - rowx;
			out += w;
			if (bWidth >= 32) {
				int32_t i = w;
				while (i > 0) {
					int32_t copyw = (i < x) ? i : x;
					$System::arraycopy(inData, in - x, outData, out - i, copyw);
					i -= copyw;
					if ((x -= copyw) == 0) {
						x = bWidth;
					}
				}
			} else {
				for (int32_t i = w; i > 0; --i) {
					$nc(outData)->set(out - i, $nc(inData)->get(in - x));
					if (--x == 0) {
						x = bWidth;
					}
				}
			}
		} else {
			x = rowx;
			y = rowy;
			xerr = rowxerr;
			yerr = rowyerr;
			for (int32_t i = 0; i < w; ++i) {
				if (filter) {
					int32_t nextx = 0;
					int32_t nexty = 0;
					if ((nextx = x + 1) >= bWidth) {
						nextx = 0;
					}
					if ((nexty = y + 1) >= bHeight) {
						nexty = 0;
					}
					$nc(rgbs)->set(0, $nc(inData)->get(inOff + y * inSpan + x));
					rgbs->set(1, inData->get(inOff + y * inSpan + nextx));
					rgbs->set(2, inData->get(inOff + nexty * inSpan + x));
					rgbs->set(3, inData->get(inOff + nexty * inSpan + nextx));
					$nc(outData)->set(out + i, $TexturePaintContext::blend(rgbs, xerr, yerr));
				} else {
					$nc(outData)->set(out + i, $nc(inData)->get(inOff + y * inSpan + x));
				}
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

TexturePaintContext$Int::TexturePaintContext$Int() {
}

$Class* TexturePaintContext$Int::load$($String* name, bool initialize) {
	$loadClass(TexturePaintContext$Int, name, initialize, &_TexturePaintContext$Int_ClassInfo_, allocate$TexturePaintContext$Int);
	return class$;
}

$Class* TexturePaintContext$Int::class$ = nullptr;

	} // awt
} // java