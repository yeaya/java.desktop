#include <sun/awt/Win32FontManager.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Locale.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/StringTokenizer.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/awt/Win32FontManager$1.h>
#include <sun/awt/Win32FontManager$2.h>
#include <sun/awt/Win32FontManager$3.h>
#include <sun/awt/Win32FontManager$4.h>
#include <sun/awt/Win32GraphicsEnvironment.h>
#include <sun/awt/windows/WFontConfiguration.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/SunFontManager$FamilyDescription.h>
#include <sun/font/SunFontManager.h>
#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

#undef FONTFORMAT_TRUETYPE
#undef FONTFORMAT_TYPE1

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Locale = ::java::util::Locale;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $StringTokenizer = ::java::util::StringTokenizer;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $Win32FontManager$1 = ::sun::awt::Win32FontManager$1;
using $Win32FontManager$2 = ::sun::awt::Win32FontManager$2;
using $Win32FontManager$3 = ::sun::awt::Win32FontManager$3;
using $Win32FontManager$4 = ::sun::awt::Win32FontManager$4;
using $Win32GraphicsEnvironment = ::sun::awt::Win32GraphicsEnvironment;
using $WFontConfiguration = ::sun::awt::windows::WFontConfiguration;
using $SunFontManager = ::sun::font::SunFontManager;
using $SunFontManager$FamilyDescription = ::sun::font::SunFontManager$FamilyDescription;
using $TrueTypeFont = ::sun::font::TrueTypeFont;

namespace sun {
	namespace awt {

$FieldInfo _Win32FontManager_FieldInfo_[] = {
	{"eudcFont", "Lsun/font/TrueTypeFont;", nullptr, $PRIVATE | $STATIC, $staticField(Win32FontManager, eudcFont)},
	{"fontsForPrinting", "Ljava/lang/String;", nullptr, $STATIC, $staticField(Win32FontManager, fontsForPrinting)},
	{}
};

$MethodInfo _Win32FontManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Win32FontManager::*)()>(&Win32FontManager::init$))},
	{"createFontConfiguration", "()Lsun/awt/FontConfiguration;", nullptr, $PROTECTED},
	{"createFontConfiguration", "(ZZ)Lsun/awt/FontConfiguration;", nullptr, $PUBLIC},
	{"deRegisterFontWithPlatform", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($String*)>(&Win32FontManager::deRegisterFontWithPlatform))},
	{"getDefaultPlatformFont", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getEUDCFont", "()Lsun/font/TrueTypeFont;", nullptr, $PUBLIC},
	{"getEUDCFontFile", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)()>(&Win32FontManager::getEUDCFontFile))},
	{"getFontPath", "(Z)Ljava/lang/String;", nullptr, $PROTECTED | $SYNCHRONIZED | $NATIVE},
	{"populateFontFileNameMap", "(Ljava/util/HashMap;Ljava/util/HashMap;Ljava/util/HashMap;Ljava/util/Locale;)V", "(Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/HashMap<Ljava/lang/String;Ljava/util/ArrayList<Ljava/lang/String;>;>;Ljava/util/Locale;)V", $PROTECTED},
	{"populateFontFileNameMap0", "(Ljava/util/HashMap;Ljava/util/HashMap;Ljava/util/HashMap;Ljava/util/Locale;)V", "(Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/HashMap<Ljava/lang/String;Ljava/util/ArrayList<Ljava/lang/String;>;>;Ljava/util/Locale;)V", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($HashMap*,$HashMap*,$HashMap*,$Locale*)>(&Win32FontManager::populateFontFileNameMap0))},
	{"populateHardcodedFileNameMap", "()Ljava/util/HashMap;", "()Ljava/util/HashMap<Ljava/lang/String;Lsun/font/SunFontManager$FamilyDescription;>;", $PUBLIC},
	{"registerFontFile", "(Ljava/lang/String;[Ljava/lang/String;IZ)V", nullptr, $PROTECTED},
	{"registerFontWithPlatform", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($String*)>(&Win32FontManager::registerFontWithPlatform))},
	{"registerJREFontsForPrinting", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Win32FontManager::registerJREFontsForPrinting))},
	{"registerJREFontsWithPlatform", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Win32FontManager::*)($String*)>(&Win32FontManager::registerJREFontsWithPlatform))},
	{"useAbsoluteFontFileNames", "()Z", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_deRegisterFontWithPlatform 3
#define _METHOD_INDEX_getEUDCFontFile 6
#define _METHOD_INDEX_getFontPath 7
#define _METHOD_INDEX_populateFontFileNameMap0 9
#define _METHOD_INDEX_registerFontWithPlatform 12

$InnerClassInfo _Win32FontManager_InnerClassesInfo_[] = {
	{"sun.awt.Win32FontManager$4", nullptr, nullptr, 0},
	{"sun.awt.Win32FontManager$3", nullptr, nullptr, 0},
	{"sun.awt.Win32FontManager$2", nullptr, nullptr, 0},
	{"sun.awt.Win32FontManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Win32FontManager_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.Win32FontManager",
	"sun.font.SunFontManager",
	nullptr,
	_Win32FontManager_FieldInfo_,
	_Win32FontManager_MethodInfo_,
	nullptr,
	nullptr,
	_Win32FontManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.Win32FontManager$4,sun.awt.Win32FontManager$3,sun.awt.Win32FontManager$2,sun.awt.Win32FontManager$1"
};

$Object* allocate$Win32FontManager($Class* clazz) {
	return $of($alloc(Win32FontManager));
}

$TrueTypeFont* Win32FontManager::eudcFont = nullptr;
$String* Win32FontManager::fontsForPrinting = nullptr;

$String* Win32FontManager::getEUDCFontFile() {
	$init(Win32FontManager);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(Win32FontManager, getEUDCFontFile, $String*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

$TrueTypeFont* Win32FontManager::getEUDCFont() {
	return Win32FontManager::eudcFont;
}

void Win32FontManager::init$() {
	$beforeCallerSensitive();
	$SunFontManager::init$();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Win32FontManager$2, this)));
}

bool Win32FontManager::useAbsoluteFontFileNames() {
	return false;
}

void Win32FontManager::registerFontFile($String* fontFileName, $StringArray* nativeNames, int32_t fontRank, bool defer) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->registeredFontFiles)->contains(fontFileName)) {
		return;
	}
	$nc(this->registeredFontFiles)->add(fontFileName);
	int32_t fontFormat = 0;
	if ($nc($(getTrueTypeFilter()))->accept(nullptr, fontFileName)) {
		fontFormat = $SunFontManager::FONTFORMAT_TRUETYPE;
	} else if ($nc($(getType1Filter()))->accept(nullptr, fontFileName)) {
		fontFormat = $SunFontManager::FONTFORMAT_TYPE1;
	} else {
		return;
	}
	if (this->fontPath == nullptr) {
		$init($SunFontManager);
		$set(this, fontPath, getPlatformFontPath($SunFontManager::noType1Font));
	}
	$init($SunFontManager);
	$init($File);
	$var($String, tmpFontPath, $str({$SunFontManager::jreFontDirName, $File::pathSeparator, this->fontPath}));
	$var($StringTokenizer, parser, $new($StringTokenizer, tmpFontPath, $File::pathSeparator));
	bool found = false;
	try {
		while (!found && parser->hasMoreTokens()) {
			$var($String, newPath, parser->nextToken());
			bool isJREFont = $nc(newPath)->equals($SunFontManager::jreFontDirName);
			$var($File, theFile, $new($File, newPath, fontFileName));
			if (theFile->canRead()) {
				found = true;
				$var($String, path, theFile->getAbsolutePath());
				if (defer) {
					registerDeferredFont(fontFileName, path, nativeNames, fontFormat, isJREFont, fontRank);
				} else {
					registerFontFile(path, nativeNames, fontFormat, isJREFont, fontRank);
				}
				break;
			}
		}
	} catch ($NoSuchElementException& e) {
		$nc($System::err)->println($of(e));
	}
	if (!found) {
		addToMissingFontFileList(fontFileName);
	}
}

$FontConfiguration* Win32FontManager::createFontConfiguration() {
	$var($FontConfiguration, fc, $new($WFontConfiguration, this));
	fc->init();
	return fc;
}

$FontConfiguration* Win32FontManager::createFontConfiguration(bool preferLocaleFonts, bool preferPropFonts) {
	return $new($WFontConfiguration, this, preferLocaleFonts, preferPropFonts);
}

void Win32FontManager::populateFontFileNameMap($HashMap* fontToFileMap, $HashMap* fontToFamilyNameMap, $HashMap* familyToFontListMap, $Locale* locale) {
	populateFontFileNameMap0(fontToFileMap, fontToFamilyNameMap, familyToFontListMap, locale);
}

void Win32FontManager::populateFontFileNameMap0($HashMap* fontToFileMap, $HashMap* fontToFamilyNameMap, $HashMap* familyToFontListMap, $Locale* locale) {
	$init(Win32FontManager);
	$prepareNativeStatic(Win32FontManager, populateFontFileNameMap0, void, $HashMap* fontToFileMap, $HashMap* fontToFamilyNameMap, $HashMap* familyToFontListMap, $Locale* locale);
	$invokeNativeStatic(fontToFileMap, fontToFamilyNameMap, familyToFontListMap, locale);
	$finishNativeStatic();
}

$String* Win32FontManager::getFontPath(bool noType1Fonts) {
	$var($String, $ret, nullptr);
	$prepareNative(Win32FontManager, getFontPath, $String*, bool noType1Fonts);
	$assign($ret, $invokeNativeObject(noType1Fonts));
	$finishNative();
	return $ret;
}

$StringArray* Win32FontManager::getDefaultPlatformFont() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($StringArray, info, $new($StringArray, 2));
	info->set(0, "Arial"_s);
	info->set(1, "c:\\windows\\fonts"_s);
	$var($StringArray, dirs, getPlatformFontDirs(true));
	if ($nc(dirs)->length > 1) {
		$var($String, dir, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Win32FontManager$3, this, dirs)))));
		if (dir != nullptr) {
			info->set(1, dir);
		}
	} else {
		info->set(1, dirs->get(0));
	}
	$init($File);
	info->set(1, $$str({info->get(1), $File::separator, "arial.ttf"_s}));
	return info;
}

void Win32FontManager::registerJREFontsWithPlatform($String* pathName) {
	$assignStatic(Win32FontManager::fontsForPrinting, pathName);
}

void Win32FontManager::registerJREFontsForPrinting() {
	$init(Win32FontManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, pathName, nullptr);
	$load($Win32GraphicsEnvironment);
	$synchronized($Win32GraphicsEnvironment::class$) {
		$GraphicsEnvironment::getLocalGraphicsEnvironment();
		if (Win32FontManager::fontsForPrinting == nullptr) {
			return;
		}
		$assign(pathName, Win32FontManager::fontsForPrinting);
		$assignStatic(Win32FontManager::fontsForPrinting, nullptr);
	}
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Win32FontManager$4, pathName)));
}

void Win32FontManager::registerFontWithPlatform($String* fontName) {
	$init(Win32FontManager);
	$prepareNativeStatic(Win32FontManager, registerFontWithPlatform, void, $String* fontName);
	$invokeNativeStatic(fontName);
	$finishNativeStatic();
}

void Win32FontManager::deRegisterFontWithPlatform($String* fontName) {
	$init(Win32FontManager);
	$prepareNativeStatic(Win32FontManager, deRegisterFontWithPlatform, void, $String* fontName);
	$invokeNativeStatic(fontName);
	$finishNativeStatic();
}

$HashMap* Win32FontManager::populateHardcodedFileNameMap() {
	$useLocalCurrentObjectStackCache();
	$var($HashMap, platformFontMap, $new($HashMap));
	$var($SunFontManager$FamilyDescription, fd, nullptr);
	$assign(fd, $new($SunFontManager$FamilyDescription));
	$set(fd, familyName, "Segoe UI"_s);
	$set(fd, plainFullName, "Segoe UI"_s);
	$set(fd, plainFileName, "segoeui.ttf"_s);
	$set(fd, boldFullName, "Segoe UI Bold"_s);
	$set(fd, boldFileName, "segoeuib.ttf"_s);
	$set(fd, italicFullName, "Segoe UI Italic"_s);
	$set(fd, italicFileName, "segoeuii.ttf"_s);
	$set(fd, boldItalicFullName, "Segoe UI Bold Italic"_s);
	$set(fd, boldItalicFileName, "segoeuiz.ttf"_s);
	platformFontMap->put("segoe"_s, fd);
	$assign(fd, $new($SunFontManager$FamilyDescription));
	$set(fd, familyName, "Tahoma"_s);
	$set(fd, plainFullName, "Tahoma"_s);
	$set(fd, plainFileName, "tahoma.ttf"_s);
	$set(fd, boldFullName, "Tahoma Bold"_s);
	$set(fd, boldFileName, "tahomabd.ttf"_s);
	platformFontMap->put("tahoma"_s, fd);
	$assign(fd, $new($SunFontManager$FamilyDescription));
	$set(fd, familyName, "Verdana"_s);
	$set(fd, plainFullName, "Verdana"_s);
	$set(fd, plainFileName, "verdana.TTF"_s);
	$set(fd, boldFullName, "Verdana Bold"_s);
	$set(fd, boldFileName, "verdanab.TTF"_s);
	$set(fd, italicFullName, "Verdana Italic"_s);
	$set(fd, italicFileName, "verdanai.TTF"_s);
	$set(fd, boldItalicFullName, "Verdana Bold Italic"_s);
	$set(fd, boldItalicFileName, "verdanaz.TTF"_s);
	platformFontMap->put("verdana"_s, fd);
	$assign(fd, $new($SunFontManager$FamilyDescription));
	$set(fd, familyName, "Arial"_s);
	$set(fd, plainFullName, "Arial"_s);
	$set(fd, plainFileName, "ARIAL.TTF"_s);
	$set(fd, boldFullName, "Arial Bold"_s);
	$set(fd, boldFileName, "ARIALBD.TTF"_s);
	$set(fd, italicFullName, "Arial Italic"_s);
	$set(fd, italicFileName, "ARIALI.TTF"_s);
	$set(fd, boldItalicFullName, "Arial Bold Italic"_s);
	$set(fd, boldItalicFileName, "ARIALBI.TTF"_s);
	platformFontMap->put("arial"_s, fd);
	$assign(fd, $new($SunFontManager$FamilyDescription));
	$set(fd, familyName, "Symbol"_s);
	$set(fd, plainFullName, "Symbol"_s);
	$set(fd, plainFileName, "Symbol.TTF"_s);
	platformFontMap->put("symbol"_s, fd);
	$assign(fd, $new($SunFontManager$FamilyDescription));
	$set(fd, familyName, "WingDings"_s);
	$set(fd, plainFullName, "WingDings"_s);
	$set(fd, plainFileName, "WINGDING.TTF"_s);
	platformFontMap->put("wingdings"_s, fd);
	return platformFontMap;
}

void clinit$Win32FontManager($Class* class$) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Win32FontManager$1)));
	}
	$assignStatic(Win32FontManager::fontsForPrinting, nullptr);
}

Win32FontManager::Win32FontManager() {
}

$Class* Win32FontManager::load$($String* name, bool initialize) {
	$loadClass(Win32FontManager, name, initialize, &_Win32FontManager_ClassInfo_, clinit$Win32FontManager, allocate$Win32FontManager);
	return class$;
}

$Class* Win32FontManager::class$ = nullptr;

	} // awt
} // sun