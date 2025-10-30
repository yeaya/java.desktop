#include <java/awt/image/ColorModel.h>

#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/awt/image/ColorModel$1.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <sun/java2d/cmm/CMSManager.h>
#include <sun/java2d/cmm/ColorTransform.h>
#include <sun/java2d/cmm/PCMM.h>
#include <jcpp.h>

#undef CS_GRAY
#undef CS_LINEAR_RGB
#undef OPAQUE
#undef TRANSLUCENT
#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_RGB
#undef TYPE_UNDEFINED
#undef TYPE_USHORT

using $ColorTransformArray = $Array<::sun::java2d::cmm::ColorTransform>;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ColorModel$1 = ::java::awt::image::ColorModel$1;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $CMSManager = ::sun::java2d::cmm::CMSManager;
using $ColorTransform = ::sun::java2d::cmm::ColorTransform;
using $PCMM = ::sun::java2d::cmm::PCMM;

namespace java {
	namespace awt {
		namespace image {

$NamedAttribute ColorModel_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ColorModel_MethodAnnotations_finalize6[] = {
	{"Ljava/lang/Deprecated;", ColorModel_Attribute_var$0},
	{}
};

$FieldInfo _ColorModel_FieldInfo_[] = {
	{"pData", "J", nullptr, $PRIVATE, $field(ColorModel, pData)},
	{"pixel_bits", "I", nullptr, $PROTECTED, $field(ColorModel, pixel_bits)},
	{"nBits", "[I", nullptr, 0, $field(ColorModel, nBits)},
	{"transparency", "I", nullptr, 0, $field(ColorModel, transparency)},
	{"supportsAlpha", "Z", nullptr, 0, $field(ColorModel, supportsAlpha)},
	{"isAlphaPremultiplied", "Z", nullptr, 0, $field(ColorModel, isAlphaPremultiplied$)},
	{"numComponents", "I", nullptr, 0, $field(ColorModel, numComponents)},
	{"numColorComponents", "I", nullptr, 0, $field(ColorModel, numColorComponents)},
	{"colorSpace", "Ljava/awt/color/ColorSpace;", nullptr, 0, $field(ColorModel, colorSpace)},
	{"colorSpaceType", "I", nullptr, 0, $field(ColorModel, colorSpaceType)},
	{"maxBits", "I", nullptr, 0, $field(ColorModel, maxBits)},
	{"is_sRGB", "Z", nullptr, 0, $field(ColorModel, is_sRGB)},
	{"transferType", "I", nullptr, $PROTECTED, $field(ColorModel, transferType)},
	{"loaded", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ColorModel, loaded)},
	{"RGBdefault", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE | $STATIC, $staticField(ColorModel, RGBdefault)},
	{"l8Tos8", "[B", nullptr, $STATIC, $staticField(ColorModel, l8Tos8)},
	{"s8Tol8", "[B", nullptr, $STATIC, $staticField(ColorModel, s8Tol8)},
	{"l16Tos8", "[B", nullptr, $STATIC, $staticField(ColorModel, l16Tos8)},
	{"s8Tol16", "[S", nullptr, $STATIC, $staticField(ColorModel, s8Tol16)},
	{"g8Tos8Map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/color/ICC_ColorSpace;[B>;", $STATIC, $staticField(ColorModel, g8Tos8Map)},
	{"lg16Toog8Map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/color/ICC_ColorSpace;[B>;", $STATIC, $staticField(ColorModel, lg16Toog8Map)},
	{"g16Tos8Map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/color/ICC_ColorSpace;[B>;", $STATIC, $staticField(ColorModel, g16Tos8Map)},
	{"lg16Toog16Map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/color/ICC_ColorSpace;[S>;", $STATIC, $staticField(ColorModel, lg16Toog16Map)},
	{}
};

$MethodInfo _ColorModel_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ColorModel::*)(int32_t)>(&ColorModel::init$))},
	{"<init>", "(I[ILjava/awt/color/ColorSpace;ZZII)V", nullptr, $PROTECTED, $method(static_cast<void(ColorModel::*)(int32_t,$ints*,$ColorSpace*,bool,bool,int32_t,int32_t)>(&ColorModel::init$))},
	{"coerceData", "(Ljava/awt/image/WritableRaster;Z)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"createCompatibleSampleModel", "(II)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"finalize", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _ColorModel_MethodAnnotations_finalize6},
	{"getAlpha", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAlpha", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getAlphaRaster", "(Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getBlue", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getBlue", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getColorSpace", "()Ljava/awt/color/ColorSpace;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ColorSpace*(ColorModel::*)()>(&ColorModel::getColorSpace))},
	{"getComponentSize", "(I)I", nullptr, $PUBLIC},
	{"getComponentSize", "()[I", nullptr, $PUBLIC},
	{"getComponents", "(I[II)[I", nullptr, $PUBLIC},
	{"getComponents", "(Ljava/lang/Object;[II)[I", nullptr, $PUBLIC},
	{"getDataElement", "([II)I", nullptr, $PUBLIC},
	{"getDataElement", "([FI)I", nullptr, $PUBLIC},
	{"getDataElements", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataElements", "([IILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataElements", "([FILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDefaultTransferType", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ColorModel::getDefaultTransferType))},
	{"getGray16TosRGB8LUT", "(Ljava/awt/color/ICC_ColorSpace;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($ICC_ColorSpace*)>(&ColorModel::getGray16TosRGB8LUT))},
	{"getGray8TosRGB8LUT", "(Ljava/awt/color/ICC_ColorSpace;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($ICC_ColorSpace*)>(&ColorModel::getGray8TosRGB8LUT))},
	{"getGreen", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getGreen", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getLinearGray16ToOtherGray16LUT", "(Ljava/awt/color/ICC_ColorSpace;)[S", nullptr, $STATIC, $method(static_cast<$shorts*(*)($ICC_ColorSpace*)>(&ColorModel::getLinearGray16ToOtherGray16LUT))},
	{"getLinearGray16ToOtherGray8LUT", "(Ljava/awt/color/ICC_ColorSpace;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($ICC_ColorSpace*)>(&ColorModel::getLinearGray16ToOtherGray8LUT))},
	{"getLinearRGB16TosRGB8LUT", "()[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)()>(&ColorModel::getLinearRGB16TosRGB8LUT))},
	{"getLinearRGB8TosRGB8LUT", "()[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)()>(&ColorModel::getLinearRGB8TosRGB8LUT))},
	{"getNormalizedComponents", "([II[FI)[F", nullptr, $PUBLIC},
	{"getNormalizedComponents", "(Ljava/lang/Object;[FI)[F", nullptr, $PUBLIC},
	{"getNumColorComponents", "()I", nullptr, $PUBLIC},
	{"getNumComponents", "()I", nullptr, $PUBLIC},
	{"getPixelSize", "()I", nullptr, $PUBLIC},
	{"getRGB", "(I)I", nullptr, $PUBLIC},
	{"getRGB", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getRGBdefault", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ColorModel*(*)()>(&ColorModel::getRGBdefault))},
	{"getRed", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRed", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getTransferType", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ColorModel::*)()>(&ColorModel::getTransferType))},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{"getUnnormalizedComponents", "([FI[II)[I", nullptr, $PUBLIC},
	{"getsRGB8ToLinearRGB16LUT", "()[S", nullptr, $STATIC, $method(static_cast<$shorts*(*)()>(&ColorModel::getsRGB8ToLinearRGB16LUT))},
	{"getsRGB8ToLinearRGB8LUT", "()[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)()>(&ColorModel::getsRGB8ToLinearRGB8LUT))},
	{"hasAlpha", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(ColorModel::*)()>(&ColorModel::hasAlpha))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&ColorModel::initIDs))},
	{"isAlphaPremultiplied", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(ColorModel::*)()>(&ColorModel::isAlphaPremultiplied))},
	{"isCompatibleRaster", "(Ljava/awt/image/Raster;)Z", nullptr, $PUBLIC},
	{"isCompatibleSampleModel", "(Ljava/awt/image/SampleModel;)Z", nullptr, $PUBLIC},
	{"isLinearGRAYspace", "(Ljava/awt/color/ColorSpace;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($ColorSpace*)>(&ColorModel::isLinearGRAYspace))},
	{"isLinearRGBspace", "(Ljava/awt/color/ColorSpace;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($ColorSpace*)>(&ColorModel::isLinearRGBspace))},
	{"loadLibraries", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&ColorModel::loadLibraries))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 48

$InnerClassInfo _ColorModel_InnerClassesInfo_[] = {
	{"java.awt.image.ColorModel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ColorModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.image.ColorModel",
	"java.lang.Object",
	"java.awt.Transparency",
	_ColorModel_FieldInfo_,
	_ColorModel_MethodInfo_,
	nullptr,
	nullptr,
	_ColorModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.image.ColorModel$1"
};

$Object* allocate$ColorModel($Class* clazz) {
	return $of($alloc(ColorModel));
}

bool ColorModel::loaded = false;
ColorModel* ColorModel::RGBdefault = nullptr;
$bytes* ColorModel::l8Tos8 = nullptr;
$bytes* ColorModel::s8Tol8 = nullptr;
$bytes* ColorModel::l16Tos8 = nullptr;
$shorts* ColorModel::s8Tol16 = nullptr;
$Map* ColorModel::g8Tos8Map = nullptr;
$Map* ColorModel::lg16Toog8Map = nullptr;
$Map* ColorModel::g16Tos8Map = nullptr;
$Map* ColorModel::lg16Toog16Map = nullptr;

void ColorModel::loadLibraries() {
	$init(ColorModel);
	$beforeCallerSensitive();
	if (!ColorModel::loaded) {
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ColorModel$1)));
		ColorModel::loaded = true;
	}
}

void ColorModel::initIDs() {
	$init(ColorModel);
	$prepareNativeStatic(ColorModel, initIDs, void);
	$invokeNativeStatic(ColorModel, initIDs);
	$finishNativeStatic();
}

ColorModel* ColorModel::getRGBdefault() {
	$init(ColorModel);
	if (ColorModel::RGBdefault == nullptr) {
		$assignStatic(ColorModel::RGBdefault, $new($DirectColorModel, 32, 0x00FF0000, 0x0000FF00, 255, (int32_t)0xFF000000));
	}
	return ColorModel::RGBdefault;
}

void ColorModel::init$(int32_t bits) {
	this->transparency = $Transparency::TRANSLUCENT;
	this->supportsAlpha = true;
	this->isAlphaPremultiplied$ = false;
	this->numComponents = -1;
	this->numColorComponents = -1;
	$set(this, colorSpace, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	this->colorSpaceType = $ColorSpace::TYPE_RGB;
	this->is_sRGB = true;
	this->pixel_bits = bits;
	if (bits < 1) {
		$throwNew($IllegalArgumentException, "Number of bits must be > 0"_s);
	}
	this->numComponents = 4;
	this->numColorComponents = 3;
	this->maxBits = bits;
	this->transferType = ColorModel::getDefaultTransferType(bits);
}

void ColorModel::init$(int32_t pixel_bits, $ints* bits, $ColorSpace* cspace, bool hasAlpha, bool isAlphaPremultiplied, int32_t transparency, int32_t transferType) {
	$useLocalCurrentObjectStackCache();
	this->transparency = $Transparency::TRANSLUCENT;
	this->supportsAlpha = true;
	this->isAlphaPremultiplied$ = false;
	this->numComponents = -1;
	this->numColorComponents = -1;
	$set(this, colorSpace, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	this->colorSpaceType = $ColorSpace::TYPE_RGB;
	this->is_sRGB = true;
	$set(this, colorSpace, cspace);
	this->colorSpaceType = $nc(cspace)->getType();
	this->numColorComponents = cspace->getNumComponents();
	this->numComponents = this->numColorComponents + (hasAlpha ? 1 : 0);
	this->supportsAlpha = hasAlpha;
	if ($nc(bits)->length < this->numComponents) {
		$throwNew($IllegalArgumentException, $$str({"Number of color/alpha components should be "_s, $$str(this->numComponents), " but length of bits array is "_s, $$str(bits->length)}));
	}
	if (transparency < $Transparency::OPAQUE || transparency > $Transparency::TRANSLUCENT) {
		$throwNew($IllegalArgumentException, $$str({"Unknown transparency: "_s, $$str(transparency)}));
	}
	if (this->supportsAlpha == false) {
		this->isAlphaPremultiplied$ = false;
		this->transparency = $Transparency::OPAQUE;
	} else {
		this->isAlphaPremultiplied$ = isAlphaPremultiplied;
		this->transparency = transparency;
	}
	$set(this, nBits, $Arrays::copyOf(bits, this->numComponents));
	this->pixel_bits = pixel_bits;
	if (pixel_bits <= 0) {
		$throwNew($IllegalArgumentException, "Number of pixel bits must be > 0"_s);
	}
	this->maxBits = 0;
	for (int32_t i = 0; i < $nc(bits)->length; ++i) {
		if (bits->get(i) < 0) {
			$throwNew($IllegalArgumentException, "Number of bits must be >= 0"_s);
		}
		if (this->maxBits < bits->get(i)) {
			this->maxBits = bits->get(i);
		}
	}
	if (this->maxBits == 0) {
		$throwNew($IllegalArgumentException, "There must be at least one component with > 0 pixel bits."_s);
	}
	if (cspace != $ColorSpace::getInstance($ColorSpace::CS_sRGB)) {
		this->is_sRGB = false;
	}
	this->transferType = transferType;
}

bool ColorModel::hasAlpha() {
	return this->supportsAlpha;
}

bool ColorModel::isAlphaPremultiplied() {
	return this->isAlphaPremultiplied$;
}

int32_t ColorModel::getTransferType() {
	return this->transferType;
}

int32_t ColorModel::getPixelSize() {
	return this->pixel_bits;
}

int32_t ColorModel::getComponentSize(int32_t componentIdx) {
	if (this->nBits == nullptr) {
		$throwNew($NullPointerException, "Number of bits array is null."_s);
	}
	return $nc(this->nBits)->get(componentIdx);
}

$ints* ColorModel::getComponentSize() {
	if (this->nBits != nullptr) {
		return $cast($ints, $nc(this->nBits)->clone());
	}
	return nullptr;
}

int32_t ColorModel::getTransparency() {
	return this->transparency;
}

int32_t ColorModel::getNumComponents() {
	return this->numComponents;
}

int32_t ColorModel::getNumColorComponents() {
	return this->numColorComponents;
}

int32_t ColorModel::getRGB(int32_t pixel) {
	int32_t var$2 = (getAlpha(pixel) << 24);
	int32_t var$1 = var$2 | (getRed(pixel) << 16);
	int32_t var$0 = var$1 | (getGreen(pixel) << 8);
	return var$0 | (getBlue(pixel) << 0);
}

int32_t ColorModel::getRed(Object$* inData) {
	$useLocalCurrentObjectStackCache();
	int32_t pixel = 0;
	int32_t length = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, inData));
				pixel = (int32_t)($nc(bdata)->get(0) & (uint32_t)255);
				length = $nc(bdata)->length;
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sdata, $cast($shorts, inData));
				pixel = (int32_t)($nc(sdata)->get(0) & (uint32_t)0x0000FFFF);
				length = $nc(sdata)->length;
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, inData));
				pixel = $nc(idata)->get(0);
				length = $nc(idata)->length;
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	if (length == 1) {
		return getRed(pixel);
	} else {
		$throwNew($UnsupportedOperationException, "This method is not supported by this color model"_s);
	}
}

int32_t ColorModel::getGreen(Object$* inData) {
	$useLocalCurrentObjectStackCache();
	int32_t pixel = 0;
	int32_t length = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, inData));
				pixel = (int32_t)($nc(bdata)->get(0) & (uint32_t)255);
				length = $nc(bdata)->length;
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sdata, $cast($shorts, inData));
				pixel = (int32_t)($nc(sdata)->get(0) & (uint32_t)0x0000FFFF);
				length = $nc(sdata)->length;
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, inData));
				pixel = $nc(idata)->get(0);
				length = $nc(idata)->length;
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	if (length == 1) {
		return getGreen(pixel);
	} else {
		$throwNew($UnsupportedOperationException, "This method is not supported by this color model"_s);
	}
}

int32_t ColorModel::getBlue(Object$* inData) {
	$useLocalCurrentObjectStackCache();
	int32_t pixel = 0;
	int32_t length = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, inData));
				pixel = (int32_t)($nc(bdata)->get(0) & (uint32_t)255);
				length = $nc(bdata)->length;
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sdata, $cast($shorts, inData));
				pixel = (int32_t)($nc(sdata)->get(0) & (uint32_t)0x0000FFFF);
				length = $nc(sdata)->length;
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, inData));
				pixel = $nc(idata)->get(0);
				length = $nc(idata)->length;
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	if (length == 1) {
		return getBlue(pixel);
	} else {
		$throwNew($UnsupportedOperationException, "This method is not supported by this color model"_s);
	}
}

int32_t ColorModel::getAlpha(Object$* inData) {
	$useLocalCurrentObjectStackCache();
	int32_t pixel = 0;
	int32_t length = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, inData));
				pixel = (int32_t)($nc(bdata)->get(0) & (uint32_t)255);
				length = $nc(bdata)->length;
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sdata, $cast($shorts, inData));
				pixel = (int32_t)($nc(sdata)->get(0) & (uint32_t)0x0000FFFF);
				length = $nc(sdata)->length;
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, inData));
				pixel = $nc(idata)->get(0);
				length = $nc(idata)->length;
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	if (length == 1) {
		return getAlpha(pixel);
	} else {
		$throwNew($UnsupportedOperationException, "This method is not supported by this color model"_s);
	}
}

int32_t ColorModel::getRGB(Object$* inData) {
	int32_t var$2 = (getAlpha(inData) << 24);
	int32_t var$1 = var$2 | (getRed(inData) << 16);
	int32_t var$0 = var$1 | (getGreen(inData) << 8);
	return var$0 | (getBlue(inData) << 0);
}

$Object* ColorModel::getDataElements(int32_t rgb, Object$* pixel) {
	$throwNew($UnsupportedOperationException, "This method is not supported by this color model."_s);
	$shouldNotReachHere();
}

$ints* ColorModel::getComponents(int32_t pixel, $ints* components, int32_t offset) {
	$throwNew($UnsupportedOperationException, "This method is not supported by this color model."_s);
	$shouldNotReachHere();
}

$ints* ColorModel::getComponents(Object$* pixel, $ints* components, int32_t offset) {
	$throwNew($UnsupportedOperationException, "This method is not supported by this color model."_s);
	$shouldNotReachHere();
}

$ints* ColorModel::getUnnormalizedComponents($floats* normComponents, int32_t normOffset, $ints* components$renamed, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	$var($ints, components, components$renamed);
	if (this->colorSpace == nullptr) {
		$throwNew($UnsupportedOperationException, "This method is not supported by this color model."_s);
	}
	if (this->nBits == nullptr) {
		$throwNew($UnsupportedOperationException, "This method is not supported.  Unable to determine #bits per component."_s);
	}
	if (($nc(normComponents)->length - normOffset) < this->numComponents) {
		$throwNew($IllegalArgumentException, $$str({"Incorrect number of components.  Expecting "_s, $$str(this->numComponents)}));
	}
	if (components == nullptr) {
		$assign(components, $new($ints, offset + this->numComponents));
	}
	if (this->supportsAlpha && this->isAlphaPremultiplied$) {
		float normAlpha = $nc(normComponents)->get(normOffset + this->numColorComponents);
		for (int32_t i = 0; i < this->numColorComponents; ++i) {
			$nc(components)->set(offset + i, $cast(int32_t, (normComponents->get(normOffset + i) * (($sl(1, $nc(this->nBits)->get(i))) - 1) * normAlpha + 0.5f)));
		}
		$nc(components)->set(offset + this->numColorComponents, $cast(int32_t, (normAlpha * (($sl(1, $nc(this->nBits)->get(this->numColorComponents))) - 1) + 0.5f)));
	} else {
		for (int32_t i = 0; i < this->numComponents; ++i) {
			$nc(components)->set(offset + i, $cast(int32_t, ($nc(normComponents)->get(normOffset + i) * (($sl(1, $nc(this->nBits)->get(i))) - 1) + 0.5f)));
		}
	}
	return components;
}

$floats* ColorModel::getNormalizedComponents($ints* components, int32_t offset, $floats* normComponents$renamed, int32_t normOffset) {
	$useLocalCurrentObjectStackCache();
	$var($floats, normComponents, normComponents$renamed);
	if (this->colorSpace == nullptr) {
		$throwNew($UnsupportedOperationException, "This method is not supported by this color model."_s);
	}
	if (this->nBits == nullptr) {
		$throwNew($UnsupportedOperationException, "This method is not supported.  Unable to determine #bits per component."_s);
	}
	if (($nc(components)->length - offset) < this->numComponents) {
		$throwNew($IllegalArgumentException, $$str({"Incorrect number of components.  Expecting "_s, $$str(this->numComponents)}));
	}
	if (normComponents == nullptr) {
		$assign(normComponents, $new($floats, this->numComponents + normOffset));
	}
	if (this->supportsAlpha && this->isAlphaPremultiplied$) {
		float normAlpha = (float)$nc(components)->get(offset + this->numColorComponents);
		normAlpha /= (float)(($sl(1, $nc(this->nBits)->get(this->numColorComponents))) - 1);
		if (normAlpha != 0.0f) {
			for (int32_t i = 0; i < this->numColorComponents; ++i) {
				$nc(normComponents)->set(normOffset + i, ((float)components->get(offset + i)) / (normAlpha * ((float)(($sl(1, $nc(this->nBits)->get(i))) - 1))));
			}
		} else {
			for (int32_t i = 0; i < this->numColorComponents; ++i) {
				$nc(normComponents)->set(normOffset + i, 0.0f);
			}
		}
		$nc(normComponents)->set(normOffset + this->numColorComponents, normAlpha);
	} else {
		for (int32_t i = 0; i < this->numComponents; ++i) {
			$nc(normComponents)->set(normOffset + i, ((float)$nc(components)->get(offset + i)) / ((float)(($sl(1, $nc(this->nBits)->get(i))) - 1)));
		}
	}
	return normComponents;
}

int32_t ColorModel::getDataElement($ints* components, int32_t offset) {
	$throwNew($UnsupportedOperationException, "This method is not supported by this color model."_s);
	$shouldNotReachHere();
}

$Object* ColorModel::getDataElements($ints* components, int32_t offset, Object$* obj) {
	$throwNew($UnsupportedOperationException, "This method has not been implemented for this color model."_s);
	$shouldNotReachHere();
}

int32_t ColorModel::getDataElement($floats* normComponents, int32_t normOffset) {
	$var($ints, components, getUnnormalizedComponents(normComponents, normOffset, nullptr, 0));
	return getDataElement(components, 0);
}

$Object* ColorModel::getDataElements($floats* normComponents, int32_t normOffset, Object$* obj) {
	$var($ints, components, getUnnormalizedComponents(normComponents, normOffset, nullptr, 0));
	return $of(getDataElements(components, 0, obj));
}

$floats* ColorModel::getNormalizedComponents(Object$* pixel, $floats* normComponents, int32_t normOffset) {
	$var($ints, components, getComponents(pixel, ($ints*)nullptr, 0));
	return getNormalizedComponents(components, 0, normComponents, normOffset);
}

bool ColorModel::equals(Object$* obj) {
	return $Transparency::equals(obj);
}

int32_t ColorModel::hashCode() {
	return $Transparency::hashCode();
}

$ColorSpace* ColorModel::getColorSpace() {
	return this->colorSpace;
}

ColorModel* ColorModel::coerceData($WritableRaster* raster, bool isAlphaPremultiplied) {
	$throwNew($UnsupportedOperationException, "This method is not supported by this color model"_s);
	$shouldNotReachHere();
}

bool ColorModel::isCompatibleRaster($Raster* raster) {
	$throwNew($UnsupportedOperationException, "This method has not been implemented for this ColorModel."_s);
	$shouldNotReachHere();
}

$WritableRaster* ColorModel::createCompatibleWritableRaster(int32_t w, int32_t h) {
	$throwNew($UnsupportedOperationException, "This method is not supported by this color model"_s);
	$shouldNotReachHere();
}

$SampleModel* ColorModel::createCompatibleSampleModel(int32_t w, int32_t h) {
	$throwNew($UnsupportedOperationException, "This method is not supported by this color model"_s);
	$shouldNotReachHere();
}

bool ColorModel::isCompatibleSampleModel($SampleModel* sm) {
	$throwNew($UnsupportedOperationException, "This method is not supported by this color model"_s);
	$shouldNotReachHere();
}

void ColorModel::finalize() {
}

$WritableRaster* ColorModel::getAlphaRaster($WritableRaster* raster) {
	return nullptr;
}

$String* ColorModel::toString() {
	$useLocalCurrentObjectStackCache();
	return $new($String, $$str({"ColorModel: #pixelBits = "_s, $$str(this->pixel_bits), " numComponents = "_s, $$str(this->numComponents), " color space = "_s, this->colorSpace, " transparency = "_s, $$str(this->transparency), " has alpha = "_s, $$str(this->supportsAlpha), " isAlphaPre = "_s, $$str(this->isAlphaPremultiplied$)}));
}

int32_t ColorModel::getDefaultTransferType(int32_t pixel_bits) {
	$init(ColorModel);
	if (pixel_bits <= 8) {
		return $DataBuffer::TYPE_BYTE;
	} else if (pixel_bits <= 16) {
		return $DataBuffer::TYPE_USHORT;
	} else if (pixel_bits <= 32) {
		return $DataBuffer::TYPE_INT;
	} else {
		return $DataBuffer::TYPE_UNDEFINED;
	}
}

bool ColorModel::isLinearRGBspace($ColorSpace* cs) {
	$init(ColorModel);
	return cs == $ColorSpace::getInstance($ColorSpace::CS_LINEAR_RGB);
}

bool ColorModel::isLinearGRAYspace($ColorSpace* cs) {
	$init(ColorModel);
	return cs == $ColorSpace::getInstance($ColorSpace::CS_GRAY);
}

$bytes* ColorModel::getLinearRGB8TosRGB8LUT() {
	$init(ColorModel);
	if (ColorModel::l8Tos8 == nullptr) {
		$assignStatic(ColorModel::l8Tos8, $new($bytes, 256));
		float input = 0.0;
		float output = 0.0;
		for (int32_t i = 0; i <= 255; ++i) {
			input = ((float)i) / 255.0f;
			if (input <= 0.0031308f) {
				output = input * 12.92f;
			} else {
				output = 1.055f * ((float)$Math::pow(input, (1.0 / 2.4))) - 0.055f;
			}
			$nc(ColorModel::l8Tos8)->set(i, (int8_t)$Math::round(output * 255.0f));
		}
	}
	return ColorModel::l8Tos8;
}

$bytes* ColorModel::getsRGB8ToLinearRGB8LUT() {
	$init(ColorModel);
	if (ColorModel::s8Tol8 == nullptr) {
		$assignStatic(ColorModel::s8Tol8, $new($bytes, 256));
		float input = 0.0;
		float output = 0.0;
		for (int32_t i = 0; i <= 255; ++i) {
			input = ((float)i) / 255.0f;
			if (input <= 0.04045f) {
				output = input / 12.92f;
			} else {
				output = (float)$Math::pow((input + 0.055f) / 1.055f, 2.4);
			}
			$nc(ColorModel::s8Tol8)->set(i, (int8_t)$Math::round(output * 255.0f));
		}
	}
	return ColorModel::s8Tol8;
}

$bytes* ColorModel::getLinearRGB16TosRGB8LUT() {
	$init(ColorModel);
	if (ColorModel::l16Tos8 == nullptr) {
		$assignStatic(ColorModel::l16Tos8, $new($bytes, 0x00010000));
		float input = 0.0;
		float output = 0.0;
		for (int32_t i = 0; i <= 0x0000FFFF; ++i) {
			input = ((float)i) / 65535.0f;
			if (input <= 0.0031308f) {
				output = input * 12.92f;
			} else {
				output = 1.055f * ((float)$Math::pow(input, (1.0 / 2.4))) - 0.055f;
			}
			$nc(ColorModel::l16Tos8)->set(i, (int8_t)$Math::round(output * 255.0f));
		}
	}
	return ColorModel::l16Tos8;
}

$shorts* ColorModel::getsRGB8ToLinearRGB16LUT() {
	$init(ColorModel);
	if (ColorModel::s8Tol16 == nullptr) {
		$assignStatic(ColorModel::s8Tol16, $new($shorts, 256));
		float input = 0.0;
		float output = 0.0;
		for (int32_t i = 0; i <= 255; ++i) {
			input = ((float)i) / 255.0f;
			if (input <= 0.04045f) {
				output = input / 12.92f;
			} else {
				output = (float)$Math::pow((input + 0.055f) / 1.055f, 2.4);
			}
			$nc(ColorModel::s8Tol16)->set(i, (int16_t)$Math::round(output * 65535.0f));
		}
	}
	return ColorModel::s8Tol16;
}

$bytes* ColorModel::getGray8TosRGB8LUT($ICC_ColorSpace* grayCS) {
	$init(ColorModel);
	$useLocalCurrentObjectStackCache();
	if (isLinearGRAYspace(grayCS)) {
		return getLinearRGB8TosRGB8LUT();
	}
	if (ColorModel::g8Tos8Map != nullptr) {
		$var($bytes, g8Tos8LUT, $cast($bytes, $nc(ColorModel::g8Tos8Map)->get(grayCS)));
		if (g8Tos8LUT != nullptr) {
			return g8Tos8LUT;
		}
	}
	$var($bytes, g8Tos8LUT, $new($bytes, 256));
	for (int32_t i = 0; i <= 255; ++i) {
		g8Tos8LUT->set(i, (int8_t)i);
	}
	$var($ColorTransformArray, transformList, $new($ColorTransformArray, 2));
	$var($PCMM, mdl, $CMSManager::getModule());
	$var($ICC_ColorSpace, srgbCS, $cast($ICC_ColorSpace, $ColorSpace::getInstance($ColorSpace::CS_sRGB)));
	transformList->set(0, $($nc(mdl)->createTransform($($nc(grayCS)->getProfile()), $ColorTransform::Any, $ColorTransform::In)));
	transformList->set(1, $(mdl->createTransform($($nc(srgbCS)->getProfile()), $ColorTransform::Any, $ColorTransform::Out)));
	$var($ColorTransform, t, mdl->createTransform(transformList));
	$var($bytes, tmp, $nc(t)->colorConvert(g8Tos8LUT, ($bytes*)nullptr));
	{
		int32_t i = 0;
		int32_t j = 2;
		for (; i <= 255; ++i, j += 3) {
			g8Tos8LUT->set(i, $nc(tmp)->get(j));
		}
	}
	if (ColorModel::g8Tos8Map == nullptr) {
		$assignStatic(ColorModel::g8Tos8Map, $Collections::synchronizedMap($$new($WeakHashMap, 2)));
	}
	$nc(ColorModel::g8Tos8Map)->put(grayCS, g8Tos8LUT);
	return g8Tos8LUT;
}

$bytes* ColorModel::getLinearGray16ToOtherGray8LUT($ICC_ColorSpace* grayCS) {
	$init(ColorModel);
	$useLocalCurrentObjectStackCache();
	if (ColorModel::lg16Toog8Map != nullptr) {
		$var($bytes, lg16Toog8LUT, $cast($bytes, $nc(ColorModel::lg16Toog8Map)->get(grayCS)));
		if (lg16Toog8LUT != nullptr) {
			return lg16Toog8LUT;
		}
	}
	$var($shorts, tmp, $new($shorts, 0x00010000));
	for (int32_t i = 0; i <= 0x0000FFFF; ++i) {
		tmp->set(i, (int16_t)i);
	}
	$var($ColorTransformArray, transformList, $new($ColorTransformArray, 2));
	$var($PCMM, mdl, $CMSManager::getModule());
	$var($ICC_ColorSpace, lgCS, $cast($ICC_ColorSpace, $ColorSpace::getInstance($ColorSpace::CS_GRAY)));
	transformList->set(0, $($nc(mdl)->createTransform($($nc(lgCS)->getProfile()), $ColorTransform::Any, $ColorTransform::In)));
	transformList->set(1, $(mdl->createTransform($($nc(grayCS)->getProfile()), $ColorTransform::Any, $ColorTransform::Out)));
	$var($ColorTransform, t, mdl->createTransform(transformList));
	$assign(tmp, $nc(t)->colorConvert(tmp, ($shorts*)nullptr));
	$var($bytes, lg16Toog8LUT, $new($bytes, 0x00010000));
	for (int32_t i = 0; i <= 0x0000FFFF; ++i) {
		lg16Toog8LUT->set(i, $cast(int8_t, (((float)((int32_t)($nc(tmp)->get(i) & (uint32_t)0x0000FFFF))) * (1.0f / 257.0f) + 0.5f)));
	}
	if (ColorModel::lg16Toog8Map == nullptr) {
		$assignStatic(ColorModel::lg16Toog8Map, $Collections::synchronizedMap($$new($WeakHashMap, 2)));
	}
	$nc(ColorModel::lg16Toog8Map)->put(grayCS, lg16Toog8LUT);
	return lg16Toog8LUT;
}

$bytes* ColorModel::getGray16TosRGB8LUT($ICC_ColorSpace* grayCS) {
	$init(ColorModel);
	$useLocalCurrentObjectStackCache();
	if (isLinearGRAYspace(grayCS)) {
		return getLinearRGB16TosRGB8LUT();
	}
	if (ColorModel::g16Tos8Map != nullptr) {
		$var($bytes, g16Tos8LUT, $cast($bytes, $nc(ColorModel::g16Tos8Map)->get(grayCS)));
		if (g16Tos8LUT != nullptr) {
			return g16Tos8LUT;
		}
	}
	$var($shorts, tmp, $new($shorts, 0x00010000));
	for (int32_t i = 0; i <= 0x0000FFFF; ++i) {
		tmp->set(i, (int16_t)i);
	}
	$var($ColorTransformArray, transformList, $new($ColorTransformArray, 2));
	$var($PCMM, mdl, $CMSManager::getModule());
	$var($ICC_ColorSpace, srgbCS, $cast($ICC_ColorSpace, $ColorSpace::getInstance($ColorSpace::CS_sRGB)));
	transformList->set(0, $($nc(mdl)->createTransform($($nc(grayCS)->getProfile()), $ColorTransform::Any, $ColorTransform::In)));
	transformList->set(1, $(mdl->createTransform($($nc(srgbCS)->getProfile()), $ColorTransform::Any, $ColorTransform::Out)));
	$var($ColorTransform, t, mdl->createTransform(transformList));
	$assign(tmp, $nc(t)->colorConvert(tmp, ($shorts*)nullptr));
	$var($bytes, g16Tos8LUT, $new($bytes, 0x00010000));
	{
		int32_t i = 0;
		int32_t j = 2;
		for (; i <= 0x0000FFFF; ++i, j += 3) {
			g16Tos8LUT->set(i, $cast(int8_t, (((float)((int32_t)($nc(tmp)->get(j) & (uint32_t)0x0000FFFF))) * (1.0f / 257.0f) + 0.5f)));
		}
	}
	if (ColorModel::g16Tos8Map == nullptr) {
		$assignStatic(ColorModel::g16Tos8Map, $Collections::synchronizedMap($$new($WeakHashMap, 2)));
	}
	$nc(ColorModel::g16Tos8Map)->put(grayCS, g16Tos8LUT);
	return g16Tos8LUT;
}

$shorts* ColorModel::getLinearGray16ToOtherGray16LUT($ICC_ColorSpace* grayCS) {
	$init(ColorModel);
	$useLocalCurrentObjectStackCache();
	if (ColorModel::lg16Toog16Map != nullptr) {
		$var($shorts, lg16Toog16LUT, $cast($shorts, $nc(ColorModel::lg16Toog16Map)->get(grayCS)));
		if (lg16Toog16LUT != nullptr) {
			return lg16Toog16LUT;
		}
	}
	$var($shorts, tmp, $new($shorts, 0x00010000));
	for (int32_t i = 0; i <= 0x0000FFFF; ++i) {
		tmp->set(i, (int16_t)i);
	}
	$var($ColorTransformArray, transformList, $new($ColorTransformArray, 2));
	$var($PCMM, mdl, $CMSManager::getModule());
	$var($ICC_ColorSpace, lgCS, $cast($ICC_ColorSpace, $ColorSpace::getInstance($ColorSpace::CS_GRAY)));
	transformList->set(0, $($nc(mdl)->createTransform($($nc(lgCS)->getProfile()), $ColorTransform::Any, $ColorTransform::In)));
	transformList->set(1, $(mdl->createTransform($($nc(grayCS)->getProfile()), $ColorTransform::Any, $ColorTransform::Out)));
	$var($ColorTransform, t, mdl->createTransform(transformList));
	$var($shorts, lg16Toog16LUT, $nc(t)->colorConvert(tmp, ($shorts*)nullptr));
	if (ColorModel::lg16Toog16Map == nullptr) {
		$assignStatic(ColorModel::lg16Toog16Map, $Collections::synchronizedMap($$new($WeakHashMap, 2)));
	}
	$nc(ColorModel::lg16Toog16Map)->put(grayCS, lg16Toog16LUT);
	return lg16Toog16LUT;
}

void clinit$ColorModel($Class* class$) {
	ColorModel::loaded = false;
	{
		ColorModel::loadLibraries();
		ColorModel::initIDs();
	}
	$assignStatic(ColorModel::l8Tos8, nullptr);
	$assignStatic(ColorModel::s8Tol8, nullptr);
	$assignStatic(ColorModel::l16Tos8, nullptr);
	$assignStatic(ColorModel::s8Tol16, nullptr);
	$assignStatic(ColorModel::g8Tos8Map, nullptr);
	$assignStatic(ColorModel::lg16Toog8Map, nullptr);
	$assignStatic(ColorModel::g16Tos8Map, nullptr);
	$assignStatic(ColorModel::lg16Toog16Map, nullptr);
}

ColorModel::ColorModel() {
}

$Class* ColorModel::load$($String* name, bool initialize) {
	$loadClass(ColorModel, name, initialize, &_ColorModel_ClassInfo_, clinit$ColorModel, allocate$ColorModel);
	return class$;
}

$Class* ColorModel::class$ = nullptr;

		} // image
	} // awt
} // java