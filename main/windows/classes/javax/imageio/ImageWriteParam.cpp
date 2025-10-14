#include <javax/imageio/ImageWriteParam.h>

#include <java/awt/Dimension.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/imageio/IIOParam.h>
#include <jcpp.h>

#undef MAX_MODE
#undef MODE_COPY_FROM_METADATA
#undef MODE_DEFAULT
#undef MODE_DISABLED
#undef MODE_EXPLICIT

using $DimensionArray = $Array<::java::awt::Dimension>;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Locale = ::java::util::Locale;
using $IIOParam = ::javax::imageio::IIOParam;

namespace javax {
	namespace imageio {

$FieldInfo _ImageWriteParam_FieldInfo_[] = {
	{"MODE_DISABLED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageWriteParam, MODE_DISABLED)},
	{"MODE_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageWriteParam, MODE_DEFAULT)},
	{"MODE_EXPLICIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageWriteParam, MODE_EXPLICIT)},
	{"MODE_COPY_FROM_METADATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ImageWriteParam, MODE_COPY_FROM_METADATA)},
	{"MAX_MODE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageWriteParam, MAX_MODE)},
	{"canWriteTiles", "Z", nullptr, $PROTECTED, $field(ImageWriteParam, canWriteTiles$)},
	{"tilingMode", "I", nullptr, $PROTECTED, $field(ImageWriteParam, tilingMode)},
	{"preferredTileSizes", "[Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(ImageWriteParam, preferredTileSizes)},
	{"tilingSet", "Z", nullptr, $PROTECTED, $field(ImageWriteParam, tilingSet)},
	{"tileWidth", "I", nullptr, $PROTECTED, $field(ImageWriteParam, tileWidth)},
	{"tileHeight", "I", nullptr, $PROTECTED, $field(ImageWriteParam, tileHeight)},
	{"canOffsetTiles", "Z", nullptr, $PROTECTED, $field(ImageWriteParam, canOffsetTiles$)},
	{"tileGridXOffset", "I", nullptr, $PROTECTED, $field(ImageWriteParam, tileGridXOffset)},
	{"tileGridYOffset", "I", nullptr, $PROTECTED, $field(ImageWriteParam, tileGridYOffset)},
	{"canWriteProgressive", "Z", nullptr, $PROTECTED, $field(ImageWriteParam, canWriteProgressive$)},
	{"progressiveMode", "I", nullptr, $PROTECTED, $field(ImageWriteParam, progressiveMode)},
	{"canWriteCompressed", "Z", nullptr, $PROTECTED, $field(ImageWriteParam, canWriteCompressed$)},
	{"compressionMode", "I", nullptr, $PROTECTED, $field(ImageWriteParam, compressionMode)},
	{"compressionTypes", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageWriteParam, compressionTypes)},
	{"compressionType", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageWriteParam, compressionType)},
	{"compressionQuality", "F", nullptr, $PROTECTED, $field(ImageWriteParam, compressionQuality)},
	{"locale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(ImageWriteParam, locale)},
	{}
};

$MethodInfo _ImageWriteParam_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ImageWriteParam::*)()>(&ImageWriteParam::init$))},
	{"<init>", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageWriteParam::*)($Locale*)>(&ImageWriteParam::init$))},
	{"canOffsetTiles", "()Z", nullptr, $PUBLIC},
	{"canWriteCompressed", "()Z", nullptr, $PUBLIC},
	{"canWriteProgressive", "()Z", nullptr, $PUBLIC},
	{"canWriteTiles", "()Z", nullptr, $PUBLIC},
	{"clonePreferredTileSizes", "([Ljava/awt/Dimension;)[Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$DimensionArray*(*)($DimensionArray*)>(&ImageWriteParam::clonePreferredTileSizes))},
	{"getBitRate", "(F)F", nullptr, $PUBLIC},
	{"getCompressionMode", "()I", nullptr, $PUBLIC},
	{"getCompressionQuality", "()F", nullptr, $PUBLIC},
	{"getCompressionQualityDescriptions", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCompressionQualityValues", "()[F", nullptr, $PUBLIC},
	{"getCompressionType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCompressionTypes", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getLocalizedCompressionTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPreferredTileSizes", "()[Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getProgressiveMode", "()I", nullptr, $PUBLIC},
	{"getTileGridXOffset", "()I", nullptr, $PUBLIC},
	{"getTileGridYOffset", "()I", nullptr, $PUBLIC},
	{"getTileHeight", "()I", nullptr, $PUBLIC},
	{"getTileWidth", "()I", nullptr, $PUBLIC},
	{"getTilingMode", "()I", nullptr, $PUBLIC},
	{"isCompressionLossless", "()Z", nullptr, $PUBLIC},
	{"setCompressionMode", "(I)V", nullptr, $PUBLIC},
	{"setCompressionQuality", "(F)V", nullptr, $PUBLIC},
	{"setCompressionType", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setProgressiveMode", "(I)V", nullptr, $PUBLIC},
	{"setTiling", "(IIII)V", nullptr, $PUBLIC},
	{"setTilingMode", "(I)V", nullptr, $PUBLIC},
	{"unsetCompression", "()V", nullptr, $PUBLIC},
	{"unsetTiling", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageWriteParam_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.ImageWriteParam",
	"javax.imageio.IIOParam",
	nullptr,
	_ImageWriteParam_FieldInfo_,
	_ImageWriteParam_MethodInfo_
};

$Object* allocate$ImageWriteParam($Class* clazz) {
	return $of($alloc(ImageWriteParam));
}

void ImageWriteParam::init$() {
	$IIOParam::init$();
	this->canWriteTiles$ = false;
	this->tilingMode = ImageWriteParam::MODE_COPY_FROM_METADATA;
	$set(this, preferredTileSizes, nullptr);
	this->tilingSet = false;
	this->tileWidth = 0;
	this->tileHeight = 0;
	this->canOffsetTiles$ = false;
	this->tileGridXOffset = 0;
	this->tileGridYOffset = 0;
	this->canWriteProgressive$ = false;
	this->progressiveMode = ImageWriteParam::MODE_COPY_FROM_METADATA;
	this->canWriteCompressed$ = false;
	this->compressionMode = ImageWriteParam::MODE_COPY_FROM_METADATA;
	$set(this, compressionTypes, nullptr);
	$set(this, compressionType, nullptr);
	this->compressionQuality = 1.0f;
	$set(this, locale, nullptr);
}

void ImageWriteParam::init$($Locale* locale) {
	$IIOParam::init$();
	this->canWriteTiles$ = false;
	this->tilingMode = ImageWriteParam::MODE_COPY_FROM_METADATA;
	$set(this, preferredTileSizes, nullptr);
	this->tilingSet = false;
	this->tileWidth = 0;
	this->tileHeight = 0;
	this->canOffsetTiles$ = false;
	this->tileGridXOffset = 0;
	this->tileGridYOffset = 0;
	this->canWriteProgressive$ = false;
	this->progressiveMode = ImageWriteParam::MODE_COPY_FROM_METADATA;
	this->canWriteCompressed$ = false;
	this->compressionMode = ImageWriteParam::MODE_COPY_FROM_METADATA;
	$set(this, compressionTypes, nullptr);
	$set(this, compressionType, nullptr);
	this->compressionQuality = 1.0f;
	$set(this, locale, nullptr);
	$set(this, locale, locale);
}

$DimensionArray* ImageWriteParam::clonePreferredTileSizes($DimensionArray* sizes) {
	$init(ImageWriteParam);
	if (sizes == nullptr) {
		return nullptr;
	}
	$var($DimensionArray, temp, $new($DimensionArray, $nc(sizes)->length));
	for (int32_t i = 0; i < sizes->length; ++i) {
		temp->set(i, $$new($Dimension, sizes->get(i)));
	}
	return temp;
}

$Locale* ImageWriteParam::getLocale() {
	return this->locale;
}

bool ImageWriteParam::canWriteTiles() {
	return this->canWriteTiles$;
}

bool ImageWriteParam::canOffsetTiles() {
	return this->canOffsetTiles$;
}

void ImageWriteParam::setTilingMode(int32_t mode) {
	if (canWriteTiles() == false) {
		$throwNew($UnsupportedOperationException, "Tiling not supported!"_s);
	}
	if (mode < ImageWriteParam::MODE_DISABLED || mode > ImageWriteParam::MAX_MODE) {
		$throwNew($IllegalArgumentException, "Illegal value for mode!"_s);
	}
	this->tilingMode = mode;
	if (mode == ImageWriteParam::MODE_EXPLICIT) {
		unsetTiling();
	}
}

int32_t ImageWriteParam::getTilingMode() {
	if (!canWriteTiles()) {
		$throwNew($UnsupportedOperationException, "Tiling not supported"_s);
	}
	return this->tilingMode;
}

$DimensionArray* ImageWriteParam::getPreferredTileSizes() {
	if (!canWriteTiles()) {
		$throwNew($UnsupportedOperationException, "Tiling not supported"_s);
	}
	return clonePreferredTileSizes(this->preferredTileSizes);
}

void ImageWriteParam::setTiling(int32_t tileWidth, int32_t tileHeight, int32_t tileGridXOffset, int32_t tileGridYOffset) {
	if (!canWriteTiles()) {
		$throwNew($UnsupportedOperationException, "Tiling not supported!"_s);
	}
	if (getTilingMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Tiling mode not MODE_EXPLICIT!"_s);
	}
	if (tileWidth <= 0 || tileHeight <= 0) {
		$throwNew($IllegalArgumentException, "tile dimensions are non-positive!"_s);
	}
	bool tilesOffset = (tileGridXOffset != 0) || (tileGridYOffset != 0);
	if (!canOffsetTiles() && tilesOffset) {
		$throwNew($UnsupportedOperationException, "Can\'t offset tiles!"_s);
	}
	if (this->preferredTileSizes != nullptr) {
		bool ok = true;
		for (int32_t i = 0; i < $nc(this->preferredTileSizes)->length; i += 2) {
			$var($Dimension, min, $nc(this->preferredTileSizes)->get(i));
			$var($Dimension, max, $nc(this->preferredTileSizes)->get(i + 1));
			if ((tileWidth < $nc(min)->width) || (tileWidth > $nc(max)->width) || (tileHeight < $nc(min)->height) || (tileHeight > $nc(max)->height)) {
				ok = false;
				break;
			}
		}
		if (!ok) {
			$throwNew($IllegalArgumentException, "Illegal tile size!"_s);
		}
	}
	this->tilingSet = true;
	this->tileWidth = tileWidth;
	this->tileHeight = tileHeight;
	this->tileGridXOffset = tileGridXOffset;
	this->tileGridYOffset = tileGridYOffset;
}

void ImageWriteParam::unsetTiling() {
	if (!canWriteTiles()) {
		$throwNew($UnsupportedOperationException, "Tiling not supported!"_s);
	}
	if (getTilingMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Tiling mode not MODE_EXPLICIT!"_s);
	}
	this->tilingSet = false;
	this->tileWidth = 0;
	this->tileHeight = 0;
	this->tileGridXOffset = 0;
	this->tileGridYOffset = 0;
}

int32_t ImageWriteParam::getTileWidth() {
	if (!canWriteTiles()) {
		$throwNew($UnsupportedOperationException, "Tiling not supported!"_s);
	}
	if (getTilingMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Tiling mode not MODE_EXPLICIT!"_s);
	}
	if (!this->tilingSet) {
		$throwNew($IllegalStateException, "Tiling parameters not set!"_s);
	}
	return this->tileWidth;
}

int32_t ImageWriteParam::getTileHeight() {
	if (!canWriteTiles()) {
		$throwNew($UnsupportedOperationException, "Tiling not supported!"_s);
	}
	if (getTilingMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Tiling mode not MODE_EXPLICIT!"_s);
	}
	if (!this->tilingSet) {
		$throwNew($IllegalStateException, "Tiling parameters not set!"_s);
	}
	return this->tileHeight;
}

int32_t ImageWriteParam::getTileGridXOffset() {
	if (!canWriteTiles()) {
		$throwNew($UnsupportedOperationException, "Tiling not supported!"_s);
	}
	if (getTilingMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Tiling mode not MODE_EXPLICIT!"_s);
	}
	if (!this->tilingSet) {
		$throwNew($IllegalStateException, "Tiling parameters not set!"_s);
	}
	return this->tileGridXOffset;
}

int32_t ImageWriteParam::getTileGridYOffset() {
	if (!canWriteTiles()) {
		$throwNew($UnsupportedOperationException, "Tiling not supported!"_s);
	}
	if (getTilingMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Tiling mode not MODE_EXPLICIT!"_s);
	}
	if (!this->tilingSet) {
		$throwNew($IllegalStateException, "Tiling parameters not set!"_s);
	}
	return this->tileGridYOffset;
}

bool ImageWriteParam::canWriteProgressive() {
	return this->canWriteProgressive$;
}

void ImageWriteParam::setProgressiveMode(int32_t mode) {
	if (!canWriteProgressive()) {
		$throwNew($UnsupportedOperationException, "Progressive output not supported"_s);
	}
	if (mode < ImageWriteParam::MODE_DISABLED || mode > ImageWriteParam::MAX_MODE) {
		$throwNew($IllegalArgumentException, "Illegal value for mode!"_s);
	}
	if (mode == ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalArgumentException, "MODE_EXPLICIT not supported for progressive output"_s);
	}
	this->progressiveMode = mode;
}

int32_t ImageWriteParam::getProgressiveMode() {
	if (!canWriteProgressive()) {
		$throwNew($UnsupportedOperationException, "Progressive output not supported"_s);
	}
	return this->progressiveMode;
}

bool ImageWriteParam::canWriteCompressed() {
	return this->canWriteCompressed$;
}

void ImageWriteParam::setCompressionMode(int32_t mode) {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported."_s);
	}
	if (mode < ImageWriteParam::MODE_DISABLED || mode > ImageWriteParam::MAX_MODE) {
		$throwNew($IllegalArgumentException, "Illegal value for mode!"_s);
	}
	this->compressionMode = mode;
	if (mode == ImageWriteParam::MODE_EXPLICIT) {
		unsetCompression();
	}
}

int32_t ImageWriteParam::getCompressionMode() {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported."_s);
	}
	return this->compressionMode;
}

$StringArray* ImageWriteParam::getCompressionTypes() {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported"_s);
	}
	if (this->compressionTypes == nullptr) {
		return nullptr;
	}
	return $cast($StringArray, $nc(this->compressionTypes)->clone());
}

void ImageWriteParam::setCompressionType($String* compressionType) {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported"_s);
	}
	if (getCompressionMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	$var($StringArray, legalTypes, getCompressionTypes());
	if (legalTypes == nullptr) {
		$throwNew($UnsupportedOperationException, "No settable compression types"_s);
	}
	if (compressionType != nullptr) {
		bool found = false;
		if (legalTypes != nullptr) {
			for (int32_t i = 0; i < legalTypes->length; ++i) {
				if (compressionType->equals(legalTypes->get(i))) {
					found = true;
					break;
				}
			}
		}
		if (!found) {
			$throwNew($IllegalArgumentException, "Unknown compression type!"_s);
		}
	}
	$set(this, compressionType, compressionType);
}

$String* ImageWriteParam::getCompressionType() {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported."_s);
	}
	if (getCompressionMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	return this->compressionType;
}

void ImageWriteParam::unsetCompression() {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported"_s);
	}
	if (getCompressionMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	$set(this, compressionType, nullptr);
	this->compressionQuality = 1.0f;
}

$String* ImageWriteParam::getLocalizedCompressionTypeName() {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported."_s);
	}
	if (getCompressionMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	if (getCompressionType() == nullptr) {
		$throwNew($IllegalStateException, "No compression type set!"_s);
	}
	return getCompressionType();
}

bool ImageWriteParam::isCompressionLossless() {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported"_s);
	}
	if (getCompressionMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	bool var$0 = (getCompressionTypes() != nullptr);
	if (var$0 && (getCompressionType() == nullptr)) {
		$throwNew($IllegalStateException, "No compression type set!"_s);
	}
	return true;
}

void ImageWriteParam::setCompressionQuality(float quality) {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported"_s);
	}
	if (getCompressionMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	bool var$0 = getCompressionTypes() != nullptr;
	if (var$0 && getCompressionType() == nullptr) {
		$throwNew($IllegalStateException, "No compression type set!"_s);
	}
	if (quality < 0.0f || quality > 1.0f) {
		$throwNew($IllegalArgumentException, "Quality out of bounds!"_s);
	}
	this->compressionQuality = quality;
}

float ImageWriteParam::getCompressionQuality() {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported."_s);
	}
	if (getCompressionMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	bool var$0 = (getCompressionTypes() != nullptr);
	if (var$0 && (getCompressionType() == nullptr)) {
		$throwNew($IllegalStateException, "No compression type set!"_s);
	}
	return this->compressionQuality;
}

float ImageWriteParam::getBitRate(float quality) {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported."_s);
	}
	if (getCompressionMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	bool var$0 = (getCompressionTypes() != nullptr);
	if (var$0 && (getCompressionType() == nullptr)) {
		$throwNew($IllegalStateException, "No compression type set!"_s);
	}
	if (quality < 0.0f || quality > 1.0f) {
		$throwNew($IllegalArgumentException, "Quality out of bounds!"_s);
	}
	return -1.0f;
}

$StringArray* ImageWriteParam::getCompressionQualityDescriptions() {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported."_s);
	}
	if (getCompressionMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	bool var$0 = (getCompressionTypes() != nullptr);
	if (var$0 && (getCompressionType() == nullptr)) {
		$throwNew($IllegalStateException, "No compression type set!"_s);
	}
	return nullptr;
}

$floats* ImageWriteParam::getCompressionQualityValues() {
	if (!canWriteCompressed()) {
		$throwNew($UnsupportedOperationException, "Compression not supported."_s);
	}
	if (getCompressionMode() != ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	bool var$0 = (getCompressionTypes() != nullptr);
	if (var$0 && (getCompressionType() == nullptr)) {
		$throwNew($IllegalStateException, "No compression type set!"_s);
	}
	return nullptr;
}

ImageWriteParam::ImageWriteParam() {
}

$Class* ImageWriteParam::load$($String* name, bool initialize) {
	$loadClass(ImageWriteParam, name, initialize, &_ImageWriteParam_ClassInfo_, allocate$ImageWriteParam);
	return class$;
}

$Class* ImageWriteParam::class$ = nullptr;

	} // imageio
} // javax