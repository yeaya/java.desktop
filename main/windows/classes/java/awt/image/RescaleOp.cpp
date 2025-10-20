#include <java/awt/image/RescaleOp.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ByteLookupTable.h>
#include <java/awt/image/ColorConvertOp.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/LookupOp.h>
#include <java/awt/image/LookupTable.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RasterOp.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/ShortLookupTable.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/ImagingLib.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_USHORT

using $byteArray2 = $Array<int8_t, 2>;
using $shortArray2 = $Array<int16_t, 2>;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ByteLookupTable = ::java::awt::image::ByteLookupTable;
using $ColorConvertOp = ::java::awt::image::ColorConvertOp;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $LookupOp = ::java::awt::image::LookupOp;
using $LookupTable = ::java::awt::image::LookupTable;
using $Raster = ::java::awt::image::Raster;
using $RasterOp = ::java::awt::image::RasterOp;
using $SampleModel = ::java::awt::image::SampleModel;
using $ShortLookupTable = ::java::awt::image::ShortLookupTable;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $ImagingLib = ::sun::awt::image::ImagingLib;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _RescaleOp_FieldInfo_[] = {
	{"scaleFactors", "[F", nullptr, 0, $field(RescaleOp, scaleFactors)},
	{"offsets", "[F", nullptr, 0, $field(RescaleOp, offsets)},
	{"length", "I", nullptr, 0, $field(RescaleOp, length)},
	{"hints", "Ljava/awt/RenderingHints;", nullptr, 0, $field(RescaleOp, hints)},
	{"srcNbits", "I", nullptr, $PRIVATE, $field(RescaleOp, srcNbits)},
	{"dstNbits", "I", nullptr, $PRIVATE, $field(RescaleOp, dstNbits)},
	{}
};

$MethodInfo _RescaleOp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([F[FLjava/awt/RenderingHints;)V", nullptr, $PUBLIC, $method(static_cast<void(RescaleOp::*)($floats*,$floats*,$RenderingHints*)>(&RescaleOp::init$))},
	{"<init>", "(FFLjava/awt/RenderingHints;)V", nullptr, $PUBLIC, $method(static_cast<void(RescaleOp::*)(float,float,$RenderingHints*)>(&RescaleOp::init$))},
	{"canUseLookup", "(Ljava/awt/image/Raster;Ljava/awt/image/Raster;)Z", nullptr, $PRIVATE, $method(static_cast<bool(RescaleOp::*)($Raster*,$Raster*)>(&RescaleOp::canUseLookup))},
	{"createByteLut", "([F[FII)Ljava/awt/image/ByteLookupTable;", nullptr, $PRIVATE, $method(static_cast<$ByteLookupTable*(RescaleOp::*)($floats*,$floats*,int32_t,int32_t)>(&RescaleOp::createByteLut))},
	{"createCompatibleDestImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/ColorModel;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleDestRaster", "(Ljava/awt/image/Raster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createShortLut", "([F[FII)Ljava/awt/image/ShortLookupTable;", nullptr, $PRIVATE, $method(static_cast<$ShortLookupTable*(RescaleOp::*)($floats*,$floats*,int32_t,int32_t)>(&RescaleOp::createShortLut))},
	{"filter", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $FINAL},
	{"filter", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $FINAL},
	{"filterRasterImpl", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;IZ)Ljava/awt/image/WritableRaster;", nullptr, $PRIVATE, $method(static_cast<$WritableRaster*(RescaleOp::*)($Raster*,$WritableRaster*,int32_t,bool)>(&RescaleOp::filterRasterImpl))},
	{"getBounds2D", "(Ljava/awt/image/BufferedImage;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getBounds2D", "(Ljava/awt/image/Raster;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getNumFactors", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(RescaleOp::*)()>(&RescaleOp::getNumFactors))},
	{"getOffsets", "([F)[F", nullptr, $PUBLIC | $FINAL, $method(static_cast<$floats*(RescaleOp::*)($floats*)>(&RescaleOp::getOffsets))},
	{"getPoint2D", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $FINAL},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC | $FINAL},
	{"getScaleFactors", "([F)[F", nullptr, $PUBLIC | $FINAL, $method(static_cast<$floats*(RescaleOp::*)($floats*)>(&RescaleOp::getScaleFactors))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RescaleOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.RescaleOp",
	"java.lang.Object",
	"java.awt.image.BufferedImageOp,java.awt.image.RasterOp",
	_RescaleOp_FieldInfo_,
	_RescaleOp_MethodInfo_
};

$Object* allocate$RescaleOp($Class* clazz) {
	return $of($alloc(RescaleOp));
}

int32_t RescaleOp::hashCode() {
	 return this->$BufferedImageOp::hashCode();
}

bool RescaleOp::equals(Object$* arg0) {
	 return this->$BufferedImageOp::equals(arg0);
}

$Object* RescaleOp::clone() {
	 return this->$BufferedImageOp::clone();
}

$String* RescaleOp::toString() {
	 return this->$BufferedImageOp::toString();
}

void RescaleOp::finalize() {
	this->$BufferedImageOp::finalize();
}

void RescaleOp::init$($floats* scaleFactors, $floats* offsets, $RenderingHints* hints) {
	this->length = 0;
	this->length = $nc(scaleFactors)->length;
	if (this->length > $nc(offsets)->length) {
		this->length = offsets->length;
	}
	$set(this, scaleFactors, $new($floats, this->length));
	$set(this, offsets, $new($floats, this->length));
	for (int32_t i = 0; i < this->length; ++i) {
		$nc(this->scaleFactors)->set(i, scaleFactors->get(i));
		$nc(this->offsets)->set(i, $nc(offsets)->get(i));
	}
	$set(this, hints, hints);
}

void RescaleOp::init$(float scaleFactor, float offset, $RenderingHints* hints) {
	this->length = 0;
	this->length = 1;
	$set(this, scaleFactors, $new($floats, 1));
	$set(this, offsets, $new($floats, 1));
	$nc(this->scaleFactors)->set(0, scaleFactor);
	$nc(this->offsets)->set(0, offset);
	$set(this, hints, hints);
}

$floats* RescaleOp::getScaleFactors($floats* scaleFactors) {
	if (scaleFactors == nullptr) {
		return $cast($floats, $nc(this->scaleFactors)->clone());
	}
	$System::arraycopy(this->scaleFactors, 0, scaleFactors, 0, $Math::min($nc(this->scaleFactors)->length, $nc(scaleFactors)->length));
	return scaleFactors;
}

$floats* RescaleOp::getOffsets($floats* offsets) {
	if (offsets == nullptr) {
		return $cast($floats, $nc(this->offsets)->clone());
	}
	$System::arraycopy(this->offsets, 0, offsets, 0, $Math::min($nc(this->offsets)->length, $nc(offsets)->length));
	return offsets;
}

int32_t RescaleOp::getNumFactors() {
	return this->length;
}

$ByteLookupTable* RescaleOp::createByteLut($floats* scale, $floats* off, int32_t nBands, int32_t nElems) {
	$useLocalCurrentObjectStackCache();
	$var($byteArray2, lutData, $new($byteArray2, nBands, nElems));
	int32_t band = 0;
	for (band = 0; band < $nc(scale)->length; ++band) {
		float bandScale = scale->get(band);
		float bandOff = $nc(off)->get(band);
		$var($bytes, bandLutData, lutData->get(band));
		for (int32_t i = 0; i < nElems; ++i) {
			int32_t val = $cast(int32_t, (i * bandScale + bandOff));
			if (((int32_t)(val & (uint32_t)-256)) != 0) {
				if (val < 0) {
					val = 0;
				} else {
					val = 255;
				}
			}
			$nc(bandLutData)->set(i, (int8_t)val);
		}
	}
	int32_t maxToCopy = (nBands == 4 && $nc(scale)->length == 4) ? 4 : 3;
	while (band < lutData->length && band < maxToCopy) {
		$System::arraycopy(lutData->get(band - 1), 0, lutData->get(band), 0, nElems);
		++band;
	}
	if (nBands == 4 && band < nBands) {
		$var($bytes, bandLutData, lutData->get(band));
		for (int32_t i = 0; i < nElems; ++i) {
			$nc(bandLutData)->set(i, (int8_t)i);
		}
	}
	return $new($ByteLookupTable, 0, lutData);
}

$ShortLookupTable* RescaleOp::createShortLut($floats* scale, $floats* off, int32_t nBands, int32_t nElems) {
	$useLocalCurrentObjectStackCache();
	$var($shortArray2, lutData, $new($shortArray2, nBands, nElems));
	int32_t band = 0;
	for (band = 0; band < $nc(scale)->length; ++band) {
		float bandScale = scale->get(band);
		float bandOff = $nc(off)->get(band);
		$var($shorts, bandLutData, lutData->get(band));
		for (int32_t i = 0; i < nElems; ++i) {
			int32_t val = $cast(int32_t, (i * bandScale + bandOff));
			if (((int32_t)(val & (uint32_t)(int32_t)0xFFFF0000)) != 0) {
				if (val < 0) {
					val = 0;
				} else {
					val = 0x0000FFFF;
				}
			}
			$nc(bandLutData)->set(i, (int16_t)val);
		}
	}
	int32_t maxToCopy = (nBands == 4 && $nc(scale)->length == 4) ? 4 : 3;
	while (band < lutData->length && band < maxToCopy) {
		$System::arraycopy(lutData->get(band - 1), 0, lutData->get(band), 0, nElems);
		++band;
	}
	if (nBands == 4 && band < nBands) {
		$var($shorts, bandLutData, lutData->get(band));
		for (int32_t i = 0; i < nElems; ++i) {
			$nc(bandLutData)->set(i, (int16_t)i);
		}
	}
	return $new($ShortLookupTable, 0, lutData);
}

bool RescaleOp::canUseLookup($Raster* src, $Raster* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t datatype = $nc($($nc(src)->getDataBuffer()))->getDataType();
	if (datatype != $DataBuffer::TYPE_BYTE && datatype != $DataBuffer::TYPE_USHORT) {
		return false;
	}
	$var($SampleModel, dstSM, $nc(dst)->getSampleModel());
	this->dstNbits = $nc(dstSM)->getSampleSize(0);
	if (!(this->dstNbits == 8 || this->dstNbits == 16)) {
		return false;
	}
	for (int32_t i = 1; i < src->getNumBands(); ++i) {
		int32_t bandSize = dstSM->getSampleSize(i);
		if (bandSize != this->dstNbits) {
			return false;
		}
	}
	$var($SampleModel, srcSM, src->getSampleModel());
	this->srcNbits = $nc(srcSM)->getSampleSize(0);
	if (this->srcNbits > 16) {
		return false;
	}
	for (int32_t i = 1; i < src->getNumBands(); ++i) {
		int32_t bandSize = srcSM->getSampleSize(i);
		if (bandSize != this->srcNbits) {
			return false;
		}
	}
	if ($instanceOf($ComponentSampleModel, dstSM)) {
		$var($ComponentSampleModel, dsm, $cast($ComponentSampleModel, dstSM));
		int32_t var$0 = dsm->getPixelStride();
		if (var$0 != dst->getNumBands()) {
			return false;
		}
	}
	if ($instanceOf($ComponentSampleModel, srcSM)) {
		$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, srcSM));
		int32_t var$1 = csm->getPixelStride();
		if (var$1 != src->getNumBands()) {
			return false;
		}
	}
	return true;
}

$BufferedImage* RescaleOp::filter($BufferedImage* src, $BufferedImage* dst$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, dst, dst$renamed);
	$var($ColorModel, srcCM, $nc(src)->getColorModel());
	$var($ColorModel, dstCM, nullptr);
	int32_t numSrcColorComp = $nc(srcCM)->getNumColorComponents();
	int32_t scaleConst = this->length;
	if ($instanceOf($IndexColorModel, srcCM)) {
		$throwNew($IllegalArgumentException, "Rescaling cannot be performed on an indexed image"_s);
	}
	if (scaleConst != 1 && scaleConst != numSrcColorComp && scaleConst != srcCM->getNumComponents()) {
		$throwNew($IllegalArgumentException, "Number of scaling constants does not equal the number of color or color/alpha components"_s);
	}
	bool needToConvert = false;
	bool needToDraw = false;
	if (scaleConst > numSrcColorComp && srcCM->hasAlpha()) {
		scaleConst = numSrcColorComp + 1;
	}
	int32_t width = src->getWidth();
	int32_t height = src->getHeight();
	$var($BufferedImage, origDst, dst);
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
		int32_t var$0 = $nc($(srcCM->getColorSpace()))->getType();
		if (var$0 != $nc($($nc(dstCM)->getColorSpace()))->getType()) {
			needToConvert = true;
			$assign(dst, createCompatibleDestImage(src, nullptr));
		}
	}
	if ($ImagingLib::filter(static_cast<$BufferedImageOp*>(this), src, dst) == nullptr) {
		int32_t var$1 = $nc($(src->getRaster()))->getNumBands();
		if (var$1 != $nc($($nc(dst)->getRaster()))->getNumBands()) {
			needToDraw = true;
			$assign(dst, createCompatibleDestImage(src, nullptr));
		}
		$var($WritableRaster, srcRaster, src->getRaster());
		$var($WritableRaster, dstRaster, $nc(dst)->getRaster());
		filterRasterImpl(srcRaster, dstRaster, scaleConst, false);
	}
	if (needToDraw) {
		$var($Graphics2D, g, $nc(origDst)->createGraphics());
		$init($AlphaComposite);
		$nc(g)->setComposite($AlphaComposite::Src);
		g->drawImage(dst, 0, 0, width, height, nullptr);
		g->dispose();
	}
	if (needToConvert) {
		$var($ColorConvertOp, ccop, $new($ColorConvertOp, this->hints));
		$assign(dst, ccop->filter(dst, origDst));
	}
	return dst;
}

$WritableRaster* RescaleOp::filter($Raster* src, $WritableRaster* dst) {
	return filterRasterImpl(src, dst, this->length, true);
}

$WritableRaster* RescaleOp::filterRasterImpl($Raster* src, $WritableRaster* dst$renamed, int32_t scaleConst, bool sCheck) {
	$useLocalCurrentObjectStackCache();
	$var($WritableRaster, dst, dst$renamed);
	int32_t numBands = $nc(src)->getNumBands();
	int32_t width = src->getWidth();
	int32_t height = src->getHeight();
	$var($ints, srcPix, nullptr);
	int32_t step = 0;
	int32_t tidx = 0;
	if (dst == nullptr) {
		$assign(dst, createCompatibleDestRaster(src));
	} else {
		bool var$1 = height != $nc(dst)->getHeight();
		if (var$1 || width != $nc(dst)->getWidth()) {
			$throwNew($IllegalArgumentException, "Width or height of Rasters do not match"_s);
		} else if (numBands != dst->getNumBands()) {
			$throwNew($IllegalArgumentException, $$str({"Number of bands in src "_s, $$str(numBands), " does not equal number of bands in dest "_s, $$str(dst->getNumBands())}));
		}
	}
	if (sCheck && scaleConst != 1 && scaleConst != src->getNumBands()) {
		$throwNew($IllegalArgumentException, "Number of scaling constants does not equal the number of bands in the src raster"_s);
	}
	if ($ImagingLib::filter(static_cast<$RasterOp*>(this), src, dst) != nullptr) {
		return dst;
	}
	if (canUseLookup(src, dst)) {
		int32_t srcNgray = ($sl(1, this->srcNbits));
		int32_t dstNgray = ($sl(1, this->dstNbits));
		if (dstNgray == 256) {
			$var($ByteLookupTable, lut, createByteLut(this->scaleFactors, this->offsets, numBands, srcNgray));
			$var($LookupOp, op, $new($LookupOp, lut, this->hints));
			op->filter(src, dst);
		} else {
			$var($ShortLookupTable, lut, createShortLut(this->scaleFactors, this->offsets, numBands, srcNgray));
			$var($LookupOp, op, $new($LookupOp, lut, this->hints));
			op->filter(src, dst);
		}
	} else {
		if (scaleConst > 1) {
			step = 1;
		}
		int32_t sminX = src->getMinX();
		int32_t sY = src->getMinY();
		int32_t dminX = $nc(dst)->getMinX();
		int32_t dY = dst->getMinY();
		int32_t sX = 0;
		int32_t dX = 0;
		int32_t nbits = 0;
		$var($ints, dstMax, $new($ints, numBands));
		$var($ints, dstMask, $new($ints, numBands));
		$var($SampleModel, dstSM, dst->getSampleModel());
		for (int32_t z = 0; z < numBands; ++z) {
			nbits = $nc(dstSM)->getSampleSize(z);
			dstMax->set(z, ($sl(1, nbits)) - 1);
			dstMask->set(z, ~(dstMax->get(z)));
		}
		int32_t val = 0;
		for (int32_t y = 0; y < height; ++y, ++sY, ++dY) {
			dX = dminX;
			sX = sminX;
			for (int32_t x = 0; x < width; ++x, ++sX, ++dX) {
				$assign(srcPix, src->getPixel(sX, sY, srcPix));
				tidx = 0;
				for (int32_t z = 0; z < numBands; ++z, tidx += step) {
					if ((scaleConst == 1 || scaleConst == 3) && (z == 3) && (numBands == 4)) {
						val = $nc(srcPix)->get(z);
					} else {
						val = $cast(int32_t, ($nc(srcPix)->get(z) * $nc(this->scaleFactors)->get(tidx) + $nc(this->offsets)->get(tidx)));
					}
					if (((int32_t)(val & (uint32_t)dstMask->get(z))) != 0) {
						if (val < 0) {
							val = 0;
						} else {
							val = dstMax->get(z);
						}
					}
					$nc(srcPix)->set(z, val);
				}
				dst->setPixel(dX, dY, srcPix);
			}
		}
	}
	return dst;
}

$Rectangle2D* RescaleOp::getBounds2D($BufferedImage* src) {
	return getBounds2D($(static_cast<$Raster*>($nc(src)->getRaster())));
}

$Rectangle2D* RescaleOp::getBounds2D($Raster* src) {
	return $nc(src)->getBounds();
}

$BufferedImage* RescaleOp::createCompatibleDestImage($BufferedImage* src, $ColorModel* destCM) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, image, nullptr);
	if (destCM == nullptr) {
		$var($ColorModel, cm, $nc(src)->getColorModel());
		$var($ColorModel, var$0, cm);
		$var($WritableRaster, var$1, $nc($(src->getRaster()))->createCompatibleWritableRaster());
		$assign(image, $new($BufferedImage, var$0, var$1, $nc(cm)->isAlphaPremultiplied(), ($Hashtable*)nullptr));
	} else {
		int32_t w = $nc(src)->getWidth();
		int32_t h = src->getHeight();
		$var($ColorModel, var$2, destCM);
		$var($WritableRaster, var$3, $nc(destCM)->createCompatibleWritableRaster(w, h));
		$assign(image, $new($BufferedImage, var$2, var$3, destCM->isAlphaPremultiplied(), ($Hashtable*)nullptr));
	}
	return image;
}

$WritableRaster* RescaleOp::createCompatibleDestRaster($Raster* src) {
	int32_t var$0 = src->getWidth();
	return $nc(src)->createCompatibleWritableRaster(var$0, src->getHeight());
}

$Point2D* RescaleOp::getPoint2D($Point2D* srcPt, $Point2D* dstPt$renamed) {
	$var($Point2D, dstPt, dstPt$renamed);
	if (dstPt == nullptr) {
		$assign(dstPt, $new($Point2D$Float));
	}
	double var$0 = $nc(srcPt)->getX();
	$nc(dstPt)->setLocation(var$0, srcPt->getY());
	return dstPt;
}

$RenderingHints* RescaleOp::getRenderingHints() {
	return this->hints;
}

RescaleOp::RescaleOp() {
}

$Class* RescaleOp::load$($String* name, bool initialize) {
	$loadClass(RescaleOp, name, initialize, &_RescaleOp_ClassInfo_, allocate$RescaleOp);
	return class$;
}

$Class* RescaleOp::class$ = nullptr;

		} // image
	} // awt
} // java