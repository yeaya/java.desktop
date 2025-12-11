#include <sun/font/CFont.h>

#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/lang/InternalError.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <sun/font/CCharToGlyphMapper.h>
#include <sun/font/CCompositeGlyphMapper.h>
#include <sun/font/CStrike.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/CompositeGlyphMapper.h>
#include <sun/font/Font2D.h>
#include <sun/font/Font2DHandle.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/PhysicalStrike.h>
#include <sun/font/StrikeMetrics.h>
#include <jcpp.h>

#undef BOLD
#undef DEFAULT_FRC
#undef FWEIGHT_NORMAL
#undef FWIDTH_NORMAL
#undef ITALIC
#undef NO_FALLBACK
#undef PLAIN

using $PhysicalFontArray = $Array<::sun::font::PhysicalFont>;
using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $CCharToGlyphMapper = ::sun::font::CCharToGlyphMapper;
using $CCompositeGlyphMapper = ::sun::font::CCompositeGlyphMapper;
using $CStrike = ::sun::font::CStrike;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $CompositeFont = ::sun::font::CompositeFont;
using $CompositeGlyphMapper = ::sun::font::CompositeGlyphMapper;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $FontUtilities = ::sun::font::FontUtilities;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $PhysicalStrike = ::sun::font::PhysicalStrike;
using $StrikeMetrics = ::sun::font::StrikeMetrics;

namespace sun {
	namespace font {

$FieldInfo _CFont_FieldInfo_[] = {
	{"isFakeItalic", "Z", nullptr, $PRIVATE, $field(CFont, isFakeItalic)},
	{"nativeFontName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CFont, nativeFontName)},
	{"nativeFontPtr", "J", nullptr, $PRIVATE, $field(CFont, nativeFontPtr)},
	{"fontWidth", "I", nullptr, $PRIVATE, $field(CFont, fontWidth)},
	{"fontWeight", "I", nullptr, $PRIVATE, $field(CFont, fontWeight)},
	{"compFont", "Lsun/font/CompositeFont;", nullptr, $PRIVATE, $field(CFont, compFont)},
	{"DEFAULT_FRC", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE | $STATIC, $staticField(CFont, DEFAULT_FRC)},
	{}
};

$MethodInfo _CFont_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CFont::*)($String*)>(&CFont::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CFont::*)($String*,$String*)>(&CFont::init$))},
	{"<init>", "(Lsun/font/CFont;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CFont::*)(CFont*,$String*)>(&CFont::init$))},
	{"createCompositeFont", "()Lsun/font/CompositeFont;", nullptr, $PRIVATE, $method(static_cast<$CompositeFont*(CFont::*)()>(&CFont::createCompositeFont))},
	{"createItalicVariant", "()Lsun/font/CFont;", nullptr, $PUBLIC, $method(static_cast<CFont*(CFont::*)()>(&CFont::createItalicVariant))},
	{"createNativeFont", "(Ljava/lang/String;I)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)($String*,int32_t)>(&CFont::createNativeFont))},
	{"createStrike", "(Lsun/font/FontStrikeDesc;)Lsun/font/FontStrike;", nullptr, $PROTECTED},
	{"disposeNativeFont", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CFont::disposeNativeFont))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"finalize", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getCGFontPtrNative", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CFont::*)(int64_t)>(&CFont::getCGFontPtrNative))},
	{"getCascadeList", "(JLjava/util/ArrayList;)V", "(JLjava/util/ArrayList<Ljava/lang/String;>;)V", $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$ArrayList*)>(&CFont::getCascadeList))},
	{"getCompositeFont2D", "()Lsun/font/CompositeFont;", nullptr, $PUBLIC},
	{"getFontMetrics", "(J)Lsun/font/StrikeMetrics;", nullptr, 0},
	{"getGlyphAdvance", "(JI)F", nullptr, 0},
	{"getGlyphImage", "(JI)J", nullptr, 0},
	{"getGlyphMetrics", "(JILjava/awt/geom/Point2D$Float;)V", nullptr, 0},
	{"getGlyphOutline", "(JIFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getGlyphOutlineBounds", "(JI)Ljava/awt/geom/Rectangle2D$Float;", nullptr, 0},
	{"getGlyphVectorOutline", "(J[IIFF)Ljava/awt/geom/GeneralPath;", nullptr, 0},
	{"getMapper", "()Lsun/font/CharToGlyphMapper;", nullptr, $PROTECTED},
	{"getNativeFontPtr", "()J", nullptr, $PROTECTED | $SYNCHRONIZED, $method(static_cast<int64_t(CFont::*)()>(&CFont::getNativeFontPtr))},
	{"getPlatformNativeFontPtr", "()J", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getStrike", "(Ljava/awt/Font;)Lsun/font/FontStrike;", nullptr, $PUBLIC},
	{"getTableBytes", "(I)[B", nullptr, $PROTECTED},
	{"getTableBytesNative", "(JI)[B", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$bytes*(CFont::*)(int64_t,int32_t)>(&CFont::getTableBytesNative))},
	{"getWeight", "()I", nullptr, $PUBLIC},
	{"getWeightNative", "(J)F", nullptr, $PRIVATE | $NATIVE, $method(static_cast<float(CFont::*)(int64_t)>(&CFont::getWeightNative))},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"getWidthNative", "(J)F", nullptr, $PRIVATE | $NATIVE, $method(static_cast<float(CFont::*)(int64_t)>(&CFont::getWidthNative))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_createNativeFont 6
#define _METHOD_INDEX_disposeNativeFont 8
#define _METHOD_INDEX_getCGFontPtrNative 11
#define _METHOD_INDEX_getCascadeList 12
#define _METHOD_INDEX_getTableBytesNative 26
#define _METHOD_INDEX_getWeightNative 28
#define _METHOD_INDEX_getWidthNative 30

$ClassInfo _CFont_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.CFont",
	"sun.font.PhysicalFont",
	"sun.font.FontSubstitution",
	_CFont_FieldInfo_,
	_CFont_MethodInfo_
};

$Object* allocate$CFont($Class* clazz) {
	return $of($alloc(CFont));
}

$Object* CFont::clone() {
	 return this->$PhysicalFont::clone();
}

$FontRenderContext* CFont::DEFAULT_FRC = nullptr;

$StrikeMetrics* CFont::getFontMetrics(int64_t pScalerContext) {
	$throwNew($InternalError, "Not implemented"_s);
	$shouldNotReachHere();
}

float CFont::getGlyphAdvance(int64_t pScalerContext, int32_t glyphCode) {
	$throwNew($InternalError, "Not implemented"_s);
	$shouldNotReachHere();
}

void CFont::getGlyphMetrics(int64_t pScalerContext, int32_t glyphCode, $Point2D$Float* metrics) {
	$throwNew($InternalError, "Not implemented"_s);
}

int64_t CFont::getGlyphImage(int64_t pScalerContext, int32_t glyphCode) {
	$throwNew($InternalError, "Not implemented"_s);
	$shouldNotReachHere();
}

$Rectangle2D$Float* CFont::getGlyphOutlineBounds(int64_t pScalerContext, int32_t glyphCode) {
	$throwNew($InternalError, "Not implemented"_s);
	$shouldNotReachHere();
}

$GeneralPath* CFont::getGlyphOutline(int64_t pScalerContext, int32_t glyphCode, float x, float y) {
	$throwNew($InternalError, "Not implemented"_s);
	$shouldNotReachHere();
}

$GeneralPath* CFont::getGlyphVectorOutline(int64_t pScalerContext, $ints* glyphs, int32_t numGlyphs, float x, float y) {
	$throwNew($InternalError, "Not implemented"_s);
	$shouldNotReachHere();
}

$bytes* CFont::getTableBytes(int32_t tag) {
	return getTableBytesNative(getNativeFontPtr(), tag);
}

$bytes* CFont::getTableBytesNative(int64_t nativeFontPtr, int32_t tag) {
	$var($bytes, $ret, nullptr);
	$prepareNative(CFont, getTableBytesNative, $bytes*, int64_t nativeFontPtr, int32_t tag);
	$assign($ret, $invokeNativeObject(nativeFontPtr, tag));
	$finishNative();
	return $ret;
}

int64_t CFont::createNativeFont($String* nativeFontName, int32_t style) {
	$init(CFont);
	int64_t $ret = 0;
	$prepareNativeStatic(CFont, createNativeFont, int64_t, $String* nativeFontName, int32_t style);
	$ret = $invokeNativeStatic(nativeFontName, style);
	$finishNativeStatic();
	return $ret;
}

void CFont::disposeNativeFont(int64_t nativeFontPtr) {
	$init(CFont);
	$prepareNativeStatic(CFont, disposeNativeFont, void, int64_t nativeFontPtr);
	$invokeNativeStatic(nativeFontPtr);
	$finishNativeStatic();
}

float CFont::getWidthNative(int64_t nativeFontPtr) {
	float $ret = 0.0;
	$prepareNative(CFont, getWidthNative, float, int64_t nativeFontPtr);
	$ret = $invokeNative(nativeFontPtr);
	$finishNative();
	return $ret;
}

float CFont::getWeightNative(int64_t nativeFontPtr) {
	float $ret = 0.0;
	$prepareNative(CFont, getWeightNative, float, int64_t nativeFontPtr);
	$ret = $invokeNative(nativeFontPtr);
	$finishNative();
	return $ret;
}

int32_t CFont::getWidth() {
	if (this->fontWidth == -1) {
		float fw = getWidthNative(getNativeFontPtr());
		if (fw == 0.0) {
			this->fontWidth = $Font2D::FWIDTH_NORMAL;
			return this->fontWidth;
		}
		fw += 1.0;
		fw *= 100.0;
		if (fw <= 50.0) {
			this->fontWidth = 1;
		} else if (fw <= 62.5) {
			this->fontWidth = 2;
		} else if (fw <= 75.0) {
			this->fontWidth = 3;
		} else if (fw <= 87.5) {
			this->fontWidth = 4;
		} else if (fw <= 100.0) {
			this->fontWidth = 5;
		} else if (fw <= 112.5) {
			this->fontWidth = 6;
		} else if (fw <= 125.0) {
			this->fontWidth = 7;
		} else if (fw <= 150.0) {
			this->fontWidth = 8;
		} else {
			this->fontWidth = 9;
		}
	}
	return this->fontWidth;
}

int32_t CFont::getWeight() {
	if (this->fontWeight == -1) {
		float fw = getWeightNative(getNativeFontPtr());
		if (fw == 0) {
			return $Font2D::FWEIGHT_NORMAL;
		}
		fw += 1.0;
		fw *= 500;
		this->fontWeight = $cast(int32_t, fw);
	}
	return this->fontWeight;
}

void CFont::init$($String* name) {
	CFont::init$(name, name);
}

void CFont::init$($String* name, $String* inFamilyName) {
	$PhysicalFont::init$();
	this->fontWidth = -1;
	this->fontWeight = -1;
	$set(this, handle, $new($Font2DHandle, this));
	$set(this, fullName, name);
	$set(this, familyName, inFamilyName);
	$set(this, nativeFontName, this->fullName);
	setStyle();
}

void CFont::init$(CFont* other, $String* logicalFamilyName) {
	$PhysicalFont::init$();
	this->fontWidth = -1;
	this->fontWeight = -1;
	$set(this, handle, $new($Font2DHandle, this));
	$set(this, fullName, logicalFamilyName);
	$set(this, familyName, logicalFamilyName);
	$set(this, nativeFontName, $nc(other)->nativeFontName);
	this->style = other->style;
	this->isFakeItalic = other->isFakeItalic;
}

CFont* CFont::createItalicVariant() {
	$var(CFont, font, $new(CFont, this, this->familyName));
	$set(font, nativeFontName, this->fullName);
	$set(font, fullName, $str({this->fullName, (this->style == $Font::BOLD ? ""_s : "-"_s), "Italic-Derived"_s}));
	font->style |= $Font::ITALIC;
	font->isFakeItalic = true;
	return font;
}

int64_t CFont::getNativeFontPtr() {
	$synchronized(this) {
		if (this->nativeFontPtr == (int64_t)0) {
			this->nativeFontPtr = createNativeFont(this->nativeFontName, this->style);
		}
		return this->nativeFontPtr;
	}
}

int64_t CFont::getCGFontPtrNative(int64_t ptr) {
	int64_t $ret = 0;
	$prepareNative(CFont, getCGFontPtrNative, int64_t, int64_t ptr);
	$ret = $invokeNative(ptr);
	$finishNative();
	return $ret;
}

int64_t CFont::getPlatformNativeFontPtr() {
	$synchronized(this) {
		return getCGFontPtrNative(getNativeFontPtr());
	}
}

void CFont::getCascadeList(int64_t nativeFontPtr, $ArrayList* listOfString) {
	$init(CFont);
	$prepareNativeStatic(CFont, getCascadeList, void, int64_t nativeFontPtr, $ArrayList* listOfString);
	$invokeNativeStatic(nativeFontPtr, listOfString);
	$finishNativeStatic();
}

$CompositeFont* CFont::createCompositeFont() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, listOfString, $new($ArrayList));
	getCascadeList(this->nativeFontPtr, listOfString);
	listOfString->add("GeezaPro"_s);
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	int32_t numFonts = 1 + listOfString->size();
	$var($PhysicalFontArray, fonts, $new($PhysicalFontArray, numFonts));
	fonts->set(0, this);
	int32_t idx = 1;
	if ($FontUtilities::isLogging()) {
		$FontUtilities::logInfo($$str({"Cascading list for "_s, this, " :"_s}));
	}
	{
		$var($Iterator, i$, listOfString->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				if ($FontUtilities::isLogging()) {
					$FontUtilities::logInfo($$str({"Fallback:"_s, s}));
				}
				if ($nc(s)->equals(".AppleSymbolsFB"_s)) {
					$assign(s, "AppleSymbols"_s);
				}
				$var($Font2D, f2d, $nc(fm)->findFont2D(s, $Font::PLAIN, $FontManager::NO_FALLBACK));
				if (f2d == nullptr || $equals(f2d, this)) {
					continue;
				}
				fonts->set(idx++, $cast($PhysicalFont, f2d));
			}
		}
	}
	if (idx < fonts->length) {
		$var($PhysicalFontArray, orig, fonts);
		$assign(fonts, $new($PhysicalFontArray, idx));
		$System::arraycopy(orig, 0, fonts, 0, idx);
	}
	$var($CompositeFont, compFont, $new($CompositeFont, fonts));
	$set(compFont, mapper, $new($CCompositeGlyphMapper, compFont));
	return compFont;
}

$CompositeFont* CFont::getCompositeFont2D() {
	if (this->compFont == nullptr) {
		$set(this, compFont, createCompositeFont());
	}
	return this->compFont;
}

void CFont::finalize() {
	$synchronized(this) {
		if (this->nativeFontPtr != 0) {
			disposeNativeFont(this->nativeFontPtr);
		}
		this->nativeFontPtr = 0;
	}
}

$CharToGlyphMapper* CFont::getMapper() {
	if (this->mapper == nullptr) {
		$set(this, mapper, $new($CCharToGlyphMapper, this));
	}
	return this->mapper;
}

$FontStrike* CFont::createStrike($FontStrikeDesc* desc$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($FontStrikeDesc, desc, desc$renamed);
	if (this->isFakeItalic) {
		$assign(desc, $new($FontStrikeDesc, desc));
		$nc(desc->glyphTx)->concatenate($($AffineTransform::getShearInstance(-0.2, (double)0)));
	}
	return $new($CStrike, this, desc);
}

$FontStrike* CFont::getStrike($Font* font) {
	return getStrike(font, CFont::DEFAULT_FRC);
}

bool CFont::equals(Object$* o) {
	if (!$PhysicalFont::equals(o)) {
		return false;
	}
	int32_t var$0 = $nc(($cast($Font2D, o)))->getStyle();
	return var$0 == this->getStyle();
}

int32_t CFont::hashCode() {
	int32_t var$0 = $PhysicalFont::hashCode();
	return var$0 ^ this->getStyle();
}

$String* CFont::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"CFont { fullName: "_s, this->fullName, ",  familyName: "_s, this->familyName, ", style: "_s, $$str(this->style), " } aka: "_s, $($PhysicalFont::toString())});
}

void clinit$CFont($Class* class$) {
	$assignStatic(CFont::DEFAULT_FRC, $new($FontRenderContext, ($AffineTransform*)nullptr, false, false));
}

CFont::CFont() {
}

$Class* CFont::load$($String* name, bool initialize) {
	$loadClass(CFont, name, initialize, &_CFont_ClassInfo_, clinit$CFont, allocate$CFont);
	return class$;
}

$Class* CFont::class$ = nullptr;

	} // font
} // sun