#include <sun/font/XRGlyphCacheEntry.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Math.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/font/GlyphList.h>
#include <sun/font/StrikeCache.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $GlyphList = ::sun::font::GlyphList;
using $StrikeCache = ::sun::font::StrikeCache;

namespace sun {
	namespace font {

$FieldInfo _XRGlyphCacheEntry_FieldInfo_[] = {
	{"glyphInfoPtr", "J", nullptr, 0, $field(XRGlyphCacheEntry, glyphInfoPtr)},
	{"lastUsed", "I", nullptr, 0, $field(XRGlyphCacheEntry, lastUsed)},
	{"pinned", "Z", nullptr, 0, $field(XRGlyphCacheEntry, pinned)},
	{"xOff", "I", nullptr, 0, $field(XRGlyphCacheEntry, xOff)},
	{"yOff", "I", nullptr, 0, $field(XRGlyphCacheEntry, yOff)},
	{"glyphSet", "I", nullptr, 0, $field(XRGlyphCacheEntry, glyphSet)},
	{}
};

$MethodInfo _XRGlyphCacheEntry_MethodInfo_[] = {
	{"<init>", "(JLsun/font/GlyphList;)V", nullptr, $PUBLIC, $method(static_cast<void(XRGlyphCacheEntry::*)(int64_t,$GlyphList*)>(&XRGlyphCacheEntry::init$))},
	{"getDestinationRowBytes", "(Z)I", nullptr, $PUBLIC},
	{"getGlyphDataLenth", "(Z)I", nullptr, $PUBLIC},
	{"getGlyphID", "(J)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&XRGlyphCacheEntry::getGlyphID))},
	{"getGlyphID", "()I", nullptr, $PUBLIC},
	{"getGlyphInfoPtr", "()J", nullptr, $PUBLIC},
	{"getGlyphSet", "()I", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getLastUsed", "()I", nullptr, $PUBLIC},
	{"getPaddedWidth", "(Z)I", nullptr, $PUBLIC},
	{"getPixelCnt", "()I", nullptr, $PUBLIC},
	{"getSourceRowBytes", "()I", nullptr, $PUBLIC},
	{"getTopLeftXOffset", "()F", nullptr, $PUBLIC},
	{"getTopLeftYOffset", "()F", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"getXAdvance", "()F", nullptr, $PUBLIC},
	{"getXOff", "()I", nullptr, $PUBLIC},
	{"getYAdvance", "()F", nullptr, $PUBLIC},
	{"getYOff", "()I", nullptr, $PUBLIC},
	{"isGrayscale", "(Z)Z", nullptr, $PUBLIC},
	{"isPinned", "()Z", nullptr, $PUBLIC},
	{"setGlyphID", "(JI)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t,int32_t)>(&XRGlyphCacheEntry::setGlyphID))},
	{"setGlyphID", "(I)V", nullptr, $PUBLIC},
	{"setGlyphSet", "(I)V", nullptr, $PUBLIC},
	{"setLastUsed", "(I)V", nullptr, $PUBLIC},
	{"setPinned", "()V", nullptr, $PUBLIC},
	{"setUnpinned", "()V", nullptr, $PUBLIC},
	{"writePixelData", "(Ljava/io/ByteArrayOutputStream;Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XRGlyphCacheEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.XRGlyphCacheEntry",
	"java.lang.Object",
	nullptr,
	_XRGlyphCacheEntry_FieldInfo_,
	_XRGlyphCacheEntry_MethodInfo_
};

$Object* allocate$XRGlyphCacheEntry($Class* clazz) {
	return $of($alloc(XRGlyphCacheEntry));
}

void XRGlyphCacheEntry::init$(int64_t glyphInfoPtr, $GlyphList* gl) {
	this->glyphInfoPtr = glyphInfoPtr;
	this->xOff = $Math::round(getXAdvance());
	this->yOff = $Math::round(getYAdvance());
}

int32_t XRGlyphCacheEntry::getXOff() {
	return this->xOff;
}

int32_t XRGlyphCacheEntry::getYOff() {
	return this->yOff;
}

void XRGlyphCacheEntry::setGlyphSet(int32_t glyphSet) {
	this->glyphSet = glyphSet;
}

int32_t XRGlyphCacheEntry::getGlyphSet() {
	return this->glyphSet;
}

int32_t XRGlyphCacheEntry::getGlyphID(int64_t glyphInfoPtr) {
	$init($StrikeCache);
	return (int32_t)$nc($StrikeCache::unsafe)->getAddress(glyphInfoPtr + $StrikeCache::cacheCellOffset);
}

void XRGlyphCacheEntry::setGlyphID(int64_t glyphInfoPtr, int32_t id) {
	$init($StrikeCache);
	$nc($StrikeCache::unsafe)->putAddress(glyphInfoPtr + $StrikeCache::cacheCellOffset, (int64_t)id);
}

int32_t XRGlyphCacheEntry::getGlyphID() {
	return getGlyphID(this->glyphInfoPtr);
}

void XRGlyphCacheEntry::setGlyphID(int32_t id) {
	setGlyphID(this->glyphInfoPtr, id);
}

float XRGlyphCacheEntry::getXAdvance() {
	$init($StrikeCache);
	return $nc($StrikeCache::unsafe)->getFloat(this->glyphInfoPtr + $StrikeCache::xAdvanceOffset);
}

float XRGlyphCacheEntry::getYAdvance() {
	$init($StrikeCache);
	return $nc($StrikeCache::unsafe)->getFloat(this->glyphInfoPtr + $StrikeCache::yAdvanceOffset);
}

int32_t XRGlyphCacheEntry::getSourceRowBytes() {
	$init($StrikeCache);
	return $nc($StrikeCache::unsafe)->getShort(this->glyphInfoPtr + $StrikeCache::rowBytesOffset);
}

int32_t XRGlyphCacheEntry::getWidth() {
	$init($StrikeCache);
	return $nc($StrikeCache::unsafe)->getShort(this->glyphInfoPtr + $StrikeCache::widthOffset);
}

int32_t XRGlyphCacheEntry::getHeight() {
	$init($StrikeCache);
	return $nc($StrikeCache::unsafe)->getShort(this->glyphInfoPtr + $StrikeCache::heightOffset);
}

void XRGlyphCacheEntry::writePixelData($ByteArrayOutputStream* os, bool uploadAsLCD) {
	$init($StrikeCache);
	int64_t pixelDataAddress = $nc($StrikeCache::unsafe)->getAddress(this->glyphInfoPtr + $StrikeCache::pixelDataOffset);
	if (pixelDataAddress == (int64_t)0) {
		return;
	}
	int32_t width = getWidth();
	int32_t height = getHeight();
	int32_t rowBytes = getSourceRowBytes();
	int32_t paddedWidth = getPaddedWidth(uploadAsLCD);
	if (!uploadAsLCD) {
		for (int32_t line = 0; line < height; ++line) {
			for (int32_t x = 0; x < paddedWidth; ++x) {
				if (x < width) {
					$nc(os)->write((int32_t)$nc($StrikeCache::unsafe)->getByte(pixelDataAddress + (line * rowBytes + x)));
				} else {
					$nc(os)->write(0);
				}
			}
		}
	} else {
		for (int32_t line = 0; line < height; ++line) {
			int32_t rowStart = line * rowBytes;
			int32_t rowBytesWidth = width * 3;
			int32_t srcpix = 0;
			while (srcpix < rowBytesWidth) {
				$nc(os)->write((int32_t)$nc($StrikeCache::unsafe)->getByte(pixelDataAddress + (rowStart + srcpix + 2)));
				os->write((int32_t)$nc($StrikeCache::unsafe)->getByte(pixelDataAddress + (rowStart + srcpix + 1)));
				os->write((int32_t)$nc($StrikeCache::unsafe)->getByte(pixelDataAddress + (rowStart + srcpix + 0)));
				os->write(255);
				srcpix += 3;
			}
		}
	}
}

float XRGlyphCacheEntry::getTopLeftXOffset() {
	$init($StrikeCache);
	return $nc($StrikeCache::unsafe)->getFloat(this->glyphInfoPtr + $StrikeCache::topLeftXOffset);
}

float XRGlyphCacheEntry::getTopLeftYOffset() {
	$init($StrikeCache);
	return $nc($StrikeCache::unsafe)->getFloat(this->glyphInfoPtr + $StrikeCache::topLeftYOffset);
}

int64_t XRGlyphCacheEntry::getGlyphInfoPtr() {
	return this->glyphInfoPtr;
}

bool XRGlyphCacheEntry::isGrayscale(bool listContainsLCDGlyphs) {
	int32_t var$1 = getSourceRowBytes();
	bool var$0 = var$1 == getWidth();
	if (var$0) {
		bool var$2 = getWidth() == 0;
		var$0 = !(var$2 && getHeight() == 0 && listContainsLCDGlyphs);
	}
	return var$0;
}

int32_t XRGlyphCacheEntry::getPaddedWidth(bool listContainsLCDGlyphs) {
	int32_t width = getWidth();
	return isGrayscale(listContainsLCDGlyphs) ? $cast(int32_t, $Math::ceil(width / 4.0)) * 4 : width;
}

int32_t XRGlyphCacheEntry::getDestinationRowBytes(bool listContainsLCDGlyphs) {
	bool grayscale = isGrayscale(listContainsLCDGlyphs);
	return grayscale ? getPaddedWidth(grayscale) : getWidth() * 4;
}

int32_t XRGlyphCacheEntry::getGlyphDataLenth(bool listContainsLCDGlyphs) {
	int32_t var$0 = getDestinationRowBytes(listContainsLCDGlyphs);
	return var$0 * getHeight();
}

void XRGlyphCacheEntry::setPinned() {
	this->pinned = true;
}

void XRGlyphCacheEntry::setUnpinned() {
	this->pinned = false;
}

int32_t XRGlyphCacheEntry::getLastUsed() {
	return this->lastUsed;
}

void XRGlyphCacheEntry::setLastUsed(int32_t lastUsed) {
	this->lastUsed = lastUsed;
}

int32_t XRGlyphCacheEntry::getPixelCnt() {
	int32_t var$0 = getWidth();
	return var$0 * getHeight();
}

bool XRGlyphCacheEntry::isPinned() {
	return this->pinned;
}

XRGlyphCacheEntry::XRGlyphCacheEntry() {
}

$Class* XRGlyphCacheEntry::load$($String* name, bool initialize) {
	$loadClass(XRGlyphCacheEntry, name, initialize, &_XRGlyphCacheEntry_ClassInfo_, allocate$XRGlyphCacheEntry);
	return class$;
}

$Class* XRGlyphCacheEntry::class$ = nullptr;

	} // font
} // sun