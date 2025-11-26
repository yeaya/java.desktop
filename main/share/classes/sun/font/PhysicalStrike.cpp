#include <sun/font/PhysicalStrike.h>

#include <java/awt/geom/Point2D$Float.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/StrikeCache.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

#undef INTMASK

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $Font2D = ::sun::font::Font2D;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $StrikeCache = ::sun::font::StrikeCache;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

$FieldInfo _PhysicalStrike_FieldInfo_[] = {
	{"INTMASK", "J", nullptr, $STATIC | $FINAL, $constField(PhysicalStrike, INTMASK)},
	{"longAddresses", "Z", nullptr, $STATIC, $staticField(PhysicalStrike, longAddresses)},
	{"physicalFont", "Lsun/font/PhysicalFont;", nullptr, $PRIVATE, $field(PhysicalStrike, physicalFont)},
	{"mapper", "Lsun/font/CharToGlyphMapper;", nullptr, $PROTECTED, $field(PhysicalStrike, mapper)},
	{"pScalerContext", "J", nullptr, $PROTECTED, $field(PhysicalStrike, pScalerContext)},
	{"longGlyphImages", "[J", nullptr, $PROTECTED, $field(PhysicalStrike, longGlyphImages)},
	{"intGlyphImages", "[I", nullptr, $PROTECTED, $field(PhysicalStrike, intGlyphImages)},
	{"glyphPointMapCache", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/Integer;Ljava/awt/geom/Point2D$Float;>;", 0, $field(PhysicalStrike, glyphPointMapCache)},
	{"getImageWithAdvance", "Z", nullptr, $PROTECTED, $field(PhysicalStrike, getImageWithAdvance)},
	{"complexTX", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(PhysicalStrike, complexTX)},
	{}
};

$MethodInfo _PhysicalStrike_MethodInfo_[] = {
	{"<init>", "(Lsun/font/PhysicalFont;Lsun/font/FontStrikeDesc;)V", nullptr, 0, $method(static_cast<void(PhysicalStrike::*)($PhysicalFont*,$FontStrikeDesc*)>(&PhysicalStrike::init$))},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(PhysicalStrike::*)()>(&PhysicalStrike::init$))},
	{"adjustPoint", "(Ljava/awt/geom/Point2D$Float;)V", nullptr, $PROTECTED},
	{"getCharMetrics", "(C)Ljava/awt/geom/Point2D$Float;", nullptr, 0},
	{"getCodePointAdvance", "(I)F", nullptr, 0},
	{"getFontMetrics", "()Lsun/font/StrikeMetrics;", nullptr, 0},
	{"getGlyphPoint", "(II)Ljava/awt/geom/Point2D$Float;", nullptr, 0},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{"getSlot0GlyphImagePtrs", "([I[JI)I", nullptr, 0},
	{}
};

$ClassInfo _PhysicalStrike_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.PhysicalStrike",
	"sun.font.FontStrike",
	nullptr,
	_PhysicalStrike_FieldInfo_,
	_PhysicalStrike_MethodInfo_
};

$Object* allocate$PhysicalStrike($Class* clazz) {
	return $of($alloc(PhysicalStrike));
}

bool PhysicalStrike::longAddresses = false;

void PhysicalStrike::init$($PhysicalFont* physicalFont, $FontStrikeDesc* desc) {
	$FontStrike::init$();
	$set(this, physicalFont, physicalFont);
	$set(this, desc, desc);
}

void PhysicalStrike::init$() {
	$FontStrike::init$();
}

int32_t PhysicalStrike::getNumGlyphs() {
	return $nc(this->physicalFont)->getNumGlyphs();
}

$StrikeMetrics* PhysicalStrike::getFontMetrics() {
	if (this->strikeMetrics == nullptr) {
		$set(this, strikeMetrics, $nc(this->physicalFont)->getFontMetrics(this->pScalerContext));
	}
	return this->strikeMetrics;
}

float PhysicalStrike::getCodePointAdvance(int32_t cp) {
	return getGlyphAdvance($nc($($nc(this->physicalFont)->getMapper()))->charToGlyph(cp));
}

$Point2D$Float* PhysicalStrike::getCharMetrics(char16_t ch) {
	return getGlyphMetrics($nc($($nc(this->physicalFont)->getMapper()))->charToGlyph(ch));
}

int32_t PhysicalStrike::getSlot0GlyphImagePtrs($ints* glyphCodes, $longs* images, int32_t len) {
	return 0;
}

$Point2D$Float* PhysicalStrike::getGlyphPoint(int32_t glyphCode, int32_t ptNumber) {
	$useLocalCurrentObjectStackCache();
	$var($Point2D$Float, gp, nullptr);
	$var($Integer, ptKey, $Integer::valueOf((glyphCode << 16) | ptNumber));
	if (this->glyphPointMapCache == nullptr) {
		$synchronized(this) {
			if (this->glyphPointMapCache == nullptr) {
				$set(this, glyphPointMapCache, $new($ConcurrentHashMap));
			}
		}
	} else {
		$assign(gp, $cast($Point2D$Float, $nc(this->glyphPointMapCache)->get(ptKey)));
	}
	if (gp == nullptr) {
		$assign(gp, $nc(this->physicalFont)->getGlyphPoint(this->pScalerContext, glyphCode, ptNumber));
		adjustPoint(gp);
		$nc(this->glyphPointMapCache)->put(ptKey, gp);
	}
	return gp;
}

void PhysicalStrike::adjustPoint($Point2D$Float* pt) {
}

void clinit$PhysicalStrike($Class* class$) {
	{
		$init($StrikeCache);
		switch ($StrikeCache::nativeAddressSize) {
		case 8:
			{
				PhysicalStrike::longAddresses = true;
				break;
			}
		case 4:
			{
				PhysicalStrike::longAddresses = false;
				break;
			}
		default:
			{
				$throwNew($RuntimeException, "Unexpected address size"_s);
			}
		}
	}
}

PhysicalStrike::PhysicalStrike() {
}

$Class* PhysicalStrike::load$($String* name, bool initialize) {
	$loadClass(PhysicalStrike, name, initialize, &_PhysicalStrike_ClassInfo_, clinit$PhysicalStrike, allocate$PhysicalStrike);
	return class$;
}

$Class* PhysicalStrike::class$ = nullptr;

	} // font
} // sun