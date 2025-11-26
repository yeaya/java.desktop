#include <sun/font/NativeFont.h>

#include <java/awt/Font.h>
#include <java/awt/FontFormatException.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Math.h>
#include <java/util/Locale.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/DelegateStrike.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/NativeGlyphMapper.h>
#include <sun/font/NativeStrike.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/PhysicalStrike.h>
#include <sun/font/StrikeMetrics.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef BOLD
#undef ENGLISH
#undef ITALIC
#undef NATIVE_RANK

using $Font = ::java::awt::Font;
using $FontFormatException = ::java::awt::FontFormatException;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $DelegateStrike = ::sun::font::DelegateStrike;
using $Font2D = ::sun::font::Font2D;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $NativeGlyphMapper = ::sun::font::NativeGlyphMapper;
using $NativeStrike = ::sun::font::NativeStrike;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $PhysicalStrike = ::sun::font::PhysicalStrike;
using $StrikeMetrics = ::sun::font::StrikeMetrics;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _NativeFont_FieldInfo_[] = {
	{"encoding", "Ljava/lang/String;", nullptr, 0, $field(NativeFont, encoding)},
	{"numGlyphs", "I", nullptr, $PRIVATE, $field(NativeFont, numGlyphs)},
	{"isBitmapDelegate", "Z", nullptr, 0, $field(NativeFont, isBitmapDelegate)},
	{"delegateFont", "Lsun/font/PhysicalFont;", nullptr, 0, $field(NativeFont, delegateFont)},
	{}
};

$MethodInfo _NativeFont_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(NativeFont::*)($String*,bool)>(&NativeFont::init$)), "java.awt.FontFormatException"},
	{"countGlyphs", "([BI)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(NativeFont::*)($bytes*,int32_t)>(&NativeFont::countGlyphs))},
	{"createStrike", "(Lsun/font/FontStrikeDesc;)Lsun/font/FontStrike;", nullptr, 0},
	{"fontExists", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&NativeFont::fontExists))},
	{"fontExists", "([B)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($bytes*)>(&NativeFont::fontExists))},
	{"getDelegateFont", "()Lsun/font/PhysicalFont;", nullptr, 0},
	{"getFontMetrics", "(J)Lsun/font/StrikeMetrics;", nullptr, $NATIVE},
	{"getGlyphAdvance", "(JI)F", nullptr, $NATIVE},
	{"getGlyphImage", "(JI)J", nullptr, $NATIVE},
	{"getGlyphImageNoDefault", "(JI)J", nullptr, $NATIVE},
	{"getGlyphMetrics", "(JILjava/awt/geom/Point2D$Float;)V", nullptr, 0},
	{"getGlyphOutline", "(JIFF)Ljava/awt/geom/GeneralPath;", nullptr, $PUBLIC},
	{"getGlyphOutlineBounds", "(JI)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0},
	{"getGlyphVectorOutline", "(J[IIFF)Ljava/awt/geom/GeneralPath;", nullptr, $PUBLIC},
	{"getMapper", "()Lsun/font/CharToGlyphMapper;", nullptr, $PUBLIC},
	{"getMaxCharBounds", "(Ljava/awt/font/FontRenderContext;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{"getPlatformNameBytes", "(I)[B", nullptr, 0},
	{"hasExternalBitmaps", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&NativeFont::hasExternalBitmaps))},
	{"haveBitmapFonts", "([B)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($bytes*)>(&NativeFont::haveBitmapFonts))},
	{"initNames", "()V", nullptr, $PRIVATE, $method(static_cast<void(NativeFont::*)()>(&NativeFont::initNames)), "java.awt.FontFormatException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_countGlyphs 1
#define _METHOD_INDEX_fontExists 4
#define _METHOD_INDEX_getFontMetrics 6
#define _METHOD_INDEX_getGlyphAdvance 7
#define _METHOD_INDEX_getGlyphImage 8
#define _METHOD_INDEX_getGlyphImageNoDefault 9
#define _METHOD_INDEX_haveBitmapFonts 19

$ClassInfo _NativeFont_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.NativeFont",
	"sun.font.PhysicalFont",
	nullptr,
	_NativeFont_FieldInfo_,
	_NativeFont_MethodInfo_
};

$Object* allocate$NativeFont($Class* clazz) {
	return $of($alloc(NativeFont));
}

void NativeFont::init$($String* platName, bool bitmapDelegate) {
	$PhysicalFont::init$(platName, nullptr);
	this->numGlyphs = -1;
	this->isBitmapDelegate = bitmapDelegate;
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($FontFormatException, "Native font in headless toolkit"_s);
	}
	this->fontRank = $Font2D::NATIVE_RANK;
	initNames();
	if (getNumGlyphs() == 0) {
		$throwNew($FontFormatException, $$str({"Couldn\'t locate font"_s, platName}));
	}
}

void NativeFont::initNames() {
	$useLocalCurrentObjectStackCache();
	$var($ints, hPos, $new($ints, 14));
	int32_t hyphenCnt = 1;
	int32_t pos = 1;
	$init($Locale);
	$var($String, xlfd, $nc(this->platName)->toLowerCase($Locale::ENGLISH));
	if (xlfd->startsWith("-"_s)) {
		while (pos != -1 && hyphenCnt < 14) {
			pos = xlfd->indexOf((int32_t)u'-', pos);
			if (pos != -1) {
				hPos->set(hyphenCnt++, pos);
				++pos;
			}
		}
	}
	if (hyphenCnt == 14 && pos != -1) {
		$var($String, tmpFamily, xlfd->substring(hPos->get(1) + 1, hPos->get(2)));
		$var($StringBuilder, sBuffer, $new($StringBuilder, tmpFamily));
		char16_t ch = $Character::toUpperCase(sBuffer->charAt(0));
		sBuffer->replace(0, 1, $($String::valueOf(ch)));
		for (int32_t i = 1; i < sBuffer->length() - 1; ++i) {
			if (sBuffer->charAt(i) == u' ') {
				ch = $Character::toUpperCase(sBuffer->charAt(i + 1));
				sBuffer->replace(i + 1, i + 2, $($String::valueOf(ch)));
			}
		}
		$set(this, familyName, sBuffer->toString());
		$var($String, tmpWeight, xlfd->substring(hPos->get(2) + 1, hPos->get(3)));
		$var($String, tmpSlant, xlfd->substring(hPos->get(3) + 1, hPos->get(4)));
		$var($String, styleStr, nullptr);
		bool var$0 = tmpWeight->indexOf("bold"_s) >= 0;
		if (var$0 || tmpWeight->indexOf("demi"_s) >= 0) {
			this->style |= $Font::BOLD;
			$assign(styleStr, "Bold"_s);
		}
		bool var$1 = tmpSlant->equals("i"_s);
		if (var$1 || tmpSlant->indexOf("italic"_s) >= 0) {
			this->style |= $Font::ITALIC;
			if (styleStr == nullptr) {
				$assign(styleStr, "Italic"_s);
			} else {
				$assign(styleStr, $str({styleStr, " Italic"_s}));
			}
		} else {
			bool var$3 = tmpSlant->equals("o"_s);
			if (var$3 || tmpSlant->indexOf("oblique"_s) >= 0) {
				this->style |= $Font::ITALIC;
				if (styleStr == nullptr) {
					$assign(styleStr, "Oblique"_s);
				} else {
					$assign(styleStr, $str({styleStr, " Oblique"_s}));
				}
			}
		}
		if (styleStr == nullptr) {
			$set(this, fullName, this->familyName);
		} else {
			$set(this, fullName, $str({this->familyName, " "_s, styleStr}));
		}
		$set(this, encoding, xlfd->substring(hPos->get(12) + 1));
		if ($nc(this->encoding)->startsWith("-"_s)) {
			$set(this, encoding, xlfd->substring(hPos->get(13) + 1));
		}
		if ($nc(this->encoding)->indexOf("fontspecific"_s) >= 0) {
			if (tmpFamily->indexOf("dingbats"_s) >= 0) {
				$set(this, encoding, "dingbats"_s);
			} else if (tmpFamily->indexOf("symbol"_s) >= 0) {
				$set(this, encoding, "symbol"_s);
			} else {
				$set(this, encoding, "iso8859-1"_s);
			}
		}
	} else {
		$throwNew($FontFormatException, $$str({"Bad native name "_s, this->platName}));
	}
}

bool NativeFont::hasExternalBitmaps($String* platName) {
	$init(NativeFont);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, platName));
	int32_t pos = sb->indexOf("-0-"_s);
	while (pos >= 0) {
		sb->replace(pos + 1, pos + 2, "*"_s);
		pos = sb->indexOf("-0-"_s, pos);
	}
	$var($String, xlfd, sb->toString());
	$var($bytes, bytes, nullptr);
	try {
		$assign(bytes, $nc(xlfd)->getBytes("UTF-8"_s));
	} catch ($UnsupportedEncodingException& e) {
		$assign(bytes, $nc(xlfd)->getBytes());
	}
	return haveBitmapFonts(bytes);
}

bool NativeFont::fontExists($String* xlfd) {
	$init(NativeFont);
	$var($bytes, bytes, nullptr);
	try {
		$assign(bytes, $nc(xlfd)->getBytes("UTF-8"_s));
	} catch ($UnsupportedEncodingException& e) {
		$assign(bytes, $nc(xlfd)->getBytes());
	}
	return fontExists(bytes);
}

bool NativeFont::haveBitmapFonts($bytes* xlfd) {
	$init(NativeFont);
	bool $ret = false;
	$prepareNativeStatic(NativeFont, haveBitmapFonts, bool, $bytes* xlfd);
	$ret = $invokeNativeStatic(NativeFont, haveBitmapFonts, xlfd);
	$finishNativeStatic();
	return $ret;
}

bool NativeFont::fontExists($bytes* xlfd) {
	$init(NativeFont);
	bool $ret = false;
	$prepareNativeStatic(NativeFont, fontExists, bool, $bytes* xlfd);
	$ret = $invokeNativeStatic(NativeFont, fontExists, xlfd);
	$finishNativeStatic();
	return $ret;
}

$CharToGlyphMapper* NativeFont::getMapper() {
	if (this->mapper == nullptr) {
		if (this->isBitmapDelegate) {
			$set(this, mapper, $new($NativeGlyphMapper, this));
		} else {
			$var($SunFontManager, fm, $SunFontManager::getInstance());
			$set(this, delegateFont, $nc(fm)->getDefaultPhysicalFont());
			$set(this, mapper, $nc(this->delegateFont)->getMapper());
		}
	}
	return this->mapper;
}

$FontStrike* NativeFont::createStrike($FontStrikeDesc* desc) {
	$useLocalCurrentObjectStackCache();
	if (this->isBitmapDelegate) {
		return $new($NativeStrike, this, desc);
	} else {
		if (this->delegateFont == nullptr) {
			$var($SunFontManager, fm, $SunFontManager::getInstance());
			$set(this, delegateFont, $nc(fm)->getDefaultPhysicalFont());
		}
		if ($instanceOf(NativeFont, this->delegateFont)) {
			return $new($NativeStrike, $cast(NativeFont, this->delegateFont), desc);
		}
		$var($FontStrike, delegate, $nc(this->delegateFont)->createStrike(desc));
		return $new($DelegateStrike, this, desc, delegate);
	}
}

$Rectangle2D* NativeFont::getMaxCharBounds($FontRenderContext* frc) {
	return nullptr;
}

$StrikeMetrics* NativeFont::getFontMetrics(int64_t pScalerContext) {
	$var($StrikeMetrics, $ret, nullptr);
	$prepareNative(NativeFont, getFontMetrics, $StrikeMetrics*, int64_t pScalerContext);
	$assign($ret, $invokeNative(NativeFont, getFontMetrics, pScalerContext));
	$finishNative();
	return $ret;
}

float NativeFont::getGlyphAdvance(int64_t pContext, int32_t glyphCode) {
	float $ret = 0.0;
	$prepareNative(NativeFont, getGlyphAdvance, float, int64_t pContext, int32_t glyphCode);
	$ret = $invokeNative(NativeFont, getGlyphAdvance, pContext, glyphCode);
	$finishNative();
	return $ret;
}

$Rectangle2D$Float* NativeFont::getGlyphOutlineBounds(int64_t pScalerContext, int32_t glyphCode) {
	return $new($Rectangle2D$Float, 0.0f, 0.0f, 0.0f, 0.0f);
}

$GeneralPath* NativeFont::getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) {
	return nullptr;
}

int64_t NativeFont::getGlyphImage(int64_t pScalerContext, int32_t glyphCode) {
	int64_t $ret = 0;
	$prepareNative(NativeFont, getGlyphImage, int64_t, int64_t pScalerContext, int32_t glyphCode);
	$ret = $invokeNative(NativeFont, getGlyphImage, pScalerContext, glyphCode);
	$finishNative();
	return $ret;
}

int64_t NativeFont::getGlyphImageNoDefault(int64_t pScalerContext, int32_t glyphCode) {
	int64_t $ret = 0;
	$prepareNative(NativeFont, getGlyphImageNoDefault, int64_t, int64_t pScalerContext, int32_t glyphCode);
	$ret = $invokeNative(NativeFont, getGlyphImageNoDefault, pScalerContext, glyphCode);
	$finishNative();
	return $ret;
}

void NativeFont::getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, $Point2D$Float* metrics) {
	$throwNew($RuntimeException, "this should be called on the strike"_s);
}

$GeneralPath* NativeFont::getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) {
	return nullptr;
}

int32_t NativeFont::countGlyphs($bytes* platformNameBytes, int32_t ptSize) {
	int32_t $ret = 0;
	$prepareNative(NativeFont, countGlyphs, int32_t, $bytes* platformNameBytes, int32_t ptSize);
	$ret = $invokeNative(NativeFont, countGlyphs, platformNameBytes, ptSize);
	$finishNative();
	return $ret;
}

int32_t NativeFont::getNumGlyphs() {
	if (this->numGlyphs == -1) {
		$var($bytes, bytes, getPlatformNameBytes(8));
		this->numGlyphs = countGlyphs(bytes, 8);
	}
	return this->numGlyphs;
}

$PhysicalFont* NativeFont::getDelegateFont() {
	if (this->delegateFont == nullptr) {
		$var($SunFontManager, fm, $SunFontManager::getInstance());
		$set(this, delegateFont, $nc(fm)->getDefaultPhysicalFont());
	}
	return this->delegateFont;
}

$bytes* NativeFont::getPlatformNameBytes(int32_t ptSize) {
	$useLocalCurrentObjectStackCache();
	$var($ints, hPos, $new($ints, 14));
	int32_t hyphenCnt = 1;
	int32_t pos = 1;
	while (pos != -1 && hyphenCnt < 14) {
		pos = $nc(this->platName)->indexOf((int32_t)u'-', pos);
		if (pos != -1) {
			hPos->set(hyphenCnt++, pos);
			++pos;
		}
	}
	$var($String, sizeStr, $Integer::toString($Math::abs(ptSize) * 10));
	$var($StringBuilder, sb, $new($StringBuilder, this->platName));
	sb->replace(hPos->get(11) + 1, hPos->get(12), "*"_s);
	sb->replace(hPos->get(9) + 1, hPos->get(10), "72"_s);
	sb->replace(hPos->get(8) + 1, hPos->get(9), "72"_s);
	sb->replace(hPos->get(7) + 1, hPos->get(8), sizeStr);
	sb->replace(hPos->get(6) + 1, hPos->get(7), "*"_s);
	if (hPos->get(0) == 0 && hPos->get(1) == 1) {
		sb->replace(hPos->get(0) + 1, hPos->get(1), "*"_s);
	}
	$var($String, xlfd, sb->toString());
	$var($bytes, bytes, nullptr);
	try {
		$assign(bytes, $nc(xlfd)->getBytes("UTF-8"_s));
	} catch ($UnsupportedEncodingException& e) {
		$assign(bytes, $nc(xlfd)->getBytes());
	}
	return bytes;
}

$String* NativeFont::toString() {
	return $str({" ** Native Font: Family="_s, this->familyName, " Name="_s, this->fullName, " style="_s, $$str(this->style), " nativeName="_s, this->platName});
}

NativeFont::NativeFont() {
}

$Class* NativeFont::load$($String* name, bool initialize) {
	$loadClass(NativeFont, name, initialize, &_NativeFont_ClassInfo_, allocate$NativeFont);
	return class$;
}

$Class* NativeFont::class$ = nullptr;

	} // font
} // sun