#include <sun/awt/FontConfiguration$PropertiesHandler.h>

#include <java/io/InputStream.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <sun/awt/FontConfiguration$PropertiesHandler$FontProperties.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/font/FontUtilities.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef EMPTY_INT_ARRAY
#undef EMPTY_SHORT_ARRAY
#undef EMPTY_STRING_ARRAY

using $ShortArray = $Array<::java::lang::Short>;
using $InputStream = ::java::io::InputStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $FontConfiguration$PropertiesHandler$FontProperties = ::sun::awt::FontConfiguration$PropertiesHandler$FontProperties;
using $FontUtilities = ::sun::font::FontUtilities;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {

$FieldInfo _FontConfiguration$PropertiesHandler_FieldInfo_[] = {
	{"scriptIDs", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, scriptIDs)},
	{"elcIDs", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, elcIDs)},
	{"componentFontNameIDs", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, componentFontNameIDs)},
	{"fontfileNameIDs", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, fontfileNameIDs)},
	{"logicalFontIDs", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, logicalFontIDs)},
	{"fontStyleIDs", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, fontStyleIDs)},
	{"filenames", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Short;Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, filenames)},
	{"sequences", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Short;[S>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, sequences)},
	{"scriptFonts", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Short;[Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, scriptFonts)},
	{"scriptAllfonts", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Short;Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, scriptAllfonts)},
	{"exclusions", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Short;[I>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, exclusions)},
	{"awtfontpaths", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Short;Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, awtfontpaths)},
	{"proportionals", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Short;Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, proportionals)},
	{"scriptAllfontsMotif", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Short;Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, scriptAllfontsMotif)},
	{"scriptFontsMotif", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Short;[Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, scriptFontsMotif)},
	{"alphabeticSuffix", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Short;Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration$PropertiesHandler, alphabeticSuffix)},
	{"fallbackScriptIDs", "[S", nullptr, $PRIVATE, $field(FontConfiguration$PropertiesHandler, fallbackScriptIDs)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FontConfiguration$PropertiesHandler, version)},
	{"appendedfontpath", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FontConfiguration$PropertiesHandler, appendedfontpath)},
	{}
};

$MethodInfo _FontConfiguration$PropertiesHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FontConfiguration$PropertiesHandler::*)()>(&FontConfiguration$PropertiesHandler::init$))},
	{"getID", "(Ljava/util/HashMap;Ljava/lang/String;)Ljava/lang/Short;", "(Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Short;>;Ljava/lang/String;)Ljava/lang/Short;", $PRIVATE, $method(static_cast<$Short*(FontConfiguration$PropertiesHandler::*)($HashMap*,$String*)>(&FontConfiguration$PropertiesHandler::getID))},
	{"initBinaryTable", "()V", nullptr, $PRIVATE, $method(static_cast<void(FontConfiguration$PropertiesHandler::*)()>(&FontConfiguration$PropertiesHandler::initBinaryTable))},
	{"initHashMaps", "()V", nullptr, $PRIVATE, $method(static_cast<void(FontConfiguration$PropertiesHandler::*)()>(&FontConfiguration$PropertiesHandler::initHashMaps))},
	{"initLogicalNameStyle", "()V", nullptr, $PRIVATE, $method(static_cast<void(FontConfiguration$PropertiesHandler::*)()>(&FontConfiguration$PropertiesHandler::initLogicalNameStyle))},
	{"load", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"parseExclusions", "(Ljava/lang/String;Ljava/lang/String;)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(FontConfiguration$PropertiesHandler::*)($String*,$String*)>(&FontConfiguration$PropertiesHandler::parseExclusions))},
	{"parseProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(FontConfiguration$PropertiesHandler::*)($String*,$String*)>(&FontConfiguration$PropertiesHandler::parseProperty))},
	{}
};

$InnerClassInfo _FontConfiguration$PropertiesHandler_InnerClassesInfo_[] = {
	{"sun.awt.FontConfiguration$PropertiesHandler", "sun.awt.FontConfiguration", "PropertiesHandler", $STATIC},
	{"sun.awt.FontConfiguration$PropertiesHandler$FontProperties", "sun.awt.FontConfiguration$PropertiesHandler", "FontProperties", 0},
	{}
};

$ClassInfo _FontConfiguration$PropertiesHandler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.FontConfiguration$PropertiesHandler",
	"java.lang.Object",
	nullptr,
	_FontConfiguration$PropertiesHandler_FieldInfo_,
	_FontConfiguration$PropertiesHandler_MethodInfo_,
	nullptr,
	nullptr,
	_FontConfiguration$PropertiesHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.FontConfiguration"
};

$Object* allocate$FontConfiguration$PropertiesHandler($Class* clazz) {
	return $of($alloc(FontConfiguration$PropertiesHandler));
}

void FontConfiguration$PropertiesHandler::init$() {
}

void FontConfiguration$PropertiesHandler::load($InputStream* in) {
	initLogicalNameStyle();
	initHashMaps();
	$var($FontConfiguration$PropertiesHandler$FontProperties, fp, $new($FontConfiguration$PropertiesHandler$FontProperties, this));
	fp->load(in);
	initBinaryTable();
}

void FontConfiguration$PropertiesHandler::initBinaryTable() {
	$useLocalCurrentObjectStackCache();
	$init($FontConfiguration);
	$assignStatic($FontConfiguration::head, $new($shorts, 20));
	$nc($FontConfiguration::head)->set(0, (int16_t)20);
	$assignStatic($FontConfiguration::table_scriptIDs, $FontConfiguration::toList(this->scriptIDs));
	$nc($FontConfiguration::head)->set(1, (int16_t)($nc($FontConfiguration::head)->get(0) + $nc($FontConfiguration::table_scriptIDs)->length));
	int32_t len = $nc($FontConfiguration::table_scriptIDs)->length + $nc(this->scriptFonts)->size() * 20;
	$assignStatic($FontConfiguration::table_scriptFonts, $new($shorts, len));
	{
		$var($Iterator, i$, $nc($($nc(this->scriptAllfonts)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				int32_t var$0 = $nc(($cast($Short, $($nc(entry)->getKey()))))->intValue();
				$nc($FontConfiguration::table_scriptFonts)->set(var$0, $nc(($cast($Short, $(entry->getValue()))))->shortValue());
			}
		}
	}
	int32_t off = $nc($FontConfiguration::table_scriptIDs)->length;
	{
		$var($Iterator, i$, $nc($($nc(this->scriptFonts)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$nc($FontConfiguration::table_scriptFonts)->set($nc(($cast($Short, $($nc(entry)->getKey()))))->intValue(), (int16_t)-off);
				$var($ShortArray, v, $cast($ShortArray, entry->getValue()));
				for (int32_t i = 0; i < 20; ++i) {
					if ($nc(v)->get(i) != nullptr) {
						$nc($FontConfiguration::table_scriptFonts)->set(off++, $nc(v->get(i))->shortValue());
					} else {
						$nc($FontConfiguration::table_scriptFonts)->set(off++, (int16_t)0);
					}
				}
			}
		}
	}
	$nc($FontConfiguration::head)->set(2, (int16_t)($nc($FontConfiguration::head)->get(1) + $nc($FontConfiguration::table_scriptFonts)->length));
	$assignStatic($FontConfiguration::table_elcIDs, $FontConfiguration::toList(this->elcIDs));
	$nc($FontConfiguration::head)->set(3, (int16_t)($nc($FontConfiguration::head)->get(2) + $nc($FontConfiguration::table_elcIDs)->length));
	$assignStatic($FontConfiguration::table_sequences, $new($shorts, $nc(this->elcIDs)->size() * 5));
	{
		$var($Iterator, i$, $nc($($nc(this->sequences)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				int32_t k = $nc(($cast($Short, $($nc(entry)->getKey()))))->intValue();
				$var($shorts, v, $cast($shorts, entry->getValue()));
				if ($nc(v)->length == 1) {
					for (int32_t i = 0; i < 5; ++i) {
						$nc($FontConfiguration::table_sequences)->set(k * 5 + i, v->get(0));
					}
				} else {
					for (int32_t i = 0; i < 5; ++i) {
						$nc($FontConfiguration::table_sequences)->set(k * 5 + i, v->get(i));
					}
				}
			}
		}
	}
	$nc($FontConfiguration::head)->set(4, (int16_t)($nc($FontConfiguration::head)->get(3) + $nc($FontConfiguration::table_sequences)->length));
	$assignStatic($FontConfiguration::table_fontfileNameIDs, $FontConfiguration::toList(this->fontfileNameIDs));
	$nc($FontConfiguration::head)->set(5, (int16_t)($nc($FontConfiguration::head)->get(4) + $nc($FontConfiguration::table_fontfileNameIDs)->length));
	$assignStatic($FontConfiguration::table_componentFontNameIDs, $FontConfiguration::toList(this->componentFontNameIDs));
	$nc($FontConfiguration::head)->set(6, (int16_t)($nc($FontConfiguration::head)->get(5) + $nc($FontConfiguration::table_componentFontNameIDs)->length));
	$assignStatic($FontConfiguration::table_filenames, $new($shorts, $nc($FontConfiguration::table_componentFontNameIDs)->length));
	$Arrays::fill($FontConfiguration::table_filenames, (int16_t)-1);
	{
		$var($Iterator, i$, $nc($($nc(this->filenames)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				int16_t var$1 = $nc(($cast($Short, $($nc(entry)->getKey()))))->shortValue();
				$nc($FontConfiguration::table_filenames)->set(var$1, $nc(($cast($Short, $(entry->getValue()))))->shortValue());
			}
		}
	}
	$nc($FontConfiguration::head)->set(7, (int16_t)($nc($FontConfiguration::head)->get(6) + $nc($FontConfiguration::table_filenames)->length));
	$assignStatic($FontConfiguration::table_awtfontpaths, $new($shorts, $nc($FontConfiguration::table_scriptIDs)->length));
	{
		$var($Iterator, i$, $nc($($nc(this->awtfontpaths)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				int16_t var$2 = $nc(($cast($Short, $($nc(entry)->getKey()))))->shortValue();
				$nc($FontConfiguration::table_awtfontpaths)->set(var$2, $nc(($cast($Short, $(entry->getValue()))))->shortValue());
			}
		}
	}
	$nc($FontConfiguration::head)->set(8, (int16_t)($nc($FontConfiguration::head)->get(7) + $nc($FontConfiguration::table_awtfontpaths)->length));
	$assignStatic($FontConfiguration::table_exclusions, $new($shorts, $nc(this->scriptIDs)->size()));
	{
		$var($Iterator, i$, $nc($($nc(this->exclusions)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($ints, exI, $cast($ints, $nc(entry)->getValue()));
				$var($chars, exC, $new($chars, $nc(exI)->length * 2));
				int32_t j = 0;
				for (int32_t i = 0; i < exI->length; ++i) {
					exC->set(j++, (char16_t)(exI->get(i) >> 16));
					exC->set(j++, (char16_t)((int32_t)(exI->get(i) & (uint32_t)0x0000FFFF)));
				}
				int16_t var$3 = $nc(($cast($Short, $(entry->getKey()))))->shortValue();
				$nc($FontConfiguration::table_exclusions)->set(var$3, $FontConfiguration::getStringID($$new($String, exC)));
			}
		}
	}
	$nc($FontConfiguration::head)->set(9, (int16_t)($nc($FontConfiguration::head)->get(8) + $nc($FontConfiguration::table_exclusions)->length));
	$assignStatic($FontConfiguration::table_proportionals, $new($shorts, $nc(this->proportionals)->size() * 2));
	int32_t j = 0;
	{
		$var($Iterator, i$, $nc($($nc(this->proportionals)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$nc($FontConfiguration::table_proportionals)->set(j++, $nc(($cast($Short, $($nc(entry)->getKey()))))->shortValue());
				$nc($FontConfiguration::table_proportionals)->set(j++, $nc(($cast($Short, $(entry->getValue()))))->shortValue());
			}
		}
	}
	$nc($FontConfiguration::head)->set(10, (int16_t)($nc($FontConfiguration::head)->get(9) + $nc($FontConfiguration::table_proportionals)->length));
	bool var$4 = $nc(this->scriptAllfontsMotif)->size() != 0;
	if (var$4 || $nc(this->scriptFontsMotif)->size() != 0) {
		len = $nc($FontConfiguration::table_scriptIDs)->length + $nc(this->scriptFontsMotif)->size() * 20;
		$assignStatic($FontConfiguration::table_scriptFontsMotif, $new($shorts, len));
		{
			$var($Iterator, i$, $nc($($nc(this->scriptAllfontsMotif)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					int32_t var$5 = $nc(($cast($Short, $($nc(entry)->getKey()))))->intValue();
					$nc($FontConfiguration::table_scriptFontsMotif)->set(var$5, $nc(($cast($Short, $(entry->getValue()))))->shortValue());
				}
			}
		}
		off = $nc($FontConfiguration::table_scriptIDs)->length;
		{
			$var($Iterator, i$, $nc($($nc(this->scriptFontsMotif)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$nc($FontConfiguration::table_scriptFontsMotif)->set($nc(($cast($Short, $($nc(entry)->getKey()))))->intValue(), (int16_t)-off);
					$var($ShortArray, v, $cast($ShortArray, entry->getValue()));
					int32_t i = 0;
					while (i < 20) {
						if ($nc(v)->get(i) != nullptr) {
							$nc($FontConfiguration::table_scriptFontsMotif)->set(off++, $nc(v->get(i))->shortValue());
						} else {
							$nc($FontConfiguration::table_scriptFontsMotif)->set(off++, (int16_t)0);
						}
						++i;
					}
				}
			}
		}
	} else {
		$assignStatic($FontConfiguration::table_scriptFontsMotif, $FontConfiguration::EMPTY_SHORT_ARRAY);
	}
	$nc($FontConfiguration::head)->set(11, (int16_t)($nc($FontConfiguration::head)->get(10) + $nc($FontConfiguration::table_scriptFontsMotif)->length));
	$assignStatic($FontConfiguration::table_alphabeticSuffix, $new($shorts, $nc(this->alphabeticSuffix)->size() * 2));
	j = 0;
	{
		$var($Iterator, i$, $nc($($nc(this->alphabeticSuffix)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$nc($FontConfiguration::table_alphabeticSuffix)->set(j++, $nc(($cast($Short, $($nc(entry)->getKey()))))->shortValue());
				$nc($FontConfiguration::table_alphabeticSuffix)->set(j++, $nc(($cast($Short, $(entry->getValue()))))->shortValue());
			}
		}
	}
	$nc($FontConfiguration::head)->set(15, $FontConfiguration::getShortArrayID(this->fallbackScriptIDs));
	$nc($FontConfiguration::head)->set(16, $FontConfiguration::getStringID(this->appendedfontpath));
	$nc($FontConfiguration::head)->set(17, $FontConfiguration::getStringID(this->version));
	$nc($FontConfiguration::head)->set(12, (int16_t)($nc($FontConfiguration::head)->get(11) + $nc($FontConfiguration::table_alphabeticSuffix)->length));
	$assignStatic($FontConfiguration::table_stringIDs, $new($shorts, $FontConfiguration::stringIDNum + 1));
	$System::arraycopy($FontConfiguration::stringIDs, 0, $FontConfiguration::table_stringIDs, 0, $FontConfiguration::stringIDNum + 1);
	$nc($FontConfiguration::head)->set(13, (int16_t)($nc($FontConfiguration::head)->get(12) + $FontConfiguration::stringIDNum + 1));
	$assignStatic($FontConfiguration::table_stringTable, $nc($($nc($FontConfiguration::stringTable)->toString()))->toCharArray());
	$nc($FontConfiguration::head)->set(14, (int16_t)($nc($FontConfiguration::head)->get(13) + $nc($FontConfiguration::stringTable)->length()));
	$assignStatic($FontConfiguration::stringCache, $new($StringArray, $nc($FontConfiguration::table_stringIDs)->length));
}

void FontConfiguration$PropertiesHandler::initLogicalNameStyle() {
	$useLocalCurrentObjectStackCache();
	$set(this, logicalFontIDs, $new($HashMap));
	$set(this, fontStyleIDs, $new($HashMap));
	$nc(this->logicalFontIDs)->put("serif"_s, $($Integer::valueOf(0)));
	$nc(this->logicalFontIDs)->put("sansserif"_s, $($Integer::valueOf(1)));
	$nc(this->logicalFontIDs)->put("monospaced"_s, $($Integer::valueOf(2)));
	$nc(this->logicalFontIDs)->put("dialog"_s, $($Integer::valueOf(3)));
	$nc(this->logicalFontIDs)->put("dialoginput"_s, $($Integer::valueOf(4)));
	$nc(this->fontStyleIDs)->put("plain"_s, $($Integer::valueOf(0)));
	$nc(this->fontStyleIDs)->put("bold"_s, $($Integer::valueOf(1)));
	$nc(this->fontStyleIDs)->put("italic"_s, $($Integer::valueOf(2)));
	$nc(this->fontStyleIDs)->put("bolditalic"_s, $($Integer::valueOf(3)));
}

void FontConfiguration$PropertiesHandler::initHashMaps() {
	$set(this, scriptIDs, $new($HashMap));
	$set(this, elcIDs, $new($HashMap));
	$set(this, componentFontNameIDs, $new($HashMap));
	$nc(this->componentFontNameIDs)->put(""_s, $($Short::valueOf((int16_t)0)));
	$set(this, fontfileNameIDs, $new($HashMap));
	$set(this, filenames, $new($HashMap));
	$set(this, sequences, $new($HashMap));
	$set(this, scriptFonts, $new($HashMap));
	$set(this, scriptAllfonts, $new($HashMap));
	$set(this, exclusions, $new($HashMap));
	$set(this, awtfontpaths, $new($HashMap));
	$set(this, proportionals, $new($HashMap));
	$set(this, scriptFontsMotif, $new($HashMap));
	$set(this, scriptAllfontsMotif, $new($HashMap));
	$set(this, alphabeticSuffix, $new($HashMap));
	$init($FontConfiguration);
	$set(this, fallbackScriptIDs, $FontConfiguration::EMPTY_SHORT_ARRAY);
}

$ints* FontConfiguration$PropertiesHandler::parseExclusions($String* key, $String* exclusions) {
	$useLocalCurrentObjectStackCache();
	if (exclusions == nullptr) {
		$init($FontConfiguration);
		return $FontConfiguration::EMPTY_INT_ARRAY;
	}
	int32_t numExclusions = 1;
	int32_t pos = 0;
	while ((pos = $nc(exclusions)->indexOf((int32_t)u',', pos)) != -1) {
		++numExclusions;
		++pos;
	}
	$var($ints, exclusionRanges, $new($ints, numExclusions * 2));
	pos = 0;
	int32_t newPos = 0;
	for (int32_t j = 0; j < numExclusions * 2;) {
		$var($String, lower, nullptr);
		$var($String, upper, nullptr);
		int32_t lo = 0;
		int32_t up = 0;
		try {
			newPos = $nc(exclusions)->indexOf((int32_t)u'-', pos);
			$assign(lower, exclusions->substring(pos, newPos));
			pos = newPos + 1;
			newPos = exclusions->indexOf((int32_t)u',', pos);
			if (newPos == -1) {
				newPos = exclusions->length();
			}
			$assign(upper, exclusions->substring(pos, newPos));
			pos = newPos + 1;
			int32_t lowerLength = lower->length();
			int32_t upperLength = upper->length();
			if (lowerLength != 4 && lowerLength != 6 || upperLength != 4 && upperLength != 6) {
				$throwNew($Exception);
			}
			lo = $Integer::parseInt(lower, 16);
			up = $Integer::parseInt(upper, 16);
			if (lo > up) {
				$throwNew($Exception);
			}
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$init($FontConfiguration);
			if ($FontUtilities::debugFonts() && $FontConfiguration::logger != nullptr) {
				$nc($FontConfiguration::logger)->config($$str({"Failed parsing "_s, key, " property of font configuration."_s}));
			}
			return $FontConfiguration::EMPTY_INT_ARRAY;
		}
		exclusionRanges->set(j++, lo);
		exclusionRanges->set(j++, up);
	}
	return exclusionRanges;
}

$Short* FontConfiguration$PropertiesHandler::getID($HashMap* map, $String* key) {
	$useLocalCurrentObjectStackCache();
	$var($Short, ret, $cast($Short, $nc(map)->get(key)));
	if (ret == nullptr) {
		map->put(key, $($Short::valueOf((int16_t)map->size())));
		return $cast($Short, map->get(key));
	}
	return ret;
}

void FontConfiguration$PropertiesHandler::parseProperty($String* key$renamed, $String* value) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, key$renamed);
	if ($nc(key)->startsWith("filename."_s)) {
		$assign(key, key->substring(9));
		if (!"MingLiU_HKSCS"_s->equals(key)) {
			$assign(key, key->replace(u'_', u' '));
		}
		$var($Short, faceID, getID(this->componentFontNameIDs, key));
		$var($Short, fileID, getID(this->fontfileNameIDs, value));
		$nc(this->filenames)->put(faceID, fileID);
	} else if (key->startsWith("exclusion."_s)) {
		$assign(key, key->substring(10));
		$var($Object, var$0, $of(getID(this->scriptIDs, key)));
		$nc(this->exclusions)->put(var$0, $(parseExclusions(key, value)));
	} else if (key->startsWith("sequence."_s)) {
		$assign(key, key->substring(9));
		bool hasDefault = false;
		bool has1252 = false;
		$init($FontConfiguration);
		$var($StringArray, ss, $fcast($StringArray, $nc($($FontConfiguration::splitSequence(value)))->toArray($FontConfiguration::EMPTY_STRING_ARRAY)));
		$var($shorts, sa, $new($shorts, $nc(ss)->length));
		for (int32_t i = 0; i < ss->length; ++i) {
			if ("alphabetic/default"_s->equals(ss->get(i))) {
				ss->set(i, "alphabetic"_s);
				hasDefault = true;
			} else if ("alphabetic/1252"_s->equals(ss->get(i))) {
				ss->set(i, "alphabetic"_s);
				has1252 = true;
			}
			sa->set(i, $nc($(getID(this->scriptIDs, ss->get(i))))->shortValue());
		}
		int16_t scriptArrayID = $FontConfiguration::getShortArrayID(sa);
		$var($Short, elcID, nullptr);
		int32_t dot = key->indexOf((int32_t)u'.');
		if (dot == -1) {
			if ("fallback"_s->equals(key)) {
				$set(this, fallbackScriptIDs, sa);
				return;
			}
			if ("allfonts"_s->equals(key)) {
				$assign(elcID, getID(this->elcIDs, "NULL.NULL.NULL"_s));
			} else {
				if ($FontConfiguration::logger != nullptr) {
					$nc($FontConfiguration::logger)->config($$str({"Error sequence def: <sequence."_s, key, ">"_s}));
				}
				return;
			}
		} else {
			$assign(elcID, getID(this->elcIDs, $(key->substring(dot + 1))));
			$assign(key, key->substring(0, dot));
		}
		$var($shorts, scriptArrayIDs, nullptr);
		if ("allfonts"_s->equals(key)) {
			$assign(scriptArrayIDs, $new($shorts, 1));
			scriptArrayIDs->set(0, scriptArrayID);
		} else {
			$assign(scriptArrayIDs, $cast($shorts, $nc(this->sequences)->get(elcID)));
			if (scriptArrayIDs == nullptr) {
				$assign(scriptArrayIDs, $new($shorts, 5));
			}
			$var($Integer, fid, $cast($Integer, $nc(this->logicalFontIDs)->get(key)));
			if (fid == nullptr) {
				if ($FontConfiguration::logger != nullptr) {
					$nc($FontConfiguration::logger)->config($$str({"Unrecognizable logicfont name "_s, key}));
				}
				return;
			}
			$nc(scriptArrayIDs)->set($nc(fid)->intValue(), scriptArrayID);
		}
		$nc(this->sequences)->put(elcID, scriptArrayIDs);
		if (hasDefault) {
			$nc(this->alphabeticSuffix)->put(elcID, $($Short::valueOf($FontConfiguration::getStringID("default"_s))));
		} else if (has1252) {
			$nc(this->alphabeticSuffix)->put(elcID, $($Short::valueOf($FontConfiguration::getStringID("1252"_s))));
		}
	} else if (key->startsWith("allfonts."_s)) {
		$assign(key, key->substring(9));
		if (key->endsWith(".motif"_s)) {
			$assign(key, key->substring(0, key->length() - 6));
			$var($Object, var$1, $of(getID(this->scriptIDs, key)));
			$nc(this->scriptAllfontsMotif)->put(var$1, $(getID(this->componentFontNameIDs, value)));
		} else {
			$var($Object, var$2, $of(getID(this->scriptIDs, key)));
			$nc(this->scriptAllfonts)->put(var$2, $(getID(this->componentFontNameIDs, value)));
		}
	} else if (key->startsWith("awtfontpath."_s)) {
		$assign(key, key->substring(12));
		$var($Object, var$3, $of(getID(this->scriptIDs, key)));
		$nc(this->awtfontpaths)->put(var$3, $($Short::valueOf($FontConfiguration::getStringID(value))));
	} else if ("version"_s->equals(key)) {
		$set(this, version, value);
	} else if ("appendedfontpath"_s->equals(key)) {
		$set(this, appendedfontpath, value);
	} else if (key->startsWith("proportional."_s)) {
		$assign(key, $(key->substring(13))->replace(u'_', u' '));
		$var($Object, var$4, $of(getID(this->componentFontNameIDs, key)));
		$nc(this->proportionals)->put(var$4, $(getID(this->componentFontNameIDs, value)));
	} else {
		int32_t dot1 = 0;
		int32_t dot2 = 0;
		bool isMotif = false;
		dot1 = key->indexOf((int32_t)u'.');
		if (dot1 == -1) {
			$init($FontConfiguration);
			if ($FontConfiguration::logger != nullptr) {
				$nc($FontConfiguration::logger)->config($$str({"Failed parsing "_s, key, " property of font configuration."_s}));
			}
			return;
		}
		dot2 = key->indexOf((int32_t)u'.', dot1 + 1);
		if (dot2 == -1) {
			$init($FontConfiguration);
			if ($FontConfiguration::logger != nullptr) {
				$nc($FontConfiguration::logger)->config($$str({"Failed parsing "_s, key, " property of font configuration."_s}));
			}
			return;
		}
		if (key->endsWith(".motif"_s)) {
			$assign(key, key->substring(0, key->length() - 6));
			isMotif = true;
		}
		$var($Integer, nameID, $cast($Integer, $nc(this->logicalFontIDs)->get($(key->substring(0, dot1)))));
		$var($Integer, styleID, $cast($Integer, $nc(this->fontStyleIDs)->get($(key->substring(dot1 + 1, dot2)))));
		$var($Short, scriptID, getID(this->scriptIDs, $(key->substring(dot2 + 1))));
		if (nameID == nullptr || styleID == nullptr) {
			$init($FontConfiguration);
			if ($FontConfiguration::logger != nullptr) {
				$nc($FontConfiguration::logger)->config($$str({"unrecognizable logicfont name/style at "_s, key}));
			}
			return;
		}
		$var($ShortArray, pnids, nullptr);
		if (isMotif) {
			$assign(pnids, $cast($ShortArray, $nc(this->scriptFontsMotif)->get(scriptID)));
		} else {
			$assign(pnids, $cast($ShortArray, $nc(this->scriptFonts)->get(scriptID)));
		}
		if (pnids == nullptr) {
			$assign(pnids, $new($ShortArray, 20));
		}
		int32_t var$6 = $nc(nameID)->intValue() * 4;
		int32_t var$5 = var$6 + $nc(styleID)->intValue();
		$nc(pnids)->set(var$5, $(getID(this->componentFontNameIDs, value)));
		if (isMotif) {
			$nc(this->scriptFontsMotif)->put(scriptID, pnids);
		} else {
			$nc(this->scriptFonts)->put(scriptID, pnids);
		}
	}
}

FontConfiguration$PropertiesHandler::FontConfiguration$PropertiesHandler() {
}

$Class* FontConfiguration$PropertiesHandler::load$($String* name, bool initialize) {
	$loadClass(FontConfiguration$PropertiesHandler, name, initialize, &_FontConfiguration$PropertiesHandler_ClassInfo_, allocate$FontConfiguration$PropertiesHandler);
	return class$;
}

$Class* FontConfiguration$PropertiesHandler::class$ = nullptr;

	} // awt
} // sun