#include <sun/awt/windows/WFontConfiguration.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <sun/awt/AWTCharset.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/awt/FontDescriptor.h>
#include <sun/awt/windows/WDefaultFontCharset.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $FontDescriptorArray = $Array<::sun::awt::FontDescriptor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $AWTCharset = ::sun::awt::AWTCharset;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $FontDescriptor = ::sun::awt::FontDescriptor;
using $WDefaultFontCharset = ::sun::awt::windows::WDefaultFontCharset;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WFontConfiguration_FieldInfo_[] = {
	{"useCompatibilityFallbacks", "Z", nullptr, $PRIVATE, $field(WFontConfiguration, useCompatibilityFallbacks)},
	{"subsetCharsetMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(WFontConfiguration, subsetCharsetMap)},
	{"subsetEncodingMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(WFontConfiguration, subsetEncodingMap)},
	{"textInputCharset", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WFontConfiguration, textInputCharset)},
	{}
};

$MethodInfo _WFontConfiguration_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, $PUBLIC, $method(static_cast<void(WFontConfiguration::*)($SunFontManager*)>(&WFontConfiguration::init$))},
	{"<init>", "(Lsun/font/SunFontManager;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(WFontConfiguration::*)($SunFontManager*,bool,bool)>(&WFontConfiguration::init$))},
	{"findFontWithCharset", "([Lsun/awt/FontDescriptor;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WFontConfiguration::*)($FontDescriptorArray*,$String*)>(&WFontConfiguration::findFontWithCharset))},
	{"getDefaultFontCharset", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PROTECTED},
	{"getEncoding", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getFaceNameFromComponentFontName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFallbackFamilyName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileNameFromComponentFontName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getTextComponentFontName", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(WFontConfiguration::*)($String*,int32_t)>(&WFontConfiguration::getTextComponentFontName))},
	{"initReorderMap", "()V", nullptr, $PROTECTED},
	{"initTables", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(WFontConfiguration::*)($String*)>(&WFontConfiguration::initTables))},
	{"makeAWTFontName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"setOsNameAndVersion", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _WFontConfiguration_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.WFontConfiguration",
	"sun.awt.FontConfiguration",
	nullptr,
	_WFontConfiguration_FieldInfo_,
	_WFontConfiguration_MethodInfo_
};

$Object* allocate$WFontConfiguration($Class* clazz) {
	return $of($alloc(WFontConfiguration));
}

$HashMap* WFontConfiguration::subsetCharsetMap = nullptr;
$HashMap* WFontConfiguration::subsetEncodingMap = nullptr;
$String* WFontConfiguration::textInputCharset = nullptr;

void WFontConfiguration::init$($SunFontManager* fm) {
	$FontConfiguration::init$(fm);
	$init($FontConfiguration);
	this->useCompatibilityFallbacks = "windows-1252"_s->equals($FontConfiguration::encoding);
	initTables($FontConfiguration::encoding);
}

void WFontConfiguration::init$($SunFontManager* fm, bool preferLocaleFonts, bool preferPropFonts) {
	$FontConfiguration::init$(fm, preferLocaleFonts, preferPropFonts);
	$init($FontConfiguration);
	this->useCompatibilityFallbacks = "windows-1252"_s->equals($FontConfiguration::encoding);
}

void WFontConfiguration::initReorderMap() {
	$init($FontConfiguration);
	if ($nc($FontConfiguration::encoding)->equalsIgnoreCase("windows-31j"_s)) {
		$assignStatic($FontConfiguration::localeMap, $new($Hashtable));
		$nc($FontConfiguration::localeMap)->put("dialoginput.plain.japanese"_s, "MS Mincho"_s);
		$nc($FontConfiguration::localeMap)->put("dialoginput.bold.japanese"_s, "MS Mincho"_s);
		$nc($FontConfiguration::localeMap)->put("dialoginput.italic.japanese"_s, "MS Mincho"_s);
		$nc($FontConfiguration::localeMap)->put("dialoginput.bolditalic.japanese"_s, "MS Mincho"_s);
	}
	$set(this, reorderMap, $new($HashMap));
	$nc(this->reorderMap)->put("UTF-8.hi"_s, "devanagari"_s);
	$nc(this->reorderMap)->put("windows-1255"_s, "hebrew"_s);
	$nc(this->reorderMap)->put("x-windows-874"_s, "thai"_s);
	$nc(this->reorderMap)->put("windows-31j"_s, "japanese"_s);
	$nc(this->reorderMap)->put("x-windows-949"_s, "korean"_s);
	$nc(this->reorderMap)->put("GBK"_s, "chinese-ms936"_s);
	$nc(this->reorderMap)->put("GB18030"_s, "chinese-gb18030"_s);
	$nc(this->reorderMap)->put("x-windows-950"_s, "chinese-ms950"_s);
	$nc(this->reorderMap)->put("x-MS950-HKSCS"_s, $(split("chinese-ms950,chinese-hkscs"_s)));
}

void WFontConfiguration::setOsNameAndVersion() {
	$FontConfiguration::setOsNameAndVersion();
	if ($nc($FontConfiguration::osName)->startsWith("Windows"_s)) {
		int32_t p = 0;
		int32_t q = 0;
		p = $nc($FontConfiguration::osName)->indexOf((int32_t)u' ');
		if (p == -1) {
			$assignStatic($FontConfiguration::osName, nullptr);
		} else {
			q = $nc($FontConfiguration::osName)->indexOf((int32_t)u' ', p + 1);
			if (q == -1) {
				$assignStatic($FontConfiguration::osName, $nc($FontConfiguration::osName)->substring(p + 1));
			} else {
				$assignStatic($FontConfiguration::osName, $nc($FontConfiguration::osName)->substring(p + 1, q));
			}
		}
		$assignStatic($FontConfiguration::osVersion, nullptr);
	}
}

$String* WFontConfiguration::getFallbackFamilyName($String* fontName, $String* defaultFallback) {
	if (this->useCompatibilityFallbacks) {
		$var($String, compatibilityName, getCompatibilityFamilyName(fontName));
		if (compatibilityName != nullptr) {
			return compatibilityName;
		}
	}
	return defaultFallback;
}

$String* WFontConfiguration::makeAWTFontName($String* platformFontName, $String* characterSubsetName) {
	$var($String, windowsCharset, $cast($String, $nc(WFontConfiguration::subsetCharsetMap)->get(characterSubsetName)));
	if (windowsCharset == nullptr) {
		$assign(windowsCharset, "DEFAULT_CHARSET"_s);
	}
	return $str({platformFontName, ","_s, windowsCharset});
}

$String* WFontConfiguration::getEncoding($String* awtFontName, $String* characterSubsetName) {
	$var($String, encoding, $cast($String, $nc(WFontConfiguration::subsetEncodingMap)->get(characterSubsetName)));
	if (encoding == nullptr) {
		$assign(encoding, "default"_s);
	}
	return encoding;
}

$Charset* WFontConfiguration::getDefaultFontCharset($String* fontName) {
	return $new($WDefaultFontCharset, fontName);
}

$String* WFontConfiguration::getFaceNameFromComponentFontName($String* componentFontName) {
	return componentFontName;
}

$String* WFontConfiguration::getFileNameFromComponentFontName($String* componentFontName) {
	return getFileNameFromPlatformName(componentFontName);
}

$String* WFontConfiguration::getTextComponentFontName($String* familyName, int32_t style) {
	$useLocalCurrentObjectStackCache();
	$var($FontDescriptorArray, fontDescriptors, getFontDescriptors(familyName, style));
	$var($String, fontName, findFontWithCharset(fontDescriptors, WFontConfiguration::textInputCharset));
	if ((fontName == nullptr) && !$nc(WFontConfiguration::textInputCharset)->equals("DEFAULT_CHARSET"_s)) {
		$assign(fontName, findFontWithCharset(fontDescriptors, "DEFAULT_CHARSET"_s));
	}
	if (fontName == nullptr) {
		$assign(fontName, ($nc(fontDescriptors)->length > 0) ? $nc($nc(fontDescriptors)->get(0))->getNativeName() : "Arial,ANSI_CHARSET"_s);
	}
	return fontName;
}

$String* WFontConfiguration::findFontWithCharset($FontDescriptorArray* fontDescriptors, $String* charset) {
	$useLocalCurrentObjectStackCache();
	$var($String, fontName, nullptr);
	for (int32_t i = 0; i < $nc(fontDescriptors)->length; ++i) {
		$var($String, componentFontName, $nc(fontDescriptors->get(i))->getNativeName());
		if ($nc(componentFontName)->endsWith(charset)) {
			$assign(fontName, componentFontName);
		}
	}
	return fontName;
}

void WFontConfiguration::initTables($String* defaultEncoding) {
	$nc(WFontConfiguration::subsetCharsetMap)->put("alphabetic"_s, "ANSI_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("alphabetic/1252"_s, "ANSI_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("alphabetic/default"_s, "DEFAULT_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("arabic"_s, "ARABIC_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("chinese-ms936"_s, "GB2312_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("chinese-gb18030"_s, "GB2312_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("chinese-ms950"_s, "CHINESEBIG5_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("chinese-hkscs"_s, "CHINESEBIG5_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("cyrillic"_s, "RUSSIAN_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("devanagari"_s, "DEFAULT_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("dingbats"_s, "SYMBOL_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("greek"_s, "GREEK_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("hebrew"_s, "HEBREW_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("japanese"_s, "SHIFTJIS_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("korean"_s, "HANGEUL_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("latin"_s, "ANSI_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("symbol"_s, "SYMBOL_CHARSET"_s);
	$nc(WFontConfiguration::subsetCharsetMap)->put("thai"_s, "THAI_CHARSET"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("alphabetic"_s, "default"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("alphabetic/1252"_s, "windows-1252"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("alphabetic/default"_s, defaultEncoding);
	$nc(WFontConfiguration::subsetEncodingMap)->put("arabic"_s, "windows-1256"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("chinese-ms936"_s, "GBK"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("chinese-gb18030"_s, "GB18030"_s);
	if ("x-MS950-HKSCS"_s->equals(defaultEncoding)) {
		$nc(WFontConfiguration::subsetEncodingMap)->put("chinese-ms950"_s, "x-MS950-HKSCS"_s);
	} else {
		$nc(WFontConfiguration::subsetEncodingMap)->put("chinese-ms950"_s, "x-windows-950"_s);
	}
	$nc(WFontConfiguration::subsetEncodingMap)->put("chinese-hkscs"_s, "sun.awt.HKSCS"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("cyrillic"_s, "windows-1251"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("devanagari"_s, "UTF-16LE"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("dingbats"_s, "sun.awt.windows.WingDings"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("greek"_s, "windows-1253"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("hebrew"_s, "windows-1255"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("japanese"_s, "windows-31j"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("korean"_s, "x-windows-949"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("latin"_s, "windows-1252"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("symbol"_s, "sun.awt.Symbol"_s);
	$nc(WFontConfiguration::subsetEncodingMap)->put("thai"_s, "x-windows-874"_s);
	if ("windows-1256"_s->equals(defaultEncoding)) {
		$assignStatic(WFontConfiguration::textInputCharset, "ARABIC_CHARSET"_s);
	} else if ("GBK"_s->equals(defaultEncoding)) {
		$assignStatic(WFontConfiguration::textInputCharset, "GB2312_CHARSET"_s);
	} else if ("GB18030"_s->equals(defaultEncoding)) {
		$assignStatic(WFontConfiguration::textInputCharset, "GB2312_CHARSET"_s);
	} else if ("x-windows-950"_s->equals(defaultEncoding)) {
		$assignStatic(WFontConfiguration::textInputCharset, "CHINESEBIG5_CHARSET"_s);
	} else if ("x-MS950-HKSCS"_s->equals(defaultEncoding)) {
		$assignStatic(WFontConfiguration::textInputCharset, "CHINESEBIG5_CHARSET"_s);
	} else if ("windows-1251"_s->equals(defaultEncoding)) {
		$assignStatic(WFontConfiguration::textInputCharset, "RUSSIAN_CHARSET"_s);
	} else if ("UTF-8"_s->equals(defaultEncoding)) {
		$assignStatic(WFontConfiguration::textInputCharset, "DEFAULT_CHARSET"_s);
	} else if ("windows-1253"_s->equals(defaultEncoding)) {
		$assignStatic(WFontConfiguration::textInputCharset, "GREEK_CHARSET"_s);
	} else if ("windows-1255"_s->equals(defaultEncoding)) {
		$assignStatic(WFontConfiguration::textInputCharset, "HEBREW_CHARSET"_s);
	} else if ("windows-31j"_s->equals(defaultEncoding)) {
		$assignStatic(WFontConfiguration::textInputCharset, "SHIFTJIS_CHARSET"_s);
	} else if ("x-windows-949"_s->equals(defaultEncoding)) {
		$assignStatic(WFontConfiguration::textInputCharset, "HANGEUL_CHARSET"_s);
	} else if ("x-windows-874"_s->equals(defaultEncoding)) {
		$assignStatic(WFontConfiguration::textInputCharset, "THAI_CHARSET"_s);
	} else {
		$assignStatic(WFontConfiguration::textInputCharset, "DEFAULT_CHARSET"_s);
	}
}

void clinit$WFontConfiguration($Class* class$) {
	$assignStatic(WFontConfiguration::subsetCharsetMap, $new($HashMap));
	$assignStatic(WFontConfiguration::subsetEncodingMap, $new($HashMap));
}

WFontConfiguration::WFontConfiguration() {
}

$Class* WFontConfiguration::load$($String* name, bool initialize) {
	$loadClass(WFontConfiguration, name, initialize, &_WFontConfiguration_ClassInfo_, clinit$WFontConfiguration, allocate$WFontConfiguration);
	return class$;
}

$Class* WFontConfiguration::class$ = nullptr;

		} // windows
	} // awt
} // sun