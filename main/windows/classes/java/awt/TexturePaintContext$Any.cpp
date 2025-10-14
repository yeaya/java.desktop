#include <java/awt/TexturePaintContext$Any.h>

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
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

namespace java {
	namespace awt {

$FieldInfo _TexturePaintContext$Any_FieldInfo_[] = {
	{"srcRas", "Ljava/awt/image/WritableRaster;", nullptr, 0, $field(TexturePaintContext$Any, srcRas)},
	{"filter", "Z", nullptr, 0, $field(TexturePaintContext$Any, filter)},
	{}
};

$MethodInfo _TexturePaintContext$Any_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/WritableRaster;Ljava/awt/image/ColorModel;Ljava/awt/geom/AffineTransform;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(TexturePaintContext$Any::*)($WritableRaster*,$ColorModel*,$AffineTransform*,int32_t,bool)>(&TexturePaintContext$Any::init$))},
	{"makeRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"setRaster", "(IIIIIIIIIIIIIIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TexturePaintContext$Any_InnerClassesInfo_[] = {
	{"java.awt.TexturePaintContext$Any", "java.awt.TexturePaintContext", "Any", $STATIC},
	{}
};

$ClassInfo _TexturePaintContext$Any_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.TexturePaintContext$Any",
	"java.awt.TexturePaintContext",
	nullptr,
	_TexturePaintContext$Any_FieldInfo_,
	_TexturePaintContext$Any_MethodInfo_,
	nullptr,
	nullptr,
	_TexturePaintContext$Any_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.TexturePaintContext"
};

$Object* allocate$TexturePaintContext$Any($Class* clazz) {
	return $of($alloc(TexturePaintContext$Any));
}

void TexturePaintContext$Any::init$($WritableRaster* srcRas, $ColorModel* cm, $AffineTransform* xform, int32_t maxw, bool filter) {
	$var($ColorModel, var$0, cm);
	$var($AffineTransform, var$1, xform);
	int32_t var$2 = $nc(srcRas)->getWidth();
	$TexturePaintContext::init$(var$0, var$1, var$2, srcRas->getHeight(), maxw);
	$set(this, srcRas, srcRas);
	this->filter = filter;
}

$WritableRaster* TexturePaintContext$Any::makeRaster(int32_t w, int32_t h) {
	return $TexturePaintContext::makeRaster(this->colorModel, this->srcRas, w, h);
}

void TexturePaintContext$Any::setRaster(int32_t x, int32_t y, int32_t xerr, int32_t yerr, int32_t w, int32_t h, int32_t bWidth, int32_t bHeight, int32_t colincx, int32_t colincxerr, int32_t colincy, int32_t colincyerr, int32_t rowincx, int32_t rowincxerr, int32_t rowincy, int32_t rowincyerr) {
	$var($Object, data, nullptr);
	int32_t rowx = x;
	int32_t rowy = y;
	int32_t rowxerr = xerr;
	int32_t rowyerr = yerr;
	$var($WritableRaster, srcRas, this->srcRas);
	$var($WritableRaster, outRas, this->outRas);
	$var($ints, rgbs, this->filter ? $new($ints, 4) : ($ints*)nullptr);
	for (int32_t j = 0; j < h; ++j) {
		x = rowx;
		y = rowy;
		xerr = rowxerr;
		yerr = rowyerr;
		for (int32_t i = 0; i < w; ++i) {
			$assign(data, $nc(srcRas)->getDataElements(x, y, data));
			if (this->filter) {
				int32_t nextx = 0;
				int32_t nexty = 0;
				if ((nextx = x + 1) >= bWidth) {
					nextx = 0;
				}
				if ((nexty = y + 1) >= bHeight) {
					nexty = 0;
				}
				$nc(rgbs)->set(0, $nc(this->colorModel)->getRGB(data));
				$assign(data, srcRas->getDataElements(nextx, y, data));
				rgbs->set(1, $nc(this->colorModel)->getRGB(data));
				$assign(data, srcRas->getDataElements(x, nexty, data));
				rgbs->set(2, $nc(this->colorModel)->getRGB(data));
				$assign(data, srcRas->getDataElements(nextx, nexty, data));
				rgbs->set(3, $nc(this->colorModel)->getRGB(data));
				int32_t rgb = $TexturePaintContext::blend(rgbs, xerr, yerr);
				$assign(data, $nc(this->colorModel)->getDataElements(rgb, data));
			}
			$nc(outRas)->setDataElements(i, j, data);
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
	}
}

TexturePaintContext$Any::TexturePaintContext$Any() {
}

$Class* TexturePaintContext$Any::load$($String* name, bool initialize) {
	$loadClass(TexturePaintContext$Any, name, initialize, &_TexturePaintContext$Any_ClassInfo_, allocate$TexturePaintContext$Any);
	return class$;
}

$Class* TexturePaintContext$Any::class$ = nullptr;

	} // awt
} // java