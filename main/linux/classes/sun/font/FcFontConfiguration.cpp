#include <sun/font/FcFontConfiguration.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Error.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Locale.h>
#include <java/util/Properties.h>
#include <java/util/Scanner.h>
#include <sun/awt/FcFontManager.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/awt/FontDescriptor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/font/CompositeFontDescriptor.h>
#include <sun/font/FontConfigManager$FcCompFont.h>
#include <sun/font/FontConfigManager$FontConfigFont.h>
#include <sun/font/FontConfigManager$FontConfigInfo.h>
#include <sun/font/FontConfigManager.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/SunFontManager.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef NUM_FONTS
#undef NUM_STYLES

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $FontDescriptorArray = $Array<::sun::awt::FontDescriptor>;
using $CompositeFontDescriptorArray = $Array<::sun::font::CompositeFontDescriptor>;
using $FontConfigManager$FcCompFontArray = $Array<::sun::font::FontConfigManager$FcCompFont>;
using $FontConfigManager$FontConfigFontArray = $Array<::sun::font::FontConfigManager$FontConfigFont>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Locale = ::java::util::Locale;
using $Properties = ::java::util::Properties;
using $Scanner = ::java::util::Scanner;
using $FcFontManager = ::sun::awt::FcFontManager;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $FontDescriptor = ::sun::awt::FontDescriptor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CompositeFontDescriptor = ::sun::font::CompositeFontDescriptor;
using $FontConfigManager = ::sun::font::FontConfigManager;
using $FontConfigManager$FcCompFont = ::sun::font::FontConfigManager$FcCompFont;
using $FontConfigManager$FontConfigFont = ::sun::font::FontConfigManager$FontConfigFont;
using $FontConfigManager$FontConfigInfo = ::sun::font::FontConfigManager$FontConfigInfo;
using $FontUtilities = ::sun::font::FontUtilities;
using $SunFontManager = ::sun::font::SunFontManager;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace font {

$FieldInfo _FcFontConfiguration_FieldInfo_[] = {
	{"fileVersion", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FcFontConfiguration, fileVersion)},
	{"fcInfoFileName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FcFontConfiguration, fcInfoFileName)},
	{"fcCompFonts", "[Lsun/font/FontConfigManager$FcCompFont;", nullptr, $PRIVATE, $field(FcFontConfiguration, fcCompFonts)},
	{}
};

$MethodInfo _FcFontConfiguration_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, $PUBLIC, $method(static_cast<void(FcFontConfiguration::*)($SunFontManager*)>(&FcFontConfiguration::init$))},
	{"<init>", "(Lsun/font/SunFontManager;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(FcFontConfiguration::*)($SunFontManager*,bool,bool)>(&FcFontConfiguration::init$))},
	{"buildFontDescriptors", "(II)[Lsun/awt/FontDescriptor;", nullptr, $PROTECTED},
	{"get2DCompositeFontInfo", "()[Lsun/font/CompositeFontDescriptor;", nullptr, $PUBLIC},
	{"getDefaultFontCharset", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PROTECTED},
	{"getEncoding", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getExtraFontPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFaceNameFromComponentFontName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getFallbackFamilyName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFcFontList", "([Lsun/font/FontConfigManager$FcCompFont;Ljava/lang/String;I)[Lsun/font/FontConfigManager$FontConfigFont;", nullptr, $PRIVATE, $method(static_cast<$FontConfigManager$FontConfigFontArray*(FcFontConfiguration::*)($FontConfigManager$FcCompFontArray*,$String*,int32_t)>(&FcFontConfiguration::getFcFontList))},
	{"getFcInfoFile", "()Ljava/io/File;", nullptr, $PRIVATE, $method(static_cast<$File*(FcFontConfiguration::*)()>(&FcFontConfiguration::getFcInfoFile))},
	{"getFileNameFromComponentFontName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getFileNameFromPlatformName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNumberCoreFonts", "()I", nullptr, $PUBLIC},
	{"getPlatformFontNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVersionString", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(FcFontConfiguration::*)($File*)>(&FcFontConfiguration::getVersionString))},
	{"init", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"initReorderMap", "()V", nullptr, $PROTECTED},
	{"needToSearchForFile", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"readFcInfo", "()V", nullptr, $PRIVATE, $method(static_cast<void(FcFontConfiguration::*)()>(&FcFontConfiguration::readFcInfo))},
	{"setOsNameAndVersion", "()V", nullptr, $PROTECTED},
	{"warning", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&FcFontConfiguration::warning))},
	{"writeFcInfo", "()V", nullptr, $PRIVATE, $method(static_cast<void(FcFontConfiguration::*)()>(&FcFontConfiguration::writeFcInfo))},
	{}
};

$ClassInfo _FcFontConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.FcFontConfiguration",
	"sun.awt.FontConfiguration",
	nullptr,
	_FcFontConfiguration_FieldInfo_,
	_FcFontConfiguration_MethodInfo_
};

$Object* allocate$FcFontConfiguration($Class* clazz) {
	return $of($alloc(FcFontConfiguration));
}

$String* FcFontConfiguration::fileVersion = nullptr;

void FcFontConfiguration::init$($SunFontManager* fm) {
	$FontConfiguration::init$(fm);
	$set(this, fcInfoFileName, nullptr);
	$set(this, fcCompFonts, nullptr);
	init();
}

void FcFontConfiguration::init$($SunFontManager* fm, bool preferLocaleFonts, bool preferPropFonts) {
	$FontConfiguration::init$(fm, preferLocaleFonts, preferPropFonts);
	$set(this, fcInfoFileName, nullptr);
	$set(this, fcCompFonts, nullptr);
	init();
}

bool FcFontConfiguration::init() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->fcCompFonts != nullptr) {
			return true;
		}
		setFontConfiguration();
		readFcInfo();
		$var($FcFontManager, fm, $cast($FcFontManager, this->fontManager));
		$var($FontConfigManager, fcm, $nc(fm)->getFontConfigManager());
		if (this->fcCompFonts == nullptr) {
			$set(this, fcCompFonts, $nc(fcm)->loadFontConfig());
			if (this->fcCompFonts != nullptr) {
				try {
					writeFcInfo();
				} catch ($Exception& e) {
					if ($FontUtilities::debugFonts()) {
						warning($$str({"Exception writing fcInfo "_s, e}));
					}
				}
			} else if ($FontUtilities::debugFonts()) {
				warning("Failed to get info from libfontconfig"_s);
			}
		} else {
			$nc(fcm)->populateFontConfig(this->fcCompFonts);
		}
		if (this->fcCompFonts == nullptr) {
			return false;
		}
		$var($String, javaHome, $System::getProperty("java.home"_s));
		if (javaHome == nullptr) {
			$throwNew($Error, "java.home property not set"_s);
		}
		$init($File);
		$var($String, javaLib, $str({javaHome, $File::separator, "lib"_s}));
		getInstalledFallbackFonts(javaLib);
		return true;
	}
}

$String* FcFontConfiguration::getFallbackFamilyName($String* fontName, $String* defaultFallback) {
	$var($String, compatibilityName, getCompatibilityFamilyName(fontName));
	if (compatibilityName != nullptr) {
		return compatibilityName;
	}
	return defaultFallback;
}

$String* FcFontConfiguration::getFaceNameFromComponentFontName($String* componentFontName) {
	return nullptr;
}

$String* FcFontConfiguration::getFileNameFromComponentFontName($String* componentFontName) {
	return nullptr;
}

$String* FcFontConfiguration::getFileNameFromPlatformName($String* platformName) {
	return nullptr;
}

$Charset* FcFontConfiguration::getDefaultFontCharset($String* fontName) {
	return $Charset::forName("ISO8859_1"_s);
}

$String* FcFontConfiguration::getEncoding($String* awtFontName, $String* characterSubsetName) {
	return "default"_s;
}

void FcFontConfiguration::initReorderMap() {
	$set(this, reorderMap, $new($HashMap));
}

$FontDescriptorArray* FcFontConfiguration::buildFontDescriptors(int32_t fontIndex, int32_t styleIndex) {
	$useLocalCurrentObjectStackCache();
	$var($CompositeFontDescriptorArray, cfi, get2DCompositeFontInfo());
	int32_t idx = fontIndex * $FontConfiguration::NUM_STYLES + styleIndex;
	$var($StringArray, componentFaceNames, $nc($nc(cfi)->get(idx))->getComponentFaceNames());
	$var($FontDescriptorArray, ret, $new($FontDescriptorArray, $nc(componentFaceNames)->length));
	for (int32_t i = 0; i < componentFaceNames->length; ++i) {
		$init($StandardCharsets);
		ret->set(i, $$new($FontDescriptor, componentFaceNames->get(i), $($nc($StandardCharsets::ISO_8859_1)->newEncoder()), $$new($ints, 0)));
	}
	return ret;
}

int32_t FcFontConfiguration::getNumberCoreFonts() {
	return 1;
}

$StringArray* FcFontConfiguration::getPlatformFontNames() {
	$useLocalCurrentObjectStackCache();
	$var($HashSet, nameSet, $new($HashSet));
	$var($FcFontManager, fm, $cast($FcFontManager, this->fontManager));
	$var($FontConfigManager, fcm, $nc(fm)->getFontConfigManager());
	$var($FontConfigManager$FcCompFontArray, fcCompFonts, $nc(fcm)->loadFontConfig());
	for (int32_t i = 0; i < $nc(fcCompFonts)->length; ++i) {
		for (int32_t j = 0; j < $nc($nc(fcCompFonts->get(i))->allFonts)->length; ++j) {
			nameSet->add($nc($nc($nc(fcCompFonts->get(i))->allFonts)->get(j))->fontFile);
		}
	}
	return $fcast($StringArray, nameSet->toArray($$new($StringArray, 0)));
}

$String* FcFontConfiguration::getExtraFontPath() {
	return nullptr;
}

bool FcFontConfiguration::needToSearchForFile($String* fileName) {
	return false;
}

$FontConfigManager$FontConfigFontArray* FcFontConfiguration::getFcFontList($FontConfigManager$FcCompFontArray* fcFonts, $String* fontname$renamed, int32_t style) {
	$var($String, fontname, fontname$renamed);
	if ($nc(fontname)->equals("dialog"_s)) {
		$assign(fontname, "sansserif"_s);
	} else if (fontname->equals("dialoginput"_s)) {
		$assign(fontname, "monospaced"_s);
	}
	for (int32_t i = 0; i < $nc(fcFonts)->length; ++i) {
		if ($nc(fontname)->equals($nc(fcFonts->get(i))->jdkName) && style == $nc(fcFonts->get(i))->style) {
			return $nc(fcFonts->get(i))->allFonts;
		}
	}
	return $nc($nc(fcFonts)->get(0))->allFonts;
}

$CompositeFontDescriptorArray* FcFontConfiguration::get2DCompositeFontInfo() {
	$useLocalCurrentObjectStackCache();
	$var($FcFontManager, fm, $cast($FcFontManager, this->fontManager));
	$var($FontConfigManager, fcm, $nc(fm)->getFontConfigManager());
	$var($FontConfigManager$FcCompFontArray, fcCompFonts, $nc(fcm)->loadFontConfig());
	$var($CompositeFontDescriptorArray, result, $new($CompositeFontDescriptorArray, $FontConfiguration::NUM_FONTS * $FontConfiguration::NUM_STYLES));
	for (int32_t fontIndex = 0; fontIndex < $FontConfiguration::NUM_FONTS; ++fontIndex) {
		$init($FontConfiguration);
		$var($String, fontName, $nc($FontConfiguration::publicFontNames)->get(fontIndex));
		for (int32_t styleIndex = 0; styleIndex < $FontConfiguration::NUM_STYLES; ++styleIndex) {
			$var($String, faceName, $str({fontName, "."_s, $nc($FontConfiguration::styleNames)->get(styleIndex)}));
			$var($FontConfigManager$FontConfigFontArray, fcFonts, getFcFontList(fcCompFonts, $nc($FontConfiguration::fontNames)->get(fontIndex), styleIndex));
			int32_t numFonts = $nc(fcFonts)->length;
			if ($FontConfiguration::installedFallbackFontFiles != nullptr) {
				numFonts += $nc($FontConfiguration::installedFallbackFontFiles)->length;
			}
			$var($StringArray, fileNames, $new($StringArray, numFonts));
			$var($StringArray, faceNames, $new($StringArray, numFonts));
			int32_t index = 0;
			for (index = 0; index < fcFonts->length; ++index) {
				fileNames->set(index, $nc(fcFonts->get(index))->fontFile);
				faceNames->set(index, $nc(fcFonts->get(index))->fullName);
			}
			if ($FontConfiguration::installedFallbackFontFiles != nullptr) {
				$System::arraycopy($FontConfiguration::installedFallbackFontFiles, 0, fileNames, fcFonts->length, $nc($FontConfiguration::installedFallbackFontFiles)->length);
			}
			result->set(fontIndex * $FontConfiguration::NUM_STYLES + styleIndex, $$new($CompositeFontDescriptor, faceName, 1, faceNames, fileNames, nullptr, nullptr));
		}
	}
	return result;
}

$String* FcFontConfiguration::getVersionString($File* f) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Scanner, sc, $new($Scanner, f));
		{
			$var($Throwable, var$0, nullptr);
			$var($String, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$assign(var$2, sc->findInLine("(\\d)+((\\.)(\\d)+)*"_s));
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					try {
						sc->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				sc->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($Exception& e) {
	}
	return nullptr;
}

void FcFontConfiguration::setOsNameAndVersion() {
	$useLocalCurrentObjectStackCache();
	$FontConfiguration::setOsNameAndVersion();
	if (!$nc($FontConfiguration::osName)->equals("Linux"_s)) {
		return;
	}
	try {
		$var($File, f, nullptr);
		if ($nc(($assign(f, $new($File, "/etc/lsb-release"_s))))->canRead()) {
			$var($Properties, props, $new($Properties));
			props->load(static_cast<$InputStream*>($$new($FileInputStream, f)));
			$assignStatic($FontConfiguration::osName, props->getProperty("DISTRIB_ID"_s));
			$assignStatic($FontConfiguration::osVersion, props->getProperty("DISTRIB_RELEASE"_s));
		} else if ($nc(($assign(f, $new($File, "/etc/redhat-release"_s))))->canRead()) {
			$assignStatic($FontConfiguration::osName, "RedHat"_s);
			$assignStatic($FontConfiguration::osVersion, getVersionString(f));
		} else if ($nc(($assign(f, $new($File, "/etc/SuSE-release"_s))))->canRead()) {
			$assignStatic($FontConfiguration::osName, "SuSE"_s);
			$assignStatic($FontConfiguration::osVersion, getVersionString(f));
		} else if ($nc(($assign(f, $new($File, "/etc/turbolinux-release"_s))))->canRead()) {
			$assignStatic($FontConfiguration::osName, "Turbo"_s);
			$assignStatic($FontConfiguration::osVersion, getVersionString(f));
		} else if ($nc(($assign(f, $new($File, "/etc/fedora-release"_s))))->canRead()) {
			$assignStatic($FontConfiguration::osName, "Fedora"_s);
			$assignStatic($FontConfiguration::osVersion, getVersionString(f));
		}
	} catch ($Exception& e) {
		if ($FontUtilities::debugFonts()) {
			warning("Exception identifying Linux distro."_s);
		}
	}
}

$File* FcFontConfiguration::getFcInfoFile() {
	$useLocalCurrentObjectStackCache();
	if (this->fcInfoFileName == nullptr) {
		$var($String, hostname, nullptr);
		try {
			$assign(hostname, $nc($($InetAddress::getLocalHost()))->getHostName());
		} catch ($UnknownHostException& e) {
			$assign(hostname, "localhost"_s);
		}
		$var($String, userDir, $System::getProperty("user.home"_s));
		$var($String, version, $System::getProperty("java.version"_s));
		$init($File);
		$var($String, fs, $File::separator);
		$var($String, dir, $str({userDir, fs, ".java"_s, fs, "fonts"_s, fs, version}));
		$var($Locale, locale, $SunToolkit::getStartupLocale());
		$var($String, lang, $nc(locale)->getLanguage());
		$var($String, country, locale->getCountry());
		$init($FontConfiguration);
		$var($String, name, $str({"fcinfo-"_s, FcFontConfiguration::fileVersion, "-"_s, hostname, "-"_s, $FontConfiguration::osName, "-"_s, $FontConfiguration::osVersion, "-"_s, lang, "-"_s, country, ".properties"_s}));
		$set(this, fcInfoFileName, $str({dir, fs, name}));
	}
	return $new($File, this->fcInfoFileName);
}

void FcFontConfiguration::writeFcInfo() {
	$useLocalCurrentObjectStackCache();
	$var($Properties, props, $new($Properties));
	props->setProperty("version"_s, FcFontConfiguration::fileVersion);
	$var($FcFontManager, fm, $cast($FcFontManager, this->fontManager));
	$var($FontConfigManager, fcm, $nc(fm)->getFontConfigManager());
	$var($FontConfigManager$FontConfigInfo, fcInfo, $nc(fcm)->getFontConfigInfo());
	props->setProperty("fcversion"_s, $($Integer::toString($nc(fcInfo)->fcVersion)));
	if ($nc(fcInfo)->cacheDirs != nullptr) {
		for (int32_t i = 0; i < $nc(fcInfo->cacheDirs)->length; ++i) {
			if ($nc(fcInfo->cacheDirs)->get(i) != nullptr) {
				props->setProperty($$str({"cachedir."_s, $$str(i)}), $nc(fcInfo->cacheDirs)->get(i));
			}
		}
	}
	for (int32_t i = 0; i < $nc(this->fcCompFonts)->length; ++i) {
		$var($FontConfigManager$FcCompFont, fci, $nc(this->fcCompFonts)->get(i));
		$var($String, styleKey, $str({$nc(fci)->jdkName, "."_s, $$str(fci->style)}));
		props->setProperty($$str({styleKey, ".length"_s}), $($Integer::toString($nc(fci->allFonts)->length)));
		for (int32_t j = 0; j < $nc(fci->allFonts)->length; ++j) {
			props->setProperty($$str({styleKey, "."_s, $$str(j), ".file"_s}), $nc($nc(fci->allFonts)->get(j))->fontFile);
			if ($nc($nc(fci->allFonts)->get(j))->fullName != nullptr) {
				props->setProperty($$str({styleKey, "."_s, $$str(j), ".fullName"_s}), $nc($nc(fci->allFonts)->get(j))->fullName);
			}
		}
	}
	try {
		$var($File, fcInfoFile, getFcInfoFile());
		$var($File, dir, $nc(fcInfoFile)->getParentFile());
		$nc(dir)->mkdirs();
		$var($File, tempFile, $nc($($Files::createTempFile($(dir->toPath()), "fcinfo"_s, nullptr, $$new($FileAttributeArray, 0))))->toFile());
		$var($FileOutputStream, fos, $new($FileOutputStream, tempFile));
		props->store(static_cast<$OutputStream*>(fos), "JDK Font Configuration Generated File: *Do Not Edit*"_s);
		fos->close();
		bool renamed = $nc(tempFile)->renameTo(fcInfoFile);
		if (!renamed && $FontUtilities::debugFonts()) {
			$nc($System::out)->println("rename failed"_s);
			warning($$str({"Failed renaming file to "_s, $(getFcInfoFile())}));
		}
	} catch ($Exception& e) {
		if ($FontUtilities::debugFonts()) {
			warning($$str({"IOException writing to "_s, $(getFcInfoFile())}));
		}
	}
}

void FcFontConfiguration::readFcInfo() {
	$useLocalCurrentObjectStackCache();
	$var($File, fcFile, getFcInfoFile());
	if (!$nc(fcFile)->exists()) {
		if ($FontUtilities::debugFonts()) {
			warning($$str({"fontconfig info file "_s, $(fcFile->toString()), " does not exist"_s}));
		}
		return;
	}
	$var($Properties, props, $new($Properties));
	try {
		$var($FileInputStream, fis, $new($FileInputStream, fcFile));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					props->load(static_cast<$InputStream*>(fis));
				} catch ($Throwable& t$) {
					try {
						fis->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				fis->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException& e) {
		if ($FontUtilities::debugFonts()) {
			$var($String, var$2, $$str({"IOException ("_s, $(e->getCause()), ") reading from "_s}));
			warning($$concat(var$2, $($nc(fcFile)->toString())));
		}
		return;
	}
	$var($String, version, $cast($String, props->get("version"_s)));
	if (version == nullptr || !$nc(version)->equals(FcFontConfiguration::fileVersion)) {
		if ($FontUtilities::debugFonts()) {
			warning($$str({"fontconfig info file version mismatch (found: "_s, version, ", expected: "_s, FcFontConfiguration::fileVersion, ")"_s}));
		}
		return;
	}
	$var($String, fcVersionStr, $cast($String, props->get("fcversion"_s)));
	if (fcVersionStr != nullptr) {
		int32_t fcVersion = 0;
		try {
			fcVersion = $Integer::parseInt(fcVersionStr);
			if (fcVersion != 0 && fcVersion != $FontConfigManager::getFontConfigVersion()) {
				if ($FontUtilities::debugFonts()) {
					warning("new, different fontconfig detected"_s);
				}
				return;
			}
		} catch ($Exception& e) {
			if ($FontUtilities::debugFonts()) {
				warning($$str({"Exception parsing version "_s, fcVersionStr}));
			}
			return;
		}
	}
	int64_t lastModified = $nc(fcFile)->lastModified();
	int32_t cacheDirIndex = 0;
	while (cacheDirIndex < 4) {
		$var($String, dir, $cast($String, props->get($$str({"cachedir."_s, $$str(cacheDirIndex)}))));
		if (dir == nullptr) {
			break;
		}
		$var($File, dirFile, $new($File, dir));
		bool var$3 = dirFile->exists();
		if (var$3 && dirFile->lastModified() > lastModified) {
			if ($FontUtilities::debugFonts()) {
				warning("out of date cache directories detected"_s);
			}
			return;
		}
		++cacheDirIndex;
	}
	$var($StringArray, names, $new($StringArray, {
		"sansserif"_s,
		"serif"_s,
		"monospaced"_s
	}));
	$var($StringArray, fcnames, $new($StringArray, {
		"sans"_s,
		"serif"_s,
		"monospace"_s
	}));
	int32_t namesLen = names->length;
	int32_t numStyles = 4;
	$var($FontConfigManager$FcCompFontArray, fci, $new($FontConfigManager$FcCompFontArray, namesLen * numStyles));
	try {
		for (int32_t i = 0; i < namesLen; ++i) {
			for (int32_t s = 0; s < numStyles; ++s) {
				int32_t index = i * numStyles + s;
				fci->set(index, $$new($FontConfigManager$FcCompFont));
				$var($String, key, $str({names->get(i), "."_s, $$str(s)}));
				$set($nc(fci->get(index)), jdkName, names->get(i));
				$set($nc(fci->get(index)), fcFamily, fcnames->get(i));
				$nc(fci->get(index))->style = s;
				$var($String, lenStr, $cast($String, props->get($$str({key, ".length"_s}))));
				int32_t nfonts = $Integer::parseInt(lenStr);
				if (nfonts <= 0) {
					if ($FontUtilities::debugFonts()) {
						warning($$str({"bad non-positive .length entry in fontconfig file "_s, $(fcFile->toString())}));
					}
					return;
				}
				$set($nc(fci->get(index)), allFonts, $new($FontConfigManager$FontConfigFontArray, nfonts));
				for (int32_t f = 0; f < nfonts; ++f) {
					$nc($nc(fci->get(index))->allFonts)->set(f, $$new($FontConfigManager$FontConfigFont));
					$var($String, fkey, $str({key, "."_s, $$str(f), ".fullName"_s}));
					$var($String, fullName, $cast($String, props->get(fkey)));
					$set($nc($nc($nc(fci->get(index))->allFonts)->get(f)), fullName, fullName);
					$assign(fkey, $str({key, "."_s, $$str(f), ".file"_s}));
					$var($String, file, $cast($String, props->get(fkey)));
					if (file == nullptr) {
						if ($FontUtilities::debugFonts()) {
							warning($$str({"missing file value for key "_s, fkey, " in fontconfig file "_s, $(fcFile->toString())}));
						}
						return;
					}
					$set($nc($nc($nc(fci->get(index))->allFonts)->get(f)), fontFile, file);
				}
				$set($nc(fci->get(index)), firstFont, $nc($nc(fci->get(index))->allFonts)->get(0));
			}
		}
		$set(this, fcCompFonts, fci);
	} catch ($Throwable& t) {
		if ($FontUtilities::debugFonts()) {
			warning($(t->toString()));
		}
	}
	if ($FontUtilities::debugFonts()) {
		$FontUtilities::logInfo($$str({"successfully parsed the fontconfig file at "_s, $(fcFile->toString())}));
	}
}

void FcFontConfiguration::warning($String* msg) {
	$init(FcFontConfiguration);
	$var($PlatformLogger, logger, $PlatformLogger::getLogger("sun.awt.FontConfiguration"_s));
	$nc(logger)->warning(msg);
}

FcFontConfiguration::FcFontConfiguration() {
}

void clinit$FcFontConfiguration($Class* class$) {
	$assignStatic(FcFontConfiguration::fileVersion, "1"_s);
}

$Class* FcFontConfiguration::load$($String* name, bool initialize) {
	$loadClass(FcFontConfiguration, name, initialize, &_FcFontConfiguration_ClassInfo_, clinit$FcFontConfiguration, allocate$FcFontConfiguration);
	return class$;
}

$Class* FcFontConfiguration::class$ = nullptr;

	} // font
} // sun