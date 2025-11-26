#include <java/awt/image/IndexColorModel.h>

#include <java/awt/Point.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/math/BigInteger.h>
#include <java/util/Arrays.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/BufImgSurfaceData$ICMColorData.h>
#include <jcpp.h>

#undef BITMASK
#undef CACHESIZE
#undef MAX_VALUE
#undef OPAQUE
#undef TRANSLUCENT
#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_USHORT

using $Point = ::java::awt::Point;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BigInteger = ::java::math::BigInteger;
using $Arrays = ::java::util::Arrays;
using $Hashtable = ::java::util::Hashtable;
using $BufImgSurfaceData$ICMColorData = ::sun::awt::image::BufImgSurfaceData$ICMColorData;

namespace java {
	namespace awt {
		namespace image {

$NamedAttribute IndexColorModel_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _IndexColorModel_MethodAnnotations_finalize13[] = {
	{"Ljava/lang/Deprecated;", IndexColorModel_Attribute_var$0},
	{}
};

$FieldInfo _IndexColorModel_FieldInfo_[] = {
	{"rgb", "[I", nullptr, $PRIVATE, $field(IndexColorModel, rgb)},
	{"map_size", "I", nullptr, $PRIVATE, $field(IndexColorModel, map_size)},
	{"pixel_mask", "I", nullptr, $PRIVATE, $field(IndexColorModel, pixel_mask)},
	{"transparent_index", "I", nullptr, $PRIVATE, $field(IndexColorModel, transparent_index)},
	{"allgrayopaque", "Z", nullptr, $PRIVATE, $field(IndexColorModel, allgrayopaque)},
	{"validBits", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(IndexColorModel, validBits)},
	{"hashCode", "I", nullptr, $PRIVATE | $VOLATILE, $field(IndexColorModel, hashCode$)},
	{"colorData", "Lsun/awt/image/BufImgSurfaceData$ICMColorData;", nullptr, $PRIVATE, $field(IndexColorModel, colorData)},
	{"opaqueBits", "[I", nullptr, $PRIVATE | $STATIC, $staticField(IndexColorModel, opaqueBits)},
	{"alphaBits", "[I", nullptr, $PRIVATE | $STATIC, $staticField(IndexColorModel, alphaBits)},
	{"CACHESIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IndexColorModel, CACHESIZE)},
	{"lookupcache", "[I", nullptr, $PRIVATE, $field(IndexColorModel, lookupcache)},
	{}
};

$MethodInfo _IndexColorModel_MethodInfo_[] = {
	{"<init>", "(II[B[B[B)V", nullptr, $PUBLIC, $method(static_cast<void(IndexColorModel::*)(int32_t,int32_t,$bytes*,$bytes*,$bytes*)>(&IndexColorModel::init$))},
	{"<init>", "(II[B[B[BI)V", nullptr, $PUBLIC, $method(static_cast<void(IndexColorModel::*)(int32_t,int32_t,$bytes*,$bytes*,$bytes*,int32_t)>(&IndexColorModel::init$))},
	{"<init>", "(II[B[B[B[B)V", nullptr, $PUBLIC, $method(static_cast<void(IndexColorModel::*)(int32_t,int32_t,$bytes*,$bytes*,$bytes*,$bytes*)>(&IndexColorModel::init$))},
	{"<init>", "(II[BIZ)V", nullptr, $PUBLIC, $method(static_cast<void(IndexColorModel::*)(int32_t,int32_t,$bytes*,int32_t,bool)>(&IndexColorModel::init$))},
	{"<init>", "(II[BIZI)V", nullptr, $PUBLIC, $method(static_cast<void(IndexColorModel::*)(int32_t,int32_t,$bytes*,int32_t,bool,int32_t)>(&IndexColorModel::init$))},
	{"<init>", "(II[IIZII)V", nullptr, $PUBLIC, $method(static_cast<void(IndexColorModel::*)(int32_t,int32_t,$ints*,int32_t,bool,int32_t,int32_t)>(&IndexColorModel::init$))},
	{"<init>", "(II[IIILjava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(IndexColorModel::*)(int32_t,int32_t,$ints*,int32_t,int32_t,$BigInteger*)>(&IndexColorModel::init$))},
	{"calcRealMapSize", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(IndexColorModel::*)(int32_t,int32_t)>(&IndexColorModel::calcRealMapSize))},
	{"calculatePixelMask", "()V", nullptr, $PRIVATE, $method(static_cast<void(IndexColorModel::*)()>(&IndexColorModel::calculatePixelMask))},
	{"convertToIntDiscrete", "(Ljava/awt/image/Raster;Z)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleSampleModel", "(II)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"finalize", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _IndexColorModel_MethodAnnotations_finalize13},
	{"getAllValid", "()Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<$BigInteger*(IndexColorModel::*)()>(&IndexColorModel::getAllValid))},
	{"getAlpha", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getAlphas", "([B)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(IndexColorModel::*)($bytes*)>(&IndexColorModel::getAlphas))},
	{"getBlue", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getBlues", "([B)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(IndexColorModel::*)($bytes*)>(&IndexColorModel::getBlues))},
	{"getComponentSize", "()[I", nullptr, $PUBLIC},
	{"getComponents", "(I[II)[I", nullptr, $PUBLIC},
	{"getComponents", "(Ljava/lang/Object;[II)[I", nullptr, $PUBLIC},
	{"getDataElement", "([II)I", nullptr, $PUBLIC},
	{"getDataElements", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDataElements", "([IILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getGreen", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getGreens", "([B)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(IndexColorModel::*)($bytes*)>(&IndexColorModel::getGreens))},
	{"getMapSize", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(IndexColorModel::*)()>(&IndexColorModel::getMapSize))},
	{"getRGB", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getRGBs", "([I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(IndexColorModel::*)($ints*)>(&IndexColorModel::getRGBs))},
	{"getRed", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getReds", "([B)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(IndexColorModel::*)($bytes*)>(&IndexColorModel::getReds))},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{"getTransparentPixel", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(IndexColorModel::*)()>(&IndexColorModel::getTransparentPixel))},
	{"getValidPixels", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&IndexColorModel::initIDs))},
	{"installpixel", "(Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(IndexColorModel::*)(Object$*,int32_t)>(&IndexColorModel::installpixel))},
	{"isCompatibleRaster", "(Ljava/awt/image/Raster;)Z", nullptr, $PUBLIC},
	{"isCompatibleSampleModel", "(Ljava/awt/image/SampleModel;)Z", nullptr, $PUBLIC},
	{"isValid", "(I)Z", nullptr, $PUBLIC},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{"setRGBs", "(I[B[B[B[B)V", nullptr, $PRIVATE, $method(static_cast<void(IndexColorModel::*)(int32_t,$bytes*,$bytes*,$bytes*,$bytes*)>(&IndexColorModel::setRGBs))},
	{"setRGBs", "(I[IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(IndexColorModel::*)(int32_t,$ints*,int32_t,bool)>(&IndexColorModel::setRGBs))},
	{"setTransparency", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(IndexColorModel::*)(int32_t)>(&IndexColorModel::setTransparency))},
	{"setTransparentPixel", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(IndexColorModel::*)(int32_t)>(&IndexColorModel::setTransparentPixel))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 36

$ClassInfo _IndexColorModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.IndexColorModel",
	"java.awt.image.ColorModel",
	nullptr,
	_IndexColorModel_FieldInfo_,
	_IndexColorModel_MethodInfo_
};

$Object* allocate$IndexColorModel($Class* clazz) {
	return $of($alloc(IndexColorModel));
}

$ints* IndexColorModel::opaqueBits = nullptr;
$ints* IndexColorModel::alphaBits = nullptr;

void IndexColorModel::initIDs() {
	$init(IndexColorModel);
	$prepareNativeStatic(IndexColorModel, initIDs, void);
	$invokeNativeStatic(IndexColorModel, initIDs);
	$finishNativeStatic();
}

void IndexColorModel::init$(int32_t bits, int32_t size, $bytes* r, $bytes* g, $bytes* b) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = bits;
	$var($ints, var$1, IndexColorModel::opaqueBits);
	$var($ColorSpace, var$2, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	int32_t var$3 = $Transparency::OPAQUE;
	$ColorModel::init$(var$0, var$1, var$2, false, false, var$3, $ColorModel::getDefaultTransferType(bits));
	this->transparent_index = -1;
	$set(this, colorData, nullptr);
	$set(this, lookupcache, $new($ints, IndexColorModel::CACHESIZE));
	if (bits < 1 || bits > 16) {
		$throwNew($IllegalArgumentException, "Number of bits must be between 1 and 16."_s);
	}
	setRGBs(size, r, g, b, nullptr);
	calculatePixelMask();
}

void IndexColorModel::init$(int32_t bits, int32_t size, $bytes* r, $bytes* g, $bytes* b, int32_t trans) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = bits;
	$var($ints, var$1, IndexColorModel::opaqueBits);
	$var($ColorSpace, var$2, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	int32_t var$3 = $Transparency::OPAQUE;
	$ColorModel::init$(var$0, var$1, var$2, false, false, var$3, $ColorModel::getDefaultTransferType(bits));
	this->transparent_index = -1;
	$set(this, colorData, nullptr);
	$set(this, lookupcache, $new($ints, IndexColorModel::CACHESIZE));
	if (bits < 1 || bits > 16) {
		$throwNew($IllegalArgumentException, "Number of bits must be between 1 and 16."_s);
	}
	setRGBs(size, r, g, b, nullptr);
	setTransparentPixel(trans);
	calculatePixelMask();
}

void IndexColorModel::init$(int32_t bits, int32_t size, $bytes* r, $bytes* g, $bytes* b, $bytes* a) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = bits;
	$var($ints, var$1, IndexColorModel::alphaBits);
	$var($ColorSpace, var$2, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	int32_t var$3 = $Transparency::TRANSLUCENT;
	$ColorModel::init$(var$0, var$1, var$2, true, false, var$3, $ColorModel::getDefaultTransferType(bits));
	this->transparent_index = -1;
	$set(this, colorData, nullptr);
	$set(this, lookupcache, $new($ints, IndexColorModel::CACHESIZE));
	if (bits < 1 || bits > 16) {
		$throwNew($IllegalArgumentException, "Number of bits must be between 1 and 16."_s);
	}
	setRGBs(size, r, g, b, a);
	calculatePixelMask();
}

void IndexColorModel::init$(int32_t bits, int32_t size, $bytes* cmap, int32_t start, bool hasalpha) {
	IndexColorModel::init$(bits, size, cmap, start, hasalpha, -1);
	if (bits < 1 || bits > 16) {
		$throwNew($IllegalArgumentException, "Number of bits must be between 1 and 16."_s);
	}
}

void IndexColorModel::init$(int32_t bits, int32_t size, $bytes* cmap, int32_t start, bool hasalpha, int32_t trans) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = bits;
	$var($ints, var$1, IndexColorModel::opaqueBits);
	$var($ColorSpace, var$2, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	int32_t var$3 = $Transparency::OPAQUE;
	$ColorModel::init$(var$0, var$1, var$2, false, false, var$3, $ColorModel::getDefaultTransferType(bits));
	this->transparent_index = -1;
	$set(this, colorData, nullptr);
	$set(this, lookupcache, $new($ints, IndexColorModel::CACHESIZE));
	if (bits < 1 || bits > 16) {
		$throwNew($IllegalArgumentException, "Number of bits must be between 1 and 16."_s);
	}
	if (size < 1) {
		$throwNew($IllegalArgumentException, $$str({"Map size ("_s, $$str(size), ") must be >= 1"_s}));
	}
	this->map_size = size;
	$set(this, rgb, $new($ints, calcRealMapSize(bits, size)));
	int32_t j = start;
	int32_t alpha = 255;
	bool allgray = true;
	int32_t transparency = $Transparency::OPAQUE;
	for (int32_t i = 0; i < size; ++i) {
		int32_t r = (int32_t)($nc(cmap)->get(j++) & (uint32_t)255);
		int32_t g = (int32_t)(cmap->get(j++) & (uint32_t)255);
		int32_t b = (int32_t)(cmap->get(j++) & (uint32_t)255);
		allgray = allgray && (r == g) && (g == b);
		if (hasalpha) {
			alpha = (int32_t)(cmap->get(j++) & (uint32_t)255);
			if (alpha != 255) {
				if (alpha == 0) {
					if (transparency == $Transparency::OPAQUE) {
						transparency = $Transparency::BITMASK;
					}
					if (this->transparent_index < 0) {
						this->transparent_index = i;
					}
				} else {
					transparency = $Transparency::TRANSLUCENT;
				}
				allgray = false;
			}
		}
		$nc(this->rgb)->set(i, (((alpha << 24) | (r << 16)) | (g << 8)) | b);
	}
	this->allgrayopaque = allgray;
	setTransparency(transparency);
	setTransparentPixel(trans);
	calculatePixelMask();
}

void IndexColorModel::init$(int32_t bits, int32_t size, $ints* cmap, int32_t start, bool hasalpha, int32_t trans, int32_t transferType) {
	$useLocalCurrentObjectStackCache();
	$ColorModel::init$(bits, IndexColorModel::opaqueBits, $($ColorSpace::getInstance($ColorSpace::CS_sRGB)), false, false, $Transparency::OPAQUE, transferType);
	this->transparent_index = -1;
	$set(this, colorData, nullptr);
	$set(this, lookupcache, $new($ints, IndexColorModel::CACHESIZE));
	if (bits < 1 || bits > 16) {
		$throwNew($IllegalArgumentException, "Number of bits must be between 1 and 16."_s);
	}
	if (size < 1) {
		$throwNew($IllegalArgumentException, $$str({"Map size ("_s, $$str(size), ") must be >= 1"_s}));
	}
	if ((transferType != $DataBuffer::TYPE_BYTE) && (transferType != $DataBuffer::TYPE_USHORT)) {
		$throwNew($IllegalArgumentException, "transferType must be eitherDataBuffer.TYPE_BYTE or DataBuffer.TYPE_USHORT"_s);
	}
	setRGBs(size, cmap, start, hasalpha);
	setTransparentPixel(trans);
	calculatePixelMask();
}

void IndexColorModel::init$(int32_t bits, int32_t size, $ints* cmap, int32_t start, int32_t transferType, $BigInteger* validBits) {
	$useLocalCurrentObjectStackCache();
	$ColorModel::init$(bits, IndexColorModel::alphaBits, $($ColorSpace::getInstance($ColorSpace::CS_sRGB)), true, false, $Transparency::TRANSLUCENT, transferType);
	this->transparent_index = -1;
	$set(this, colorData, nullptr);
	$set(this, lookupcache, $new($ints, IndexColorModel::CACHESIZE));
	if (bits < 1 || bits > 16) {
		$throwNew($IllegalArgumentException, "Number of bits must be between 1 and 16."_s);
	}
	if (size < 1) {
		$throwNew($IllegalArgumentException, $$str({"Map size ("_s, $$str(size), ") must be >= 1"_s}));
	}
	if ((transferType != $DataBuffer::TYPE_BYTE) && (transferType != $DataBuffer::TYPE_USHORT)) {
		$throwNew($IllegalArgumentException, "transferType must be eitherDataBuffer.TYPE_BYTE or DataBuffer.TYPE_USHORT"_s);
	}
	if (validBits != nullptr) {
		for (int32_t i = 0; i < size; ++i) {
			if (!validBits->testBit(i)) {
				$set(this, validBits, validBits);
				break;
			}
		}
	}
	setRGBs(size, cmap, start, true);
	calculatePixelMask();
}

void IndexColorModel::setRGBs(int32_t size, $bytes* r, $bytes* g, $bytes* b, $bytes* a) {
	$useLocalCurrentObjectStackCache();
	if (size < 1) {
		$throwNew($IllegalArgumentException, $$str({"Map size ("_s, $$str(size), ") must be >= 1"_s}));
	}
	this->map_size = size;
	$set(this, rgb, $new($ints, calcRealMapSize(this->pixel_bits, size)));
	int32_t alpha = 255;
	int32_t transparency = $Transparency::OPAQUE;
	bool allgray = true;
	for (int32_t i = 0; i < size; ++i) {
		int32_t rc = (int32_t)($nc(r)->get(i) & (uint32_t)255);
		int32_t gc = (int32_t)($nc(g)->get(i) & (uint32_t)255);
		int32_t bc = (int32_t)($nc(b)->get(i) & (uint32_t)255);
		allgray = allgray && (rc == gc) && (gc == bc);
		if (a != nullptr) {
			alpha = (int32_t)(a->get(i) & (uint32_t)255);
			if (alpha != 255) {
				if (alpha == 0) {
					if (transparency == $Transparency::OPAQUE) {
						transparency = $Transparency::BITMASK;
					}
					if (this->transparent_index < 0) {
						this->transparent_index = i;
					}
				} else {
					transparency = $Transparency::TRANSLUCENT;
				}
				allgray = false;
			}
		}
		$nc(this->rgb)->set(i, (((alpha << 24) | (rc << 16)) | (gc << 8)) | bc);
	}
	this->allgrayopaque = allgray;
	setTransparency(transparency);
}

void IndexColorModel::setRGBs(int32_t size, $ints* cmap, int32_t start, bool hasalpha) {
	this->map_size = size;
	$set(this, rgb, $new($ints, calcRealMapSize(this->pixel_bits, size)));
	int32_t j = start;
	int32_t transparency = $Transparency::OPAQUE;
	bool allgray = true;
	$var($BigInteger, validBits, this->validBits);
	for (int32_t i = 0; i < size; ++i, ++j) {
		if (validBits != nullptr && !validBits->testBit(i)) {
			continue;
		}
		int32_t cmaprgb = $nc(cmap)->get(j);
		int32_t r = (int32_t)((cmaprgb >> 16) & (uint32_t)255);
		int32_t g = (int32_t)((cmaprgb >> 8) & (uint32_t)255);
		int32_t b = (int32_t)((cmaprgb) & (uint32_t)255);
		allgray = allgray && (r == g) && (g == b);
		if (hasalpha) {
			int32_t alpha = (int32_t)((uint32_t)cmaprgb >> 24);
			if (alpha != 255) {
				if (alpha == 0) {
					if (transparency == $Transparency::OPAQUE) {
						transparency = $Transparency::BITMASK;
					}
					if (this->transparent_index < 0) {
						this->transparent_index = i;
					}
				} else {
					transparency = $Transparency::TRANSLUCENT;
				}
				allgray = false;
			}
		} else {
			cmaprgb |= (int32_t)0xFF000000;
		}
		$nc(this->rgb)->set(i, cmaprgb);
	}
	this->allgrayopaque = allgray;
	setTransparency(transparency);
}

int32_t IndexColorModel::calcRealMapSize(int32_t bits, int32_t size) {
	int32_t newSize = $Math::max($sl(1, bits), size);
	return $Math::max(newSize, 256);
}

$BigInteger* IndexColorModel::getAllValid() {
	int32_t numbytes = (this->map_size + 7) / 8;
	$var($bytes, valid, $new($bytes, numbytes));
	$Arrays::fill(valid, (int8_t)255);
	valid->set(0, (int8_t)($usr(255, numbytes * 8 - this->map_size)));
	return $new($BigInteger, 1, valid);
}

int32_t IndexColorModel::getTransparency() {
	return this->transparency;
}

$ints* IndexColorModel::getComponentSize() {
	if (this->nBits == nullptr) {
		if (this->supportsAlpha) {
			$set(this, nBits, $new($ints, 4));
			$nc(this->nBits)->set(3, 8);
		} else {
			$set(this, nBits, $new($ints, 3));
		}
		$nc(this->nBits)->set(0, $nc(this->nBits)->set(1, $nc(this->nBits)->set(2, 8)));
	}
	return $cast($ints, $nc(this->nBits)->clone());
}

int32_t IndexColorModel::getMapSize() {
	return this->map_size;
}

int32_t IndexColorModel::getTransparentPixel() {
	return this->transparent_index;
}

void IndexColorModel::getReds($bytes* r) {
	for (int32_t i = 0; i < this->map_size; ++i) {
		$nc(r)->set(i, (int8_t)($nc(this->rgb)->get(i) >> 16));
	}
}

void IndexColorModel::getGreens($bytes* g) {
	for (int32_t i = 0; i < this->map_size; ++i) {
		$nc(g)->set(i, (int8_t)($nc(this->rgb)->get(i) >> 8));
	}
}

void IndexColorModel::getBlues($bytes* b) {
	for (int32_t i = 0; i < this->map_size; ++i) {
		$nc(b)->set(i, (int8_t)$nc(this->rgb)->get(i));
	}
}

void IndexColorModel::getAlphas($bytes* a) {
	for (int32_t i = 0; i < this->map_size; ++i) {
		$nc(a)->set(i, (int8_t)($nc(this->rgb)->get(i) >> 24));
	}
}

void IndexColorModel::getRGBs($ints* rgb) {
	$System::arraycopy(this->rgb, 0, rgb, 0, this->map_size);
}

void IndexColorModel::setTransparentPixel(int32_t trans) {
	if (trans >= 0 && trans < this->map_size) {
		(*$nc(this->rgb))[trans] &= (uint32_t)0x00FFFFFF;
		this->transparent_index = trans;
		this->allgrayopaque = false;
		if (this->transparency == $Transparency::OPAQUE) {
			setTransparency($Transparency::BITMASK);
		}
	}
}

void IndexColorModel::setTransparency(int32_t transparency) {
	if (this->transparency != transparency) {
		this->transparency = transparency;
		if (transparency == $Transparency::OPAQUE) {
			this->supportsAlpha = false;
			this->numComponents = 3;
			$set(this, nBits, IndexColorModel::opaqueBits);
		} else {
			this->supportsAlpha = true;
			this->numComponents = 4;
			$set(this, nBits, IndexColorModel::alphaBits);
		}
	}
}

void IndexColorModel::calculatePixelMask() {
	int32_t maskbits = this->pixel_bits;
	if (maskbits == 3) {
		maskbits = 4;
	} else if (maskbits > 4 && maskbits < 8) {
		maskbits = 8;
	}
	this->pixel_mask = ($sl(1, maskbits)) - 1;
}

int32_t IndexColorModel::getRed(int32_t pixel) {
	return (int32_t)(($nc(this->rgb)->get((int32_t)(pixel & (uint32_t)this->pixel_mask)) >> 16) & (uint32_t)255);
}

int32_t IndexColorModel::getGreen(int32_t pixel) {
	return (int32_t)(($nc(this->rgb)->get((int32_t)(pixel & (uint32_t)this->pixel_mask)) >> 8) & (uint32_t)255);
}

int32_t IndexColorModel::getBlue(int32_t pixel) {
	return (int32_t)($nc(this->rgb)->get((int32_t)(pixel & (uint32_t)this->pixel_mask)) & (uint32_t)255);
}

int32_t IndexColorModel::getAlpha(int32_t pixel) {
	return (int32_t)(($nc(this->rgb)->get((int32_t)(pixel & (uint32_t)this->pixel_mask)) >> 24) & (uint32_t)255);
}

int32_t IndexColorModel::getRGB(int32_t pixel) {
	return $nc(this->rgb)->get((int32_t)(pixel & (uint32_t)this->pixel_mask));
}

$Object* IndexColorModel::getDataElements(int32_t rgb, Object$* pixel) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		int32_t red = (int32_t)((rgb >> 16) & (uint32_t)255);
		int32_t green = (int32_t)((rgb >> 8) & (uint32_t)255);
		int32_t blue = (int32_t)(rgb & (uint32_t)255);
		int32_t alpha = ((int32_t)((uint32_t)rgb >> 24));
		int32_t pix = 0;
		for (int32_t i = IndexColorModel::CACHESIZE - 2; i >= 0; i -= 2) {
			if ((pix = $nc(this->lookupcache)->get(i)) == 0) {
				break;
			}
			if (rgb == $nc(this->lookupcache)->get(i + 1)) {
				return $of(installpixel(pixel, ~pix));
			}
		}
		if (this->allgrayopaque) {
			int32_t minDist = 256;
			int32_t d = 0;
			int32_t gray = (red * 77 + green * 150 + blue * 29 + 128) / 256;
			for (int32_t i = 0; i < this->map_size; ++i) {
				if ($nc(this->rgb)->get(i) == 0) {
					continue;
				}
				d = ((int32_t)($nc(this->rgb)->get(i) & (uint32_t)255)) - gray;
				if (d < 0) {
					d = -d;
				}
				if (d < minDist) {
					pix = i;
					if (d == 0) {
						break;
					}
					minDist = d;
				}
			}
		} else if (this->transparency == $Transparency::OPAQUE) {
			int32_t smallestError = $Integer::MAX_VALUE;
			$var($ints, lut, this->rgb);
			int32_t lutrgb = 0;
			for (int32_t i = 0; i < this->map_size; ++i) {
				lutrgb = $nc(lut)->get(i);
				if (lutrgb == rgb && lutrgb != 0) {
					pix = i;
					smallestError = 0;
					break;
				}
			}
			if (smallestError != 0) {
				for (int32_t i = 0; i < this->map_size; ++i) {
					lutrgb = $nc(lut)->get(i);
					if (lutrgb == 0) {
						continue;
					}
					int32_t tmp = ((int32_t)((lutrgb >> 16) & (uint32_t)255)) - red;
					int32_t currentError = tmp * tmp;
					if (currentError < smallestError) {
						tmp = ((int32_t)((lutrgb >> 8) & (uint32_t)255)) - green;
						currentError += tmp * tmp;
						if (currentError < smallestError) {
							tmp = ((int32_t)(lutrgb & (uint32_t)255)) - blue;
							currentError += tmp * tmp;
							if (currentError < smallestError) {
								pix = i;
								smallestError = currentError;
							}
						}
					}
				}
			}
		} else if (alpha == 0 && this->transparent_index >= 0) {
			pix = this->transparent_index;
		} else {
			int32_t smallestError = $Integer::MAX_VALUE;
			$var($ints, lut, this->rgb);
			for (int32_t i = 0; i < this->map_size; ++i) {
				int32_t lutrgb = $nc(lut)->get(i);
				if (lutrgb == rgb) {
					if (this->validBits != nullptr && !$nc(this->validBits)->testBit(i)) {
						continue;
					}
					pix = i;
					break;
				}
				int32_t tmp = ((int32_t)((lutrgb >> 16) & (uint32_t)255)) - red;
				int32_t currentError = tmp * tmp;
				if (currentError < smallestError) {
					tmp = ((int32_t)((lutrgb >> 8) & (uint32_t)255)) - green;
					currentError += tmp * tmp;
					if (currentError < smallestError) {
						tmp = ((int32_t)(lutrgb & (uint32_t)255)) - blue;
						currentError += tmp * tmp;
						if (currentError < smallestError) {
							tmp = ((int32_t)((uint32_t)lutrgb >> 24)) - alpha;
							currentError += tmp * tmp;
							if (currentError < smallestError && (this->validBits == nullptr || $nc(this->validBits)->testBit(i))) {
								pix = i;
								smallestError = currentError;
							}
						}
					}
				}
			}
		}
		$System::arraycopy(this->lookupcache, 2, this->lookupcache, 0, IndexColorModel::CACHESIZE - 2);
		$nc(this->lookupcache)->set(IndexColorModel::CACHESIZE - 1, rgb);
		$nc(this->lookupcache)->set(IndexColorModel::CACHESIZE - 2, ~pix);
		return $of(installpixel(pixel, pix));
	}
}

$Object* IndexColorModel::installpixel(Object$* pixel$renamed, int32_t pix) {
	$useLocalCurrentObjectStackCache();
	$var($Object, pixel, pixel$renamed);
	{
		$var($ints, intObj, nullptr)
		$var($bytes, byteObj, nullptr)
		$var($shorts, shortObj, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_INT:
			{
				if (pixel == nullptr) {
					$assign(pixel, ($assign(intObj, $new($ints, 1))));
				} else {
					$assign(intObj, $cast($ints, pixel));
				}
				$nc(intObj)->set(0, pix);
				break;
			}
		case $DataBuffer::TYPE_BYTE:
			{
				if (pixel == nullptr) {
					$assign(pixel, ($assign(byteObj, $new($bytes, 1))));
				} else {
					$assign(byteObj, $cast($bytes, pixel));
				}
				$nc(byteObj)->set(0, (int8_t)pix);
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				if (pixel == nullptr) {
					$assign(pixel, ($assign(shortObj, $new($shorts, 1))));
				} else {
					$assign(shortObj, $cast($shorts, pixel));
				}
				$nc(shortObj)->set(0, (int16_t)pix);
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	return $of(pixel);
}

$ints* IndexColorModel::getComponents(int32_t pixel, $ints* components$renamed, int32_t offset) {
	$var($ints, components, components$renamed);
	if (components == nullptr) {
		$assign(components, $new($ints, offset + this->numComponents));
	}
	$nc(components)->set(offset + 0, getRed(pixel));
	components->set(offset + 1, getGreen(pixel));
	components->set(offset + 2, getBlue(pixel));
	if (this->supportsAlpha && (components->length - offset) > 3) {
		components->set(offset + 3, getAlpha(pixel));
	}
	return components;
}

$ints* IndexColorModel::getComponents(Object$* pixel, $ints* components, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	int32_t intpixel = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, pixel));
				intpixel = (int32_t)($nc(bdata)->get(0) & (uint32_t)255);
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sdata, $cast($shorts, pixel));
				intpixel = (int32_t)($nc(sdata)->get(0) & (uint32_t)0x0000FFFF);
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, pixel));
				intpixel = $nc(idata)->get(0);
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	return getComponents(intpixel, components, offset);
}

int32_t IndexColorModel::getDataElement($ints* components, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	int32_t rgb = (($nc(components)->get(offset + 0) << 16) | (components->get(offset + 1) << 8)) | (components->get(offset + 2));
	if (this->supportsAlpha) {
		rgb |= (components->get(offset + 3) << 24);
	} else {
		rgb |= (int32_t)0xFF000000;
	}
	$var($Object, inData, getDataElements(rgb, nullptr));
	int32_t pixel = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, inData));
				pixel = (int32_t)($nc(bdata)->get(0) & (uint32_t)255);
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sdata, $cast($shorts, inData));
				pixel = $nc(sdata)->get(0);
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, inData));
				pixel = $nc(idata)->get(0);
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	return pixel;
}

$Object* IndexColorModel::getDataElements($ints* components, int32_t offset, Object$* pixel) {
	int32_t rgb = (($nc(components)->get(offset + 0) << 16) | (components->get(offset + 1) << 8)) | (components->get(offset + 2));
	if (this->supportsAlpha) {
		rgb |= (components->get(offset + 3) << 24);
	} else {
		rgb &= (uint32_t)(int32_t)0xFF000000;
	}
	return $of(getDataElements(rgb, pixel));
}

$WritableRaster* IndexColorModel::createCompatibleWritableRaster(int32_t w, int32_t h) {
	$var($WritableRaster, raster, nullptr);
	if (this->pixel_bits == 1 || this->pixel_bits == 2 || this->pixel_bits == 4) {
		$assign(raster, $Raster::createPackedRaster($DataBuffer::TYPE_BYTE, w, h, 1, this->pixel_bits, ($Point*)nullptr));
	} else if (this->pixel_bits <= 8) {
		$assign(raster, $Raster::createInterleavedRaster($DataBuffer::TYPE_BYTE, w, h, 1, nullptr));
	} else if (this->pixel_bits <= 16) {
		$assign(raster, $Raster::createInterleavedRaster($DataBuffer::TYPE_USHORT, w, h, 1, nullptr));
	} else {
		$throwNew($UnsupportedOperationException, "This method is not supported  for pixel bits > 16."_s);
	}
	return raster;
}

bool IndexColorModel::isCompatibleRaster($Raster* raster) {
	int32_t size = $nc($($nc(raster)->getSampleModel()))->getSampleSize(0);
	bool var$0 = (raster->getTransferType() == this->transferType);
	return (var$0 && (raster->getNumBands() == 1) && (($sl(1, size)) >= this->map_size));
}

$SampleModel* IndexColorModel::createCompatibleSampleModel(int32_t w, int32_t h) {
	$var($ints, off, $new($ints, 1));
	off->set(0, 0);
	if (this->pixel_bits == 1 || this->pixel_bits == 2 || this->pixel_bits == 4) {
		return $new($MultiPixelPackedSampleModel, this->transferType, w, h, this->pixel_bits);
	} else {
		return $new($ComponentSampleModel, this->transferType, w, h, 1, w, off);
	}
}

bool IndexColorModel::isCompatibleSampleModel($SampleModel* sm) {
	if (!($instanceOf($ComponentSampleModel, sm)) && !($instanceOf($MultiPixelPackedSampleModel, sm))) {
		return false;
	}
	if ($nc(sm)->getTransferType() != this->transferType) {
		return false;
	}
	if ($nc(sm)->getNumBands() != 1) {
		return false;
	}
	return true;
}

$BufferedImage* IndexColorModel::convertToIntDiscrete($Raster* raster, bool forceARGB) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, cm, nullptr);
	if (!isCompatibleRaster(raster)) {
		$throwNew($IllegalArgumentException, "This raster is not compatiblewith this IndexColorModel."_s);
	}
	if (forceARGB || this->transparency == $Transparency::TRANSLUCENT) {
		$assign(cm, $ColorModel::getRGBdefault());
	} else if (this->transparency == $Transparency::BITMASK) {
		$assign(cm, $new($DirectColorModel, 25, 0x00FF0000, 0x0000FF00, 255, 0x01000000));
	} else {
		$assign(cm, $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255));
	}
	int32_t w = $nc(raster)->getWidth();
	int32_t h = raster->getHeight();
	$var($WritableRaster, discreteRaster, $nc(cm)->createCompatibleWritableRaster(w, h));
	$var($Object, obj, nullptr);
	$var($ints, data, nullptr);
	int32_t rX = raster->getMinX();
	int32_t rY = raster->getMinY();
	for (int32_t y = 0; y < h; ++y, ++rY) {
		$assign(obj, raster->getDataElements(rX, rY, w, 1, obj));
		if ($instanceOf($ints, obj)) {
			$assign(data, $cast($ints, obj));
		} else {
			$assign(data, $DataBuffer::toIntArray(obj));
		}
		for (int32_t x = 0; x < w; ++x) {
			$nc(data)->set(x, $nc(this->rgb)->get((int32_t)(data->get(x) & (uint32_t)this->pixel_mask)));
		}
		$nc(discreteRaster)->setDataElements(0, y, w, 1, data);
	}
	return $new($BufferedImage, cm, discreteRaster, false, ($Hashtable*)nullptr);
}

bool IndexColorModel::isValid(int32_t pixel) {
	return ((pixel >= 0 && pixel < this->map_size) && (this->validBits == nullptr || $nc(this->validBits)->testBit(pixel)));
}

bool IndexColorModel::isValid() {
	return (this->validBits == nullptr);
}

$BigInteger* IndexColorModel::getValidPixels() {
	if (this->validBits == nullptr) {
		return getAllValid();
	} else {
		return this->validBits;
	}
}

void IndexColorModel::finalize() {
}

$String* IndexColorModel::toString() {
	$useLocalCurrentObjectStackCache();
	return $new($String, $$str({"IndexColorModel: #pixelBits = "_s, $$str(this->pixel_bits), " numComponents = "_s, $$str(this->numComponents), " color space = "_s, this->colorSpace, " transparency = "_s, $$str(this->transparency), " transIndex   = "_s, $$str(this->transparent_index), " has alpha = "_s, $$str(this->supportsAlpha), " isAlphaPre = "_s, $$str(this->isAlphaPremultiplied$)}));
}

bool IndexColorModel::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(IndexColorModel, obj))) {
		return false;
	}
	$var(IndexColorModel, cm, $cast(IndexColorModel, obj));
	bool var$4 = this->supportsAlpha != $nc(cm)->hasAlpha();
	bool var$3 = var$4 || this->isAlphaPremultiplied$ != $nc(cm)->isAlphaPremultiplied();
	bool var$2 = var$3 || this->pixel_bits != $nc(cm)->getPixelSize();
	bool var$1 = var$2 || this->transparency != $nc(cm)->getTransparency();
	bool var$0 = var$1 || this->numComponents != $nc(cm)->getNumComponents();
	if (var$0 || (!($nc($of(this->colorSpace))->equals($nc(cm)->colorSpace))) || this->transferType != $nc(cm)->transferType || this->map_size != $nc(cm)->map_size || this->transparent_index != $nc(cm)->transparent_index) {
		return false;
	}
	if (!($Arrays::equals(this->nBits, $($nc(cm)->getComponentSize())))) {
		return false;
	}
	bool testValidBits = false;
	if (this->validBits == $nc(cm)->validBits) {
		testValidBits = false;
	} else if (this->validBits == nullptr || cm->validBits == nullptr) {
		return false;
	} else if ($nc(this->validBits)->equals(cm->validBits)) {
		testValidBits = false;
	} else {
		testValidBits = true;
	}
	if (testValidBits) {
		for (int32_t i = 0; i < this->map_size; ++i) {
			bool var$5 = $nc(this->rgb)->get(i) != $nc($nc(cm)->rgb)->get(i);
			if (!var$5) {
				bool var$6 = $nc(this->validBits)->testBit(i);
				var$5 = var$6 != $nc($nc(cm)->validBits)->testBit(i);
			}
			if (var$5) {
				return false;
			}
		}
	} else {
		for (int32_t i = 0; i < this->map_size; ++i) {
			if ($nc(this->rgb)->get(i) != $nc($nc(cm)->rgb)->get(i)) {
				return false;
			}
		}
	}
	return true;
}

int32_t IndexColorModel::hashCode() {
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
		result = 89 * result + $Arrays::hashCode(this->rgb);
		result = 89 * result + this->map_size;
		result = 89 * result + this->transparent_index;
		this->hashCode$ = result;
	}
	return result;
}

void clinit$IndexColorModel($Class* class$) {
	$assignStatic(IndexColorModel::opaqueBits, $new($ints, {
		8,
		8,
		8
	}));
	$assignStatic(IndexColorModel::alphaBits, $new($ints, {
		8,
		8,
		8,
		8
	}));
	{
		$ColorModel::loadLibraries();
		IndexColorModel::initIDs();
	}
}

IndexColorModel::IndexColorModel() {
}

$Class* IndexColorModel::load$($String* name, bool initialize) {
	$loadClass(IndexColorModel, name, initialize, &_IndexColorModel_ClassInfo_, clinit$IndexColorModel, allocate$IndexColorModel);
	return class$;
}

$Class* IndexColorModel::class$ = nullptr;

		} // image
	} // awt
} // java