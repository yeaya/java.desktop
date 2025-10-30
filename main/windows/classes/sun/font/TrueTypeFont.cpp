#include <sun/font/TrueTypeFont.h>

#include <java/awt/Font.h>
#include <java/awt/FontFormatException.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/IntBuffer.h>
#include <java/nio/ShortBuffer.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <sun/awt/SunToolkit.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/FileFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/font/FontScaler.h>
#include <sun/font/FontScalerException.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/SunFontManager.h>
#include <sun/font/TrueTypeFont$1.h>
#include <sun/font/TrueTypeFont$DirectoryEntry.h>
#include <sun/font/TrueTypeFont$TTDisposerRecord.h>
#include <sun/font/TrueTypeGlyphMapper.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BOLD
#undef DIRECTORYENTRYSIZE
#undef DIRECTORYHEADERSIZE
#undef EMPTY_COMPATIBLE_LCIDS
#undef ENGLISH_LOCALE_ID
#undef FAMILY_NAME_ID
#undef FULL_NAME_ID
#undef ITALIC
#undef MACROMAN_ENGLISH_LANG
#undef MACROMAN_SPECIFIC_ID
#undef MAC_PLATFORM_ID
#undef MS_PLATFORM_ID
#undef POSTSCRIPT_NAME_ID
#undef TTCHEADERSIZE
#undef TTF_RANK
#undef US
#undef US_LCID

using $TrueTypeFont$DirectoryEntryArray = $Array<::sun::font::TrueTypeFont$DirectoryEntry>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $Font = ::java::awt::Font;
using $FontFormatException = ::java::awt::FontFormatException;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $IOException = ::java::io::IOException;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Short = ::java::lang::Short;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $IntBuffer = ::java::nio::IntBuffer;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $FileFont = ::sun::font::FileFont;
using $Font2D = ::sun::font::Font2D;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $FontScaler = ::sun::font::FontScaler;
using $FontScalerException = ::sun::font::FontScalerException;
using $FontUtilities = ::sun::font::FontUtilities;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $SunFontManager = ::sun::font::SunFontManager;
using $TrueTypeFont$1 = ::sun::font::TrueTypeFont$1;
using $TrueTypeFont$DirectoryEntry = ::sun::font::TrueTypeFont$DirectoryEntry;
using $TrueTypeFont$TTDisposerRecord = ::sun::font::TrueTypeFont$TTDisposerRecord;
using $TrueTypeGlyphMapper = ::sun::font::TrueTypeGlyphMapper;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace font {

$FieldInfo _TrueTypeFont_FieldInfo_[] = {
	{"cmapTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, cmapTag)},
	{"glyfTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, glyfTag)},
	{"headTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, headTag)},
	{"hheaTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, hheaTag)},
	{"hmtxTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, hmtxTag)},
	{"locaTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, locaTag)},
	{"maxpTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, maxpTag)},
	{"nameTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, nameTag)},
	{"postTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, postTag)},
	{"os_2Tag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, os_2Tag)},
	{"GDEFTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, GDEFTag)},
	{"GPOSTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, GPOSTag)},
	{"GSUBTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, GSUBTag)},
	{"mortTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, mortTag)},
	{"morxTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, morxTag)},
	{"fdscTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, fdscTag)},
	{"fvarTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, fvarTag)},
	{"featTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, featTag)},
	{"EBLCTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, EBLCTag)},
	{"gaspTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, gaspTag)},
	{"ttcfTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, ttcfTag)},
	{"v1ttTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, v1ttTag)},
	{"trueTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, trueTag)},
	{"ottoTag", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, ottoTag)},
	{"MAC_PLATFORM_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, MAC_PLATFORM_ID)},
	{"MACROMAN_SPECIFIC_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, MACROMAN_SPECIFIC_ID)},
	{"MACROMAN_ENGLISH_LANG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, MACROMAN_ENGLISH_LANG)},
	{"MS_PLATFORM_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, MS_PLATFORM_ID)},
	{"ENGLISH_LOCALE_ID", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, ENGLISH_LOCALE_ID)},
	{"FAMILY_NAME_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, FAMILY_NAME_ID)},
	{"FULL_NAME_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, FULL_NAME_ID)},
	{"POSTSCRIPT_NAME_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, POSTSCRIPT_NAME_ID)},
	{"US_LCID", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TrueTypeFont, US_LCID)},
	{"lcidMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Short;>;", $PRIVATE | $STATIC, $staticField(TrueTypeFont, lcidMap)},
	{"disposerRecord", "Lsun/font/TrueTypeFont$TTDisposerRecord;", nullptr, 0, $field(TrueTypeFont, disposerRecord)},
	{"fontIndex", "I", nullptr, 0, $field(TrueTypeFont, fontIndex)},
	{"directoryCount", "I", nullptr, 0, $field(TrueTypeFont, directoryCount)},
	{"directoryOffset", "I", nullptr, 0, $field(TrueTypeFont, directoryOffset)},
	{"numTables", "I", nullptr, 0, $field(TrueTypeFont, numTables)},
	{"tableDirectory", "[Lsun/font/TrueTypeFont$DirectoryEntry;", nullptr, 0, $field(TrueTypeFont, tableDirectory)},
	{"supportsJA", "Z", nullptr, $PRIVATE, $field(TrueTypeFont, supportsJA$)},
	{"supportsCJK", "Z", nullptr, $PRIVATE, $field(TrueTypeFont, supportsCJK)},
	{"nameLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(TrueTypeFont, nameLocale)},
	{"localeFamilyName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TrueTypeFont, localeFamilyName)},
	{"localeFullName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TrueTypeFont, localeFullName)},
	{"fontDataSize", "I", nullptr, 0, $field(TrueTypeFont, fontDataSize)},
	{"TTCHEADERSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TrueTypeFont, TTCHEADERSIZE)},
	{"DIRECTORYHEADERSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TrueTypeFont, DIRECTORYHEADERSIZE)},
	{"DIRECTORYENTRYSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TrueTypeFont, DIRECTORYENTRYSIZE)},
	{"encoding_mapping", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TrueTypeFont, encoding_mapping)},
	{"languages", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TrueTypeFont, languages)},
	{"codePages", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TrueTypeFont, codePages)},
	{"defaultCodePage", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(TrueTypeFont, defaultCodePage)},
	{"reserved_bits1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, reserved_bits1)},
	{"reserved_bits2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TrueTypeFont, reserved_bits2)},
	{"fontWidth", "I", nullptr, $PRIVATE, $field(TrueTypeFont, fontWidth)},
	{"fontWeight", "I", nullptr, $PRIVATE, $field(TrueTypeFont, fontWeight)},
	{"fsSelectionItalicBit", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TrueTypeFont, fsSelectionItalicBit)},
	{"fsSelectionBoldBit", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TrueTypeFont, fsSelectionBoldBit)},
	{"fsSelectionRegularBit", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TrueTypeFont, fsSelectionRegularBit)},
	{"stSize", "F", nullptr, $PRIVATE, $field(TrueTypeFont, stSize)},
	{"stPos", "F", nullptr, $PRIVATE, $field(TrueTypeFont, stPos)},
	{"ulSize", "F", nullptr, $PRIVATE, $field(TrueTypeFont, ulSize)},
	{"ulPos", "F", nullptr, $PRIVATE, $field(TrueTypeFont, ulPos)},
	{"gaspTable", "[C", nullptr, $PRIVATE, $field(TrueTypeFont, gaspTable)},
	{"lcidLanguageCompatibilityMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[S>;", $PRIVATE | $STATIC, $staticField(TrueTypeFont, lcidLanguageCompatibilityMap)},
	{"EMPTY_COMPATIBLE_LCIDS", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TrueTypeFont, EMPTY_COMPATIBLE_LCIDS)},
	{"languageCompatibleLCIDs", "[S", nullptr, $PRIVATE, $field(TrueTypeFont, languageCompatibleLCIDs)},
	{}
};

$MethodInfo _TrueTypeFont_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(TrueTypeFont::*)($String*,Object$*,int32_t,bool)>(&TrueTypeFont::init$)), "java.awt.FontFormatException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;IZZ)V", nullptr, $PUBLIC, $method(static_cast<void(TrueTypeFont::*)($String*,Object$*,int32_t,bool,bool)>(&TrueTypeFont::init$)), "java.awt.FontFormatException"},
	{"addLCIDMapEntry", "(Ljava/util/Map;Ljava/lang/String;S)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Short;>;Ljava/lang/String;S)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Map*,$String*,int16_t)>(&TrueTypeFont::addLCIDMapEntry))},
	{"close", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"createLCIDLanguageCompatibilityMap", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TrueTypeFont::createLCIDLanguageCompatibilityMap))},
	{"createLCIDMap", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&TrueTypeFont::createLCIDMap))},
	{"getAllFamilyNames", "()[Ljava/lang/String;", nullptr, 0},
	{"getAllFullNames", "()[Ljava/lang/String;", nullptr, 0},
	{"getCodePage", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&TrueTypeFont::getCodePage))},
	{"getDirectoryEntry", "(I)Lsun/font/TrueTypeFont$DirectoryEntry;", nullptr, 0},
	{"getFamilyName", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFontCount", "()I", nullptr, $PUBLIC},
	{"getFontName", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFullName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getGaspTable", "()[C", nullptr, $PRIVATE, $method(static_cast<$chars*(TrueTypeFont::*)()>(&TrueTypeFont::getGaspTable))},
	{"getGlyphPoint", "(JII)Ljava/awt/geom/Point2D$Float;", nullptr, 0},
	{"getLCIDFromLocale", "(Ljava/util/Locale;)S", nullptr, $PRIVATE | $STATIC, $method(static_cast<int16_t(*)($Locale*)>(&TrueTypeFont::getLCIDFromLocale))},
	{"getLanguageCompatibleLCIDsFromLocale", "(Ljava/util/Locale;)[S", nullptr, $PRIVATE | $STATIC, $method(static_cast<$shorts*(*)($Locale*)>(&TrueTypeFont::getLanguageCompatibleLCIDsFromLocale))},
	{"getMapper", "()Lsun/font/CharToGlyphMapper;", nullptr, $PUBLIC},
	{"getPostscriptName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getScaler", "()Lsun/font/FontScaler;", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getStyleMetrics", "(F[FI)V", nullptr, $PUBLIC},
	{"getTableBuffer", "(I)Ljava/nio/ByteBuffer;", nullptr, 0},
	{"getTableBytes", "(I)[B", nullptr, $PROTECTED},
	{"getTableOffset", "(I)I", nullptr, 0},
	{"getTableSize", "(I)I", nullptr, 0},
	{"getWeight", "()I", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"hasSupplementaryChars", "()Z", nullptr, $PUBLIC},
	{"init", "(I)V", nullptr, $PROTECTED, nullptr, "java.awt.FontFormatException"},
	{"initAllNames", "(ILjava/util/HashSet;)V", "(ILjava/util/HashSet<Ljava/lang/String;>;)V", $PROTECTED},
	{"initNames", "()V", nullptr, $PROTECTED},
	{"isLanguageCompatible", "(S)Z", nullptr, $PRIVATE, $method(static_cast<bool(TrueTypeFont::*)(int16_t)>(&TrueTypeFont::isLanguageCompatible))},
	{"lookupName", "(SI)Ljava/lang/String;", nullptr, $PROTECTED},
	{"makeString", "([BISS)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(TrueTypeFont::*)($bytes*,int32_t,int16_t,int16_t)>(&TrueTypeFont::makeString))},
	{"open", "()Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$FileChannel*(TrueTypeFont::*)()>(&TrueTypeFont::open)), "java.awt.FontFormatException"},
	{"open", "(Z)Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$FileChannel*(TrueTypeFont::*)(bool)>(&TrueTypeFont::open)), "java.awt.FontFormatException"},
	{"readBlock", "(Ljava/nio/ByteBuffer;II)I", nullptr, 0},
	{"readBlock", "(II)Ljava/nio/ByteBuffer;", nullptr, 0},
	{"readBytes", "(II)[B", nullptr, 0},
	{"setCJKSupport", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(TrueTypeFont::*)($ByteBuffer*)>(&TrueTypeFont::setCJKSupport))},
	{"setStrikethroughMetrics", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PRIVATE, $method(static_cast<void(TrueTypeFont::*)($ByteBuffer*,int32_t)>(&TrueTypeFont::setStrikethroughMetrics))},
	{"setStyle", "()V", nullptr, $PROTECTED},
	{"setStyle", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(TrueTypeFont::*)($ByteBuffer*)>(&TrueTypeFont::setStyle))},
	{"setUnderlineMetrics", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PRIVATE, $method(static_cast<void(TrueTypeFont::*)($ByteBuffer*,int32_t)>(&TrueTypeFont::setUnderlineMetrics))},
	{"supportsEncoding", "(Ljava/lang/String;)Z", nullptr, 0},
	{"supportsJA", "()Z", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"useAAForPtSize", "(I)Z", nullptr, $PUBLIC},
	{"useEmbeddedBitmapsForSize", "(I)Z", nullptr, 0},
	{"verify", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(TrueTypeFont::*)(bool)>(&TrueTypeFont::verify)), "java.awt.FontFormatException"},
	{}
};

$InnerClassInfo _TrueTypeFont_InnerClassesInfo_[] = {
	{"sun.font.TrueTypeFont$TTDisposerRecord", "sun.font.TrueTypeFont", "TTDisposerRecord", $PRIVATE | $STATIC},
	{"sun.font.TrueTypeFont$DirectoryEntry", "sun.font.TrueTypeFont", "DirectoryEntry", $STATIC},
	{"sun.font.TrueTypeFont$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TrueTypeFont_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.TrueTypeFont",
	"sun.font.FileFont",
	nullptr,
	_TrueTypeFont_FieldInfo_,
	_TrueTypeFont_MethodInfo_,
	nullptr,
	nullptr,
	_TrueTypeFont_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.TrueTypeFont$TTDisposerRecord,sun.font.TrueTypeFont$DirectoryEntry,sun.font.TrueTypeFont$1"
};

$Object* allocate$TrueTypeFont($Class* clazz) {
	return $of($alloc(TrueTypeFont));
}

$Map* TrueTypeFont::lcidMap = nullptr;
$StringArray* TrueTypeFont::encoding_mapping = nullptr;
$StringArray2* TrueTypeFont::languages = nullptr;
$StringArray* TrueTypeFont::codePages = nullptr;
$String* TrueTypeFont::defaultCodePage = nullptr;
$Map* TrueTypeFont::lcidLanguageCompatibilityMap = nullptr;
$shorts* TrueTypeFont::EMPTY_COMPATIBLE_LCIDS = nullptr;

void TrueTypeFont::init$($String* platname, Object$* nativeNames, int32_t fIndex, bool javaRasterizer) {
	TrueTypeFont::init$(platname, nativeNames, fIndex, javaRasterizer, true);
}

void TrueTypeFont::init$($String* platname, Object$* nativeNames, int32_t fIndex, bool javaRasterizer, bool useFilePool) {
	$FileFont::init$(platname, nativeNames);
	$set(this, disposerRecord, $new($TrueTypeFont$TTDisposerRecord));
	this->fontIndex = 0;
	this->directoryCount = 1;
	this->fontWidth = 0;
	this->fontWeight = 0;
	this->useJavaRasterizer = javaRasterizer;
	this->fontRank = $Font2D::TTF_RANK;
	try {
		verify(useFilePool);
		init(fIndex);
		if (!useFilePool) {
			close();
		}
	} catch ($Throwable& t) {
		close();
		if ($instanceOf($FontFormatException, t)) {
			$throw($cast($FontFormatException, t));
		} else {
			$throwNew($FontFormatException, "Unexpected runtime exception."_s);
		}
	}
	$Disposer::addObjectRecord(this, this->disposerRecord);
}

$FileChannel* TrueTypeFont::open() {
	$synchronized(this) {
		return open(true);
	}
}

$FileChannel* TrueTypeFont::open(bool usePool) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		if ($nc(this->disposerRecord)->channel == nullptr) {
			if ($FontUtilities::isLogging()) {
				$FontUtilities::logInfo($$str({"open TTF: "_s, this->platName}));
			}
			try {
				$var($RandomAccessFile, raf, $cast($RandomAccessFile, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($TrueTypeFont$1, this)))));
				$set($nc(this->disposerRecord), channel, $nc(raf)->getChannel());
				this->fileSize = (int32_t)$nc($nc(this->disposerRecord)->channel)->size();
				if (usePool) {
					$var($FontManager, fm, $FontManagerFactory::getInstance());
					if ($instanceOf($SunFontManager, fm)) {
						$nc(($cast($SunFontManager, fm)))->addToPool(this);
					}
				}
			} catch ($PrivilegedActionException& e) {
				close();
				$var($Throwable, reason, e->getCause());
				if (reason == nullptr) {
					$assign(reason, e);
				}
				$throwNew($FontFormatException, $($nc(reason)->toString()));
			} catch ($ClosedChannelException& e) {
				$Thread::interrupted();
				close();
				open();
			} catch ($IOException& e) {
				close();
				$throwNew($FontFormatException, $(e->toString()));
			}
		}
		return $nc(this->disposerRecord)->channel;
	}
}

void TrueTypeFont::close() {
	$synchronized(this) {
		$nc(this->disposerRecord)->dispose();
	}
}

int32_t TrueTypeFont::readBlock($ByteBuffer* buffer, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	int32_t bread = 0;
	try {
		$synchronized(this) {
			if ($nc(this->disposerRecord)->channel == nullptr) {
				open();
			}
			if (offset + length > this->fileSize) {
				if (offset >= this->fileSize) {
					if ($FontUtilities::isLogging()) {
						$var($String, msg, $str({"Read offset is "_s, $$str(offset), " file size is "_s, $$str(this->fileSize), " file is "_s, this->platName}));
						$FontUtilities::logSevere(msg);
					}
					return -1;
				} else {
					length = this->fileSize - offset;
				}
			}
			$nc(buffer)->clear();
			$nc($nc(this->disposerRecord)->channel)->position(offset);
			while (bread < length) {
				int32_t cnt = $nc($nc(this->disposerRecord)->channel)->read(buffer);
				if (cnt == -1) {
					$var($String, msg, $str({"Unexpected EOF "_s, this}));
					int32_t currSize = (int32_t)$nc($nc(this->disposerRecord)->channel)->size();
					if (currSize != this->fileSize) {
						$plusAssign(msg, $$str({" File size was "_s, $$str(this->fileSize), " and now is "_s, $$str(currSize)}));
					}
					if ($FontUtilities::isLogging()) {
						$FontUtilities::logSevere(msg);
					}
					if (bread > length / 2 || bread > 16384) {
						buffer->flip();
						if ($FontUtilities::isLogging()) {
							$assign(msg, $str({"Returning "_s, $$str(bread), " bytes instead of "_s, $$str(length)}));
							$FontUtilities::logSevere(msg);
						}
					} else {
						bread = -1;
					}
					$throwNew($IOException, msg);
				}
				bread += cnt;
			}
			buffer->flip();
			if (bread > length) {
				bread = length;
			}
		}
	} catch ($FontFormatException& e) {
		if ($FontUtilities::isLogging()) {
			$nc($($FontUtilities::getLogger()))->severe($$str({"While reading "_s, this->platName}), static_cast<$Throwable*>(e));
		}
		bread = -1;
		deregisterFontAndClearStrikeCache();
	} catch ($ClosedChannelException& e) {
		$Thread::interrupted();
		close();
		return readBlock(buffer, offset, length);
	} catch ($IOException& e) {
		if ($FontUtilities::isLogging()) {
			$nc($($FontUtilities::getLogger()))->severe($$str({"While reading "_s, this->platName}), static_cast<$Throwable*>(e));
		}
		if (bread == 0) {
			bread = -1;
			deregisterFontAndClearStrikeCache();
		}
	}
	return bread;
}

$ByteBuffer* TrueTypeFont::readBlock(int32_t offset, int32_t length) {
	$var($ByteBuffer, buffer, $ByteBuffer::allocate(length));
	try {
		$synchronized(this) {
			if ($nc(this->disposerRecord)->channel == nullptr) {
				open();
			}
			if (offset + length > this->fileSize) {
				if (offset > this->fileSize) {
					return nullptr;
				} else {
					$assign(buffer, $ByteBuffer::allocate(this->fileSize - offset));
				}
			}
			$nc($nc(this->disposerRecord)->channel)->position(offset);
			$nc($nc(this->disposerRecord)->channel)->read(buffer);
			$nc(buffer)->flip();
		}
	} catch ($FontFormatException& e) {
		return nullptr;
	} catch ($ClosedChannelException& e) {
		$Thread::interrupted();
		close();
		readBlock(buffer, offset, length);
	} catch ($IOException& e) {
		return nullptr;
	}
	return buffer;
}

$bytes* TrueTypeFont::readBytes(int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, buffer, readBlock(offset, length));
	if ($nc(buffer)->hasArray()) {
		return $cast($bytes, buffer->array());
	} else {
		$var($bytes, bufferBytes, $new($bytes, buffer->limit()));
		buffer->get(bufferBytes);
		return bufferBytes;
	}
}

void TrueTypeFont::verify(bool usePool) {
	open(usePool);
}

void TrueTypeFont::init(int32_t fIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t headerOffset = 0;
	$var($ByteBuffer, buffer, readBlock(0, TrueTypeFont::TTCHEADERSIZE));
	try {
		switch ($nc(buffer)->getInt()) {
		case TrueTypeFont::ttcfTag:
			{
				buffer->getInt();
				this->directoryCount = buffer->getInt();
				if (fIndex >= this->directoryCount) {
					$throwNew($FontFormatException, "Bad collection index"_s);
				}
				this->fontIndex = fIndex;
				$assign(buffer, readBlock(TrueTypeFont::TTCHEADERSIZE + 4 * fIndex, 4));
				headerOffset = buffer->getInt();
				this->fontDataSize = $Math::max(0, this->fileSize - headerOffset);
				break;
			}
		case TrueTypeFont::v1ttTag:
			{}
		case TrueTypeFont::trueTag:
			{}
		case TrueTypeFont::ottoTag:
			{
				this->fontDataSize = this->fileSize;
				break;
			}
		default:
			{
				$throwNew($FontFormatException, $$str({"Unsupported sfnt "_s, $(getPublicFileName())}));
			}
		}
		$assign(buffer, readBlock(headerOffset + 4, 2));
		this->numTables = buffer->getShort();
		this->directoryOffset = headerOffset + TrueTypeFont::DIRECTORYHEADERSIZE;
		$var($ByteBuffer, bbuffer, readBlock(this->directoryOffset, this->numTables * TrueTypeFont::DIRECTORYENTRYSIZE));
		$var($IntBuffer, ibuffer, $nc(bbuffer)->asIntBuffer());
		$var($TrueTypeFont$DirectoryEntry, table, nullptr);
		$set(this, tableDirectory, $new($TrueTypeFont$DirectoryEntryArray, this->numTables));
		for (int32_t i = 0; i < this->numTables; ++i) {
			$nc(this->tableDirectory)->set(i, $assign(table, $new($TrueTypeFont$DirectoryEntry)));
			table->tag = $nc(ibuffer)->get();
			ibuffer->get();
			table->offset = (int32_t)(ibuffer->get() & (uint32_t)0x7FFFFFFF);
			table->length = (int32_t)(ibuffer->get() & (uint32_t)0x7FFFFFFF);
			if (table->offset + table->length > this->fileSize) {
				$throwNew($FontFormatException, $$str({"bad table, tag="_s, $$str(table->tag)}));
			}
		}
		if (getDirectoryEntry(TrueTypeFont::headTag) == nullptr) {
			$throwNew($FontFormatException, "missing head table"_s);
		}
		if (getDirectoryEntry(TrueTypeFont::maxpTag) == nullptr) {
			$throwNew($FontFormatException, "missing maxp table"_s);
		}
		bool var$0 = getDirectoryEntry(TrueTypeFont::hmtxTag) != nullptr;
		if (var$0 && getDirectoryEntry(TrueTypeFont::hheaTag) == nullptr) {
			$throwNew($FontFormatException, "missing hhea table"_s);
		}
		$var($ByteBuffer, maxpTable, getTableBuffer(TrueTypeFont::maxpTag));
		if ($nc(maxpTable)->getChar(4) == 0) {
			$throwNew($FontFormatException, "zero glyphs"_s);
		}
		initNames();
	} catch ($Exception& e) {
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logSevere($(e->toString()));
		}
		if ($instanceOf($FontFormatException, e)) {
			$throw($cast($FontFormatException, e));
		} else {
			$throwNew($FontFormatException, $(e->toString()));
		}
	}
	if (this->familyName == nullptr || this->fullName == nullptr) {
		$throwNew($FontFormatException, "Font name not found"_s);
	}
	$var($ByteBuffer, os2_Table, getTableBuffer(TrueTypeFont::os_2Tag));
	setStyle(os2_Table);
	setCJKSupport(os2_Table);
}

$String* TrueTypeFont::getCodePage() {
	$init(TrueTypeFont);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (TrueTypeFont::defaultCodePage != nullptr) {
		return TrueTypeFont::defaultCodePage;
	}
	$init($FontUtilities);
	if ($FontUtilities::isWindows) {
		$assignStatic(TrueTypeFont::defaultCodePage, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "file.encoding"_s)))));
	} else {
		if ($nc(TrueTypeFont::languages)->length != $nc(TrueTypeFont::codePages)->length) {
			$throwNew($InternalError, "wrong code pages array length"_s);
		}
		$var($Locale, locale, $SunToolkit::getStartupLocale());
		$var($String, language, $nc(locale)->getLanguage());
		if (language != nullptr) {
			if (language->equals("zh"_s)) {
				$var($String, country, locale->getCountry());
				if (country != nullptr) {
					$assign(language, $str({language, "_"_s, country}));
				}
			}
			for (int32_t i = 0; i < $nc(TrueTypeFont::languages)->length; ++i) {
				for (int32_t l = 0; l < $nc($nc(TrueTypeFont::languages)->get(i))->length; ++l) {
					if (language->equals($nc($nc(TrueTypeFont::languages)->get(i))->get(l))) {
						$assignStatic(TrueTypeFont::defaultCodePage, $nc(TrueTypeFont::codePages)->get(i));
						return TrueTypeFont::defaultCodePage;
					}
				}
			}
		}
	}
	if (TrueTypeFont::defaultCodePage == nullptr) {
		$assignStatic(TrueTypeFont::defaultCodePage, ""_s);
	}
	return TrueTypeFont::defaultCodePage;
}

bool TrueTypeFont::supportsEncoding($String* encoding$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, encoding, encoding$renamed);
	if (encoding == nullptr) {
		$assign(encoding, getCodePage());
	}
	if (""_s->equals(encoding)) {
		return false;
	}
	$assign(encoding, $nc(encoding)->toLowerCase());
	if (encoding->equals("gb18030"_s)) {
		$assign(encoding, "gbk"_s);
	} else if (encoding->equals("ms950_hkscs"_s)) {
		$assign(encoding, "ms950"_s);
	}
	$var($ByteBuffer, buffer, getTableBuffer(TrueTypeFont::os_2Tag));
	if (buffer == nullptr || $nc(buffer)->capacity() < 86) {
		return false;
	}
	int32_t range1 = $nc(buffer)->getInt(78);
	for (int32_t em = 0; em < $nc(TrueTypeFont::encoding_mapping)->length; ++em) {
		if ($nc($nc(TrueTypeFont::encoding_mapping)->get(em))->equals(encoding)) {
			if (((int32_t)(($sl(1, em)) & (uint32_t)range1)) != 0) {
				return true;
			}
		}
	}
	return false;
}

void TrueTypeFont::setCJKSupport($ByteBuffer* os2Table) {
	if (os2Table == nullptr || $nc(os2Table)->capacity() < 50) {
		return;
	}
	int32_t range2 = $nc(os2Table)->getInt(46);
	this->supportsCJK = (((int32_t)(range2 & (uint32_t)0x29BF0000)) != 0);
	this->supportsJA$ = (((int32_t)(range2 & (uint32_t)0x00060000)) != 0);
}

bool TrueTypeFont::supportsJA() {
	return this->supportsJA$;
}

$ByteBuffer* TrueTypeFont::getTableBuffer(int32_t tag) {
	$useLocalCurrentObjectStackCache();
	$var($TrueTypeFont$DirectoryEntry, entry, nullptr);
	for (int32_t i = 0; i < this->numTables; ++i) {
		if ($nc($nc(this->tableDirectory)->get(i))->tag == tag) {
			$assign(entry, $nc(this->tableDirectory)->get(i));
			break;
		}
	}
	if (entry == nullptr || $nc(entry)->length == 0 || $nc(entry)->offset + entry->length > this->fileSize) {
		return nullptr;
	}
	int32_t bread = 0;
	$var($ByteBuffer, buffer, $ByteBuffer::allocate($nc(entry)->length));
	$synchronized(this) {
		try {
			if ($nc(this->disposerRecord)->channel == nullptr) {
				open();
			}
			$nc($nc(this->disposerRecord)->channel)->position($nc(entry)->offset);
			bread = $nc($nc(this->disposerRecord)->channel)->read(buffer);
			$nc(buffer)->flip();
		} catch ($ClosedChannelException& e) {
			$Thread::interrupted();
			close();
			return getTableBuffer(tag);
		} catch ($IOException& e) {
			return nullptr;
		} catch ($FontFormatException& e) {
			return nullptr;
		}
		if (bread < $nc(entry)->length) {
			return nullptr;
		} else {
			return buffer;
		}
	}
}

$bytes* TrueTypeFont::getTableBytes(int32_t tag) {
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, buffer, getTableBuffer(tag));
	if (buffer == nullptr) {
		return nullptr;
	} else if ($nc(buffer)->hasArray()) {
		try {
			return $cast($bytes, buffer->array());
		} catch ($Exception& re) {
		}
	}
	$var($bytes, data, $new($bytes, getTableSize(tag)));
	$nc(buffer)->get(data);
	return data;
}

int32_t TrueTypeFont::getTableSize(int32_t tag) {
	for (int32_t i = 0; i < this->numTables; ++i) {
		if ($nc($nc(this->tableDirectory)->get(i))->tag == tag) {
			return $nc($nc(this->tableDirectory)->get(i))->length;
		}
	}
	return 0;
}

int32_t TrueTypeFont::getTableOffset(int32_t tag) {
	for (int32_t i = 0; i < this->numTables; ++i) {
		if ($nc($nc(this->tableDirectory)->get(i))->tag == tag) {
			return $nc($nc(this->tableDirectory)->get(i))->offset;
		}
	}
	return 0;
}

$TrueTypeFont$DirectoryEntry* TrueTypeFont::getDirectoryEntry(int32_t tag) {
	for (int32_t i = 0; i < this->numTables; ++i) {
		if ($nc($nc(this->tableDirectory)->get(i))->tag == tag) {
			return $nc(this->tableDirectory)->get(i);
		}
	}
	return nullptr;
}

bool TrueTypeFont::useEmbeddedBitmapsForSize(int32_t ptSize) {
	if (!this->supportsCJK) {
		return false;
	}
	if (getDirectoryEntry(TrueTypeFont::EBLCTag) == nullptr) {
		return false;
	}
	$var($ByteBuffer, eblcTable, getTableBuffer(TrueTypeFont::EBLCTag));
	int32_t numSizes = $nc(eblcTable)->getInt(4);
	for (int32_t i = 0; i < numSizes; ++i) {
		int32_t ppemY = (int32_t)(eblcTable->get(8 + (i * 48) + 45) & (uint32_t)255);
		if (ppemY == ptSize) {
			return true;
		}
	}
	return false;
}

$String* TrueTypeFont::getFullName() {
	return this->fullName;
}

void TrueTypeFont::setStyle() {
	setStyle($(getTableBuffer(TrueTypeFont::os_2Tag)));
}

int32_t TrueTypeFont::getWidth() {
	return (this->fontWidth > 0) ? this->fontWidth : $FileFont::getWidth();
}

int32_t TrueTypeFont::getWeight() {
	return (this->fontWeight > 0) ? this->fontWeight : $FileFont::getWeight();
}

void TrueTypeFont::setStyle($ByteBuffer* os_2Table) {
	if (os_2Table == nullptr) {
		return;
	}
	if ($nc(os_2Table)->capacity() >= 8) {
		this->fontWeight = (int32_t)(os_2Table->getChar(4) & (uint32_t)0x0000FFFF);
		this->fontWidth = (int32_t)(os_2Table->getChar(6) & (uint32_t)0x0000FFFF);
	}
	if ($nc(os_2Table)->capacity() < 64) {
		$FileFont::setStyle();
		return;
	}
	int32_t fsSelection = (int32_t)($nc(os_2Table)->getChar(62) & (uint32_t)0x0000FFFF);
	int32_t italic = (int32_t)(fsSelection & (uint32_t)TrueTypeFont::fsSelectionItalicBit);
	int32_t bold = (int32_t)(fsSelection & (uint32_t)TrueTypeFont::fsSelectionBoldBit);
	int32_t regular = (int32_t)(fsSelection & (uint32_t)TrueTypeFont::fsSelectionRegularBit);
	if (regular != 0 && ((italic | bold) != 0)) {
		$FileFont::setStyle();
		return;
	} else if (((regular | italic) | bold) == 0) {
		$FileFont::setStyle();
		return;
	}
	do {
		int32_t var$0 = bold | italic;
		if (var$0 == TrueTypeFont::fsSelectionItalicBit) {
			goto case$0;
		}
		if (var$0 == TrueTypeFont::fsSelectionBoldBit) {
			goto case$1;
		}
		if (var$0 == (TrueTypeFont::fsSelectionBoldBit | TrueTypeFont::fsSelectionItalicBit)) {
			goto case$2;
		}
		break;
case$0:
		// fsSelectionItalicBit
		{
			this->style = $Font::ITALIC;
			break;
		}
case$1:
		// fsSelectionBoldBit
		{
			this->style = $Font::BOLD;
			break;
		}
case$2:
		// fsSelectionBoldBit | fsSelectionItalicBit
		{
			this->style = $Font::BOLD | $Font::ITALIC;
		}
	} while (false);
}

void TrueTypeFont::setStrikethroughMetrics($ByteBuffer* os_2Table, int32_t upem) {
	if (os_2Table == nullptr || $nc(os_2Table)->capacity() < 30 || upem < 0) {
		this->stSize = 0.05f;
		this->stPos = -0.4f;
		return;
	}
	$var($ShortBuffer, sb, $nc(os_2Table)->asShortBuffer());
	this->stSize = $nc(sb)->get(13) / (float)upem;
	this->stPos = -(int32_t)sb->get(14) / (float)upem;
	if (this->stSize < 0.0f) {
		this->stSize = 0.05f;
	}
	if ($Math::abs(this->stPos) > 2.0f) {
		this->stPos = -0.4f;
	}
}

void TrueTypeFont::setUnderlineMetrics($ByteBuffer* postTable, int32_t upem) {
	if (postTable == nullptr || $nc(postTable)->capacity() < 12 || upem < 0) {
		this->ulSize = 0.05f;
		this->ulPos = 0.1f;
		return;
	}
	$var($ShortBuffer, sb, $nc(postTable)->asShortBuffer());
	this->ulSize = $nc(sb)->get(5) / (float)upem;
	this->ulPos = -(int32_t)sb->get(4) / (float)upem;
	if (this->ulSize < 0.0f) {
		this->ulSize = 0.05f;
	}
	if ($Math::abs(this->ulPos) > 2.0f) {
		this->ulPos = 0.1f;
	}
}

void TrueTypeFont::getStyleMetrics(float pointSize, $floats* metrics, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	if (this->ulSize == 0.0f && this->ulPos == 0.0f) {
		$var($ByteBuffer, head_Table, getTableBuffer(TrueTypeFont::headTag));
		int32_t upem = -1;
		if (head_Table != nullptr && head_Table->capacity() >= 18) {
			$var($ShortBuffer, sb, head_Table->asShortBuffer());
			upem = (int32_t)($nc(sb)->get(9) & (uint32_t)0x0000FFFF);
			if (upem < 16 || upem > 16384) {
				upem = 2048;
			}
		}
		$var($ByteBuffer, os2_Table, getTableBuffer(TrueTypeFont::os_2Tag));
		setStrikethroughMetrics(os2_Table, upem);
		$var($ByteBuffer, post_Table, getTableBuffer(TrueTypeFont::postTag));
		setUnderlineMetrics(post_Table, upem);
	}
	$nc(metrics)->set(offset, this->stPos * pointSize);
	metrics->set(offset + 1, this->stSize * pointSize);
	metrics->set(offset + 2, this->ulPos * pointSize);
	metrics->set(offset + 3, this->ulSize * pointSize);
}

$String* TrueTypeFont::makeString($bytes* bytes$renamed, int32_t len, int16_t platformID, int16_t encoding) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bytes, bytes$renamed);
	if (platformID == TrueTypeFont::MAC_PLATFORM_ID) {
		encoding = (int16_t)-1;
	}
	if (encoding >= 2 && encoding <= 6) {
		$var($bytes, oldbytes, bytes);
		int32_t oldlen = len;
		$assign(bytes, $new($bytes, oldlen));
		len = 0;
		for (int32_t i = 0; i < oldlen; ++i) {
			if ($nc(oldbytes)->get(i) != 0) {
				bytes->set(len++, oldbytes->get(i));
			}
		}
	}
	$var($String, charset, nullptr);
	switch (encoding) {
	case -1:
		{
			$assign(charset, "US-ASCII"_s);
			break;
		}
	case 1:
		{
			$assign(charset, "UTF-16"_s);
			break;
		}
	case 0:
		{
			$assign(charset, "UTF-16"_s);
			break;
		}
	case 2:
		{
			$assign(charset, "SJIS"_s);
			break;
		}
	case 3:
		{
			$assign(charset, "GBK"_s);
			break;
		}
	case 4:
		{
			$assign(charset, "MS950"_s);
			break;
		}
	case 5:
		{
			$assign(charset, "EUC_KR"_s);
			break;
		}
	case 6:
		{
			$assign(charset, "Johab"_s);
			break;
		}
	default:
		{
			$assign(charset, "UTF-16"_s);
			break;
		}
	}
	try {
		return $new($String, bytes, 0, len, charset);
	} catch ($UnsupportedEncodingException& e) {
		if ($FontUtilities::isLogging()) {
			$FontUtilities::logWarning($$str({e, " EncodingID="_s, $$str(encoding)}));
		}
		return $new($String, bytes, 0, len);
	} catch ($Throwable& t) {
		return nullptr;
	}
	$shouldNotReachHere();
}

void TrueTypeFont::initNames() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, name, $new($bytes, 256));
	$var($ByteBuffer, buffer, getTableBuffer(TrueTypeFont::nameTag));
	if (buffer != nullptr) {
		$var($ShortBuffer, sbuffer, buffer->asShortBuffer());
		$nc(sbuffer)->get();
		int16_t numRecords = sbuffer->get();
		int32_t stringPtr = (int32_t)(sbuffer->get() & (uint32_t)0x0000FFFF);
		$set(this, nameLocale, $SunToolkit::getStartupLocale());
		int16_t nameLocaleID = getLCIDFromLocale(this->nameLocale);
		$set(this, languageCompatibleLCIDs, getLanguageCompatibleLCIDsFromLocale(this->nameLocale));
		for (int32_t i = 0; i < numRecords; ++i) {
			int16_t platformID = sbuffer->get();
			if (platformID != TrueTypeFont::MS_PLATFORM_ID && platformID != TrueTypeFont::MAC_PLATFORM_ID) {
				sbuffer->position(sbuffer->position() + 5);
				continue;
			}
			int16_t encodingID = sbuffer->get();
			int16_t langID = sbuffer->get();
			int16_t nameID = sbuffer->get();
			int32_t nameLen = (int32_t)(((int32_t)sbuffer->get()) & (uint32_t)0x0000FFFF);
			int32_t namePtr = ((int32_t)(((int32_t)sbuffer->get()) & (uint32_t)0x0000FFFF)) + stringPtr;
			$var($String, tmpName, nullptr);
			if ((platformID == TrueTypeFont::MAC_PLATFORM_ID) && (encodingID != TrueTypeFont::MACROMAN_SPECIFIC_ID || langID != TrueTypeFont::MACROMAN_ENGLISH_LANG)) {
				continue;
			}
			{
				bool compatible = false;
				switch (nameID) {
				case TrueTypeFont::FAMILY_NAME_ID:
					{
						compatible = false;
						if (this->familyName == nullptr || langID == TrueTypeFont::ENGLISH_LOCALE_ID || langID == nameLocaleID || (this->localeFamilyName == nullptr && (compatible = isLanguageCompatible(langID)))) {
							buffer->position(namePtr);
							buffer->get(name, 0, nameLen);
							$assign(tmpName, makeString(name, nameLen, platformID, encodingID));
							if (this->familyName == nullptr || langID == TrueTypeFont::ENGLISH_LOCALE_ID) {
								$set(this, familyName, tmpName);
							}
							if (langID == nameLocaleID || (this->localeFamilyName == nullptr && compatible)) {
								$set(this, localeFamilyName, tmpName);
							}
						}
						break;
					}
				case TrueTypeFont::FULL_NAME_ID:
					{
						compatible = false;
						if (this->fullName == nullptr || langID == TrueTypeFont::ENGLISH_LOCALE_ID || langID == nameLocaleID || (this->localeFullName == nullptr && (compatible = isLanguageCompatible(langID)))) {
							buffer->position(namePtr);
							buffer->get(name, 0, nameLen);
							$assign(tmpName, makeString(name, nameLen, platformID, encodingID));
							if (this->fullName == nullptr || langID == TrueTypeFont::ENGLISH_LOCALE_ID) {
								$set(this, fullName, tmpName);
							}
							if (langID == nameLocaleID || (this->localeFullName == nullptr && compatible)) {
								$set(this, localeFullName, tmpName);
							}
						}
						break;
					}
				}
			}
		}
		if (this->localeFamilyName == nullptr) {
			$set(this, localeFamilyName, this->familyName);
		}
		if (this->localeFullName == nullptr) {
			$set(this, localeFullName, this->fullName);
		}
	}
}

$String* TrueTypeFont::lookupName(int16_t findLocaleID, int32_t findNameID) {
	$useLocalCurrentObjectStackCache();
	$var($String, foundName, nullptr);
	$var($bytes, name, $new($bytes, 1024));
	$var($ByteBuffer, buffer, getTableBuffer(TrueTypeFont::nameTag));
	if (buffer != nullptr) {
		$var($ShortBuffer, sbuffer, buffer->asShortBuffer());
		$nc(sbuffer)->get();
		int16_t numRecords = sbuffer->get();
		int32_t stringPtr = (int32_t)(((int32_t)sbuffer->get()) & (uint32_t)0x0000FFFF);
		for (int32_t i = 0; i < numRecords; ++i) {
			int16_t platformID = sbuffer->get();
			if (platformID != TrueTypeFont::MS_PLATFORM_ID) {
				sbuffer->position(sbuffer->position() + 5);
				continue;
			}
			int16_t encodingID = sbuffer->get();
			int16_t langID = sbuffer->get();
			int16_t nameID = sbuffer->get();
			int32_t nameLen = (int32_t)(((int32_t)sbuffer->get()) & (uint32_t)0x0000FFFF);
			int32_t namePtr = ((int32_t)(((int32_t)sbuffer->get()) & (uint32_t)0x0000FFFF)) + stringPtr;
			if (nameID == findNameID && ((foundName == nullptr && langID == TrueTypeFont::ENGLISH_LOCALE_ID) || langID == findLocaleID)) {
				buffer->position(namePtr);
				buffer->get(name, 0, nameLen);
				$assign(foundName, makeString(name, nameLen, platformID, encodingID));
				if (langID == findLocaleID) {
					return foundName;
				}
			}
		}
	}
	return foundName;
}

int32_t TrueTypeFont::getFontCount() {
	return this->directoryCount;
}

$FontScaler* TrueTypeFont::getScaler() {
	$synchronized(this) {
		if (this->scaler == nullptr) {
			$set(this, scaler, $FontScaler::getScaler(this, this->fontIndex, this->supportsCJK, this->fileSize));
		}
		return this->scaler;
	}
}

$String* TrueTypeFont::getPostscriptName() {
	$var($String, name, lookupName(TrueTypeFont::ENGLISH_LOCALE_ID, TrueTypeFont::POSTSCRIPT_NAME_ID));
	if (name == nullptr) {
		return this->fullName;
	} else {
		return name;
	}
}

$String* TrueTypeFont::getFontName($Locale* locale) {
	if (locale == nullptr) {
		return this->fullName;
	} else if ($nc(locale)->equals(this->nameLocale) && this->localeFullName != nullptr) {
		return this->localeFullName;
	} else {
		int16_t localeID = getLCIDFromLocale(locale);
		$var($String, name, lookupName(localeID, TrueTypeFont::FULL_NAME_ID));
		if (name == nullptr) {
			return this->fullName;
		} else {
			return name;
		}
	}
}

void TrueTypeFont::addLCIDMapEntry($Map* map, $String* key, int16_t value) {
	$init(TrueTypeFont);
	$nc(map)->put(key, $($Short::valueOf(value)));
}

void TrueTypeFont::createLCIDMap() {
	$load(TrueTypeFont);
	$synchronized(class$) {
		$init(TrueTypeFont);
		if (TrueTypeFont::lcidMap != nullptr) {
			return;
		}
		$var($Map, map, $new($HashMap, 200));
		addLCIDMapEntry(map, "ar"_s, (int16_t)1025);
		addLCIDMapEntry(map, "bg"_s, (int16_t)1026);
		addLCIDMapEntry(map, "ca"_s, (int16_t)1027);
		addLCIDMapEntry(map, "zh"_s, (int16_t)1028);
		addLCIDMapEntry(map, "cs"_s, (int16_t)1029);
		addLCIDMapEntry(map, "da"_s, (int16_t)1030);
		addLCIDMapEntry(map, "de"_s, (int16_t)1031);
		addLCIDMapEntry(map, "el"_s, (int16_t)1032);
		addLCIDMapEntry(map, "es"_s, (int16_t)1034);
		addLCIDMapEntry(map, "fi"_s, (int16_t)1035);
		addLCIDMapEntry(map, "fr"_s, (int16_t)1036);
		addLCIDMapEntry(map, "iw"_s, (int16_t)1037);
		addLCIDMapEntry(map, "hu"_s, (int16_t)1038);
		addLCIDMapEntry(map, "is"_s, (int16_t)1039);
		addLCIDMapEntry(map, "it"_s, (int16_t)1040);
		addLCIDMapEntry(map, "ja"_s, (int16_t)1041);
		addLCIDMapEntry(map, "ko"_s, (int16_t)1042);
		addLCIDMapEntry(map, "nl"_s, (int16_t)1043);
		addLCIDMapEntry(map, "no"_s, (int16_t)1044);
		addLCIDMapEntry(map, "pl"_s, (int16_t)1045);
		addLCIDMapEntry(map, "pt"_s, (int16_t)1046);
		addLCIDMapEntry(map, "rm"_s, (int16_t)1047);
		addLCIDMapEntry(map, "ro"_s, (int16_t)1048);
		addLCIDMapEntry(map, "ru"_s, (int16_t)1049);
		addLCIDMapEntry(map, "hr"_s, (int16_t)1050);
		addLCIDMapEntry(map, "sk"_s, (int16_t)1051);
		addLCIDMapEntry(map, "sq"_s, (int16_t)1052);
		addLCIDMapEntry(map, "sv"_s, (int16_t)1053);
		addLCIDMapEntry(map, "th"_s, (int16_t)1054);
		addLCIDMapEntry(map, "tr"_s, (int16_t)1055);
		addLCIDMapEntry(map, "ur"_s, (int16_t)1056);
		addLCIDMapEntry(map, "in"_s, (int16_t)1057);
		addLCIDMapEntry(map, "uk"_s, (int16_t)1058);
		addLCIDMapEntry(map, "be"_s, (int16_t)1059);
		addLCIDMapEntry(map, "sl"_s, (int16_t)1060);
		addLCIDMapEntry(map, "et"_s, (int16_t)1061);
		addLCIDMapEntry(map, "lv"_s, (int16_t)1062);
		addLCIDMapEntry(map, "lt"_s, (int16_t)1063);
		addLCIDMapEntry(map, "fa"_s, (int16_t)1065);
		addLCIDMapEntry(map, "vi"_s, (int16_t)1066);
		addLCIDMapEntry(map, "hy"_s, (int16_t)1067);
		addLCIDMapEntry(map, "eu"_s, (int16_t)1069);
		addLCIDMapEntry(map, "mk"_s, (int16_t)1071);
		addLCIDMapEntry(map, "tn"_s, (int16_t)1074);
		addLCIDMapEntry(map, "xh"_s, (int16_t)1076);
		addLCIDMapEntry(map, "zu"_s, (int16_t)1077);
		addLCIDMapEntry(map, "af"_s, (int16_t)1078);
		addLCIDMapEntry(map, "ka"_s, (int16_t)1079);
		addLCIDMapEntry(map, "fo"_s, (int16_t)1080);
		addLCIDMapEntry(map, "hi"_s, (int16_t)1081);
		addLCIDMapEntry(map, "mt"_s, (int16_t)1082);
		addLCIDMapEntry(map, "se"_s, (int16_t)1083);
		addLCIDMapEntry(map, "gd"_s, (int16_t)1084);
		addLCIDMapEntry(map, "ms"_s, (int16_t)1086);
		addLCIDMapEntry(map, "kk"_s, (int16_t)1087);
		addLCIDMapEntry(map, "ky"_s, (int16_t)1088);
		addLCIDMapEntry(map, "sw"_s, (int16_t)1089);
		addLCIDMapEntry(map, "tt"_s, (int16_t)1092);
		addLCIDMapEntry(map, "bn"_s, (int16_t)1093);
		addLCIDMapEntry(map, "pa"_s, (int16_t)1094);
		addLCIDMapEntry(map, "gu"_s, (int16_t)1095);
		addLCIDMapEntry(map, "ta"_s, (int16_t)1097);
		addLCIDMapEntry(map, "te"_s, (int16_t)1098);
		addLCIDMapEntry(map, "kn"_s, (int16_t)1099);
		addLCIDMapEntry(map, "ml"_s, (int16_t)1100);
		addLCIDMapEntry(map, "mr"_s, (int16_t)1102);
		addLCIDMapEntry(map, "sa"_s, (int16_t)1103);
		addLCIDMapEntry(map, "mn"_s, (int16_t)1104);
		addLCIDMapEntry(map, "cy"_s, (int16_t)1106);
		addLCIDMapEntry(map, "gl"_s, (int16_t)1110);
		addLCIDMapEntry(map, "dv"_s, (int16_t)1125);
		addLCIDMapEntry(map, "qu"_s, (int16_t)1131);
		addLCIDMapEntry(map, "mi"_s, (int16_t)1153);
		addLCIDMapEntry(map, "ar_IQ"_s, (int16_t)2049);
		addLCIDMapEntry(map, "zh_CN"_s, (int16_t)2052);
		addLCIDMapEntry(map, "de_CH"_s, (int16_t)2055);
		addLCIDMapEntry(map, "en_GB"_s, (int16_t)2057);
		addLCIDMapEntry(map, "es_MX"_s, (int16_t)2058);
		addLCIDMapEntry(map, "fr_BE"_s, (int16_t)2060);
		addLCIDMapEntry(map, "it_CH"_s, (int16_t)2064);
		addLCIDMapEntry(map, "nl_BE"_s, (int16_t)2067);
		addLCIDMapEntry(map, "no_NO_NY"_s, (int16_t)2068);
		addLCIDMapEntry(map, "pt_PT"_s, (int16_t)2070);
		addLCIDMapEntry(map, "ro_MD"_s, (int16_t)2072);
		addLCIDMapEntry(map, "ru_MD"_s, (int16_t)2073);
		addLCIDMapEntry(map, "sr_CS"_s, (int16_t)2074);
		addLCIDMapEntry(map, "sv_FI"_s, (int16_t)2077);
		addLCIDMapEntry(map, "az_AZ"_s, (int16_t)2092);
		addLCIDMapEntry(map, "se_SE"_s, (int16_t)2107);
		addLCIDMapEntry(map, "ga_IE"_s, (int16_t)2108);
		addLCIDMapEntry(map, "ms_BN"_s, (int16_t)2110);
		addLCIDMapEntry(map, "uz_UZ"_s, (int16_t)2115);
		addLCIDMapEntry(map, "qu_EC"_s, (int16_t)2155);
		addLCIDMapEntry(map, "ar_EG"_s, (int16_t)3073);
		addLCIDMapEntry(map, "zh_HK"_s, (int16_t)3076);
		addLCIDMapEntry(map, "de_AT"_s, (int16_t)3079);
		addLCIDMapEntry(map, "en_AU"_s, (int16_t)3081);
		addLCIDMapEntry(map, "fr_CA"_s, (int16_t)3084);
		addLCIDMapEntry(map, "sr_CS"_s, (int16_t)3098);
		addLCIDMapEntry(map, "se_FI"_s, (int16_t)3131);
		addLCIDMapEntry(map, "qu_PE"_s, (int16_t)3179);
		addLCIDMapEntry(map, "ar_LY"_s, (int16_t)4097);
		addLCIDMapEntry(map, "zh_SG"_s, (int16_t)4100);
		addLCIDMapEntry(map, "de_LU"_s, (int16_t)4103);
		addLCIDMapEntry(map, "en_CA"_s, (int16_t)4105);
		addLCIDMapEntry(map, "es_GT"_s, (int16_t)4106);
		addLCIDMapEntry(map, "fr_CH"_s, (int16_t)4108);
		addLCIDMapEntry(map, "hr_BA"_s, (int16_t)4122);
		addLCIDMapEntry(map, "ar_DZ"_s, (int16_t)5121);
		addLCIDMapEntry(map, "zh_MO"_s, (int16_t)5124);
		addLCIDMapEntry(map, "de_LI"_s, (int16_t)5127);
		addLCIDMapEntry(map, "en_NZ"_s, (int16_t)5129);
		addLCIDMapEntry(map, "es_CR"_s, (int16_t)5130);
		addLCIDMapEntry(map, "fr_LU"_s, (int16_t)5132);
		addLCIDMapEntry(map, "bs_BA"_s, (int16_t)5146);
		addLCIDMapEntry(map, "ar_MA"_s, (int16_t)6145);
		addLCIDMapEntry(map, "en_IE"_s, (int16_t)6153);
		addLCIDMapEntry(map, "es_PA"_s, (int16_t)6154);
		addLCIDMapEntry(map, "fr_MC"_s, (int16_t)6156);
		addLCIDMapEntry(map, "sr_BA"_s, (int16_t)6170);
		addLCIDMapEntry(map, "ar_TN"_s, (int16_t)7169);
		addLCIDMapEntry(map, "en_ZA"_s, (int16_t)7177);
		addLCIDMapEntry(map, "es_DO"_s, (int16_t)7178);
		addLCIDMapEntry(map, "sr_BA"_s, (int16_t)7194);
		addLCIDMapEntry(map, "ar_OM"_s, (int16_t)8193);
		addLCIDMapEntry(map, "en_JM"_s, (int16_t)8201);
		addLCIDMapEntry(map, "es_VE"_s, (int16_t)8202);
		addLCIDMapEntry(map, "ar_YE"_s, (int16_t)9217);
		addLCIDMapEntry(map, "es_CO"_s, (int16_t)9226);
		addLCIDMapEntry(map, "ar_SY"_s, (int16_t)10241);
		addLCIDMapEntry(map, "en_BZ"_s, (int16_t)10249);
		addLCIDMapEntry(map, "es_PE"_s, (int16_t)10250);
		addLCIDMapEntry(map, "ar_JO"_s, (int16_t)11265);
		addLCIDMapEntry(map, "en_TT"_s, (int16_t)11273);
		addLCIDMapEntry(map, "es_AR"_s, (int16_t)11274);
		addLCIDMapEntry(map, "ar_LB"_s, (int16_t)12289);
		addLCIDMapEntry(map, "en_ZW"_s, (int16_t)12297);
		addLCIDMapEntry(map, "es_EC"_s, (int16_t)12298);
		addLCIDMapEntry(map, "ar_KW"_s, (int16_t)13313);
		addLCIDMapEntry(map, "en_PH"_s, (int16_t)13321);
		addLCIDMapEntry(map, "es_CL"_s, (int16_t)13322);
		addLCIDMapEntry(map, "ar_AE"_s, (int16_t)14337);
		addLCIDMapEntry(map, "es_UY"_s, (int16_t)14346);
		addLCIDMapEntry(map, "ar_BH"_s, (int16_t)15361);
		addLCIDMapEntry(map, "es_PY"_s, (int16_t)15370);
		addLCIDMapEntry(map, "ar_QA"_s, (int16_t)16385);
		addLCIDMapEntry(map, "es_BO"_s, (int16_t)16394);
		addLCIDMapEntry(map, "es_SV"_s, (int16_t)17418);
		addLCIDMapEntry(map, "es_HN"_s, (int16_t)18442);
		addLCIDMapEntry(map, "es_NI"_s, (int16_t)19466);
		addLCIDMapEntry(map, "es_PR"_s, (int16_t)20490);
		$assignStatic(TrueTypeFont::lcidMap, map);
	}
}

int16_t TrueTypeFont::getLCIDFromLocale($Locale* locale) {
	$init(TrueTypeFont);
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	if ($nc(locale)->equals($Locale::US)) {
		return TrueTypeFont::US_LCID;
	}
	if (TrueTypeFont::lcidMap == nullptr) {
		createLCIDMap();
	}
	$var($String, key, $nc(locale)->toString());
	while (!""_s->equals(key)) {
		$var($Short, lcidObject, $cast($Short, $nc(TrueTypeFont::lcidMap)->get(key)));
		if (lcidObject != nullptr) {
			return lcidObject->shortValue();
		}
		int32_t pos = $nc(key)->lastIndexOf((int32_t)u'_');
		if (pos < 1) {
			return TrueTypeFont::US_LCID;
		}
		$assign(key, key->substring(0, pos));
	}
	return TrueTypeFont::US_LCID;
}

$String* TrueTypeFont::getFamilyName($Locale* locale) {
	if (locale == nullptr) {
		return this->familyName;
	} else if ($nc(locale)->equals(this->nameLocale) && this->localeFamilyName != nullptr) {
		return this->localeFamilyName;
	} else {
		int16_t localeID = getLCIDFromLocale(locale);
		$var($String, name, lookupName(localeID, TrueTypeFont::FAMILY_NAME_ID));
		if (name == nullptr) {
			return this->familyName;
		} else {
			return name;
		}
	}
}

$CharToGlyphMapper* TrueTypeFont::getMapper() {
	if (this->mapper == nullptr) {
		$set(this, mapper, $new($TrueTypeGlyphMapper, this));
	}
	return this->mapper;
}

void TrueTypeFont::initAllNames(int32_t requestedID, $HashSet* names) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, name, $new($bytes, 256));
	$var($ByteBuffer, buffer, getTableBuffer(TrueTypeFont::nameTag));
	if (buffer != nullptr) {
		$var($ShortBuffer, sbuffer, buffer->asShortBuffer());
		$nc(sbuffer)->get();
		int16_t numRecords = sbuffer->get();
		int32_t stringPtr = (int32_t)(((int32_t)sbuffer->get()) & (uint32_t)0x0000FFFF);
		for (int32_t i = 0; i < numRecords; ++i) {
			int16_t platformID = sbuffer->get();
			if (platformID != TrueTypeFont::MS_PLATFORM_ID) {
				sbuffer->position(sbuffer->position() + 5);
				continue;
			}
			int16_t encodingID = sbuffer->get();
			sbuffer->get();
			int16_t nameID = sbuffer->get();
			int32_t nameLen = (int32_t)(((int32_t)sbuffer->get()) & (uint32_t)0x0000FFFF);
			int32_t namePtr = ((int32_t)(((int32_t)sbuffer->get()) & (uint32_t)0x0000FFFF)) + stringPtr;
			if (nameID == requestedID) {
				buffer->position(namePtr);
				buffer->get(name, 0, nameLen);
				$nc(names)->add($(makeString(name, nameLen, platformID, encodingID)));
			}
		}
	}
}

$StringArray* TrueTypeFont::getAllFamilyNames() {
	$useLocalCurrentObjectStackCache();
	$var($HashSet, aSet, $new($HashSet));
	try {
		initAllNames(TrueTypeFont::FAMILY_NAME_ID, aSet);
	} catch ($Exception& e) {
	}
	return $fcast($StringArray, aSet->toArray($$new($StringArray, 0)));
}

$StringArray* TrueTypeFont::getAllFullNames() {
	$useLocalCurrentObjectStackCache();
	$var($HashSet, aSet, $new($HashSet));
	try {
		initAllNames(TrueTypeFont::FULL_NAME_ID, aSet);
	} catch ($Exception& e) {
	}
	return $fcast($StringArray, aSet->toArray($$new($StringArray, 0)));
}

$Point2D$Float* TrueTypeFont::getGlyphPoint(int64_t pScalerContext, int32_t glyphCode, int32_t ptNumber) {
	try {
		return $nc($(getScaler()))->getGlyphPoint(pScalerContext, glyphCode, ptNumber);
	} catch ($FontScalerException& fe) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$chars* TrueTypeFont::getGaspTable() {
	$useLocalCurrentObjectStackCache();
	if (this->gaspTable != nullptr) {
		return this->gaspTable;
	}
	$var($ByteBuffer, buffer, getTableBuffer(TrueTypeFont::gaspTag));
	if (buffer == nullptr) {
		return $set(this, gaspTable, $new($chars, 0));
	}
	$var($CharBuffer, cbuffer, $nc(buffer)->asCharBuffer());
	char16_t format = $nc(cbuffer)->get();
	if (format > 1) {
		return $set(this, gaspTable, $new($chars, 0));
	}
	char16_t numRanges = cbuffer->get();
	if (4 + numRanges * 4 > getTableSize(TrueTypeFont::gaspTag)) {
		return $set(this, gaspTable, $new($chars, 0));
	}
	$set(this, gaspTable, $new($chars, 2 * numRanges));
	cbuffer->get(this->gaspTable);
	return this->gaspTable;
}

bool TrueTypeFont::useAAForPtSize(int32_t ptsize) {
	$var($chars, gasp, getGaspTable());
	if ($nc(gasp)->length > 0) {
		for (int32_t i = 0; i < gasp->length; i += 2) {
			if (ptsize <= gasp->get(i)) {
				return (((int32_t)(gasp->get(i + 1) & (uint32_t)2)) != 0);
			}
		}
		return true;
	}
	if (this->style == $Font::BOLD) {
		return true;
	} else {
		return ptsize <= 8 || ptsize >= 18;
	}
}

bool TrueTypeFont::hasSupplementaryChars() {
	return $nc(($cast($TrueTypeGlyphMapper, $(getMapper()))))->hasSupplementaryChars();
}

$String* TrueTypeFont::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"** TrueType Font: Family="_s, this->familyName, " Name="_s, this->fullName, " style="_s, $$str(this->style), " fileName="_s, $(getPublicFileName())});
}

bool TrueTypeFont::isLanguageCompatible(int16_t lcid) {
	{
		$var($shorts, arr$, this->languageCompatibleLCIDs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int16_t s = arr$->get(i$);
			{
				if (s == lcid) {
					return true;
				}
			}
		}
	}
	return false;
}

$shorts* TrueTypeFont::getLanguageCompatibleLCIDsFromLocale($Locale* locale) {
	$init(TrueTypeFont);
	$useLocalCurrentObjectStackCache();
	if (TrueTypeFont::lcidLanguageCompatibilityMap == nullptr) {
		createLCIDMap();
		createLCIDLanguageCompatibilityMap();
	}
	$var($String, language, $nc(locale)->getLanguage());
	$var($shorts, result, $cast($shorts, $nc(TrueTypeFont::lcidLanguageCompatibilityMap)->get(language)));
	return result == nullptr ? TrueTypeFont::EMPTY_COMPATIBLE_LCIDS : result;
}

void TrueTypeFont::createLCIDLanguageCompatibilityMap() {
	$init(TrueTypeFont);
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $new($HashMap));
	$var($shorts, sarr, nullptr);
	$assign(sarr, $new($shorts, {
		(int16_t)1031,
		(int16_t)3079,
		(int16_t)5127,
		(int16_t)2055,
		(int16_t)4103
	}));
	map->put("de"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1044,
		(int16_t)2068
	}));
	map->put("no"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1049,
		(int16_t)2073
	}));
	map->put("ru"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1053,
		(int16_t)2077
	}));
	map->put("sv"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1046,
		(int16_t)2070
	}));
	map->put("pt"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1131,
		(int16_t)3179,
		(int16_t)2155
	}));
	map->put("qu"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1086,
		(int16_t)2110
	}));
	map->put("ms"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)11273,
		(int16_t)3081,
		(int16_t)12297,
		(int16_t)8201,
		(int16_t)10249,
		(int16_t)4105,
		(int16_t)13321,
		(int16_t)6153,
		(int16_t)7177,
		(int16_t)5129,
		(int16_t)2057
	}));
	map->put("en"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1050,
		(int16_t)4122
	}));
	map->put("hr"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1040,
		(int16_t)2064
	}));
	map->put("it"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1036,
		(int16_t)5132,
		(int16_t)6156,
		(int16_t)2060,
		(int16_t)3084,
		(int16_t)4108
	}));
	map->put("fr"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1034,
		(int16_t)12298,
		(int16_t)14346,
		(int16_t)2058,
		(int16_t)8202,
		(int16_t)19466,
		(int16_t)17418,
		(int16_t)9226,
		(int16_t)13322,
		(int16_t)5130,
		(int16_t)7178,
		(int16_t)11274,
		(int16_t)16394,
		(int16_t)4106,
		(int16_t)10250,
		(int16_t)6154,
		(int16_t)18442,
		(int16_t)20490,
		(int16_t)15370
	}));
	map->put("es"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1028,
		(int16_t)3076,
		(int16_t)5124,
		(int16_t)4100,
		(int16_t)2052
	}));
	map->put("zh"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1025,
		(int16_t)8193,
		(int16_t)16385,
		(int16_t)9217,
		(int16_t)2049,
		(int16_t)14337,
		(int16_t)15361,
		(int16_t)11265,
		(int16_t)13313,
		(int16_t)10241,
		(int16_t)7169,
		(int16_t)12289,
		(int16_t)4097,
		(int16_t)5121,
		(int16_t)6145,
		(int16_t)3073
	}));
	map->put("ar"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1083,
		(int16_t)3131,
		(int16_t)2107
	}));
	map->put("se"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1048,
		(int16_t)2072
	}));
	map->put("ro"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)1043,
		(int16_t)2067
	}));
	map->put("nl"_s, sarr);
	$assign(sarr, $new($shorts, {
		(int16_t)7194,
		(int16_t)3098
	}));
	map->put("sr"_s, sarr);
	$assignStatic(TrueTypeFont::lcidLanguageCompatibilityMap, map);
}

void clinit$TrueTypeFont($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(TrueTypeFont::encoding_mapping, $new($StringArray, {
		"cp1252"_s,
		"cp1250"_s,
		"cp1251"_s,
		"cp1253"_s,
		"cp1254"_s,
		"cp1255"_s,
		"cp1256"_s,
		"cp1257"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		"ms874"_s,
		"ms932"_s,
		"gbk"_s,
		"ms949"_s,
		"ms950"_s,
		"ms1361"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$assignStatic(TrueTypeFont::languages, $new($StringArray2, {
		$$new($StringArray, {
			"en"_s,
			"ca"_s,
			"da"_s,
			"de"_s,
			"es"_s,
			"fi"_s,
			"fr"_s,
			"is"_s,
			"it"_s,
			"nl"_s,
			"no"_s,
			"pt"_s,
			"sq"_s,
			"sv"_s
		}),
		$$new($StringArray, {
			"cs"_s,
			"cz"_s,
			"et"_s,
			"hr"_s,
			"hu"_s,
			"nr"_s,
			"pl"_s,
			"ro"_s,
			"sk"_s,
			"sl"_s,
			"sq"_s,
			"sr"_s
		}),
		$$new($StringArray, {
			"bg"_s,
			"mk"_s,
			"ru"_s,
			"sh"_s,
			"uk"_s
		}),
		$$new($StringArray, {"el"_s}),
		$$new($StringArray, {"tr"_s}),
		$$new($StringArray, {"he"_s}),
		$$new($StringArray, {"ar"_s}),
		$$new($StringArray, {
			"et"_s,
			"lt"_s,
			"lv"_s
		}),
		$$new($StringArray, {"th"_s}),
		$$new($StringArray, {"ja"_s}),
		$$new($StringArray, {
			"zh"_s,
			"zh_CN"_s
		}),
		$$new($StringArray, {"ko"_s}),
		$$new($StringArray, {
			"zh_HK"_s,
			"zh_TW"_s
		}),
		$$new($StringArray, {"ko"_s})
	}));
	$assignStatic(TrueTypeFont::codePages, $new($StringArray, {
		"cp1252"_s,
		"cp1250"_s,
		"cp1251"_s,
		"cp1253"_s,
		"cp1254"_s,
		"cp1255"_s,
		"cp1256"_s,
		"cp1257"_s,
		"ms874"_s,
		"ms932"_s,
		"gbk"_s,
		"ms949"_s,
		"ms950"_s,
		"ms1361"_s
	}));
	$assignStatic(TrueTypeFont::defaultCodePage, nullptr);
	$assignStatic(TrueTypeFont::EMPTY_COMPATIBLE_LCIDS, $new($shorts, 0));
}

TrueTypeFont::TrueTypeFont() {
}

$Class* TrueTypeFont::load$($String* name, bool initialize) {
	$loadClass(TrueTypeFont, name, initialize, &_TrueTypeFont_ClassInfo_, clinit$TrueTypeFont, allocate$TrueTypeFont);
	return class$;
}

$Class* TrueTypeFont::class$ = nullptr;

	} // font
} // sun