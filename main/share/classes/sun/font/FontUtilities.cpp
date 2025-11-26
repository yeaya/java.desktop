#include <sun/font/FontUtilities.h>

#include <java/awt/Font.h>
#include <java/lang/ref/SoftReference.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/Font2DHandle.h>
#include <sun/font/FontAccess.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/font/FontUtilities$1.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/SunFontManager.h>
#include <sun/font/TrueTypeFont$DirectoryEntry.h>
#include <sun/font/TrueTypeFont.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef HI_SURROGATE_START
#undef LO_SURROGATE_END
#undef MAX_LAYOUT_CHARCODE
#undef MIN_LAYOUT_CHARCODE
#undef NO_FALLBACK

using $StringArray2 = $Array<::java::lang::String, 2>;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $CompositeFont = ::sun::font::CompositeFont;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;
using $FontAccess = ::sun::font::FontAccess;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $FontUtilities$1 = ::sun::font::FontUtilities$1;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $SunFontManager = ::sun::font::SunFontManager;
using $TrueTypeFont = ::sun::font::TrueTypeFont;
using $TrueTypeFont$DirectoryEntry = ::sun::font::TrueTypeFont$DirectoryEntry;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace font {

$FieldInfo _FontUtilities_FieldInfo_[] = {
	{"isLinux", "Z", nullptr, $PUBLIC | $STATIC, $staticField(FontUtilities, isLinux)},
	{"isMacOSX", "Z", nullptr, $PUBLIC | $STATIC, $staticField(FontUtilities, isMacOSX)},
	{"isMacOSX14", "Z", nullptr, $PUBLIC | $STATIC, $staticField(FontUtilities, isMacOSX14)},
	{"useJDKScaler", "Z", nullptr, $PUBLIC | $STATIC, $staticField(FontUtilities, useJDKScaler)},
	{"isWindows", "Z", nullptr, $PUBLIC | $STATIC, $staticField(FontUtilities, isWindows)},
	{"debugFonts", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FontUtilities, debugFonts$)},
	{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(FontUtilities, logger)},
	{"logging", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FontUtilities, logging)},
	{"MIN_LAYOUT_CHARCODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FontUtilities, MIN_LAYOUT_CHARCODE)},
	{"MAX_LAYOUT_CHARCODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FontUtilities, MAX_LAYOUT_CHARCODE)},
	{"compMapRef", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Ljava/util/concurrent/ConcurrentHashMap<Lsun/font/PhysicalFont;Lsun/font/CompositeFont;>;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(FontUtilities, compMapRef)},
	{"nameMap", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontUtilities, nameMap)},
	{}
};

$MethodInfo _FontUtilities_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontUtilities::*)()>(&FontUtilities::init$))},
	{"debugFonts", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&FontUtilities::debugFonts))},
	{"fontSupportsDefaultEncoding", "(Ljava/awt/Font;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Font*)>(&FontUtilities::fontSupportsDefaultEncoding))},
	{"getCompositeFontUIResource", "(Ljava/awt/Font;)Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)($Font*)>(&FontUtilities::getCompositeFontUIResource))},
	{"getFont2D", "(Ljava/awt/Font;)Lsun/font/Font2D;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Font2D*(*)($Font*)>(&FontUtilities::getFont2D))},
	{"getFontConfigFUIR", "(Ljava/lang/String;II)Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontUIResource*(*)($String*,int32_t,int32_t)>(&FontUtilities::getFontConfigFUIR))},
	{"getLogger", "()Lsun/util/logging/PlatformLogger;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PlatformLogger*(*)()>(&FontUtilities::getLogger))},
	{"isComplexCharCode", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&FontUtilities::isComplexCharCode))},
	{"isComplexScript", "([CII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($chars*,int32_t,int32_t)>(&FontUtilities::isComplexScript))},
	{"isComplexText", "([CII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($chars*,int32_t,int32_t)>(&FontUtilities::isComplexText))},
	{"isLogging", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&FontUtilities::isLogging))},
	{"isNonSimpleChar", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&FontUtilities::isNonSimpleChar))},
	{"logInfo", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&FontUtilities::logInfo))},
	{"logSevere", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&FontUtilities::logSevere))},
	{"logWarning", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&FontUtilities::logWarning))},
	{"mapFcName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&FontUtilities::mapFcName))},
	{"textLayoutIsCompatible", "(Ljava/awt/Font;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Font*)>(&FontUtilities::textLayoutIsCompatible))},
	{}
};

$InnerClassInfo _FontUtilities_InnerClassesInfo_[] = {
	{"sun.font.FontUtilities$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FontUtilities_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.FontUtilities",
	"java.lang.Object",
	nullptr,
	_FontUtilities_FieldInfo_,
	_FontUtilities_MethodInfo_,
	nullptr,
	nullptr,
	_FontUtilities_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.FontUtilities$1"
};

$Object* allocate$FontUtilities($Class* clazz) {
	return $of($alloc(FontUtilities));
}

bool FontUtilities::isLinux = false;
bool FontUtilities::isMacOSX = false;
bool FontUtilities::isMacOSX14 = false;
bool FontUtilities::useJDKScaler = false;
bool FontUtilities::isWindows = false;
bool FontUtilities::debugFonts$ = false;
$PlatformLogger* FontUtilities::logger = nullptr;
bool FontUtilities::logging = false;
$volatile($SoftReference*) FontUtilities::compMapRef = nullptr;
$StringArray2* FontUtilities::nameMap = nullptr;

void FontUtilities::init$() {
}

$Font2D* FontUtilities::getFont2D($Font* font) {
	$init(FontUtilities);
	return $nc($($FontAccess::getFontAccess()))->getFont2D(font);
}

bool FontUtilities::isComplexScript($chars* chs, int32_t start, int32_t limit) {
	$init(FontUtilities);
	for (int32_t i = start; i < limit; ++i) {
		if ($nc(chs)->get(i) < FontUtilities::MIN_LAYOUT_CHARCODE) {
			continue;
		} else if (isComplexCharCode(chs->get(i))) {
			return true;
		}
	}
	return false;
}

bool FontUtilities::isComplexText($chars* chs, int32_t start, int32_t limit) {
	$init(FontUtilities);
	for (int32_t i = start; i < limit; ++i) {
		if ($nc(chs)->get(i) < FontUtilities::MIN_LAYOUT_CHARCODE) {
			continue;
		} else if (isNonSimpleChar(chs->get(i))) {
			return true;
		}
	}
	return false;
}

bool FontUtilities::isNonSimpleChar(char16_t ch) {
	$init(FontUtilities);
	return isComplexCharCode(ch) || (ch >= $CharToGlyphMapper::HI_SURROGATE_START && ch <= $CharToGlyphMapper::LO_SURROGATE_END);
}

bool FontUtilities::isComplexCharCode(int32_t code) {
	$init(FontUtilities);
	if (code < FontUtilities::MIN_LAYOUT_CHARCODE || code > FontUtilities::MAX_LAYOUT_CHARCODE) {
		return false;
	} else if (code <= 879) {
		return true;
	} else if (code < 1424) {
		return false;
	} else if (code <= 1791) {
		return true;
	} else if (code < 2304) {
		return false;
	} else if (code <= 3711) {
		return true;
	} else if (code < 3840) {
		return false;
	} else if (code <= 4095) {
		return true;
	} else if (code < 4256) {
		return true;
	} else if (code < 4352) {
		return false;
	} else if (code < 4607) {
		return true;
	} else if (code < 6016) {
		return false;
	} else if (code <= 6143) {
		return true;
	} else if (code < 8204) {
		return false;
	} else if (code <= 8205) {
		return true;
	} else if (code >= 8234 && code <= 8238) {
		return true;
	} else if (code >= 8298 && code <= 8303) {
		return true;
	}
	return false;
}

$PlatformLogger* FontUtilities::getLogger() {
	$init(FontUtilities);
	return FontUtilities::logger;
}

bool FontUtilities::isLogging() {
	$init(FontUtilities);
	return FontUtilities::logging;
}

bool FontUtilities::debugFonts() {
	$init(FontUtilities);
	return FontUtilities::debugFonts$;
}

void FontUtilities::logWarning($String* s) {
	$init(FontUtilities);
	$nc($(getLogger()))->warning(s);
}

void FontUtilities::logInfo($String* s) {
	$init(FontUtilities);
	$nc($(getLogger()))->info(s);
}

void FontUtilities::logSevere($String* s) {
	$init(FontUtilities);
	$nc($(getLogger()))->severe(s);
}

bool FontUtilities::fontSupportsDefaultEncoding($Font* font) {
	$init(FontUtilities);
	return $instanceOf($CompositeFont, $(getFont2D(font)));
}

$FontUIResource* FontUtilities::getCompositeFontUIResource($Font* font) {
	$init(FontUtilities);
	$useLocalCurrentObjectStackCache();
	$var($FontUIResource, fuir, $new($FontUIResource, font));
	$var($Font2D, font2D, FontUtilities::getFont2D(font));
	if (!($instanceOf($PhysicalFont, font2D))) {
		return fuir;
	}
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	$var($Font2D, dialog, $nc(fm)->findFont2D("dialog"_s, $nc(font)->getStyle(), $FontManager::NO_FALLBACK));
	if (dialog == nullptr || !($instanceOf($CompositeFont, dialog))) {
		return fuir;
	}
	$var($CompositeFont, dialog2D, $cast($CompositeFont, dialog));
	$var($PhysicalFont, physicalFont, $cast($PhysicalFont, font2D));
	$var($ConcurrentHashMap, compMap, $cast($ConcurrentHashMap, $nc(FontUtilities::compMapRef)->get()));
	if (compMap == nullptr) {
		$assign(compMap, $new($ConcurrentHashMap));
		$assignStatic(FontUtilities::compMapRef, $new($SoftReference, compMap));
	}
	$var($CompositeFont, compFont, $cast($CompositeFont, $nc(compMap)->get(physicalFont)));
	if (compFont == nullptr) {
		$assign(compFont, $new($CompositeFont, physicalFont, dialog2D));
		compMap->put(physicalFont, compFont);
	}
	$nc($($FontAccess::getFontAccess()))->setFont2D(fuir, $nc(compFont)->handle);
	$nc($($FontAccess::getFontAccess()))->setCreatedFont(fuir);
	return fuir;
}

$String* FontUtilities::mapFcName($String* name) {
	$init(FontUtilities);
	for (int32_t i = 0; i < $nc(FontUtilities::nameMap)->length; ++i) {
		if ($nc(name)->equals($nc($nc(FontUtilities::nameMap)->get(i))->get(0))) {
			return $nc($nc(FontUtilities::nameMap)->get(i))->get(1);
		}
	}
	return nullptr;
}

$FontUIResource* FontUtilities::getFontConfigFUIR($String* fcFamily, int32_t style, int32_t size) {
	$init(FontUtilities);
	$useLocalCurrentObjectStackCache();
	$var($String, mapped, mapFcName(fcFamily));
	if (mapped == nullptr) {
		$assign(mapped, "sansserif"_s);
	}
	$var($FontUIResource, fuir, nullptr);
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	if ($instanceOf($SunFontManager, fm)) {
		$var($SunFontManager, sfm, $cast($SunFontManager, fm));
		$assign(fuir, $nc(sfm)->getFontConfigFUIR(mapped, style, size));
	} else {
		$assign(fuir, $new($FontUIResource, mapped, style, size));
	}
	return fuir;
}

bool FontUtilities::textLayoutIsCompatible($Font* font) {
	$init(FontUtilities);
	$useLocalCurrentObjectStackCache();
	$var($Font2D, font2D, getFont2D(font));
	if ($instanceOf($TrueTypeFont, font2D)) {
		$var($TrueTypeFont, ttf, $cast($TrueTypeFont, font2D));
		bool var$0 = $nc(ttf)->getDirectoryEntry($TrueTypeFont::GSUBTag) == nullptr;
		return var$0 || $nc(ttf)->getDirectoryEntry($TrueTypeFont::GPOSTag) != nullptr;
	} else {
		return false;
	}
}

void clinit$FontUtilities($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	FontUtilities::debugFonts$ = false;
	$assignStatic(FontUtilities::logger, nullptr);
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FontUtilities$1)));
	}
	$assignStatic(FontUtilities::compMapRef, $new($SoftReference, nullptr));
	$assignStatic(FontUtilities::nameMap, $new($StringArray2, {
		$$new($StringArray, {
			"sans"_s,
			"sansserif"_s
		}),
		$$new($StringArray, {
			"sans-serif"_s,
			"sansserif"_s
		}),
		$$new($StringArray, {
			"serif"_s,
			"serif"_s
		}),
		$$new($StringArray, {
			"monospace"_s,
			"monospaced"_s
		})
	}));
}

FontUtilities::FontUtilities() {
}

$Class* FontUtilities::load$($String* name, bool initialize) {
	$loadClass(FontUtilities, name, initialize, &_FontUtilities_ClassInfo_, clinit$FontUtilities, allocate$FontUtilities);
	return class$;
}

$Class* FontUtilities::class$ = nullptr;

	} // font
} // sun