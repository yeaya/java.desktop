#include <java/awt/image/ComponentColorModel.h>

#include <java/awt/Point.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_GRAY
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $Point = ::java::awt::Point;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _ComponentColorModel_FieldInfo_[] = {
	{"signed", "Z", nullptr, $PRIVATE, $field(ComponentColorModel, signed$)},
	{"is_sRGB_stdScale", "Z", nullptr, $PRIVATE, $field(ComponentColorModel, is_sRGB_stdScale)},
	{"is_LinearRGB_stdScale", "Z", nullptr, $PRIVATE, $field(ComponentColorModel, is_LinearRGB_stdScale)},
	{"is_LinearGray_stdScale", "Z", nullptr, $PRIVATE, $field(ComponentColorModel, is_LinearGray_stdScale)},
	{"is_ICCGray_stdScale", "Z", nullptr, $PRIVATE, $field(ComponentColorModel, is_ICCGray_stdScale)},
	{"tosRGB8LUT", "[B", nullptr, $PRIVATE, $field(ComponentColorModel, tosRGB8LUT)},
	{"fromsRGB8LUT8", "[B", nullptr, $PRIVATE, $field(ComponentColorModel, fromsRGB8LUT8)},
	{"fromsRGB8LUT16", "[S", nullptr, $PRIVATE, $field(ComponentColorModel, fromsRGB8LUT16)},
	{"fromLinearGray16ToOtherGray8LUT", "[B", nullptr, $PRIVATE, $field(ComponentColorModel, fromLinearGray16ToOtherGray8LUT)},
	{"fromLinearGray16ToOtherGray16LUT", "[S", nullptr, $PRIVATE, $field(ComponentColorModel, fromLinearGray16ToOtherGray16LUT)},
	{"needScaleInit", "Z", nullptr, $PRIVATE, $field(ComponentColorModel, needScaleInit)},
	{"noUnnorm", "Z", nullptr, $PRIVATE, $field(ComponentColorModel, noUnnorm)},
	{"nonStdScale", "Z", nullptr, $PRIVATE, $field(ComponentColorModel, nonStdScale)},
	{"min", "[F", nullptr, $PRIVATE, $field(ComponentColorModel, min)},
	{"diffMinMax", "[F", nullptr, $PRIVATE, $field(ComponentColorModel, diffMinMax)},
	{"compOffset", "[F", nullptr, $PRIVATE, $field(ComponentColorModel, compOffset)},
	{"compScale", "[F", nullptr, $PRIVATE, $field(ComponentColorModel, compScale)},
	{"hashCode", "I", nullptr, $PRIVATE | $VOLATILE, $field(ComponentColorModel, hashCode$)},
	{}
};

$MethodInfo _ComponentColorModel_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/color/ColorSpace;[IZZII)V", nullptr, $PUBLIC, $method(static_cast<void(ComponentColorModel::*)($ColorSpace*,$ints*,bool,bool,int32_t,int32_t)>(&ComponentColorModel::init$))},
	{"<init>", "(Ljava/awt/color/ColorSpace;ZZII)V", nullptr, $PUBLIC, $method(static_cast<void(ComponentColorModel::*)($ColorSpace*,bool,bool,int32_t,int32_t)>(&ComponentColorModel::init$))},
	{"bitsArrayHelper", "([IILjava/awt/color/ColorSpace;Z)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,int32_t,$ColorSpace*,bool)>(&ComponentColorModel::bitsArrayHelper))},
	{"bitsHelper", "(ILjava/awt/color/ColorSpace;Z)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$ColorSpace*,bool)>(&ComponentColorModel::bitsHelper))},
	{"coerceData", "(Ljava/awt/image/WritableRaster;Z)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"createCompatibleSampleModel", "(II)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"extractComponent", "(Ljava/lang/Object;II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ComponentColorModel::*)(Object$*,int32_t,int32_t)>(&ComponentColorModel::extractComponent))},
	{"getAlpha", "(I)I", nullptr, $PUBLIC},
	{"getAlpha", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getAlphaRaster", "(Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getBlue", "(I)I", nullptr, $PUBLIC},
	{"getBlue", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getComponents", "(I[II)[I", nullptr, $PUBLIC},
	{"getComponents", "(Ljava/lang/Object;[II)[I", nullptr, $PUBLIC},
	{"getDataElement", "([II)I", nullptr, $PUBLIC},
	{"getDataElement", "([FI)I", nullptr, $PUBLIC},
	{"getDataElements", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataElements", "([IILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataElements", "([FILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getGreen", "(I)I", nullptr, $PUBLIC},
	{"getGreen", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getNormalizedComponents", "([II[FI)[F", nullptr, $PUBLIC},
	{"getNormalizedComponents", "(Ljava/lang/Object;[FI)[F", nullptr, $PUBLIC},
	{"getRGB", "(I)I", nullptr, $PUBLIC},
	{"getRGB", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getRGBComponent", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ComponentColorModel::*)(int32_t,int32_t)>(&ComponentColorModel::getRGBComponent))},
	{"getRGBComponent", "(Ljava/lang/Object;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ComponentColorModel::*)(Object$*,int32_t)>(&ComponentColorModel::getRGBComponent))},
	{"getRed", "(I)I", nullptr, $PUBLIC},
	{"getRed", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getUnnormalizedComponents", "([FI[II)[I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initScale", "()V", nullptr, $PRIVATE, $method(static_cast<void(ComponentColorModel::*)()>(&ComponentColorModel::initScale))},
	{"isCompatibleRaster", "(Ljava/awt/image/Raster;)Z", nullptr, $PUBLIC},
	{"isCompatibleSampleModel", "(Ljava/awt/image/SampleModel;)Z", nullptr, $PUBLIC},
	{"setupLUTs", "()V", nullptr, $PRIVATE, $method(static_cast<void(ComponentColorModel::*)()>(&ComponentColorModel::setupLUTs))},
	{}
};

$ClassInfo _ComponentColorModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.ComponentColorModel",
	"java.awt.image.ColorModel",
	nullptr,
	_ComponentColorModel_FieldInfo_,
	_ComponentColorModel_MethodInfo_
};

$Object* allocate$ComponentColorModel($Class* clazz) {
	return $of($alloc(ComponentColorModel));
}

void ComponentColorModel::init$($ColorSpace* colorSpace, $ints* bits, bool hasAlpha, bool isAlphaPremultiplied, int32_t transparency, int32_t transferType) {
	int32_t var$0 = bitsHelper(transferType, colorSpace, hasAlpha);
	$ColorModel::init$(var$0, $(bitsArrayHelper(bits, transferType, colorSpace, hasAlpha)), colorSpace, hasAlpha, isAlphaPremultiplied, transparency, transferType);
	switch (transferType) {
	case $DataBuffer::TYPE_BYTE:
		{}
	case $DataBuffer::TYPE_USHORT:
		{}
	case $DataBuffer::TYPE_INT:
		{
			this->signed$ = false;
			this->needScaleInit = true;
			break;
		}
	case $DataBuffer::TYPE_SHORT:
		{
			this->signed$ = true;
			this->needScaleInit = true;
			break;
		}
	case $DataBuffer::TYPE_FLOAT:
		{}
	case $DataBuffer::TYPE_DOUBLE:
		{
			this->signed$ = true;
			this->needScaleInit = false;
			this->noUnnorm = true;
			this->nonStdScale = false;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"This constructor is not compatible with transferType "_s, $$str(transferType)}));
		}
	}
	setupLUTs();
}

void ComponentColorModel::init$($ColorSpace* colorSpace, bool hasAlpha, bool isAlphaPremultiplied, int32_t transparency, int32_t transferType) {
	ComponentColorModel::init$(colorSpace, nullptr, hasAlpha, isAlphaPremultiplied, transparency, transferType);
}

int32_t ComponentColorModel::bitsHelper(int32_t transferType, $ColorSpace* colorSpace, bool hasAlpha) {
	$init(ComponentColorModel);
	int32_t numBits = $DataBuffer::getDataTypeSize(transferType);
	int32_t numComponents = $nc(colorSpace)->getNumComponents();
	if (hasAlpha) {
		++numComponents;
	}
	return numBits * numComponents;
}

$ints* ComponentColorModel::bitsArrayHelper($ints* origBits, int32_t transferType, $ColorSpace* colorSpace, bool hasAlpha) {
	$init(ComponentColorModel);
	switch (transferType) {
	case $DataBuffer::TYPE_BYTE:
		{}
	case $DataBuffer::TYPE_USHORT:
		{}
	case $DataBuffer::TYPE_INT:
		{
			if (origBits != nullptr) {
				return origBits;
			}
			break;
		}
	default:
		{
			break;
		}
	}
	int32_t numBits = $DataBuffer::getDataTypeSize(transferType);
	int32_t numComponents = $nc(colorSpace)->getNumComponents();
	if (hasAlpha) {
		++numComponents;
	}
	$var($ints, bits, $new($ints, numComponents));
	for (int32_t i = 0; i < numComponents; ++i) {
		bits->set(i, numBits);
	}
	return bits;
}

void ComponentColorModel::setupLUTs() {
	if (this->is_sRGB) {
		this->is_sRGB_stdScale = true;
		this->nonStdScale = false;
	} else if ($ColorModel::isLinearRGBspace(this->colorSpace)) {
		this->is_LinearRGB_stdScale = true;
		this->nonStdScale = false;
		if (this->transferType == $DataBuffer::TYPE_BYTE) {
			$set(this, tosRGB8LUT, $ColorModel::getLinearRGB8TosRGB8LUT());
			$set(this, fromsRGB8LUT8, $ColorModel::getsRGB8ToLinearRGB8LUT());
		} else {
			$set(this, tosRGB8LUT, $ColorModel::getLinearRGB16TosRGB8LUT());
			$set(this, fromsRGB8LUT16, $ColorModel::getsRGB8ToLinearRGB16LUT());
		}
	} else {
		bool var$1 = (this->colorSpaceType == $ColorSpace::TYPE_GRAY) && ($instanceOf($ICC_ColorSpace, this->colorSpace)) && ($nc(this->colorSpace)->getMinValue(0) == 0.0f);
		if (var$1 && ($nc(this->colorSpace)->getMaxValue(0) == 1.0f)) {
			$var($ICC_ColorSpace, ics, $cast($ICC_ColorSpace, this->colorSpace));
			this->is_ICCGray_stdScale = true;
			this->nonStdScale = false;
			$set(this, fromsRGB8LUT16, $ColorModel::getsRGB8ToLinearRGB16LUT());
			if ($ColorModel::isLinearGRAYspace(ics)) {
				this->is_LinearGray_stdScale = true;
				if (this->transferType == $DataBuffer::TYPE_BYTE) {
					$set(this, tosRGB8LUT, $ColorModel::getGray8TosRGB8LUT(ics));
				} else {
					$set(this, tosRGB8LUT, $ColorModel::getGray16TosRGB8LUT(ics));
				}
			} else if (this->transferType == $DataBuffer::TYPE_BYTE) {
				$set(this, tosRGB8LUT, $ColorModel::getGray8TosRGB8LUT(ics));
				$set(this, fromLinearGray16ToOtherGray8LUT, $ColorModel::getLinearGray16ToOtherGray8LUT(ics));
			} else {
				$set(this, tosRGB8LUT, $ColorModel::getGray16TosRGB8LUT(ics));
				$set(this, fromLinearGray16ToOtherGray16LUT, $ColorModel::getLinearGray16ToOtherGray16LUT(ics));
			}
		} else if (this->needScaleInit) {
			this->nonStdScale = false;
			for (int32_t i = 0; i < this->numColorComponents; ++i) {
				bool var$2 = ($nc(this->colorSpace)->getMinValue(i) != 0.0f);
				if (var$2 || ($nc(this->colorSpace)->getMaxValue(i) != 1.0f)) {
					this->nonStdScale = true;
					break;
				}
			}
			if (this->nonStdScale) {
				$set(this, min, $new($floats, this->numColorComponents));
				$set(this, diffMinMax, $new($floats, this->numColorComponents));
				for (int32_t i = 0; i < this->numColorComponents; ++i) {
					$nc(this->min)->set(i, $nc(this->colorSpace)->getMinValue(i));
					$nc(this->diffMinMax)->set(i, $nc(this->colorSpace)->getMaxValue(i) - $nc(this->min)->get(i));
				}
			}
		}
	}
}

void ComponentColorModel::initScale() {
	this->needScaleInit = false;
	if (this->nonStdScale || this->signed$) {
		this->noUnnorm = true;
	} else {
		this->noUnnorm = false;
	}
	$var($floats, lowVal, nullptr);
	$var($floats, highVal, nullptr);
	switch (this->transferType) {
	case $DataBuffer::TYPE_BYTE:
		{
			{
				$var($bytes, bpixel, $new($bytes, this->numComponents));
				for (int32_t i = 0; i < this->numColorComponents; ++i) {
					bpixel->set(i, (int8_t)0);
				}
				if (this->supportsAlpha) {
					bpixel->set(this->numColorComponents, (int8_t)(($sl(1, $nc(this->nBits)->get(this->numColorComponents))) - 1));
				}
				$assign(lowVal, getNormalizedComponents(bpixel, nullptr, 0));
				for (int32_t i = 0; i < this->numColorComponents; ++i) {
					bpixel->set(i, (int8_t)(($sl(1, $nc(this->nBits)->get(i))) - 1));
				}
				$assign(highVal, getNormalizedComponents(bpixel, nullptr, 0));
			}
			break;
		}
	case $DataBuffer::TYPE_USHORT:
		{
			{
				$var($shorts, uspixel, $new($shorts, this->numComponents));
				for (int32_t i = 0; i < this->numColorComponents; ++i) {
					uspixel->set(i, (int16_t)0);
				}
				if (this->supportsAlpha) {
					uspixel->set(this->numColorComponents, (int16_t)(($sl(1, $nc(this->nBits)->get(this->numColorComponents))) - 1));
				}
				$assign(lowVal, getNormalizedComponents(uspixel, nullptr, 0));
				for (int32_t i = 0; i < this->numColorComponents; ++i) {
					uspixel->set(i, (int16_t)(($sl(1, $nc(this->nBits)->get(i))) - 1));
				}
				$assign(highVal, getNormalizedComponents(uspixel, nullptr, 0));
			}
			break;
		}
	case $DataBuffer::TYPE_INT:
		{
			{
				$var($ints, ipixel, $new($ints, this->numComponents));
				for (int32_t i = 0; i < this->numColorComponents; ++i) {
					ipixel->set(i, 0);
				}
				if (this->supportsAlpha) {
					ipixel->set(this->numColorComponents, (($sl(1, $nc(this->nBits)->get(this->numColorComponents))) - 1));
				}
				$assign(lowVal, getNormalizedComponents(ipixel, nullptr, 0));
				for (int32_t i = 0; i < this->numColorComponents; ++i) {
					ipixel->set(i, (($sl(1, $nc(this->nBits)->get(i))) - 1));
				}
				$assign(highVal, getNormalizedComponents(ipixel, nullptr, 0));
			}
			break;
		}
	case $DataBuffer::TYPE_SHORT:
		{
			{
				$var($shorts, spixel, $new($shorts, this->numComponents));
				for (int32_t i = 0; i < this->numColorComponents; ++i) {
					spixel->set(i, (int16_t)0);
				}
				if (this->supportsAlpha) {
					spixel->set(this->numColorComponents, (int16_t)32767);
				}
				$assign(lowVal, getNormalizedComponents(spixel, nullptr, 0));
				for (int32_t i = 0; i < this->numColorComponents; ++i) {
					spixel->set(i, (int16_t)32767);
				}
				$assign(highVal, getNormalizedComponents(spixel, nullptr, 0));
			}
			break;
		}
	default:
		{
			$assign(lowVal, ($assign(highVal, nullptr)));
			break;
		}
	}
	this->nonStdScale = false;
	for (int32_t i = 0; i < this->numColorComponents; ++i) {
		if (($nc(lowVal)->get(i) != 0.0f) || ($nc(highVal)->get(i) != 1.0f)) {
			this->nonStdScale = true;
			break;
		}
	}
	if (this->nonStdScale) {
		this->noUnnorm = true;
		this->is_sRGB_stdScale = false;
		this->is_LinearRGB_stdScale = false;
		this->is_LinearGray_stdScale = false;
		this->is_ICCGray_stdScale = false;
		$set(this, compOffset, $new($floats, this->numColorComponents));
		$set(this, compScale, $new($floats, this->numColorComponents));
		for (int32_t i = 0; i < this->numColorComponents; ++i) {
			$nc(this->compOffset)->set(i, $nc(lowVal)->get(i));
			$nc(this->compScale)->set(i, 1.0f / ($nc(highVal)->get(i) - lowVal->get(i)));
		}
	}
}

int32_t ComponentColorModel::getRGBComponent(int32_t pixel, int32_t idx) {
	if (this->numComponents > 1) {
		$throwNew($IllegalArgumentException, "More than one component per pixel"_s);
	}
	if (this->signed$) {
		$throwNew($IllegalArgumentException, "Component value is signed"_s);
	}
	if (this->needScaleInit) {
		initScale();
	}
	$var($Object, opixel, nullptr);
	switch (this->transferType) {
	case $DataBuffer::TYPE_BYTE:
		{
			{
				$var($bytes, bpixel, $new($bytes, {(int8_t)pixel}));
				$assign(opixel, bpixel);
			}
			break;
		}
	case $DataBuffer::TYPE_USHORT:
		{
			{
				$var($shorts, spixel, $new($shorts, {(int16_t)pixel}));
				$assign(opixel, spixel);
			}
			break;
		}
	case $DataBuffer::TYPE_INT:
		{
			{
				$var($ints, ipixel, $new($ints, {pixel}));
				$assign(opixel, ipixel);
			}
			break;
		}
	}
	$var($floats, norm, getNormalizedComponents(opixel, nullptr, 0));
	$var($floats, rgb, $nc(this->colorSpace)->toRGB(norm));
	return $cast(int32_t, ($nc(rgb)->get(idx) * 255.0f + 0.5f));
}

int32_t ComponentColorModel::getRed(int32_t pixel) {
	return getRGBComponent(pixel, 0);
}

int32_t ComponentColorModel::getGreen(int32_t pixel) {
	return getRGBComponent(pixel, 1);
}

int32_t ComponentColorModel::getBlue(int32_t pixel) {
	return getRGBComponent(pixel, 2);
}

int32_t ComponentColorModel::getAlpha(int32_t pixel) {
	if (this->supportsAlpha == false) {
		return 255;
	}
	if (this->numComponents > 1) {
		$throwNew($IllegalArgumentException, "More than one component per pixel"_s);
	}
	if (this->signed$) {
		$throwNew($IllegalArgumentException, "Component value is signed"_s);
	}
	return $cast(int32_t, ((((float)pixel) / (($sl(1, $nc(this->nBits)->get(0))) - 1)) * 255.0f + 0.5f));
}

int32_t ComponentColorModel::getRGB(int32_t pixel) {
	if (this->numComponents > 1) {
		$throwNew($IllegalArgumentException, "More than one component per pixel"_s);
	}
	if (this->signed$) {
		$throwNew($IllegalArgumentException, "Component value is signed"_s);
	}
	int32_t var$2 = (getAlpha(pixel) << 24);
	int32_t var$1 = var$2 | (getRed(pixel) << 16);
	int32_t var$0 = var$1 | (getGreen(pixel) << 8);
	return var$0 | (getBlue(pixel) << 0);
}

int32_t ComponentColorModel::extractComponent(Object$* inData, int32_t idx, int32_t precision) {
	bool needAlpha = (this->supportsAlpha && this->isAlphaPremultiplied$);
	int32_t alp = 0;
	int32_t comp = 0;
	int32_t mask = ($sl(1, $nc(this->nBits)->get(idx))) - 1;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, usdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_SHORT:
			{
				{
					$var($shorts, sdata, $cast($shorts, inData));
					float scalefactor = (float)(($sl(1, precision)) - 1);
					if (needAlpha) {
						int16_t s = $nc(sdata)->get(this->numColorComponents);
						if (s != (int16_t)0) {
							return $cast(int32_t, ((((float)sdata->get(idx)) / ((float)s)) * scalefactor + 0.5f));
						} else {
							return 0;
						}
					} else {
						return $cast(int32_t, (($nc(sdata)->get(idx) / 32767.0f) * scalefactor + 0.5f));
					}
				}
			}
		case $DataBuffer::TYPE_FLOAT:
			{
				{
					$var($floats, fdata, $cast($floats, inData));
					float scalefactor = (float)(($sl(1, precision)) - 1);
					if (needAlpha) {
						float f = $nc(fdata)->get(this->numColorComponents);
						if (f != 0.0f) {
							return $cast(int32_t, (((fdata->get(idx) / f) * scalefactor) + 0.5f));
						} else {
							return 0;
						}
					} else {
						return $cast(int32_t, ($nc(fdata)->get(idx) * scalefactor + 0.5f));
					}
				}
			}
		case $DataBuffer::TYPE_DOUBLE:
			{
				{
					$var($doubles, ddata, $cast($doubles, inData));
					double scalefactor = (double)(($sl(1, precision)) - 1);
					if (needAlpha) {
						double d = $nc(ddata)->get(this->numColorComponents);
						if (d != 0.0) {
							return $cast(int32_t, (((ddata->get(idx) / d) * scalefactor) + 0.5));
						} else {
							return 0;
						}
					} else {
						return $cast(int32_t, ($nc(ddata)->get(idx) * scalefactor + 0.5));
					}
				}
			}
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, inData));
				comp = (int32_t)($nc(bdata)->get(idx) & (uint32_t)mask);
				precision = 8;
				if (needAlpha) {
					alp = (int32_t)($nc(bdata)->get(this->numColorComponents) & (uint32_t)mask);
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(usdata, $cast($shorts, inData));
				comp = (int32_t)($nc(usdata)->get(idx) & (uint32_t)mask);
				if (needAlpha) {
					alp = (int32_t)($nc(usdata)->get(this->numColorComponents) & (uint32_t)mask);
				}
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, inData));
				comp = $nc(idata)->get(idx);
				if (needAlpha) {
					alp = $nc(idata)->get(this->numColorComponents);
				}
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	if (needAlpha) {
		if (alp != 0) {
			float scalefactor = (float)(($sl(1, precision)) - 1);
			float fcomp = ((float)comp) / ((float)mask);
			float invalp = ((float)(($sl(1, $nc(this->nBits)->get(this->numColorComponents))) - 1)) / ((float)alp);
			return $cast(int32_t, (fcomp * invalp * scalefactor + 0.5f));
		} else {
			return 0;
		}
	} else {
		if ($nc(this->nBits)->get(idx) != precision) {
			float scalefactor = (float)(($sl(1, precision)) - 1);
			float fcomp = ((float)comp) / ((float)mask);
			return $cast(int32_t, (fcomp * scalefactor + 0.5f));
		}
		return comp;
	}
}

int32_t ComponentColorModel::getRGBComponent(Object$* inData, int32_t idx) {
	if (this->needScaleInit) {
		initScale();
	}
	if (this->is_sRGB_stdScale) {
		return extractComponent(inData, idx, 8);
	} else if (this->is_LinearRGB_stdScale) {
		int32_t lutidx = extractComponent(inData, idx, 16);
		return (int32_t)($nc(this->tosRGB8LUT)->get(lutidx) & (uint32_t)255);
	} else if (this->is_ICCGray_stdScale) {
		int32_t lutidx = extractComponent(inData, 0, 16);
		return (int32_t)($nc(this->tosRGB8LUT)->get(lutidx) & (uint32_t)255);
	}
	$var($floats, norm, getNormalizedComponents(inData, nullptr, 0));
	$var($floats, rgb, $nc(this->colorSpace)->toRGB(norm));
	return $cast(int32_t, ($nc(rgb)->get(idx) * 255.0f + 0.5f));
}

int32_t ComponentColorModel::getRed(Object$* inData) {
	return getRGBComponent(inData, 0);
}

int32_t ComponentColorModel::getGreen(Object$* inData) {
	return getRGBComponent(inData, 1);
}

int32_t ComponentColorModel::getBlue(Object$* inData) {
	return getRGBComponent(inData, 2);
}

int32_t ComponentColorModel::getAlpha(Object$* inData) {
	if (this->supportsAlpha == false) {
		return 255;
	}
	int32_t alpha = 0;
	int32_t aIdx = this->numColorComponents;
	int32_t mask = ($sl(1, $nc(this->nBits)->get(aIdx))) - 1;
	{
		$var($shorts, sdata, nullptr)
		$var($floats, fdata, nullptr)
		$var($doubles, ddata, nullptr)
		$var($bytes, bdata, nullptr)
		$var($shorts, usdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_SHORT:
			{
				$assign(sdata, $cast($shorts, inData));
				alpha = $cast(int32_t, (($nc(sdata)->get(aIdx) / 32767.0f) * 255.0f + 0.5f));
				return alpha;
			}
		case $DataBuffer::TYPE_FLOAT:
			{
				$assign(fdata, $cast($floats, inData));
				alpha = $cast(int32_t, ($nc(fdata)->get(aIdx) * 255.0f + 0.5f));
				return alpha;
			}
		case $DataBuffer::TYPE_DOUBLE:
			{
				$assign(ddata, $cast($doubles, inData));
				alpha = $cast(int32_t, ($nc(ddata)->get(aIdx) * 255.0 + 0.5));
				return alpha;
			}
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, inData));
				alpha = (int32_t)($nc(bdata)->get(aIdx) & (uint32_t)mask);
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(usdata, $cast($shorts, inData));
				alpha = (int32_t)($nc(usdata)->get(aIdx) & (uint32_t)mask);
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, inData));
				alpha = $nc(idata)->get(aIdx);
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	if ($nc(this->nBits)->get(aIdx) == 8) {
		return alpha;
	} else {
		return $cast(int32_t, ((((float)alpha) / ((float)(($sl(1, $nc(this->nBits)->get(aIdx))) - 1))) * 255.0f + 0.5f));
	}
}

int32_t ComponentColorModel::getRGB(Object$* inData) {
	if (this->needScaleInit) {
		initScale();
	}
	if (this->is_sRGB_stdScale || this->is_LinearRGB_stdScale) {
		int32_t var$2 = (getAlpha(inData) << 24);
		int32_t var$1 = var$2 | (getRed(inData) << 16);
		int32_t var$0 = var$1 | (getGreen(inData) << 8);
		return var$0 | (getBlue(inData));
	} else if (this->colorSpaceType == $ColorSpace::TYPE_GRAY) {
		int32_t gray = getRed(inData);
		return (((getAlpha(inData) << 24) | (gray << 16)) | (gray << 8)) | gray;
	}
	$var($floats, norm, getNormalizedComponents(inData, nullptr, 0));
	$var($floats, rgb, $nc(this->colorSpace)->toRGB(norm));
	return (((getAlpha(inData) << 24) | (($cast(int32_t, ($nc(rgb)->get(0) * 255.0f + 0.5f))) << 16)) | (($cast(int32_t, (rgb->get(1) * 255.0f + 0.5f))) << 8)) | (($cast(int32_t, (rgb->get(2) * 255.0f + 0.5f))) << 0);
}

$Object* ComponentColorModel::getDataElements(int32_t rgb, Object$* pixel) {
	int32_t red = 0;
	int32_t grn = 0;
	int32_t blu = 0;
	int32_t alp = 0;
	red = (int32_t)((rgb >> 16) & (uint32_t)255);
	grn = (int32_t)((rgb >> 8) & (uint32_t)255);
	blu = (int32_t)(rgb & (uint32_t)255);
	if (this->needScaleInit) {
		initScale();
	}
	if (this->signed$) {
		switch (this->transferType) {
		case $DataBuffer::TYPE_SHORT:
			{
				{
					$var($shorts, sdata, nullptr);
					if (pixel == nullptr) {
						$assign(sdata, $new($shorts, this->numComponents));
					} else {
						$assign(sdata, $cast($shorts, pixel));
					}
					float factor = 0.0;
					if (this->is_sRGB_stdScale || this->is_LinearRGB_stdScale) {
						factor = 32767.0f / 255.0f;
						if (this->is_LinearRGB_stdScale) {
							red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
							grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
							blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
							factor = 32767.0f / 65535.0f;
						}
						if (this->supportsAlpha) {
							alp = (int32_t)((rgb >> 24) & (uint32_t)255);
							$nc(sdata)->set(3, $cast(int16_t, (alp * (32767.0f / 255.0f) + 0.5f)));
							if (this->isAlphaPremultiplied$) {
								factor = alp * factor * (1.0f / 255.0f);
							}
						}
						$nc(sdata)->set(0, $cast(int16_t, (red * factor + 0.5f)));
						sdata->set(1, $cast(int16_t, (grn * factor + 0.5f)));
						sdata->set(2, $cast(int16_t, (blu * factor + 0.5f)));
					} else if (this->is_LinearGray_stdScale) {
						red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
						grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
						blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
						float gray = ((0.2125f * red) + (0.7154f * grn) + (0.0721f * blu)) / 65535.0f;
						factor = 32767.0f;
						if (this->supportsAlpha) {
							alp = (int32_t)((rgb >> 24) & (uint32_t)255);
							$nc(sdata)->set(1, $cast(int16_t, (alp * (32767.0f / 255.0f) + 0.5f)));
							if (this->isAlphaPremultiplied$) {
								factor = alp * factor * (1.0f / 255.0f);
							}
						}
						$nc(sdata)->set(0, $cast(int16_t, (gray * factor + 0.5f)));
					} else if (this->is_ICCGray_stdScale) {
						red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
						grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
						blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
						int32_t gray = $cast(int32_t, ((0.2125f * red) + (0.7154f * grn) + (0.0721f * blu) + 0.5f));
						gray = (int32_t)($nc(this->fromLinearGray16ToOtherGray16LUT)->get(gray) & (uint32_t)0x0000FFFF);
						factor = 32767.0f / 65535.0f;
						if (this->supportsAlpha) {
							alp = (int32_t)((rgb >> 24) & (uint32_t)255);
							$nc(sdata)->set(1, $cast(int16_t, (alp * (32767.0f / 255.0f) + 0.5f)));
							if (this->isAlphaPremultiplied$) {
								factor = alp * factor * (1.0f / 255.0f);
							}
						}
						$nc(sdata)->set(0, $cast(int16_t, (gray * factor + 0.5f)));
					} else {
						factor = 1.0f / 255.0f;
						$var($floats, norm, $new($floats, 3));
						norm->set(0, red * factor);
						norm->set(1, grn * factor);
						norm->set(2, blu * factor);
						$assign(norm, $nc(this->colorSpace)->fromRGB(norm));
						if (this->nonStdScale) {
							for (int32_t i = 0; i < this->numColorComponents; ++i) {
								$nc(norm)->set(i, (norm->get(i) - $nc(this->compOffset)->get(i)) * $nc(this->compScale)->get(i));
								if (norm->get(i) < 0.0f) {
									norm->set(i, 0.0f);
								}
								if (norm->get(i) > 1.0f) {
									norm->set(i, 1.0f);
								}
							}
						}
						factor = 32767.0f;
						if (this->supportsAlpha) {
							alp = (int32_t)((rgb >> 24) & (uint32_t)255);
							$nc(sdata)->set(this->numColorComponents, $cast(int16_t, (alp * (32767.0f / 255.0f) + 0.5f)));
							if (this->isAlphaPremultiplied$) {
								factor *= alp * (1.0f / 255.0f);
							}
						}
						for (int32_t i = 0; i < this->numColorComponents; ++i) {
							$nc(sdata)->set(i, $cast(int16_t, ($nc(norm)->get(i) * factor + 0.5f)));
						}
					}
					return $of(sdata);
				}
			}
		case $DataBuffer::TYPE_FLOAT:
			{
				{
					$var($floats, fdata, nullptr);
					if (pixel == nullptr) {
						$assign(fdata, $new($floats, this->numComponents));
					} else {
						$assign(fdata, $cast($floats, pixel));
					}
					float factor = 0.0;
					if (this->is_sRGB_stdScale || this->is_LinearRGB_stdScale) {
						if (this->is_LinearRGB_stdScale) {
							red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
							grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
							blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
							factor = 1.0f / 65535.0f;
						} else {
							factor = 1.0f / 255.0f;
						}
						if (this->supportsAlpha) {
							alp = (int32_t)((rgb >> 24) & (uint32_t)255);
							$nc(fdata)->set(3, alp * (1.0f / 255.0f));
							if (this->isAlphaPremultiplied$) {
								factor *= fdata->get(3);
							}
						}
						$nc(fdata)->set(0, red * factor);
						fdata->set(1, grn * factor);
						fdata->set(2, blu * factor);
					} else if (this->is_LinearGray_stdScale) {
						red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
						grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
						blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
						$nc(fdata)->set(0, ((0.2125f * red) + (0.7154f * grn) + (0.0721f * blu)) / 65535.0f);
						if (this->supportsAlpha) {
							alp = (int32_t)((rgb >> 24) & (uint32_t)255);
							fdata->set(1, alp * (1.0f / 255.0f));
							if (this->isAlphaPremultiplied$) {
								(*fdata)[0] *= fdata->get(1);
							}
						}
					} else if (this->is_ICCGray_stdScale) {
						red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
						grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
						blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
						int32_t gray = $cast(int32_t, ((0.2125f * red) + (0.7154f * grn) + (0.0721f * blu) + 0.5f));
						$nc(fdata)->set(0, ((int32_t)($nc(this->fromLinearGray16ToOtherGray16LUT)->get(gray) & (uint32_t)0x0000FFFF)) / 65535.0f);
						if (this->supportsAlpha) {
							alp = (int32_t)((rgb >> 24) & (uint32_t)255);
							fdata->set(1, alp * (1.0f / 255.0f));
							if (this->isAlphaPremultiplied$) {
								(*fdata)[0] *= fdata->get(1);
							}
						}
					} else {
						$var($floats, norm, $new($floats, 3));
						factor = 1.0f / 255.0f;
						norm->set(0, red * factor);
						norm->set(1, grn * factor);
						norm->set(2, blu * factor);
						$assign(norm, $nc(this->colorSpace)->fromRGB(norm));
						if (this->supportsAlpha) {
							alp = (int32_t)((rgb >> 24) & (uint32_t)255);
							$nc(fdata)->set(this->numColorComponents, alp * factor);
							if (this->isAlphaPremultiplied$) {
								factor *= alp;
								for (int32_t i = 0; i < this->numColorComponents; ++i) {
									(*$nc(norm))[i] *= factor;
								}
							}
						}
						for (int32_t i = 0; i < this->numColorComponents; ++i) {
							$nc(fdata)->set(i, $nc(norm)->get(i));
						}
					}
					return $of(fdata);
				}
			}
		case $DataBuffer::TYPE_DOUBLE:
			{
				{
					$var($doubles, ddata, nullptr);
					if (pixel == nullptr) {
						$assign(ddata, $new($doubles, this->numComponents));
					} else {
						$assign(ddata, $cast($doubles, pixel));
					}
					if (this->is_sRGB_stdScale || this->is_LinearRGB_stdScale) {
						double factor = 0.0;
						if (this->is_LinearRGB_stdScale) {
							red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
							grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
							blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
							factor = 1.0 / 65535.0;
						} else {
							factor = 1.0 / 255.0;
						}
						if (this->supportsAlpha) {
							alp = (int32_t)((rgb >> 24) & (uint32_t)255);
							$nc(ddata)->set(3, alp * (1.0 / 255.0));
							if (this->isAlphaPremultiplied$) {
								factor *= ddata->get(3);
							}
						}
						$nc(ddata)->set(0, red * factor);
						ddata->set(1, grn * factor);
						ddata->set(2, blu * factor);
					} else if (this->is_LinearGray_stdScale) {
						red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
						grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
						blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
						$nc(ddata)->set(0, ((0.2125 * red) + (0.7154 * grn) + (0.0721 * blu)) / 65535.0);
						if (this->supportsAlpha) {
							alp = (int32_t)((rgb >> 24) & (uint32_t)255);
							ddata->set(1, alp * (1.0 / 255.0));
							if (this->isAlphaPremultiplied$) {
								(*ddata)[0] *= ddata->get(1);
							}
						}
					} else if (this->is_ICCGray_stdScale) {
						red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
						grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
						blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
						int32_t gray = $cast(int32_t, ((0.2125f * red) + (0.7154f * grn) + (0.0721f * blu) + 0.5f));
						$nc(ddata)->set(0, ((int32_t)($nc(this->fromLinearGray16ToOtherGray16LUT)->get(gray) & (uint32_t)0x0000FFFF)) / 65535.0);
						if (this->supportsAlpha) {
							alp = (int32_t)((rgb >> 24) & (uint32_t)255);
							ddata->set(1, alp * (1.0 / 255.0));
							if (this->isAlphaPremultiplied$) {
								(*ddata)[0] *= ddata->get(1);
							}
						}
					} else {
						float factor = 1.0f / 255.0f;
						$var($floats, norm, $new($floats, 3));
						norm->set(0, red * factor);
						norm->set(1, grn * factor);
						norm->set(2, blu * factor);
						$assign(norm, $nc(this->colorSpace)->fromRGB(norm));
						if (this->supportsAlpha) {
							alp = (int32_t)((rgb >> 24) & (uint32_t)255);
							$nc(ddata)->set(this->numColorComponents, alp * (1.0 / 255.0));
							if (this->isAlphaPremultiplied$) {
								factor *= alp;
								for (int32_t i = 0; i < this->numColorComponents; ++i) {
									(*$nc(norm))[i] *= factor;
								}
							}
						}
						for (int32_t i = 0; i < this->numColorComponents; ++i) {
							$nc(ddata)->set(i, $nc(norm)->get(i));
						}
					}
					return $of(ddata);
				}
			}
		}
	}
	$var($ints, intpixel, nullptr);
	if (this->transferType == $DataBuffer::TYPE_INT && pixel != nullptr) {
		$assign(intpixel, $cast($ints, pixel));
	} else {
		$assign(intpixel, $new($ints, this->numComponents));
	}
	if (this->is_sRGB_stdScale || this->is_LinearRGB_stdScale) {
		int32_t precision = 0;
		float factor = 0.0;
		if (this->is_LinearRGB_stdScale) {
			if (this->transferType == $DataBuffer::TYPE_BYTE) {
				red = (int32_t)($nc(this->fromsRGB8LUT8)->get(red) & (uint32_t)255);
				grn = (int32_t)($nc(this->fromsRGB8LUT8)->get(grn) & (uint32_t)255);
				blu = (int32_t)($nc(this->fromsRGB8LUT8)->get(blu) & (uint32_t)255);
				precision = 8;
				factor = 1.0f / 255.0f;
			} else {
				red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
				grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
				blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
				precision = 16;
				factor = 1.0f / 65535.0f;
			}
		} else {
			precision = 8;
			factor = 1.0f / 255.0f;
		}
		if (this->supportsAlpha) {
			alp = (int32_t)((rgb >> 24) & (uint32_t)255);
			if ($nc(this->nBits)->get(3) == 8) {
				$nc(intpixel)->set(3, alp);
			} else {
				$nc(intpixel)->set(3, $cast(int32_t, (alp * (1.0f / 255.0f) * (($sl(1, $nc(this->nBits)->get(3))) - 1) + 0.5f)));
			}
			if (this->isAlphaPremultiplied$) {
				factor *= (alp * (1.0f / 255.0f));
				precision = -1;
			}
		}
		if ($nc(this->nBits)->get(0) == precision) {
			$nc(intpixel)->set(0, red);
		} else {
			$nc(intpixel)->set(0, $cast(int32_t, (red * factor * (($sl(1, $nc(this->nBits)->get(0))) - 1) + 0.5f)));
		}
		if ($nc(this->nBits)->get(1) == precision) {
			$nc(intpixel)->set(1, grn);
		} else {
			$nc(intpixel)->set(1, $cast(int32_t, (grn * factor * (($sl(1, $nc(this->nBits)->get(1))) - 1) + 0.5f)));
		}
		if ($nc(this->nBits)->get(2) == precision) {
			$nc(intpixel)->set(2, blu);
		} else {
			$nc(intpixel)->set(2, $cast(int32_t, (blu * factor * (($sl(1, $nc(this->nBits)->get(2))) - 1) + 0.5f)));
		}
	} else if (this->is_LinearGray_stdScale) {
		red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
		grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
		blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
		float gray = ((0.2125f * red) + (0.7154f * grn) + (0.0721f * blu)) / 65535.0f;
		if (this->supportsAlpha) {
			alp = (int32_t)((rgb >> 24) & (uint32_t)255);
			if ($nc(this->nBits)->get(1) == 8) {
				$nc(intpixel)->set(1, alp);
			} else {
				$nc(intpixel)->set(1, $cast(int32_t, (alp * (1.0f / 255.0f) * (($sl(1, $nc(this->nBits)->get(1))) - 1) + 0.5f)));
			}
			if (this->isAlphaPremultiplied$) {
				gray *= (alp * (1.0f / 255.0f));
			}
		}
		$nc(intpixel)->set(0, $cast(int32_t, (gray * (($sl(1, $nc(this->nBits)->get(0))) - 1) + 0.5f)));
	} else if (this->is_ICCGray_stdScale) {
		red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
		grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
		blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
		int32_t gray16 = $cast(int32_t, ((0.2125f * red) + (0.7154f * grn) + (0.0721f * blu) + 0.5f));
		float gray = ((int32_t)($nc(this->fromLinearGray16ToOtherGray16LUT)->get(gray16) & (uint32_t)0x0000FFFF)) / 65535.0f;
		if (this->supportsAlpha) {
			alp = (int32_t)((rgb >> 24) & (uint32_t)255);
			if ($nc(this->nBits)->get(1) == 8) {
				$nc(intpixel)->set(1, alp);
			} else {
				$nc(intpixel)->set(1, $cast(int32_t, (alp * (1.0f / 255.0f) * (($sl(1, $nc(this->nBits)->get(1))) - 1) + 0.5f)));
			}
			if (this->isAlphaPremultiplied$) {
				gray *= (alp * (1.0f / 255.0f));
			}
		}
		$nc(intpixel)->set(0, $cast(int32_t, (gray * (($sl(1, $nc(this->nBits)->get(0))) - 1) + 0.5f)));
	} else {
		$var($floats, norm, $new($floats, 3));
		float factor = 1.0f / 255.0f;
		norm->set(0, red * factor);
		norm->set(1, grn * factor);
		norm->set(2, blu * factor);
		$assign(norm, $nc(this->colorSpace)->fromRGB(norm));
		if (this->nonStdScale) {
			for (int32_t i = 0; i < this->numColorComponents; ++i) {
				$nc(norm)->set(i, (norm->get(i) - $nc(this->compOffset)->get(i)) * $nc(this->compScale)->get(i));
				if (norm->get(i) < 0.0f) {
					norm->set(i, 0.0f);
				}
				if (norm->get(i) > 1.0f) {
					norm->set(i, 1.0f);
				}
			}
		}
		if (this->supportsAlpha) {
			alp = (int32_t)((rgb >> 24) & (uint32_t)255);
			if ($nc(this->nBits)->get(this->numColorComponents) == 8) {
				$nc(intpixel)->set(this->numColorComponents, alp);
			} else {
				$nc(intpixel)->set(this->numColorComponents, $cast(int32_t, (alp * factor * (($sl(1, $nc(this->nBits)->get(this->numColorComponents))) - 1) + 0.5f)));
			}
			if (this->isAlphaPremultiplied$) {
				factor *= alp;
				for (int32_t i = 0; i < this->numColorComponents; ++i) {
					(*$nc(norm))[i] *= factor;
				}
			}
		}
		for (int32_t i = 0; i < this->numColorComponents; ++i) {
			$nc(intpixel)->set(i, $cast(int32_t, ($nc(norm)->get(i) * (($sl(1, $nc(this->nBits)->get(i))) - 1) + 0.5f)));
		}
	}
	switch (this->transferType) {
	case $DataBuffer::TYPE_BYTE:
		{
			{
				$var($bytes, bdata, nullptr);
				if (pixel == nullptr) {
					$assign(bdata, $new($bytes, this->numComponents));
				} else {
					$assign(bdata, $cast($bytes, pixel));
				}
				for (int32_t i = 0; i < this->numComponents; ++i) {
					$nc(bdata)->set(i, (int8_t)((int32_t)(255 & (uint32_t)$nc(intpixel)->get(i))));
				}
				return $of(bdata);
			}
		}
	case $DataBuffer::TYPE_USHORT:
		{
			{
				$var($shorts, sdata, nullptr);
				if (pixel == nullptr) {
					$assign(sdata, $new($shorts, this->numComponents));
				} else {
					$assign(sdata, $cast($shorts, pixel));
				}
				for (int32_t i = 0; i < this->numComponents; ++i) {
					$nc(sdata)->set(i, (int16_t)((int32_t)($nc(intpixel)->get(i) & (uint32_t)0x0000FFFF)));
				}
				return $of(sdata);
			}
		}
	case $DataBuffer::TYPE_INT:
		{
			if (this->maxBits > 23) {
				for (int32_t i = 0; i < this->numComponents; ++i) {
					if ($nc(intpixel)->get(i) > (($sl(1, $nc(this->nBits)->get(i))) - 1)) {
						intpixel->set(i, ($sl(1, $nc(this->nBits)->get(i))) - 1);
					}
				}
			}
			return $of(intpixel);
		}
	}
	$throwNew($IllegalArgumentException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
}

$ints* ComponentColorModel::getComponents(int32_t pixel, $ints* components$renamed, int32_t offset) {
	$var($ints, components, components$renamed);
	if (this->numComponents > 1) {
		$throwNew($IllegalArgumentException, "More than one component per pixel"_s);
	}
	if (this->needScaleInit) {
		initScale();
	}
	if (this->noUnnorm) {
		$throwNew($IllegalArgumentException, "This ColorModel does not support the unnormalized form"_s);
	}
	if (components == nullptr) {
		$assign(components, $new($ints, offset + 1));
	}
	$nc(components)->set(offset + 0, ((int32_t)(pixel & (uint32_t)(($sl(1, $nc(this->nBits)->get(0))) - 1))));
	return components;
}

$ints* ComponentColorModel::getComponents(Object$* pixel, $ints* components$renamed, int32_t offset) {
	$var($ints, components, components$renamed);
	$var($ints, intpixel, nullptr);
	if (this->needScaleInit) {
		initScale();
	}
	if (this->noUnnorm) {
		$throwNew($IllegalArgumentException, "This ColorModel does not support the unnormalized form"_s);
	}
	if ($instanceOf($ints, pixel)) {
		$assign(intpixel, $cast($ints, pixel));
	} else {
		$assign(intpixel, $DataBuffer::toIntArray(pixel));
		if (intpixel == nullptr) {
			$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
		}
	}
	if ($nc(intpixel)->length < this->numComponents) {
		$throwNew($IllegalArgumentException, "Length of pixel array < number of components in model"_s);
	}
	if (components == nullptr) {
		$assign(components, $new($ints, offset + this->numComponents));
	} else if (($nc(components)->length - offset) < this->numComponents) {
		$throwNew($IllegalArgumentException, "Length of components array < number of components in model"_s);
	}
	$System::arraycopy(intpixel, 0, components, offset, this->numComponents);
	return components;
}

$ints* ComponentColorModel::getUnnormalizedComponents($floats* normComponents, int32_t normOffset, $ints* components, int32_t offset) {
	if (this->needScaleInit) {
		initScale();
	}
	if (this->noUnnorm) {
		$throwNew($IllegalArgumentException, "This ColorModel does not support the unnormalized form"_s);
	}
	return $ColorModel::getUnnormalizedComponents(normComponents, normOffset, components, offset);
}

$floats* ComponentColorModel::getNormalizedComponents($ints* components, int32_t offset, $floats* normComponents, int32_t normOffset) {
	if (this->needScaleInit) {
		initScale();
	}
	if (this->noUnnorm) {
		$throwNew($IllegalArgumentException, "This ColorModel does not support the unnormalized form"_s);
	}
	return $ColorModel::getNormalizedComponents(components, offset, normComponents, normOffset);
}

int32_t ComponentColorModel::getDataElement($ints* components, int32_t offset) {
	if (this->needScaleInit) {
		initScale();
	}
	if (this->numComponents == 1) {
		if (this->noUnnorm) {
			$throwNew($IllegalArgumentException, "This ColorModel does not support the unnormalized form"_s);
		}
		return $nc(components)->get(offset + 0);
	}
	$throwNew($IllegalArgumentException, $$str({"This model returns "_s, $$str(this->numComponents), " elements in the pixel array."_s}));
}

$Object* ComponentColorModel::getDataElements($ints* components, int32_t offset, Object$* obj) {
	if (this->needScaleInit) {
		initScale();
	}
	if (this->noUnnorm) {
		$throwNew($IllegalArgumentException, "This ColorModel does not support the unnormalized form"_s);
	}
	if (($nc(components)->length - offset) < this->numComponents) {
		$throwNew($IllegalArgumentException, $$str({"Component array too small (should be "_s, $$str(this->numComponents)}));
	}
	switch (this->transferType) {
	case $DataBuffer::TYPE_INT:
		{
			{
				$var($ints, pixel, nullptr);
				if (obj == nullptr) {
					$assign(pixel, $new($ints, this->numComponents));
				} else {
					$assign(pixel, $cast($ints, obj));
				}
				$System::arraycopy(components, offset, pixel, 0, this->numComponents);
				return $of(pixel);
			}
		}
	case $DataBuffer::TYPE_BYTE:
		{
			{
				$var($bytes, pixel, nullptr);
				if (obj == nullptr) {
					$assign(pixel, $new($bytes, this->numComponents));
				} else {
					$assign(pixel, $cast($bytes, obj));
				}
				for (int32_t i = 0; i < this->numComponents; ++i) {
					$nc(pixel)->set(i, (int8_t)((int32_t)($nc(components)->get(offset + i) & (uint32_t)255)));
				}
				return $of(pixel);
			}
		}
	case $DataBuffer::TYPE_USHORT:
		{
			{
				$var($shorts, pixel, nullptr);
				if (obj == nullptr) {
					$assign(pixel, $new($shorts, this->numComponents));
				} else {
					$assign(pixel, $cast($shorts, obj));
				}
				for (int32_t i = 0; i < this->numComponents; ++i) {
					$nc(pixel)->set(i, (int16_t)((int32_t)($nc(components)->get(offset + i) & (uint32_t)0x0000FFFF)));
				}
				return $of(pixel);
			}
		}
	default:
		{
			$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
		}
	}
}

int32_t ComponentColorModel::getDataElement($floats* normComponents, int32_t normOffset) {
	if (this->numComponents > 1) {
		$throwNew($IllegalArgumentException, "More than one component per pixel"_s);
	}
	if (this->signed$) {
		$throwNew($IllegalArgumentException, "Component value is signed"_s);
	}
	if (this->needScaleInit) {
		initScale();
	}
	$var($Object, pixel, getDataElements(normComponents, normOffset, ($Object*)nullptr));
	switch (this->transferType) {
	case $DataBuffer::TYPE_BYTE:
		{
			{
				$var($bytes, bpixel, $cast($bytes, pixel));
				return (int32_t)($nc(bpixel)->get(0) & (uint32_t)255);
			}
		}
	case $DataBuffer::TYPE_USHORT:
		{
			{
				$var($shorts, uspixel, $cast($shorts, pixel));
				return (int32_t)($nc(uspixel)->get(0) & (uint32_t)0x0000FFFF);
			}
		}
	case $DataBuffer::TYPE_INT:
		{
			{
				$var($ints, ipixel, $cast($ints, pixel));
				return $nc(ipixel)->get(0);
			}
		}
	default:
		{
			$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
		}
	}
}

$Object* ComponentColorModel::getDataElements($floats* normComponents, int32_t normOffset, Object$* obj) {
	bool needAlpha = this->supportsAlpha && this->isAlphaPremultiplied$;
	$var($floats, stdNormComponents, nullptr);
	if (this->needScaleInit) {
		initScale();
	}
	if (this->nonStdScale) {
		$assign(stdNormComponents, $new($floats, this->numComponents));
		{
			int32_t c = 0;
			int32_t nc = normOffset;
			for (; c < this->numColorComponents; ++c, ++nc) {
				stdNormComponents->set(c, ($nc(normComponents)->get(nc) - $nc(this->compOffset)->get(c)) * $nc(this->compScale)->get(c));
				if (stdNormComponents->get(c) < 0.0f) {
					stdNormComponents->set(c, 0.0f);
				}
				if (stdNormComponents->get(c) > 1.0f) {
					stdNormComponents->set(c, 1.0f);
				}
			}
		}
		if (this->supportsAlpha) {
			stdNormComponents->set(this->numColorComponents, $nc(normComponents)->get(this->numColorComponents + normOffset));
		}
		normOffset = 0;
	} else {
		$assign(stdNormComponents, normComponents);
	}
	{
		$var($bytes, bpixel, nullptr)
		$var($shorts, uspixel, nullptr)
		$var($ints, ipixel, nullptr)
		$var($shorts, spixel, nullptr)
		$var($floats, fpixel, nullptr)
		$var($doubles, dpixel, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				if (obj == nullptr) {
					$assign(bpixel, $new($bytes, this->numComponents));
				} else {
					$assign(bpixel, $cast($bytes, obj));
				}
				if (needAlpha) {
					float alpha = $nc(stdNormComponents)->get(this->numColorComponents + normOffset);
					{
						int32_t c = 0;
						int32_t nc = normOffset;
						for (; c < this->numColorComponents; ++c, ++nc) {
							$nc(bpixel)->set(c, $cast(int8_t, ((stdNormComponents->get(nc) * alpha) * ((float)(($sl(1, $nc(this->nBits)->get(c))) - 1)) + 0.5f)));
						}
					}
					$nc(bpixel)->set(this->numColorComponents, $cast(int8_t, (alpha * ((float)(($sl(1, $nc(this->nBits)->get(this->numColorComponents))) - 1)) + 0.5f)));
				} else {
					{
						int32_t c = 0;
						int32_t nc = normOffset;
						for (; c < this->numComponents; ++c, ++nc) {
							$nc(bpixel)->set(c, $cast(int8_t, ($nc(stdNormComponents)->get(nc) * ((float)(($sl(1, $nc(this->nBits)->get(c))) - 1)) + 0.5f)));
						}
					}
				}
				return $of(bpixel);
			}
		case $DataBuffer::TYPE_USHORT:
			{
				if (obj == nullptr) {
					$assign(uspixel, $new($shorts, this->numComponents));
				} else {
					$assign(uspixel, $cast($shorts, obj));
				}
				if (needAlpha) {
					float alpha = $nc(stdNormComponents)->get(this->numColorComponents + normOffset);
					{
						int32_t c = 0;
						int32_t nc = normOffset;
						for (; c < this->numColorComponents; ++c, ++nc) {
							$nc(uspixel)->set(c, $cast(int16_t, ((stdNormComponents->get(nc) * alpha) * ((float)(($sl(1, $nc(this->nBits)->get(c))) - 1)) + 0.5f)));
						}
					}
					$nc(uspixel)->set(this->numColorComponents, $cast(int16_t, (alpha * ((float)(($sl(1, $nc(this->nBits)->get(this->numColorComponents))) - 1)) + 0.5f)));
				} else {
					{
						int32_t c = 0;
						int32_t nc = normOffset;
						for (; c < this->numComponents; ++c, ++nc) {
							$nc(uspixel)->set(c, $cast(int16_t, ($nc(stdNormComponents)->get(nc) * ((float)(($sl(1, $nc(this->nBits)->get(c))) - 1)) + 0.5f)));
						}
					}
				}
				return $of(uspixel);
			}
		case $DataBuffer::TYPE_INT:
			{
				if (obj == nullptr) {
					$assign(ipixel, $new($ints, this->numComponents));
				} else {
					$assign(ipixel, $cast($ints, obj));
				}
				if (needAlpha) {
					float alpha = $nc(stdNormComponents)->get(this->numColorComponents + normOffset);
					{
						int32_t c = 0;
						int32_t nc = normOffset;
						for (; c < this->numColorComponents; ++c, ++nc) {
							$nc(ipixel)->set(c, $cast(int32_t, ((stdNormComponents->get(nc) * alpha) * ((float)(($sl(1, $nc(this->nBits)->get(c))) - 1)) + 0.5f)));
						}
					}
					$nc(ipixel)->set(this->numColorComponents, $cast(int32_t, (alpha * ((float)(($sl(1, $nc(this->nBits)->get(this->numColorComponents))) - 1)) + 0.5f)));
				} else {
					{
						int32_t c = 0;
						int32_t nc = normOffset;
						for (; c < this->numComponents; ++c, ++nc) {
							$nc(ipixel)->set(c, $cast(int32_t, ($nc(stdNormComponents)->get(nc) * ((float)(($sl(1, $nc(this->nBits)->get(c))) - 1)) + 0.5f)));
						}
					}
				}
				return $of(ipixel);
			}
		case $DataBuffer::TYPE_SHORT:
			{
				if (obj == nullptr) {
					$assign(spixel, $new($shorts, this->numComponents));
				} else {
					$assign(spixel, $cast($shorts, obj));
				}
				if (needAlpha) {
					float alpha = $nc(stdNormComponents)->get(this->numColorComponents + normOffset);
					{
						int32_t c = 0;
						int32_t nc = normOffset;
						for (; c < this->numColorComponents; ++c, ++nc) {
							$nc(spixel)->set(c, $cast(int16_t, (stdNormComponents->get(nc) * alpha * 32767.0f + 0.5f)));
						}
					}
					$nc(spixel)->set(this->numColorComponents, $cast(int16_t, (alpha * 32767.0f + 0.5f)));
				} else {
					{
						int32_t c = 0;
						int32_t nc = normOffset;
						for (; c < this->numComponents; ++c, ++nc) {
							$nc(spixel)->set(c, $cast(int16_t, ($nc(stdNormComponents)->get(nc) * 32767.0f + 0.5f)));
						}
					}
				}
				return $of(spixel);
			}
		case $DataBuffer::TYPE_FLOAT:
			{
				if (obj == nullptr) {
					$assign(fpixel, $new($floats, this->numComponents));
				} else {
					$assign(fpixel, $cast($floats, obj));
				}
				if (needAlpha) {
					float alpha = $nc(normComponents)->get(this->numColorComponents + normOffset);
					{
						int32_t c = 0;
						int32_t nc = normOffset;
						for (; c < this->numColorComponents; ++c, ++nc) {
							$nc(fpixel)->set(c, normComponents->get(nc) * alpha);
						}
					}
					$nc(fpixel)->set(this->numColorComponents, alpha);
				} else {
					{
						int32_t c = 0;
						int32_t nc = normOffset;
						for (; c < this->numComponents; ++c, ++nc) {
							$nc(fpixel)->set(c, $nc(normComponents)->get(nc));
						}
					}
				}
				return $of(fpixel);
			}
		case $DataBuffer::TYPE_DOUBLE:
			{
				if (obj == nullptr) {
					$assign(dpixel, $new($doubles, this->numComponents));
				} else {
					$assign(dpixel, $cast($doubles, obj));
				}
				if (needAlpha) {
					double alpha = (double)($nc(normComponents)->get(this->numColorComponents + normOffset));
					{
						int32_t c = 0;
						int32_t nc = normOffset;
						for (; c < this->numColorComponents; ++c, ++nc) {
							$nc(dpixel)->set(c, normComponents->get(nc) * alpha);
						}
					}
					$nc(dpixel)->set(this->numColorComponents, alpha);
				} else {
					{
						int32_t c = 0;
						int32_t nc = normOffset;
						for (; c < this->numComponents; ++c, ++nc) {
							$nc(dpixel)->set(c, (double)$nc(normComponents)->get(nc));
						}
					}
				}
				return $of(dpixel);
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
}

$floats* ComponentColorModel::getNormalizedComponents(Object$* pixel, $floats* normComponents$renamed, int32_t normOffset) {
	$var($floats, normComponents, normComponents$renamed);
	if (normComponents == nullptr) {
		$assign(normComponents, $new($floats, this->numComponents + normOffset));
	}
	{
		$var($bytes, bpixel, nullptr)
		$var($shorts, uspixel, nullptr)
		$var($ints, ipixel, nullptr)
		$var($shorts, spixel, nullptr)
		$var($floats, fpixel, nullptr)
		$var($doubles, dpixel, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bpixel, $cast($bytes, pixel));
				{
					int32_t c = 0;
					int32_t nc = normOffset;
					for (; c < this->numComponents; ++c, ++nc) {
						$nc(normComponents)->set(nc, ((float)((int32_t)($nc(bpixel)->get(c) & (uint32_t)255))) / ((float)(($sl(1, $nc(this->nBits)->get(c))) - 1)));
					}
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(uspixel, $cast($shorts, pixel));
				{
					int32_t c = 0;
					int32_t nc = normOffset;
					for (; c < this->numComponents; ++c, ++nc) {
						$nc(normComponents)->set(nc, ((float)((int32_t)($nc(uspixel)->get(c) & (uint32_t)0x0000FFFF))) / ((float)(($sl(1, $nc(this->nBits)->get(c))) - 1)));
					}
				}
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(ipixel, $cast($ints, pixel));
				{
					int32_t c = 0;
					int32_t nc = normOffset;
					for (; c < this->numComponents; ++c, ++nc) {
						$nc(normComponents)->set(nc, ((float)$nc(ipixel)->get(c)) / ((float)(($sl(1, $nc(this->nBits)->get(c))) - 1)));
					}
				}
				break;
			}
		case $DataBuffer::TYPE_SHORT:
			{
				$assign(spixel, $cast($shorts, pixel));
				{
					int32_t c = 0;
					int32_t nc = normOffset;
					for (; c < this->numComponents; ++c, ++nc) {
						$nc(normComponents)->set(nc, ((float)$nc(spixel)->get(c)) / 32767.0f);
					}
				}
				break;
			}
		case $DataBuffer::TYPE_FLOAT:
			{
				$assign(fpixel, $cast($floats, pixel));
				{
					int32_t c = 0;
					int32_t nc = normOffset;
					for (; c < this->numComponents; ++c, ++nc) {
						$nc(normComponents)->set(nc, $nc(fpixel)->get(c));
					}
				}
				break;
			}
		case $DataBuffer::TYPE_DOUBLE:
			{
				$assign(dpixel, $cast($doubles, pixel));
				{
					int32_t c = 0;
					int32_t nc = normOffset;
					for (; c < this->numComponents; ++c, ++nc) {
						$nc(normComponents)->set(nc, (float)$nc(dpixel)->get(c));
					}
				}
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	if (this->supportsAlpha && this->isAlphaPremultiplied$) {
		float alpha = $nc(normComponents)->get(this->numColorComponents + normOffset);
		if (alpha != 0.0f) {
			float invAlpha = 1.0f / alpha;
			for (int32_t c = normOffset; c < this->numColorComponents + normOffset; ++c) {
				(*normComponents)[c] *= invAlpha;
			}
		}
	}
	if (this->min != nullptr) {
		for (int32_t c = 0; c < this->numColorComponents; ++c) {
			$nc(normComponents)->set(c + normOffset, $nc(this->min)->get(c) + $nc(this->diffMinMax)->get(c) * normComponents->get(c + normOffset));
		}
	}
	return normComponents;
}

$ColorModel* ComponentColorModel::coerceData($WritableRaster* raster, bool isAlphaPremultiplied) {
	if ((this->supportsAlpha == false) || (this->isAlphaPremultiplied$ == isAlphaPremultiplied)) {
		return this;
	}
	int32_t w = $nc(raster)->getWidth();
	int32_t h = raster->getHeight();
	int32_t aIdx = raster->getNumBands() - 1;
	float normAlpha = 0.0;
	int32_t rminX = raster->getMinX();
	int32_t rY = raster->getMinY();
	int32_t rX = 0;
	if (isAlphaPremultiplied) {
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				{
					$var($bytes, pixel, nullptr);
					$var($bytes, zpixel, nullptr);
					float alphaScale = 1.0f / ((float)(($sl(1, $nc(this->nBits)->get(aIdx))) - 1));
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, $cast($bytes, raster->getDataElements(rX, rY, pixel)));
							normAlpha = ((int32_t)($nc(pixel)->get(aIdx) & (uint32_t)255)) * alphaScale;
							if (normAlpha != 0.0f) {
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int8_t, (((int32_t)(pixel->get(c) & (uint32_t)255)) * normAlpha + 0.5f)));
								}
								raster->setDataElements(rX, rY, $of(pixel));
							} else {
								if (zpixel == nullptr) {
									$assign(zpixel, $new($bytes, this->numComponents));
									$Arrays::fill(zpixel, (int8_t)0);
								}
								raster->setDataElements(rX, rY, $of(zpixel));
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				{
					$var($shorts, pixel, nullptr);
					$var($shorts, zpixel, nullptr);
					float alphaScale = 1.0f / ((float)(($sl(1, $nc(this->nBits)->get(aIdx))) - 1));
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, $cast($shorts, raster->getDataElements(rX, rY, pixel)));
							normAlpha = ((int32_t)($nc(pixel)->get(aIdx) & (uint32_t)0x0000FFFF)) * alphaScale;
							if (normAlpha != 0.0f) {
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int16_t, (((int32_t)(pixel->get(c) & (uint32_t)0x0000FFFF)) * normAlpha + 0.5f)));
								}
								raster->setDataElements(rX, rY, $of(pixel));
							} else {
								if (zpixel == nullptr) {
									$assign(zpixel, $new($shorts, this->numComponents));
									$Arrays::fill(zpixel, (int16_t)0);
								}
								raster->setDataElements(rX, rY, $of(zpixel));
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				{
					$var($ints, pixel, nullptr);
					$var($ints, zpixel, nullptr);
					float alphaScale = 1.0f / ((float)(($sl(1, $nc(this->nBits)->get(aIdx))) - 1));
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, $cast($ints, raster->getDataElements(rX, rY, pixel)));
							normAlpha = $nc(pixel)->get(aIdx) * alphaScale;
							if (normAlpha != 0.0f) {
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int32_t, (pixel->get(c) * normAlpha + 0.5f)));
								}
								raster->setDataElements(rX, rY, $of(pixel));
							} else {
								if (zpixel == nullptr) {
									$assign(zpixel, $new($ints, this->numComponents));
									$Arrays::fill(zpixel, 0);
								}
								raster->setDataElements(rX, rY, $of(zpixel));
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_SHORT:
			{
				{
					$var($shorts, pixel, nullptr);
					$var($shorts, zpixel, nullptr);
					float alphaScale = 1.0f / 32767.0f;
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, $cast($shorts, raster->getDataElements(rX, rY, pixel)));
							normAlpha = $nc(pixel)->get(aIdx) * alphaScale;
							if (normAlpha != 0.0f) {
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int16_t, (pixel->get(c) * normAlpha + 0.5f)));
								}
								raster->setDataElements(rX, rY, $of(pixel));
							} else {
								if (zpixel == nullptr) {
									$assign(zpixel, $new($shorts, this->numComponents));
									$Arrays::fill(zpixel, (int16_t)0);
								}
								raster->setDataElements(rX, rY, $of(zpixel));
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_FLOAT:
			{
				{
					$var($floats, pixel, nullptr);
					$var($floats, zpixel, nullptr);
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, $cast($floats, raster->getDataElements(rX, rY, pixel)));
							normAlpha = $nc(pixel)->get(aIdx);
							if (normAlpha != 0.0f) {
								for (int32_t c = 0; c < aIdx; ++c) {
									(*pixel)[c] *= normAlpha;
								}
								raster->setDataElements(rX, rY, $of(pixel));
							} else {
								if (zpixel == nullptr) {
									$assign(zpixel, $new($floats, this->numComponents));
									$Arrays::fill(zpixel, 0.0f);
								}
								raster->setDataElements(rX, rY, $of(zpixel));
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_DOUBLE:
			{
				{
					$var($doubles, pixel, nullptr);
					$var($doubles, zpixel, nullptr);
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, $cast($doubles, raster->getDataElements(rX, rY, pixel)));
							double dnormAlpha = $nc(pixel)->get(aIdx);
							if (dnormAlpha != 0.0) {
								for (int32_t c = 0; c < aIdx; ++c) {
									(*pixel)[c] *= dnormAlpha;
								}
								raster->setDataElements(rX, rY, $of(pixel));
							} else {
								if (zpixel == nullptr) {
									$assign(zpixel, $new($doubles, this->numComponents));
									$Arrays::fill(zpixel, 0.0);
								}
								raster->setDataElements(rX, rY, $of(zpixel));
							}
						}
					}
				}
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	} else {
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				{
					$var($bytes, pixel, nullptr);
					float alphaScale = 1.0f / ((float)(($sl(1, $nc(this->nBits)->get(aIdx))) - 1));
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, $cast($bytes, raster->getDataElements(rX, rY, pixel)));
							normAlpha = ((int32_t)($nc(pixel)->get(aIdx) & (uint32_t)255)) * alphaScale;
							if (normAlpha != 0.0f) {
								float invAlpha = 1.0f / normAlpha;
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int8_t, (((int32_t)(pixel->get(c) & (uint32_t)255)) * invAlpha + 0.5f)));
								}
								raster->setDataElements(rX, rY, $of(pixel));
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				{
					$var($shorts, pixel, nullptr);
					float alphaScale = 1.0f / ((float)(($sl(1, $nc(this->nBits)->get(aIdx))) - 1));
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, $cast($shorts, raster->getDataElements(rX, rY, pixel)));
							normAlpha = ((int32_t)($nc(pixel)->get(aIdx) & (uint32_t)0x0000FFFF)) * alphaScale;
							if (normAlpha != 0.0f) {
								float invAlpha = 1.0f / normAlpha;
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int16_t, (((int32_t)(pixel->get(c) & (uint32_t)0x0000FFFF)) * invAlpha + 0.5f)));
								}
								raster->setDataElements(rX, rY, $of(pixel));
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				{
					$var($ints, pixel, nullptr);
					float alphaScale = 1.0f / ((float)(($sl(1, $nc(this->nBits)->get(aIdx))) - 1));
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, $cast($ints, raster->getDataElements(rX, rY, pixel)));
							normAlpha = $nc(pixel)->get(aIdx) * alphaScale;
							if (normAlpha != 0.0f) {
								float invAlpha = 1.0f / normAlpha;
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int32_t, (pixel->get(c) * invAlpha + 0.5f)));
								}
								raster->setDataElements(rX, rY, $of(pixel));
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_SHORT:
			{
				{
					$var($shorts, pixel, nullptr);
					float alphaScale = 1.0f / 32767.0f;
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, $cast($shorts, raster->getDataElements(rX, rY, pixel)));
							normAlpha = $nc(pixel)->get(aIdx) * alphaScale;
							if (normAlpha != 0.0f) {
								float invAlpha = 1.0f / normAlpha;
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int16_t, (pixel->get(c) * invAlpha + 0.5f)));
								}
								raster->setDataElements(rX, rY, $of(pixel));
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_FLOAT:
			{
				{
					$var($floats, pixel, nullptr);
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, $cast($floats, raster->getDataElements(rX, rY, pixel)));
							normAlpha = $nc(pixel)->get(aIdx);
							if (normAlpha != 0.0f) {
								float invAlpha = 1.0f / normAlpha;
								for (int32_t c = 0; c < aIdx; ++c) {
									(*pixel)[c] *= invAlpha;
								}
								raster->setDataElements(rX, rY, $of(pixel));
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_DOUBLE:
			{
				{
					$var($doubles, pixel, nullptr);
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, $cast($doubles, raster->getDataElements(rX, rY, pixel)));
							double dnormAlpha = $nc(pixel)->get(aIdx);
							if (dnormAlpha != 0.0) {
								double invAlpha = 1.0 / dnormAlpha;
								for (int32_t c = 0; c < aIdx; ++c) {
									(*pixel)[c] *= invAlpha;
								}
								raster->setDataElements(rX, rY, $of(pixel));
							}
						}
					}
				}
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	if (!this->signed$) {
		return $new(ComponentColorModel, this->colorSpace, this->nBits, this->supportsAlpha, isAlphaPremultiplied, this->transparency, this->transferType);
	} else {
		return $new(ComponentColorModel, this->colorSpace, this->supportsAlpha, isAlphaPremultiplied, this->transparency, this->transferType);
	}
}

bool ComponentColorModel::isCompatibleRaster($Raster* raster) {
	$var($SampleModel, sm, $nc(raster)->getSampleModel());
	if ($instanceOf($ComponentSampleModel, sm)) {
		int32_t var$0 = $nc(sm)->getNumBands();
		if (var$0 != getNumComponents()) {
			return false;
		}
		for (int32_t i = 0; i < $nc(this->nBits)->length; ++i) {
			if ($nc(sm)->getSampleSize(i) < $nc(this->nBits)->get(i)) {
				return false;
			}
		}
		return (raster->getTransferType() == this->transferType);
	} else {
		return false;
	}
}

$WritableRaster* ComponentColorModel::createCompatibleWritableRaster(int32_t w, int32_t h) {
	int32_t dataSize = w * h * this->numComponents;
	$var($WritableRaster, raster, nullptr);
	{
		$var($SampleModel, sm, nullptr)
		$var($DataBuffer, db, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(raster, $Raster::createInterleavedRaster(this->transferType, w, h, this->numComponents, nullptr));
				break;
			}
		default:
			{
				$assign(sm, createCompatibleSampleModel(w, h));
				$assign(db, $nc(sm)->createDataBuffer());
				$assign(raster, $Raster::createWritableRaster(sm, db, nullptr));
			}
		}
	}
	return raster;
}

$SampleModel* ComponentColorModel::createCompatibleSampleModel(int32_t w, int32_t h) {
	$var($ints, bandOffsets, $new($ints, this->numComponents));
	for (int32_t i = 0; i < this->numComponents; ++i) {
		bandOffsets->set(i, i);
	}
	switch (this->transferType) {
	case $DataBuffer::TYPE_BYTE:
		{}
	case $DataBuffer::TYPE_USHORT:
		{
			return $new($PixelInterleavedSampleModel, this->transferType, w, h, this->numComponents, w * this->numComponents, bandOffsets);
		}
	default:
		{
			return $new($ComponentSampleModel, this->transferType, w, h, this->numComponents, w * this->numComponents, bandOffsets);
		}
	}
}

bool ComponentColorModel::isCompatibleSampleModel($SampleModel* sm) {
	if (!($instanceOf($ComponentSampleModel, sm))) {
		return false;
	}
	if (this->numComponents != $nc(sm)->getNumBands()) {
		return false;
	}
	if ($nc(sm)->getTransferType() != this->transferType) {
		return false;
	}
	return true;
}

$WritableRaster* ComponentColorModel::getAlphaRaster($WritableRaster* raster) {
	if (hasAlpha() == false) {
		return nullptr;
	}
	int32_t x = $nc(raster)->getMinX();
	int32_t y = raster->getMinY();
	$var($ints, band, $new($ints, 1));
	band->set(0, raster->getNumBands() - 1);
	int32_t var$0 = x;
	int32_t var$1 = y;
	int32_t var$2 = raster->getWidth();
	return raster->createWritableChild(var$0, var$1, var$2, raster->getHeight(), x, y, band);
}

bool ComponentColorModel::equals(Object$* obj) {
	if (!($instanceOf(ComponentColorModel, obj))) {
		return false;
	}
	$var(ComponentColorModel, cm, $cast(ComponentColorModel, obj));
	bool var$4 = this->supportsAlpha != $nc(cm)->hasAlpha();
	bool var$3 = var$4 || this->isAlphaPremultiplied$ != $nc(cm)->isAlphaPremultiplied();
	bool var$2 = var$3 || this->pixel_bits != $nc(cm)->getPixelSize();
	bool var$1 = var$2 || this->transparency != $nc(cm)->getTransparency();
	bool var$0 = var$1 || this->numComponents != $nc(cm)->getNumComponents();
	if (var$0 || (!($nc($of(this->colorSpace))->equals($nc(cm)->colorSpace))) || this->transferType != $nc(cm)->transferType) {
		return false;
	}
	if (!($Arrays::equals(this->nBits, $($nc(cm)->getComponentSize())))) {
		return false;
	}
	return true;
}

int32_t ComponentColorModel::hashCode() {
	int32_t result = this->hashCode$;
	if (result == 0) {
		result = 7;
		result = 89 * result + this->pixel_bits;
		result = 89 * result + $Arrays::hashCode(this->nBits);
		result = 89 * result + this->transparency;
		result = 89 * result + (this->supportsAlpha ? 1 : 0);
		result = 89 * result + (this->isAlphaPremultiplied$ ? 1 : 0);
		result = 89 * result + this->numComponents;
		result = 89 * result + $nc($of(this->colorSpace))->hashCode();
		result = 89 * result + this->transferType;
		this->hashCode$ = result;
	}
	return result;
}

ComponentColorModel::ComponentColorModel() {
}

$Class* ComponentColorModel::load$($String* name, bool initialize) {
	$loadClass(ComponentColorModel, name, initialize, &_ComponentColorModel_ClassInfo_, allocate$ComponentColorModel);
	return class$;
}

$Class* ComponentColorModel::class$ = nullptr;

		} // image
	} // awt
} // java