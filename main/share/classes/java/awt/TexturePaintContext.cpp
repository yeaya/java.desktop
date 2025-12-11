#include <java/awt/TexturePaintContext.h>

#include <java/awt/PaintContext.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/TexturePaintContext$Any.h>
#include <java/awt/TexturePaintContext$Byte.h>
#include <java/awt/TexturePaintContext$ByteFilter.h>
#include <java/awt/TexturePaintContext$Int.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/image/ByteInterleavedRaster.h>
#include <sun/awt/image/IntegerInterleavedRaster.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

#undef KEY_INTERPOLATION
#undef KEY_RENDERING
#undef MAX_VALUE
#undef VALUE_INTERPOLATION_NEAREST_NEIGHBOR
#undef VALUE_RENDER_QUALITY
#undef X
#undef Y

using $PaintContext = ::java::awt::PaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $TexturePaintContext$Any = ::java::awt::TexturePaintContext$Any;
using $TexturePaintContext$Byte = ::java::awt::TexturePaintContext$Byte;
using $TexturePaintContext$ByteFilter = ::java::awt::TexturePaintContext$ByteFilter;
using $TexturePaintContext$Int = ::java::awt::TexturePaintContext$Int;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ByteInterleavedRaster = ::sun::awt::image::ByteInterleavedRaster;
using $IntegerInterleavedRaster = ::sun::awt::image::IntegerInterleavedRaster;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace java {
	namespace awt {

$FieldInfo _TexturePaintContext_FieldInfo_[] = {
	{"xrgbmodel", "Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $STATIC, $staticField(TexturePaintContext, xrgbmodel)},
	{"argbmodel", "Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $STATIC, $staticField(TexturePaintContext, argbmodel)},
	{"colorModel", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(TexturePaintContext, colorModel)},
	{"bWidth", "I", nullptr, 0, $field(TexturePaintContext, bWidth)},
	{"bHeight", "I", nullptr, 0, $field(TexturePaintContext, bHeight)},
	{"maxWidth", "I", nullptr, 0, $field(TexturePaintContext, maxWidth)},
	{"outRas", "Ljava/awt/image/WritableRaster;", nullptr, 0, $field(TexturePaintContext, outRas)},
	{"xOrg", "D", nullptr, 0, $field(TexturePaintContext, xOrg)},
	{"yOrg", "D", nullptr, 0, $field(TexturePaintContext, yOrg)},
	{"incXAcross", "D", nullptr, 0, $field(TexturePaintContext, incXAcross)},
	{"incYAcross", "D", nullptr, 0, $field(TexturePaintContext, incYAcross)},
	{"incXDown", "D", nullptr, 0, $field(TexturePaintContext, incXDown)},
	{"incYDown", "D", nullptr, 0, $field(TexturePaintContext, incYDown)},
	{"colincx", "I", nullptr, 0, $field(TexturePaintContext, colincx)},
	{"colincy", "I", nullptr, 0, $field(TexturePaintContext, colincy)},
	{"colincxerr", "I", nullptr, 0, $field(TexturePaintContext, colincxerr)},
	{"colincyerr", "I", nullptr, 0, $field(TexturePaintContext, colincyerr)},
	{"rowincx", "I", nullptr, 0, $field(TexturePaintContext, rowincx)},
	{"rowincy", "I", nullptr, 0, $field(TexturePaintContext, rowincy)},
	{"rowincxerr", "I", nullptr, 0, $field(TexturePaintContext, rowincxerr)},
	{"rowincyerr", "I", nullptr, 0, $field(TexturePaintContext, rowincyerr)},
	{"xrgbRasRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/image/Raster;>;", $PRIVATE | $STATIC, $staticField(TexturePaintContext, xrgbRasRef)},
	{"argbRasRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/image/Raster;>;", $PRIVATE | $STATIC, $staticField(TexturePaintContext, argbRasRef)},
	{"byteRasRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/image/Raster;>;", $PRIVATE | $STATIC, $staticField(TexturePaintContext, byteRasRef)},
	{}
};

$MethodInfo _TexturePaintContext_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/ColorModel;Ljava/awt/geom/AffineTransform;III)V", nullptr, 0, $method(static_cast<void(TexturePaintContext::*)($ColorModel*,$AffineTransform*,int32_t,int32_t,int32_t)>(&TexturePaintContext::init$))},
	{"blend", "([III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t,int32_t)>(&TexturePaintContext::blend))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"dropByteRaster", "(Ljava/awt/image/Raster;)V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($Raster*)>(&TexturePaintContext::dropByteRaster))},
	{"dropRaster", "(Ljava/awt/image/ColorModel;Ljava/awt/image/Raster;)V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($ColorModel*,$Raster*)>(&TexturePaintContext::dropRaster))},
	{"fractAsInt", "(D)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(double)>(&TexturePaintContext::fractAsInt))},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getContext", "(Ljava/awt/image/BufferedImage;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;Ljava/awt/Rectangle;)Ljava/awt/PaintContext;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PaintContext*(*)($BufferedImage*,$AffineTransform*,$RenderingHints*,$Rectangle*)>(&TexturePaintContext::getContext))},
	{"getInternedColorModel", "(Ljava/awt/image/ColorModel;)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ColorModel*(*)($ColorModel*)>(&TexturePaintContext::getInternedColorModel))},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"isFilterableDCM", "(Ljava/awt/image/ColorModel;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ColorModel*)>(&TexturePaintContext::isFilterableDCM))},
	{"isFilterableICM", "(Ljava/awt/image/ColorModel;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ColorModel*)>(&TexturePaintContext::isFilterableICM))},
	{"isMaskOK", "(IZ)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t,bool)>(&TexturePaintContext::isMaskOK))},
	{"makeByteRaster", "(Ljava/awt/image/Raster;II)Ljava/awt/image/WritableRaster;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<$WritableRaster*(*)($Raster*,int32_t,int32_t)>(&TexturePaintContext::makeByteRaster))},
	{"makeRaster", "(Ljava/awt/image/ColorModel;Ljava/awt/image/Raster;II)Ljava/awt/image/WritableRaster;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<$WritableRaster*(*)($ColorModel*,$Raster*,int32_t,int32_t)>(&TexturePaintContext::makeRaster))},
	{"makeRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $ABSTRACT},
	{"mod", "(DD)D", nullptr, $STATIC, $method(static_cast<double(*)(double,double)>(&TexturePaintContext::mod))},
	{"setRaster", "(IIIIIIIIIIIIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TexturePaintContext_InnerClassesInfo_[] = {
	{"java.awt.TexturePaintContext$Any", "java.awt.TexturePaintContext", "Any", $STATIC},
	{"java.awt.TexturePaintContext$ByteFilter", "java.awt.TexturePaintContext", "ByteFilter", $STATIC},
	{"java.awt.TexturePaintContext$Byte", "java.awt.TexturePaintContext", "Byte", $STATIC},
	{"java.awt.TexturePaintContext$Int", "java.awt.TexturePaintContext", "Int", $STATIC},
	{}
};

$ClassInfo _TexturePaintContext_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.awt.TexturePaintContext",
	"java.lang.Object",
	"java.awt.PaintContext",
	_TexturePaintContext_FieldInfo_,
	_TexturePaintContext_MethodInfo_,
	nullptr,
	nullptr,
	_TexturePaintContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.TexturePaintContext$Any,java.awt.TexturePaintContext$ByteFilter,java.awt.TexturePaintContext$Byte,java.awt.TexturePaintContext$Int"
};

$Object* allocate$TexturePaintContext($Class* clazz) {
	return $of($alloc(TexturePaintContext));
}

$ColorModel* TexturePaintContext::xrgbmodel = nullptr;
$ColorModel* TexturePaintContext::argbmodel = nullptr;
$WeakReference* TexturePaintContext::xrgbRasRef = nullptr;
$WeakReference* TexturePaintContext::argbRasRef = nullptr;
$WeakReference* TexturePaintContext::byteRasRef = nullptr;

$PaintContext* TexturePaintContext::getContext($BufferedImage* bufImg, $AffineTransform* xform, $RenderingHints* hints, $Rectangle* devBounds) {
	$init(TexturePaintContext);
	$useLocalCurrentObjectStackCache();
	$var($WritableRaster, raster, $nc(bufImg)->getRaster());
	$var($ColorModel, cm, bufImg->getColorModel());
	int32_t maxw = $nc(devBounds)->width;
	$init($RenderingHints);
	$var($Object, val, $nc(hints)->get($RenderingHints::KEY_INTERPOLATION));
	bool filter = (val == nullptr ? ($equals(hints->get($RenderingHints::KEY_RENDERING), $RenderingHints::VALUE_RENDER_QUALITY)) : (!$equals(val, $RenderingHints::VALUE_INTERPOLATION_NEAREST_NEIGHBOR)));
	if ($instanceOf($IntegerInterleavedRaster, raster) && (!filter || isFilterableDCM(cm))) {
		$var($IntegerInterleavedRaster, iir, $cast($IntegerInterleavedRaster, raster));
		bool var$0 = $nc(iir)->getNumDataElements() == 1;
		if (var$0 && iir->getPixelStride() == 1) {
			return $new($TexturePaintContext$Int, iir, cm, xform, maxw, filter);
		}
	} else if ($instanceOf($ByteInterleavedRaster, raster)) {
		$var($ByteInterleavedRaster, bir, $cast($ByteInterleavedRaster, raster));
		bool var$1 = $nc(bir)->getNumDataElements() == 1;
		if (var$1 && bir->getPixelStride() == 1) {
			if (filter) {
				if (isFilterableICM(cm)) {
					return $new($TexturePaintContext$ByteFilter, bir, cm, xform, maxw);
				}
			} else {
				return $new($TexturePaintContext$Byte, bir, cm, xform, maxw);
			}
		}
	}
	return $new($TexturePaintContext$Any, raster, cm, xform, maxw, filter);
}

bool TexturePaintContext::isFilterableICM($ColorModel* cm) {
	$init(TexturePaintContext);
	if ($instanceOf($IndexColorModel, cm)) {
		$var($IndexColorModel, icm, $cast($IndexColorModel, cm));
		if ($nc(icm)->getMapSize() <= 256) {
			return true;
		}
	}
	return false;
}

bool TexturePaintContext::isFilterableDCM($ColorModel* cm) {
	$init(TexturePaintContext);
	if ($instanceOf($DirectColorModel, cm)) {
		$var($DirectColorModel, dcm, $cast($DirectColorModel, cm));
		bool var$2 = isMaskOK($nc(dcm)->getAlphaMask(), true);
		bool var$1 = var$2 && isMaskOK($nc(dcm)->getRedMask(), false);
		bool var$0 = var$1 && isMaskOK($nc(dcm)->getGreenMask(), false);
		return (var$0 && isMaskOK($nc(dcm)->getBlueMask(), false));
	}
	return false;
}

bool TexturePaintContext::isMaskOK(int32_t mask, bool canbezero) {
	$init(TexturePaintContext);
	if (canbezero && mask == 0) {
		return true;
	}
	return (mask == 255 || mask == 0x0000FF00 || mask == 0x00FF0000 || mask == (int32_t)0xFF000000);
}

$ColorModel* TexturePaintContext::getInternedColorModel($ColorModel* cm) {
	$init(TexturePaintContext);
	if (TexturePaintContext::xrgbmodel == cm || $nc(TexturePaintContext::xrgbmodel)->equals(cm)) {
		return TexturePaintContext::xrgbmodel;
	}
	if (TexturePaintContext::argbmodel == cm || $nc(TexturePaintContext::argbmodel)->equals(cm)) {
		return TexturePaintContext::argbmodel;
	}
	return cm;
}

void TexturePaintContext::init$($ColorModel* cm, $AffineTransform* xform$renamed, int32_t bWidth, int32_t bHeight, int32_t maxw) {
	$var($AffineTransform, xform, xform$renamed);
	$set(this, colorModel, getInternedColorModel(cm));
	this->bWidth = bWidth;
	this->bHeight = bHeight;
	this->maxWidth = maxw;
	try {
		$assign(xform, $nc(xform)->createInverse());
	} catch ($NoninvertibleTransformException& e) {
		$nc(xform)->setToScale((double)0, (double)0);
	}
	this->incXAcross = mod($nc(xform)->getScaleX(), (double)bWidth);
	this->incYAcross = mod($nc(xform)->getShearY(), (double)bHeight);
	this->incXDown = mod($nc(xform)->getShearX(), (double)bWidth);
	this->incYDown = mod($nc(xform)->getScaleY(), (double)bHeight);
	this->xOrg = $nc(xform)->getTranslateX();
	this->yOrg = xform->getTranslateY();
	this->colincx = $cast(int32_t, this->incXAcross);
	this->colincy = $cast(int32_t, this->incYAcross);
	this->colincxerr = fractAsInt(this->incXAcross);
	this->colincyerr = fractAsInt(this->incYAcross);
	this->rowincx = $cast(int32_t, this->incXDown);
	this->rowincy = $cast(int32_t, this->incYDown);
	this->rowincxerr = fractAsInt(this->incXDown);
	this->rowincyerr = fractAsInt(this->incYDown);
}

int32_t TexturePaintContext::fractAsInt(double d) {
	$init(TexturePaintContext);
	return $cast(int32_t, (($Double::mod(d, 1.0)) * $Integer::MAX_VALUE));
}

double TexturePaintContext::mod(double num, double den) {
	$init(TexturePaintContext);
	num = $Double::mod(num, den);
	if (num < 0) {
		num += den;
		if (num >= den) {
			num = (double)0;
		}
	}
	return num;
}

void TexturePaintContext::dispose() {
	dropRaster(this->colorModel, this->outRas);
}

$ColorModel* TexturePaintContext::getColorModel() {
	return this->colorModel;
}

$Raster* TexturePaintContext::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	bool var$0 = this->outRas == nullptr || $nc(this->outRas)->getWidth() < w;
	if (var$0 || $nc(this->outRas)->getHeight() < h) {
		$set(this, outRas, makeRaster((h == 1 ? $Math::max(w, this->maxWidth) : w), h));
	}
	double X = mod(this->xOrg + x * this->incXAcross + y * this->incXDown, (double)this->bWidth);
	double Y = mod(this->yOrg + x * this->incYAcross + y * this->incYDown, (double)this->bHeight);
	int32_t var$1 = $cast(int32_t, X);
	int32_t var$2 = $cast(int32_t, Y);
	int32_t var$3 = fractAsInt(X);
	setRaster(var$1, var$2, var$3, fractAsInt(Y), w, h, this->bWidth, this->bHeight, this->colincx, this->colincxerr, this->colincy, this->colincyerr, this->rowincx, this->rowincxerr, this->rowincy, this->rowincyerr);
	$SunWritableRaster::markDirty(this->outRas);
	return this->outRas;
}

$WritableRaster* TexturePaintContext::makeRaster($ColorModel* cm, $Raster* srcRas, int32_t w, int32_t h) {
	$load(TexturePaintContext);
	$synchronized(class$) {
		$init(TexturePaintContext);
		$useLocalCurrentObjectStackCache();
		if (TexturePaintContext::xrgbmodel == cm) {
			if (TexturePaintContext::xrgbRasRef != nullptr) {
				$var($WritableRaster, wr, $cast($WritableRaster, $nc(TexturePaintContext::xrgbRasRef)->get()));
				bool var$0 = wr != nullptr && wr->getWidth() >= w;
				if (var$0 && wr->getHeight() >= h) {
					$assignStatic(TexturePaintContext::xrgbRasRef, nullptr);
					return wr;
				}
			}
			if (w <= 32 && h <= 32) {
				w = (h = 32);
			}
		} else {
			if (TexturePaintContext::argbmodel == cm) {
				if (TexturePaintContext::argbRasRef != nullptr) {
					$var($WritableRaster, wr, $cast($WritableRaster, $nc(TexturePaintContext::argbRasRef)->get()));
					bool var$1 = wr != nullptr && wr->getWidth() >= w;
					if (var$1 && wr->getHeight() >= h) {
						$assignStatic(TexturePaintContext::argbRasRef, nullptr);
						return wr;
					}
				}
				if (w <= 32 && h <= 32) {
					w = (h = 32);
				}
			}
		}
		if (srcRas != nullptr) {
			return srcRas->createCompatibleWritableRaster(w, h);
		} else {
			return $nc(cm)->createCompatibleWritableRaster(w, h);
		}
	}
}

void TexturePaintContext::dropRaster($ColorModel* cm, $Raster* outRas) {
	$load(TexturePaintContext);
	$synchronized(class$) {
		$init(TexturePaintContext);
		if (outRas == nullptr) {
			return;
		}
		if (TexturePaintContext::xrgbmodel == cm) {
			$assignStatic(TexturePaintContext::xrgbRasRef, $new($WeakReference, outRas));
		} else {
			if (TexturePaintContext::argbmodel == cm) {
				$assignStatic(TexturePaintContext::argbRasRef, $new($WeakReference, outRas));
			}
		}
	}
}

$WritableRaster* TexturePaintContext::makeByteRaster($Raster* srcRas, int32_t w, int32_t h) {
	$load(TexturePaintContext);
	$synchronized(class$) {
		$init(TexturePaintContext);
		if (TexturePaintContext::byteRasRef != nullptr) {
			$var($WritableRaster, wr, $cast($WritableRaster, $nc(TexturePaintContext::byteRasRef)->get()));
			bool var$0 = wr != nullptr && wr->getWidth() >= w;
			if (var$0 && wr->getHeight() >= h) {
				$assignStatic(TexturePaintContext::byteRasRef, nullptr);
				return wr;
			}
		}
		if (w <= 32 && h <= 32) {
			w = (h = 32);
		}
		return $nc(srcRas)->createCompatibleWritableRaster(w, h);
	}
}

void TexturePaintContext::dropByteRaster($Raster* outRas) {
	$load(TexturePaintContext);
	$synchronized(class$) {
		$init(TexturePaintContext);
		if (outRas == nullptr) {
			return;
		}
		$assignStatic(TexturePaintContext::byteRasRef, $new($WeakReference, outRas));
	}
}

int32_t TexturePaintContext::blend($ints* rgbs, int32_t xmul, int32_t ymul) {
	$init(TexturePaintContext);
	xmul = ((int32_t)((uint32_t)xmul >> 19));
	ymul = ((int32_t)((uint32_t)ymul >> 19));
	int32_t accumA = 0;
	int32_t accumR = 0;
	int32_t accumG = 0;
	int32_t accumB = 0;
	accumA = (accumR = (accumG = (accumB = 0)));
	for (int32_t i = 0; i < 4; ++i) {
		int32_t rgb = $nc(rgbs)->get(i);
		xmul = (1 << 12) - xmul;
		if (((int32_t)(i & (uint32_t)1)) == 0) {
			ymul = (1 << 12) - ymul;
		}
		int32_t factor = xmul * ymul;
		if (factor != 0) {
			accumA += (((int32_t)((uint32_t)rgb >> 24)) * factor);
			accumR += (((int32_t)(((int32_t)((uint32_t)rgb >> 16)) & (uint32_t)255)) * factor);
			accumG += (((int32_t)(((int32_t)((uint32_t)rgb >> 8)) & (uint32_t)255)) * factor);
			accumB += (((int32_t)((rgb) & (uint32_t)255)) * factor);
		}
	}
	return ((((((int32_t)((uint32_t)(accumA + (1 << 23)) >> 24)) << 24) | (((int32_t)((uint32_t)(accumR + (1 << 23)) >> 24)) << 16)) | (((int32_t)((uint32_t)(accumG + (1 << 23)) >> 24)) << 8)) | ((int32_t)((uint32_t)(accumB + (1 << 23)) >> 24)));
}

void clinit$TexturePaintContext($Class* class$) {
	$assignStatic(TexturePaintContext::xrgbmodel, $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255));
	$assignStatic(TexturePaintContext::argbmodel, $ColorModel::getRGBdefault());
}

TexturePaintContext::TexturePaintContext() {
}

$Class* TexturePaintContext::load$($String* name, bool initialize) {
	$loadClass(TexturePaintContext, name, initialize, &_TexturePaintContext_ClassInfo_, clinit$TexturePaintContext, allocate$TexturePaintContext);
	return class$;
}

$Class* TexturePaintContext::class$ = nullptr;

	} // awt
} // java