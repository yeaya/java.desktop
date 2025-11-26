#ifndef _sun_font_TrueTypeFont_h_
#define _sun_font_TrueTypeFont_h_
//$ class sun.font.TrueTypeFont
//$ extends sun.font.FileFont

#include <java/lang/Array.h>
#include <sun/font/FileFont.h>

#pragma push_macro("DIRECTORYENTRYSIZE")
#undef DIRECTORYENTRYSIZE
#pragma push_macro("DIRECTORYHEADERSIZE")
#undef DIRECTORYHEADERSIZE
#pragma push_macro("EMPTY_COMPATIBLE_LCIDS")
#undef EMPTY_COMPATIBLE_LCIDS
#pragma push_macro("ENGLISH_LOCALE_ID")
#undef ENGLISH_LOCALE_ID
#pragma push_macro("FAMILY_NAME_ID")
#undef FAMILY_NAME_ID
#pragma push_macro("FULL_NAME_ID")
#undef FULL_NAME_ID
#pragma push_macro("MACROMAN_ENGLISH_LANG")
#undef MACROMAN_ENGLISH_LANG
#pragma push_macro("MACROMAN_SPECIFIC_ID")
#undef MACROMAN_SPECIFIC_ID
#pragma push_macro("MAC_PLATFORM_ID")
#undef MAC_PLATFORM_ID
#pragma push_macro("MS_PLATFORM_ID")
#undef MS_PLATFORM_ID
#pragma push_macro("POSTSCRIPT_NAME_ID")
#undef POSTSCRIPT_NAME_ID
#pragma push_macro("TTCHEADERSIZE")
#undef TTCHEADERSIZE
#pragma push_macro("US_LCID")
#undef US_LCID

namespace java {
	namespace awt {
		namespace geom {
			class Point2D$Float;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}
namespace java {
	namespace util {
		class HashSet;
		class Locale;
		class Map;
	}
}
namespace sun {
	namespace font {
		class CharToGlyphMapper;
		class FontScaler;
		class TrueTypeFont$DirectoryEntry;
		class TrueTypeFont$TTDisposerRecord;
	}
}

namespace sun {
	namespace font {

class TrueTypeFont : public ::sun::font::FileFont {
	$class(TrueTypeFont, 0, ::sun::font::FileFont)
public:
	TrueTypeFont();
	using ::sun::font::FileFont::getFontMetrics;
	void init$($String* platname, Object$* nativeNames, int32_t fIndex, bool javaRasterizer);
	void init$($String* platname, Object$* nativeNames, int32_t fIndex, bool javaRasterizer, bool useFilePool);
	static void addLCIDMapEntry(::java::util::Map* map, $String* key, int16_t value);
	virtual void close() override;
	static void createLCIDLanguageCompatibilityMap();
	static void createLCIDMap();
	virtual $StringArray* getAllFamilyNames();
	virtual $StringArray* getAllFullNames();
	static $String* getCodePage();
	virtual ::sun::font::TrueTypeFont$DirectoryEntry* getDirectoryEntry(int32_t tag);
	virtual $String* getFamilyName(::java::util::Locale* locale) override;
	virtual int32_t getFontCount();
	virtual $String* getFontName(::java::util::Locale* locale) override;
	virtual $String* getFullName();
	$chars* getGaspTable();
	virtual ::java::awt::geom::Point2D$Float* getGlyphPoint(int64_t pScalerContext, int32_t glyphCode, int32_t ptNumber) override;
	static int16_t getLCIDFromLocale(::java::util::Locale* locale);
	static $shorts* getLanguageCompatibleLCIDsFromLocale(::java::util::Locale* locale);
	virtual ::sun::font::CharToGlyphMapper* getMapper() override;
	virtual $String* getPostscriptName() override;
	virtual ::sun::font::FontScaler* getScaler() override;
	virtual void getStyleMetrics(float pointSize, $floats* metrics, int32_t offset) override;
	virtual ::java::nio::ByteBuffer* getTableBuffer(int32_t tag);
	virtual $bytes* getTableBytes(int32_t tag) override;
	virtual int32_t getTableOffset(int32_t tag);
	virtual int32_t getTableSize(int32_t tag);
	virtual int32_t getWeight() override;
	virtual int32_t getWidth() override;
	virtual bool hasSupplementaryChars() override;
	virtual void init(int32_t fIndex);
	virtual void initAllNames(int32_t requestedID, ::java::util::HashSet* names);
	virtual void initNames();
	bool isLanguageCompatible(int16_t lcid);
	virtual $String* lookupName(int16_t findLocaleID, int32_t findNameID);
	$String* makeString($bytes* bytes, int32_t len, int16_t platformID, int16_t encoding);
	::java::nio::channels::FileChannel* open();
	::java::nio::channels::FileChannel* open(bool usePool);
	virtual int32_t readBlock(::java::nio::ByteBuffer* buffer, int32_t offset, int32_t length);
	virtual ::java::nio::ByteBuffer* readBlock(int32_t offset, int32_t length) override;
	virtual $bytes* readBytes(int32_t offset, int32_t length);
	void setCJKSupport(::java::nio::ByteBuffer* os2Table);
	void setStrikethroughMetrics(::java::nio::ByteBuffer* os_2Table, int32_t upem);
	virtual void setStyle() override;
	void setStyle(::java::nio::ByteBuffer* os_2Table);
	void setUnderlineMetrics(::java::nio::ByteBuffer* postTable, int32_t upem);
	virtual bool supportsEncoding($String* encoding) override;
	virtual bool supportsJA();
	virtual $String* toString() override;
	virtual bool useAAForPtSize(int32_t ptsize) override;
	virtual bool useEmbeddedBitmapsForSize(int32_t ptSize);
	void verify(bool usePool);
	static const int32_t cmapTag = 0x636D6170;
	static const int32_t glyfTag = 0x676C7966;
	static const int32_t headTag = 0x68656164;
	static const int32_t hheaTag = 0x68686561;
	static const int32_t hmtxTag = 0x686D7478;
	static const int32_t locaTag = 0x6C6F6361;
	static const int32_t maxpTag = 0x6D617870;
	static const int32_t nameTag = 0x6E616D65;
	static const int32_t postTag = 0x706F7374;
	static const int32_t os_2Tag = 0x4F532F32;
	static const int32_t GDEFTag = 0x47444546;
	static const int32_t GPOSTag = 0x47504F53;
	static const int32_t GSUBTag = 0x47535542;
	static const int32_t mortTag = 0x6D6F7274;
	static const int32_t morxTag = 0x6D6F7278;
	static const int32_t fdscTag = 0x66647363;
	static const int32_t fvarTag = 0x66766172;
	static const int32_t featTag = 0x66656174;
	static const int32_t EBLCTag = 0x45424C43;
	static const int32_t gaspTag = 0x67617370;
	static const int32_t ttcfTag = 0x74746366;
	static const int32_t v1ttTag = 0x00010000;
	static const int32_t trueTag = 0x74727565;
	static const int32_t ottoTag = 0x4F54544F;
	static const int32_t MAC_PLATFORM_ID = 1;
	static const int32_t MACROMAN_SPECIFIC_ID = 0;
	static const int32_t MACROMAN_ENGLISH_LANG = 0;
	static const int32_t MS_PLATFORM_ID = 3;
	static const int16_t ENGLISH_LOCALE_ID = 1033;
	static const int32_t FAMILY_NAME_ID = 1;
	static const int32_t FULL_NAME_ID = 4;
	static const int32_t POSTSCRIPT_NAME_ID = 6;
	static const int16_t US_LCID = 1033;
	static ::java::util::Map* lcidMap;
	::sun::font::TrueTypeFont$TTDisposerRecord* disposerRecord = nullptr;
	int32_t fontIndex = 0;
	int32_t directoryCount = 0;
	int32_t directoryOffset = 0;
	int32_t numTables = 0;
	$Array<::sun::font::TrueTypeFont$DirectoryEntry>* tableDirectory = nullptr;
	bool supportsJA$ = false;
	bool supportsCJK = false;
	::java::util::Locale* nameLocale = nullptr;
	$String* localeFamilyName = nullptr;
	$String* localeFullName = nullptr;
	int32_t fontDataSize = 0;
	static const int32_t TTCHEADERSIZE = 12;
	static const int32_t DIRECTORYHEADERSIZE = 12;
	static const int32_t DIRECTORYENTRYSIZE = 16;
	static $StringArray* encoding_mapping;
	static $Array<::java::lang::String, 2>* languages;
	static $StringArray* codePages;
	static $String* defaultCodePage;
	static const int32_t reserved_bits1 = 0x80000000;
	static const int32_t reserved_bits2 = 0x0000FFFF;
	int32_t fontWidth = 0;
	int32_t fontWeight = 0;
	static const int32_t fsSelectionItalicBit = 1;
	static const int32_t fsSelectionBoldBit = 32;
	static const int32_t fsSelectionRegularBit = 64;
	float stSize = 0.0;
	float stPos = 0.0;
	float ulSize = 0.0;
	float ulPos = 0.0;
	$chars* gaspTable = nullptr;
	static ::java::util::Map* lcidLanguageCompatibilityMap;
	static $shorts* EMPTY_COMPATIBLE_LCIDS;
	$shorts* languageCompatibleLCIDs = nullptr;
};

	} // font
} // sun

#pragma pop_macro("DIRECTORYENTRYSIZE")
#pragma pop_macro("DIRECTORYHEADERSIZE")
#pragma pop_macro("EMPTY_COMPATIBLE_LCIDS")
#pragma pop_macro("ENGLISH_LOCALE_ID")
#pragma pop_macro("FAMILY_NAME_ID")
#pragma pop_macro("FULL_NAME_ID")
#pragma pop_macro("MACROMAN_ENGLISH_LANG")
#pragma pop_macro("MACROMAN_SPECIFIC_ID")
#pragma pop_macro("MAC_PLATFORM_ID")
#pragma pop_macro("MS_PLATFORM_ID")
#pragma pop_macro("POSTSCRIPT_NAME_ID")
#pragma pop_macro("TTCHEADERSIZE")
#pragma pop_macro("US_LCID")

#endif // _sun_font_TrueTypeFont_h_