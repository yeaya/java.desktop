#include <sun/font/SunFontManager.h>

#include <java/awt/Font.h>
#include <java/awt/FontFormatException.h>
#include <java/io/File.h>
#include <java/io/FilenameFilter.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/TreeMap.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/ConcurrentHashMap$KeySetView.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Stream.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/CompositeFontDescriptor.h>
#include <sun/font/CreatedFontTracker.h>
#include <sun/font/FileFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/Font2DHandle.h>
#include <sun/font/FontAccess.h>
#include <sun/font/FontFamily.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/NativeFont.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/SunFontManager$1.h>
#include <sun/font/SunFontManager$10.h>
#include <sun/font/SunFontManager$11.h>
#include <sun/font/SunFontManager$12.h>
#include <sun/font/SunFontManager$2.h>
#include <sun/font/SunFontManager$3.h>
#include <sun/font/SunFontManager$4.h>
#include <sun/font/SunFontManager$5.h>
#include <sun/font/SunFontManager$6.h>
#include <sun/font/SunFontManager$7.h>
#include <sun/font/SunFontManager$8.h>
#include <sun/font/SunFontManager$9.h>
#include <sun/font/SunFontManager$FamilyDescription.h>
#include <sun/font/SunFontManager$FontRegistrationInfo.h>
#include <sun/font/SunFontManager$T1Filter.h>
#include <sun/font/SunFontManager$TTFilter.h>
#include <sun/font/SunFontManager$TTorT1Filter.h>
#include <sun/font/TrueTypeFont.h>
#include <sun/font/Type1Font.h>
#include <sun/java2d/FontSupport.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BOLD
#undef CHANNELPOOLSIZE
#undef DIALOG
#undef DIALOG_INPUT
#undef ENGLISH
#undef FONTFORMAT_COMPOSITE
#undef FONTFORMAT_NATIVE
#undef FONTFORMAT_NONE
#undef FONTFORMAT_TRUETYPE
#undef FONTFORMAT_TTC
#undef FONTFORMAT_TYPE1
#undef FONT_CONFIG_RANK
#undef FONT_HANDLE_NULL
#undef INFO
#undef ITALIC
#undef JRE_RANK
#undef LOGICAL_FALLBACK
#undef MONOSPACED
#undef NO_FALLBACK
#undef PHYSICAL_FALLBACK
#undef PLAIN
#undef SANS_SERIF
#undef SERIF
#undef STR_ARRAY
#undef TRUETYPE_FONT
#undef TTF_RANK
#undef TYPE1_FONT
#undef TYPE1_RANK
#undef UNKNOWN_RANK

using $FontArray = $Array<::java::awt::Font>;
using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $CompositeFontArray = $Array<::sun::font::CompositeFont>;
using $CompositeFontDescriptorArray = $Array<::sun::font::CompositeFontDescriptor>;
using $FileFontArray = $Array<::sun::font::FileFont>;
using $Font2DArray = $Array<::sun::font::Font2D>;
using $PhysicalFontArray = $Array<::sun::font::PhysicalFont>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $Font = ::java::awt::Font;
using $FontFormatException = ::java::awt::FontFormatException;
using $File = ::java::io::File;
using $FilenameFilter = ::java::io::FilenameFilter;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $TreeMap = ::java::util::TreeMap;
using $Vector = ::java::util::Vector;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$CollectionView = ::java::util::concurrent::ConcurrentHashMap$CollectionView;
using $ConcurrentHashMap$KeySetView = ::java::util::concurrent::ConcurrentHashMap$KeySetView;
using $Supplier = ::java::util::function::Supplier;
using $Stream = ::java::util::stream::Stream;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $SunToolkit = ::sun::awt::SunToolkit;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $CompositeFont = ::sun::font::CompositeFont;
using $CompositeFontDescriptor = ::sun::font::CompositeFontDescriptor;
using $CreatedFontTracker = ::sun::font::CreatedFontTracker;
using $FileFont = ::sun::font::FileFont;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;
using $FontAccess = ::sun::font::FontAccess;
using $FontFamily = ::sun::font::FontFamily;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $FontManagerForSGE = ::sun::font::FontManagerForSGE;
using $FontUtilities = ::sun::font::FontUtilities;
using $NativeFont = ::sun::font::NativeFont;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $SunFontManager$1 = ::sun::font::SunFontManager$1;
using $SunFontManager$10 = ::sun::font::SunFontManager$10;
using $SunFontManager$11 = ::sun::font::SunFontManager$11;
using $SunFontManager$12 = ::sun::font::SunFontManager$12;
using $SunFontManager$2 = ::sun::font::SunFontManager$2;
using $SunFontManager$3 = ::sun::font::SunFontManager$3;
using $SunFontManager$4 = ::sun::font::SunFontManager$4;
using $SunFontManager$5 = ::sun::font::SunFontManager$5;
using $SunFontManager$6 = ::sun::font::SunFontManager$6;
using $SunFontManager$7 = ::sun::font::SunFontManager$7;
using $SunFontManager$8 = ::sun::font::SunFontManager$8;
using $SunFontManager$9 = ::sun::font::SunFontManager$9;
using $SunFontManager$FamilyDescription = ::sun::font::SunFontManager$FamilyDescription;
using $SunFontManager$FontRegistrationInfo = ::sun::font::SunFontManager$FontRegistrationInfo;
using $SunFontManager$T1Filter = ::sun::font::SunFontManager$T1Filter;
using $SunFontManager$TTFilter = ::sun::font::SunFontManager$TTFilter;
using $SunFontManager$TTorT1Filter = ::sun::font::SunFontManager$TTorT1Filter;
using $TrueTypeFont = ::sun::font::TrueTypeFont;
using $Type1Font = ::sun::font::Type1Font;
using $FontSupport = ::sun::java2d::FontSupport;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace font {

class SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0 : public $Supplier {
	$class(SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(SunFontManager::lambda$getDefaultPhysicalFont$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0::*)()>(&SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.font.SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0::class$ = nullptr;

class SunFontManager$$Lambda$lambda$createFont2D$1$1 : public $PrivilegedAction {
	$class(SunFontManager$$Lambda$lambda$createFont2D$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(SunFontManager* inst, $Runnable* fileCloserRunnable) {
		$set(this, inst$, inst);
		$set(this, fileCloserRunnable, fileCloserRunnable);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$createFont2D$1(fileCloserRunnable));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SunFontManager$$Lambda$lambda$createFont2D$1$1>());
	}
	SunFontManager* inst$ = nullptr;
	$Runnable* fileCloserRunnable = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SunFontManager$$Lambda$lambda$createFont2D$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SunFontManager$$Lambda$lambda$createFont2D$1$1, inst$)},
	{"fileCloserRunnable", "Ljava/lang/Runnable;", nullptr, $PUBLIC, $field(SunFontManager$$Lambda$lambda$createFont2D$1$1, fileCloserRunnable)},
	{}
};
$MethodInfo SunFontManager$$Lambda$lambda$createFont2D$1$1::methodInfos[3] = {
	{"<init>", "(Lsun/font/SunFontManager;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(SunFontManager$$Lambda$lambda$createFont2D$1$1::*)(SunFontManager*,$Runnable*)>(&SunFontManager$$Lambda$lambda$createFont2D$1$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo SunFontManager$$Lambda$lambda$createFont2D$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.font.SunFontManager$$Lambda$lambda$createFont2D$1$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* SunFontManager$$Lambda$lambda$createFont2D$1$1::load$($String* name, bool initialize) {
	$loadClass(SunFontManager$$Lambda$lambda$createFont2D$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SunFontManager$$Lambda$lambda$createFont2D$1$1::class$ = nullptr;

$FieldInfo _SunFontManager_FieldInfo_[] = {
	{"FONT_HANDLE_NULL", "Lsun/font/Font2DHandle;", nullptr, $PRIVATE | $STATIC, $staticField(SunFontManager, FONT_HANDLE_NULL)},
	{"FONTFORMAT_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunFontManager, FONTFORMAT_NONE)},
	{"FONTFORMAT_TRUETYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunFontManager, FONTFORMAT_TRUETYPE)},
	{"FONTFORMAT_TYPE1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunFontManager, FONTFORMAT_TYPE1)},
	{"FONTFORMAT_TTC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunFontManager, FONTFORMAT_TTC)},
	{"FONTFORMAT_COMPOSITE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunFontManager, FONTFORMAT_COMPOSITE)},
	{"FONTFORMAT_NATIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunFontManager, FONTFORMAT_NATIVE)},
	{"CHANNELPOOLSIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunFontManager, CHANNELPOOLSIZE)},
	{"fontFileCache", "[Lsun/font/FileFont;", nullptr, $PROTECTED, $field(SunFontManager, fontFileCache)},
	{"lastPoolIndex", "I", nullptr, $PRIVATE, $field(SunFontManager, lastPoolIndex)},
	{"maxCompFont", "I", nullptr, $PRIVATE, $field(SunFontManager, maxCompFont)},
	{"compFonts", "[Lsun/font/CompositeFont;", nullptr, $PRIVATE, $field(SunFontManager, compFonts)},
	{"compositeFonts", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Lsun/font/CompositeFont;>;", $PRIVATE, $field(SunFontManager, compositeFonts)},
	{"physicalFonts", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Lsun/font/PhysicalFont;>;", $PRIVATE, $field(SunFontManager, physicalFonts)},
	{"registeredFonts", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Lsun/font/PhysicalFont;>;", $PRIVATE, $field(SunFontManager, registeredFonts)},
	{"fullNameToFont", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Lsun/font/Font2D;>;", $PROTECTED, $field(SunFontManager, fullNameToFont)},
	{"localeFullNamesToFont", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Lsun/font/TrueTypeFont;>;", $PRIVATE, $field(SunFontManager, localeFullNamesToFont)},
	{"defaultPhysicalFont", "Lsun/font/PhysicalFont;", nullptr, $PRIVATE, $field(SunFontManager, defaultPhysicalFont)},
	{"longAddresses", "Z", nullptr, $STATIC, $staticField(SunFontManager, longAddresses)},
	{"loaded1dot0Fonts", "Z", nullptr, $PRIVATE, $field(SunFontManager, loaded1dot0Fonts)},
	{"loadedAllFonts", "Z", nullptr, 0, $field(SunFontManager, loadedAllFonts)},
	{"loadedAllFontFiles", "Z", nullptr, 0, $field(SunFontManager, loadedAllFontFiles)},
	{"jreOtherFontFiles", "[Ljava/lang/String;", nullptr, 0, $field(SunFontManager, jreOtherFontFiles)},
	{"noOtherJREFontFiles", "Z", nullptr, 0, $field(SunFontManager, noOtherJREFontFiles)},
	{"jreLibDirName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticField(SunFontManager, jreLibDirName)},
	{"jreFontDirName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticField(SunFontManager, jreFontDirName)},
	{"missingFontFiles", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(SunFontManager, missingFontFiles)},
	{"defaultFontName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SunFontManager, defaultFontName)},
	{"defaultFontFileName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SunFontManager, defaultFontFileName)},
	{"registeredFontFiles", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/String;>;", $PROTECTED, $field(SunFontManager, registeredFontFiles)},
	{"badFonts", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE, $field(SunFontManager, badFonts)},
	{"fontPath", "Ljava/lang/String;", nullptr, $PROTECTED, $field(SunFontManager, fontPath)},
	{"fontConfig", "Lsun/awt/FontConfiguration;", nullptr, $PRIVATE, $field(SunFontManager, fontConfig)},
	{"discoveredAllFonts", "Z", nullptr, $PRIVATE, $field(SunFontManager, discoveredAllFonts)},
	{"ttFilter", "Ljava/io/FilenameFilter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunFontManager, ttFilter)},
	{"t1Filter", "Ljava/io/FilenameFilter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunFontManager, t1Filter)},
	{"allFonts", "[Ljava/awt/Font;", nullptr, $PRIVATE, $field(SunFontManager, allFonts)},
	{"allFamilies", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(SunFontManager, allFamilies)},
	{"lastDefaultLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(SunFontManager, lastDefaultLocale)},
	{"noType1Font", "Z", nullptr, $PUBLIC | $STATIC, $staticField(SunFontManager, noType1Font)},
	{"STR_ARRAY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(SunFontManager, STR_ARRAY)},
	{"usePlatformFontMetrics", "Z", nullptr, $PRIVATE, $field(SunFontManager, usePlatformFontMetrics$)},
	{"maxSoftRefCnt", "I", nullptr, $PRIVATE | $STATIC, $staticField(SunFontManager, maxSoftRefCnt)},
	{"deferredFontFiles", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Lsun/font/SunFontManager$FontRegistrationInfo;>;", $PRIVATE | $FINAL, $field(SunFontManager, deferredFontFiles)},
	{"initialisedFonts", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Lsun/font/Font2DHandle;>;", $PRIVATE | $FINAL, $field(SunFontManager, initialisedFonts)},
	{"fontToFileMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(SunFontManager, fontToFileMap)},
	{"fontToFamilyNameMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(SunFontManager, fontToFamilyNameMap)},
	{"familyToFontListMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/ArrayList<Ljava/lang/String;>;>;", $PRIVATE, $field(SunFontManager, familyToFontListMap)},
	{"pathDirs", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(SunFontManager, pathDirs)},
	{"haveCheckedUnreferencedFontFiles", "Z", nullptr, $PRIVATE, $field(SunFontManager, haveCheckedUnreferencedFontFiles)},
	{"platformFontMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Lsun/font/SunFontManager$FamilyDescription;>;", $STATIC | $VOLATILE, $staticField(SunFontManager, platformFontMap)},
	{"fontNameCache", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Lsun/font/Font2D;>;", $PRIVATE, $field(SunFontManager, fontNameCache)},
	{"fileCloser", "Ljava/lang/Thread;", nullptr, 0, $field(SunFontManager, fileCloser)},
	{"tmpFontFiles", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/io/File;>;", 0, $field(SunFontManager, tmpFontFiles)},
	{"createdFontCount", "I", nullptr, $PRIVATE, $field(SunFontManager, createdFontCount)},
	{"_usingAlternateComposites", "Z", nullptr, $PRIVATE, $field(SunFontManager, _usingAlternateComposites)},
	{"gAltJAFont", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SunFontManager, gAltJAFont)},
	{"gLocalePref", "Z", nullptr, $PRIVATE, $field(SunFontManager, gLocalePref)},
	{"gPropPref", "Z", nullptr, $PRIVATE, $field(SunFontManager, gPropPref)},
	{"installedNames", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(SunFontManager, installedNames)},
	{"regFamilyLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunFontManager, regFamilyLock)},
	{"createdByFamilyName", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Lsun/font/FontFamily;>;", $PRIVATE, $field(SunFontManager, createdByFamilyName)},
	{"createdByFullName", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Lsun/font/Font2D;>;", $PRIVATE, $field(SunFontManager, createdByFullName)},
	{"fontsAreRegistered", "Z", nullptr, $PRIVATE, $field(SunFontManager, fontsAreRegistered)},
	{"systemLocale", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $staticField(SunFontManager, systemLocale)},
	{}
};

$MethodInfo _SunFontManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SunFontManager::*)()>(&SunFontManager::init$))},
	{"addCompositeToFontList", "(Lsun/font/CompositeFont;I)V", nullptr, $PRIVATE, $method(static_cast<void(SunFontManager::*)($CompositeFont*,int32_t)>(&SunFontManager::addCompositeToFontList))},
	{"addDirFonts", "(Ljava/lang/String;Ljava/io/File;Ljava/io/FilenameFilter;IZIZZ)V", nullptr, $PRIVATE, $method(static_cast<void(SunFontManager::*)($String*,$File*,$FilenameFilter*,int32_t,bool,int32_t,bool,bool)>(&SunFontManager::addDirFonts))},
	{"addFontToPlatformFontPath", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"addNativeFontFamilyNames", "(Ljava/util/TreeMap;Ljava/util/Locale;)V", "(Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/Locale;)V", $PROTECTED},
	{"addToFontList", "(Lsun/font/PhysicalFont;I)Lsun/font/PhysicalFont;", nullptr, $PROTECTED},
	{"addToMissingFontFileList", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"addToPool", "(Lsun/font/FileFont;)V", nullptr, 0},
	{"checkForUnreferencedFontFiles", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(SunFontManager::*)()>(&SunFontManager::checkForUnreferencedFontFiles))},
	{"createCompositeFonts", "(Ljava/util/concurrent/ConcurrentHashMap;ZZ)V", "(Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Lsun/font/Font2D;>;ZZ)V", $PUBLIC},
	{"createFont2D", "(Ljava/io/File;IZZLsun/font/CreatedFontTracker;)[Lsun/font/Font2D;", nullptr, $PUBLIC, nullptr, "java.awt.FontFormatException"},
	{"createFontConfiguration", "()Lsun/awt/FontConfiguration;", nullptr, $PROTECTED | $ABSTRACT},
	{"createFontConfiguration", "(ZZ)Lsun/awt/FontConfiguration;", nullptr, $PUBLIC | $ABSTRACT},
	{"deRegisterBadFont", "(Lsun/font/Font2D;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"dotStyleStr", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&SunFontManager::dotStyleStr))},
	{"findDeferredFont", "(Ljava/lang/String;I)Lsun/font/PhysicalFont;", nullptr, $PRIVATE, $method(static_cast<$PhysicalFont*(SunFontManager::*)($String*,int32_t)>(&SunFontManager::findDeferredFont))},
	{"findFont2D", "(Ljava/lang/String;II)Lsun/font/Font2D;", nullptr, $PUBLIC},
	{"findFont2DAllLocales", "(Ljava/lang/String;I)Lsun/font/Font2D;", nullptr, $PRIVATE, $method(static_cast<$Font2D*(SunFontManager::*)($String*,int32_t)>(&SunFontManager::findFont2DAllLocales))},
	{"findFontFromPlatform", "(Ljava/lang/String;I)Lsun/font/Font2D;", nullptr, $PRIVATE, $method(static_cast<$Font2D*(SunFontManager::*)($String*,int32_t)>(&SunFontManager::findFontFromPlatform))},
	{"findFontFromPlatformMap", "(Ljava/lang/String;I)Lsun/font/Font2D;", nullptr, 0},
	{"findJREDeferredFont", "(Ljava/lang/String;I)Lsun/font/PhysicalFont;", nullptr, 0},
	{"findOtherDeferredFont", "(Ljava/lang/String;I)Lsun/font/PhysicalFont;", nullptr, $PRIVATE, $method(static_cast<$PhysicalFont*(SunFontManager::*)($String*,int32_t)>(&SunFontManager::findOtherDeferredFont))},
	{"fontSupportsEncoding", "(Ljava/awt/Font;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Font*,$String*)>(&SunFontManager::fontSupportsEncoding))},
	{"getAllInstalledFonts", "()[Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getCreatedFontFamilyNames", "()Ljava/util/TreeMap;", "()Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC},
	{"getCreatedFonts", "()[Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getDefaultFontFaceName", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDefaultFontFile", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDefaultLogicalFont", "(I)Lsun/font/Font2D;", nullptr, $PUBLIC},
	{"getDefaultPhysicalFont", "()Lsun/font/PhysicalFont;", nullptr, $PUBLIC},
	{"getDefaultPlatformFont", "()[Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"getEUDCFont", "()Lsun/font/TrueTypeFont;", nullptr, $PUBLIC},
	{"getFamilyNamesFromPlatform", "(Ljava/util/TreeMap;Ljava/util/Locale;)Z", "(Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/Locale;)Z", $PUBLIC},
	{"getFileNameForFontName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileNameFromPlatformName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getFontConfigFUIR", "(Ljava/lang/String;II)Ljavax/swing/plaf/FontUIResource;", nullptr, $PROTECTED},
	{"getFontConfiguration", "()Lsun/awt/FontConfiguration;", nullptr, $PUBLIC},
	{"getFontFilesFromPath", "(Z)[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(SunFontManager::*)(bool)>(&SunFontManager::getFontFilesFromPath))},
	{"getFontNamesFromPlatform", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getFontPath", "(Z)Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"getFullNameByFileName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getFullNameToFileMap", "()Ljava/util/HashMap;", "()Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $SYNCHRONIZED, $method(static_cast<$HashMap*(SunFontManager::*)()>(&SunFontManager::getFullNameToFileMap))},
	{"getInstalledFontFamilyNames", "(Ljava/util/Locale;)[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInstalledNames", "()Ljava/util/HashSet;", "()Ljava/util/HashSet<Ljava/lang/String;>;", $PRIVATE | $STATIC, $method(static_cast<$HashSet*(*)()>(&SunFontManager::getInstalledNames))},
	{"getInstance", "()Lsun/font/SunFontManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SunFontManager*(*)()>(&SunFontManager::getInstance))},
	{"getJDKFontDir", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$String*(*)()>(&SunFontManager::getJDKFontDir))},
	{"getJREFontFamilyNames", "(Ljava/util/TreeMap;Ljava/util/Locale;)V", "(Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/Locale;)V", $PROTECTED},
	{"getNativeNames", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getNewComposite", "(Ljava/lang/String;ILsun/font/Font2DHandle;)Lsun/font/Font2DHandle;", nullptr, $PUBLIC},
	{"getNumFonts", "()I", nullptr, $PUBLIC},
	{"getPathName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(SunFontManager::*)($String*)>(&SunFontManager::getPathName))},
	{"getPhysicalFonts", "()[Lsun/font/PhysicalFont;", nullptr, $PROTECTED},
	{"getPlatformFontDirs", "(Z)[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getPlatformFontPath", "(Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRegisteredFontFile", "(Ljava/lang/String;)Lsun/font/PhysicalFont;", nullptr, $PUBLIC},
	{"getRegisteredFonts", "()[Lsun/font/Font2D;", nullptr, $PUBLIC},
	{"getSystemStartupLocale", "()Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Locale*(*)()>(&SunFontManager::getSystemStartupLocale))},
	{"getTrueTypeFilter", "()Ljava/io/FilenameFilter;", nullptr, $PUBLIC},
	{"getType1Filter", "()Ljava/io/FilenameFilter;", nullptr, $PUBLIC},
	{"gotFontsFromPlatform", "()Z", nullptr, $PUBLIC},
	{"initCompositeFonts", "(Lsun/awt/FontConfiguration;Ljava/util/concurrent/ConcurrentHashMap;)V", "(Lsun/awt/FontConfiguration;Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Lsun/font/Font2D;>;)V", $PRIVATE, $method(static_cast<void(SunFontManager::*)($FontConfiguration*,$ConcurrentHashMap*)>(&SunFontManager::initCompositeFonts))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&SunFontManager::initIDs))},
	{"initStatic", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SunFontManager::initStatic))},
	{"initialiseDeferredFont", "(Ljava/lang/String;)Lsun/font/PhysicalFont;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"initialiseDeferredFonts", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"isDeferredFont", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isNameForRegisteredFile", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(SunFontManager::*)($String*)>(&SunFontManager::isNameForRegisteredFile))},
	{"isRegisteredFontFile", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"lambda$createFont2D$1", "(Ljava/lang/Runnable;)Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Void*(SunFontManager::*)($Runnable*)>(&SunFontManager::lambda$createFont2D$1))},
	{"lambda$getDefaultPhysicalFont$0", "()Ljava/lang/Error;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Error*(*)()>(&SunFontManager::lambda$getDefaultPhysicalFont$0))},
	{"loadFontFiles", "()V", nullptr, $PUBLIC},
	{"loadFonts", "()V", nullptr, $PROTECTED},
	{"loadLocaleNames", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(SunFontManager::*)()>(&SunFontManager::loadLocaleNames))},
	{"logPlatformFontInfo", "()V", nullptr, $PRIVATE, $method(static_cast<void(SunFontManager::*)()>(&SunFontManager::logPlatformFontInfo))},
	{"populateFontFileNameMap", "(Ljava/util/HashMap;Ljava/util/HashMap;Ljava/util/HashMap;Ljava/util/Locale;)V", "(Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;Ljava/util/HashMap<Ljava/lang/String;Ljava/util/ArrayList<Ljava/lang/String;>;>;Ljava/util/Locale;)V", $PROTECTED},
	{"populateHardcodedFileNameMap", "()Ljava/util/HashMap;", "()Ljava/util/HashMap<Ljava/lang/String;Lsun/font/SunFontManager$FamilyDescription;>;", $PUBLIC},
	{"preferLocaleFonts", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"preferProportionalFonts", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"register1dot0Fonts", "()V", nullptr, $PUBLIC},
	{"registerCompositeFont", "(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;I[I[IZ)V", nullptr, $PROTECTED},
	{"registerCompositeFont", "(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;I[I[IZLjava/util/concurrent/ConcurrentHashMap;)V", "(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;I[I[IZLjava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Lsun/font/Font2D;>;)V", $PROTECTED | $STATIC, $method(static_cast<void(*)($String*,$StringArray*,$StringArray*,int32_t,$ints*,$ints*,bool,$ConcurrentHashMap*)>(&SunFontManager::registerCompositeFont))},
	{"registerDeferredFont", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;IZI)V", nullptr, $PUBLIC},
	{"registerDeferredJREFonts", "(Ljava/lang/String;)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"registerFont", "(Ljava/awt/Font;)Z", nullptr, $PUBLIC},
	{"registerFontDir", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"registerFontDirs", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"registerFontFile", "(Ljava/lang/String;[Ljava/lang/String;IZI)Lsun/font/PhysicalFont;", nullptr, $PUBLIC},
	{"registerFontFile", "(Ljava/lang/String;)Lsun/font/PhysicalFont;", nullptr, $PRIVATE, $method(static_cast<$PhysicalFont*(SunFontManager::*)($String*)>(&SunFontManager::registerFontFile))},
	{"registerFontFile", "(Ljava/lang/String;[Ljava/lang/String;IZ)V", nullptr, $PROTECTED},
	{"registerFonts", "([Ljava/lang/String;[[Ljava/lang/String;IIZIZ)V", nullptr, $PUBLIC},
	{"registerFontsInDir", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"registerFontsInDir", "(Ljava/lang/String;ZIZZ)V", nullptr, $PROTECTED},
	{"registerFontsOnPath", "(Ljava/lang/String;ZIZZ)V", nullptr, $PRIVATE, $method(static_cast<void(SunFontManager::*)($String*,bool,int32_t,bool,bool)>(&SunFontManager::registerFontsOnPath))},
	{"registerOtherFontFiles", "(Ljava/util/HashSet;)V", "(Ljava/util/HashSet<Ljava/lang/String;>;)V", $PROTECTED},
	{"registerPlatformFontsUsedByFontConfiguration", "()V", nullptr, $PROTECTED},
	{"removeFromCache", "(Lsun/font/Font2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SunFontManager::*)($Font2D*)>(&SunFontManager::removeFromCache))},
	{"replaceFont", "(Lsun/font/PhysicalFont;Lsun/font/PhysicalFont;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"resolveFontFiles", "(Ljava/util/HashSet;Ljava/util/ArrayList;)V", "(Ljava/util/HashSet<Ljava/lang/String;>;Ljava/util/ArrayList<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(SunFontManager::*)($HashSet*,$ArrayList*)>(&SunFontManager::resolveFontFiles))},
	{"resolveWindowsFonts", "()V", nullptr, $PRIVATE, $method(static_cast<void(SunFontManager::*)()>(&SunFontManager::resolveWindowsFonts))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"useAbsoluteFontFileNames", "()Z", nullptr, $PROTECTED},
	{"useAlternateFontforJALocales", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"usePlatformFontMetrics", "()Z", nullptr, $PUBLIC},
	{"usingAlternateCompositeFonts", "()Z", nullptr, $PUBLIC},
	{"usingAlternateFontforJALocales", "()Z", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 65

$InnerClassInfo _SunFontManager_InnerClassesInfo_[] = {
	{"sun.font.SunFontManager$FamilyDescription", "sun.font.SunFontManager", "FamilyDescription", $PUBLIC | $STATIC},
	{"sun.font.SunFontManager$FontRegistrationInfo", "sun.font.SunFontManager", "FontRegistrationInfo", $PRIVATE | $STATIC | $FINAL},
	{"sun.font.SunFontManager$TTorT1Filter", "sun.font.SunFontManager", "TTorT1Filter", $PRIVATE | $STATIC},
	{"sun.font.SunFontManager$T1Filter", "sun.font.SunFontManager", "T1Filter", $PRIVATE | $STATIC},
	{"sun.font.SunFontManager$TTFilter", "sun.font.SunFontManager", "TTFilter", $PRIVATE | $STATIC},
	{"sun.font.SunFontManager$12", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$11", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$10", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$9", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$8", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$7", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$6", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$5", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$4", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$3", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$2", nullptr, nullptr, 0},
	{"sun.font.SunFontManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunFontManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.SunFontManager",
	"java.lang.Object",
	"sun.java2d.FontSupport,sun.font.FontManagerForSGE",
	_SunFontManager_FieldInfo_,
	_SunFontManager_MethodInfo_,
	nullptr,
	nullptr,
	_SunFontManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.SunFontManager$FamilyDescription,sun.font.SunFontManager$FontRegistrationInfo,sun.font.SunFontManager$TTorT1Filter,sun.font.SunFontManager$T1Filter,sun.font.SunFontManager$TTFilter,sun.font.SunFontManager$12,sun.font.SunFontManager$11,sun.font.SunFontManager$10,sun.font.SunFontManager$9,sun.font.SunFontManager$8,sun.font.SunFontManager$8$1,sun.font.SunFontManager$7,sun.font.SunFontManager$6,sun.font.SunFontManager$5,sun.font.SunFontManager$4,sun.font.SunFontManager$3,sun.font.SunFontManager$2,sun.font.SunFontManager$1"
};

$Object* allocate$SunFontManager($Class* clazz) {
	return $of($alloc(SunFontManager));
}

int32_t SunFontManager::hashCode() {
	 return this->$FontSupport::hashCode();
}

bool SunFontManager::equals(Object$* arg0) {
	 return this->$FontSupport::equals(arg0);
}

$Object* SunFontManager::clone() {
	 return this->$FontSupport::clone();
}

$String* SunFontManager::toString() {
	 return this->$FontSupport::toString();
}

void SunFontManager::finalize() {
	this->$FontSupport::finalize();
}

$Font2DHandle* SunFontManager::FONT_HANDLE_NULL = nullptr;
bool SunFontManager::longAddresses = false;
$String* SunFontManager::jreLibDirName = nullptr;
$String* SunFontManager::jreFontDirName = nullptr;
$HashSet* SunFontManager::missingFontFiles = nullptr;
$FilenameFilter* SunFontManager::ttFilter = nullptr;
$FilenameFilter* SunFontManager::t1Filter = nullptr;
bool SunFontManager::noType1Font = false;
$StringArray* SunFontManager::STR_ARRAY = nullptr;
int32_t SunFontManager::maxSoftRefCnt = 0;
$volatile($HashMap*) SunFontManager::platformFontMap = nullptr;
bool SunFontManager::gAltJAFont = false;
$HashSet* SunFontManager::installedNames = nullptr;
$Object* SunFontManager::regFamilyLock = nullptr;

$Locale* SunFontManager::systemLocale = nullptr;

SunFontManager* SunFontManager::getInstance() {
	$init(SunFontManager);
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	return $cast(SunFontManager, fm);
}

$FilenameFilter* SunFontManager::getTrueTypeFilter() {
	return SunFontManager::ttFilter;
}

$FilenameFilter* SunFontManager::getType1Filter() {
	return SunFontManager::t1Filter;
}

void SunFontManager::initStatic() {
	$init(SunFontManager);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunFontManager$1)));
}

$String* SunFontManager::getJDKFontDir() {
	$init(SunFontManager);
	return SunFontManager::jreFontDirName;
}

$TrueTypeFont* SunFontManager::getEUDCFont() {
	return nullptr;
}

void SunFontManager::initIDs() {
	$init(SunFontManager);
	$prepareNativeStatic(SunFontManager, initIDs, void);
	$invokeNativeStatic(SunFontManager, initIDs);
	$finishNativeStatic();
}

void SunFontManager::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$set(this, fontFileCache, $new($FileFontArray, SunFontManager::CHANNELPOOLSIZE));
	this->lastPoolIndex = 0;
	this->maxCompFont = 0;
	$set(this, compFonts, $new($CompositeFontArray, 20));
	$set(this, compositeFonts, $new($ConcurrentHashMap));
	$set(this, physicalFonts, $new($ConcurrentHashMap));
	$set(this, registeredFonts, $new($ConcurrentHashMap));
	$set(this, fullNameToFont, $new($ConcurrentHashMap));
	this->loaded1dot0Fonts = false;
	this->loadedAllFonts = false;
	this->loadedAllFontFiles = false;
	this->noOtherJREFontFiles = false;
	$set(this, registeredFontFiles, $new($HashSet));
	this->discoveredAllFonts = false;
	this->usePlatformFontMetrics$ = false;
	$set(this, deferredFontFiles, $new($ConcurrentHashMap));
	$set(this, initialisedFonts, $new($ConcurrentHashMap));
	$set(this, fontToFileMap, nullptr);
	$set(this, fontToFamilyNameMap, nullptr);
	$set(this, familyToFontListMap, nullptr);
	$set(this, pathDirs, nullptr);
	$set(this, fontNameCache, $new($ConcurrentHashMap));
	$set(this, fileCloser, nullptr);
	$set(this, tmpFontFiles, nullptr);
	this->createdFontCount = 0;
	this->_usingAlternateComposites = false;
	this->gLocalePref = false;
	this->gPropPref = false;
	this->fontsAreRegistered = false;
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunFontManager$2, this)));
	bool platformFont = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunFontManager$3, this)))))))->booleanValue();
	if (platformFont) {
		this->usePlatformFontMetrics$ = true;
		$init($System);
		$nc($System::out)->println("Enabling platform font metrics for win32. This is an unsupported option."_s);
		$nc($System::out)->println("This yields incorrect composite font metrics as reported by 1.1.x releases."_s);
		$nc($System::out)->println("It is appropriate only for use by applications which do not use any Java 2"_s);
		$nc($System::out)->println("functionality. This property will be removed in a later release."_s);
	}
}

$Font2DHandle* SunFontManager::getNewComposite($String* family$renamed, int32_t style, $Font2DHandle* handle) {
	$useLocalCurrentObjectStackCache();
	$var($String, family, family$renamed);
	if (!($instanceOf($CompositeFont, $nc(handle)->font2D))) {
		return handle;
	}
	$var($CompositeFont, oldComp, $cast($CompositeFont, $nc(handle)->font2D));
	$var($PhysicalFont, oldFont, $nc(oldComp)->getSlotFont(0));
	if (family == nullptr) {
		$assign(family, $nc(oldFont)->getFamilyName(nullptr));
	}
	if (style == -1) {
		style = oldComp->getStyle();
	}
	$var($Font2D, newFont, findFont2D(family, style, $FontManager::NO_FALLBACK));
	if (!($instanceOf($PhysicalFont, newFont))) {
		$assign(newFont, oldFont);
	}
	$var($PhysicalFont, physicalFont, $cast($PhysicalFont, newFont));
	$var($CompositeFont, dialog2D, $cast($CompositeFont, findFont2D("dialog"_s, style, $FontManager::NO_FALLBACK)));
	if (dialog2D == nullptr) {
		return handle;
	}
	$var($CompositeFont, compFont, $new($CompositeFont, physicalFont, dialog2D));
	$var($Font2DHandle, newHandle, $new($Font2DHandle, compFont));
	return newHandle;
}

void SunFontManager::registerCompositeFont($String* compositeName, $StringArray* componentFileNames, $StringArray* componentNames, int32_t numMetricsSlots, $ints* exclusionRanges, $ints* exclusionMaxIndex, bool defer) {
	$var($CompositeFont, cf, $new($CompositeFont, compositeName, componentFileNames, componentNames, numMetricsSlots, exclusionRanges, exclusionMaxIndex, defer, this));
	addCompositeToFontList(cf, $Font2D::FONT_CONFIG_RANK);
	$synchronized(this->compFonts) {
		$nc(this->compFonts)->set(this->maxCompFont++, cf);
	}
}

void SunFontManager::registerCompositeFont($String* compositeName, $StringArray* componentFileNames, $StringArray* componentNames, int32_t numMetricsSlots, $ints* exclusionRanges, $ints* exclusionMaxIndex, bool defer, $ConcurrentHashMap* altNameCache) {
	$init(SunFontManager);
	$useLocalCurrentObjectStackCache();
	$var($CompositeFont, cf, $new($CompositeFont, compositeName, componentFileNames, componentNames, numMetricsSlots, exclusionRanges, exclusionMaxIndex, defer, $(SunFontManager::getInstance())));
	$init($Locale);
	$var($Font2D, oldFont, $cast($Font2D, $nc(altNameCache)->get($($nc(compositeName)->toLowerCase($Locale::ENGLISH)))));
	if ($instanceOf($CompositeFont, oldFont)) {
		$set($nc($nc(oldFont)->handle), font2D, cf);
	}
	altNameCache->put($($nc(compositeName)->toLowerCase($Locale::ENGLISH)), cf);
}

void SunFontManager::addCompositeToFontList($CompositeFont* f, int32_t rank) {
	$useLocalCurrentObjectStackCache();
	if ($FontUtilities::isLogging()) {
		$FontUtilities::logInfo($$str({"Add to Family "_s, $nc(f)->familyName, ", Font "_s, f->fullName, " rank="_s, $$str(rank)}));
	}
	$nc(f)->setRank(rank);
	$nc(this->compositeFonts)->put(f->fullName, f);
	$init($Locale);
	$nc(this->fullNameToFont)->put($($nc(f->fullName)->toLowerCase($Locale::ENGLISH)), f);
	$var($FontFamily, family, $FontFamily::getFamily(f->familyName));
	if (family == nullptr) {
		$assign(family, $new($FontFamily, f->familyName, true, rank));
	}
	$nc(family)->setFont(f, f->style);
}

$PhysicalFont* SunFontManager::addToFontList($PhysicalFont* f, int32_t rank) {
	$useLocalCurrentObjectStackCache();
	$var($String, fontName, $nc(f)->fullName);
	$var($String, familyName, f->familyName);
	if (fontName == nullptr || $nc(fontName)->isEmpty()) {
		return nullptr;
	}
	if ($nc(this->compositeFonts)->containsKey(fontName)) {
		return nullptr;
	}
	f->setRank(rank);
	if (!$nc(this->physicalFonts)->containsKey(fontName)) {
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logInfo($$str({"Add to Family "_s, familyName, ", Font "_s, fontName, " rank="_s, $$str(rank)}));
		}
		$nc(this->physicalFonts)->put(fontName, f);
		$var($FontFamily, family, $FontFamily::getFamily(familyName));
		if (family == nullptr) {
			$assign(family, $new($FontFamily, familyName, false, rank));
			family->setFont(f, f->style);
		} else {
			$nc(family)->setFont(f, f->style);
		}
		$init($Locale);
		$nc(this->fullNameToFont)->put($($nc(fontName)->toLowerCase($Locale::ENGLISH)), f);
		return f;
	} else {
		$var($PhysicalFont, newFont, f);
		$var($PhysicalFont, oldFont, $cast($PhysicalFont, $nc(this->physicalFonts)->get(fontName)));
		if (oldFont == nullptr) {
			return nullptr;
		}
		if ($nc(oldFont)->getRank() >= rank) {
			if (oldFont->mapper != nullptr && rank > $Font2D::FONT_CONFIG_RANK) {
				return oldFont;
			}
			if (oldFont->getRank() == rank) {
				if ($instanceOf($TrueTypeFont, oldFont) && $instanceOf($TrueTypeFont, newFont)) {
					$var($TrueTypeFont, oldTTFont, $cast($TrueTypeFont, oldFont));
					$var($TrueTypeFont, newTTFont, $cast($TrueTypeFont, newFont));
					if (oldTTFont->fileSize >= newTTFont->fileSize) {
						return oldFont;
					}
				} else {
					return oldFont;
				}
			}
			if ($nc(oldFont->platName)->startsWith(SunFontManager::jreFontDirName)) {
				if ($FontUtilities::isLogging()) {
					$FontUtilities::logWarning($$str({"Unexpected attempt to replace a JRE  font "_s, fontName, " from "_s, oldFont->platName, " with "_s, newFont->platName}));
				}
				return oldFont;
			}
			if ($FontUtilities::isLogging()) {
				$FontUtilities::logInfo($$str({"Replace in Family "_s, familyName, ",Font "_s, fontName, " new rank="_s, $$str(rank), " from "_s, oldFont->platName, " with "_s, newFont->platName}));
			}
			replaceFont(oldFont, newFont);
			$nc(this->physicalFonts)->put(fontName, newFont);
			$init($Locale);
			$nc(this->fullNameToFont)->put($($nc(fontName)->toLowerCase($Locale::ENGLISH)), newFont);
			$var($FontFamily, family, $FontFamily::getFamily(familyName));
			if (family == nullptr) {
				$assign(family, $new($FontFamily, familyName, false, rank));
				family->setFont(newFont, newFont->style);
			} else {
				$nc(family)->setFont(newFont, newFont->style);
			}
			return newFont;
		} else {
			return oldFont;
		}
	}
}

$Font2DArray* SunFontManager::getRegisteredFonts() {
	$useLocalCurrentObjectStackCache();
	$var($PhysicalFontArray, physFonts, getPhysicalFonts());
	int32_t mcf = this->maxCompFont;
	$var($Font2DArray, regFonts, $new($Font2DArray, $nc(physFonts)->length + mcf));
	$System::arraycopy(this->compFonts, 0, regFonts, 0, mcf);
	$System::arraycopy(physFonts, 0, regFonts, mcf, physFonts->length);
	return regFonts;
}

$PhysicalFontArray* SunFontManager::getPhysicalFonts() {
	$useLocalCurrentObjectStackCache();
	return $fcast($PhysicalFontArray, $nc($($nc(this->physicalFonts)->values()))->toArray($$new($PhysicalFontArray, 0)));
}

void SunFontManager::initialiseDeferredFonts() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		{
			$var($Iterator, i$, $nc($($cast($ConcurrentHashMap$KeySetView, $nc(this->deferredFontFiles)->keySet())))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, fileName, $cast($String, i$->next()));
				{
					initialiseDeferredFont(fileName);
				}
			}
		}
	}
}

void SunFontManager::registerDeferredJREFonts($String* jreDir) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		{
			$var($Iterator, i$, $nc($($nc(this->deferredFontFiles)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SunFontManager$FontRegistrationInfo, info, $cast($SunFontManager$FontRegistrationInfo, i$->next()));
				{
					if ($nc(info)->fontFilePath != nullptr && $nc(info->fontFilePath)->startsWith(jreDir)) {
						initialiseDeferredFont(info->fontFilePath);
					}
				}
			}
		}
	}
}

bool SunFontManager::isDeferredFont($String* fileName) {
	return $nc(this->deferredFontFiles)->containsKey(fileName);
}

$PhysicalFont* SunFontManager::findJREDeferredFont($String* name, int32_t style) {
	$useLocalCurrentObjectStackCache();
	if (this->noOtherJREFontFiles) {
		return nullptr;
	}
	$synchronized(SunFontManager::jreFontDirName) {
		if (this->jreOtherFontFiles == nullptr) {
			$var($HashSet, otherFontFiles, $new($HashSet));
			{
				$var($Iterator, i$, $nc($($cast($ConcurrentHashMap$KeySetView, $nc(this->deferredFontFiles)->keySet())))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, deferredFile, $cast($String, i$->next()));
					{
						$var($File, file, $new($File, deferredFile));
						$var($String, dir, file->getParent());
						if (dir == nullptr || !$nc(dir)->equals(SunFontManager::jreFontDirName)) {
							continue;
						}
						otherFontFiles->add(deferredFile);
					}
				}
			}
			$set(this, jreOtherFontFiles, $fcast($StringArray, otherFontFiles->toArray(SunFontManager::STR_ARRAY)));
			if ($nc(this->jreOtherFontFiles)->length == 0) {
				this->noOtherJREFontFiles = true;
			}
		}
		for (int32_t i = 0; i < $nc(this->jreOtherFontFiles)->length; ++i) {
			$var($String, fileName, $nc(this->jreOtherFontFiles)->get(i));
			if (fileName == nullptr) {
				continue;
			}
			$nc(this->jreOtherFontFiles)->set(i, nullptr);
			$var($PhysicalFont, physicalFont, initialiseDeferredFont(fileName));
			bool var$0 = physicalFont != nullptr;
			if (var$0) {
				bool var$1 = $nc($(physicalFont->getFontName(nullptr)))->equalsIgnoreCase(name);
				var$0 = (var$1 || $nc($(physicalFont->getFamilyName(nullptr)))->equalsIgnoreCase(name));
			}
			if (var$0 && $nc(physicalFont)->style == style) {
				return physicalFont;
			}
		}
	}
	return nullptr;
}

$PhysicalFont* SunFontManager::findOtherDeferredFont($String* name, int32_t style) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($cast($ConcurrentHashMap$KeySetView, $nc(this->deferredFontFiles)->keySet())))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, fileName, $cast($String, i$->next()));
			{
				$var($PhysicalFont, physicalFont, initialiseDeferredFont(fileName));
				bool var$0 = physicalFont != nullptr;
				if (var$0) {
					bool var$1 = $nc($(physicalFont->getFontName(nullptr)))->equalsIgnoreCase(name);
					var$0 = (var$1 || $nc($(physicalFont->getFamilyName(nullptr)))->equalsIgnoreCase(name));
				}
				if (var$0 && $nc(physicalFont)->style == style) {
					return physicalFont;
				}
			}
		}
	}
	return nullptr;
}

$PhysicalFont* SunFontManager::findDeferredFont($String* name, int32_t style) {
	$var($PhysicalFont, physicalFont, findJREDeferredFont(name, style));
	if (physicalFont != nullptr) {
		return physicalFont;
	} else {
		return findOtherDeferredFont(name, style);
	}
}

void SunFontManager::registerDeferredFont($String* fileNameKey, $String* fullPathName, $StringArray* nativeNames, int32_t fontFormat, bool useJavaRasterizer, int32_t fontRank) {
	$var($SunFontManager$FontRegistrationInfo, regInfo, $new($SunFontManager$FontRegistrationInfo, fullPathName, nativeNames, fontFormat, useJavaRasterizer, fontRank));
	$nc(this->deferredFontFiles)->put(fileNameKey, regInfo);
}

$PhysicalFont* SunFontManager::initialiseDeferredFont($String* fileNameKey) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (fileNameKey == nullptr) {
			return nullptr;
		}
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logInfo($$str({"Opening deferred font file "_s, fileNameKey}));
		}
		$var($PhysicalFont, physicalFont, nullptr);
		$var($SunFontManager$FontRegistrationInfo, regInfo, $cast($SunFontManager$FontRegistrationInfo, $nc(this->deferredFontFiles)->get(fileNameKey)));
		if (regInfo != nullptr) {
			$nc(this->deferredFontFiles)->remove(fileNameKey);
			$assign(physicalFont, registerFontFile(regInfo->fontFilePath, regInfo->nativeNames, regInfo->fontFormat, regInfo->javaRasterizer, regInfo->fontRank));
			if (physicalFont != nullptr) {
				$nc(this->initialisedFonts)->put(fileNameKey, physicalFont->handle);
			} else {
				$nc(this->initialisedFonts)->put(fileNameKey, SunFontManager::FONT_HANDLE_NULL);
			}
		} else {
			$var($Font2DHandle, handle, $cast($Font2DHandle, $nc(this->initialisedFonts)->get(fileNameKey)));
			if (handle == nullptr) {
				$nc(this->initialisedFonts)->put(fileNameKey, SunFontManager::FONT_HANDLE_NULL);
			} else {
				$assign(physicalFont, ($cast($PhysicalFont, $nc(handle)->font2D)));
			}
		}
		return physicalFont;
	}
}

bool SunFontManager::isRegisteredFontFile($String* name) {
	return $nc(this->registeredFonts)->containsKey(name);
}

$PhysicalFont* SunFontManager::getRegisteredFontFile($String* name) {
	return $cast($PhysicalFont, $nc(this->registeredFonts)->get(name));
}

$PhysicalFont* SunFontManager::registerFontFile($String* fileName, $StringArray* nativeNames, int32_t fontFormat, bool useJavaRasterizer, int32_t fontRank) {
	$useLocalCurrentObjectStackCache();
	$var($PhysicalFont, regFont, $cast($PhysicalFont, $nc(this->registeredFonts)->get(fileName)));
	if (regFont != nullptr) {
		return regFont;
	}
	$var($PhysicalFont, physicalFont, nullptr);
	try {
		{
			int32_t fn = 0;
			$var($TrueTypeFont, ttf, nullptr)
			$var($Type1Font, t1f, nullptr)
			$var($NativeFont, nf, nullptr)
			switch (fontFormat) {
			case SunFontManager::FONTFORMAT_TRUETYPE:
				{
					fn = 0;
					do {
						$assign(ttf, $new($TrueTypeFont, fileName, nativeNames, fn++, useJavaRasterizer));
						$var($PhysicalFont, pf, addToFontList(ttf, fontRank));
						if (physicalFont == nullptr) {
							$assign(physicalFont, pf);
						}
					} while (fn < $nc(ttf)->getFontCount());
					break;
				}
			case SunFontManager::FONTFORMAT_TYPE1:
				{
					$assign(t1f, $new($Type1Font, fileName, nativeNames));
					$assign(physicalFont, addToFontList(t1f, fontRank));
					break;
				}
			case SunFontManager::FONTFORMAT_NATIVE:
				{
					$assign(nf, $new($NativeFont, fileName, false));
					$assign(physicalFont, addToFontList(nf, fontRank));
					break;
				}
			default:
				{}
			}
		}
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logInfo($$str({"Registered file "_s, fileName, " as font "_s, physicalFont, " rank="_s, $$str(fontRank)}));
		}
	} catch ($FontFormatException&) {
		$var($FontFormatException, ffe, $catch());
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logInfo($$str({"Unusable font: "_s, fileName, " "_s, $(ffe->toString())}));
		}
	}
	if (physicalFont != nullptr && fontFormat != SunFontManager::FONTFORMAT_NATIVE) {
		$nc(this->registeredFonts)->put(fileName, physicalFont);
	}
	return physicalFont;
}

void SunFontManager::registerFonts($StringArray* fileNames, $StringArray2* nativeNames, int32_t fontCount, int32_t fontFormat, bool useJavaRasterizer, int32_t fontRank, bool defer) {
	for (int32_t i = 0; i < fontCount; ++i) {
		if (defer) {
			registerDeferredFont($nc(fileNames)->get(i), fileNames->get(i), $nc(nativeNames)->get(i), fontFormat, useJavaRasterizer, fontRank);
		} else {
			registerFontFile($nc(fileNames)->get(i), $nc(nativeNames)->get(i), fontFormat, useJavaRasterizer, fontRank);
		}
	}
}

$PhysicalFont* SunFontManager::getDefaultPhysicalFont() {
	$useLocalCurrentObjectStackCache();
	if (this->defaultPhysicalFont == nullptr) {
		$var($String, defaultFontName, getDefaultFontFaceName());
		$var($Font2D, font2d, findFont2D(defaultFontName, $Font::PLAIN, $FontManager::NO_FALLBACK));
		if (font2d != nullptr) {
			if ($instanceOf($PhysicalFont, font2d)) {
				$set(this, defaultPhysicalFont, $cast($PhysicalFont, font2d));
			} else if ($FontUtilities::isLogging()) {
				$FontUtilities::logWarning($$str({"Font returned by findFont2D for default font name "_s, defaultFontName, " is not a physical font: "_s, $(font2d->getFontName(nullptr))}));
			}
		}
		if (this->defaultPhysicalFont == nullptr) {
			$set(this, defaultPhysicalFont, $cast($PhysicalFont, $nc($($nc($($nc($($nc(this->physicalFonts)->values()))->stream()))->findFirst()))->orElseThrow(static_cast<$Supplier*>($$new(SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0)))));
		}
	}
	return this->defaultPhysicalFont;
}

$Font2D* SunFontManager::getDefaultLogicalFont(int32_t style) {
	return findFont2D("dialog"_s, style, $FontManager::NO_FALLBACK);
}

$String* SunFontManager::dotStyleStr(int32_t num) {
	$init(SunFontManager);
	do {
		if (num == $Font::BOLD) {
			goto case$0;
		}
		if (num == $Font::ITALIC) {
			goto case$1;
		}
		if (num == ($Font::ITALIC | $Font::BOLD)) {
			goto case$2;
		}
		goto case$3;
case$0:
		// Font.BOLD
		{
			return ".bold"_s;
		}
case$1:
		// Font.ITALIC
		{
			return ".italic"_s;
		}
case$2:
		// Font.ITALIC | Font.BOLD
		{
			return ".bolditalic"_s;
		}
case$3:
		// default
		{
			return ".plain"_s;
		}
	} while (false);
}

void SunFontManager::populateFontFileNameMap($HashMap* fontToFileMap, $HashMap* fontToFamilyNameMap, $HashMap* familyToFontListMap, $Locale* locale) {
}

$StringArray* SunFontManager::getFontFilesFromPath(bool noType1) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($FilenameFilter, filter, nullptr);
	if (noType1) {
		$assign(filter, SunFontManager::ttFilter);
	} else {
		$assign(filter, $new($SunFontManager$TTorT1Filter));
	}
	return $cast($StringArray, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunFontManager$4, this, filter))));
}

void SunFontManager::resolveWindowsFonts() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, unmappedFontNames, nullptr);
	{
		$var($Iterator, i$, $nc($($nc(this->fontToFamilyNameMap)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, font, $cast($String, i$->next()));
			{
				$var($String, file, $cast($String, $nc(this->fontToFileMap)->get(font)));
				if (file == nullptr) {
					if ($nc(font)->indexOf("  "_s) > 0) {
						$var($String, newName, font->replaceFirst("  "_s, " "_s));
						$assign(file, $cast($String, $nc(this->fontToFileMap)->get(newName)));
						if (file != nullptr && !$nc(this->fontToFamilyNameMap)->containsKey(newName)) {
							$nc(this->fontToFileMap)->remove(newName);
							$nc(this->fontToFileMap)->put(font, file);
						}
					} else if (font->equals("marlett"_s)) {
						$nc(this->fontToFileMap)->put(font, "marlett.ttf"_s);
					} else if (font->equals("david"_s)) {
						$assign(file, $cast($String, $nc(this->fontToFileMap)->get("david regular"_s)));
						if (file != nullptr) {
							$nc(this->fontToFileMap)->remove("david regular"_s);
							$nc(this->fontToFileMap)->put("david"_s, file);
						}
					} else {
						if (unmappedFontNames == nullptr) {
							$assign(unmappedFontNames, $new($ArrayList));
						}
						$nc(unmappedFontNames)->add(font);
					}
				}
			}
		}
	}
	if (unmappedFontNames != nullptr) {
		$var($HashSet, unmappedFontFiles, $new($HashSet));
		$var($HashMap, ffmapCopy, ($cast($HashMap, $nc(this->fontToFileMap)->clone())));
		{
			$var($Iterator, i$, $nc($($nc(this->fontToFamilyNameMap)->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, key, $cast($String, i$->next()));
				{
					$nc(ffmapCopy)->remove(key);
				}
			}
		}
		{
			$var($Iterator, i$, $nc($($nc(ffmapCopy)->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, key, $cast($String, i$->next()));
				{
					unmappedFontFiles->add($cast($String, $(ffmapCopy->get(key))));
					$nc(this->fontToFileMap)->remove(key);
				}
			}
		}
		resolveFontFiles(unmappedFontFiles, unmappedFontNames);
		if (unmappedFontNames->size() > 0) {
			$var($ArrayList, registryFiles, $new($ArrayList));
			{
				$var($Iterator, i$, $nc($($nc(this->fontToFileMap)->values()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, regFile, $cast($String, i$->next()));
					{
						registryFiles->add($($nc(regFile)->toLowerCase()));
					}
				}
			}
			{
				$var($StringArray, arr$, getFontFilesFromPath(true));
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, pathFile, arr$->get(i$));
					{
						if (!registryFiles->contains(pathFile)) {
							unmappedFontFiles->add(pathFile);
						}
					}
				}
			}
			resolveFontFiles(unmappedFontFiles, unmappedFontNames);
		}
		if (unmappedFontNames->size() > 0) {
			int32_t sz = unmappedFontNames->size();
			for (int32_t i = 0; i < sz; ++i) {
				$var($String, name, $cast($String, unmappedFontNames->get(i)));
				$var($String, familyName, $cast($String, $nc(this->fontToFamilyNameMap)->get(name)));
				if (familyName != nullptr) {
					$var($ArrayList, family, $cast($ArrayList, $nc(this->familyToFontListMap)->get(familyName)));
					if (family != nullptr) {
						if (family->size() <= 1) {
							$nc(this->familyToFontListMap)->remove(familyName);
						}
					}
				}
				$nc(this->fontToFamilyNameMap)->remove(name);
				if ($FontUtilities::isLogging()) {
					$FontUtilities::logInfo($$str({"No file for font:"_s, name}));
				}
			}
		}
	}
}

void SunFontManager::checkForUnreferencedFontFiles() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->haveCheckedUnreferencedFontFiles) {
			return;
		}
		this->haveCheckedUnreferencedFontFiles = true;
		$init($FontUtilities);
		if (!$FontUtilities::isWindows) {
			return;
		}
		$var($ArrayList, registryFiles, $new($ArrayList));
		{
			$var($Iterator, i$, $nc($($nc(this->fontToFileMap)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, regFile, $cast($String, i$->next()));
				{
					registryFiles->add($($nc(regFile)->toLowerCase()));
				}
			}
		}
		$var($HashMap, fontToFileMap2, nullptr);
		$var($HashMap, fontToFamilyNameMap2, nullptr);
		$var($HashMap, familyToFontListMap2, nullptr);
		{
			$var($StringArray, arr$, getFontFilesFromPath(false));
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, pathFile, arr$->get(i$));
				{
					if (!registryFiles->contains(pathFile)) {
						if ($FontUtilities::isLogging()) {
							$FontUtilities::logInfo($$str({"Found non-registry file : "_s, pathFile}));
						}
						$var($PhysicalFont, f, registerFontFile($(getPathName(pathFile))));
						if (f == nullptr) {
							continue;
						}
						if (fontToFileMap2 == nullptr) {
							$assign(fontToFileMap2, $new($HashMap, static_cast<$Map*>(this->fontToFileMap)));
							$assign(fontToFamilyNameMap2, $new($HashMap, static_cast<$Map*>(this->fontToFamilyNameMap)));
							$assign(familyToFontListMap2, $new($HashMap, static_cast<$Map*>(this->familyToFontListMap)));
						}
						$var($String, fontName, $nc(f)->getFontName(nullptr));
						$var($String, family, f->getFamilyName(nullptr));
						$var($String, familyLC, $nc(family)->toLowerCase());
						$nc(fontToFamilyNameMap2)->put(fontName, family);
						$nc(fontToFileMap2)->put(fontName, pathFile);
						$var($ArrayList, fonts, $cast($ArrayList, $nc(familyToFontListMap2)->get(familyLC)));
						if (fonts == nullptr) {
							$assign(fonts, $new($ArrayList));
						} else {
							$assign(fonts, $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(fonts)))));
						}
						$nc(fonts)->add(fontName);
						familyToFontListMap2->put(familyLC, fonts);
					}
				}
			}
		}
		if (fontToFileMap2 != nullptr) {
			$set(this, fontToFileMap, fontToFileMap2);
			$set(this, familyToFontListMap, familyToFontListMap2);
			$set(this, fontToFamilyNameMap, fontToFamilyNameMap2);
		}
	}
}

void SunFontManager::resolveFontFiles($HashSet* unmappedFiles, $ArrayList* unmappedFonts) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, l, $SunToolkit::getStartupLocale());
	{
		$var($Iterator, i$, $nc(unmappedFiles)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, file, $cast($String, i$->next()));
			{
				try {
					int32_t fn = 0;
					$var($TrueTypeFont, ttf, nullptr);
					$var($String, fullPath, getPathName(file));
					if ($FontUtilities::isLogging()) {
						$FontUtilities::logInfo($$str({"Trying to resolve file "_s, fullPath}));
					}
					do {
						$assign(ttf, $new($TrueTypeFont, fullPath, nullptr, fn++, false));
						$var($String, fontName, $nc($(ttf->getFontName(l)))->toLowerCase());
						if ($nc(unmappedFonts)->contains(fontName)) {
							$nc(this->fontToFileMap)->put(fontName, file);
							unmappedFonts->remove($of(fontName));
							if ($FontUtilities::isLogging()) {
								$FontUtilities::logInfo($$str({"Resolved absent registry entry for "_s, fontName, " located in "_s, fullPath}));
							}
						}
					} while (fn < $nc(ttf)->getFontCount());
				} catch ($Exception&) {
					$catch();
				}
			}
		}
	}
}

$HashMap* SunFontManager::populateHardcodedFileNameMap() {
	return $new($HashMap, 0);
}

$Font2D* SunFontManager::findFontFromPlatformMap($String* lcName, int32_t style) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($HashMap, platformFontMap, SunFontManager::platformFontMap);
	if (platformFontMap == nullptr) {
		$assign(platformFontMap, populateHardcodedFileNameMap());
		$assignStatic(SunFontManager::platformFontMap, platformFontMap);
	}
	if (platformFontMap == nullptr || $nc(platformFontMap)->size() == 0) {
		return nullptr;
	}
	int32_t spaceIndex = $nc(lcName)->indexOf((int32_t)u' ');
	$var($String, firstWord, lcName);
	if (spaceIndex > 0) {
		$assign(firstWord, lcName->substring(0, spaceIndex));
	}
	$var($SunFontManager$FamilyDescription, fd, $cast($SunFontManager$FamilyDescription, $nc(platformFontMap)->get(firstWord)));
	if (fd == nullptr || $nc(fd)->failed) {
		return nullptr;
	}
	int32_t styleIndex = -1;
	if (lcName->equalsIgnoreCase($nc(fd)->plainFullName)) {
		styleIndex = 0;
	} else if (lcName->equalsIgnoreCase($nc(fd)->boldFullName)) {
		styleIndex = 1;
	} else if (lcName->equalsIgnoreCase($nc(fd)->italicFullName)) {
		styleIndex = 2;
	} else if (lcName->equalsIgnoreCase($nc(fd)->boldItalicFullName)) {
		styleIndex = 3;
	}
	if (styleIndex == -1 && !lcName->equalsIgnoreCase($nc(fd)->familyName)) {
		return nullptr;
	}
	$var($String, plainFile, nullptr);
	$var($String, boldFile, nullptr);
	$var($String, italicFile, nullptr);
	$var($String, boldItalicFile, nullptr);
	bool failure = false;
	getPlatformFontDirs(SunFontManager::noType1Font);
	if ($nc(fd)->plainFileName != nullptr) {
		$assign(plainFile, getPathName(fd->plainFileName));
		if (plainFile == nullptr) {
			failure = true;
		}
	}
	if ($nc(fd)->boldFileName != nullptr) {
		$assign(boldFile, getPathName(fd->boldFileName));
		if (boldFile == nullptr) {
			failure = true;
		}
	}
	if ($nc(fd)->italicFileName != nullptr) {
		$assign(italicFile, getPathName(fd->italicFileName));
		if (italicFile == nullptr) {
			failure = true;
		}
	}
	if ($nc(fd)->boldItalicFileName != nullptr) {
		$assign(boldItalicFile, getPathName(fd->boldItalicFileName));
		if (boldItalicFile == nullptr) {
			failure = true;
		}
	}
	if (failure) {
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logInfo($$str({"Hardcoded file missing looking for "_s, lcName}));
		}
		$nc(fd)->failed = true;
		return nullptr;
	}
	$var($StringArray, files, $new($StringArray, {
		plainFile,
		boldFile,
		italicFile,
		boldItalicFile
	}));
	failure = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunFontManager$5, this, files)))))))->booleanValue();
	if (failure) {
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logInfo($$str({"Hardcoded file missing looking for "_s, lcName}));
		}
		$nc(fd)->failed = true;
		return nullptr;
	}
	$var($Font2D, font, nullptr);
	for (int32_t f = 0; f < files->length; ++f) {
		if (files->get(f) == nullptr) {
			continue;
		}
		$var($PhysicalFont, pf, registerFontFile(files->get(f), nullptr, SunFontManager::FONTFORMAT_TRUETYPE, false, $Font2D::TTF_RANK));
		if (f == styleIndex) {
			$assign(font, pf);
		}
	}
	$var($FontFamily, fontFamily, $FontFamily::getFamily($nc(fd)->familyName));
	if (fontFamily != nullptr) {
		if (font == nullptr) {
			$assign(font, fontFamily->getFont(style));
			if (font == nullptr) {
				$assign(font, fontFamily->getClosestStyle(style));
			}
		} else if (style > 0 && style != $nc(font)->style) {
			style |= font->style;
			$assign(font, fontFamily->getFont(style));
			if (font == nullptr) {
				$assign(font, fontFamily->getClosestStyle(style));
			}
		}
	}
	return font;
}

$HashMap* SunFontManager::getFullNameToFileMap() {
	$synchronized(this) {
		if (this->fontToFileMap == nullptr) {
			$set(this, pathDirs, getPlatformFontDirs(SunFontManager::noType1Font));
			$set(this, fontToFileMap, $new($HashMap, 100));
			$set(this, fontToFamilyNameMap, $new($HashMap, 100));
			$set(this, familyToFontListMap, $new($HashMap, 50));
			$init($Locale);
			populateFontFileNameMap(this->fontToFileMap, this->fontToFamilyNameMap, this->familyToFontListMap, $Locale::ENGLISH);
			$init($FontUtilities);
			if ($FontUtilities::isWindows) {
				resolveWindowsFonts();
			}
			if ($FontUtilities::isLogging()) {
				logPlatformFontInfo();
			}
		}
		return this->fontToFileMap;
	}
}

void SunFontManager::logPlatformFontInfo() {
	$useLocalCurrentObjectStackCache();
	$var($PlatformLogger, logger, $FontUtilities::getLogger());
	for (int32_t i = 0; i < $nc(this->pathDirs)->length; ++i) {
		$nc(logger)->info($$str({"fontdir="_s, $nc(this->pathDirs)->get(i)}));
	}
	{
		$var($Iterator, i$, $nc($($nc(this->fontToFileMap)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, keyName, $cast($String, i$->next()));
			{
				$nc(logger)->info($$str({"font="_s, keyName, " file="_s, $cast($String, $($nc(this->fontToFileMap)->get(keyName)))}));
			}
		}
	}
	{
		$var($Iterator, i$, $nc($($nc(this->fontToFamilyNameMap)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, keyName, $cast($String, i$->next()));
			{
				$nc(logger)->info($$str({"font="_s, keyName, " family="_s, $cast($String, $($nc(this->fontToFamilyNameMap)->get(keyName)))}));
			}
		}
	}
	{
		$var($Iterator, i$, $nc($($nc(this->familyToFontListMap)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, keyName, $cast($String, i$->next()));
			{
				$nc(logger)->info($$str({"family="_s, keyName, " fonts="_s, $($nc(this->familyToFontListMap)->get(keyName))}));
			}
		}
	}
}

$StringArray* SunFontManager::getFontNamesFromPlatform() {
	$useLocalCurrentObjectStackCache();
	if ($nc($(getFullNameToFileMap()))->size() == 0) {
		return nullptr;
	}
	checkForUnreferencedFontFiles();
	$var($ArrayList, fontNames, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($($nc(this->familyToFontListMap)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ArrayList, a, $cast($ArrayList, i$->next()));
			{
				{
					$var($Iterator, i$, $nc(a)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, s, $cast($String, i$->next()));
						{
							fontNames->add(s);
						}
					}
				}
			}
		}
	}
	return $fcast($StringArray, fontNames->toArray(SunFontManager::STR_ARRAY));
}

bool SunFontManager::gotFontsFromPlatform() {
	return $nc($(getFullNameToFileMap()))->size() != 0;
}

$String* SunFontManager::getFileNameForFontName($String* fontName) {
	$init($Locale);
	$var($String, fontNameLC, $nc(fontName)->toLowerCase($Locale::ENGLISH));
	return $cast($String, $nc(this->fontToFileMap)->get(fontNameLC));
}

$PhysicalFont* SunFontManager::registerFontFile($String* file) {
	bool var$0 = $$new($File, file)->isAbsolute();
	if (var$0 && !$nc(this->registeredFonts)->containsKey(file)) {
		int32_t fontFormat = SunFontManager::FONTFORMAT_NONE;
		int32_t fontRank = $Font2D::UNKNOWN_RANK;
		if ($nc(SunFontManager::ttFilter)->accept(nullptr, file)) {
			fontFormat = SunFontManager::FONTFORMAT_TRUETYPE;
			fontRank = $Font2D::TTF_RANK;
		} else if ($nc(SunFontManager::t1Filter)->accept(nullptr, file)) {
			fontFormat = SunFontManager::FONTFORMAT_TYPE1;
			fontRank = $Font2D::TYPE1_RANK;
		}
		if (fontFormat == SunFontManager::FONTFORMAT_NONE) {
			return nullptr;
		}
		return registerFontFile(file, nullptr, fontFormat, false, fontRank);
	}
	return nullptr;
}

void SunFontManager::registerOtherFontFiles($HashSet* registeredFontFiles) {
	$useLocalCurrentObjectStackCache();
	if ($nc($(getFullNameToFileMap()))->size() == 0) {
		return;
	}
	{
		$var($Iterator, i$, $nc($($nc(this->fontToFileMap)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, file, $cast($String, i$->next()));
			{
				registerFontFile(file);
			}
		}
	}
}

bool SunFontManager::getFamilyNamesFromPlatform($TreeMap* familyNames, $Locale* requestedLocale) {
	$useLocalCurrentObjectStackCache();
	if ($nc($(getFullNameToFileMap()))->size() == 0) {
		return false;
	}
	checkForUnreferencedFontFiles();
	{
		$var($Iterator, i$, $nc($($nc(this->fontToFamilyNameMap)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, name, $cast($String, i$->next()));
			{
				$nc(familyNames)->put($($nc(name)->toLowerCase(requestedLocale)), name);
			}
		}
	}
	return true;
}

$String* SunFontManager::getPathName($String* s) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($File, f, $new($File, s));
	if (f->isAbsolute()) {
		return s;
	} else if ($nc(this->pathDirs)->length == 1) {
		$init($File);
		return $str({$nc(this->pathDirs)->get(0), $File::separator, s});
	} else {
		$var($String, path, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunFontManager$6, this, s)))));
		if (path != nullptr) {
			return path;
		}
	}
	return s;
}

$Font2D* SunFontManager::findFontFromPlatform($String* lcName, int32_t style) {
	$useLocalCurrentObjectStackCache();
	if ($nc($(getFullNameToFileMap()))->size() == 0) {
		return nullptr;
	}
	$var($ArrayList, family, nullptr);
	$var($String, fontFile, nullptr);
	$var($String, familyName, $cast($String, $nc(this->fontToFamilyNameMap)->get(lcName)));
	if (familyName != nullptr) {
		$assign(fontFile, $cast($String, $nc(this->fontToFileMap)->get(lcName)));
		$init($Locale);
		$assign(family, $cast($ArrayList, $nc(this->familyToFontListMap)->get($(familyName->toLowerCase($Locale::ENGLISH)))));
	} else {
		$assign(family, $cast($ArrayList, $nc(this->familyToFontListMap)->get(lcName)));
		if (family != nullptr && family->size() > 0) {
			$init($Locale);
			$var($String, lcFontName, $nc(($cast($String, $(family->get(0)))))->toLowerCase($Locale::ENGLISH));
			if (lcFontName != nullptr) {
				$assign(familyName, $cast($String, $nc(this->fontToFamilyNameMap)->get(lcFontName)));
			}
		}
	}
	if (family == nullptr || familyName == nullptr) {
		return nullptr;
	}
	$var($StringArray, fontList, $fcast($StringArray, $nc(family)->toArray(SunFontManager::STR_ARRAY)));
	if ($nc(fontList)->length == 0) {
		return nullptr;
	}
	for (int32_t f = 0; f < $nc(fontList)->length; ++f) {
		$init($Locale);
		$var($String, fontNameLC, $nc(fontList->get(f))->toLowerCase($Locale::ENGLISH));
		$var($String, fileName, $cast($String, $nc(this->fontToFileMap)->get(fontNameLC)));
		if (fileName == nullptr) {
			if ($FontUtilities::isLogging()) {
				$FontUtilities::logInfo($$str({"Platform lookup : No file for font "_s, fontList->get(f), " in family "_s, familyName}));
			}
			return nullptr;
		}
	}
	$var($PhysicalFont, physicalFont, nullptr);
	if (fontFile != nullptr) {
		$assign(physicalFont, registerFontFile($(getPathName(fontFile)), nullptr, SunFontManager::FONTFORMAT_TRUETYPE, false, $Font2D::TTF_RANK));
	}
	for (int32_t f = 0; f < $nc(fontList)->length; ++f) {
		$init($Locale);
		$var($String, fontNameLC, $nc(fontList->get(f))->toLowerCase($Locale::ENGLISH));
		$var($String, fileName, $cast($String, $nc(this->fontToFileMap)->get(fontNameLC)));
		if (fontFile != nullptr && fontFile->equals(fileName)) {
			continue;
		}
		registerFontFile($(getPathName(fileName)), nullptr, SunFontManager::FONTFORMAT_TRUETYPE, false, $Font2D::TTF_RANK);
	}
	$var($Font2D, font, nullptr);
	$var($FontFamily, fontFamily, $FontFamily::getFamily(familyName));
	if (physicalFont != nullptr) {
		style |= physicalFont->style;
	}
	if (fontFamily != nullptr) {
		$assign(font, fontFamily->getFont(style));
		if (font == nullptr) {
			$assign(font, fontFamily->getClosestStyle(style));
		}
	}
	return font;
}

$Font2D* SunFontManager::findFont2D($String* name$renamed, int32_t style, int32_t fallback) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	if (name == nullptr) {
		return nullptr;
	}
	$init($Locale);
	$var($String, lowerCaseName, $nc(name)->toLowerCase($Locale::ENGLISH));
	$var($String, mapName, $str({lowerCaseName, $(dotStyleStr(style))}));
	$var($Font2D, font, $cast($Font2D, $nc(this->fontNameCache)->get(mapName)));
	if (font != nullptr) {
		return font;
	}
	if ($FontUtilities::isLogging()) {
		$FontUtilities::logInfo($$str({"Search for font: "_s, name}));
	}
	if ($FontUtilities::isWindows) {
		if (lowerCaseName->equals("ms sans serif"_s)) {
			$assign(name, "sansserif"_s);
		} else if (lowerCaseName->equals("ms serif"_s)) {
			$assign(name, "serif"_s);
		}
	}
	if (lowerCaseName->equals("default"_s)) {
		$assign(name, "dialog"_s);
	}
	$var($FontFamily, family, $FontFamily::getFamily(name));
	if (family != nullptr) {
		$assign(font, family->getFontWithExactStyleMatch(style));
		if (font == nullptr) {
			$assign(font, findDeferredFont(name, style));
		}
		if (font == nullptr) {
			$assign(font, findFontFromPlatform(lowerCaseName, style));
		}
		if (font == nullptr) {
			$assign(font, family->getFont(style));
		}
		if (font == nullptr) {
			$assign(font, family->getClosestStyle(style));
		}
		if (font != nullptr) {
			$nc(this->fontNameCache)->put(mapName, font);
			return font;
		}
	}
	$assign(font, $cast($Font2D, $nc(this->fullNameToFont)->get(lowerCaseName)));
	if (font != nullptr) {
		if (font->style == style || style == $Font::PLAIN) {
			$nc(this->fontNameCache)->put(mapName, font);
			return font;
		} else {
			$assign(family, $FontFamily::getFamily($(font->getFamilyName(nullptr))));
			if (family != nullptr) {
				$var($Font2D, familyFont, family->getFont(style | font->style));
				if (familyFont != nullptr) {
					$nc(this->fontNameCache)->put(mapName, familyFont);
					return familyFont;
				} else {
					$assign(familyFont, family->getClosestStyle(style | font->style));
					if (familyFont != nullptr) {
						if (familyFont->canDoStyle(style | font->style)) {
							$nc(this->fontNameCache)->put(mapName, familyFont);
							return familyFont;
						}
					}
				}
			}
		}
	}
	if ($FontUtilities::isWindows) {
		$assign(font, findFontFromPlatformMap(lowerCaseName, style));
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logInfo($$str({"findFontFromPlatformMap returned "_s, font}));
		}
		if (font != nullptr) {
			$nc(this->fontNameCache)->put(mapName, font);
			return font;
		}
		if ($nc(this->deferredFontFiles)->size() > 0) {
			$assign(font, findJREDeferredFont(lowerCaseName, style));
			if (font != nullptr) {
				$nc(this->fontNameCache)->put(mapName, font);
				return font;
			}
		}
		$assign(font, findFontFromPlatform(lowerCaseName, style));
		if (font != nullptr) {
			if ($FontUtilities::isLogging()) {
				$FontUtilities::logInfo($$str({"Found font via platform API for request:\""_s, name, "\":, style="_s, $$str(style), " found font: "_s, font}));
			}
			$nc(this->fontNameCache)->put(mapName, font);
			return font;
		}
	}
	if ($nc(this->deferredFontFiles)->size() > 0) {
		$assign(font, findDeferredFont(name, style));
		if (font != nullptr) {
			$nc(this->fontNameCache)->put(mapName, font);
			return font;
		}
	}
	if (this->fontsAreRegistered) {
		$var($Hashtable, familyTable, this->createdByFamilyName);
		$var($Hashtable, nameTable, this->createdByFullName);
		$assign(family, $cast($FontFamily, $nc(familyTable)->get(lowerCaseName)));
		if (family != nullptr) {
			$assign(font, family->getFontWithExactStyleMatch(style));
			if (font == nullptr) {
				$assign(font, family->getFont(style));
			}
			if (font == nullptr) {
				$assign(font, family->getClosestStyle(style));
			}
			if (font != nullptr) {
				if (this->fontsAreRegistered) {
					$nc(this->fontNameCache)->put(mapName, font);
				}
				return font;
			}
		}
		$assign(font, $cast($Font2D, $nc(nameTable)->get(lowerCaseName)));
		if (font != nullptr) {
			if (this->fontsAreRegistered) {
				$nc(this->fontNameCache)->put(mapName, font);
			}
			return font;
		}
	}
	if (!this->loadedAllFonts) {
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logInfo($$str({"Load fonts looking for:"_s, name}));
		}
		loadFonts();
		this->loadedAllFonts = true;
		return findFont2D(name, style, fallback);
	}
	if (!this->loadedAllFontFiles) {
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logInfo($$str({"Load font files looking for:"_s, name}));
		}
		loadFontFiles();
		this->loadedAllFontFiles = true;
		return findFont2D(name, style, fallback);
	}
	if (($assign(font, findFont2DAllLocales(name, style))) != nullptr) {
		$nc(this->fontNameCache)->put(mapName, font);
		return font;
	}
	if ($FontUtilities::isWindows) {
		$var($String, compatName, $nc($(getFontConfiguration()))->getFallbackFamilyName(name, nullptr));
		if (compatName != nullptr) {
			$assign(font, findFont2D(compatName, style, fallback));
			$nc(this->fontNameCache)->put(mapName, font);
			return font;
		}
	} else if (lowerCaseName->equals("timesroman"_s)) {
		$assign(font, findFont2D("serif"_s, style, fallback));
		$nc(this->fontNameCache)->put(mapName, font);
		return font;
	} else if (lowerCaseName->equals("helvetica"_s)) {
		$assign(font, findFont2D("sansserif"_s, style, fallback));
		$nc(this->fontNameCache)->put(mapName, font);
		return font;
	} else if (lowerCaseName->equals("courier"_s)) {
		$assign(font, findFont2D("monospaced"_s, style, fallback));
		$nc(this->fontNameCache)->put(mapName, font);
		return font;
	}
	if ($FontUtilities::isLogging()) {
		$FontUtilities::logInfo($$str({"No font found for:"_s, name}));
	}
	switch (fallback) {
	case $FontManager::PHYSICAL_FALLBACK:
		{
			return getDefaultPhysicalFont();
		}
	case $FontManager::LOGICAL_FALLBACK:
		{
			return getDefaultLogicalFont(style);
		}
	default:
		{
			return nullptr;
		}
	}
}

bool SunFontManager::usePlatformFontMetrics() {
	return this->usePlatformFontMetrics$;
}

int32_t SunFontManager::getNumFonts() {
	return $nc(this->physicalFonts)->size() + this->maxCompFont;
}

bool SunFontManager::fontSupportsEncoding($Font* font, $String* encoding) {
	$init(SunFontManager);
	return $nc($($FontUtilities::getFont2D(font)))->supportsEncoding(encoding);
}

$Font2DArray* SunFontManager::createFont2D($File* fontFile, int32_t fontFormat, bool all, bool isCopy, $CreatedFontTracker* tracker) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($List, fList, $new($ArrayList));
	int32_t cnt = 1;
	$var($String, fontFilePath, $nc(fontFile)->getPath());
	$var($FileFont, font2D, nullptr);
	$var($File, fFile, fontFile);
	$var($CreatedFontTracker, _tracker, tracker);
	bool weakRefs = false;
	int32_t maxStrikes = 0;
	$synchronized(this) {
		if (this->createdFontCount < SunFontManager::maxSoftRefCnt) {
			++this->createdFontCount;
		} else {
			weakRefs = true;
			maxStrikes = 10;
		}
	}
	try {
		{
			int32_t index = 0;
			switch (fontFormat) {
			case $Font::TRUETYPE_FONT:
				{
					$assign(font2D, $new($TrueTypeFont, fontFilePath, nullptr, 0, true));
					$nc(font2D)->setUseWeakRefs(weakRefs, maxStrikes);
					fList->add(font2D);
					if (!all) {
						break;
					}
					cnt = $nc(($cast($TrueTypeFont, font2D)))->getFontCount();
					index = 1;
					while (index < cnt) {
						$assign(font2D, $new($TrueTypeFont, fontFilePath, nullptr, index++, true));
						font2D->setUseWeakRefs(weakRefs, maxStrikes);
						fList->add(font2D);
					}
					break;
				}
			case $Font::TYPE1_FONT:
				{
					$assign(font2D, $new($Type1Font, fontFilePath, nullptr, isCopy));
					$nc(font2D)->setUseWeakRefs(weakRefs, maxStrikes);
					fList->add(font2D);
					break;
				}
			default:
				{
					$throwNew($FontFormatException, "Unrecognised Font Format"_s);
				}
			}
		}
	} catch ($FontFormatException&) {
		$var($FontFormatException, e, $catch());
		if (isCopy) {
			$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunFontManager$7, this, _tracker, fFile)));
		}
		$throw(e);
	}
	if (isCopy) {
		$FileFont::setFileToRemove(fList, fontFile, cnt, tracker);
		$load($FontManager);
		$synchronized($FontManager::class$) {
			if (this->tmpFontFiles == nullptr) {
				$set(this, tmpFontFiles, $new($Vector));
			}
			$nc(this->tmpFontFiles)->add(fontFile);
			if (this->fileCloser == nullptr) {
				$var($Runnable, fileCloserRunnable, $new($SunFontManager$8, this));
				$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(SunFontManager$$Lambda$lambda$createFont2D$1$1, this, fileCloserRunnable)));
			}
		}
	}
	return $fcast($Font2DArray, fList->toArray($$new($Font2DArray, 0)));
}

$String* SunFontManager::getFullNameByFileName($String* fileName) {
	$synchronized(this) {
		$var($PhysicalFontArray, physFonts, getPhysicalFonts());
		for (int32_t i = 0; i < $nc(physFonts)->length; ++i) {
			if ($nc($nc(physFonts->get(i))->platName)->equals(fileName)) {
				return ($nc(physFonts->get(i))->getFontName(nullptr));
			}
		}
		return nullptr;
	}
}

void SunFontManager::deRegisterBadFont($Font2D* font2D) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (!($instanceOf($PhysicalFont, font2D))) {
			return;
		} else {
			if ($FontUtilities::isLogging()) {
				$FontUtilities::logSevere($$str({"Deregister bad font: "_s, font2D}));
			}
			replaceFont($cast($PhysicalFont, font2D), $(getDefaultPhysicalFont()));
		}
	}
}

void SunFontManager::replaceFont($PhysicalFont* oldFont, $PhysicalFont* newFont$renamed) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($PhysicalFont, newFont, newFont$renamed);
		if (!$equals($nc($nc(oldFont)->handle)->font2D, oldFont)) {
			return;
		}
		if (oldFont == newFont) {
			if ($FontUtilities::isLogging()) {
				$FontUtilities::logSevere($$str({"Can\'t replace bad font with itself "_s, oldFont}));
			}
			$var($PhysicalFontArray, physFonts, getPhysicalFonts());
			for (int32_t i = 0; i < $nc(physFonts)->length; ++i) {
				if (physFonts->get(i) != newFont) {
					$assign(newFont, physFonts->get(i));
					break;
				}
			}
			if (oldFont == newFont) {
				if ($FontUtilities::isLogging()) {
					$FontUtilities::logSevere("This is bad. No good physicalFonts found."_s);
				}
				return;
			}
		}
		$set($nc($nc(oldFont)->handle), font2D, newFont);
		$nc(this->physicalFonts)->remove(oldFont->fullName);
		$init($Locale);
		$nc(this->fullNameToFont)->remove($($nc(oldFont->fullName)->toLowerCase($Locale::ENGLISH)));
		$FontFamily::remove(oldFont);
		if (this->localeFullNamesToFont != nullptr) {
			$var($Map$EntryArray, mapEntries, $fcast($Map$EntryArray, $nc($($nc(this->localeFullNamesToFont)->entrySet()))->toArray($$new($Map$EntryArray, 0))));
			for (int32_t i = 0; i < $nc(mapEntries)->length; ++i) {
				if ($equals($nc(mapEntries->get(i))->getValue(), oldFont)) {
					try {
						$var($Map$Entry, tmp, mapEntries->get(i));
						$nc(tmp)->setValue(newFont);
					} catch ($Exception&) {
						$var($Exception, e, $catch());
						$nc(this->localeFullNamesToFont)->remove($($nc(mapEntries->get(i))->getKey()));
					}
				}
			}
		}
		for (int32_t i = 0; i < this->maxCompFont; ++i) {
			if ($nc(newFont)->getRank() > $Font2D::FONT_CONFIG_RANK) {
				$nc($nc(this->compFonts)->get(i))->replaceComponentFont(oldFont, newFont);
			}
		}
	}
}

void SunFontManager::loadLocaleNames() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->localeFullNamesToFont != nullptr) {
			return;
		}
		$set(this, localeFullNamesToFont, $new($HashMap));
		$var($Font2DArray, fonts, getRegisteredFonts());
		for (int32_t i = 0; i < $nc(fonts)->length; ++i) {
			if ($instanceOf($TrueTypeFont, fonts->get(i))) {
				$var($TrueTypeFont, ttf, $cast($TrueTypeFont, fonts->get(i)));
				$var($StringArray, fullNames, $nc(ttf)->getAllFullNames());
				for (int32_t n = 0; n < $nc(fullNames)->length; ++n) {
					$nc(this->localeFullNamesToFont)->put(fullNames->get(n), ttf);
				}
				$var($FontFamily, family, $FontFamily::getFamily(ttf->familyName));
				if (family != nullptr) {
					$FontFamily::addLocaleNames(family, $(ttf->getAllFamilyNames()));
				}
			}
		}
	}
}

$Font2D* SunFontManager::findFont2DAllLocales($String* name, int32_t style) {
	$useLocalCurrentObjectStackCache();
	if ($FontUtilities::isLogging()) {
		$FontUtilities::logInfo($$str({"Searching localised font names for:"_s, name}));
	}
	if (this->localeFullNamesToFont == nullptr) {
		loadLocaleNames();
	}
	$var($String, lowerCaseName, $nc(name)->toLowerCase());
	$var($Font2D, font, nullptr);
	$var($FontFamily, family, $FontFamily::getLocaleFamily(lowerCaseName));
	if (family != nullptr) {
		$assign(font, family->getFont(style));
		if (font == nullptr) {
			$assign(font, family->getClosestStyle(style));
		}
		if (font != nullptr) {
			return font;
		}
	}
	$synchronized(this) {
		$assign(font, $cast($Font2D, $nc(this->localeFullNamesToFont)->get(name)));
	}
	if (font != nullptr) {
		if (font->style == style || style == $Font::PLAIN) {
			return font;
		} else {
			$assign(family, $FontFamily::getFamily($(font->getFamilyName(nullptr))));
			if (family != nullptr) {
				$var($Font2D, familyFont, family->getFont(style));
				if (familyFont != nullptr) {
					return familyFont;
				} else {
					$assign(familyFont, family->getClosestStyle(style));
					if (familyFont != nullptr) {
						if (!familyFont->canDoStyle(style)) {
							$assign(familyFont, nullptr);
						}
						return familyFont;
					}
				}
			}
		}
	}
	return font;
}

bool SunFontManager::usingAlternateCompositeFonts() {
	return this->_usingAlternateComposites;
}

void SunFontManager::useAlternateFontforJALocales() {
	$synchronized(this) {
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logInfo("Entered useAlternateFontforJALocales()."_s);
		}
		if (!$FontUtilities::isWindows) {
			return;
		}
		SunFontManager::gAltJAFont = true;
	}
}

bool SunFontManager::usingAlternateFontforJALocales() {
	return SunFontManager::gAltJAFont;
}

void SunFontManager::preferLocaleFonts() {
	$synchronized(this) {
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logInfo("Entered preferLocaleFonts()."_s);
		}
		if (!$FontConfiguration::willReorderForStartupLocale()) {
			return;
		}
		if (this->gLocalePref == true) {
			return;
		}
		this->gLocalePref = true;
		createCompositeFonts(this->fontNameCache, this->gLocalePref, this->gPropPref);
		this->_usingAlternateComposites = true;
	}
}

void SunFontManager::preferProportionalFonts() {
	$synchronized(this) {
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logInfo("Entered preferProportionalFonts()."_s);
		}
		if (!$FontConfiguration::hasMonoToPropMap()) {
			return;
		}
		if (this->gPropPref == true) {
			return;
		}
		this->gPropPref = true;
		createCompositeFonts(this->fontNameCache, this->gLocalePref, this->gPropPref);
		this->_usingAlternateComposites = true;
	}
}

$HashSet* SunFontManager::getInstalledNames() {
	$init(SunFontManager);
	$useLocalCurrentObjectStackCache();
	if (SunFontManager::installedNames == nullptr) {
		$var($Locale, l, getSystemStartupLocale());
		$var(SunFontManager, fontManager, SunFontManager::getInstance());
		$var($StringArray, installedFamilies, $nc(fontManager)->getInstalledFontFamilyNames(l));
		$var($FontArray, installedFonts, fontManager->getAllInstalledFonts());
		$var($HashSet, names, $new($HashSet));
		for (int32_t i = 0; i < $nc(installedFamilies)->length; ++i) {
			names->add($($nc(installedFamilies->get(i))->toLowerCase(l)));
		}
		for (int32_t i = 0; i < $nc(installedFonts)->length; ++i) {
			names->add($($nc($($nc(installedFonts->get(i))->getFontName(l)))->toLowerCase(l)));
		}
		$assignStatic(SunFontManager::installedNames, names);
	}
	return SunFontManager::installedNames;
}

bool SunFontManager::registerFont($Font* font) {
	$useLocalCurrentObjectStackCache();
	if (font == nullptr) {
		return false;
	}
	$synchronized(SunFontManager::regFamilyLock) {
		if (this->createdByFamilyName == nullptr) {
			$set(this, createdByFamilyName, $new($Hashtable));
			$set(this, createdByFullName, $new($Hashtable));
		}
	}
	if (!$nc($($FontAccess::getFontAccess()))->isCreatedFont(font)) {
		return false;
	}
	$var($HashSet, names, getInstalledNames());
	$var($Locale, l, getSystemStartupLocale());
	$var($String, familyName, $nc($($nc(font)->getFamily(l)))->toLowerCase());
	$var($String, fullName, $nc($(font->getFontName(l)))->toLowerCase());
	bool var$0 = $nc(names)->contains(familyName);
	if (var$0 || $nc(names)->contains(fullName)) {
		return false;
	}
	$var($Hashtable, familyTable, this->createdByFamilyName);
	$var($Hashtable, fullNameTable, this->createdByFullName);
	this->fontsAreRegistered = true;
	$var($Font2D, font2D, $FontUtilities::getFont2D(font));
	int32_t style = $nc(font2D)->getStyle();
	$var($FontFamily, family, $cast($FontFamily, $nc(familyTable)->get(familyName)));
	if (family == nullptr) {
		$assign(family, $new($FontFamily, $(font->getFamily(l))));
		familyTable->put(familyName, family);
	}
	if (this->fontsAreRegistered) {
		removeFromCache($($nc(family)->getFont($Font::PLAIN)));
		removeFromCache($($nc(family)->getFont($Font::BOLD)));
		removeFromCache($($nc(family)->getFont($Font::ITALIC)));
		removeFromCache($($nc(family)->getFont($Font::BOLD | $Font::ITALIC)));
		removeFromCache($cast($Font2D, $($nc(fullNameTable)->get(fullName))));
	}
	$nc(family)->setFont(font2D, style);
	$nc(fullNameTable)->put(fullName, font2D);
	return true;
}

void SunFontManager::removeFromCache($Font2D* font) {
	$useLocalCurrentObjectStackCache();
	if (font == nullptr) {
		return;
	}
	$var($StringArray, keys, $fcast($StringArray, $nc($($cast($ConcurrentHashMap$KeySetView, $nc(this->fontNameCache)->keySet())))->toArray(SunFontManager::STR_ARRAY)));
	for (int32_t k = 0; k < $nc(keys)->length; ++k) {
		if ($equals($nc(this->fontNameCache)->get(keys->get(k)), font)) {
			$nc(this->fontNameCache)->remove(keys->get(k));
		}
	}
}

$TreeMap* SunFontManager::getCreatedFontFamilyNames() {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, familyTable, nullptr);
	if (this->fontsAreRegistered) {
		$assign(familyTable, this->createdByFamilyName);
	} else {
		return nullptr;
	}
	$var($Locale, l, getSystemStartupLocale());
	$synchronized(familyTable) {
		$var($TreeMap, map, $new($TreeMap));
		{
			$var($Iterator, i$, $nc($($nc(familyTable)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($FontFamily, f, $cast($FontFamily, i$->next()));
				{
					$var($Font2D, font2D, $nc(f)->getFont($Font::PLAIN));
					if (font2D == nullptr) {
						$assign(font2D, f->getClosestStyle($Font::PLAIN));
					}
					$var($String, name, $nc(font2D)->getFamilyName(l));
					map->put($($nc(name)->toLowerCase(l)), name);
				}
			}
		}
		return map;
	}
}

$FontArray* SunFontManager::getCreatedFonts() {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, nameTable, nullptr);
	if (this->fontsAreRegistered) {
		$assign(nameTable, this->createdByFullName);
	} else {
		return nullptr;
	}
	$var($Locale, l, getSystemStartupLocale());
	$synchronized(nameTable) {
		$var($FontArray, fonts, $new($FontArray, $nc(nameTable)->size()));
		int32_t i = 0;
		{
			$var($Iterator, i$, $nc($(nameTable->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Font2D, font2D, $cast($Font2D, i$->next()));
				{
					fonts->set(i++, $$new($Font, $($nc(font2D)->getFontName(l)), $Font::PLAIN, 1));
				}
			}
		}
		return fonts;
	}
}

$StringArray* SunFontManager::getPlatformFontDirs(bool noType1Fonts) {
	$useLocalCurrentObjectStackCache();
	if (this->pathDirs != nullptr) {
		return this->pathDirs;
	}
	$var($String, path, getPlatformFontPath(noType1Fonts));
	$init($File);
	$var($StringTokenizer, parser, $new($StringTokenizer, path, $File::pathSeparator));
	$var($ArrayList, pathList, $new($ArrayList));
	try {
		while (parser->hasMoreTokens()) {
			pathList->add($(parser->nextToken()));
		}
	} catch ($NoSuchElementException&) {
		$catch();
	}
	$set(this, pathDirs, $fcast($StringArray, pathList->toArray($$new($StringArray, 0))));
	return this->pathDirs;
}

void SunFontManager::addDirFonts($String* dirName, $File* dirFile, $FilenameFilter* filter, int32_t fontFormat, bool useJavaRasterizer, int32_t fontRank, bool defer, bool resolveSymLinks) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, ls, $nc(dirFile)->list(filter));
	if (ls == nullptr || $nc(ls)->length == 0) {
		return;
	}
	$var($StringArray, fontNames, $new($StringArray, $nc(ls)->length));
	$var($StringArray2, nativeNames, $new($StringArray2, ls->length));
	int32_t fontCount = 0;
	for (int32_t i = 0; i < ls->length; ++i) {
		$var($File, theFile, $new($File, dirFile, ls->get(i)));
		$var($String, fullName, nullptr);
		if (resolveSymLinks) {
			try {
				$assign(fullName, theFile->getCanonicalPath());
			} catch ($IOException&) {
				$catch();
			}
		}
		if (fullName == nullptr) {
			$assign(fullName, $str({dirName, $File::separator, ls->get(i)}));
		}
		if ($nc(this->registeredFontFiles)->contains(fullName)) {
			continue;
		}
		if (this->badFonts != nullptr && $nc(this->badFonts)->contains(fullName)) {
			if ($FontUtilities::debugFonts()) {
				$FontUtilities::logWarning($$str({"skip bad font "_s, fullName}));
			}
			continue;
		}
		$nc(this->registeredFontFiles)->add(fullName);
		bool var$0 = $FontUtilities::debugFonts();
		$init($PlatformLogger$Level);
		if (var$0 && $nc($($FontUtilities::getLogger()))->isLoggable($PlatformLogger$Level::INFO)) {
			$var($String, message, $str({"Registering font "_s, fullName}));
			$var($StringArray, natNames, getNativeNames(fullName, nullptr));
			if (natNames == nullptr) {
				$plusAssign(message, " with no native name"_s);
			} else {
				$plusAssign(message, $$str({" with native name(s) "_s, $nc(natNames)->get(0)}));
				for (int32_t nn = 1; nn < natNames->length; ++nn) {
					$plusAssign(message, $$str({", "_s, natNames->get(nn)}));
				}
			}
			$FontUtilities::logInfo(message);
		}
		fontNames->set(fontCount, fullName);
		nativeNames->set(fontCount++, $(getNativeNames(fullName, nullptr)));
	}
	registerFonts(fontNames, nativeNames, fontCount, fontFormat, useJavaRasterizer, fontRank, defer);
	return;
}

$StringArray* SunFontManager::getNativeNames($String* fontFileName, $String* platformName) {
	return nullptr;
}

$String* SunFontManager::getFileNameFromPlatformName($String* platformFontName) {
	return $nc(this->fontConfig)->getFileNameFromPlatformName(platformFontName);
}

$FontConfiguration* SunFontManager::getFontConfiguration() {
	return this->fontConfig;
}

$String* SunFontManager::getPlatformFontPath(bool noType1Font) {
	if (this->fontPath == nullptr) {
		$set(this, fontPath, getFontPath(noType1Font));
	}
	return this->fontPath;
}

void SunFontManager::loadFonts() {
	$beforeCallerSensitive();
	if (this->discoveredAllFonts) {
		return;
	}
	$synchronized(this) {
		if ($FontUtilities::debugFonts()) {
			$Thread::dumpStack();
			$FontUtilities::logInfo("SunGraphicsEnvironment.loadFonts() called"_s);
		}
		initialiseDeferredFonts();
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunFontManager$9, this)));
	}
}

void SunFontManager::registerFontDirs($String* pathName) {
	return;
}

void SunFontManager::registerFontsOnPath($String* pathName, bool useJavaRasterizer, int32_t fontRank, bool defer, bool resolveSymLinks) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($StringTokenizer, parser, $new($StringTokenizer, pathName, $File::pathSeparator));
	try {
		while (parser->hasMoreTokens()) {
			registerFontsInDir($(parser->nextToken()), useJavaRasterizer, fontRank, defer, resolveSymLinks);
		}
	} catch ($NoSuchElementException&) {
		$catch();
	}
}

void SunFontManager::registerFontsInDir($String* dirName) {
	registerFontsInDir(dirName, true, $Font2D::JRE_RANK, true, false);
}

void SunFontManager::registerFontsInDir($String* dirName, bool useJavaRasterizer, int32_t fontRank, bool defer, bool resolveSymLinks) {
	$var($File, pathFile, $new($File, dirName));
	addDirFonts(dirName, pathFile, SunFontManager::ttFilter, SunFontManager::FONTFORMAT_TRUETYPE, useJavaRasterizer, fontRank == $Font2D::UNKNOWN_RANK ? $Font2D::TTF_RANK : fontRank, defer, resolveSymLinks);
	addDirFonts(dirName, pathFile, SunFontManager::t1Filter, SunFontManager::FONTFORMAT_TYPE1, useJavaRasterizer, fontRank == $Font2D::UNKNOWN_RANK ? $Font2D::TYPE1_RANK : fontRank, defer, resolveSymLinks);
}

void SunFontManager::registerFontDir($String* path) {
}

$String* SunFontManager::getDefaultFontFile() {
	$synchronized(this) {
		return this->defaultFontFileName;
	}
}

bool SunFontManager::useAbsoluteFontFileNames() {
	return true;
}

$String* SunFontManager::getDefaultFontFaceName() {
	$synchronized(this) {
		return this->defaultFontName;
	}
}

void SunFontManager::loadFontFiles() {
	$beforeCallerSensitive();
	loadFonts();
	if (this->loadedAllFontFiles) {
		return;
	}
	$synchronized(this) {
		if ($FontUtilities::debugFonts()) {
			$Thread::dumpStack();
			$FontUtilities::logInfo("loadAllFontFiles() called"_s);
		}
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunFontManager$10, this)));
	}
}

void SunFontManager::initCompositeFonts($FontConfiguration* fontConfig, $ConcurrentHashMap* altNameCache) {
	$useLocalCurrentObjectStackCache();
	if ($FontUtilities::isLogging()) {
		$FontUtilities::logInfo("Initialising composite fonts"_s);
	}
	int32_t numCoreFonts = $nc(fontConfig)->getNumberCoreFonts();
	$var($StringArray, fcFonts, fontConfig->getPlatformFontNames());
	for (int32_t f = 0; f < $nc(fcFonts)->length; ++f) {
		$var($String, platformFontName, fcFonts->get(f));
		$var($String, fontFileName, getFileNameFromPlatformName(platformFontName));
		$var($StringArray, nativeNames, nullptr);
		if (fontFileName == nullptr || $nc(fontFileName)->equals(platformFontName)) {
			$assign(fontFileName, platformFontName);
		} else {
			if (f < numCoreFonts) {
				addFontToPlatformFontPath(platformFontName);
			}
			$assign(nativeNames, getNativeNames(fontFileName, platformFontName));
		}
		registerFontFile(fontFileName, nativeNames, $Font2D::FONT_CONFIG_RANK, true);
	}
	registerPlatformFontsUsedByFontConfiguration();
	$var($CompositeFontDescriptorArray, compositeFontInfo, fontConfig->get2DCompositeFontInfo());
	for (int32_t i = 0; i < $nc(compositeFontInfo)->length; ++i) {
		$var($CompositeFontDescriptor, descriptor, compositeFontInfo->get(i));
		$var($StringArray, componentFileNames, $nc(descriptor)->getComponentFileNames());
		$var($StringArray, componentFaceNames, descriptor->getComponentFaceNames());
		if (SunFontManager::missingFontFiles != nullptr) {
			for (int32_t ii = 0; ii < $nc(componentFileNames)->length; ++ii) {
				if ($nc(SunFontManager::missingFontFiles)->contains(componentFileNames->get(ii))) {
					componentFileNames->set(ii, $(getDefaultFontFile()));
					$nc(componentFaceNames)->set(ii, $(getDefaultFontFaceName()));
				}
			}
		}
		if (altNameCache != nullptr) {
			$var($String, var$0, descriptor->getFaceName());
			$var($StringArray, var$1, componentFileNames);
			$var($StringArray, var$2, componentFaceNames);
			int32_t var$3 = descriptor->getCoreComponentCount();
			$var($ints, var$4, descriptor->getExclusionRanges());
			SunFontManager::registerCompositeFont(var$0, var$1, var$2, var$3, var$4, $(descriptor->getExclusionRangeLimits()), true, altNameCache);
		} else {
			$var($String, var$5, descriptor->getFaceName());
			$var($StringArray, var$6, componentFileNames);
			$var($StringArray, var$7, componentFaceNames);
			int32_t var$8 = descriptor->getCoreComponentCount();
			$var($ints, var$9, descriptor->getExclusionRanges());
			registerCompositeFont(var$5, var$6, var$7, var$8, var$9, $(descriptor->getExclusionRangeLimits()), true);
		}
		if ($FontUtilities::debugFonts()) {
			$FontUtilities::logInfo($$str({"registered "_s, $(descriptor->getFaceName())}));
		}
	}
}

void SunFontManager::addFontToPlatformFontPath($String* platformFontName) {
}

void SunFontManager::registerFontFile($String* fontFileName, $StringArray* nativeNames, int32_t fontRank, bool defer) {
	if ($nc(this->registeredFontFiles)->contains(fontFileName)) {
		return;
	}
	int32_t fontFormat = 0;
	if ($nc(SunFontManager::ttFilter)->accept(nullptr, fontFileName)) {
		fontFormat = SunFontManager::FONTFORMAT_TRUETYPE;
	} else if ($nc(SunFontManager::t1Filter)->accept(nullptr, fontFileName)) {
		fontFormat = SunFontManager::FONTFORMAT_TYPE1;
	} else {
		fontFormat = SunFontManager::FONTFORMAT_NATIVE;
	}
	$nc(this->registeredFontFiles)->add(fontFileName);
	if (defer) {
		registerDeferredFont(fontFileName, fontFileName, nativeNames, fontFormat, false, fontRank);
	} else {
		registerFontFile(fontFileName, nativeNames, fontFormat, false, fontRank);
	}
}

void SunFontManager::registerPlatformFontsUsedByFontConfiguration() {
}

void SunFontManager::addToMissingFontFileList($String* fileName) {
	if (SunFontManager::missingFontFiles == nullptr) {
		$assignStatic(SunFontManager::missingFontFiles, $new($HashSet));
	}
	$nc(SunFontManager::missingFontFiles)->add(fileName);
}

bool SunFontManager::isNameForRegisteredFile($String* fontName) {
	$var($String, fileName, getFileNameForFontName(fontName));
	if (fileName == nullptr) {
		return false;
	}
	return $nc(this->registeredFontFiles)->contains(fileName);
}

void SunFontManager::createCompositeFonts($ConcurrentHashMap* altNameCache, bool preferLocale, bool preferProportional) {
	$var($FontConfiguration, fontConfig, createFontConfiguration(preferLocale, preferProportional));
	initCompositeFonts(fontConfig, altNameCache);
}

$FontArray* SunFontManager::getAllInstalledFonts() {
	$useLocalCurrentObjectStackCache();
	if (this->allFonts == nullptr) {
		loadFonts();
		$var($TreeMap, fontMapNames, $new($TreeMap));
		$var($Font2DArray, allfonts, getRegisteredFonts());
		for (int32_t i = 0; i < $nc(allfonts)->length; ++i) {
			if (!($instanceOf($NativeFont, allfonts->get(i)))) {
				fontMapNames->put($($nc(allfonts->get(i))->getFontName(nullptr)), allfonts->get(i));
			}
		}
		$var($StringArray, platformNames, getFontNamesFromPlatform());
		if (platformNames != nullptr) {
			for (int32_t i = 0; i < platformNames->length; ++i) {
				if (!isNameForRegisteredFile(platformNames->get(i))) {
					fontMapNames->put(platformNames->get(i), nullptr);
				}
			}
		}
		$var($StringArray, fontNames, nullptr);
		if (fontMapNames->size() > 0) {
			$assign(fontNames, $new($StringArray, fontMapNames->size()));
			$var($ObjectArray, keyNames, $nc($(fontMapNames->keySet()))->toArray());
			for (int32_t i = 0; i < $nc(keyNames)->length; ++i) {
				fontNames->set(i, $cast($String, keyNames->get(i)));
			}
		}
		$var($FontArray, fonts, $new($FontArray, $nc(fontNames)->length));
		for (int32_t i = 0; i < fontNames->length; ++i) {
			fonts->set(i, $$new($Font, fontNames->get(i), $Font::PLAIN, 1));
			$var($Font2D, f2d, $cast($Font2D, fontMapNames->get(fontNames->get(i))));
			if (f2d != nullptr) {
				$nc($($FontAccess::getFontAccess()))->setFont2D(fonts->get(i), f2d->handle);
			}
		}
		$set(this, allFonts, fonts);
	}
	$var($FontArray, copyFonts, $new($FontArray, $nc(this->allFonts)->length));
	$System::arraycopy(this->allFonts, 0, copyFonts, 0, $nc(this->allFonts)->length);
	return copyFonts;
}

$StringArray* SunFontManager::getInstalledFontFamilyNames($Locale* requestedLocale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, requestedLocale, requestedLocale$renamed);
	if (requestedLocale == nullptr) {
		$assign(requestedLocale, $Locale::getDefault());
	}
	if (this->allFamilies != nullptr && this->lastDefaultLocale != nullptr && $nc(requestedLocale)->equals(this->lastDefaultLocale)) {
		$var($StringArray, copyFamilies, $new($StringArray, $nc(this->allFamilies)->length));
		$System::arraycopy(this->allFamilies, 0, copyFamilies, 0, $nc(this->allFamilies)->length);
		return copyFamilies;
	}
	$var($TreeMap, familyNames, $new($TreeMap));
	$var($String, str, nullptr);
	$init($Font);
	$assign(str, $Font::SERIF);
	familyNames->put($($nc(str)->toLowerCase()), str);
	$assign(str, $Font::SANS_SERIF);
	familyNames->put($($nc(str)->toLowerCase()), str);
	$assign(str, $Font::MONOSPACED);
	familyNames->put($($nc(str)->toLowerCase()), str);
	$assign(str, $Font::DIALOG);
	familyNames->put($($nc(str)->toLowerCase()), str);
	$assign(str, $Font::DIALOG_INPUT);
	familyNames->put($($nc(str)->toLowerCase()), str);
	bool var$0 = $nc(requestedLocale)->equals($(getSystemStartupLocale()));
	if (var$0 && getFamilyNamesFromPlatform(familyNames, requestedLocale)) {
		getJREFontFamilyNames(familyNames, requestedLocale);
	} else {
		loadFontFiles();
		$var($Font2DArray, physicalfonts, $fcast($Font2DArray, getPhysicalFonts()));
		for (int32_t i = 0; i < $nc(physicalfonts)->length; ++i) {
			if (!($instanceOf($NativeFont, physicalfonts->get(i)))) {
				$var($String, name, $nc(physicalfonts->get(i))->getFamilyName(requestedLocale));
				familyNames->put($($nc(name)->toLowerCase(requestedLocale)), name);
			}
		}
	}
	addNativeFontFamilyNames(familyNames, requestedLocale);
	$var($StringArray, retval, $new($StringArray, familyNames->size()));
	$var($ObjectArray, keyNames, $nc($(familyNames->keySet()))->toArray());
	for (int32_t i = 0; i < $nc(keyNames)->length; ++i) {
		retval->set(i, $cast($String, $(familyNames->get(keyNames->get(i)))));
	}
	if ($nc(requestedLocale)->equals($($Locale::getDefault()))) {
		$set(this, lastDefaultLocale, requestedLocale);
		$set(this, allFamilies, $new($StringArray, retval->length));
		$System::arraycopy(retval, 0, this->allFamilies, 0, $nc(this->allFamilies)->length);
	}
	return retval;
}

void SunFontManager::addNativeFontFamilyNames($TreeMap* familyNames, $Locale* requestedLocale) {
}

void SunFontManager::register1dot0Fonts() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunFontManager$11, this)));
}

void SunFontManager::getJREFontFamilyNames($TreeMap* familyNames, $Locale* requestedLocale) {
	$useLocalCurrentObjectStackCache();
	registerDeferredJREFonts(SunFontManager::jreFontDirName);
	$var($Font2DArray, physicalfonts, $fcast($Font2DArray, getPhysicalFonts()));
	for (int32_t i = 0; i < $nc(physicalfonts)->length; ++i) {
		if (!($instanceOf($NativeFont, physicalfonts->get(i)))) {
			$var($String, name, $nc(physicalfonts->get(i))->getFamilyName(requestedLocale));
			$nc(familyNames)->put($($nc(name)->toLowerCase(requestedLocale)), name);
		}
	}
}

$Locale* SunFontManager::getSystemStartupLocale() {
	$init(SunFontManager);
	$beforeCallerSensitive();
	if (SunFontManager::systemLocale == nullptr) {
		$assignStatic(SunFontManager::systemLocale, $cast($Locale, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SunFontManager$12)))));
	}
	return SunFontManager::systemLocale;
}

void SunFontManager::addToPool($FileFont* font) {
	$var($FileFont, fontFileToClose, nullptr);
	int32_t freeSlot = -1;
	$synchronized(this->fontFileCache) {
		for (int32_t i = 0; i < SunFontManager::CHANNELPOOLSIZE; ++i) {
			if ($nc(this->fontFileCache)->get(i) == font) {
				return;
			}
			if ($nc(this->fontFileCache)->get(i) == nullptr && freeSlot < 0) {
				freeSlot = i;
			}
		}
		if (freeSlot >= 0) {
			$nc(this->fontFileCache)->set(freeSlot, font);
			return;
		} else {
			$assign(fontFileToClose, $nc(this->fontFileCache)->get(this->lastPoolIndex));
			$nc(this->fontFileCache)->set(this->lastPoolIndex, font);
			this->lastPoolIndex = $mod((this->lastPoolIndex + 1), SunFontManager::CHANNELPOOLSIZE);
		}
	}
	if (fontFileToClose != nullptr) {
		fontFileToClose->close();
	}
}

$FontUIResource* SunFontManager::getFontConfigFUIR($String* family, int32_t style, int32_t size) {
	return $new($FontUIResource, family, style, size);
}

$Void* SunFontManager::lambda$createFont2D$1($Runnable* fileCloserRunnable) {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, rootTG, $ThreadGroupUtils::getRootThreadGroup());
	$set(this, fileCloser, $new($Thread, rootTG, fileCloserRunnable, "FileCloser"_s, 0, false));
	$nc(this->fileCloser)->setContextClassLoader(nullptr);
	$nc($($Runtime::getRuntime()))->addShutdownHook(this->fileCloser);
	return nullptr;
}

$Error* SunFontManager::lambda$getDefaultPhysicalFont$0() {
	$init(SunFontManager);
	return $new($Error, "Probable fatal error: No physical fonts found."_s);
}

void clinit$SunFontManager($Class* class$) {
	$assignStatic(SunFontManager::FONT_HANDLE_NULL, $new($Font2DHandle, nullptr));
	$assignStatic(SunFontManager::missingFontFiles, nullptr);
	$assignStatic(SunFontManager::ttFilter, $new($SunFontManager$TTFilter));
	$assignStatic(SunFontManager::t1Filter, $new($SunFontManager$T1Filter));
	$assignStatic(SunFontManager::STR_ARRAY, $new($StringArray, 0));
	SunFontManager::maxSoftRefCnt = 10;
	{
		SunFontManager::initStatic();
	}
	SunFontManager::gAltJAFont = false;
	$assignStatic(SunFontManager::installedNames, nullptr);
	$assignStatic(SunFontManager::regFamilyLock, $new($Object));
	$assignStatic(SunFontManager::systemLocale, nullptr);
}

SunFontManager::SunFontManager() {
}

$Class* SunFontManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0::classInfo$.name)) {
			return SunFontManager$$Lambda$lambda$getDefaultPhysicalFont$0::load$(name, initialize);
		}
		if (name->equals(SunFontManager$$Lambda$lambda$createFont2D$1$1::classInfo$.name)) {
			return SunFontManager$$Lambda$lambda$createFont2D$1$1::load$(name, initialize);
		}
	}
	$loadClass(SunFontManager, name, initialize, &_SunFontManager_ClassInfo_, clinit$SunFontManager, allocate$SunFontManager);
	return class$;
}

$Class* SunFontManager::class$ = nullptr;

	} // font
} // sun