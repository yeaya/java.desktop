#include <java/awt/image/BandCombineOp.h>

#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RasterOp.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/awt/image/ImagingLib.h>
#include <jcpp.h>

using $floatArray2 = $Array<float, 2>;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Raster = ::java::awt::image::Raster;
using $RasterOp = ::java::awt::image::RasterOp;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $ImagingLib = ::sun::awt::image::ImagingLib;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _BandCombineOp_FieldInfo_[] = {
	{"matrix", "[[F", nullptr, 0, $field(BandCombineOp, matrix)},
	{"nrows", "I", nullptr, 0, $field(BandCombineOp, nrows)},
	{"ncols", "I", nullptr, 0, $field(BandCombineOp, ncols)},
	{"hints", "Ljava/awt/RenderingHints;", nullptr, 0, $field(BandCombineOp, hints)},
	{}
};

$MethodInfo _BandCombineOp_MethodInfo_[] = {
	{"<init>", "([[FLjava/awt/RenderingHints;)V", nullptr, $PUBLIC, $method(static_cast<void(BandCombineOp::*)($floatArray2*,$RenderingHints*)>(&BandCombineOp::init$))},
	{"createCompatibleDestRaster", "(Ljava/awt/image/Raster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"filter", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getBounds2D", "(Ljava/awt/image/Raster;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getMatrix", "()[[F", nullptr, $PUBLIC | $FINAL, $method(static_cast<$floatArray2*(BandCombineOp::*)()>(&BandCombineOp::getMatrix))},
	{"getPoint2D", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $FINAL},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _BandCombineOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.BandCombineOp",
	"java.lang.Object",
	"java.awt.image.RasterOp",
	_BandCombineOp_FieldInfo_,
	_BandCombineOp_MethodInfo_
};

$Object* allocate$BandCombineOp($Class* clazz) {
	return $of($alloc(BandCombineOp));
}

void BandCombineOp::init$($floatArray2* matrix, $RenderingHints* hints) {
	this->nrows = 0;
	this->ncols = 0;
	this->nrows = $nc(matrix)->length;
	this->ncols = $nc(matrix->get(0))->length;
	$set(this, matrix, $new($floatArray2, this->nrows));
	for (int32_t i = 0; i < this->nrows; ++i) {
		if (this->ncols > $nc(matrix->get(i))->length) {
			$throwNew($IndexOutOfBoundsException, $$str({"row "_s, $$str(i), " too short"_s}));
		}
		$nc(this->matrix)->set(i, $($Arrays::copyOf(matrix->get(i), this->ncols)));
	}
	$set(this, hints, hints);
}

$floatArray2* BandCombineOp::getMatrix() {
	$var($floatArray2, ret, $new($floatArray2, this->nrows));
	for (int32_t i = 0; i < this->nrows; ++i) {
		ret->set(i, $($Arrays::copyOf($nc(this->matrix)->get(i), this->ncols)));
	}
	return ret;
}

$WritableRaster* BandCombineOp::filter($Raster* src, $WritableRaster* dst$renamed) {
	$var($WritableRaster, dst, dst$renamed);
	int32_t nBands = $nc(src)->getNumBands();
	if (this->ncols != nBands && this->ncols != (nBands + 1)) {
		$throwNew($IllegalArgumentException, $$str({"Number of columns in the matrix ("_s, $$str(this->ncols), ") must be equal to the number of bands ([+1]) in src ("_s, $$str(nBands), ")."_s}));
	}
	if (dst == nullptr) {
		$assign(dst, createCompatibleDestRaster(src));
	} else if (this->nrows != dst->getNumBands()) {
		$throwNew($IllegalArgumentException, $$str({"Number of rows in the matrix ("_s, $$str(this->nrows), ") must be equal to the number of bands ([+1]) in dst ("_s, $$str(nBands), ")."_s}));
	}
	if ($ImagingLib::filter(static_cast<$RasterOp*>(this), src, dst) != nullptr) {
		return dst;
	}
	$var($ints, pixel, nullptr);
	$var($ints, dstPixel, $new($ints, dst->getNumBands()));
	float accum = 0.0;
	int32_t sminX = src->getMinX();
	int32_t sY = src->getMinY();
	int32_t dminX = dst->getMinX();
	int32_t dY = dst->getMinY();
	int32_t sX = 0;
	int32_t dX = 0;
	if (this->ncols == nBands) {
		for (int32_t y = 0; y < src->getHeight(); ++y, ++sY, ++dY) {
			dX = dminX;
			sX = sminX;
			for (int32_t x = 0; x < src->getWidth(); ++x, ++sX, ++dX) {
				$assign(pixel, src->getPixel(sX, sY, pixel));
				for (int32_t r = 0; r < this->nrows; ++r) {
					accum = 0.0f;
					for (int32_t c = 0; c < this->ncols; ++c) {
						accum += $nc($nc(this->matrix)->get(r))->get(c) * $nc(pixel)->get(c);
					}
					dstPixel->set(r, $cast(int32_t, accum));
				}
				dst->setPixel(dX, dY, dstPixel);
			}
		}
	} else {
		for (int32_t y = 0; y < src->getHeight(); ++y, ++sY, ++dY) {
			dX = dminX;
			sX = sminX;
			for (int32_t x = 0; x < src->getWidth(); ++x, ++sX, ++dX) {
				$assign(pixel, src->getPixel(sX, sY, pixel));
				for (int32_t r = 0; r < this->nrows; ++r) {
					accum = 0.0f;
					for (int32_t c = 0; c < nBands; ++c) {
						accum += $nc($nc(this->matrix)->get(r))->get(c) * $nc(pixel)->get(c);
					}
					dstPixel->set(r, $cast(int32_t, (accum + $nc($nc(this->matrix)->get(r))->get(nBands))));
				}
				dst->setPixel(dX, dY, dstPixel);
			}
		}
	}
	return dst;
}

$Rectangle2D* BandCombineOp::getBounds2D($Raster* src) {
	return $nc(src)->getBounds();
}

$WritableRaster* BandCombineOp::createCompatibleDestRaster($Raster* src) {
	int32_t nBands = $nc(src)->getNumBands();
	if ((this->ncols != nBands) && (this->ncols != (nBands + 1))) {
		$throwNew($IllegalArgumentException, $$str({"Number of columns in the matrix ("_s, $$str(this->ncols), ") must be equal to the number of bands ([+1]) in src ("_s, $$str(nBands), ")."_s}));
	}
	if (src->getNumBands() == this->nrows) {
		return src->createCompatibleWritableRaster();
	} else {
		$throwNew($IllegalArgumentException, $$str({"Don\'t know how to create a  compatible Raster with "_s, $$str(this->nrows), " bands."_s}));
	}
}

$Point2D* BandCombineOp::getPoint2D($Point2D* srcPt, $Point2D* dstPt$renamed) {
	$var($Point2D, dstPt, dstPt$renamed);
	if (dstPt == nullptr) {
		$assign(dstPt, $new($Point2D$Float));
	}
	double var$0 = $nc(srcPt)->getX();
	$nc(dstPt)->setLocation(var$0, srcPt->getY());
	return dstPt;
}

$RenderingHints* BandCombineOp::getRenderingHints() {
	return this->hints;
}

BandCombineOp::BandCombineOp() {
}

$Class* BandCombineOp::load$($String* name, bool initialize) {
	$loadClass(BandCombineOp, name, initialize, &_BandCombineOp_ClassInfo_, allocate$BandCombineOp);
	return class$;
}

$Class* BandCombineOp::class$ = nullptr;

		} // image
	} // awt
} // java