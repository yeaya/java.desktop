#include <sun/font/GlyphList.h>

#include <java/awt/font/GlyphVector.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/ColorGlyphSurfaceData.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/StandardGlyphVector.h>
#include <sun/font/StrikeCache.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/FontInfo.h>
#include <jcpp.h>

#undef DEFAULT_LENGTH
#undef MAXGRAYLENGTH
#undef MINGRAYLENGTH
#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY

using $GlyphVector = ::java::awt::font::GlyphVector;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $ColorGlyphSurfaceData = ::sun::font::ColorGlyphSurfaceData;
using $Font2D = ::sun::font::Font2D;
using $FontStrike = ::sun::font::FontStrike;
using $FontUtilities = ::sun::font::FontUtilities;
using $StandardGlyphVector = ::sun::font::StandardGlyphVector;
using $StrikeCache = ::sun::font::StrikeCache;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $FontInfo = ::sun::java2d::loops::FontInfo;

namespace sun {
	namespace font {

$FieldInfo _GlyphList_FieldInfo_[] = {
	{"MINGRAYLENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GlyphList, MINGRAYLENGTH)},
	{"MAXGRAYLENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GlyphList, MAXGRAYLENGTH)},
	{"DEFAULT_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GlyphList, DEFAULT_LENGTH)},
	{"glyphindex", "I", nullptr, 0, $field(GlyphList, glyphindex)},
	{"metrics", "[I", nullptr, 0, $field(GlyphList, metrics)},
	{"graybits", "[B", nullptr, 0, $field(GlyphList, graybits)},
	{"strikelist", "Ljava/lang/Object;", nullptr, 0, $field(GlyphList, strikelist)},
	{"len", "I", nullptr, 0, $field(GlyphList, len)},
	{"maxLen", "I", nullptr, 0, $field(GlyphList, maxLen)},
	{"maxPosLen", "I", nullptr, 0, $field(GlyphList, maxPosLen)},
	{"glyphData", "[I", nullptr, 0, $field(GlyphList, glyphData)},
	{"chData", "[C", nullptr, 0, $field(GlyphList, chData)},
	{"images", "[J", nullptr, 0, $field(GlyphList, images)},
	{"positions", "[F", nullptr, 0, $field(GlyphList, positions)},
	{"x", "F", nullptr, 0, $field(GlyphList, x)},
	{"y", "F", nullptr, 0, $field(GlyphList, y)},
	{"gposx", "F", nullptr, 0, $field(GlyphList, gposx)},
	{"gposy", "F", nullptr, 0, $field(GlyphList, gposy)},
	{"usePositions", "Z", nullptr, 0, $field(GlyphList, usePositions$)},
	{"lcdRGBOrder", "Z", nullptr, 0, $field(GlyphList, lcdRGBOrder)},
	{"lcdSubPixPos", "Z", nullptr, 0, $field(GlyphList, lcdSubPixPos)},
	{"reusableGL", "Lsun/font/GlyphList;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GlyphList, reusableGL)},
	{"inUse", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GlyphList, inUse)},
	{"glyphSurfaceData", "Lsun/font/ColorGlyphSurfaceData;", nullptr, $PRIVATE, $field(GlyphList, glyphSurfaceData)},
	{}
};

$MethodInfo _GlyphList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GlyphList::*)()>(&GlyphList::init$))},
	{"canContainColorGlyphs", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&GlyphList::canContainColorGlyphs))},
	{"dispose", "()V", nullptr, $PUBLIC, $method(static_cast<void(GlyphList::*)()>(&GlyphList::dispose))},
	{"ensureCapacity", "(I)V", nullptr, 0, $method(static_cast<void(GlyphList::*)(int32_t)>(&GlyphList::ensureCapacity))},
	{"fillBounds", "([II)V", nullptr, $PRIVATE, $method(static_cast<void(GlyphList::*)($ints*,int32_t)>(&GlyphList::fillBounds))},
	{"getBounds", "(I)[I", nullptr, $PUBLIC, $method(static_cast<$ints*(GlyphList::*)(int32_t)>(&GlyphList::getBounds))},
	{"getColorGlyphData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $method(static_cast<$SurfaceData*(GlyphList::*)()>(&GlyphList::getColorGlyphData))},
	{"getGrayBits", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(GlyphList::*)()>(&GlyphList::getGrayBits))},
	{"getImages", "()[J", nullptr, $PUBLIC, $method(static_cast<$longs*(GlyphList::*)()>(&GlyphList::getImages))},
	{"getInstance", "()Lsun/font/GlyphList;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GlyphList*(*)()>(&GlyphList::getInstance))},
	{"getMetrics", "()[I", nullptr, $PUBLIC, $method(static_cast<$ints*(GlyphList::*)()>(&GlyphList::getMetrics))},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(GlyphList::*)()>(&GlyphList::getNumGlyphs))},
	{"getPositions", "()[F", nullptr, $PUBLIC, $method(static_cast<$floats*(GlyphList::*)()>(&GlyphList::getPositions))},
	{"getStrike", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(GlyphList::*)()>(&GlyphList::getStrike))},
	{"getX", "()F", nullptr, $PUBLIC, $method(static_cast<float(GlyphList::*)()>(&GlyphList::getX))},
	{"getY", "()F", nullptr, $PUBLIC, $method(static_cast<float(GlyphList::*)()>(&GlyphList::getY))},
	{"isColorGlyph", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(GlyphList::*)(int32_t)>(&GlyphList::isColorGlyph))},
	{"isRGBOrder", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(GlyphList::*)()>(&GlyphList::isRGBOrder))},
	{"isSubPixPos", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(GlyphList::*)()>(&GlyphList::isSubPixPos))},
	{"mapChars", "(Lsun/java2d/loops/FontInfo;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(GlyphList::*)($FontInfo*,int32_t)>(&GlyphList::mapChars))},
	{"setFromChars", "(Lsun/java2d/loops/FontInfo;[CIIFF)Z", nullptr, $PUBLIC, $method(static_cast<bool(GlyphList::*)($FontInfo*,$chars*,int32_t,int32_t,float,float)>(&GlyphList::setFromChars))},
	{"setFromGlyphVector", "(Lsun/java2d/loops/FontInfo;Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC, $method(static_cast<void(GlyphList::*)($FontInfo*,$GlyphVector*,float,float)>(&GlyphList::setFromGlyphVector))},
	{"setFromString", "(Lsun/java2d/loops/FontInfo;Ljava/lang/String;FF)Z", nullptr, $PUBLIC, $method(static_cast<bool(GlyphList::*)($FontInfo*,$String*,float,float)>(&GlyphList::setFromString))},
	{"setGlyphIndex", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(GlyphList::*)(int32_t)>(&GlyphList::setGlyphIndex))},
	{"startGlyphIteration", "()V", nullptr, $PUBLIC, $method(static_cast<void(GlyphList::*)()>(&GlyphList::startGlyphIteration))},
	{"usePositions", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(GlyphList::*)()>(&GlyphList::usePositions))},
	{}
};

$ClassInfo _GlyphList_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.GlyphList",
	"java.lang.Object",
	nullptr,
	_GlyphList_FieldInfo_,
	_GlyphList_MethodInfo_
};

$Object* allocate$GlyphList($Class* clazz) {
	return $of($alloc(GlyphList));
}

GlyphList* GlyphList::reusableGL = nullptr;
$AtomicBoolean* GlyphList::inUse = nullptr;

void GlyphList::ensureCapacity(int32_t len) {
	if (len < 0) {
		len = 0;
	}
	if (this->usePositions$ && len > this->maxPosLen) {
		$set(this, positions, $new($floats, len * 2 + 2));
		this->maxPosLen = len;
	}
	if (this->maxLen == 0 || len > this->maxLen) {
		$set(this, glyphData, $new($ints, len));
		$set(this, chData, $new($chars, len));
		$set(this, images, $new($longs, len));
		this->maxLen = len;
	}
}

void GlyphList::init$() {
	this->len = 0;
	this->maxLen = 0;
	this->maxPosLen = 0;
}

GlyphList* GlyphList::getInstance() {
	$init(GlyphList);
	if ($nc(GlyphList::inUse)->compareAndSet(false, true)) {
		return GlyphList::reusableGL;
	} else {
		return $new(GlyphList);
	}
}

bool GlyphList::setFromString($FontInfo* info, $String* str, float x, float y) {
	this->x = x;
	this->y = y;
	$set(this, strikelist, $nc(info)->fontStrike);
	this->lcdRGBOrder = info->lcdRGBOrder;
	this->lcdSubPixPos = info->lcdSubPixPos;
	this->len = $nc(str)->length();
	ensureCapacity(this->len);
	str->getChars(0, this->len, this->chData, 0);
	return mapChars(info, this->len);
}

bool GlyphList::setFromChars($FontInfo* info, $chars* chars, int32_t off, int32_t alen, float x, float y) {
	this->x = x;
	this->y = y;
	$set(this, strikelist, $nc(info)->fontStrike);
	this->lcdRGBOrder = info->lcdRGBOrder;
	this->lcdSubPixPos = info->lcdSubPixPos;
	this->len = alen;
	if (alen < 0) {
		this->len = 0;
	} else {
		this->len = alen;
	}
	ensureCapacity(this->len);
	$System::arraycopy(chars, off, this->chData, 0, this->len);
	return mapChars(info, this->len);
}

bool GlyphList::mapChars($FontInfo* info, int32_t len) {
	if ($nc($($nc($nc(info)->font2D)->getMapper()))->charsToGlyphsNS(len, this->chData, this->glyphData)) {
		return false;
	}
	$nc($nc(info)->fontStrike)->getGlyphImagePtrs(this->glyphData, this->images, len);
	this->glyphindex = -1;
	return true;
}

void GlyphList::setFromGlyphVector($FontInfo* info, $GlyphVector* gv, float x, float y) {
	this->x = x;
	this->y = y;
	this->lcdRGBOrder = $nc(info)->lcdRGBOrder;
	this->lcdSubPixPos = info->lcdSubPixPos;
	$var($StandardGlyphVector, sgv, $StandardGlyphVector::getStandardGV(gv, info));
	this->usePositions$ = $nc(sgv)->needsPositions(info->devTx);
	this->len = sgv->getNumGlyphs();
	ensureCapacity(this->len);
	$set(this, strikelist, sgv->setupGlyphImages(this->images, this->usePositions$ ? this->positions : ($floats*)nullptr, info->devTx));
	this->glyphindex = -1;
}

void GlyphList::startGlyphIteration() {
	if (this->glyphindex >= 0) {
		$throwNew($InternalError, "glyph iteration restarted"_s);
	}
	if (this->metrics == nullptr) {
		$set(this, metrics, $new($ints, 5));
	}
	this->gposx = this->x + 0.5f;
	this->gposy = this->y + 0.5f;
}

$ints* GlyphList::getBounds(int32_t endGlyphIndex) {
	fillBounds(this->metrics, endGlyphIndex);
	return this->metrics;
}

void GlyphList::setGlyphIndex(int32_t i) {
	this->glyphindex = i;
	if ($nc(this->images)->get(i) == (int64_t)0) {
		$nc(this->metrics)->set(0, $cast(int32_t, this->gposx));
		$nc(this->metrics)->set(1, $cast(int32_t, this->gposy));
		$nc(this->metrics)->set(2, 0);
		$nc(this->metrics)->set(3, 0);
		$nc(this->metrics)->set(4, 0);
		return;
	}
	$init($StrikeCache);
	float gx = $nc($StrikeCache::unsafe)->getFloat($nc(this->images)->get(i) + $StrikeCache::topLeftXOffset);
	float gy = $nc($StrikeCache::unsafe)->getFloat($nc(this->images)->get(i) + $StrikeCache::topLeftYOffset);
	if (this->usePositions$) {
		$nc(this->metrics)->set(0, $cast(int32_t, $Math::floor($nc(this->positions)->get(i << 1) + this->gposx + gx)));
		$nc(this->metrics)->set(1, $cast(int32_t, $Math::floor($nc(this->positions)->get((i << 1) + 1) + this->gposy + gy)));
	} else {
		$nc(this->metrics)->set(0, $cast(int32_t, $Math::floor(this->gposx + gx)));
		$nc(this->metrics)->set(1, $cast(int32_t, $Math::floor(this->gposy + gy)));
		this->gposx += $nc($StrikeCache::unsafe)->getFloat($nc(this->images)->get(i) + $StrikeCache::xAdvanceOffset);
		this->gposy += $nc($StrikeCache::unsafe)->getFloat($nc(this->images)->get(i) + $StrikeCache::yAdvanceOffset);
	}
	$nc(this->metrics)->set(2, $nc($StrikeCache::unsafe)->getChar($nc(this->images)->get(i) + $StrikeCache::widthOffset));
	$nc(this->metrics)->set(3, $nc($StrikeCache::unsafe)->getChar($nc(this->images)->get(i) + $StrikeCache::heightOffset));
	$nc(this->metrics)->set(4, $nc($StrikeCache::unsafe)->getChar($nc(this->images)->get(i) + $StrikeCache::rowBytesOffset));
}

$ints* GlyphList::getMetrics() {
	return this->metrics;
}

$bytes* GlyphList::getGrayBits() {
	int32_t len = $nc(this->metrics)->get(4) * $nc(this->metrics)->get(3);
	if (this->graybits == nullptr) {
		$set(this, graybits, $new($bytes, $Math::max(len, GlyphList::MINGRAYLENGTH)));
	} else if (len > $nc(this->graybits)->length) {
		$set(this, graybits, $new($bytes, len));
	}
	if ($nc(this->images)->get(this->glyphindex) == (int64_t)0) {
		return this->graybits;
	}
	$init($StrikeCache);
	int64_t pixelDataAddress = $nc($StrikeCache::unsafe)->getAddress($nc(this->images)->get(this->glyphindex) + $StrikeCache::pixelDataOffset);
	if (pixelDataAddress == (int64_t)0) {
		return this->graybits;
	}
	for (int32_t i = 0; i < len; ++i) {
		$nc(this->graybits)->set(i, $nc($StrikeCache::unsafe)->getByte(pixelDataAddress + i));
	}
	return this->graybits;
}

$longs* GlyphList::getImages() {
	return this->images;
}

bool GlyphList::usePositions() {
	return this->usePositions$;
}

$floats* GlyphList::getPositions() {
	return this->positions;
}

float GlyphList::getX() {
	return this->x;
}

float GlyphList::getY() {
	return this->y;
}

$Object* GlyphList::getStrike() {
	return $of(this->strikelist);
}

bool GlyphList::isSubPixPos() {
	return this->lcdSubPixPos;
}

bool GlyphList::isRGBOrder() {
	return this->lcdRGBOrder;
}

void GlyphList::dispose() {
	if (this == GlyphList::reusableGL) {
		if (this->graybits != nullptr && $nc(this->graybits)->length > GlyphList::MAXGRAYLENGTH) {
			$set(this, graybits, nullptr);
		}
		this->usePositions$ = false;
		$set(this, strikelist, nullptr);
		$nc(GlyphList::inUse)->set(false);
	}
}

int32_t GlyphList::getNumGlyphs() {
	return this->len;
}

void GlyphList::fillBounds($ints* bounds, int32_t endGlyphIndex) {
	$init($StrikeCache);
	int32_t xOffset = $StrikeCache::topLeftXOffset;
	int32_t yOffset = $StrikeCache::topLeftYOffset;
	int32_t wOffset = $StrikeCache::widthOffset;
	int32_t hOffset = $StrikeCache::heightOffset;
	int32_t xAdvOffset = $StrikeCache::xAdvanceOffset;
	int32_t yAdvOffset = $StrikeCache::yAdvanceOffset;
	int32_t startGlyphIndex = this->glyphindex + 1;
	if (startGlyphIndex >= endGlyphIndex) {
		$nc(bounds)->set(0, bounds->set(1, bounds->set(2, bounds->set(3, 0))));
		return;
	}
	float bx0 = 0.0;
	float by0 = 0.0;
	float bx1 = 0.0;
	float by1 = 0.0;
	$init($Float);
	bx0 = (by0 = $Float::POSITIVE_INFINITY);
	bx1 = (by1 = $Float::NEGATIVE_INFINITY);
	int32_t posIndex = startGlyphIndex << 1;
	float glx = this->gposx;
	float gly = this->gposy;
	char16_t gw = 0;
	char16_t gh = 0;
	float gx = 0.0;
	float gy = 0.0;
	float gx0 = 0.0;
	float gy0 = 0.0;
	float gx1 = 0.0;
	float gy1 = 0.0;
	for (int32_t i = startGlyphIndex; i < endGlyphIndex; ++i) {
		if ($nc(this->images)->get(i) == (int64_t)0) {
			continue;
		}
		gx = $nc($StrikeCache::unsafe)->getFloat($nc(this->images)->get(i) + xOffset);
		gy = $nc($StrikeCache::unsafe)->getFloat($nc(this->images)->get(i) + yOffset);
		gw = $nc($StrikeCache::unsafe)->getChar($nc(this->images)->get(i) + wOffset);
		gh = $nc($StrikeCache::unsafe)->getChar($nc(this->images)->get(i) + hOffset);
		if (this->usePositions$) {
			gx0 = $nc(this->positions)->get(posIndex++) + gx + glx;
			gy0 = $nc(this->positions)->get(posIndex++) + gy + gly;
		} else {
			gx0 = glx + gx;
			gy0 = gly + gy;
			glx += $nc($StrikeCache::unsafe)->getFloat($nc(this->images)->get(i) + xAdvOffset);
			gly += $nc($StrikeCache::unsafe)->getFloat($nc(this->images)->get(i) + yAdvOffset);
		}
		gx1 = gx0 + gw;
		gy1 = gy0 + gh;
		if (bx0 > gx0) {
			bx0 = gx0;
		}
		if (by0 > gy0) {
			by0 = gy0;
		}
		if (bx1 < gx1) {
			bx1 = gx1;
		}
		if (by1 < gy1) {
			by1 = gy1;
		}
	}
	$nc(bounds)->set(0, $cast(int32_t, $Math::floor(bx0)));
	bounds->set(1, $cast(int32_t, $Math::floor(by0)));
	bounds->set(2, $cast(int32_t, $Math::floor(bx1)));
	bounds->set(3, $cast(int32_t, $Math::floor(by1)));
}

bool GlyphList::canContainColorGlyphs() {
	$init(GlyphList);
	$init($FontUtilities);
	return $FontUtilities::isMacOSX;
}

bool GlyphList::isColorGlyph(int32_t glyphIndex) {
	$init($StrikeCache);
	int32_t width = $nc($StrikeCache::unsafe)->getChar($nc(this->images)->get(glyphIndex) + $StrikeCache::widthOffset);
	int32_t rowBytes = $nc($StrikeCache::unsafe)->getChar($nc(this->images)->get(glyphIndex) + $StrikeCache::rowBytesOffset);
	return rowBytes == width * 4;
}

$SurfaceData* GlyphList::getColorGlyphData() {
	if (this->glyphSurfaceData == nullptr) {
		$set(this, glyphSurfaceData, $new($ColorGlyphSurfaceData));
	}
	$nc(this->glyphSurfaceData)->setCurrentGlyph($nc(this->images)->get(this->glyphindex));
	return this->glyphSurfaceData;
}

void clinit$GlyphList($Class* class$) {
	$assignStatic(GlyphList::reusableGL, $new(GlyphList));
	$assignStatic(GlyphList::inUse, $new($AtomicBoolean));
}

GlyphList::GlyphList() {
}

$Class* GlyphList::load$($String* name, bool initialize) {
	$loadClass(GlyphList, name, initialize, &_GlyphList_ClassInfo_, clinit$GlyphList, allocate$GlyphList);
	return class$;
}

$Class* GlyphList::class$ = nullptr;

	} // font
} // sun