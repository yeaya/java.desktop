#include <sun/font/MFontConfiguration.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/nio/charset/Charset.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Properties.h>
#include <java/util/Scanner.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/awt/X11FontManager.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/SunFontManager.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Properties = ::java::util::Properties;
using $Scanner = ::java::util::Scanner;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $X11FontManager = ::sun::awt::X11FontManager;
using $FontUtilities = ::sun::font::FontUtilities;
using $SunFontManager = ::sun::font::SunFontManager;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace font {

$FieldInfo _MFontConfiguration_FieldInfo_[] = {
	{"fontConfig", "Lsun/awt/FontConfiguration;", nullptr, $PRIVATE | $STATIC, $staticField(MFontConfiguration, fontConfig)},
	{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(MFontConfiguration, logger)},
	{"fontsDirPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MFontConfiguration, fontsDirPrefix)},
	{"encodingMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(MFontConfiguration, encodingMap)},
	{}
};

$MethodInfo _MFontConfiguration_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, $PUBLIC, $method(static_cast<void(MFontConfiguration::*)($SunFontManager*)>(&MFontConfiguration::init$))},
	{"<init>", "(Lsun/font/SunFontManager;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(MFontConfiguration::*)($SunFontManager*,bool,bool)>(&MFontConfiguration::init$))},
	{"getAWTFontPathSet", "()Ljava/util/HashSet;", "()Ljava/util/HashSet<Ljava/lang/String;>;", $PUBLIC},
	{"getDefaultFontCharset", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PROTECTED},
	{"getEncoding", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getFaceNameFromComponentFontName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getFallbackFamilyName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileNameFromComponentFontName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getVersionString", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MFontConfiguration::*)($File*)>(&MFontConfiguration::getVersionString))},
	{"initReorderMap", "()V", nullptr, $PROTECTED},
	{"initTables", "()V", nullptr, $PRIVATE, $method(static_cast<void(MFontConfiguration::*)()>(&MFontConfiguration::initTables))},
	{"mapFileName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"setOsNameAndVersion", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MFontConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.MFontConfiguration",
	"sun.awt.FontConfiguration",
	nullptr,
	_MFontConfiguration_FieldInfo_,
	_MFontConfiguration_MethodInfo_
};

$Object* allocate$MFontConfiguration($Class* clazz) {
	return $of($alloc(MFontConfiguration));
}

$FontConfiguration* MFontConfiguration::fontConfig = nullptr;
$PlatformLogger* MFontConfiguration::logger = nullptr;
$String* MFontConfiguration::fontsDirPrefix = nullptr;
$HashMap* MFontConfiguration::encodingMap = nullptr;

void MFontConfiguration::init$($SunFontManager* fm) {
	$FontConfiguration::init$(fm);
	if ($FontUtilities::debugFonts()) {
		$assignStatic(MFontConfiguration::logger, $PlatformLogger::getLogger("sun.awt.FontConfiguration"_s));
	}
	initTables();
}

void MFontConfiguration::init$($SunFontManager* fm, bool preferLocaleFonts, bool preferPropFonts) {
	$FontConfiguration::init$(fm, preferLocaleFonts, preferPropFonts);
	if ($FontUtilities::debugFonts()) {
		$assignStatic(MFontConfiguration::logger, $PlatformLogger::getLogger("sun.awt.FontConfiguration"_s));
	}
	initTables();
}

void MFontConfiguration::initReorderMap() {
	$set(this, reorderMap, $new($HashMap));
	$nc(this->reorderMap)->put("UTF-8.ja.JP"_s, "japanese-iso10646"_s);
	$nc(this->reorderMap)->put("UTF-8.ko.KR"_s, "korean-iso10646"_s);
	$nc(this->reorderMap)->put("UTF-8.zh.TW"_s, "chinese-tw-iso10646"_s);
	$nc(this->reorderMap)->put("UTF-8.zh.HK"_s, "chinese-tw-iso10646"_s);
	$nc(this->reorderMap)->put("UTF-8.zh.CN"_s, "chinese-cn-iso10646"_s);
	$nc(this->reorderMap)->put("x-euc-jp-linux"_s, $(split("japanese-x0201,japanese-x0208"_s)));
	$nc(this->reorderMap)->put("GB2312"_s, "chinese-gb18030"_s);
	$nc(this->reorderMap)->put("Big5"_s, "chinese-big5"_s);
	$nc(this->reorderMap)->put("EUC-KR"_s, "korean"_s);
	$nc(this->reorderMap)->put("GB18030"_s, "chinese-gb18030"_s);
}

void MFontConfiguration::setOsNameAndVersion() {
	$useLocalCurrentObjectStackCache();
	$FontConfiguration::setOsNameAndVersion();
	if ($nc($FontConfiguration::osName)->equals("Linux"_s)) {
		try {
			$var($File, f, nullptr);
			if ($nc(($assign(f, $new($File, "/etc/fedora-release"_s))))->canRead()) {
				$assignStatic($FontConfiguration::osName, "Fedora"_s);
				$assignStatic($FontConfiguration::osVersion, getVersionString(f));
			} else if ($nc(($assign(f, $new($File, "/etc/redhat-release"_s))))->canRead()) {
				$assignStatic($FontConfiguration::osName, "RedHat"_s);
				$assignStatic($FontConfiguration::osVersion, getVersionString(f));
			} else if ($nc(($assign(f, $new($File, "/etc/turbolinux-release"_s))))->canRead()) {
				$assignStatic($FontConfiguration::osName, "Turbo"_s);
				$assignStatic($FontConfiguration::osVersion, getVersionString(f));
			} else if ($nc(($assign(f, $new($File, "/etc/SuSE-release"_s))))->canRead()) {
				$assignStatic($FontConfiguration::osName, "SuSE"_s);
				$assignStatic($FontConfiguration::osVersion, getVersionString(f));
			} else if ($nc(($assign(f, $new($File, "/etc/lsb-release"_s))))->canRead()) {
				$var($Properties, props, $new($Properties));
				props->load(static_cast<$InputStream*>($$new($FileInputStream, f)));
				$assignStatic($FontConfiguration::osName, props->getProperty("DISTRIB_ID"_s));
				$assignStatic($FontConfiguration::osVersion, props->getProperty("DISTRIB_RELEASE"_s));
			}
		} catch ($Exception& e) {
		}
	}
	return;
}

$String* MFontConfiguration::getVersionString($File* f) {
	try {
		$var($Scanner, sc, $new($Scanner, f));
		return sc->findInLine("(\\d)+((\\.)(\\d)+)*"_s);
	} catch ($Exception& e) {
	}
	return nullptr;
}

$String* MFontConfiguration::mapFileName($String* fileName) {
	if (fileName != nullptr && fileName->startsWith(MFontConfiguration::fontsDirPrefix)) {
		$init($SunFontManager);
		return $str({$SunFontManager::jreFontDirName, $(fileName->substring($nc(MFontConfiguration::fontsDirPrefix)->length()))});
	}
	return fileName;
}

$String* MFontConfiguration::getFallbackFamilyName($String* fontName, $String* defaultFallback) {
	$var($String, compatibilityName, getCompatibilityFamilyName(fontName));
	if (compatibilityName != nullptr) {
		return compatibilityName;
	}
	return defaultFallback;
}

$String* MFontConfiguration::getEncoding($String* awtFontName, $String* characterSubsetName) {
	$useLocalCurrentObjectStackCache();
	int32_t beginIndex = 0;
	int32_t fieldNum = 13;
	while (fieldNum-- > 0 && beginIndex >= 0) {
		beginIndex = $nc(awtFontName)->indexOf("-"_s, beginIndex) + 1;
	}
	if (beginIndex == -1) {
		return "default"_s;
	}
	$var($String, xlfdEncoding, $nc(awtFontName)->substring(beginIndex));
	if (xlfdEncoding->indexOf("fontspecific"_s) > 0) {
		if (awtFontName->indexOf("dingbats"_s) > 0) {
			return "sun.font.X11Dingbats"_s;
		} else if (awtFontName->indexOf("symbol"_s) > 0) {
			return "sun.awt.Symbol"_s;
		}
	}
	$var($String, encoding, $cast($String, $nc(MFontConfiguration::encodingMap)->get(xlfdEncoding)));
	if (encoding == nullptr) {
		$assign(encoding, "default"_s);
	}
	return encoding;
}

$Charset* MFontConfiguration::getDefaultFontCharset($String* fontName) {
	return $Charset::forName("ISO8859_1"_s);
}

$String* MFontConfiguration::getFaceNameFromComponentFontName($String* componentFontName) {
	return nullptr;
}

$String* MFontConfiguration::getFileNameFromComponentFontName($String* componentFontName) {
	$var($String, fileName, getFileNameFromPlatformName(componentFontName));
	bool var$0 = fileName != nullptr && fileName->charAt(0) == u'/';
	if (var$0 && !needToSearchForFile(fileName)) {
		return fileName;
	}
	return $nc(($cast($X11FontManager, this->fontManager)))->getFileNameFromXLFD(componentFontName);
}

$HashSet* MFontConfiguration::getAWTFontPathSet() {
	$useLocalCurrentObjectStackCache();
	$var($HashSet, fontDirs, $new($HashSet));
	$var($shorts, scripts, getCoreScripts(0));
	for (int32_t i = 0; i < $nc(scripts)->length; ++i) {
		$init($FontConfiguration);
		$var($String, path, getString($nc($FontConfiguration::table_awtfontpaths)->get(scripts->get(i))));
		if (path != nullptr) {
			int32_t start = 0;
			int32_t colon = path->indexOf((int32_t)u':');
			while (colon >= 0) {
				fontDirs->add($(path->substring(start, colon)));
				start = colon + 1;
				colon = path->indexOf((int32_t)u':', start);
			}
			fontDirs->add((start == 0) ? path : $(path->substring(start)));
		}
	}
	return fontDirs;
}

void MFontConfiguration::initTables() {
	$nc(MFontConfiguration::encodingMap)->put("iso8859-1"_s, "ISO-8859-1"_s);
	$nc(MFontConfiguration::encodingMap)->put("iso8859-2"_s, "ISO-8859-2"_s);
	$nc(MFontConfiguration::encodingMap)->put("iso8859-4"_s, "ISO-8859-4"_s);
	$nc(MFontConfiguration::encodingMap)->put("iso8859-5"_s, "ISO-8859-5"_s);
	$nc(MFontConfiguration::encodingMap)->put("iso8859-6"_s, "ISO-8859-6"_s);
	$nc(MFontConfiguration::encodingMap)->put("iso8859-7"_s, "ISO-8859-7"_s);
	$nc(MFontConfiguration::encodingMap)->put("iso8859-8"_s, "ISO-8859-8"_s);
	$nc(MFontConfiguration::encodingMap)->put("iso8859-9"_s, "ISO-8859-9"_s);
	$nc(MFontConfiguration::encodingMap)->put("iso8859-13"_s, "ISO-8859-13"_s);
	$nc(MFontConfiguration::encodingMap)->put("iso8859-15"_s, "ISO-8859-15"_s);
	$nc(MFontConfiguration::encodingMap)->put("gb2312.1980-0"_s, "sun.font.X11GB2312"_s);
	$init($FontConfiguration);
	if ($FontConfiguration::osName == nullptr) {
		$nc(MFontConfiguration::encodingMap)->put("gbk-0"_s, "GBK"_s);
	} else {
		$nc(MFontConfiguration::encodingMap)->put("gbk-0"_s, "sun.font.X11GBK"_s);
	}
	$nc(MFontConfiguration::encodingMap)->put("gb18030.2000-0"_s, "sun.font.X11GB18030_0"_s);
	$nc(MFontConfiguration::encodingMap)->put("gb18030.2000-1"_s, "sun.font.X11GB18030_1"_s);
	$nc(MFontConfiguration::encodingMap)->put("cns11643-1"_s, "sun.font.X11CNS11643P1"_s);
	$nc(MFontConfiguration::encodingMap)->put("cns11643-2"_s, "sun.font.X11CNS11643P2"_s);
	$nc(MFontConfiguration::encodingMap)->put("cns11643-3"_s, "sun.font.X11CNS11643P3"_s);
	$nc(MFontConfiguration::encodingMap)->put("big5-1"_s, "Big5"_s);
	$nc(MFontConfiguration::encodingMap)->put("big5-0"_s, "Big5"_s);
	$nc(MFontConfiguration::encodingMap)->put("hkscs-1"_s, "Big5-HKSCS"_s);
	$nc(MFontConfiguration::encodingMap)->put("ansi-1251"_s, "windows-1251"_s);
	$nc(MFontConfiguration::encodingMap)->put("koi8-r"_s, "KOI8-R"_s);
	$nc(MFontConfiguration::encodingMap)->put("jisx0201.1976-0"_s, "JIS0201"_s);
	$nc(MFontConfiguration::encodingMap)->put("jisx0208.1983-0"_s, "JIS0208"_s);
	$nc(MFontConfiguration::encodingMap)->put("jisx0212.1990-0"_s, "JIS0212"_s);
	$nc(MFontConfiguration::encodingMap)->put("ksc5601.1987-0"_s, "sun.font.X11KSC5601"_s);
	$nc(MFontConfiguration::encodingMap)->put("ksc5601.1992-3"_s, "sun.font.X11Johab"_s);
	$nc(MFontConfiguration::encodingMap)->put("tis620.2533-0"_s, "TIS-620"_s);
	$nc(MFontConfiguration::encodingMap)->put("iso10646-1"_s, "UTF-16BE"_s);
}

void clinit$MFontConfiguration($Class* class$) {
	$assignStatic(MFontConfiguration::fontsDirPrefix, "$JRE_LIB_FONTS"_s);
	$assignStatic(MFontConfiguration::fontConfig, nullptr);
	$assignStatic(MFontConfiguration::encodingMap, $new($HashMap));
}

MFontConfiguration::MFontConfiguration() {
}

$Class* MFontConfiguration::load$($String* name, bool initialize) {
	$loadClass(MFontConfiguration, name, initialize, &_MFontConfiguration_ClassInfo_, clinit$MFontConfiguration, allocate$MFontConfiguration);
	return class$;
}

$Class* MFontConfiguration::class$ = nullptr;

	} // font
} // sun