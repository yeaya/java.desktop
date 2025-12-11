#include <sun/font/CFontManager.h>

#include <java/awt/Font.h>
#include <java/awt/Toolkit.h>
#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <java/util/TreeMap.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/awt/HeadlessToolkit.h>
#include <sun/font/CFont.h>
#include <sun/font/CFontConfiguration.h>
#include <sun/font/CFontManager$1.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontFamily.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/NativeFont.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/SunFontManager.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

#undef BOLD
#undef ENGLISH
#undef ITALIC
#undef PLAIN

using $Font2DArray = $Array<::sun::font::Font2D>;
using $FontFamilyArray = $Array<::sun::font::FontFamily>;
using $Font = ::java::awt::Font;
using $Toolkit = ::java::awt::Toolkit;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Locale = ::java::util::Locale;
using $TreeMap = ::java::util::TreeMap;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $HeadlessToolkit = ::sun::awt::HeadlessToolkit;
using $CFont = ::sun::font::CFont;
using $CFontConfiguration = ::sun::font::CFontConfiguration;
using $CFontManager$1 = ::sun::font::CFontManager$1;
using $Font2D = ::sun::font::Font2D;
using $FontFamily = ::sun::font::FontFamily;
using $FontUtilities = ::sun::font::FontUtilities;
using $NativeFont = ::sun::font::NativeFont;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $SunFontManager = ::sun::font::SunFontManager;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace font {

class CFontManager$$Lambda$lambda$registerFontsInDir$0 : public $PrivilegedAction {
	$class(CFontManager$$Lambda$lambda$registerFontsInDir$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(CFontManager* inst, $String* dirName) {
		$set(this, inst$, inst);
		$set(this, dirName, dirName);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$registerFontsInDir$0(dirName));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CFontManager$$Lambda$lambda$registerFontsInDir$0>());
	}
	CFontManager* inst$ = nullptr;
	$String* dirName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CFontManager$$Lambda$lambda$registerFontsInDir$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CFontManager$$Lambda$lambda$registerFontsInDir$0, inst$)},
	{"dirName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CFontManager$$Lambda$lambda$registerFontsInDir$0, dirName)},
	{}
};
$MethodInfo CFontManager$$Lambda$lambda$registerFontsInDir$0::methodInfos[3] = {
	{"<init>", "(Lsun/font/CFontManager;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CFontManager$$Lambda$lambda$registerFontsInDir$0::*)(CFontManager*,$String*)>(&CFontManager$$Lambda$lambda$registerFontsInDir$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CFontManager$$Lambda$lambda$registerFontsInDir$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.font.CFontManager$$Lambda$lambda$registerFontsInDir$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* CFontManager$$Lambda$lambda$registerFontsInDir$0::load$($String* name, bool initialize) {
	$loadClass(CFontManager$$Lambda$lambda$registerFontsInDir$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CFontManager$$Lambda$lambda$registerFontsInDir$0::class$ = nullptr;

$FieldInfo _CFontManager_FieldInfo_[] = {
	{"genericFonts", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Lsun/font/Font2D;>;", $PRIVATE | $STATIC, $staticField(CFontManager, genericFonts)},
	{"waitForFontsToBeLoaded", "Ljava/lang/Object;", nullptr, 0, $field(CFontManager, waitForFontsToBeLoaded)},
	{"loadedAllFonts", "Z", nullptr, $PRIVATE, $field(CFontManager, loadedAllFonts)},
	{}
};

$MethodInfo _CFontManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CFontManager::*)()>(&CFontManager::init$))},
	{"addNativeFontFamilyNames", "(Ljava/util/TreeMap;Ljava/util/Locale;)V", "(Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/Locale;)V", $PROTECTED},
	{"cloneStyledFont", "(Lsun/font/FontFamily;Ljava/lang/String;I)Z", nullptr, $PROTECTED, $method(static_cast<bool(CFontManager::*)($FontFamily*,$String*,int32_t)>(&CFontManager::cloneStyledFont))},
	{"createFontConfiguration", "()Lsun/awt/FontConfiguration;", nullptr, $PROTECTED},
	{"createFontConfiguration", "(ZZ)Lsun/awt/FontConfiguration;", nullptr, $PUBLIC},
	{"getDefaultPlatformFont", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getFontConfigFUIR", "(Ljava/lang/String;II)Ljavax/swing/plaf/FontUIResource;", nullptr, $PROTECTED},
	{"getFontFamily", "(Ljava/lang/String;Ljava/lang/String;)Lsun/font/FontFamily;", nullptr, $PROTECTED, $method(static_cast<$FontFamily*(CFontManager::*)($String*,$String*)>(&CFontManager::getFontFamily))},
	{"getFontFamilyWithExtraTry", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lsun/font/FontFamily;", nullptr, $PROTECTED, $method(static_cast<$FontFamily*(CFontManager::*)($String*,$String*,$String*)>(&CFontManager::getFontFamilyWithExtraTry))},
	{"getFontPath", "(Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getGenericFonts", "()[Lsun/font/Font2D;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Font2DArray*(*)()>(&CFontManager::getGenericFonts))},
	{"getRegisteredFonts", "()[Lsun/font/Font2D;", nullptr, $PUBLIC},
	{"lambda$registerFontsInDir$0", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$StringArray*(CFontManager::*)($String*)>(&CFontManager::lambda$registerFontsInDir$0))},
	{"loadFonts", "()V", nullptr, $PUBLIC},
	{"loadNativeDirFonts", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CFontManager::*)($String*)>(&CFontManager::loadNativeDirFonts))},
	{"loadNativeFonts", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CFontManager::*)()>(&CFontManager::loadNativeFonts))},
	{"populateFontFileNameMap", "(Ljava/util/HashMap;Ljava/util/HashMap;Ljava/util/HashMap;Ljava/util/Locale;)V", "(Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/HashMap<Ljava/lang/String;Ljava/util/ArrayList<Ljava/lang/String;>;>;Ljava/util/Locale;)V", $PROTECTED},
	{"registerFont", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CFontManager::*)($String*,$String*)>(&CFontManager::registerFont))},
	{"registerFontsInDir", "(Ljava/lang/String;ZIZZ)V", nullptr, $PROTECTED},
	{"registerGenericFont", "(Lsun/font/Font2D;)Lsun/font/Font2D;", nullptr, $PUBLIC, $method(static_cast<$Font2D*(CFontManager::*)($Font2D*)>(&CFontManager::registerGenericFont))},
	{"registerGenericFont", "(Lsun/font/Font2D;Z)Lsun/font/Font2D;", nullptr, $PUBLIC, $method(static_cast<$Font2D*(CFontManager::*)($Font2D*,bool)>(&CFontManager::registerGenericFont))},
	{"registerItalicDerived", "()V", nullptr, 0, $method(static_cast<void(CFontManager::*)()>(&CFontManager::registerItalicDerived))},
	{"setupLogicalFonts", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(CFontManager::*)($String*,$String*,$String*)>(&CFontManager::setupLogicalFonts))},
	{}
};

#define _METHOD_INDEX_loadNativeDirFonts 14
#define _METHOD_INDEX_loadNativeFonts 15

$InnerClassInfo _CFontManager_InnerClassesInfo_[] = {
	{"sun.font.CFontManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CFontManager_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.CFontManager",
	"sun.font.SunFontManager",
	nullptr,
	_CFontManager_FieldInfo_,
	_CFontManager_MethodInfo_,
	nullptr,
	nullptr,
	_CFontManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.CFontManager$1"
};

$Object* allocate$CFontManager($Class* clazz) {
	return $of($alloc(CFontManager));
}

$Hashtable* CFontManager::genericFonts = nullptr;

void CFontManager::init$() {
	$SunFontManager::init$();
	$set(this, waitForFontsToBeLoaded, $new($Object));
	this->loadedAllFonts = false;
}

$FontConfiguration* CFontManager::createFontConfiguration() {
	$var($FontConfiguration, fc, $new($CFontConfiguration, this));
	fc->init();
	return fc;
}

$FontConfiguration* CFontManager::createFontConfiguration(bool preferLocaleFonts, bool preferPropFonts) {
	return $new($CFontConfiguration, this, preferLocaleFonts, preferPropFonts);
}

$StringArray* CFontManager::getDefaultPlatformFont() {
	return $new($StringArray, {
		"Lucida Grande"_s,
		"/System/Library/Fonts/LucidaGrande.ttc"_s
	});
}

$Font2DArray* CFontManager::getGenericFonts() {
	$init(CFontManager);
	$useLocalCurrentObjectStackCache();
	return $fcast($Font2DArray, $nc($($nc(CFontManager::genericFonts)->values()))->toArray($$new($Font2DArray, 0)));
}

$Font2D* CFontManager::registerGenericFont($Font2D* f) {
	return registerGenericFont(f, false);
}

$Font2D* CFontManager::registerGenericFont($Font2D* f, bool logicalFont) {
	$useLocalCurrentObjectStackCache();
	int32_t rank = 4;
	$var($String, fontName, $nc(f)->fullName);
	$var($String, familyName, f->familyName);
	if (fontName == nullptr || $nc(fontName)->isEmpty()) {
		return nullptr;
	}
	if (logicalFont || !$nc(CFontManager::genericFonts)->containsKey(fontName)) {
		if ($FontUtilities::debugFonts()) {
			$FontUtilities::logInfo($$str({"Add to Family "_s, familyName, ", Font "_s, fontName, " rank="_s, $$str(rank)}));
		}
		$var($FontFamily, family, $FontFamily::getFamily(familyName));
		if (family == nullptr) {
			$assign(family, $new($FontFamily, familyName, false, rank));
			family->setFont(f, f->style);
		} else if ($nc(family)->getRank() >= rank) {
			family->setFont(f, f->style);
		}
		if (!logicalFont) {
			$nc(CFontManager::genericFonts)->put(fontName, f);
			$init($Locale);
			$nc(this->fullNameToFont)->put($($nc(fontName)->toLowerCase($Locale::ENGLISH)), f);
		}
		return f;
	} else {
		return $cast($Font2D, $nc(CFontManager::genericFonts)->get(fontName));
	}
}

$Font2DArray* CFontManager::getRegisteredFonts() {
	$useLocalCurrentObjectStackCache();
	$var($Font2DArray, regFonts, $SunFontManager::getRegisteredFonts());
	$var($Font2DArray, genericFonts, getGenericFonts());
	$var($Font2DArray, allFonts, $new($Font2DArray, $nc(regFonts)->length + $nc(genericFonts)->length));
	$System::arraycopy(regFonts, 0, allFonts, 0, regFonts->length);
	$System::arraycopy(genericFonts, 0, allFonts, regFonts->length, genericFonts->length);
	return allFonts;
}

void CFontManager::addNativeFontFamilyNames($TreeMap* familyNames, $Locale* requestedLocale) {
	$useLocalCurrentObjectStackCache();
	$var($Font2DArray, genericfonts, getGenericFonts());
	for (int32_t i = 0; i < $nc(genericfonts)->length; ++i) {
		if (!($instanceOf($NativeFont, genericfonts->get(i)))) {
			$var($String, name, $nc(genericfonts->get(i))->getFamilyName(requestedLocale));
			$nc(familyNames)->put($($nc(name)->toLowerCase(requestedLocale)), name);
		}
	}
}

void CFontManager::registerFontsInDir($String* dirName, bool useJavaRasterizer, int32_t fontRank, bool defer, bool resolveSymLinks) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($StringArray, files, $cast($StringArray, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(CFontManager$$Lambda$lambda$registerFontsInDir$0, this, dirName)))));
	if (files == nullptr) {
		return;
	} else {
		{
			$var($StringArray, arr$, files);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, f, arr$->get(i$));
				{
					$init($File);
					loadNativeDirFonts($$str({dirName, $File::separator, f}));
				}
			}
		}
	}
	$SunFontManager::registerFontsInDir(dirName, useJavaRasterizer, fontRank, defer, resolveSymLinks);
}

void CFontManager::loadNativeDirFonts($String* fontPath) {
	$prepareNative(CFontManager, loadNativeDirFonts, void, $String* fontPath);
	$invokeNative(fontPath);
	$finishNative();
}

void CFontManager::loadNativeFonts() {
	$prepareNative(CFontManager, loadNativeFonts, void);
	$invokeNative();
	$finishNative();
}

void CFontManager::registerFont($String* fontName, $String* fontFamilyName) {
	$var($CFont, font, $new($CFont, fontName, fontFamilyName));
	registerGenericFont(font);
}

void CFontManager::registerItalicDerived() {
	$useLocalCurrentObjectStackCache();
	$var($FontFamilyArray, famArr, $FontFamily::getAllFontFamilies());
	for (int32_t i = 0; i < $nc(famArr)->length; ++i) {
		$var($FontFamily, family, famArr->get(i));
		$var($Font2D, f2dPlain, $nc(family)->getFont($Font::PLAIN));
		if (f2dPlain != nullptr && !($instanceOf($CFont, f2dPlain))) {
			continue;
		}
		$var($Font2D, f2dBold, family->getFont($Font::BOLD));
		if (f2dBold != nullptr && !($instanceOf($CFont, f2dBold))) {
			continue;
		}
		$var($Font2D, f2dItalic, family->getFont($Font::ITALIC));
		if (f2dItalic != nullptr && !($instanceOf($CFont, f2dItalic))) {
			continue;
		}
		$var($Font2D, f2dBoldItalic, family->getFont($Font::BOLD | $Font::ITALIC));
		if (f2dBoldItalic != nullptr && !($instanceOf($CFont, f2dBoldItalic))) {
			continue;
		}
		$var($CFont, plain, $cast($CFont, f2dPlain));
		$var($CFont, bold, $cast($CFont, f2dBold));
		$var($CFont, italic, $cast($CFont, f2dItalic));
		$var($CFont, boldItalic, $cast($CFont, f2dBoldItalic));
		if (bold == nullptr) {
			$assign(bold, plain);
		}
		if (plain == nullptr && bold == nullptr) {
			continue;
		}
		if (italic != nullptr && boldItalic != nullptr) {
			continue;
		}
		if (plain != nullptr && italic == nullptr) {
			registerGenericFont($(plain->createItalicVariant()), true);
		}
		if (bold != nullptr && boldItalic == nullptr) {
			registerGenericFont($(bold->createItalicVariant()), true);
		}
	}
}

void CFontManager::loadFonts() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$synchronized(this->waitForFontsToBeLoaded) {
		$SunFontManager::loadFonts();
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($CFontManager$1, this)));
		$var($String, defaultFont, "Lucida Grande"_s);
		$var($String, defaultFallback, "Lucida Grande"_s);
		setupLogicalFonts("Dialog"_s, defaultFont, defaultFallback);
		setupLogicalFonts("Serif"_s, "Times"_s, "Times"_s);
		setupLogicalFonts("SansSerif"_s, defaultFont, defaultFallback);
		setupLogicalFonts("Monospaced"_s, "Menlo"_s, "Courier"_s);
		setupLogicalFonts("DialogInput"_s, defaultFont, defaultFallback);
	}
}

void CFontManager::setupLogicalFonts($String* logicalName, $String* realName, $String* fallbackName) {
	$var($FontFamily, realFamily, getFontFamilyWithExtraTry(logicalName, realName, fallbackName));
	cloneStyledFont(realFamily, logicalName, $Font::PLAIN);
	cloneStyledFont(realFamily, logicalName, $Font::BOLD);
	cloneStyledFont(realFamily, logicalName, $Font::ITALIC);
	cloneStyledFont(realFamily, logicalName, $Font::BOLD | $Font::ITALIC);
}

$FontFamily* CFontManager::getFontFamilyWithExtraTry($String* logicalName, $String* realName, $String* fallbackName) {
	$useLocalCurrentObjectStackCache();
	$var($FontFamily, family, getFontFamily(realName, fallbackName));
	if (family != nullptr) {
		return family;
	}
	$SunFontManager::loadFonts();
	$assign(family, getFontFamily(realName, fallbackName));
	if (family != nullptr) {
		return family;
	}
	$nc($System::err)->println($$str({"Warning: the fonts \""_s, realName, "\" and \""_s, fallbackName, "\" are not available for the Java logical font \""_s, logicalName, "\", which may have unexpected appearance or behavior. Re-enable the \""_s, realName, "\" font to remove this warning."_s}));
	return nullptr;
}

$FontFamily* CFontManager::getFontFamily($String* realName, $String* fallbackName) {
	$useLocalCurrentObjectStackCache();
	$var($FontFamily, family, $FontFamily::getFamily(realName));
	if (family != nullptr) {
		return family;
	}
	$assign(family, $FontFamily::getFamily(fallbackName));
	if (family != nullptr) {
		$nc($System::err)->println($$str({"Warning: the font \""_s, realName, "\" is not available, so \""_s, fallbackName, "\" has been substituted, but may have unexpected appearance or behavor. Re-enable the \""_s, realName, "\" font to remove this warning."_s}));
		return family;
	}
	return nullptr;
}

bool CFontManager::cloneStyledFont($FontFamily* realFamily, $String* logicalFamilyName, int32_t style) {
	$useLocalCurrentObjectStackCache();
	if (realFamily == nullptr) {
		return false;
	}
	$var($Font2D, realFont, $nc(realFamily)->getFontWithExactStyleMatch(style));
	if (realFont == nullptr || !($instanceOf($CFont, realFont))) {
		return false;
	}
	$var($CFont, newFont, $new($CFont, $cast($CFont, realFont), logicalFamilyName));
	registerGenericFont(newFont, true);
	return true;
}

$String* CFontManager::getFontPath(bool noType1Fonts) {
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	if ($instanceOf($HeadlessToolkit, tk)) {
		$assign(tk, $nc(($cast($HeadlessToolkit, tk)))->getUnderlyingToolkit());
	}
	if ($instanceOf($LWCToolkit, tk)) {
		return ""_s;
	}
	return "/Library/Fonts"_s;
}

$FontUIResource* CFontManager::getFontConfigFUIR($String* family, int32_t style, int32_t size) {
	$var($String, mappedName, $FontUtilities::mapFcName(family));
	if (mappedName == nullptr) {
		$assign(mappedName, "sansserif"_s);
	}
	return $new($FontUIResource, mappedName, style, size);
}

void CFontManager::populateFontFileNameMap($HashMap* fontToFileMap, $HashMap* fontToFamilyNameMap, $HashMap* familyToFontListMap, $Locale* locale) {
}

$StringArray* CFontManager::lambda$registerFontsInDir$0($String* dirName) {
	$useLocalCurrentObjectStackCache();
	return $$new($File, dirName)->list($(getTrueTypeFilter()));
}

void clinit$CFontManager($Class* class$) {
	$assignStatic(CFontManager::genericFonts, $new($Hashtable));
}

CFontManager::CFontManager() {
}

$Class* CFontManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CFontManager$$Lambda$lambda$registerFontsInDir$0::classInfo$.name)) {
			return CFontManager$$Lambda$lambda$registerFontsInDir$0::load$(name, initialize);
		}
	}
	$loadClass(CFontManager, name, initialize, &_CFontManager_ClassInfo_, clinit$CFontManager, allocate$CFontManager);
	return class$;
}

$Class* CFontManager::class$ = nullptr;

	} // font
} // sun