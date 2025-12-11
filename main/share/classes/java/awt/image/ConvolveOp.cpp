#include <java/awt/image/ConvolveOp.h>

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
#include <java/awt/image/ColorConvertOp.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImagingOpException.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Kernel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RasterOp.h>
#include <java/awt/image/WritableRaster.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/ImagingLib.h>
#include <jcpp.h>

#undef EDGE_NO_OP
#undef EDGE_ZERO_FILL

using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $RenderingHints = ::java::awt::RenderingHints;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ColorConvertOp = ::java::awt::image::ColorConvertOp;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImagingOpException = ::java::awt::image::ImagingOpException;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Kernel = ::java::awt::image::Kernel;
using $Raster = ::java::awt::image::Raster;
using $RasterOp = ::java::awt::image::RasterOp;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $ImagingLib = ::sun::awt::image::ImagingLib;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _ConvolveOp_FieldInfo_[] = {
	{"kernel", "Ljava/awt/image/Kernel;", nullptr, 0, $field(ConvolveOp, kernel)},
	{"edgeHint", "I", nullptr, 0, $field(ConvolveOp, edgeHint)},
	{"hints", "Ljava/awt/RenderingHints;", nullptr, 0, $field(ConvolveOp, hints)},
	{"EDGE_ZERO_FILL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConvolveOp, EDGE_ZERO_FILL)},
	{"EDGE_NO_OP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConvolveOp, EDGE_NO_OP)},
	{}
};

$MethodInfo _ConvolveOp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/image/Kernel;ILjava/awt/RenderingHints;)V", nullptr, $PUBLIC, $method(static_cast<void(ConvolveOp::*)($Kernel*,int32_t,$RenderingHints*)>(&ConvolveOp::init$))},
	{"<init>", "(Ljava/awt/image/Kernel;)V", nullptr, $PUBLIC, $method(static_cast<void(ConvolveOp::*)($Kernel*)>(&ConvolveOp::init$))},
	{"createCompatibleDestImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/ColorModel;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleDestRaster", "(Ljava/awt/image/Raster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"filter", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $FINAL},
	{"filter", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $FINAL},
	{"getBounds2D", "(Ljava/awt/image/BufferedImage;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getBounds2D", "(Ljava/awt/image/Raster;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getEdgeCondition", "()I", nullptr, $PUBLIC},
	{"getKernel", "()Ljava/awt/image/Kernel;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Kernel*(ConvolveOp::*)()>(&ConvolveOp::getKernel))},
	{"getPoint2D", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $FINAL},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConvolveOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.ConvolveOp",
	"java.lang.Object",
	"java.awt.image.BufferedImageOp,java.awt.image.RasterOp",
	_ConvolveOp_FieldInfo_,
	_ConvolveOp_MethodInfo_
};

$Object* allocate$ConvolveOp($Class* clazz) {
	return $of($alloc(ConvolveOp));
}

int32_t ConvolveOp::hashCode() {
	 return this->$BufferedImageOp::hashCode();
}

bool ConvolveOp::equals(Object$* arg0) {
	 return this->$BufferedImageOp::equals(arg0);
}

$Object* ConvolveOp::clone() {
	 return this->$BufferedImageOp::clone();
}

$String* ConvolveOp::toString() {
	 return this->$BufferedImageOp::toString();
}

void ConvolveOp::finalize() {
	this->$BufferedImageOp::finalize();
}

void ConvolveOp::init$($Kernel* kernel, int32_t edgeCondition, $RenderingHints* hints) {
	$set(this, kernel, kernel);
	this->edgeHint = edgeCondition;
	$set(this, hints, hints);
}

void ConvolveOp::init$($Kernel* kernel) {
	$set(this, kernel, kernel);
	this->edgeHint = ConvolveOp::EDGE_ZERO_FILL;
}

int32_t ConvolveOp::getEdgeCondition() {
	return this->edgeHint;
}

$Kernel* ConvolveOp::getKernel() {
	return $cast($Kernel, $nc(this->kernel)->clone());
}

$BufferedImage* ConvolveOp::filter($BufferedImage* src$renamed, $BufferedImage* dst$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, dst, dst$renamed);
	$var($BufferedImage, src, src$renamed);
	if (src == nullptr) {
		$throwNew($NullPointerException, "src image is null"_s);
	}
	if (src == dst) {
		$throwNew($IllegalArgumentException, "src image cannot be the same as the dst image"_s);
	}
	bool needToConvert = false;
	$var($ColorModel, srcCM, $nc(src)->getColorModel());
	$var($ColorModel, dstCM, nullptr);
	$var($BufferedImage, origDst, dst);
	if ($instanceOf($IndexColorModel, srcCM)) {
		$var($IndexColorModel, icm, $cast($IndexColorModel, srcCM));
		$assign(src, $nc(icm)->convertToIntDiscrete($(src->getRaster()), false));
		$assign(srcCM, $nc(src)->getColorModel());
	}
	if (dst == nullptr) {
		$assign(dst, createCompatibleDestImage(src, nullptr));
		$assign(dstCM, srcCM);
		$assign(origDst, dst);
	} else {
		$assign(dstCM, $nc(dst)->getColorModel());
		int32_t var$0 = $nc($($nc(srcCM)->getColorSpace()))->getType();
		if (var$0 != $nc($($nc(dstCM)->getColorSpace()))->getType()) {
			needToConvert = true;
			$assign(dst, createCompatibleDestImage(src, nullptr));
			$assign(dstCM, $nc(dst)->getColorModel());
		} else if ($instanceOf($IndexColorModel, dstCM)) {
			$assign(dst, createCompatibleDestImage(src, nullptr));
			$assign(dstCM, $nc(dst)->getColorModel());
		}
	}
	if ($ImagingLib::filter(static_cast<$BufferedImageOp*>(this), src, dst) == nullptr) {
		$throwNew($ImagingOpException, "Unable to convolve src image"_s);
	}
	if (needToConvert) {
		$var($ColorConvertOp, ccop, $new($ColorConvertOp, this->hints));
		ccop->filter(dst, origDst);
	} else if (origDst != dst) {
		$var($Graphics2D, g, $nc(origDst)->createGraphics());
		{
			$var($Throwable, var$1, nullptr);
			try {
				$nc(g)->drawImage(dst, 0, 0, nullptr);
			} catch ($Throwable& var$2) {
				$assign(var$1, var$2);
			} /*finally*/ {
				$nc(g)->dispose();
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
	return origDst;
}

$WritableRaster* ConvolveOp::filter($Raster* src, $WritableRaster* dst$renamed) {
	$var($WritableRaster, dst, dst$renamed);
	if (dst == nullptr) {
		$assign(dst, createCompatibleDestRaster(src));
	} else if ($equals(src, dst)) {
		$throwNew($IllegalArgumentException, "src image cannot be the same as the dst image"_s);
	} else {
		int32_t var$1 = $nc(src)->getNumBands();
		if (var$1 != $nc(dst)->getNumBands()) {
			$throwNew($ImagingOpException, "Different number of bands in src  and dst Rasters"_s);
		}
	}
	if ($ImagingLib::filter(static_cast<$RasterOp*>(this), src, dst) == nullptr) {
		$throwNew($ImagingOpException, "Unable to convolve src image"_s);
	}
	return dst;
}

$BufferedImage* ConvolveOp::createCompatibleDestImage($BufferedImage* src, $ColorModel* destCM$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, destCM, destCM$renamed);
	$var($BufferedImage, image, nullptr);
	int32_t w = $nc(src)->getWidth();
	int32_t h = src->getHeight();
	$var($WritableRaster, wr, nullptr);
	if (destCM == nullptr) {
		$assign(destCM, src->getColorModel());
		if ($instanceOf($IndexColorModel, destCM)) {
			$assign(destCM, $ColorModel::getRGBdefault());
		} else {
			$assign(wr, $nc($(src->getData()))->createCompatibleWritableRaster(w, h));
		}
	}
	if (wr == nullptr) {
		$assign(wr, $nc(destCM)->createCompatibleWritableRaster(w, h));
	}
	$assign(image, $new($BufferedImage, destCM, wr, $nc(destCM)->isAlphaPremultiplied(), ($Hashtable*)nullptr));
	return image;
}

$WritableRaster* ConvolveOp::createCompatibleDestRaster($Raster* src) {
	return $nc(src)->createCompatibleWritableRaster();
}

$Rectangle2D* ConvolveOp::getBounds2D($BufferedImage* src) {
	return getBounds2D($(static_cast<$Raster*>($nc(src)->getRaster())));
}

$Rectangle2D* ConvolveOp::getBounds2D($Raster* src) {
	return $nc(src)->getBounds();
}

$Point2D* ConvolveOp::getPoint2D($Point2D* srcPt, $Point2D* dstPt$renamed) {
	$var($Point2D, dstPt, dstPt$renamed);
	if (dstPt == nullptr) {
		$assign(dstPt, $new($Point2D$Float));
	}
	double var$0 = $nc(srcPt)->getX();
	$nc(dstPt)->setLocation(var$0, srcPt->getY());
	return dstPt;
}

$RenderingHints* ConvolveOp::getRenderingHints() {
	return this->hints;
}

ConvolveOp::ConvolveOp() {
}

$Class* ConvolveOp::load$($String* name, bool initialize) {
	$loadClass(ConvolveOp, name, initialize, &_ConvolveOp_ClassInfo_, allocate$ConvolveOp);
	return class$;
}

$Class* ConvolveOp::class$ = nullptr;

		} // image
	} // awt
} // java