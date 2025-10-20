#include <java/awt/TexturePaintContext$Byte.h>

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
#include <sun/awt/image/ByteComponentRaster.h>
#include <sun/awt/image/ByteInterleavedRaster.h>
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
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;
using $ByteInterleavedRaster = ::sun::awt::image::ByteInterleavedRaster;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace java {
	namespace awt {

$FieldInfo _TexturePaintContext$Byte_FieldInfo_[] = {
	{"srcRas", "Lsun/awt/image/ByteInterleavedRaster;", nullptr, 0, $field(TexturePaintContext$Byte, srcRas)},
	{"inData", "[B", nullptr, 0, $field(TexturePaintContext$Byte, inData)},
	{"inOff", "I", nullptr, 0, $field(TexturePaintContext$Byte, inOff)},
	{"inSpan", "I", nullptr, 0, $field(TexturePaintContext$Byte, inSpan)},
	{"outData", "[B", nullptr, 0, $field(TexturePaintContext$Byte, outData)},
	{"outOff", "I", nullptr, 0, $field(TexturePaintContext$Byte, outOff)},
	{"outSpan", "I", nullptr, 0, $field(TexturePaintContext$Byte, outSpan)},
	{}
};

$MethodInfo _TexturePaintContext$Byte_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/ByteInterleavedRaster;Ljava/awt/image/ColorModel;Ljava/awt/geom/AffineTransform;I)V", nullptr, $PUBLIC, $method(static_cast<void(TexturePaintContext$Byte::*)($ByteInterleavedRaster*,$ColorModel*,$AffineTransform*,int32_t)>(&TexturePaintContext$Byte::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"makeRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"setRaster", "(IIIIIIIIIIIIIIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TexturePaintContext$Byte_InnerClassesInfo_[] = {
	{"java.awt.TexturePaintContext$Byte", "java.awt.TexturePaintContext", "Byte", $STATIC},
	{}
};

$ClassInfo _TexturePaintContext$Byte_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.TexturePaintContext$Byte",
	"java.awt.TexturePaintContext",
	nullptr,
	_TexturePaintContext$Byte_FieldInfo_,
	_TexturePaintContext$Byte_MethodInfo_,
	nullptr,
	nullptr,
	_TexturePaintContext$Byte_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.TexturePaintContext"
};

$Object* allocate$TexturePaintContext$Byte($Class* clazz) {
	return $of($alloc(TexturePaintContext$Byte));
}

void TexturePaintContext$Byte::init$($ByteInterleavedRaster* srcRas, $ColorModel* cm, $AffineTransform* xform, int32_t maxw) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, var$0, cm);
	$var($AffineTransform, var$1, xform);
	int32_t var$2 = $nc(srcRas)->getWidth();
	$TexturePaintContext::init$(var$0, var$1, var$2, srcRas->getHeight(), maxw);
	$set(this, srcRas, srcRas);
	$set(this, inData, $nc(srcRas)->getDataStorage());
	this->inSpan = srcRas->getScanlineStride();
	this->inOff = srcRas->getDataOffset(0);
}

$WritableRaster* TexturePaintContext$Byte::makeRaster(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($WritableRaster, ras, makeByteRaster(this->srcRas, w, h));
	$var($ByteInterleavedRaster, biRas, $cast($ByteInterleavedRaster, ras));
	$set(this, outData, $nc(biRas)->getDataStorage());
	this->outSpan = biRas->getScanlineStride();
	this->outOff = biRas->getDataOffset(0);
	return ras;
}

void TexturePaintContext$Byte::dispose() {
	dropByteRaster(this->outRas);
}

void TexturePaintContext$Byte::setRaster(int32_t x, int32_t y, int32_t xerr, int32_t yerr, int32_t w, int32_t h, int32_t bWidth, int32_t bHeight, int32_t colincx, int32_t colincxerr, int32_t colincy, int32_t colincyerr, int32_t rowincx, int32_t rowincxerr, int32_t rowincy, int32_t rowincyerr) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, inData, this->inData);
	$var($bytes, outData, this->outData);
	int32_t out = this->outOff;
	int32_t inSpan = this->inSpan;
	int32_t inOff = this->inOff;
	int32_t outSpan = this->outSpan;
	bool normalx = (colincx == 1 && colincxerr == 0 && colincy == 0 && colincyerr == 0);
	int32_t rowx = x;
	int32_t rowy = y;
	int32_t rowxerr = xerr;
	int32_t rowyerr = yerr;
	if (normalx) {
		outSpan -= w;
	}
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
				$nc(outData)->set(out + i, $nc(inData)->get(inOff + y * inSpan + x));
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

TexturePaintContext$Byte::TexturePaintContext$Byte() {
}

$Class* TexturePaintContext$Byte::load$($String* name, bool initialize) {
	$loadClass(TexturePaintContext$Byte, name, initialize, &_TexturePaintContext$Byte_ClassInfo_, allocate$TexturePaintContext$Byte);
	return class$;
}

$Class* TexturePaintContext$Byte::class$ = nullptr;

	} // awt
} // java