#ifndef _sun_awt_FontConfiguration_h_
#define _sun_awt_FontConfiguration_h_
//$ class sun.awt.FontConfiguration
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_INT_ARRAY")
#undef EMPTY_INT_ARRAY
#pragma push_macro("EMPTY_SHORT_ARRAY")
#undef EMPTY_SHORT_ARRAY
#pragma push_macro("EMPTY_STRING_ARRAY")
#undef EMPTY_STRING_ARRAY
#pragma push_macro("HEAD_LENGTH")
#undef HEAD_LENGTH
#pragma push_macro("INDEX_TABLEEND")
#undef INDEX_TABLEEND
#pragma push_macro("NUM_FONTS")
#undef NUM_FONTS
#pragma push_macro("NUM_STYLES")
#undef NUM_STYLES
#pragma push_macro("UNDEFINED_COMPONENT_FONT")
#undef UNDEFINED_COMPONENT_FONT

namespace java {
	namespace io {
		class DataInputStream;
		class DataOutputStream;
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetEncoder;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
		class HashSet;
		class Hashtable;
		class Locale;
		class Set;
		class Vector;
	}
}
namespace sun {
	namespace awt {
		class FontDescriptor;
	}
}
namespace sun {
	namespace font {
		class CompositeFontDescriptor;
		class SunFontManager;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {

class $import FontConfiguration : public ::java::lang::Object {
	$class(FontConfiguration, 0, ::java::lang::Object)
public:
	FontConfiguration();
	void init$(::sun::font::SunFontManager* fm);
	void init$(::sun::font::SunFontManager* fm, bool preferLocaleFonts, bool preferPropFonts);
	virtual $Array<::sun::awt::FontDescriptor>* buildFontDescriptors(int32_t fontIndex, int32_t styleIndex);
	static bool contains($shorts* IDs, int16_t id, int32_t limit);
	static void dump();
	void findFontConfigFile();
	::java::io::File* findFontConfigFile($String* dir);
	::java::io::File* findImpl($String* fname);
	virtual bool fontFilesArePresent();
	virtual bool foundOsSpecificFile();
	virtual $Array<::sun::font::CompositeFontDescriptor>* get2DCompositeFontInfo();
	virtual ::java::util::HashSet* getAWTFontPathSet();
	static int32_t getArrayIndex($StringArray* names, $String* name);
	virtual $String* getCompatibilityFamilyName($String* fontName);
	static int16_t getComponentFileID(int16_t nameID);
	static $String* getComponentFileName(int16_t id);
	static int16_t getComponentFontID(int16_t scriptID, int32_t fontIndex, int32_t styleIndex);
	static int16_t getComponentFontIDMotif(int16_t scriptID, int32_t fontIndex, int32_t styleIndex);
	static $String* getComponentFontName(int16_t id);
	virtual $shorts* getCoreScripts(int32_t fontIndex);
	virtual ::java::nio::charset::Charset* getDefaultFontCharset($String* fontName) {return nullptr;}
	virtual $String* getEncoding($String* awtFontName, $String* characterSubsetName) {return nullptr;}
	static $ints* getExclusionRanges(int16_t scriptID);
	virtual $String* getExtraFontPath();
	virtual $String* getFaceNameFromComponentFontName($String* componentFontName) {return nullptr;}
	virtual $String* getFallbackFamilyName($String* fontName, $String* defaultFallback) {return nullptr;}
	static $shorts* getFallbackScripts();
	virtual $String* getFileNameFromComponentFontName($String* componentFontName) {return nullptr;}
	virtual $String* getFileNameFromPlatformName($String* platformName);
	::java::nio::charset::CharsetEncoder* getFontCharsetEncoder($String* charsetName, $String* fontName);
	static ::sun::awt::FontConfiguration* getFontConfiguration();
	virtual $Array<::sun::awt::FontDescriptor>* getFontDescriptors($String* fontName, int32_t style);
	$Array<::sun::awt::FontDescriptor>* getFontDescriptors(int32_t fontIndex, int32_t styleIndex);
	static int32_t getFontIndex($String* fontName);
	static $String* getFontName(int32_t fontIndex);
	int16_t getInitELC();
	virtual void getInstalledFallbackFonts($String* javaLib);
	static $String* getLogicalFontFaceName($String* familyName, int32_t style);
	virtual int32_t getNumberCoreFonts();
	virtual $StringArray* getPlatformFontNames();
	static $Object* getReorderSequence();
	static $String* getScriptName(int16_t scriptID);
	static $shorts* getShortArray(int16_t shortArrayID);
	static int16_t getShortArrayID($shorts* sa);
	static $String* getString(int16_t stringID);
	static int16_t getStringID($String* s);
	static int32_t getStyleIndex($String* styleName);
	static int32_t getStyleIndex(int32_t style);
	static $String* getStyleName(int32_t styleIndex);
	static $String* getStyleString(int32_t style);
	virtual $String* getVersion();
	static bool hasMonoToPropMap();
	virtual bool init();
	void initAllComponentFonts();
	void initFontConfig();
	virtual void initReorderMap() {}
	static bool isEmpty($shorts* a);
	static bool isLogicalFontFaceName($String* fontName);
	static bool isLogicalFontFaceNameLC($String* fontName);
	static bool isLogicalFontFamilyName($String* fontName);
	static bool isLogicalFontFamilyNameLC($String* fontName);
	static bool isLogicalFontStyleName($String* styleName);
	static void loadBinary(::java::io::InputStream* inStream);
	static void loadProperties(::java::io::InputStream* in);
	virtual $String* makeAWTFontName($String* platformFontName, $String* characterSubsetName);
	virtual $String* mapFileName($String* fileName);
	virtual bool needToSearchForFile($String* fileName);
	static void printTable($shorts* list, int32_t start);
	void readFontConfigFile(::java::io::File* f);
	static $shorts* readShortTable(::java::io::DataInputStream* in, int32_t len);
	int16_t remapLocaleMap(int32_t fontIndex, int32_t styleIndex, int16_t scriptID, int16_t fontID);
	int16_t remapProportional(int32_t fontIndex, int16_t id);
	void reorderSequenceForLocale($StringArray* seq);
	static void sanityCheck();
	static void saveBinary(::java::io::OutputStream* out);
	void setEncoding();
	virtual void setFontConfiguration();
	virtual void setOsNameAndVersion();
	void shuffle($StringArray* seq, int32_t src, int32_t dst);
	virtual $StringArray* split($String* sequence);
	static ::java::util::Vector* splitSequence($String* sequence);
	static $shorts* toList(::java::util::HashMap* map);
	static bool willReorderForStartupLocale();
	static void writeShortTable(::java::io::DataOutputStream* out, $shorts* data);
	static bool $assertionsDisabled;
	static $String* osVersion;
	static $String* osName;
	static $String* encoding;
	static ::java::util::Locale* startupLocale;
	static ::java::util::Hashtable* localeMap;
	static ::sun::awt::FontConfiguration* fontConfig;
	static ::sun::util::logging::PlatformLogger* logger;
	static bool isProperties;
	::sun::font::SunFontManager* fontManager = nullptr;
	bool preferLocaleFonts = false;
	bool preferPropFonts = false;
	::java::io::File* fontConfigFile = nullptr;
	bool foundOsSpecificFile$ = false;
	bool inited = false;
	$String* javaLib = nullptr;
	static int16_t stringIDNum;
	static $shorts* stringIDs;
	static ::java::lang::StringBuilder* stringTable;
	static bool verbose;
	int16_t initELC = 0;
	::java::util::Locale* initLocale = nullptr;
	$String* initEncoding = nullptr;
	$String* alphabeticSuffix = nullptr;
	$Array<int16_t, 3>* compFontNameIDs = nullptr;
	$Array<int32_t, 3>* compExclusions = nullptr;
	$ints* compCoreNum = nullptr;
	::java::util::Set* coreFontNameIDs = nullptr;
	::java::util::Set* fallbackFontNameIDs = nullptr;
	static const int32_t NUM_FONTS = 5;
	static const int32_t NUM_STYLES = 4;
	static $StringArray* fontNames;
	static $StringArray* publicFontNames;
	static $StringArray* styleNames;
	static $StringArray* installedFallbackFontFiles;
	::java::util::HashMap* reorderMap = nullptr;
	::java::util::Hashtable* charsetRegistry = nullptr;
	$Array<::sun::awt::FontDescriptor, 3>* fontDescriptors = nullptr;
	::java::util::HashMap* existsMap = nullptr;
	int32_t numCoreFonts = 0;
	$StringArray* componentFonts = nullptr;
	::java::util::HashMap* filenamesMap = nullptr;
	::java::util::HashSet* coreFontFileNames = nullptr;
	static const int32_t HEAD_LENGTH = 20;
	static const int32_t INDEX_scriptIDs = 0;
	static const int32_t INDEX_scriptFonts = 1;
	static const int32_t INDEX_elcIDs = 2;
	static const int32_t INDEX_sequences = 3;
	static const int32_t INDEX_fontfileNameIDs = 4;
	static const int32_t INDEX_componentFontNameIDs = 5;
	static const int32_t INDEX_filenames = 6;
	static const int32_t INDEX_awtfontpaths = 7;
	static const int32_t INDEX_exclusions = 8;
	static const int32_t INDEX_proportionals = 9;
	static const int32_t INDEX_scriptFontsMotif = 10;
	static const int32_t INDEX_alphabeticSuffix = 11;
	static const int32_t INDEX_stringIDs = 12;
	static const int32_t INDEX_stringTable = 13;
	static const int32_t INDEX_TABLEEND = 14;
	static const int32_t INDEX_fallbackScripts = 15;
	static const int32_t INDEX_appendedfontpath = 16;
	static const int32_t INDEX_version = 17;
	static $shorts* head;
	static $shorts* table_scriptIDs;
	static $shorts* table_scriptFonts;
	static $shorts* table_elcIDs;
	static $shorts* table_sequences;
	static $shorts* table_fontfileNameIDs;
	static $shorts* table_componentFontNameIDs;
	static $shorts* table_filenames;
	static $shorts* table_awtfontpaths;
	static $shorts* table_exclusions;
	static $shorts* table_proportionals;
	static $shorts* table_scriptFontsMotif;
	static $shorts* table_alphabeticSuffix;
	static $shorts* table_stringIDs;
	static $chars* table_stringTable;
	::java::util::HashMap* reorderScripts = nullptr;
	static $StringArray* stringCache;
	static $ints* EMPTY_INT_ARRAY;
	static $StringArray* EMPTY_STRING_ARRAY;
	static $shorts* EMPTY_SHORT_ARRAY;
	static $String* UNDEFINED_COMPONENT_FONT;
};

	} // awt
} // sun

#pragma pop_macro("EMPTY_INT_ARRAY")
#pragma pop_macro("EMPTY_SHORT_ARRAY")
#pragma pop_macro("EMPTY_STRING_ARRAY")
#pragma pop_macro("HEAD_LENGTH")
#pragma pop_macro("INDEX_TABLEEND")
#pragma pop_macro("NUM_FONTS")
#pragma pop_macro("NUM_STYLES")
#pragma pop_macro("UNDEFINED_COMPONENT_FONT")

#endif // _sun_awt_FontConfiguration_h_