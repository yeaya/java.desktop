#include <sun/java2d/cmm/lcms/LCMSImageLayout.h>

#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
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
#include <sun/awt/image/ByteComponentRaster.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/image/ShortComponentRaster.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout$1.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout$BandOrder.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout$ImageLayoutException.h>
#include <jcpp.h>

#undef BYTES_SH
#undef CHANNELS_SH
#undef DOSWAP
#undef DT_BYTE
#undef DT_DOUBLE
#undef DT_INT
#undef DT_SHORT
#undef EXTRA_SH
#undef MAX_VALUE
#undef MIN_VALUE
#undef PT_ABGR_8
#undef PT_ARGB_8
#undef PT_BGRA_8
#undef PT_BGR_8
#undef PT_GRAY_16
#undef PT_GRAY_8
#undef PT_RGBA_8
#undef PT_RGB_8
#undef SWAPFIRST
#undef TYPE_3BYTE_BGR
#undef TYPE_4BYTE_ABGR
#undef TYPE_BYTE_GRAY
#undef TYPE_INT_ARGB
#undef TYPE_INT_BGR
#undef TYPE_INT_RGB
#undef TYPE_USHORT_GRAY

using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $ShortComponentRaster = ::sun::awt::image::ShortComponentRaster;
using $LCMSImageLayout$1 = ::sun::java2d::cmm::lcms::LCMSImageLayout$1;
using $LCMSImageLayout$BandOrder = ::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder;
using $LCMSImageLayout$ImageLayoutException = ::sun::java2d::cmm::lcms::LCMSImageLayout$ImageLayoutException;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

$FieldInfo _LCMSImageLayout_FieldInfo_[] = {
	{"SWAPFIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LCMSImageLayout, SWAPFIRST)},
	{"DOSWAP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LCMSImageLayout, DOSWAP)},
	{"PT_RGB_8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LCMSImageLayout, PT_RGB_8)},
	{"PT_GRAY_8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LCMSImageLayout, PT_GRAY_8)},
	{"PT_GRAY_16", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LCMSImageLayout, PT_GRAY_16)},
	{"PT_RGBA_8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LCMSImageLayout, PT_RGBA_8)},
	{"PT_ARGB_8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LCMSImageLayout, PT_ARGB_8)},
	{"PT_BGR_8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LCMSImageLayout, PT_BGR_8)},
	{"PT_ABGR_8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LCMSImageLayout, PT_ABGR_8)},
	{"PT_BGRA_8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LCMSImageLayout, PT_BGRA_8)},
	{"DT_BYTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LCMSImageLayout, DT_BYTE)},
	{"DT_SHORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LCMSImageLayout, DT_SHORT)},
	{"DT_INT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LCMSImageLayout, DT_INT)},
	{"DT_DOUBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LCMSImageLayout, DT_DOUBLE)},
	{"isIntPacked", "Z", nullptr, 0, $field(LCMSImageLayout, isIntPacked)},
	{"pixelType", "I", nullptr, 0, $field(LCMSImageLayout, pixelType)},
	{"dataType", "I", nullptr, 0, $field(LCMSImageLayout, dataType)},
	{"width", "I", nullptr, 0, $field(LCMSImageLayout, width)},
	{"height", "I", nullptr, 0, $field(LCMSImageLayout, height)},
	{"nextRowOffset", "I", nullptr, 0, $field(LCMSImageLayout, nextRowOffset)},
	{"nextPixelOffset", "I", nullptr, $PRIVATE, $field(LCMSImageLayout, nextPixelOffset)},
	{"offset", "I", nullptr, 0, $field(LCMSImageLayout, offset)},
	{"imageAtOnce", "Z", nullptr, $PRIVATE, $field(LCMSImageLayout, imageAtOnce)},
	{"dataArray", "Ljava/lang/Object;", nullptr, 0, $field(LCMSImageLayout, dataArray)},
	{"dataArrayLength", "I", nullptr, $PRIVATE, $field(LCMSImageLayout, dataArrayLength)},
	{}
};

$MethodInfo _LCMSImageLayout_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(LCMSImageLayout::*)(int32_t,int32_t,int32_t)>(&LCMSImageLayout::init$)), "sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException"},
	{"<init>", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(LCMSImageLayout::*)(int32_t,int32_t,int32_t,int32_t)>(&LCMSImageLayout::init$)), "sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException"},
	{"<init>", "([BIII)V", nullptr, $PUBLIC, $method(static_cast<void(LCMSImageLayout::*)($bytes*,int32_t,int32_t,int32_t)>(&LCMSImageLayout::init$)), "sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException"},
	{"<init>", "([SIII)V", nullptr, $PUBLIC, $method(static_cast<void(LCMSImageLayout::*)($shorts*,int32_t,int32_t,int32_t)>(&LCMSImageLayout::init$)), "sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException"},
	{"<init>", "([IIII)V", nullptr, $PUBLIC, $method(static_cast<void(LCMSImageLayout::*)($ints*,int32_t,int32_t,int32_t)>(&LCMSImageLayout::init$)), "sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException"},
	{"<init>", "([DIII)V", nullptr, $PUBLIC, $method(static_cast<void(LCMSImageLayout::*)($doubles*,int32_t,int32_t,int32_t)>(&LCMSImageLayout::init$)), "sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException"},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LCMSImageLayout::*)()>(&LCMSImageLayout::init$))},
	{"BYTES_SH", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&LCMSImageLayout::BYTES_SH))},
	{"CHANNELS_SH", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&LCMSImageLayout::CHANNELS_SH))},
	{"EXTRA_SH", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&LCMSImageLayout::EXTRA_SH))},
	{"createImageLayout", "(Ljava/awt/image/BufferedImage;)Lsun/java2d/cmm/lcms/LCMSImageLayout;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LCMSImageLayout*(*)($BufferedImage*)>(&LCMSImageLayout::createImageLayout)), "sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException"},
	{"createImageLayout", "(Ljava/awt/image/Raster;)Lsun/java2d/cmm/lcms/LCMSImageLayout;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LCMSImageLayout*(*)($Raster*)>(&LCMSImageLayout::createImageLayout))},
	{"getBytesPerPixel", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&LCMSImageLayout::getBytesPerPixel))},
	{"safeAdd", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&LCMSImageLayout::safeAdd)), "sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException"},
	{"safeMult", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&LCMSImageLayout::safeMult)), "sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException"},
	{"verify", "()V", nullptr, $PRIVATE, $method(static_cast<void(LCMSImageLayout::*)()>(&LCMSImageLayout::verify)), "sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException"},
	{}
};

$InnerClassInfo _LCMSImageLayout_InnerClassesInfo_[] = {
	{"sun.java2d.cmm.lcms.LCMSImageLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException", "sun.java2d.cmm.lcms.LCMSImageLayout", "ImageLayoutException", $PUBLIC | $STATIC},
	{"sun.java2d.cmm.lcms.LCMSImageLayout$BandOrder", "sun.java2d.cmm.lcms.LCMSImageLayout", "BandOrder", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LCMSImageLayout_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.cmm.lcms.LCMSImageLayout",
	"java.lang.Object",
	nullptr,
	_LCMSImageLayout_FieldInfo_,
	_LCMSImageLayout_MethodInfo_,
	nullptr,
	nullptr,
	_LCMSImageLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.cmm.lcms.LCMSImageLayout$1,sun.java2d.cmm.lcms.LCMSImageLayout$ImageLayoutException,sun.java2d.cmm.lcms.LCMSImageLayout$BandOrder"
};

$Object* allocate$LCMSImageLayout($Class* clazz) {
	return $of($alloc(LCMSImageLayout));
}

int32_t LCMSImageLayout::PT_RGB_8 = 0;
int32_t LCMSImageLayout::PT_GRAY_8 = 0;
int32_t LCMSImageLayout::PT_GRAY_16 = 0;
int32_t LCMSImageLayout::PT_RGBA_8 = 0;
int32_t LCMSImageLayout::PT_ARGB_8 = 0;
int32_t LCMSImageLayout::PT_BGR_8 = 0;
int32_t LCMSImageLayout::PT_ABGR_8 = 0;
int32_t LCMSImageLayout::PT_BGRA_8 = 0;

int32_t LCMSImageLayout::BYTES_SH(int32_t x) {
	$init(LCMSImageLayout);
	return x;
}

int32_t LCMSImageLayout::EXTRA_SH(int32_t x) {
	$init(LCMSImageLayout);
	return x << 7;
}

int32_t LCMSImageLayout::CHANNELS_SH(int32_t x) {
	$init(LCMSImageLayout);
	return x << 3;
}

void LCMSImageLayout::init$(int32_t np, int32_t pixelType, int32_t pixelSize) {
	this->isIntPacked = false;
	this->imageAtOnce = false;
	this->pixelType = pixelType;
	this->width = np;
	this->height = 1;
	this->nextPixelOffset = pixelSize;
	this->nextRowOffset = safeMult(pixelSize, np);
	this->offset = 0;
}

void LCMSImageLayout::init$(int32_t width, int32_t height, int32_t pixelType, int32_t pixelSize) {
	this->isIntPacked = false;
	this->imageAtOnce = false;
	this->pixelType = pixelType;
	this->width = width;
	this->height = height;
	this->nextPixelOffset = pixelSize;
	this->nextRowOffset = safeMult(pixelSize, width);
	this->offset = 0;
}

void LCMSImageLayout::init$($bytes* data, int32_t np, int32_t pixelType, int32_t pixelSize) {
	LCMSImageLayout::init$(np, pixelType, pixelSize);
	this->dataType = LCMSImageLayout::DT_BYTE;
	$set(this, dataArray, data);
	this->dataArrayLength = $nc(data)->length;
	verify();
}

void LCMSImageLayout::init$($shorts* data, int32_t np, int32_t pixelType, int32_t pixelSize) {
	LCMSImageLayout::init$(np, pixelType, pixelSize);
	this->dataType = LCMSImageLayout::DT_SHORT;
	$set(this, dataArray, data);
	this->dataArrayLength = 2 * $nc(data)->length;
	verify();
}

void LCMSImageLayout::init$($ints* data, int32_t np, int32_t pixelType, int32_t pixelSize) {
	LCMSImageLayout::init$(np, pixelType, pixelSize);
	this->dataType = LCMSImageLayout::DT_INT;
	$set(this, dataArray, data);
	this->dataArrayLength = 4 * $nc(data)->length;
	verify();
}

void LCMSImageLayout::init$($doubles* data, int32_t np, int32_t pixelType, int32_t pixelSize) {
	LCMSImageLayout::init$(np, pixelType, pixelSize);
	this->dataType = LCMSImageLayout::DT_DOUBLE;
	$set(this, dataArray, data);
	this->dataArrayLength = 8 * $nc(data)->length;
	verify();
}

void LCMSImageLayout::init$() {
	this->isIntPacked = false;
	this->imageAtOnce = false;
}

LCMSImageLayout* LCMSImageLayout::createImageLayout($BufferedImage* image) {
	$init(LCMSImageLayout);
	$var(LCMSImageLayout, l, $new(LCMSImageLayout));
	{
		$var($ColorModel, cm, nullptr)
		switch ($nc(image)->getType()) {
		case $BufferedImage::TYPE_INT_RGB:
			{
				l->pixelType = LCMSImageLayout::PT_ARGB_8;
				l->isIntPacked = true;
				break;
			}
		case $BufferedImage::TYPE_INT_ARGB:
			{
				l->pixelType = LCMSImageLayout::PT_ARGB_8;
				l->isIntPacked = true;
				break;
			}
		case $BufferedImage::TYPE_INT_BGR:
			{
				l->pixelType = LCMSImageLayout::PT_ABGR_8;
				l->isIntPacked = true;
				break;
			}
		case $BufferedImage::TYPE_3BYTE_BGR:
			{
				l->pixelType = LCMSImageLayout::PT_BGR_8;
				break;
			}
		case $BufferedImage::TYPE_4BYTE_ABGR:
			{
				l->pixelType = LCMSImageLayout::PT_ABGR_8;
				break;
			}
		case $BufferedImage::TYPE_BYTE_GRAY:
			{
				l->pixelType = LCMSImageLayout::PT_GRAY_8;
				break;
			}
		case $BufferedImage::TYPE_USHORT_GRAY:
			{
				l->pixelType = LCMSImageLayout::PT_GRAY_16;
				break;
			}
		default:
			{
				$assign(cm, image->getColorModel());
				if (!$nc(cm)->hasAlpha() && $instanceOf($ComponentColorModel, cm)) {
					$var($ComponentColorModel, ccm, $cast($ComponentColorModel, cm));
					$var($ints, cs, ccm->getComponentSize());
					{
						$var($ints, arr$, cs);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							int32_t s = arr$->get(i$);
							{
								if (s != 8) {
									return nullptr;
								}
							}
						}
					}
					return createImageLayout($(static_cast<$Raster*>(image->getRaster())));
				}
				return nullptr;
			}
		}
	}
	l->width = image->getWidth();
	l->height = image->getHeight();
	switch (image->getType()) {
	case $BufferedImage::TYPE_INT_RGB:
		{}
	case $BufferedImage::TYPE_INT_ARGB:
		{}
	case $BufferedImage::TYPE_INT_BGR:
		{
			do {
				$var($IntegerComponentRaster, intRaster, $cast($IntegerComponentRaster, image->getRaster()));
				l->nextRowOffset = safeMult(4, $nc(intRaster)->getScanlineStride());
				l->nextPixelOffset = safeMult(4, $nc(intRaster)->getPixelStride());
				l->offset = safeMult(4, $nc(intRaster)->getDataOffset(0));
				$set(l, dataArray, $nc(intRaster)->getDataStorage());
				l->dataArrayLength = 4 * $nc($(intRaster->getDataStorage()))->length;
				l->dataType = LCMSImageLayout::DT_INT;
				if (l->nextRowOffset == l->width * 4 * intRaster->getPixelStride()) {
					l->imageAtOnce = true;
				}
			} while (false);
			break;
		}
	case $BufferedImage::TYPE_3BYTE_BGR:
		{}
	case $BufferedImage::TYPE_4BYTE_ABGR:
		{
			do {
				$var($ByteComponentRaster, byteRaster, $cast($ByteComponentRaster, image->getRaster()));
				l->nextRowOffset = $nc(byteRaster)->getScanlineStride();
				l->nextPixelOffset = byteRaster->getPixelStride();
				int32_t firstBand = $nc($(image->getSampleModel()))->getNumBands() - 1;
				l->offset = byteRaster->getDataOffset(firstBand);
				$set(l, dataArray, byteRaster->getDataStorage());
				l->dataArrayLength = $nc($(byteRaster->getDataStorage()))->length;
				l->dataType = LCMSImageLayout::DT_BYTE;
				if (l->nextRowOffset == l->width * byteRaster->getPixelStride()) {
					l->imageAtOnce = true;
				}
			} while (false);
			break;
		}
	case $BufferedImage::TYPE_BYTE_GRAY:
		{
			do {
				$var($ByteComponentRaster, byteRaster, $cast($ByteComponentRaster, image->getRaster()));
				l->nextRowOffset = $nc(byteRaster)->getScanlineStride();
				l->nextPixelOffset = byteRaster->getPixelStride();
				l->dataArrayLength = $nc($(byteRaster->getDataStorage()))->length;
				l->offset = byteRaster->getDataOffset(0);
				$set(l, dataArray, byteRaster->getDataStorage());
				l->dataType = LCMSImageLayout::DT_BYTE;
				if (l->nextRowOffset == l->width * byteRaster->getPixelStride()) {
					l->imageAtOnce = true;
				}
			} while (false);
			break;
		}
	case $BufferedImage::TYPE_USHORT_GRAY:
		{
			do {
				$var($ShortComponentRaster, shortRaster, $cast($ShortComponentRaster, image->getRaster()));
				l->nextRowOffset = safeMult(2, $nc(shortRaster)->getScanlineStride());
				l->nextPixelOffset = safeMult(2, $nc(shortRaster)->getPixelStride());
				l->offset = safeMult(2, $nc(shortRaster)->getDataOffset(0));
				$set(l, dataArray, $nc(shortRaster)->getDataStorage());
				l->dataArrayLength = 2 * $nc($(shortRaster->getDataStorage()))->length;
				l->dataType = LCMSImageLayout::DT_SHORT;
				if (l->nextRowOffset == l->width * 2 * shortRaster->getPixelStride()) {
					l->imageAtOnce = true;
				}
			} while (false);
			break;
		}
	default:
		{
			return nullptr;
		}
	}
	l->verify();
	return l;
}

void LCMSImageLayout::verify() {
	if (this->offset < 0 || this->offset >= this->dataArrayLength) {
		$throwNew($LCMSImageLayout$ImageLayoutException, "Invalid image layout"_s);
	}
	if (this->nextPixelOffset != getBytesPerPixel(this->pixelType)) {
		$throwNew($LCMSImageLayout$ImageLayoutException, "Invalid image layout"_s);
	}
	int32_t lastScanOffset = safeMult(this->nextRowOffset, (this->height - 1));
	int32_t lastPixelOffset = safeMult(this->nextPixelOffset, (this->width - 1));
	lastPixelOffset = safeAdd(lastPixelOffset, lastScanOffset);
	int32_t off = safeAdd(this->offset, lastPixelOffset);
	if (off < 0 || off >= this->dataArrayLength) {
		$throwNew($LCMSImageLayout$ImageLayoutException, "Invalid image layout"_s);
	}
}

int32_t LCMSImageLayout::safeAdd(int32_t a, int32_t b) {
	$init(LCMSImageLayout);
	int64_t res = a;
	res += b;
	if (res < $Integer::MIN_VALUE || res > $Integer::MAX_VALUE) {
		$throwNew($LCMSImageLayout$ImageLayoutException, "Invalid image layout"_s);
	}
	return (int32_t)res;
}

int32_t LCMSImageLayout::safeMult(int32_t a, int32_t b) {
	$init(LCMSImageLayout);
	int64_t res = a;
	res *= b;
	if (res < $Integer::MIN_VALUE || res > $Integer::MAX_VALUE) {
		$throwNew($LCMSImageLayout$ImageLayoutException, "Invalid image layout"_s);
	}
	return (int32_t)res;
}

LCMSImageLayout* LCMSImageLayout::createImageLayout($Raster* r) {
	$init(LCMSImageLayout);
	$var(LCMSImageLayout, l, $new(LCMSImageLayout));
	if ($instanceOf($ByteComponentRaster, r) && $instanceOf($ComponentSampleModel, $($nc(r)->getSampleModel()))) {
		$var($ByteComponentRaster, br, $cast($ByteComponentRaster, r));
		$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, r->getSampleModel()));
		int32_t var$0 = CHANNELS_SH(br->getNumBands());
		l->pixelType = var$0 | BYTES_SH(1);
		$var($ints, bandOffsets, $nc(csm)->getBandOffsets());
		$LCMSImageLayout$BandOrder* order = $LCMSImageLayout$BandOrder::getBandOrder(bandOffsets);
		int32_t firstBand = 0;
		$init($LCMSImageLayout$1);
		switch ($nc($LCMSImageLayout$1::$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder)->get($nc((order))->ordinal())) {
		case 3:
			{
				l->pixelType |= LCMSImageLayout::DOSWAP;
				firstBand = csm->getNumBands() - 1;
				break;
			}
		case 2:
			{
				break;
			}
		default:
			{
				return nullptr;
			}
		}
		l->nextRowOffset = br->getScanlineStride();
		l->nextPixelOffset = br->getPixelStride();
		l->offset = br->getDataOffset(firstBand);
		$set(l, dataArray, br->getDataStorage());
		l->dataType = LCMSImageLayout::DT_BYTE;
		l->width = br->getWidth();
		l->height = br->getHeight();
		if (l->nextRowOffset == l->width * br->getPixelStride()) {
			l->imageAtOnce = true;
		}
		return l;
	}
	return nullptr;
}

int32_t LCMSImageLayout::getBytesPerPixel(int32_t pixelType) {
	$init(LCMSImageLayout);
	int32_t bytesPerSample = ((int32_t)(7 & (uint32_t)pixelType));
	int32_t colorSamplesPerPixel = (int32_t)(15 & (uint32_t)(pixelType >> 3));
	int32_t extraSamplesPerPixel = (int32_t)(7 & (uint32_t)(pixelType >> 7));
	return bytesPerSample * (colorSamplesPerPixel + extraSamplesPerPixel);
}

void clinit$LCMSImageLayout($Class* class$) {
	int32_t var$0 = LCMSImageLayout::CHANNELS_SH(3);
	LCMSImageLayout::PT_RGB_8 = var$0 | LCMSImageLayout::BYTES_SH(1);
	int32_t var$1 = LCMSImageLayout::CHANNELS_SH(1);
	LCMSImageLayout::PT_GRAY_8 = var$1 | LCMSImageLayout::BYTES_SH(1);
	int32_t var$2 = LCMSImageLayout::CHANNELS_SH(1);
	LCMSImageLayout::PT_GRAY_16 = var$2 | LCMSImageLayout::BYTES_SH(2);
	int32_t var$4 = LCMSImageLayout::EXTRA_SH(1);
	int32_t var$3 = var$4 | LCMSImageLayout::CHANNELS_SH(3);
	LCMSImageLayout::PT_RGBA_8 = var$3 | LCMSImageLayout::BYTES_SH(1);
	int32_t var$6 = LCMSImageLayout::EXTRA_SH(1);
	int32_t var$5 = var$6 | LCMSImageLayout::CHANNELS_SH(3);
	LCMSImageLayout::PT_ARGB_8 = (var$5 | LCMSImageLayout::BYTES_SH(1)) | LCMSImageLayout::SWAPFIRST;
	int32_t var$7 = LCMSImageLayout::DOSWAP | LCMSImageLayout::CHANNELS_SH(3);
	LCMSImageLayout::PT_BGR_8 = var$7 | LCMSImageLayout::BYTES_SH(1);
	int32_t var$9 = LCMSImageLayout::DOSWAP | LCMSImageLayout::EXTRA_SH(1);
	int32_t var$8 = var$9 | LCMSImageLayout::CHANNELS_SH(3);
	LCMSImageLayout::PT_ABGR_8 = var$8 | LCMSImageLayout::BYTES_SH(1);
	int32_t var$11 = LCMSImageLayout::EXTRA_SH(1);
	int32_t var$10 = var$11 | LCMSImageLayout::CHANNELS_SH(3);
	LCMSImageLayout::PT_BGRA_8 = ((var$10 | LCMSImageLayout::BYTES_SH(1)) | LCMSImageLayout::DOSWAP) | LCMSImageLayout::SWAPFIRST;
}

LCMSImageLayout::LCMSImageLayout() {
}

$Class* LCMSImageLayout::load$($String* name, bool initialize) {
	$loadClass(LCMSImageLayout, name, initialize, &_LCMSImageLayout_ClassInfo_, clinit$LCMSImageLayout, allocate$LCMSImageLayout);
	return class$;
}

$Class* LCMSImageLayout::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun