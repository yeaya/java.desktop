#ifndef _sun_font_SunFontManager_h_
#define _sun_font_SunFontManager_h_
//$ class sun.font.SunFontManager
//$ extends sun.java2d.FontSupport
//$ implements sun.font.FontManagerForSGE

#include <java/lang/Array.h>
#include <sun/font/FontManagerForSGE.h>
#include <sun/java2d/FontSupport.h>

#pragma push_macro("CHANNELPOOLSIZE")
#undef CHANNELPOOLSIZE
#pragma push_macro("FONTFORMAT_COMPOSITE")
#undef FONTFORMAT_COMPOSITE
#pragma push_macro("FONTFORMAT_NATIVE")
#undef FONTFORMAT_NATIVE
#pragma push_macro("FONTFORMAT_NONE")
#undef FONTFORMAT_NONE
#pragma push_macro("FONTFORMAT_TRUETYPE")
#undef FONTFORMAT_TRUETYPE
#pragma push_macro("FONTFORMAT_TTC")
#undef FONTFORMAT_TTC
#pragma push_macro("FONTFORMAT_TYPE1")
#undef FONTFORMAT_TYPE1
#pragma push_macro("FONT_HANDLE_NULL")
#undef FONT_HANDLE_NULL
#pragma push_macro("STR_ARRAY")
#undef STR_ARRAY

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace io {
		class File;
		class FilenameFilter;
	}
}
namespace java {
	namespace lang {
		class Error;
		class Runnable;
		class Thread;
		class Void;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class HashMap;
		class HashSet;
		class Hashtable;
		class Locale;
		class TreeMap;
		class Vector;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class FontUIResource;
		}
	}
}
namespace sun {
	namespace awt {
		class FontConfiguration;
	}
}
namespace sun {
	namespace font {
		class CompositeFont;
		class CreatedFontTracker;
		class FileFont;
		class Font2D;
		class Font2DHandle;
		class PhysicalFont;
		class TrueTypeFont;
	}
}

namespace sun {
	namespace font {

class $export SunFontManager : public ::sun::java2d::FontSupport, public ::sun::font::FontManagerForSGE {
	$class(SunFontManager, 0, ::sun::java2d::FontSupport, ::sun::font::FontManagerForSGE)
public:
	SunFontManager();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void addCompositeToFontList(::sun::font::CompositeFont* f, int32_t rank);
	void addDirFonts($String* dirName, ::java::io::File* dirFile, ::java::io::FilenameFilter* filter, int32_t fontFormat, bool useJavaRasterizer, int32_t fontRank, bool defer, bool resolveSymLinks);
	virtual void addFontToPlatformFontPath($String* platformFontName);
	virtual void addNativeFontFamilyNames(::java::util::TreeMap* familyNames, ::java::util::Locale* requestedLocale);
	virtual ::sun::font::PhysicalFont* addToFontList(::sun::font::PhysicalFont* f, int32_t rank);
	virtual void addToMissingFontFileList($String* fileName);
	virtual void addToPool(::sun::font::FileFont* font);
	void checkForUnreferencedFontFiles();
	virtual void createCompositeFonts(::java::util::concurrent::ConcurrentHashMap* altNameCache, bool preferLocale, bool preferProportional);
	virtual $Array<::sun::font::Font2D>* createFont2D(::java::io::File* fontFile, int32_t fontFormat, bool all, bool isCopy, ::sun::font::CreatedFontTracker* tracker) override;
	virtual ::sun::awt::FontConfiguration* createFontConfiguration() {return nullptr;}
	virtual ::sun::awt::FontConfiguration* createFontConfiguration(bool preferLocaleFonts, bool preferPropFonts) {return nullptr;}
	virtual void deRegisterBadFont(::sun::font::Font2D* font2D) override;
	static $String* dotStyleStr(int32_t num);
	::sun::font::PhysicalFont* findDeferredFont($String* name, int32_t style);
	virtual ::sun::font::Font2D* findFont2D($String* name, int32_t style, int32_t fallback) override;
	::sun::font::Font2D* findFont2DAllLocales($String* name, int32_t style);
	::sun::font::Font2D* findFontFromPlatform($String* lcName, int32_t style);
	virtual ::sun::font::Font2D* findFontFromPlatformMap($String* lcName, int32_t style);
	virtual ::sun::font::PhysicalFont* findJREDeferredFont($String* name, int32_t style);
	::sun::font::PhysicalFont* findOtherDeferredFont($String* name, int32_t style);
	static bool fontSupportsEncoding(::java::awt::Font* font, $String* encoding);
	virtual $Array<::java::awt::Font>* getAllInstalledFonts() override;
	virtual ::java::util::TreeMap* getCreatedFontFamilyNames() override;
	virtual $Array<::java::awt::Font>* getCreatedFonts() override;
	virtual $String* getDefaultFontFaceName();
	virtual $String* getDefaultFontFile();
	virtual ::sun::font::Font2D* getDefaultLogicalFont(int32_t style);
	virtual ::sun::font::PhysicalFont* getDefaultPhysicalFont();
	virtual $StringArray* getDefaultPlatformFont() {return nullptr;}
	virtual ::sun::font::TrueTypeFont* getEUDCFont();
	virtual bool getFamilyNamesFromPlatform(::java::util::TreeMap* familyNames, ::java::util::Locale* requestedLocale);
	virtual $String* getFileNameForFontName($String* fontName);
	virtual $String* getFileNameFromPlatformName($String* platformFontName);
	virtual ::javax::swing::plaf::FontUIResource* getFontConfigFUIR($String* family, int32_t style, int32_t size);
	virtual ::sun::awt::FontConfiguration* getFontConfiguration() override;
	$StringArray* getFontFilesFromPath(bool noType1);
	virtual $StringArray* getFontNamesFromPlatform();
	virtual $String* getFontPath(bool noType1Fonts) {return nullptr;}
	virtual $String* getFullNameByFileName($String* fileName);
	::java::util::HashMap* getFullNameToFileMap();
	virtual $StringArray* getInstalledFontFamilyNames(::java::util::Locale* requestedLocale) override;
	static ::java::util::HashSet* getInstalledNames();
	static ::sun::font::SunFontManager* getInstance();
	static $String* getJDKFontDir();
	virtual void getJREFontFamilyNames(::java::util::TreeMap* familyNames, ::java::util::Locale* requestedLocale);
	virtual $StringArray* getNativeNames($String* fontFileName, $String* platformName);
	virtual ::sun::font::Font2DHandle* getNewComposite($String* family, int32_t style, ::sun::font::Font2DHandle* handle) override;
	virtual int32_t getNumFonts();
	$String* getPathName($String* s);
	virtual $Array<::sun::font::PhysicalFont>* getPhysicalFonts();
	virtual $StringArray* getPlatformFontDirs(bool noType1Fonts);
	virtual $String* getPlatformFontPath(bool noType1Font);
	virtual ::sun::font::PhysicalFont* getRegisteredFontFile($String* name);
	virtual $Array<::sun::font::Font2D>* getRegisteredFonts();
	static ::java::util::Locale* getSystemStartupLocale();
	virtual ::java::io::FilenameFilter* getTrueTypeFilter();
	virtual ::java::io::FilenameFilter* getType1Filter();
	virtual bool gotFontsFromPlatform();
	void initCompositeFonts(::sun::awt::FontConfiguration* fontConfig, ::java::util::concurrent::ConcurrentHashMap* altNameCache);
	static void initIDs();
	static void initStatic();
	virtual ::sun::font::PhysicalFont* initialiseDeferredFont($String* fileNameKey);
	virtual void initialiseDeferredFonts();
	virtual bool isDeferredFont($String* fileName);
	bool isNameForRegisteredFile($String* fontName);
	virtual bool isRegisteredFontFile($String* name);
	::java::lang::Void* lambda$createFont2D$1(::java::lang::Runnable* fileCloserRunnable);
	static ::java::lang::Error* lambda$getDefaultPhysicalFont$0();
	virtual void loadFontFiles();
	virtual void loadFonts();
	void loadLocaleNames();
	void logPlatformFontInfo();
	virtual void populateFontFileNameMap(::java::util::HashMap* fontToFileMap, ::java::util::HashMap* fontToFamilyNameMap, ::java::util::HashMap* familyToFontListMap, ::java::util::Locale* locale);
	virtual ::java::util::HashMap* populateHardcodedFileNameMap();
	virtual void preferLocaleFonts() override;
	virtual void preferProportionalFonts() override;
	virtual void register1dot0Fonts();
	virtual void registerCompositeFont($String* compositeName, $StringArray* componentFileNames, $StringArray* componentNames, int32_t numMetricsSlots, $ints* exclusionRanges, $ints* exclusionMaxIndex, bool defer);
	static void registerCompositeFont($String* compositeName, $StringArray* componentFileNames, $StringArray* componentNames, int32_t numMetricsSlots, $ints* exclusionRanges, $ints* exclusionMaxIndex, bool defer, ::java::util::concurrent::ConcurrentHashMap* altNameCache);
	virtual void registerDeferredFont($String* fileNameKey, $String* fullPathName, $StringArray* nativeNames, int32_t fontFormat, bool useJavaRasterizer, int32_t fontRank);
	virtual void registerDeferredJREFonts($String* jreDir);
	virtual bool registerFont(::java::awt::Font* font) override;
	virtual void registerFontDir($String* path);
	virtual void registerFontDirs($String* pathName);
	virtual ::sun::font::PhysicalFont* registerFontFile($String* fileName, $StringArray* nativeNames, int32_t fontFormat, bool useJavaRasterizer, int32_t fontRank);
	::sun::font::PhysicalFont* registerFontFile($String* file);
	virtual void registerFontFile($String* fontFileName, $StringArray* nativeNames, int32_t fontRank, bool defer);
	virtual void registerFonts($StringArray* fileNames, $Array<::java::lang::String, 2>* nativeNames, int32_t fontCount, int32_t fontFormat, bool useJavaRasterizer, int32_t fontRank, bool defer);
	virtual void registerFontsInDir($String* dirName);
	virtual void registerFontsInDir($String* dirName, bool useJavaRasterizer, int32_t fontRank, bool defer, bool resolveSymLinks);
	void registerFontsOnPath($String* pathName, bool useJavaRasterizer, int32_t fontRank, bool defer, bool resolveSymLinks);
	virtual void registerOtherFontFiles(::java::util::HashSet* registeredFontFiles);
	virtual void registerPlatformFontsUsedByFontConfiguration();
	void removeFromCache(::sun::font::Font2D* font);
	virtual void replaceFont(::sun::font::PhysicalFont* oldFont, ::sun::font::PhysicalFont* newFont);
	void resolveFontFiles(::java::util::HashSet* unmappedFiles, ::java::util::ArrayList* unmappedFonts);
	void resolveWindowsFonts();
	virtual $String* toString() override;
	virtual bool useAbsoluteFontFileNames();
	virtual void useAlternateFontforJALocales() override;
	virtual bool usePlatformFontMetrics();
	virtual bool usingAlternateCompositeFonts();
	virtual bool usingAlternateFontforJALocales();
	static ::sun::font::Font2DHandle* FONT_HANDLE_NULL;
	static const int32_t FONTFORMAT_NONE = (-1);
	static const int32_t FONTFORMAT_TRUETYPE = 0;
	static const int32_t FONTFORMAT_TYPE1 = 1;
	static const int32_t FONTFORMAT_TTC = 2;
	static const int32_t FONTFORMAT_COMPOSITE = 3;
	static const int32_t FONTFORMAT_NATIVE = 4;
	static const int32_t CHANNELPOOLSIZE = 20;
	$Array<::sun::font::FileFont>* fontFileCache = nullptr;
	int32_t lastPoolIndex = 0;
	int32_t maxCompFont = 0;
	$Array<::sun::font::CompositeFont>* compFonts = nullptr;
	::java::util::concurrent::ConcurrentHashMap* compositeFonts = nullptr;
	::java::util::concurrent::ConcurrentHashMap* physicalFonts = nullptr;
	::java::util::concurrent::ConcurrentHashMap* registeredFonts = nullptr;
	::java::util::concurrent::ConcurrentHashMap* fullNameToFont = nullptr;
	::java::util::HashMap* localeFullNamesToFont = nullptr;
	::sun::font::PhysicalFont* defaultPhysicalFont = nullptr;
	static bool longAddresses;
	bool loaded1dot0Fonts = false;
	bool loadedAllFonts = false;
	bool loadedAllFontFiles = false;
	$StringArray* jreOtherFontFiles = nullptr;
	bool noOtherJREFontFiles = false;
	static $String* jreLibDirName;
	static $String* jreFontDirName;
	static ::java::util::HashSet* missingFontFiles;
	$String* defaultFontName = nullptr;
	$String* defaultFontFileName = nullptr;
	::java::util::HashSet* registeredFontFiles = nullptr;
	::java::util::ArrayList* badFonts = nullptr;
	$String* fontPath = nullptr;
	::sun::awt::FontConfiguration* fontConfig = nullptr;
	bool discoveredAllFonts = false;
	static ::java::io::FilenameFilter* ttFilter;
	static ::java::io::FilenameFilter* t1Filter;
	$Array<::java::awt::Font>* allFonts = nullptr;
	$StringArray* allFamilies = nullptr;
	::java::util::Locale* lastDefaultLocale = nullptr;
	static bool noType1Font;
	static $StringArray* STR_ARRAY;
	bool usePlatformFontMetrics$ = false;
	static int32_t maxSoftRefCnt;
	::java::util::concurrent::ConcurrentHashMap* deferredFontFiles = nullptr;
	::java::util::concurrent::ConcurrentHashMap* initialisedFonts = nullptr;
	::java::util::HashMap* fontToFileMap = nullptr;
	::java::util::HashMap* fontToFamilyNameMap = nullptr;
	::java::util::HashMap* familyToFontListMap = nullptr;
	$StringArray* pathDirs = nullptr;
	bool haveCheckedUnreferencedFontFiles = false;
	static $volatile(::java::util::HashMap*) platformFontMap;
	::java::util::concurrent::ConcurrentHashMap* fontNameCache = nullptr;
	$Thread* fileCloser = nullptr;
	::java::util::Vector* tmpFontFiles = nullptr;
	int32_t createdFontCount = 0;
	bool _usingAlternateComposites = false;
	static bool gAltJAFont;
	bool gLocalePref = false;
	bool gPropPref = false;
	static ::java::util::HashSet* installedNames;
	static $Object* regFamilyLock;
	::java::util::Hashtable* createdByFamilyName = nullptr;
	::java::util::Hashtable* createdByFullName = nullptr;
	bool fontsAreRegistered = false;
	static ::java::util::Locale* systemLocale;
};

	} // font
} // sun

#pragma pop_macro("CHANNELPOOLSIZE")
#pragma pop_macro("FONTFORMAT_COMPOSITE")
#pragma pop_macro("FONTFORMAT_NATIVE")
#pragma pop_macro("FONTFORMAT_NONE")
#pragma pop_macro("FONTFORMAT_TRUETYPE")
#pragma pop_macro("FONTFORMAT_TTC")
#pragma pop_macro("FONTFORMAT_TYPE1")
#pragma pop_macro("FONT_HANDLE_NULL")
#pragma pop_macro("STR_ARRAY")

#endif // _sun_font_SunFontManager_h_