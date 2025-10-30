#include <sun/java2d/cmm/lcms/LCMSTransform.h>

#include <java/awt/color/CMMException.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <sun/java2d/cmm/ColorTransform.h>
#include <sun/java2d/cmm/lcms/LCMS.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout$ImageLayoutException.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout.h>
#include <sun/java2d/cmm/lcms/LCMSProfile.h>
#include <jcpp.h>

#undef ID
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_SHORT

using $ICC_ProfileArray = $Array<::java::awt::color::ICC_Profile>;
using $ColorTransformArray = $Array<::sun::java2d::cmm::ColorTransform>;
using $LCMSProfileArray = $Array<::sun::java2d::cmm::lcms::LCMSProfile>;
using $CMMException = ::java::awt::color::CMMException;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorTransform = ::sun::java2d::cmm::ColorTransform;
using $LCMS = ::sun::java2d::cmm::lcms::LCMS;
using $LCMSImageLayout = ::sun::java2d::cmm::lcms::LCMSImageLayout;
using $LCMSImageLayout$ImageLayoutException = ::sun::java2d::cmm::lcms::LCMSImageLayout$ImageLayoutException;
using $LCMSProfile = ::sun::java2d::cmm::lcms::LCMSProfile;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

$FieldInfo _LCMSTransform_FieldInfo_[] = {
	{"ID", "J", nullptr, 0, $field(LCMSTransform, ID)},
	{"inFormatter", "I", nullptr, $PRIVATE, $field(LCMSTransform, inFormatter)},
	{"isInIntPacked", "Z", nullptr, $PRIVATE, $field(LCMSTransform, isInIntPacked)},
	{"outFormatter", "I", nullptr, $PRIVATE, $field(LCMSTransform, outFormatter)},
	{"isOutIntPacked", "Z", nullptr, $PRIVATE, $field(LCMSTransform, isOutIntPacked)},
	{"profiles", "[Ljava/awt/color/ICC_Profile;", nullptr, 0, $field(LCMSTransform, profiles)},
	{"lcmsProfiles", "[Lsun/java2d/cmm/lcms/LCMSProfile;", nullptr, 0, $field(LCMSTransform, lcmsProfiles)},
	{"renderType", "I", nullptr, 0, $field(LCMSTransform, renderType)},
	{"transformType", "I", nullptr, 0, $field(LCMSTransform, transformType)},
	{"numInComponents", "I", nullptr, $PRIVATE, $field(LCMSTransform, numInComponents)},
	{"numOutComponents", "I", nullptr, $PRIVATE, $field(LCMSTransform, numOutComponents)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(LCMSTransform, disposerReferent)},
	{}
};

$MethodInfo _LCMSTransform_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/color/ICC_Profile;II)V", nullptr, $PUBLIC, $method(static_cast<void(LCMSTransform::*)($ICC_Profile*,int32_t,int32_t)>(&LCMSTransform::init$))},
	{"<init>", "([Lsun/java2d/cmm/ColorTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(LCMSTransform::*)($ColorTransformArray*)>(&LCMSTransform::init$))},
	{"colorConvert", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC},
	{"colorConvert", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;[F[F[F[F)V", nullptr, $PUBLIC},
	{"colorConvert", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC},
	{"colorConvert", "([S[S)[S", nullptr, $PUBLIC},
	{"colorConvert", "([B[B)[B", nullptr, $PUBLIC},
	{"doTransform", "(Lsun/java2d/cmm/lcms/LCMSImageLayout;Lsun/java2d/cmm/lcms/LCMSImageLayout;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(LCMSTransform::*)($LCMSImageLayout*,$LCMSImageLayout*)>(&LCMSTransform::doTransform))},
	{"getNumInComponents", "()I", nullptr, $PUBLIC},
	{"getNumOutComponents", "()I", nullptr, $PUBLIC},
	{"isLCMSSupport", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($BufferedImage*,$BufferedImage*)>(&LCMSTransform::isLCMSSupport))},
	{}
};

$ClassInfo _LCMSTransform_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.cmm.lcms.LCMSTransform",
	"java.lang.Object",
	"sun.java2d.cmm.ColorTransform",
	_LCMSTransform_FieldInfo_,
	_LCMSTransform_MethodInfo_
};

$Object* allocate$LCMSTransform($Class* clazz) {
	return $of($alloc(LCMSTransform));
}

void LCMSTransform::init$($ICC_Profile* profile, int32_t renderType, int32_t transformType) {
	this->inFormatter = 0;
	this->isInIntPacked = false;
	this->outFormatter = 0;
	this->isOutIntPacked = false;
	this->numInComponents = -1;
	this->numOutComponents = -1;
	$set(this, disposerReferent, $new($Object));
	$set(this, profiles, $new($ICC_ProfileArray, 1));
	$nc(this->profiles)->set(0, profile);
	$set(this, lcmsProfiles, $new($LCMSProfileArray, 1));
	$nc(this->lcmsProfiles)->set(0, $($LCMS::getProfileID(profile)));
	this->renderType = (renderType == $ColorTransform::Any) ? $ICC_Profile::icPerceptual : renderType;
	this->transformType = transformType;
	this->numInComponents = $nc($nc(this->profiles)->get(0))->getNumComponents();
	this->numOutComponents = $nc($nc(this->profiles)->get($nc(this->profiles)->length - 1))->getNumComponents();
}

void LCMSTransform::init$($ColorTransformArray* transforms) {
	$useLocalCurrentObjectStackCache();
	this->inFormatter = 0;
	this->isInIntPacked = false;
	this->outFormatter = 0;
	this->isOutIntPacked = false;
	this->numInComponents = -1;
	this->numOutComponents = -1;
	$set(this, disposerReferent, $new($Object));
	int32_t size = 0;
	for (int32_t i = 0; i < $nc(transforms)->length; ++i) {
		size += $nc($nc(($cast(LCMSTransform, transforms->get(i))))->profiles)->length;
	}
	$set(this, profiles, $new($ICC_ProfileArray, size));
	$set(this, lcmsProfiles, $new($LCMSProfileArray, size));
	int32_t j = 0;
	for (int32_t i = 0; i < $nc(transforms)->length; ++i) {
		$var(LCMSTransform, curTrans, $cast(LCMSTransform, transforms->get(i)));
		$System::arraycopy($nc(curTrans)->profiles, 0, this->profiles, j, $nc(curTrans->profiles)->length);
		$System::arraycopy($nc(curTrans)->lcmsProfiles, 0, this->lcmsProfiles, j, $nc(curTrans->lcmsProfiles)->length);
		j += $nc($nc(curTrans)->profiles)->length;
	}
	this->renderType = $nc(($cast(LCMSTransform, $nc(transforms)->get(0))))->renderType;
	this->numInComponents = $nc($nc(this->profiles)->get(0))->getNumComponents();
	this->numOutComponents = $nc($nc(this->profiles)->get($nc(this->profiles)->length - 1))->getNumComponents();
}

int32_t LCMSTransform::getNumInComponents() {
	return this->numInComponents;
}

int32_t LCMSTransform::getNumOutComponents() {
	return this->numOutComponents;
}

void LCMSTransform::doTransform($LCMSImageLayout* in, $LCMSImageLayout* out) {
	$synchronized(this) {
		if (this->ID == (int64_t)0 || this->inFormatter != $nc(in)->pixelType || this->isInIntPacked != $nc(in)->isIntPacked || this->outFormatter != $nc(out)->pixelType || this->isOutIntPacked != $nc(out)->isIntPacked) {
			if (this->ID != (int64_t)0) {
				$set(this, disposerReferent, $new($Object));
			}
			this->inFormatter = $nc(in)->pixelType;
			this->isInIntPacked = in->isIntPacked;
			this->outFormatter = out->pixelType;
			this->isOutIntPacked = out->isIntPacked;
			this->ID = $LCMS::createTransform(this->lcmsProfiles, this->renderType, this->inFormatter, this->isInIntPacked, this->outFormatter, this->isOutIntPacked, this->disposerReferent);
		}
		$LCMS::colorConvert(this, in, out);
	}
}

bool LCMSTransform::isLCMSSupport($BufferedImage* src, $BufferedImage* dst) {
	$init(LCMSTransform);
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc(dst)->getColorModel()))->hasAlpha()) {
		return true;
	}
	bool var$0 = $nc(src)->isAlphaPremultiplied();
	if (var$0 || $nc(dst)->isAlphaPremultiplied()) {
		return false;
	}
	bool var$1 = $nc($($nc(dst)->getColorModel()))->hasAlpha();
	return var$1 == $nc($($nc(src)->getColorModel()))->hasAlpha();
}

void LCMSTransform::colorConvert($BufferedImage* src, $BufferedImage* dst) {
	$useLocalCurrentObjectStackCache();
	$var($LCMSImageLayout, srcIL, nullptr);
	$var($LCMSImageLayout, dstIL, nullptr);
	try {
		if (isLCMSSupport(src, dst)) {
			$assign(dstIL, $LCMSImageLayout::createImageLayout(dst));
			if (dstIL != nullptr) {
				$assign(srcIL, $LCMSImageLayout::createImageLayout(src));
				if (srcIL != nullptr) {
					doTransform(srcIL, dstIL);
					return;
				}
			}
		}
	} catch ($LCMSImageLayout$ImageLayoutException& e) {
		$throwNew($CMMException, "Unable to convert images"_s);
	}
	$var($Raster, srcRas, $nc(src)->getRaster());
	$var($WritableRaster, dstRas, $nc(dst)->getRaster());
	$var($ColorModel, srcCM, src->getColorModel());
	$var($ColorModel, dstCM, dst->getColorModel());
	int32_t w = src->getWidth();
	int32_t h = src->getHeight();
	int32_t srcNumComp = $nc(srcCM)->getNumColorComponents();
	int32_t dstNumComp = $nc(dstCM)->getNumColorComponents();
	int32_t precision = 8;
	float maxNum = 255.0f;
	for (int32_t i = 0; i < srcNumComp; ++i) {
		if (srcCM->getComponentSize(i) > 8) {
			precision = 16;
			maxNum = 65535.0f;
		}
	}
	for (int32_t i = 0; i < dstNumComp; ++i) {
		if (dstCM->getComponentSize(i) > 8) {
			precision = 16;
			maxNum = 65535.0f;
		}
	}
	$var($floats, srcMinVal, $new($floats, srcNumComp));
	$var($floats, srcInvDiffMinMax, $new($floats, srcNumComp));
	$var($ColorSpace, cs, srcCM->getColorSpace());
	for (int32_t i = 0; i < srcNumComp; ++i) {
		srcMinVal->set(i, $nc(cs)->getMinValue(i));
		srcInvDiffMinMax->set(i, maxNum / (cs->getMaxValue(i) - srcMinVal->get(i)));
	}
	$assign(cs, dstCM->getColorSpace());
	$var($floats, dstMinVal, $new($floats, dstNumComp));
	$var($floats, dstDiffMinMax, $new($floats, dstNumComp));
	for (int32_t i = 0; i < dstNumComp; ++i) {
		dstMinVal->set(i, $nc(cs)->getMinValue(i));
		dstDiffMinMax->set(i, (cs->getMaxValue(i) - dstMinVal->get(i)) / maxNum);
	}
	bool dstHasAlpha = dstCM->hasAlpha();
	bool needSrcAlpha = srcCM->hasAlpha() && dstHasAlpha;
	$var($floats, dstColor, nullptr);
	if (dstHasAlpha) {
		$assign(dstColor, $new($floats, dstNumComp + 1));
	} else {
		$assign(dstColor, $new($floats, dstNumComp));
	}
	if (precision == 8) {
		$var($bytes, srcLine, $new($bytes, w * srcNumComp));
		$var($bytes, dstLine, $new($bytes, w * dstNumComp));
		$var($Object, pixel, nullptr);
		$var($floats, color, nullptr);
		$var($floats, alpha, nullptr);
		if (needSrcAlpha) {
			$assign(alpha, $new($floats, w));
		}
		int32_t idx = 0;
		try {
			$var($bytes, var$0, srcLine);
			int32_t var$1 = $div(srcLine->length, getNumInComponents());
			int32_t var$3 = $LCMSImageLayout::CHANNELS_SH(getNumInComponents());
			int32_t var$2 = var$3 | $LCMSImageLayout::BYTES_SH(1);
			$assign(srcIL, $new($LCMSImageLayout, var$0, var$1, var$2, getNumInComponents()));
			$var($bytes, var$4, dstLine);
			int32_t var$5 = $div(dstLine->length, getNumOutComponents());
			int32_t var$7 = $LCMSImageLayout::CHANNELS_SH(getNumOutComponents());
			int32_t var$6 = var$7 | $LCMSImageLayout::BYTES_SH(1);
			$assign(dstIL, $new($LCMSImageLayout, var$4, var$5, var$6, getNumOutComponents()));
		} catch ($LCMSImageLayout$ImageLayoutException& e) {
			$throwNew($CMMException, "Unable to convert images"_s);
		}
		for (int32_t y = 0; y < h; ++y) {
			$assign(pixel, nullptr);
			$assign(color, nullptr);
			idx = 0;
			for (int32_t x = 0; x < w; ++x) {
				$assign(pixel, $nc(srcRas)->getDataElements(x, y, pixel));
				$assign(color, srcCM->getNormalizedComponents(pixel, color, 0));
				for (int32_t i = 0; i < srcNumComp; ++i) {
					srcLine->set(idx++, $cast(int8_t, (($nc(color)->get(i) - srcMinVal->get(i)) * srcInvDiffMinMax->get(i) + 0.5f)));
				}
				if (needSrcAlpha) {
					$nc(alpha)->set(x, $nc(color)->get(srcNumComp));
				}
			}
			doTransform(srcIL, dstIL);
			$assign(pixel, nullptr);
			idx = 0;
			for (int32_t x = 0; x < w; ++x) {
				for (int32_t i = 0; i < dstNumComp; ++i) {
					$nc(dstColor)->set(i, ((float)((int32_t)(dstLine->get(idx++) & (uint32_t)255))) * dstDiffMinMax->get(i) + dstMinVal->get(i));
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
		$var($shorts, srcLine, $new($shorts, w * srcNumComp));
		$var($shorts, dstLine, $new($shorts, w * dstNumComp));
		$var($Object, pixel, nullptr);
		$var($floats, color, nullptr);
		$var($floats, alpha, nullptr);
		if (needSrcAlpha) {
			$assign(alpha, $new($floats, w));
		}
		int32_t idx = 0;
		try {
			$var($shorts, var$8, srcLine);
			int32_t var$9 = $div(srcLine->length, getNumInComponents());
			int32_t var$11 = $LCMSImageLayout::CHANNELS_SH(getNumInComponents());
			int32_t var$10 = var$11 | $LCMSImageLayout::BYTES_SH(2);
			$assign(srcIL, $new($LCMSImageLayout, var$8, var$9, var$10, getNumInComponents() * 2));
			$var($shorts, var$12, dstLine);
			int32_t var$13 = $div(dstLine->length, getNumOutComponents());
			int32_t var$15 = $LCMSImageLayout::CHANNELS_SH(getNumOutComponents());
			int32_t var$14 = var$15 | $LCMSImageLayout::BYTES_SH(2);
			$assign(dstIL, $new($LCMSImageLayout, var$12, var$13, var$14, getNumOutComponents() * 2));
		} catch ($LCMSImageLayout$ImageLayoutException& e) {
			$throwNew($CMMException, "Unable to convert images"_s);
		}
		for (int32_t y = 0; y < h; ++y) {
			$assign(pixel, nullptr);
			$assign(color, nullptr);
			idx = 0;
			for (int32_t x = 0; x < w; ++x) {
				$assign(pixel, $nc(srcRas)->getDataElements(x, y, pixel));
				$assign(color, srcCM->getNormalizedComponents(pixel, color, 0));
				for (int32_t i = 0; i < srcNumComp; ++i) {
					srcLine->set(idx++, $cast(int16_t, (($nc(color)->get(i) - srcMinVal->get(i)) * srcInvDiffMinMax->get(i) + 0.5f)));
				}
				if (needSrcAlpha) {
					$nc(alpha)->set(x, $nc(color)->get(srcNumComp));
				}
			}
			doTransform(srcIL, dstIL);
			$assign(pixel, nullptr);
			idx = 0;
			for (int32_t x = 0; x < w; ++x) {
				for (int32_t i = 0; i < dstNumComp; ++i) {
					$nc(dstColor)->set(i, ((float)((int32_t)(dstLine->get(idx++) & (uint32_t)0x0000FFFF))) * dstDiffMinMax->get(i) + dstMinVal->get(i));
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
	}
}

void LCMSTransform::colorConvert($Raster* src, $WritableRaster* dst, $floats* srcMinVal, $floats* srcMaxVal, $floats* dstMinVal, $floats* dstMaxVal) {
	$useLocalCurrentObjectStackCache();
	$var($LCMSImageLayout, srcIL, nullptr);
	$var($LCMSImageLayout, dstIL, nullptr);
	$var($SampleModel, srcSM, $nc(src)->getSampleModel());
	$var($SampleModel, dstSM, $nc(dst)->getSampleModel());
	int32_t srcTransferType = src->getTransferType();
	int32_t dstTransferType = dst->getTransferType();
	bool srcIsFloat = false;
	bool dstIsFloat = false;
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
	$var($floats, srcScaleFactor, $new($floats, srcNumBands));
	$var($floats, dstScaleFactor, $new($floats, dstNumBands));
	$var($floats, srcUseMinVal, $new($floats, srcNumBands));
	$var($floats, dstUseMinVal, $new($floats, dstNumBands));
	for (int32_t i = 0; i < srcNumBands; ++i) {
		if (srcIsFloat) {
			srcScaleFactor->set(i, 65535.0f / ($nc(srcMaxVal)->get(i) - $nc(srcMinVal)->get(i)));
			srcUseMinVal->set(i, srcMinVal->get(i));
		} else {
			if (srcTransferType == $DataBuffer::TYPE_SHORT) {
				srcScaleFactor->set(i, 65535.0f / 32767.0f);
			} else {
				srcScaleFactor->set(i, 65535.0f / ((float)(($sl(1, $nc(srcSM)->getSampleSize(i))) - 1)));
			}
			srcUseMinVal->set(i, 0.0f);
		}
	}
	for (int32_t i = 0; i < dstNumBands; ++i) {
		if (dstIsFloat) {
			dstScaleFactor->set(i, ($nc(dstMaxVal)->get(i) - $nc(dstMinVal)->get(i)) / 65535.0f);
			dstUseMinVal->set(i, dstMinVal->get(i));
		} else {
			if (dstTransferType == $DataBuffer::TYPE_SHORT) {
				dstScaleFactor->set(i, 32767.0f / 65535.0f);
			} else {
				dstScaleFactor->set(i, ((float)(($sl(1, $nc(dstSM)->getSampleSize(i))) - 1)) / 65535.0f);
			}
			dstUseMinVal->set(i, 0.0f);
		}
	}
	int32_t ys = src->getMinY();
	int32_t yd = dst->getMinY();
	int32_t xs = 0;
	int32_t xd = 0;
	float sample = 0.0;
	$var($shorts, srcLine, $new($shorts, w * srcNumBands));
	$var($shorts, dstLine, $new($shorts, w * dstNumBands));
	int32_t idx = 0;
	try {
		$var($shorts, var$0, srcLine);
		int32_t var$1 = $div(srcLine->length, getNumInComponents());
		int32_t var$3 = $LCMSImageLayout::CHANNELS_SH(getNumInComponents());
		int32_t var$2 = var$3 | $LCMSImageLayout::BYTES_SH(2);
		$assign(srcIL, $new($LCMSImageLayout, var$0, var$1, var$2, getNumInComponents() * 2));
		$var($shorts, var$4, dstLine);
		int32_t var$5 = $div(dstLine->length, getNumOutComponents());
		int32_t var$7 = $LCMSImageLayout::CHANNELS_SH(getNumOutComponents());
		int32_t var$6 = var$7 | $LCMSImageLayout::BYTES_SH(2);
		$assign(dstIL, $new($LCMSImageLayout, var$4, var$5, var$6, getNumOutComponents() * 2));
	} catch ($LCMSImageLayout$ImageLayoutException& e) {
		$throwNew($CMMException, "Unable to convert rasters"_s);
	}
	for (int32_t y = 0; y < h; ++y, ++ys, ++yd) {
		xs = src->getMinX();
		idx = 0;
		for (int32_t x = 0; x < w; ++x, ++xs) {
			for (int32_t i = 0; i < srcNumBands; ++i) {
				sample = src->getSampleFloat(xs, ys, i);
				srcLine->set(idx++, $cast(int16_t, ((sample - srcUseMinVal->get(i)) * srcScaleFactor->get(i) + 0.5f)));
			}
		}
		doTransform(srcIL, dstIL);
		xd = dst->getMinX();
		idx = 0;
		for (int32_t x = 0; x < w; ++x, ++xd) {
			for (int32_t i = 0; i < dstNumBands; ++i) {
				sample = (((int32_t)(dstLine->get(idx++) & (uint32_t)0x0000FFFF)) * dstScaleFactor->get(i)) + dstUseMinVal->get(i);
				dst->setSample(xd, yd, i, sample);
			}
		}
	}
}

void LCMSTransform::colorConvert($Raster* src, $WritableRaster* dst) {
	$useLocalCurrentObjectStackCache();
	$var($LCMSImageLayout, srcIL, nullptr);
	$var($LCMSImageLayout, dstIL, nullptr);
	$assign(dstIL, $LCMSImageLayout::createImageLayout(static_cast<$Raster*>(dst)));
	if (dstIL != nullptr) {
		$assign(srcIL, $LCMSImageLayout::createImageLayout(src));
		if (srcIL != nullptr) {
			doTransform(srcIL, dstIL);
			return;
		}
	}
	$var($SampleModel, srcSM, $nc(src)->getSampleModel());
	$var($SampleModel, dstSM, $nc(dst)->getSampleModel());
	int32_t srcTransferType = src->getTransferType();
	int32_t dstTransferType = dst->getTransferType();
	int32_t w = src->getWidth();
	int32_t h = src->getHeight();
	int32_t srcNumBands = src->getNumBands();
	int32_t dstNumBands = dst->getNumBands();
	int32_t precision = 8;
	float maxNum = 255.0f;
	for (int32_t i = 0; i < srcNumBands; ++i) {
		if ($nc(srcSM)->getSampleSize(i) > 8) {
			precision = 16;
			maxNum = 65535.0f;
		}
	}
	for (int32_t i = 0; i < dstNumBands; ++i) {
		if ($nc(dstSM)->getSampleSize(i) > 8) {
			precision = 16;
			maxNum = 65535.0f;
		}
	}
	$var($floats, srcScaleFactor, $new($floats, srcNumBands));
	$var($floats, dstScaleFactor, $new($floats, dstNumBands));
	for (int32_t i = 0; i < srcNumBands; ++i) {
		if (srcTransferType == $DataBuffer::TYPE_SHORT) {
			srcScaleFactor->set(i, maxNum / 32767.0f);
		} else {
			srcScaleFactor->set(i, maxNum / ((float)(($sl(1, $nc(srcSM)->getSampleSize(i))) - 1)));
		}
	}
	for (int32_t i = 0; i < dstNumBands; ++i) {
		if (dstTransferType == $DataBuffer::TYPE_SHORT) {
			dstScaleFactor->set(i, 32767.0f / maxNum);
		} else {
			dstScaleFactor->set(i, ((float)(($sl(1, $nc(dstSM)->getSampleSize(i))) - 1)) / maxNum);
		}
	}
	int32_t ys = src->getMinY();
	int32_t yd = dst->getMinY();
	int32_t xs = 0;
	int32_t xd = 0;
	int32_t sample = 0;
	if (precision == 8) {
		$var($bytes, srcLine, $new($bytes, w * srcNumBands));
		$var($bytes, dstLine, $new($bytes, w * dstNumBands));
		int32_t idx = 0;
		try {
			$var($bytes, var$0, srcLine);
			int32_t var$1 = $div(srcLine->length, getNumInComponents());
			int32_t var$3 = $LCMSImageLayout::CHANNELS_SH(getNumInComponents());
			int32_t var$2 = var$3 | $LCMSImageLayout::BYTES_SH(1);
			$assign(srcIL, $new($LCMSImageLayout, var$0, var$1, var$2, getNumInComponents()));
			$var($bytes, var$4, dstLine);
			int32_t var$5 = $div(dstLine->length, getNumOutComponents());
			int32_t var$7 = $LCMSImageLayout::CHANNELS_SH(getNumOutComponents());
			int32_t var$6 = var$7 | $LCMSImageLayout::BYTES_SH(1);
			$assign(dstIL, $new($LCMSImageLayout, var$4, var$5, var$6, getNumOutComponents()));
		} catch ($LCMSImageLayout$ImageLayoutException& e) {
			$throwNew($CMMException, "Unable to convert rasters"_s);
		}
		for (int32_t y = 0; y < h; ++y, ++ys, ++yd) {
			xs = src->getMinX();
			idx = 0;
			for (int32_t x = 0; x < w; ++x, ++xs) {
				for (int32_t i = 0; i < srcNumBands; ++i) {
					sample = src->getSample(xs, ys, i);
					srcLine->set(idx++, $cast(int8_t, ((sample * srcScaleFactor->get(i)) + 0.5f)));
				}
			}
			doTransform(srcIL, dstIL);
			xd = dst->getMinX();
			idx = 0;
			for (int32_t x = 0; x < w; ++x, ++xd) {
				for (int32_t i = 0; i < dstNumBands; ++i) {
					sample = $cast(int32_t, ((((int32_t)(dstLine->get(idx++) & (uint32_t)255)) * dstScaleFactor->get(i)) + 0.5f));
					dst->setSample(xd, yd, i, sample);
				}
			}
		}
	} else {
		$var($shorts, srcLine, $new($shorts, w * srcNumBands));
		$var($shorts, dstLine, $new($shorts, w * dstNumBands));
		int32_t idx = 0;
		try {
			$var($shorts, var$8, srcLine);
			int32_t var$9 = $div(srcLine->length, getNumInComponents());
			int32_t var$11 = $LCMSImageLayout::CHANNELS_SH(getNumInComponents());
			int32_t var$10 = var$11 | $LCMSImageLayout::BYTES_SH(2);
			$assign(srcIL, $new($LCMSImageLayout, var$8, var$9, var$10, getNumInComponents() * 2));
			$var($shorts, var$12, dstLine);
			int32_t var$13 = $div(dstLine->length, getNumOutComponents());
			int32_t var$15 = $LCMSImageLayout::CHANNELS_SH(getNumOutComponents());
			int32_t var$14 = var$15 | $LCMSImageLayout::BYTES_SH(2);
			$assign(dstIL, $new($LCMSImageLayout, var$12, var$13, var$14, getNumOutComponents() * 2));
		} catch ($LCMSImageLayout$ImageLayoutException& e) {
			$throwNew($CMMException, "Unable to convert rasters"_s);
		}
		for (int32_t y = 0; y < h; ++y, ++ys, ++yd) {
			xs = src->getMinX();
			idx = 0;
			for (int32_t x = 0; x < w; ++x, ++xs) {
				for (int32_t i = 0; i < srcNumBands; ++i) {
					sample = src->getSample(xs, ys, i);
					srcLine->set(idx++, $cast(int16_t, ((sample * srcScaleFactor->get(i)) + 0.5f)));
				}
			}
			doTransform(srcIL, dstIL);
			xd = dst->getMinX();
			idx = 0;
			for (int32_t x = 0; x < w; ++x, ++xd) {
				for (int32_t i = 0; i < dstNumBands; ++i) {
					sample = $cast(int32_t, ((((int32_t)(dstLine->get(idx++) & (uint32_t)0x0000FFFF)) * dstScaleFactor->get(i)) + 0.5f));
					dst->setSample(xd, yd, i, sample);
				}
			}
		}
	}
}

$shorts* LCMSTransform::colorConvert($shorts* src, $shorts* dst$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($shorts, dst, dst$renamed);
	if (dst == nullptr) {
		int32_t var$0 = ($div($nc(src)->length, getNumInComponents()));
		$assign(dst, $new($shorts, var$0 * getNumOutComponents()));
	}
	try {
		$var($shorts, var$1, src);
		int32_t var$2 = $div($nc(src)->length, getNumInComponents());
		int32_t var$4 = $LCMSImageLayout::CHANNELS_SH(getNumInComponents());
		int32_t var$3 = var$4 | $LCMSImageLayout::BYTES_SH(2);
		$var($LCMSImageLayout, srcIL, $new($LCMSImageLayout, var$1, var$2, var$3, getNumInComponents() * 2));
		$var($shorts, var$5, dst);
		int32_t var$6 = $div($nc(dst)->length, getNumOutComponents());
		int32_t var$8 = $LCMSImageLayout::CHANNELS_SH(getNumOutComponents());
		int32_t var$7 = var$8 | $LCMSImageLayout::BYTES_SH(2);
		$var($LCMSImageLayout, dstIL, $new($LCMSImageLayout, var$5, var$6, var$7, getNumOutComponents() * 2));
		doTransform(srcIL, dstIL);
		return dst;
	} catch ($LCMSImageLayout$ImageLayoutException& e) {
		$throwNew($CMMException, "Unable to convert data"_s);
	}
	$shouldNotReachHere();
}

$bytes* LCMSTransform::colorConvert($bytes* src, $bytes* dst$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, dst, dst$renamed);
	if (dst == nullptr) {
		int32_t var$0 = ($div($nc(src)->length, getNumInComponents()));
		$assign(dst, $new($bytes, var$0 * getNumOutComponents()));
	}
	try {
		$var($bytes, var$1, src);
		int32_t var$2 = $div($nc(src)->length, getNumInComponents());
		int32_t var$4 = $LCMSImageLayout::CHANNELS_SH(getNumInComponents());
		int32_t var$3 = var$4 | $LCMSImageLayout::BYTES_SH(1);
		$var($LCMSImageLayout, srcIL, $new($LCMSImageLayout, var$1, var$2, var$3, getNumInComponents()));
		$var($bytes, var$5, dst);
		int32_t var$6 = $div($nc(dst)->length, getNumOutComponents());
		int32_t var$8 = $LCMSImageLayout::CHANNELS_SH(getNumOutComponents());
		int32_t var$7 = var$8 | $LCMSImageLayout::BYTES_SH(1);
		$var($LCMSImageLayout, dstIL, $new($LCMSImageLayout, var$5, var$6, var$7, getNumOutComponents()));
		doTransform(srcIL, dstIL);
		return dst;
	} catch ($LCMSImageLayout$ImageLayoutException& e) {
		$throwNew($CMMException, "Unable to convert data"_s);
	}
	$shouldNotReachHere();
}

LCMSTransform::LCMSTransform() {
}

$Class* LCMSTransform::load$($String* name, bool initialize) {
	$loadClass(LCMSTransform, name, initialize, &_LCMSTransform_ClassInfo_, allocate$LCMSTransform);
	return class$;
}

$Class* LCMSTransform::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun