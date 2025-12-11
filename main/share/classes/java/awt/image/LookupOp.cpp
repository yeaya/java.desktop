#include <java/awt/image/LookupOp.h>

#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ByteLookupTable.h>
#include <java/awt/image/ColorConvertOp.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/LookupTable.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RasterOp.h>
#include <java/awt/image/ShortLookupTable.h>
#include <java/awt/image/WritableRaster.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/ImagingLib.h>
#include <jcpp.h>

#undef BITMASK
#undef TYPE_BYTE
#undef TYPE_USHORT

using $byteArray2 = $Array<int8_t, 2>;
using $shortArray2 = $Array<int16_t, 2>;
using $RenderingHints = ::java::awt::RenderingHints;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ByteLookupTable = ::java::awt::image::ByteLookupTable;
using $ColorConvertOp = ::java::awt::image::ColorConvertOp;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $LookupTable = ::java::awt::image::LookupTable;
using $Raster = ::java::awt::image::Raster;
using $RasterOp = ::java::awt::image::RasterOp;
using $ShortLookupTable = ::java::awt::image::ShortLookupTable;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $ImagingLib = ::sun::awt::image::ImagingLib;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _LookupOp_FieldInfo_[] = {
	{"ltable", "Ljava/awt/image/LookupTable;", nullptr, $PRIVATE, $field(LookupOp, ltable)},
	{"numComponents", "I", nullptr, $PRIVATE, $field(LookupOp, numComponents)},
	{"hints", "Ljava/awt/RenderingHints;", nullptr, 0, $field(LookupOp, hints)},
	{}
};

$MethodInfo _LookupOp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/image/LookupTable;Ljava/awt/RenderingHints;)V", nullptr, $PUBLIC, $method(static_cast<void(LookupOp::*)($LookupTable*,$RenderingHints*)>(&LookupOp::init$))},
	{"byteFilter", "(Ljava/awt/image/ByteLookupTable;Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;III)V", nullptr, $PRIVATE, $method(static_cast<void(LookupOp::*)($ByteLookupTable*,$Raster*,$WritableRaster*,int32_t,int32_t,int32_t)>(&LookupOp::byteFilter))},
	{"createCompatibleDestImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/ColorModel;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleDestRaster", "(Ljava/awt/image/Raster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"filter", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $FINAL},
	{"filter", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $FINAL},
	{"getBounds2D", "(Ljava/awt/image/BufferedImage;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getBounds2D", "(Ljava/awt/image/Raster;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getPoint2D", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $FINAL},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC | $FINAL},
	{"getTable", "()Ljava/awt/image/LookupTable;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$LookupTable*(LookupOp::*)()>(&LookupOp::getTable))},
	{"shortFilter", "(Ljava/awt/image/ShortLookupTable;Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;III)V", nullptr, $PRIVATE, $method(static_cast<void(LookupOp::*)($ShortLookupTable*,$Raster*,$WritableRaster*,int32_t,int32_t,int32_t)>(&LookupOp::shortFilter))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LookupOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.LookupOp",
	"java.lang.Object",
	"java.awt.image.BufferedImageOp,java.awt.image.RasterOp",
	_LookupOp_FieldInfo_,
	_LookupOp_MethodInfo_
};

$Object* allocate$LookupOp($Class* clazz) {
	return $of($alloc(LookupOp));
}

int32_t LookupOp::hashCode() {
	 return this->$BufferedImageOp::hashCode();
}

bool LookupOp::equals(Object$* arg0) {
	 return this->$BufferedImageOp::equals(arg0);
}

$Object* LookupOp::clone() {
	 return this->$BufferedImageOp::clone();
}

$String* LookupOp::toString() {
	 return this->$BufferedImageOp::toString();
}

void LookupOp::finalize() {
	this->$BufferedImageOp::finalize();
}

void LookupOp::init$($LookupTable* lookup, $RenderingHints* hints) {
	$set(this, ltable, lookup);
	$set(this, hints, hints);
	this->numComponents = $nc(this->ltable)->getNumComponents();
}

$LookupTable* LookupOp::getTable() {
	return this->ltable;
}

$BufferedImage* LookupOp::filter($BufferedImage* src, $BufferedImage* dst$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, dst, dst$renamed);
	$var($ColorModel, srcCM, $nc(src)->getColorModel());
	int32_t numBands = $nc(srcCM)->getNumColorComponents();
	$var($ColorModel, dstCM, nullptr);
	if ($instanceOf($IndexColorModel, srcCM)) {
		$throwNew($IllegalArgumentException, "LookupOp cannot be performed on an indexed image"_s);
	}
	int32_t numComponents = $nc(this->ltable)->getNumComponents();
	bool var$0 = numComponents != 1 && numComponents != srcCM->getNumComponents();
	if (var$0 && numComponents != srcCM->getNumColorComponents()) {
		$throwNew($IllegalArgumentException, $$str({"Number of arrays in the  lookup table ("_s, $$str(numComponents), " is not compatible with the  src image: "_s, src}));
	}
	bool needToConvert = false;
	int32_t width = src->getWidth();
	int32_t height = src->getHeight();
	if (dst == nullptr) {
		$assign(dst, createCompatibleDestImage(src, nullptr));
		$assign(dstCM, srcCM);
	} else {
		if (width != $nc(dst)->getWidth()) {
			$throwNew($IllegalArgumentException, $$str({"Src width ("_s, $$str(width), ") not equal to dst width ("_s, $$str(dst->getWidth()), ")"_s}));
		}
		if (height != $nc(dst)->getHeight()) {
			$throwNew($IllegalArgumentException, $$str({"Src height ("_s, $$str(height), ") not equal to dst height ("_s, $$str(dst->getHeight()), ")"_s}));
		}
		$assign(dstCM, $nc(dst)->getColorModel());
		int32_t var$1 = $nc($(srcCM->getColorSpace()))->getType();
		if (var$1 != $nc($($nc(dstCM)->getColorSpace()))->getType()) {
			needToConvert = true;
			$assign(dst, createCompatibleDestImage(src, nullptr));
		}
	}
	$var($BufferedImage, origDst, dst);
	if ($ImagingLib::filter(static_cast<$BufferedImageOp*>(this), src, dst) == nullptr) {
		$var($WritableRaster, srcRaster, src->getRaster());
		$var($WritableRaster, dstRaster, $nc(dst)->getRaster());
		if (srcCM->hasAlpha()) {
			if (numBands - 1 == numComponents || numComponents == 1) {
				int32_t minx = $nc(srcRaster)->getMinX();
				int32_t miny = srcRaster->getMinY();
				$var($ints, bands, $new($ints, numBands - 1));
				for (int32_t i = 0; i < numBands - 1; ++i) {
					bands->set(i, i);
				}
				int32_t var$2 = minx;
				int32_t var$3 = miny;
				int32_t var$4 = srcRaster->getWidth();
				$assign(srcRaster, srcRaster->createWritableChild(var$2, var$3, var$4, srcRaster->getHeight(), minx, miny, bands));
			}
		}
		if ($nc(dstCM)->hasAlpha()) {
			int32_t dstNumBands = $nc(dstRaster)->getNumBands();
			if (dstNumBands - 1 == numComponents || numComponents == 1) {
				int32_t minx = dstRaster->getMinX();
				int32_t miny = dstRaster->getMinY();
				$var($ints, bands, $new($ints, numBands - 1));
				for (int32_t i = 0; i < numBands - 1; ++i) {
					bands->set(i, i);
				}
				int32_t var$5 = minx;
				int32_t var$6 = miny;
				int32_t var$7 = dstRaster->getWidth();
				$assign(dstRaster, dstRaster->createWritableChild(var$5, var$6, var$7, dstRaster->getHeight(), minx, miny, bands));
			}
		}
		filter(static_cast<$Raster*>(srcRaster), dstRaster);
	}
	if (needToConvert) {
		$var($ColorConvertOp, ccop, $new($ColorConvertOp, this->hints));
		ccop->filter(dst, origDst);
	}
	return origDst;
}

$WritableRaster* LookupOp::filter($Raster* src, $WritableRaster* dst$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($WritableRaster, dst, dst$renamed);
	int32_t numBands = $nc(src)->getNumBands();
	int32_t height = src->getHeight();
	int32_t width = src->getWidth();
	$var($ints, srcPix, $new($ints, numBands));
	if (dst == nullptr) {
		$assign(dst, createCompatibleDestRaster(src));
	} else {
		bool var$1 = height != $nc(dst)->getHeight();
		if (var$1 || width != $nc(dst)->getWidth()) {
			$throwNew($IllegalArgumentException, "Width or height of Rasters do not match"_s);
		}
	}
	int32_t dstLength = $nc(dst)->getNumBands();
	if (numBands != dstLength) {
		$throwNew($IllegalArgumentException, $$str({"Number of channels in the src ("_s, $$str(numBands), ") does not match number of channels in the destination ("_s, $$str(dstLength), ")"_s}));
	}
	int32_t numComponents = $nc(this->ltable)->getNumComponents();
	if (numComponents != 1 && numComponents != src->getNumBands()) {
		$throwNew($IllegalArgumentException, $$str({"Number of arrays in the  lookup table ("_s, $$str(numComponents), " is not compatible with the  src Raster: "_s, src}));
	}
	if ($ImagingLib::filter(static_cast<$RasterOp*>(this), src, dst) != nullptr) {
		return dst;
	}
	if ($instanceOf($ByteLookupTable, this->ltable)) {
		byteFilter($cast($ByteLookupTable, this->ltable), src, dst, width, height, numBands);
	} else if ($instanceOf($ShortLookupTable, this->ltable)) {
		shortFilter($cast($ShortLookupTable, this->ltable), src, dst, width, height, numBands);
	} else {
		int32_t sminX = src->getMinX();
		int32_t sY = src->getMinY();
		int32_t dminX = dst->getMinX();
		int32_t dY = dst->getMinY();
		for (int32_t y = 0; y < height; ++y, ++sY, ++dY) {
			int32_t sX = sminX;
			int32_t dX = dminX;
			for (int32_t x = 0; x < width; ++x, ++sX, ++dX) {
				src->getPixel(sX, sY, srcPix);
				$nc(this->ltable)->lookupPixel(srcPix, srcPix);
				dst->setPixel(dX, dY, srcPix);
			}
		}
	}
	return dst;
}

$Rectangle2D* LookupOp::getBounds2D($BufferedImage* src) {
	return getBounds2D($(static_cast<$Raster*>($nc(src)->getRaster())));
}

$Rectangle2D* LookupOp::getBounds2D($Raster* src) {
	return $nc(src)->getBounds();
}

$BufferedImage* LookupOp::createCompatibleDestImage($BufferedImage* src, $ColorModel* destCM) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, image, nullptr);
	int32_t w = $nc(src)->getWidth();
	int32_t h = src->getHeight();
	int32_t transferType = $DataBuffer::TYPE_BYTE;
	if (destCM == nullptr) {
		$var($ColorModel, cm, src->getColorModel());
		$var($Raster, raster, src->getRaster());
		if ($instanceOf($ComponentColorModel, cm)) {
			$var($DataBuffer, db, $nc(raster)->getDataBuffer());
			bool hasAlpha = $nc(cm)->hasAlpha();
			bool isPre = cm->isAlphaPremultiplied();
			int32_t trans = cm->getTransparency();
			$var($ints, nbits, nullptr);
			if ($instanceOf($ByteLookupTable, this->ltable)) {
				if ($nc(db)->getDataType() == $DataBuffer::TYPE_USHORT) {
					if (hasAlpha) {
						$assign(nbits, $new($ints, 2));
						if (trans == $Transparency::BITMASK) {
							nbits->set(1, 1);
						} else {
							nbits->set(1, 8);
						}
					} else {
						$assign(nbits, $new($ints, 1));
					}
					$nc(nbits)->set(0, 8);
				}
			} else if ($instanceOf($ShortLookupTable, this->ltable)) {
				transferType = $DataBuffer::TYPE_USHORT;
				if ($nc(db)->getDataType() == $DataBuffer::TYPE_BYTE) {
					if (hasAlpha) {
						$assign(nbits, $new($ints, 2));
						if (trans == $Transparency::BITMASK) {
							nbits->set(1, 1);
						} else {
							nbits->set(1, 16);
						}
					} else {
						$assign(nbits, $new($ints, 1));
					}
					$nc(nbits)->set(0, 16);
				}
			}
			if (nbits != nullptr) {
				$assign(cm, $new($ComponentColorModel, $(cm->getColorSpace()), nbits, hasAlpha, isPre, trans, transferType));
			}
		}
		$var($ColorModel, var$0, cm);
		$var($WritableRaster, var$1, $nc(cm)->createCompatibleWritableRaster(w, h));
		$assign(image, $new($BufferedImage, var$0, var$1, cm->isAlphaPremultiplied(), ($Hashtable*)nullptr));
	} else {
		$var($ColorModel, var$2, destCM);
		$var($WritableRaster, var$3, $nc(destCM)->createCompatibleWritableRaster(w, h));
		$assign(image, $new($BufferedImage, var$2, var$3, destCM->isAlphaPremultiplied(), ($Hashtable*)nullptr));
	}
	return image;
}

$WritableRaster* LookupOp::createCompatibleDestRaster($Raster* src) {
	return $nc(src)->createCompatibleWritableRaster();
}

$Point2D* LookupOp::getPoint2D($Point2D* srcPt, $Point2D* dstPt$renamed) {
	$var($Point2D, dstPt, dstPt$renamed);
	if (dstPt == nullptr) {
		$assign(dstPt, $new($Point2D$Float));
	}
	double var$0 = $nc(srcPt)->getX();
	$nc(dstPt)->setLocation(var$0, srcPt->getY());
	return dstPt;
}

$RenderingHints* LookupOp::getRenderingHints() {
	return this->hints;
}

void LookupOp::byteFilter($ByteLookupTable* lookup, $Raster* src, $WritableRaster* dst, int32_t width, int32_t height, int32_t numBands) {
	$useLocalCurrentObjectStackCache();
	$var($ints, srcPix, nullptr);
	$var($byteArray2, table, $nc(lookup)->getTable());
	int32_t offset = lookup->getOffset();
	int32_t tidx = 0;
	int32_t step = 1;
	if ($nc(table)->length == 1) {
		step = 0;
	}
	int32_t x = 0;
	int32_t y = 0;
	int32_t band = 0;
	int32_t len = $nc($nc(table)->get(0))->length;
	for (y = 0; y < height; ++y) {
		tidx = 0;
		for (band = 0; band < numBands; ++band, tidx += step) {
			$assign(srcPix, $nc(src)->getSamples(0, y, width, 1, band, srcPix));
			for (x = 0; x < width; ++x) {
				int32_t index = $nc(srcPix)->get(x) - offset;
				if (index < 0 || index > len) {
					$throwNew($IllegalArgumentException, $$str({"index ("_s, $$str(index), "(out of range:  srcPix["_s, $$str(x), "]="_s, $$str(srcPix->get(x)), " offset="_s, $$str(offset)}));
				}
				srcPix->set(x, $nc(table->get(tidx))->get(index));
			}
			$nc(dst)->setSamples(0, y, width, 1, band, srcPix);
		}
	}
}

void LookupOp::shortFilter($ShortLookupTable* lookup, $Raster* src, $WritableRaster* dst, int32_t width, int32_t height, int32_t numBands) {
	$useLocalCurrentObjectStackCache();
	int32_t band = 0;
	$var($ints, srcPix, nullptr);
	$var($shortArray2, table, $nc(lookup)->getTable());
	int32_t offset = lookup->getOffset();
	int32_t tidx = 0;
	int32_t step = 1;
	if ($nc(table)->length == 1) {
		step = 0;
	}
	int32_t x = 0;
	int32_t y = 0;
	int32_t index = 0;
	int32_t maxShort = (1 << 16) - 1;
	for (y = 0; y < height; ++y) {
		tidx = 0;
		for (band = 0; band < numBands; ++band, tidx += step) {
			$assign(srcPix, $nc(src)->getSamples(0, y, width, 1, band, srcPix));
			for (x = 0; x < width; ++x) {
				index = $nc(srcPix)->get(x) - offset;
				if (index < 0 || index > maxShort) {
					$throwNew($IllegalArgumentException, $$str({"index out of range "_s, $$str(index), " x is "_s, $$str(x), "srcPix[x]="_s, $$str(srcPix->get(x)), " offset="_s, $$str(offset)}));
				}
				srcPix->set(x, $nc($nc(table)->get(tidx))->get(index));
			}
			$nc(dst)->setSamples(0, y, width, 1, band, srcPix);
		}
	}
}

LookupOp::LookupOp() {
}

$Class* LookupOp::load$($String* name, bool initialize) {
	$loadClass(LookupOp, name, initialize, &_LookupOp_ClassInfo_, allocate$LookupOp);
	return class$;
}

$Class* LookupOp::class$ = nullptr;

		} // image
	} // awt
} // java