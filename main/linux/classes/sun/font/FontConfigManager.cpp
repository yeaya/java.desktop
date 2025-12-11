#include <sun/font/FontConfigManager.h>

#include <java/util/Locale.h>
#include <sun/awt/SunHints$Value.h>
#include <sun/awt/SunHints.h>
#include <sun/awt/SunToolkit.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontConfigManager$FcCompFont.h>
#include <sun/font/FontConfigManager$FontConfigFont.h>
#include <sun/font/FontConfigManager$FontConfigInfo.h>
#include <sun/font/FontFamily.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef FONTFORMAT_NONE
#undef FONTFORMAT_TRUETYPE
#undef FONTFORMAT_TYPE1
#undef INTKEY_TEXT_ANTIALIASING
#undef LOGICAL_FALLBACK
#undef NO_FALLBACK
#undef TTF_RANK
#undef TYPE1_RANK
#undef UNKNOWN_RANK

using $FontConfigManager$FcCompFontArray = $Array<::sun::font::FontConfigManager$FcCompFont>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $SunHints = ::sun::awt::SunHints;
using $SunHints$Value = ::sun::awt::SunHints$Value;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CompositeFont = ::sun::font::CompositeFont;
using $Font2D = ::sun::font::Font2D;
using $FontConfigManager$FcCompFont = ::sun::font::FontConfigManager$FcCompFont;
using $FontConfigManager$FontConfigFont = ::sun::font::FontConfigManager$FontConfigFont;
using $FontConfigManager$FontConfigInfo = ::sun::font::FontConfigManager$FontConfigInfo;
using $FontFamily = ::sun::font::FontFamily;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $FontUtilities = ::sun::font::FontUtilities;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _FontConfigManager_FieldInfo_[] = {
	{"fontConfigFailed", "Z", nullptr, $STATIC, $staticField(FontConfigManager, fontConfigFailed)},
	{"fcInfo", "Lsun/font/FontConfigManager$FontConfigInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontConfigManager, fcInfo)},
	{"fontConfigNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(FontConfigManager, fontConfigNames)},
	{"fontConfigFonts", "[Lsun/font/FontConfigManager$FcCompFont;", nullptr, $PRIVATE, $field(FontConfigManager, fontConfigFonts)},
	{}
};

$MethodInfo _FontConfigManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontConfigManager::*)()>(&FontConfigManager::init$))},
	{"getFCLocaleStr", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&FontConfigManager::getFCLocaleStr))},
	{"getFontConfig", "(Ljava/lang/String;Lsun/font/FontConfigManager$FontConfigInfo;[Lsun/font/FontConfigManager$FcCompFont;Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($String*,$FontConfigManager$FontConfigInfo*,$FontConfigManager$FcCompFontArray*,bool)>(&FontConfigManager::getFontConfig))},
	{"getFontConfigAAHint", "()Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)()>(&FontConfigManager::getFontConfigAAHint))},
	{"getFontConfigAAHint", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($String*)>(&FontConfigManager::getFontConfigAAHint))},
	{"getFontConfigAASettings", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($String*,$String*)>(&FontConfigManager::getFontConfigAASettings))},
	{"getFontConfigFont", "(Ljava/lang/String;I)Lsun/font/CompositeFont;", nullptr, $PUBLIC},
	{"getFontConfigFonts", "()[Lsun/font/FontConfigManager$FcCompFont;", nullptr, $PUBLIC},
	{"getFontConfigInfo", "()Lsun/font/FontConfigManager$FontConfigInfo;", nullptr, 0},
	{"getFontConfigVersion", "()I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&FontConfigManager::getFontConfigVersion))},
	{"initFontConfigFonts", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"loadFontConfig", "()[Lsun/font/FontConfigManager$FcCompFont;", nullptr, 0},
	{"populateFontConfig", "([Lsun/font/FontConfigManager$FcCompFont;)V", nullptr, 0},
	{"registerFromFcInfo", "(Lsun/font/FontConfigManager$FcCompFont;)Lsun/font/PhysicalFont;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getFontConfig 2
#define _METHOD_INDEX_getFontConfigAASettings 5
#define _METHOD_INDEX_getFontConfigVersion 9

$InnerClassInfo _FontConfigManager_InnerClassesInfo_[] = {
	{"sun.font.FontConfigManager$FontConfigInfo", "sun.font.FontConfigManager", "FontConfigInfo", $PUBLIC | $STATIC},
	{"sun.font.FontConfigManager$FcCompFont", "sun.font.FontConfigManager", "FcCompFont", $PUBLIC | $STATIC},
	{"sun.font.FontConfigManager$FontConfigFont", "sun.font.FontConfigManager", "FontConfigFont", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FontConfigManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.FontConfigManager",
	"java.lang.Object",
	nullptr,
	_FontConfigManager_FieldInfo_,
	_FontConfigManager_MethodInfo_,
	nullptr,
	nullptr,
	_FontConfigManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.FontConfigManager$FontConfigInfo,sun.font.FontConfigManager$FcCompFont,sun.font.FontConfigManager$FontConfigFont"
};

$Object* allocate$FontConfigManager($Class* clazz) {
	return $of($alloc(FontConfigManager));
}

bool FontConfigManager::fontConfigFailed = false;
$FontConfigManager$FontConfigInfo* FontConfigManager::fcInfo = nullptr;
$StringArray* FontConfigManager::fontConfigNames = nullptr;

void FontConfigManager::init$() {
}

$Object* FontConfigManager::getFontConfigAAHint() {
	$init(FontConfigManager);
	return $of(getFontConfigAAHint("sans"_s));
}

$Object* FontConfigManager::getFontConfigAAHint($String* fcFamily) {
	$init(FontConfigManager);
	$init($FontUtilities);
	if ($FontUtilities::isWindows) {
		return $of(nullptr);
	} else {
		int32_t hint = getFontConfigAASettings($(getFCLocaleStr()), fcFamily);
		if (hint < 0) {
			return $of(nullptr);
		} else {
			return $of($SunHints$Value::get($SunHints::INTKEY_TEXT_ANTIALIASING, hint));
		}
	}
}

$String* FontConfigManager::getFCLocaleStr() {
	$init(FontConfigManager);
	$useLocalCurrentObjectStackCache();
	$var($Locale, l, $SunToolkit::getStartupLocale());
	$var($String, localeStr, $nc(l)->getLanguage());
	$var($String, country, l->getCountry());
	if (!$nc(country)->isEmpty()) {
		$assign(localeStr, $str({localeStr, "-"_s, country}));
	}
	return localeStr;
}

int32_t FontConfigManager::getFontConfigVersion() {
	$init(FontConfigManager);
	int32_t $ret = 0;
	$prepareNativeStatic(FontConfigManager, getFontConfigVersion, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void FontConfigManager::initFontConfigFonts(bool includeFallbacks) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->fontConfigFonts != nullptr) {
			if (!includeFallbacks || ($nc($nc(this->fontConfigFonts)->get(0))->allFonts != nullptr)) {
				return;
			}
		}
		$init($FontUtilities);
		if ($FontUtilities::isWindows || FontConfigManager::fontConfigFailed) {
			return;
		}
		int64_t t0 = 0;
		if ($FontUtilities::isLogging()) {
			t0 = $System::nanoTime();
		}
		$var($FontConfigManager$FcCompFontArray, fontArr, $new($FontConfigManager$FcCompFontArray, $nc(FontConfigManager::fontConfigNames)->length));
		for (int32_t i = 0; i < fontArr->length; ++i) {
			fontArr->set(i, $$new($FontConfigManager$FcCompFont));
			$set($nc(fontArr->get(i)), fcName, $nc(FontConfigManager::fontConfigNames)->get(i));
			int32_t colonPos = $nc($nc(fontArr->get(i))->fcName)->indexOf((int32_t)u':');
			$set($nc(fontArr->get(i)), fcFamily, $nc($nc(fontArr->get(i))->fcName)->substring(0, colonPos));
			$set($nc(fontArr->get(i)), jdkName, $FontUtilities::mapFcName($nc(fontArr->get(i))->fcFamily));
			$nc(fontArr->get(i))->style = i % 4;
		}
		getFontConfig($(getFCLocaleStr()), FontConfigManager::fcInfo, fontArr, includeFallbacks);
		$var($FontConfigManager$FontConfigFont, anyFont, nullptr);
		for (int32_t i = 0; i < fontArr->length; ++i) {
			$var($FontConfigManager$FcCompFont, fci, fontArr->get(i));
			if ($nc(fci)->firstFont == nullptr) {
				if ($FontUtilities::isLogging()) {
					$FontUtilities::logInfo($$str({"Fontconfig returned no font for "_s, $nc(fontArr->get(i))->fcName}));
				}
				FontConfigManager::fontConfigFailed = true;
			} else if (anyFont == nullptr) {
				$assign(anyFont, fci->firstFont);
			}
		}
		if (anyFont == nullptr) {
			if ($FontUtilities::isLogging()) {
				$FontUtilities::logInfo("Fontconfig returned no fonts at all."_s);
			}
			FontConfigManager::fontConfigFailed = true;
			return;
		} else if (FontConfigManager::fontConfigFailed) {
			for (int32_t i = 0; i < fontArr->length; ++i) {
				if ($nc(fontArr->get(i))->firstFont == nullptr) {
					$set($nc(fontArr->get(i)), firstFont, anyFont);
				}
			}
		}
		$set(this, fontConfigFonts, fontArr);
		if ($FontUtilities::isLogging()) {
			int64_t t1 = $System::nanoTime();
			$FontUtilities::logInfo($$str({"Time spent accessing fontconfig="_s, $$str(((t1 - t0) / 0x000F4240)), "ms."_s}));
			for (int32_t i = 0; i < $nc(this->fontConfigFonts)->length; ++i) {
				$var($FontConfigManager$FcCompFont, fci, $nc(this->fontConfigFonts)->get(i));
				$FontUtilities::logInfo($$str({"FC font "_s, $nc(fci)->fcName, " maps to family "_s, $nc(fci->firstFont)->familyName, " in file "_s, $nc(fci->firstFont)->fontFile}));
				if ($nc(fci)->allFonts != nullptr) {
					for (int32_t f = 0; f < $nc(fci->allFonts)->length; ++f) {
						$var($FontConfigManager$FontConfigFont, fcf, $nc(fci->allFonts)->get(f));
						$FontUtilities::logInfo($$str({"Family="_s, $nc(fcf)->familyName, " Style="_s, fcf->styleStr, " Fullname="_s, fcf->fullName, " File="_s, fcf->fontFile}));
					}
				}
			}
		}
	}
}

$PhysicalFont* FontConfigManager::registerFromFcInfo($FontConfigManager$FcCompFont* fcInfo) {
	$useLocalCurrentObjectStackCache();
	$var($SunFontManager, fm, $SunFontManager::getInstance());
	$var($String, fontFile, $nc($nc(fcInfo)->firstFont)->fontFile);
	int32_t offset = $nc(fontFile)->length() - 4;
	if (offset <= 0) {
		return nullptr;
	}
	$var($String, ext, $(fontFile->substring(offset))->toLowerCase());
	bool isTTC = ext->equals(".ttc"_s);
	$var($PhysicalFont, physFont, $nc(fm)->getRegisteredFontFile(fontFile));
	if (physFont != nullptr) {
		if (isTTC) {
			$var($Font2D, f2d, fm->findFont2D($nc(fcInfo->firstFont)->familyName, fcInfo->style, $FontManager::NO_FALLBACK));
			if ($instanceOf($PhysicalFont, f2d)) {
				return $cast($PhysicalFont, f2d);
			} else {
				return nullptr;
			}
		} else {
			return physFont;
		}
	}
	$assign(physFont, fm->findJREDeferredFont($nc(fcInfo->firstFont)->familyName, fcInfo->style));
	if (physFont == nullptr && fm->isDeferredFont(fontFile) == true) {
		$assign(physFont, fm->initialiseDeferredFont($nc(fcInfo->firstFont)->fontFile));
		if (physFont != nullptr) {
			if (isTTC) {
				$var($Font2D, f2d, fm->findFont2D($nc(fcInfo->firstFont)->familyName, fcInfo->style, $FontManager::NO_FALLBACK));
				if ($instanceOf($PhysicalFont, f2d)) {
					return $cast($PhysicalFont, f2d);
				} else {
					return nullptr;
				}
			} else {
				return physFont;
			}
		}
	}
	if (physFont == nullptr) {
		int32_t fontFormat = $SunFontManager::FONTFORMAT_NONE;
		int32_t fontRank = $Font2D::UNKNOWN_RANK;
		if (ext->equals(".ttf"_s) || isTTC) {
			fontFormat = $SunFontManager::FONTFORMAT_TRUETYPE;
			fontRank = $Font2D::TTF_RANK;
		} else {
			bool var$1 = ext->equals(".pfa"_s);
			if (var$1 || ext->equals(".pfb"_s)) {
				fontFormat = $SunFontManager::FONTFORMAT_TYPE1;
				fontRank = $Font2D::TYPE1_RANK;
			}
		}
		$assign(physFont, fm->registerFontFile($nc(fcInfo->firstFont)->fontFile, nullptr, fontFormat, true, fontRank));
	}
	return physFont;
}

$CompositeFont* FontConfigManager::getFontConfigFont($String* name$renamed, int32_t style) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	$assign(name, $nc(name)->toLowerCase());
	initFontConfigFonts(false);
	if (this->fontConfigFonts == nullptr) {
		return nullptr;
	}
	$var($FontConfigManager$FcCompFont, fcInfo, nullptr);
	for (int32_t i = 0; i < $nc(this->fontConfigFonts)->length; ++i) {
		if (name->equals($nc($nc(this->fontConfigFonts)->get(i))->fcFamily) && style == $nc($nc(this->fontConfigFonts)->get(i))->style) {
			$assign(fcInfo, $nc(this->fontConfigFonts)->get(i));
			break;
		}
	}
	if (fcInfo == nullptr) {
		$assign(fcInfo, $nc(this->fontConfigFonts)->get(0));
	}
	if ($FontUtilities::isLogging()) {
		$FontUtilities::logInfo($$str({"FC name="_s, name, " style="_s, $$str(style), " uses "_s, $nc($nc(fcInfo)->firstFont)->familyName, " in file: "_s, $nc(fcInfo->firstFont)->fontFile}));
	}
	if ($nc(fcInfo)->compFont != nullptr) {
		return fcInfo->compFont;
	}
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	$var($CompositeFont, jdkFont, $cast($CompositeFont, $nc(fm)->findFont2D($nc(fcInfo)->jdkName, style, $FontManager::LOGICAL_FALLBACK)));
	if ($nc($nc(fcInfo)->firstFont)->familyName == nullptr || $nc($nc(fcInfo)->firstFont)->fontFile == nullptr) {
		return ($set(fcInfo, compFont, jdkFont));
	}
	$var($FontFamily, family, $FontFamily::getFamily($nc($nc(fcInfo)->firstFont)->familyName));
	$var($PhysicalFont, physFont, nullptr);
	if (family != nullptr) {
		$var($Font2D, f2D, family->getFontWithExactStyleMatch($nc(fcInfo)->style));
		if ($instanceOf($PhysicalFont, f2D)) {
			$assign(physFont, $cast($PhysicalFont, f2D));
		}
	}
	if (physFont == nullptr || !$nc($nc($nc(fcInfo)->firstFont)->fontFile)->equals($nc(physFont)->platName)) {
		$assign(physFont, registerFromFcInfo(fcInfo));
		if (physFont == nullptr) {
			return ($set(fcInfo, compFont, jdkFont));
		}
		$assign(family, $FontFamily::getFamily($($nc(physFont)->getFamilyName(nullptr))));
	}
	for (int32_t i = 0; i < $nc(this->fontConfigFonts)->length; ++i) {
		$var($FontConfigManager$FcCompFont, fc, $nc(this->fontConfigFonts)->get(i));
		bool var$1 = fc != fcInfo && $nc($($nc(physFont)->getFamilyName(nullptr)))->equals($nc($nc(fc)->firstFont)->familyName);
		bool var$0 = var$1 && !$nc($nc($nc(fc)->firstFont)->fontFile)->equals(physFont->platName);
		if (var$0 && $nc(family)->getFontWithExactStyleMatch(fc->style) == nullptr) {
			registerFromFcInfo($nc(this->fontConfigFonts)->get(i));
		}
	}
	return ($set($nc(fcInfo), compFont, $new($CompositeFont, physFont, jdkFont)));
}

$FontConfigManager$FcCompFontArray* FontConfigManager::getFontConfigFonts() {
	return this->fontConfigFonts;
}

void FontConfigManager::getFontConfig($String* locale, $FontConfigManager$FontConfigInfo* fcInfo, $FontConfigManager$FcCompFontArray* fonts, bool includeFallbacks) {
	$init(FontConfigManager);
	$prepareNativeStatic(FontConfigManager, getFontConfig, void, $String* locale, $FontConfigManager$FontConfigInfo* fcInfo, $FontConfigManager$FcCompFontArray* fonts, bool includeFallbacks);
	$invokeNativeStatic(locale, fcInfo, fonts, includeFallbacks);
	$finishNativeStatic();
}

void FontConfigManager::populateFontConfig($FontConfigManager$FcCompFontArray* fcInfo) {
	$set(this, fontConfigFonts, fcInfo);
}

$FontConfigManager$FcCompFontArray* FontConfigManager::loadFontConfig() {
	initFontConfigFonts(true);
	return this->fontConfigFonts;
}

$FontConfigManager$FontConfigInfo* FontConfigManager::getFontConfigInfo() {
	initFontConfigFonts(true);
	return FontConfigManager::fcInfo;
}

int32_t FontConfigManager::getFontConfigAASettings($String* locale, $String* fcFamily) {
	$init(FontConfigManager);
	int32_t $ret = 0;
	$prepareNativeStatic(FontConfigManager, getFontConfigAASettings, int32_t, $String* locale, $String* fcFamily);
	$ret = $invokeNativeStatic(locale, fcFamily);
	$finishNativeStatic();
	return $ret;
}

void clinit$FontConfigManager($Class* class$) {
	FontConfigManager::fontConfigFailed = false;
	$assignStatic(FontConfigManager::fcInfo, $new($FontConfigManager$FontConfigInfo));
	$assignStatic(FontConfigManager::fontConfigNames, $new($StringArray, {
		"sans:regular:roman"_s,
		"sans:bold:roman"_s,
		"sans:regular:italic"_s,
		"sans:bold:italic"_s,
		"serif:regular:roman"_s,
		"serif:bold:roman"_s,
		"serif:regular:italic"_s,
		"serif:bold:italic"_s,
		"monospace:regular:roman"_s,
		"monospace:bold:roman"_s,
		"monospace:regular:italic"_s,
		"monospace:bold:italic"_s
	}));
}

FontConfigManager::FontConfigManager() {
}

$Class* FontConfigManager::load$($String* name, bool initialize) {
	$loadClass(FontConfigManager, name, initialize, &_FontConfigManager_ClassInfo_, clinit$FontConfigManager, allocate$FontConfigManager);
	return class$;
}

$Class* FontConfigManager::class$ = nullptr;

	} // font
} // sun