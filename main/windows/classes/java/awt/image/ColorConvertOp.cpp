#include <java/awt/image/ColorConvertOp.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <sun/java2d/cmm/CMSManager.h>
#include <sun/java2d/cmm/ColorTransform.h>
#include <sun/java2d/cmm/PCMM.h>
#include <jcpp.h>

#undef CLASS_ABSTRACT
#undef CLASS_OUTPUT
#undef CS_CIEXYZ
#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_SHORT
#undef TYPE_XYZ

using $ColorSpaceArray = $Array<::java::awt::color::ColorSpace>;
using $ICC_ProfileArray = $Array<::java::awt::color::ICC_Profile>;
using $ColorTransformArray = $Array<::sun::java2d::cmm::ColorTransform>;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $RasterOp = ::java::awt::image::RasterOp;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $CMSManager = ::sun::java2d::cmm::CMSManager;
using $ColorTransform = ::sun::java2d::cmm::ColorTransform;
using $PCMM = ::sun::java2d::cmm::PCMM;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _ColorConvertOp_FieldInfo_[] = {
	{"profileList", "[Ljava/awt/color/ICC_Profile;", nullptr, 0, $field(ColorConvertOp, profileList)},
	{"CSList", "[Ljava/awt/color/ColorSpace;", nullptr, 0, $field(ColorConvertOp, CSList)},
	{"thisTransform", "Lsun/java2d/cmm/ColorTransform;", nullptr, 0, $field(ColorConvertOp, thisTransform)},
	{"thisRasterTransform", "Lsun/java2d/cmm/ColorTransform;", nullptr, 0, $field(ColorConvertOp, thisRasterTransform)},
	{"thisSrcProfile", "Ljava/awt/color/ICC_Profile;", nullptr, 0, $field(ColorConvertOp, thisSrcProfile)},
	{"thisDestProfile", "Ljava/awt/color/ICC_Profile;", nullptr, 0, $field(ColorConvertOp, thisDestProfile)},
	{"hints", "Ljava/awt/RenderingHints;", nullptr, 0, $field(ColorConvertOp, hints)},
	{"gotProfiles", "Z", nullptr, 0, $field(ColorConvertOp, gotProfiles)},
	{"srcMinVals", "[F", nullptr, 0, $field(ColorConvertOp, srcMinVals)},
	{"srcMaxVals", "[F", nullptr, 0, $field(ColorConvertOp, srcMaxVals)},
	{"dstMinVals", "[F", nullptr, 0, $field(ColorConvertOp, dstMinVals)},
	{"dstMaxVals", "[F", nullptr, 0, $field(ColorConvertOp, dstMaxVals)},
	{}
};

$MethodInfo _ColorConvertOp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/RenderingHints;)V", nullptr, $PUBLIC, $method(static_cast<void(ColorConvertOp::*)($RenderingHints*)>(&ColorConvertOp::init$))},
	{"<init>", "(Ljava/awt/color/ColorSpace;Ljava/awt/RenderingHints;)V", nullptr, $PUBLIC, $method(static_cast<void(ColorConvertOp::*)($ColorSpace*,$RenderingHints*)>(&ColorConvertOp::init$))},
	{"<init>", "(Ljava/awt/color/ColorSpace;Ljava/awt/color/ColorSpace;Ljava/awt/RenderingHints;)V", nullptr, $PUBLIC, $method(static_cast<void(ColorConvertOp::*)($ColorSpace*,$ColorSpace*,$RenderingHints*)>(&ColorConvertOp::init$))},
	{"<init>", "([Ljava/awt/color/ICC_Profile;Ljava/awt/RenderingHints;)V", nullptr, $PUBLIC, $method(static_cast<void(ColorConvertOp::*)($ICC_ProfileArray*,$RenderingHints*)>(&ColorConvertOp::init$))},
	{"ICCBIFilter", "(Ljava/awt/image/BufferedImage;Ljava/awt/color/ColorSpace;Ljava/awt/image/BufferedImage;Ljava/awt/color/ColorSpace;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $method(static_cast<$BufferedImage*(ColorConvertOp::*)($BufferedImage*,$ColorSpace*,$BufferedImage*,$ColorSpace*)>(&ColorConvertOp::ICCBIFilter))},
	{"createCompatibleDestImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/ColorModel;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleDestImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/ColorModel;Ljava/awt/color/ColorSpace;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $method(static_cast<$BufferedImage*(ColorConvertOp::*)($BufferedImage*,$ColorModel*,$ColorSpace*)>(&ColorConvertOp::createCompatibleDestImage))},
	{"createCompatibleDestRaster", "(Ljava/awt/image/Raster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"filter", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $FINAL},
	{"filter", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $FINAL},
	{"getBounds2D", "(Ljava/awt/image/BufferedImage;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getBounds2D", "(Ljava/awt/image/Raster;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getICC_Profiles", "()[Ljava/awt/color/ICC_Profile;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ICC_ProfileArray*(ColorConvertOp::*)()>(&ColorConvertOp::getICC_Profiles))},
	{"getMinMaxValsFromColorSpaces", "(Ljava/awt/color/ColorSpace;Ljava/awt/color/ColorSpace;)V", nullptr, $PRIVATE, $method(static_cast<void(ColorConvertOp::*)($ColorSpace*,$ColorSpace*)>(&ColorConvertOp::getMinMaxValsFromColorSpaces))},
	{"getMinMaxValsFromProfiles", "(Ljava/awt/color/ICC_Profile;Ljava/awt/color/ICC_Profile;)V", nullptr, $PRIVATE, $method(static_cast<void(ColorConvertOp::*)($ICC_Profile*,$ICC_Profile*)>(&ColorConvertOp::getMinMaxValsFromProfiles))},
	{"getPoint2D", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $FINAL},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC | $FINAL},
	{"getRenderingIntent", "(Ljava/awt/color/ICC_Profile;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ColorConvertOp::*)($ICC_Profile*)>(&ColorConvertOp::getRenderingIntent))},
	{"nonICCBIFilter", "(Ljava/awt/image/BufferedImage;Ljava/awt/color/ColorSpace;Ljava/awt/image/BufferedImage;Ljava/awt/color/ColorSpace;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $method(static_cast<$BufferedImage*(ColorConvertOp::*)($BufferedImage*,$ColorSpace*,$BufferedImage*,$ColorSpace*)>(&ColorConvertOp::nonICCBIFilter))},
	{"nonICCRasterFilter", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PRIVATE, $method(static_cast<$WritableRaster*(ColorConvertOp::*)($Raster*,$WritableRaster*)>(&ColorConvertOp::nonICCRasterFilter))},
	{"setMinMax", "(II[F[F)V", nullptr, $PRIVATE, $method(static_cast<void(ColorConvertOp::*)(int32_t,int32_t,$floats*,$floats*)>(&ColorConvertOp::setMinMax))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateBITransform", "(Ljava/awt/color/ICC_Profile;Ljava/awt/color/ICC_Profile;)V", nullptr, $PRIVATE, $method(static_cast<void(ColorConvertOp::*)($ICC_Profile*,$ICC_Profile*)>(&ColorConvertOp::updateBITransform))},
	{}
};

$ClassInfo _ColorConvertOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.ColorConvertOp",
	"java.lang.Object",
	"java.awt.image.BufferedImageOp,java.awt.image.RasterOp",
	_ColorConvertOp_FieldInfo_,
	_ColorConvertOp_MethodInfo_
};

$Object* allocate$ColorConvertOp($Class* clazz) {
	return $of($alloc(ColorConvertOp));
}

int32_t ColorConvertOp::hashCode() {
	 return this->$BufferedImageOp::hashCode();
}

bool ColorConvertOp::equals(Object$* arg0) {
	 return this->$BufferedImageOp::equals(arg0);
}

$Object* ColorConvertOp::clone() {
	 return this->$BufferedImageOp::clone();
}

$String* ColorConvertOp::toString() {
	 return this->$BufferedImageOp::toString();
}

void ColorConvertOp::finalize() {
	this->$BufferedImageOp::finalize();
}

void ColorConvertOp::init$($RenderingHints* hints) {
	$set(this, profileList, $new($ICC_ProfileArray, 0));
	$set(this, hints, hints);
}

void ColorConvertOp::init$($ColorSpace* cspace, $RenderingHints* hints) {
	if (cspace == nullptr) {
		$throwNew($NullPointerException, "ColorSpace cannot be null"_s);
	}
	if ($instanceOf($ICC_ColorSpace, cspace)) {
		$set(this, profileList, $new($ICC_ProfileArray, 1));
		$nc(this->profileList)->set(0, $($nc(($cast($ICC_ColorSpace, cspace)))->getProfile()));
	} else {
		$set(this, CSList, $new($ColorSpaceArray, 1));
		$nc(this->CSList)->set(0, cspace);
	}
	$set(this, hints, hints);
}

void ColorConvertOp::init$($ColorSpace* srcCspace, $ColorSpace* dstCspace, $RenderingHints* hints) {
	if ((srcCspace == nullptr) || (dstCspace == nullptr)) {
		$throwNew($NullPointerException, "ColorSpaces cannot be null"_s);
	}
	if (($instanceOf($ICC_ColorSpace, srcCspace)) && ($instanceOf($ICC_ColorSpace, dstCspace))) {
		$set(this, profileList, $new($ICC_ProfileArray, 2));
		$nc(this->profileList)->set(0, $($nc(($cast($ICC_ColorSpace, srcCspace)))->getProfile()));
		$nc(this->profileList)->set(1, $($nc(($cast($ICC_ColorSpace, dstCspace)))->getProfile()));
		getMinMaxValsFromColorSpaces(srcCspace, dstCspace);
	} else {
		$set(this, CSList, $new($ColorSpaceArray, 2));
		$nc(this->CSList)->set(0, srcCspace);
		$nc(this->CSList)->set(1, dstCspace);
	}
	$set(this, hints, hints);
}

void ColorConvertOp::init$($ICC_ProfileArray* profiles, $RenderingHints* hints) {
	if (profiles == nullptr) {
		$throwNew($NullPointerException, "Profiles cannot be null"_s);
	}
	this->gotProfiles = true;
	$set(this, profileList, $new($ICC_ProfileArray, $nc(profiles)->length));
	for (int32_t i1 = 0; i1 < profiles->length; ++i1) {
		$nc(this->profileList)->set(i1, profiles->get(i1));
	}
	$set(this, hints, hints);
}

$ICC_ProfileArray* ColorConvertOp::getICC_Profiles() {
	if (this->gotProfiles) {
		$var($ICC_ProfileArray, profiles, $new($ICC_ProfileArray, $nc(this->profileList)->length));
		for (int32_t i1 = 0; i1 < $nc(this->profileList)->length; ++i1) {
			profiles->set(i1, $nc(this->profileList)->get(i1));
		}
		return profiles;
	}
	return nullptr;
}

$BufferedImage* ColorConvertOp::filter($BufferedImage* src$renamed, $BufferedImage* dest$renamed) {
	$var($BufferedImage, src, src$renamed);
	$var($BufferedImage, dest, dest$renamed);
	$var($ColorSpace, srcColorSpace, nullptr);
	$var($ColorSpace, destColorSpace, nullptr);
	$var($BufferedImage, savdest, nullptr);
	if ($instanceOf($IndexColorModel, $($nc(src)->getColorModel()))) {
		$var($IndexColorModel, icm, $cast($IndexColorModel, src->getColorModel()));
		$assign(src, $nc(icm)->convertToIntDiscrete($(src->getRaster()), true));
	}
	$assign(srcColorSpace, $nc($($nc(src)->getColorModel()))->getColorSpace());
	if (dest != nullptr) {
		if ($instanceOf($IndexColorModel, $(dest->getColorModel()))) {
			$assign(savdest, dest);
			$assign(dest, nullptr);
			$assign(destColorSpace, nullptr);
		} else {
			$assign(destColorSpace, $nc($(dest->getColorModel()))->getColorSpace());
		}
	} else {
		$assign(destColorSpace, nullptr);
	}
	if ((this->CSList != nullptr) || (!($instanceOf($ICC_ColorSpace, srcColorSpace))) || ((dest != nullptr) && (!($instanceOf($ICC_ColorSpace, destColorSpace))))) {
		$assign(dest, nonICCBIFilter(src, srcColorSpace, dest, destColorSpace));
	} else {
		$assign(dest, ICCBIFilter(src, srcColorSpace, dest, destColorSpace));
	}
	if (savdest != nullptr) {
		$var($Graphics2D, big, savdest->createGraphics());
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(big)->drawImage(dest, 0, 0, nullptr);
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(big)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		return savdest;
	} else {
		return dest;
	}
}

$BufferedImage* ColorConvertOp::ICCBIFilter($BufferedImage* src, $ColorSpace* srcColorSpace, $BufferedImage* dest$renamed, $ColorSpace* destColorSpace) {
	$var($BufferedImage, dest, dest$renamed);
	int32_t nProfiles = $nc(this->profileList)->length;
	$var($ICC_Profile, srcProfile, nullptr);
	$var($ICC_Profile, destProfile, nullptr);
	$assign(srcProfile, $nc(($cast($ICC_ColorSpace, srcColorSpace)))->getProfile());
	if (dest == nullptr) {
		if (nProfiles == 0) {
			$throwNew($IllegalArgumentException, "Destination ColorSpace is undefined"_s);
		}
		$assign(destProfile, $nc(this->profileList)->get(nProfiles - 1));
		$assign(dest, createCompatibleDestImage(src, nullptr));
	} else {
		int32_t var$1 = $nc(src)->getHeight();
		bool var$0 = var$1 != $nc(dest)->getHeight();
		if (!var$0) {
			int32_t var$2 = $nc(src)->getWidth();
			var$0 = var$2 != $nc(dest)->getWidth();
		}
		if (var$0) {
			$throwNew($IllegalArgumentException, "Width or height of BufferedImages do not match"_s);
		}
		$assign(destProfile, $nc(($cast($ICC_ColorSpace, destColorSpace)))->getProfile());
	}
	if (srcProfile == destProfile) {
		bool noTrans = true;
		for (int32_t i = 0; i < nProfiles; ++i) {
			if (srcProfile != $nc(this->profileList)->get(i)) {
				noTrans = false;
				break;
			}
		}
		if (noTrans) {
			$var($Graphics2D, g, $nc(dest)->createGraphics());
			{
				$var($Throwable, var$3, nullptr);
				try {
					$nc(g)->drawImage(src, 0, 0, nullptr);
				} catch ($Throwable&) {
					$assign(var$3, $catch());
				} /*finally*/ {
					$nc(g)->dispose();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
			}
			return dest;
		}
	}
	if ((this->thisTransform == nullptr) || (this->thisSrcProfile != srcProfile) || (this->thisDestProfile != destProfile)) {
		updateBITransform(srcProfile, destProfile);
	}
	$nc(this->thisTransform)->colorConvert(src, dest);
	return dest;
}

void ColorConvertOp::updateBITransform($ICC_Profile* srcProfile, $ICC_Profile* destProfile) {
	$var($ICC_ProfileArray, theProfiles, nullptr);
	int32_t i1 = 0;
	int32_t nProfiles = 0;
	int32_t nTransforms = 0;
	int32_t whichTrans = 0;
	int32_t renderState = 0;
	$var($ColorTransformArray, theTransforms, nullptr);
	bool useSrc = false;
	bool useDest = false;
	nProfiles = $nc(this->profileList)->length;
	nTransforms = nProfiles;
	if ((nProfiles == 0) || (srcProfile != $nc(this->profileList)->get(0))) {
		nTransforms += 1;
		useSrc = true;
	}
	if ((nProfiles == 0) || (destProfile != $nc(this->profileList)->get(nProfiles - 1)) || (nTransforms < 2)) {
		nTransforms += 1;
		useDest = true;
	}
	$assign(theProfiles, $new($ICC_ProfileArray, nTransforms));
	int32_t idx = 0;
	if (useSrc) {
		theProfiles->set(idx++, srcProfile);
	}
	for (i1 = 0; i1 < nProfiles; ++i1) {
		theProfiles->set(idx++, $nc(this->profileList)->get(i1));
	}
	if (useDest) {
		theProfiles->set(idx, destProfile);
	}
	$assign(theTransforms, $new($ColorTransformArray, nTransforms));
	if ($nc(theProfiles->get(0))->getProfileClass() == $ICC_Profile::CLASS_OUTPUT) {
		renderState = $ICC_Profile::icRelativeColorimetric;
	} else {
		renderState = $ICC_Profile::icPerceptual;
	}
	whichTrans = $ColorTransform::In;
	$var($PCMM, mdl, $CMSManager::getModule());
	for (i1 = 0; i1 < nTransforms; ++i1) {
		if (i1 == nTransforms - 1) {
			whichTrans = $ColorTransform::Out;
		} else if ((whichTrans == $ColorTransform::Simulation) && ($nc(theProfiles->get(i1))->getProfileClass() == $ICC_Profile::CLASS_ABSTRACT)) {
			renderState = $ICC_Profile::icPerceptual;
			whichTrans = $ColorTransform::In;
		}
		theTransforms->set(i1, $($nc(mdl)->createTransform(theProfiles->get(i1), renderState, whichTrans)));
		renderState = getRenderingIntent(theProfiles->get(i1));
		whichTrans = $ColorTransform::Simulation;
	}
	$set(this, thisTransform, $nc(mdl)->createTransform(theTransforms));
	$set(this, thisSrcProfile, srcProfile);
	$set(this, thisDestProfile, destProfile);
}

$WritableRaster* ColorConvertOp::filter($Raster* src, $WritableRaster* dest$renamed) {
	$var($WritableRaster, dest, dest$renamed);
	if (this->CSList != nullptr) {
		return nonICCRasterFilter(src, dest);
	}
	int32_t nProfiles = $nc(this->profileList)->length;
	if (nProfiles < 2) {
		$throwNew($IllegalArgumentException, "Source or Destination ColorSpace is undefined"_s);
	}
	int32_t var$0 = $nc(src)->getNumBands();
	if (var$0 != $nc($nc(this->profileList)->get(0))->getNumComponents()) {
		$throwNew($IllegalArgumentException, "Numbers of source Raster bands and source color space components do not match"_s);
	}
	if (dest == nullptr) {
		$assign(dest, createCompatibleDestRaster(src));
	} else {
		int32_t var$2 = $nc(src)->getHeight();
		bool var$1 = var$2 != $nc(dest)->getHeight();
		if (!var$1) {
			int32_t var$3 = $nc(src)->getWidth();
			var$1 = var$3 != $nc(dest)->getWidth();
		}
		if (var$1) {
			$throwNew($IllegalArgumentException, "Width or height of Rasters do not match"_s);
		}
		int32_t var$4 = $nc(dest)->getNumBands();
		if (var$4 != $nc($nc(this->profileList)->get(nProfiles - 1))->getNumComponents()) {
			$throwNew($IllegalArgumentException, "Numbers of destination Raster bands and destination color space components do not match"_s);
		}
	}
	if (this->thisRasterTransform == nullptr) {
		int32_t i1 = 0;
		int32_t whichTrans = 0;
		int32_t renderState = 0;
		$var($ColorTransformArray, theTransforms, nullptr);
		$assign(theTransforms, $new($ColorTransformArray, nProfiles));
		if ($nc($nc(this->profileList)->get(0))->getProfileClass() == $ICC_Profile::CLASS_OUTPUT) {
			renderState = $ICC_Profile::icRelativeColorimetric;
		} else {
			renderState = $ICC_Profile::icPerceptual;
		}
		whichTrans = $ColorTransform::In;
		$var($PCMM, mdl, $CMSManager::getModule());
		for (i1 = 0; i1 < nProfiles; ++i1) {
			if (i1 == nProfiles - 1) {
				whichTrans = $ColorTransform::Out;
			} else if ((whichTrans == $ColorTransform::Simulation) && ($nc($nc(this->profileList)->get(i1))->getProfileClass() == $ICC_Profile::CLASS_ABSTRACT)) {
				renderState = $ICC_Profile::icPerceptual;
				whichTrans = $ColorTransform::In;
			}
			theTransforms->set(i1, $($nc(mdl)->createTransform($nc(this->profileList)->get(i1), renderState, whichTrans)));
			renderState = getRenderingIntent($nc(this->profileList)->get(i1));
			whichTrans = $ColorTransform::Simulation;
		}
		$set(this, thisRasterTransform, $nc(mdl)->createTransform(theTransforms));
	}
	int32_t srcTransferType = $nc(src)->getTransferType();
	int32_t dstTransferType = $nc(dest)->getTransferType();
	if ((srcTransferType == $DataBuffer::TYPE_FLOAT) || (srcTransferType == $DataBuffer::TYPE_DOUBLE) || (dstTransferType == $DataBuffer::TYPE_FLOAT) || (dstTransferType == $DataBuffer::TYPE_DOUBLE)) {
		if (this->srcMinVals == nullptr) {
			getMinMaxValsFromProfiles($nc(this->profileList)->get(0), $nc(this->profileList)->get(nProfiles - 1));
		}
		$nc(this->thisRasterTransform)->colorConvert(src, dest, this->srcMinVals, this->srcMaxVals, this->dstMinVals, this->dstMaxVals);
	} else {
		$nc(this->thisRasterTransform)->colorConvert(src, dest);
	}
	return dest;
}

$Rectangle2D* ColorConvertOp::getBounds2D($BufferedImage* src) {
	return getBounds2D($(static_cast<$Raster*>($nc(src)->getRaster())));
}

$Rectangle2D* ColorConvertOp::getBounds2D($Raster* src) {
	return $nc(src)->getBounds();
}

$BufferedImage* ColorConvertOp::createCompatibleDestImage($BufferedImage* src, $ColorModel* destCM) {
	$var($ColorSpace, cs, nullptr);
	if (destCM == nullptr) {
		if (this->CSList == nullptr) {
			int32_t nProfiles = $nc(this->profileList)->length;
			if (nProfiles == 0) {
				$throwNew($IllegalArgumentException, "Destination ColorSpace is undefined"_s);
			}
			$var($ICC_Profile, destProfile, $nc(this->profileList)->get(nProfiles - 1));
			$assign(cs, $new($ICC_ColorSpace, destProfile));
		} else {
			int32_t nSpaces = $nc(this->CSList)->length;
			$assign(cs, $nc(this->CSList)->get(nSpaces - 1));
		}
	}
	return createCompatibleDestImage(src, destCM, cs);
}

$BufferedImage* ColorConvertOp::createCompatibleDestImage($BufferedImage* src, $ColorModel* destCM$renamed, $ColorSpace* destCS) {
	$var($ColorModel, destCM, destCM$renamed);
	$var($BufferedImage, image, nullptr);
	if (destCM == nullptr) {
		$var($ColorModel, srcCM, $nc(src)->getColorModel());
		int32_t nbands = $nc(destCS)->getNumComponents();
		bool hasAlpha = $nc(srcCM)->hasAlpha();
		if (hasAlpha) {
			nbands += 1;
		}
		$var($ints, nbits, $new($ints, nbands));
		for (int32_t i = 0; i < nbands; ++i) {
			nbits->set(i, 8);
		}
		$var($ColorSpace, var$0, destCS);
		$var($ints, var$1, nbits);
		bool var$2 = hasAlpha;
		bool var$3 = srcCM->isAlphaPremultiplied();
		$assign(destCM, $new($ComponentColorModel, var$0, var$1, var$2, var$3, srcCM->getTransparency(), $DataBuffer::TYPE_BYTE));
	}
	int32_t w = $nc(src)->getWidth();
	int32_t h = src->getHeight();
	$var($ColorModel, var$4, destCM);
	$var($WritableRaster, var$5, $nc(destCM)->createCompatibleWritableRaster(w, h));
	$assign(image, $new($BufferedImage, var$4, var$5, destCM->isAlphaPremultiplied(), ($Hashtable*)nullptr));
	return image;
}

$WritableRaster* ColorConvertOp::createCompatibleDestRaster($Raster* src) {
	int32_t ncomponents = 0;
	if (this->CSList != nullptr) {
		if ($nc(this->CSList)->length != 2) {
			$throwNew($IllegalArgumentException, "Destination ColorSpace is undefined"_s);
		}
		ncomponents = $nc($nc(this->CSList)->get(1))->getNumComponents();
	} else {
		int32_t nProfiles = $nc(this->profileList)->length;
		if (nProfiles < 2) {
			$throwNew($IllegalArgumentException, "Destination ColorSpace is undefined"_s);
		}
		ncomponents = $nc($nc(this->profileList)->get(nProfiles - 1))->getNumComponents();
	}
	int32_t var$0 = $nc(src)->getWidth();
	int32_t var$1 = src->getHeight();
	int32_t var$2 = ncomponents;
	int32_t var$3 = src->getMinX();
	$var($WritableRaster, dest, $Raster::createInterleavedRaster($DataBuffer::TYPE_BYTE, var$0, var$1, var$2, $$new($Point, var$3, src->getMinY())));
	return dest;
}

$Point2D* ColorConvertOp::getPoint2D($Point2D* srcPt, $Point2D* dstPt$renamed) {
	$var($Point2D, dstPt, dstPt$renamed);
	if (dstPt == nullptr) {
		$assign(dstPt, $new($Point2D$Float));
	}
	double var$0 = $nc(srcPt)->getX();
	$nc(dstPt)->setLocation(var$0, srcPt->getY());
	return dstPt;
}

int32_t ColorConvertOp::getRenderingIntent($ICC_Profile* profile) {
	$var($bytes, header, $nc(profile)->getData($ICC_Profile::icSigHead));
	int32_t index = $ICC_Profile::icHdrRenderingIntent;
	return (((int32_t)($nc(header)->get(index + 2) & (uint32_t)255)) << 8) | ((int32_t)(header->get(index + 3) & (uint32_t)255));
}

$RenderingHints* ColorConvertOp::getRenderingHints() {
	return this->hints;
}

$BufferedImage* ColorConvertOp::nonICCBIFilter($BufferedImage* src, $ColorSpace* srcColorSpace, $BufferedImage* dst$renamed, $ColorSpace* dstColorSpace$renamed) {
	$var($BufferedImage, dst, dst$renamed);
	$var($ColorSpace, dstColorSpace, dstColorSpace$renamed);
	int32_t w = $nc(src)->getWidth();
	int32_t h = src->getHeight();
	$var($ICC_ColorSpace, ciespace, $cast($ICC_ColorSpace, $ColorSpace::getInstance($ColorSpace::CS_CIEXYZ)));
	if (dst == nullptr) {
		$assign(dst, createCompatibleDestImage(src, nullptr));
		$assign(dstColorSpace, $nc($($nc(dst)->getColorModel()))->getColorSpace());
	} else {
		bool var$1 = (h != dst->getHeight());
		if (var$1 || (w != dst->getWidth())) {
			$throwNew($IllegalArgumentException, "Width or height of BufferedImages do not match"_s);
		}
	}
	$var($Raster, srcRas, src->getRaster());
	$var($WritableRaster, dstRas, dst->getRaster());
	$var($ColorModel, srcCM, src->getColorModel());
	$var($ColorModel, dstCM, dst->getColorModel());
	int32_t srcNumComp = $nc(srcCM)->getNumColorComponents();
	int32_t dstNumComp = $nc(dstCM)->getNumColorComponents();
	bool dstHasAlpha = dstCM->hasAlpha();
	bool needSrcAlpha = srcCM->hasAlpha() && dstHasAlpha;
	$var($ColorSpaceArray, list, nullptr);
	if ((this->CSList == nullptr) && ($nc(this->profileList)->length != 0)) {
		bool nonICCSrc = false;
		bool nonICCDst = false;
		$var($ICC_Profile, srcProfile, nullptr);
		$var($ICC_Profile, dstProfile, nullptr);
		if (!($instanceOf($ICC_ColorSpace, srcColorSpace))) {
			nonICCSrc = true;
			$assign(srcProfile, $nc(ciespace)->getProfile());
		} else {
			nonICCSrc = false;
			$assign(srcProfile, $nc(($cast($ICC_ColorSpace, srcColorSpace)))->getProfile());
		}
		if (!($instanceOf($ICC_ColorSpace, dstColorSpace))) {
			nonICCDst = true;
			$assign(dstProfile, $nc(ciespace)->getProfile());
		} else {
			nonICCDst = false;
			$assign(dstProfile, $nc(($cast($ICC_ColorSpace, dstColorSpace)))->getProfile());
		}
		if ((this->thisTransform == nullptr) || (this->thisSrcProfile != srcProfile) || (this->thisDestProfile != dstProfile)) {
			updateBITransform(srcProfile, dstProfile);
		}
		float maxNum = 65535.0f;
		$var($ColorSpace, cs, nullptr);
		int32_t iccSrcNumComp = 0;
		if (nonICCSrc) {
			$assign(cs, ciespace);
			iccSrcNumComp = 3;
		} else {
			$assign(cs, srcColorSpace);
			iccSrcNumComp = srcNumComp;
		}
		$var($floats, srcMinVal, $new($floats, iccSrcNumComp));
		$var($floats, srcInvDiffMinMax, $new($floats, iccSrcNumComp));
		for (int32_t i = 0; i < srcNumComp; ++i) {
			srcMinVal->set(i, $nc(cs)->getMinValue(i));
			srcInvDiffMinMax->set(i, maxNum / (cs->getMaxValue(i) - srcMinVal->get(i)));
		}
		int32_t iccDstNumComp = 0;
		if (nonICCDst) {
			$assign(cs, ciespace);
			iccDstNumComp = 3;
		} else {
			$assign(cs, dstColorSpace);
			iccDstNumComp = dstNumComp;
		}
		$var($floats, dstMinVal, $new($floats, iccDstNumComp));
		$var($floats, dstDiffMinMax, $new($floats, iccDstNumComp));
		for (int32_t i = 0; i < dstNumComp; ++i) {
			dstMinVal->set(i, $nc(cs)->getMinValue(i));
			dstDiffMinMax->set(i, (cs->getMaxValue(i) - dstMinVal->get(i)) / maxNum);
		}
		$var($floats, dstColor, nullptr);
		if (dstHasAlpha) {
			int32_t size = ((dstNumComp + 1) > 3) ? (dstNumComp + 1) : 3;
			$assign(dstColor, $new($floats, size));
		} else {
			int32_t size = (dstNumComp > 3) ? dstNumComp : 3;
			$assign(dstColor, $new($floats, size));
		}
		$var($shorts, srcLine, $new($shorts, w * iccSrcNumComp));
		$var($shorts, dstLine, $new($shorts, w * iccDstNumComp));
		$var($Object, pixel, nullptr);
		$var($floats, color, nullptr);
		$var($floats, alpha, nullptr);
		if (needSrcAlpha) {
			$assign(alpha, $new($floats, w));
		}
		int32_t idx = 0;
		for (int32_t y = 0; y < h; ++y) {
			$assign(pixel, nullptr);
			$assign(color, nullptr);
			idx = 0;
			for (int32_t x = 0; x < w; ++x) {
				$assign(pixel, $nc(srcRas)->getDataElements(x, y, pixel));
				$assign(color, srcCM->getNormalizedComponents(pixel, color, 0));
				if (needSrcAlpha) {
					$nc(alpha)->set(x, $nc(color)->get(srcNumComp));
				}
				if (nonICCSrc) {
					$assign(color, $nc(srcColorSpace)->toCIEXYZ(color));
				}
				for (int32_t i = 0; i < iccSrcNumComp; ++i) {
					srcLine->set(idx++, $cast(int16_t, (($nc(color)->get(i) - srcMinVal->get(i)) * srcInvDiffMinMax->get(i) + 0.5f)));
				}
			}
			$nc(this->thisTransform)->colorConvert(srcLine, dstLine);
			$assign(pixel, nullptr);
			idx = 0;
			for (int32_t x = 0; x < w; ++x) {
				for (int32_t i = 0; i < iccDstNumComp; ++i) {
					$nc(dstColor)->set(i, ((float)((int32_t)(dstLine->get(idx++) & (uint32_t)0x0000FFFF))) * dstDiffMinMax->get(i) + dstMinVal->get(i));
				}
				if (nonICCDst) {
					$assign(color, $nc(srcColorSpace)->fromCIEXYZ(dstColor));
					for (int32_t i = 0; i < dstNumComp; ++i) {
						$nc(dstColor)->set(i, $nc(color)->get(i));
					}
				}
				if (needSrcAlpha) {
					$nc(dstColor)->set(dstNumComp, $nc(alpha)->get(x));
				} else if (dstHasAlpha) {
					$nc(dstColor)->set(dstNumComp, 1.0f);
				}
				$assign(pixel, dstCM->getDataElements(dstColor, 0, pixel));
				$nc(dstRas)->setDataElements(x, y, pixel);
			}
		}
	} else {
		int32_t numCS = 0;
		if (this->CSList == nullptr) {
			numCS = 0;
		} else {
			numCS = $nc(this->CSList)->length;
		}
		$var($floats, dstColor, nullptr);
		if (dstHasAlpha) {
			$assign(dstColor, $new($floats, dstNumComp + 1));
		} else {
			$assign(dstColor, $new($floats, dstNumComp));
		}
		$var($Object, spixel, nullptr);
		$var($Object, dpixel, nullptr);
		$var($floats, color, nullptr);
		$var($floats, tmpColor, nullptr);
		for (int32_t y = 0; y < h; ++y) {
			for (int32_t x = 0; x < w; ++x) {
				$assign(spixel, $nc(srcRas)->getDataElements(x, y, spixel));
				$assign(color, srcCM->getNormalizedComponents(spixel, color, 0));
				$assign(tmpColor, $nc(srcColorSpace)->toCIEXYZ(color));
				for (int32_t i = 0; i < numCS; ++i) {
					$assign(tmpColor, $nc($nc(this->CSList)->get(i))->fromCIEXYZ(tmpColor));
					$assign(tmpColor, $nc($nc(this->CSList)->get(i))->toCIEXYZ(tmpColor));
				}
				$assign(tmpColor, $nc(dstColorSpace)->fromCIEXYZ(tmpColor));
				for (int32_t i = 0; i < dstNumComp; ++i) {
					$nc(dstColor)->set(i, $nc(tmpColor)->get(i));
				}
				if (needSrcAlpha) {
					$nc(dstColor)->set(dstNumComp, $nc(color)->get(srcNumComp));
				} else if (dstHasAlpha) {
					$nc(dstColor)->set(dstNumComp, 1.0f);
				}
				$assign(dpixel, dstCM->getDataElements(dstColor, 0, dpixel));
				$nc(dstRas)->setDataElements(x, y, dpixel);
			}
		}
	}
	return dst;
}

$WritableRaster* ColorConvertOp::nonICCRasterFilter($Raster* src, $WritableRaster* dst$renamed) {
	$var($WritableRaster, dst, dst$renamed);
	if ($nc(this->CSList)->length != 2) {
		$throwNew($IllegalArgumentException, "Destination ColorSpace is undefined"_s);
	}
	int32_t var$0 = $nc(src)->getNumBands();
	if (var$0 != $nc($nc(this->CSList)->get(0))->getNumComponents()) {
		$throwNew($IllegalArgumentException, "Numbers of source Raster bands and source color space components do not match"_s);
	}
	if (dst == nullptr) {
		$assign(dst, createCompatibleDestRaster(src));
	} else {
		int32_t var$2 = $nc(src)->getHeight();
		bool var$1 = var$2 != $nc(dst)->getHeight();
		if (!var$1) {
			int32_t var$3 = $nc(src)->getWidth();
			var$1 = var$3 != $nc(dst)->getWidth();
		}
		if (var$1) {
			$throwNew($IllegalArgumentException, "Width or height of Rasters do not match"_s);
		}
		int32_t var$4 = $nc(dst)->getNumBands();
		if (var$4 != $nc($nc(this->CSList)->get(1))->getNumComponents()) {
			$throwNew($IllegalArgumentException, "Numbers of destination Raster bands and destination color space components do not match"_s);
		}
	}
	if (this->srcMinVals == nullptr) {
		getMinMaxValsFromColorSpaces($nc(this->CSList)->get(0), $nc(this->CSList)->get(1));
	}
	$var($SampleModel, srcSM, $nc(src)->getSampleModel());
	$var($SampleModel, dstSM, $nc(dst)->getSampleModel());
	bool srcIsFloat = false;
	bool dstIsFloat = false;
	int32_t srcTransferType = src->getTransferType();
	int32_t dstTransferType = dst->getTransferType();
	if ((srcTransferType == $DataBuffer::TYPE_FLOAT) || (srcTransferType == $DataBuffer::TYPE_DOUBLE)) {
		srcIsFloat = true;
	} else {
		srcIsFloat = false;
	}
	if ((dstTransferType == $DataBuffer::TYPE_FLOAT) || (dstTransferType == $DataBuffer::TYPE_DOUBLE)) {
		dstIsFloat = true;
	} else {
		dstIsFloat = false;
	}
	int32_t w = src->getWidth();
	int32_t h = src->getHeight();
	int32_t srcNumBands = src->getNumBands();
	int32_t dstNumBands = dst->getNumBands();
	$var($floats, srcScaleFactor, nullptr);
	$var($floats, dstScaleFactor, nullptr);
	if (!srcIsFloat) {
		$assign(srcScaleFactor, $new($floats, srcNumBands));
		for (int32_t i = 0; i < srcNumBands; ++i) {
			if (srcTransferType == $DataBuffer::TYPE_SHORT) {
				srcScaleFactor->set(i, ($nc(this->srcMaxVals)->get(i) - $nc(this->srcMinVals)->get(i)) / 32767.0f);
			} else {
				srcScaleFactor->set(i, ($nc(this->srcMaxVals)->get(i) - $nc(this->srcMinVals)->get(i)) / ((float)(($sl(1, $nc(srcSM)->getSampleSize(i))) - 1)));
			}
		}
	}
	if (!dstIsFloat) {
		$assign(dstScaleFactor, $new($floats, dstNumBands));
		for (int32_t i = 0; i < dstNumBands; ++i) {
			if (dstTransferType == $DataBuffer::TYPE_SHORT) {
				dstScaleFactor->set(i, 32767.0f / ($nc(this->dstMaxVals)->get(i) - $nc(this->dstMinVals)->get(i)));
			} else {
				dstScaleFactor->set(i, ((float)(($sl(1, $nc(dstSM)->getSampleSize(i))) - 1)) / ($nc(this->dstMaxVals)->get(i) - $nc(this->dstMinVals)->get(i)));
			}
		}
	}
	int32_t ys = src->getMinY();
	int32_t yd = dst->getMinY();
	int32_t xs = 0;
	int32_t xd = 0;
	float sample = 0.0;
	$var($floats, color, $new($floats, srcNumBands));
	$var($floats, tmpColor, nullptr);
	$var($ColorSpace, srcColorSpace, $nc(this->CSList)->get(0));
	$var($ColorSpace, dstColorSpace, $nc(this->CSList)->get(1));
	for (int32_t y = 0; y < h; ++y, ++ys, ++yd) {
		xs = src->getMinX();
		xd = dst->getMinX();
		for (int32_t x = 0; x < w; ++x, ++xs, ++xd) {
			for (int32_t i = 0; i < srcNumBands; ++i) {
				sample = src->getSampleFloat(xs, ys, i);
				if (!srcIsFloat) {
					sample = sample * $nc(srcScaleFactor)->get(i) + $nc(this->srcMinVals)->get(i);
				}
				color->set(i, sample);
			}
			$assign(tmpColor, $nc(srcColorSpace)->toCIEXYZ(color));
			$assign(tmpColor, $nc(dstColorSpace)->fromCIEXYZ(tmpColor));
			for (int32_t i = 0; i < dstNumBands; ++i) {
				sample = $nc(tmpColor)->get(i);
				if (!dstIsFloat) {
					sample = (sample - $nc(this->dstMinVals)->get(i)) * $nc(dstScaleFactor)->get(i);
				}
				dst->setSample(xd, yd, i, sample);
			}
		}
	}
	return dst;
}

void ColorConvertOp::getMinMaxValsFromProfiles($ICC_Profile* srcProfile, $ICC_Profile* dstProfile) {
	int32_t type = $nc(srcProfile)->getColorSpaceType();
	int32_t nc = srcProfile->getNumComponents();
	$set(this, srcMinVals, $new($floats, nc));
	$set(this, srcMaxVals, $new($floats, nc));
	setMinMax(type, nc, this->srcMinVals, this->srcMaxVals);
	type = $nc(dstProfile)->getColorSpaceType();
	nc = dstProfile->getNumComponents();
	$set(this, dstMinVals, $new($floats, nc));
	$set(this, dstMaxVals, $new($floats, nc));
	setMinMax(type, nc, this->dstMinVals, this->dstMaxVals);
}

void ColorConvertOp::setMinMax(int32_t type, int32_t nc, $floats* minVals, $floats* maxVals) {
	if (type == $ColorSpace::TYPE_Lab) {
		$nc(minVals)->set(0, 0.0f);
		$nc(maxVals)->set(0, 100.0f);
		minVals->set(1, -128.0f);
		maxVals->set(1, 127.0f);
		minVals->set(2, -128.0f);
		maxVals->set(2, 127.0f);
	} else if (type == $ColorSpace::TYPE_XYZ) {
		$nc(minVals)->set(0, minVals->set(1, minVals->set(2, 0.0f)));
		$nc(maxVals)->set(0, maxVals->set(1, maxVals->set(2, 1.0f + (32767.0f / 32768.0f))));
	} else {
		for (int32_t i = 0; i < nc; ++i) {
			$nc(minVals)->set(i, 0.0f);
			$nc(maxVals)->set(i, 1.0f);
		}
	}
}

void ColorConvertOp::getMinMaxValsFromColorSpaces($ColorSpace* srcCspace, $ColorSpace* dstCspace) {
	int32_t nc = $nc(srcCspace)->getNumComponents();
	$set(this, srcMinVals, $new($floats, nc));
	$set(this, srcMaxVals, $new($floats, nc));
	for (int32_t i = 0; i < nc; ++i) {
		$nc(this->srcMinVals)->set(i, srcCspace->getMinValue(i));
		$nc(this->srcMaxVals)->set(i, srcCspace->getMaxValue(i));
	}
	nc = $nc(dstCspace)->getNumComponents();
	$set(this, dstMinVals, $new($floats, nc));
	$set(this, dstMaxVals, $new($floats, nc));
	for (int32_t i = 0; i < nc; ++i) {
		$nc(this->dstMinVals)->set(i, dstCspace->getMinValue(i));
		$nc(this->dstMaxVals)->set(i, dstCspace->getMaxValue(i));
	}
}

ColorConvertOp::ColorConvertOp() {
}

$Class* ColorConvertOp::load$($String* name, bool initialize) {
	$loadClass(ColorConvertOp, name, initialize, &_ColorConvertOp_ClassInfo_, allocate$ColorConvertOp);
	return class$;
}

$Class* ColorConvertOp::class$ = nullptr;

		} // image
	} // awt
} // java