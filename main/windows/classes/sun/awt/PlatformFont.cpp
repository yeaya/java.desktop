#include <sun/awt/PlatformFont.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/util/Locale.h>
#include <java/util/Vector.h>
#include <sun/awt/CharsetString.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/awt/FontDescriptor.h>
#include <sun/awt/NativeLibLoader.h>
#include <sun/awt/PlatformFont$PlatformFontCache.h>
#include <sun/font/SunFontManager.h>
#include <sun/java2d/FontSupport.h>
#include <jcpp.h>

#undef ENGLISH
#undef FONTCACHEMASK
#undef FONTCACHESIZE

using $CharsetStringArray = $Array<::sun::awt::CharsetString>;
using $FontDescriptorArray = $Array<::sun::awt::FontDescriptor>;
using $FontPeer = ::java::awt::peer::FontPeer;
using $PrintStream = ::java::io::PrintStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Locale = ::java::util::Locale;
using $Vector = ::java::util::Vector;
using $CharsetString = ::sun::awt::CharsetString;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $FontDescriptor = ::sun::awt::FontDescriptor;
using $NativeLibLoader = ::sun::awt::NativeLibLoader;
using $PlatformFont$PlatformFontCache = ::sun::awt::PlatformFont$PlatformFontCache;
using $SunFontManager = ::sun::font::SunFontManager;
using $FontSupport = ::sun::java2d::FontSupport;

namespace sun {
	namespace awt {

$FieldInfo _PlatformFont_FieldInfo_[] = {
	{"componentFonts", "[Lsun/awt/FontDescriptor;", nullptr, $PROTECTED, $field(PlatformFont, componentFonts)},
	{"defaultChar", "C", nullptr, $PROTECTED, $field(PlatformFont, defaultChar)},
	{"fontConfig", "Lsun/awt/FontConfiguration;", nullptr, $PROTECTED, $field(PlatformFont, fontConfig)},
	{"defaultFont", "Lsun/awt/FontDescriptor;", nullptr, $PROTECTED, $field(PlatformFont, defaultFont)},
	{"familyName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(PlatformFont, familyName)},
	{"fontCache", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(PlatformFont, fontCache)},
	{"FONTCACHESIZE", "I", nullptr, $PROTECTED | $STATIC, $staticField(PlatformFont, FONTCACHESIZE)},
	{"FONTCACHEMASK", "I", nullptr, $PROTECTED | $STATIC, $staticField(PlatformFont, FONTCACHEMASK)},
	{"osVersion", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticField(PlatformFont, osVersion)},
	{}
};

$MethodInfo _PlatformFont_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(PlatformFont::*)($String*,int32_t)>(&PlatformFont::init$))},
	{"getFontCache", "()[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$ObjectArray*(PlatformFont::*)()>(&PlatformFont::getFontCache))},
	{"getMissingGlyphCharacter", "()C", nullptr, $PROTECTED | $ABSTRACT},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&PlatformFont::initIDs))},
	{"makeConvertedMultiFontChars", "([CII)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"makeConvertedMultiFontString", "(Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"makeMultiCharsetString", "(Ljava/lang/String;)[Lsun/awt/CharsetString;", nullptr, $PUBLIC},
	{"makeMultiCharsetString", "(Ljava/lang/String;Z)[Lsun/awt/CharsetString;", nullptr, $PUBLIC},
	{"makeMultiCharsetString", "([CII)[Lsun/awt/CharsetString;", nullptr, $PUBLIC},
	{"makeMultiCharsetString", "([CIIZ)[Lsun/awt/CharsetString;", nullptr, $PUBLIC},
	{"mightHaveMultiFontMetrics", "()Z", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 3

$InnerClassInfo _PlatformFont_InnerClassesInfo_[] = {
	{"sun.awt.PlatformFont$PlatformFontCache", "sun.awt.PlatformFont", "PlatformFontCache", 0},
	{}
};

$ClassInfo _PlatformFont_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.PlatformFont",
	"java.lang.Object",
	"java.awt.peer.FontPeer",
	_PlatformFont_FieldInfo_,
	_PlatformFont_MethodInfo_,
	nullptr,
	nullptr,
	_PlatformFont_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.PlatformFont$PlatformFontCache"
};

$Object* allocate$PlatformFont($Class* clazz) {
	return $of($alloc(PlatformFont));
}

int32_t PlatformFont::FONTCACHESIZE = 0;
int32_t PlatformFont::FONTCACHEMASK = 0;
$String* PlatformFont::osVersion = nullptr;

void PlatformFont::init$($String* name, int32_t style) {
	$var($SunFontManager, sfm, $SunFontManager::getInstance());
	if ($instanceOf($FontSupport, sfm)) {
		$set(this, fontConfig, $nc((static_cast<$FontSupport*>(sfm)))->getFontConfiguration());
	}
	if (this->fontConfig == nullptr) {
		return;
	}
	$init($Locale);
	$set(this, familyName, $nc(name)->toLowerCase($Locale::ENGLISH));
	if (!$FontConfiguration::isLogicalFontFamilyName(this->familyName)) {
		$set(this, familyName, $nc(this->fontConfig)->getFallbackFamilyName(this->familyName, "sansserif"_s));
	}
	$set(this, componentFonts, $nc(this->fontConfig)->getFontDescriptors(this->familyName, style));
	char16_t missingGlyphCharacter = getMissingGlyphCharacter();
	this->defaultChar = u'?';
	if ($nc(this->componentFonts)->length > 0) {
		$set(this, defaultFont, $nc(this->componentFonts)->get(0));
	}
	for (int32_t i = 0; i < $nc(this->componentFonts)->length; ++i) {
		if ($nc($nc(this->componentFonts)->get(i))->isExcluded(missingGlyphCharacter)) {
			continue;
		}
		if ($nc($nc($nc(this->componentFonts)->get(i))->encoder)->canEncode(missingGlyphCharacter)) {
			$set(this, defaultFont, $nc(this->componentFonts)->get(i));
			this->defaultChar = missingGlyphCharacter;
			break;
		}
	}
}

$CharsetStringArray* PlatformFont::makeMultiCharsetString($String* str) {
	$var($chars, var$0, $nc(str)->toCharArray());
	return makeMultiCharsetString(var$0, 0, str->length(), true);
}

$CharsetStringArray* PlatformFont::makeMultiCharsetString($String* str, bool allowdefault) {
	$var($chars, var$0, $nc(str)->toCharArray());
	return makeMultiCharsetString(var$0, 0, str->length(), allowdefault);
}

$CharsetStringArray* PlatformFont::makeMultiCharsetString($chars* str, int32_t offset, int32_t len) {
	return makeMultiCharsetString(str, offset, len, true);
}

$CharsetStringArray* PlatformFont::makeMultiCharsetString($chars* str, int32_t offset, int32_t len, bool allowDefault) {
	if (len < 1) {
		return $new($CharsetStringArray, 0);
	}
	$var($Vector, mcs, nullptr);
	$var($chars, tmpStr, $new($chars, len));
	char16_t tmpChar = this->defaultChar;
	bool encoded = false;
	$var($FontDescriptor, currentFont, this->defaultFont);
	for (int32_t i = 0; i < $nc(this->componentFonts)->length; ++i) {
		if ($nc($nc(this->componentFonts)->get(i))->isExcluded($nc(str)->get(offset))) {
			continue;
		}
		if ($nc($nc($nc(this->componentFonts)->get(i))->encoder)->canEncode($nc(str)->get(offset))) {
			$assign(currentFont, $nc(this->componentFonts)->get(i));
			tmpChar = $nc(str)->get(offset);
			encoded = true;
			break;
		}
	}
	if (!allowDefault && !encoded) {
		return nullptr;
	} else {
		tmpStr->set(0, tmpChar);
	}
	int32_t lastIndex = 0;
	for (int32_t i = 1; i < len; ++i) {
		char16_t ch = $nc(str)->get(offset + i);
		$var($FontDescriptor, fd, this->defaultFont);
		tmpChar = this->defaultChar;
		encoded = false;
		for (int32_t j = 0; j < $nc(this->componentFonts)->length; ++j) {
			if ($nc($nc(this->componentFonts)->get(j))->isExcluded(ch)) {
				continue;
			}
			if ($nc($nc($nc(this->componentFonts)->get(j))->encoder)->canEncode(ch)) {
				$assign(fd, $nc(this->componentFonts)->get(j));
				tmpChar = ch;
				encoded = true;
				break;
			}
		}
		if (!allowDefault && !encoded) {
			return nullptr;
		} else {
			tmpStr->set(i, tmpChar);
		}
		if (currentFont != fd) {
			if (mcs == nullptr) {
				$assign(mcs, $new($Vector, 3));
			}
			$nc(mcs)->addElement($$new($CharsetString, tmpStr, lastIndex, i - lastIndex, currentFont));
			$assign(currentFont, fd);
			$assign(fd, this->defaultFont);
			lastIndex = i;
		}
	}
	$var($CharsetStringArray, result, nullptr);
	$var($CharsetString, cs, $new($CharsetString, tmpStr, lastIndex, len - lastIndex, currentFont));
	if (mcs == nullptr) {
		$assign(result, $new($CharsetStringArray, 1));
		result->set(0, cs);
	} else {
		$nc(mcs)->addElement(cs);
		$assign(result, $fcast($CharsetStringArray, mcs->toArray($$new($CharsetStringArray, mcs->size()))));
	}
	return result;
}

bool PlatformFont::mightHaveMultiFontMetrics() {
	return this->fontConfig != nullptr;
}

$ObjectArray* PlatformFont::makeConvertedMultiFontString($String* str) {
	$var($chars, var$0, $nc(str)->toCharArray());
	return makeConvertedMultiFontChars(var$0, 0, str->length());
}

$ObjectArray* PlatformFont::makeConvertedMultiFontChars($chars* data, int32_t start, int32_t len) {
	$var($ObjectArray, result, $new($ObjectArray, 2));
	$var($ObjectArray, workingCache, nullptr);
	$var($bytes, convertedData, nullptr);
	int32_t stringIndex = start;
	int32_t convertedDataIndex = 0;
	int32_t resultIndex = 0;
	int32_t cacheIndex = 0;
	$var($FontDescriptor, currentFontDescriptor, nullptr);
	$var($FontDescriptor, lastFontDescriptor, nullptr);
	char16_t currentDefaultChar = 0;
	$var($PlatformFont$PlatformFontCache, theChar, nullptr);
	int32_t end = start + len;
	if (start < 0 || end > $nc(data)->length) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	if (stringIndex >= end) {
		return nullptr;
	}
	while (stringIndex < end) {
		currentDefaultChar = $nc(data)->get(stringIndex);
		cacheIndex = ((int32_t)(currentDefaultChar & (uint32_t)PlatformFont::FONTCACHEMASK));
		$assign(theChar, $cast($PlatformFont$PlatformFontCache, $nc($(getFontCache()))->get(cacheIndex)));
		if (theChar == nullptr || $nc(theChar)->uniChar != currentDefaultChar) {
			$assign(currentFontDescriptor, this->defaultFont);
			currentDefaultChar = this->defaultChar;
			char16_t ch = data->get(stringIndex);
			int32_t componentCount = $nc(this->componentFonts)->length;
			for (int32_t j = 0; j < componentCount; ++j) {
				$var($FontDescriptor, fontDescriptor, $nc(this->componentFonts)->get(j));
				$nc($nc(fontDescriptor)->encoder)->reset();
				if (fontDescriptor->isExcluded(ch)) {
					continue;
				}
				if ($nc(fontDescriptor->encoder)->canEncode(ch)) {
					$assign(currentFontDescriptor, fontDescriptor);
					currentDefaultChar = ch;
					break;
				}
			}
			try {
				$var($chars, input, $new($chars, 1));
				input->set(0, currentDefaultChar);
				$assign(theChar, $new($PlatformFont$PlatformFontCache, this));
				if ($nc(currentFontDescriptor)->useUnicode()) {
					$init($FontDescriptor);
					if ($FontDescriptor::isLE) {
						$nc(theChar->bb)->put((int8_t)((int32_t)(input->get(0) & (uint32_t)255)));
						$nc(theChar->bb)->put((int8_t)(input->get(0) >> 8));
					} else {
						$nc(theChar->bb)->put((int8_t)(input->get(0) >> 8));
						$nc(theChar->bb)->put((int8_t)((int32_t)(input->get(0) & (uint32_t)255)));
					}
				} else {
					$nc(currentFontDescriptor->encoder)->encode($($CharBuffer::wrap(input)), theChar->bb, true);
				}
				$set(theChar, fontDescriptor, currentFontDescriptor);
				theChar->uniChar = data->get(stringIndex);
				$nc($(getFontCache()))->set(cacheIndex, theChar);
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$init($System);
				$nc($System::err)->println($of(e));
				e->printStackTrace();
				return nullptr;
			}
		}
		if (lastFontDescriptor != $nc(theChar)->fontDescriptor) {
			if (lastFontDescriptor != nullptr) {
				$nc(result)->set(resultIndex++, lastFontDescriptor);
				result->set(resultIndex++, convertedData);
				if (convertedData != nullptr) {
					convertedDataIndex -= 4;
					convertedData->set(0, (int8_t)(convertedDataIndex >> 24));
					convertedData->set(1, (int8_t)(convertedDataIndex >> 16));
					convertedData->set(2, (int8_t)(convertedDataIndex >> 8));
					convertedData->set(3, (int8_t)convertedDataIndex);
				}
				if (resultIndex >= result->length) {
					$var($ObjectArray, newResult, $new($ObjectArray, result->length * 2));
					$System::arraycopy(result, 0, newResult, 0, result->length);
					$assign(result, newResult);
				}
			}
			if ($nc(theChar->fontDescriptor)->useUnicode()) {
				$assign(convertedData, $new($bytes, (end - stringIndex + 1) * $cast(int32_t, $nc($nc(theChar->fontDescriptor)->unicodeEncoder)->maxBytesPerChar()) + 4));
			} else {
				$assign(convertedData, $new($bytes, (end - stringIndex + 1) * $cast(int32_t, $nc($nc(theChar->fontDescriptor)->encoder)->maxBytesPerChar()) + 4));
			}
			convertedDataIndex = 4;
			$assign(lastFontDescriptor, theChar->fontDescriptor);
		}
		$var($bytes, ba, $cast($bytes, $nc($nc(theChar)->bb)->array()));
		int32_t size = $nc(theChar->bb)->position();
		if (size == 1) {
			$nc(convertedData)->set(convertedDataIndex++, $nc(ba)->get(0));
		} else if (size == 2) {
			$nc(convertedData)->set(convertedDataIndex++, $nc(ba)->get(0));
			convertedData->set(convertedDataIndex++, ba->get(1));
		} else if (size == 3) {
			$nc(convertedData)->set(convertedDataIndex++, $nc(ba)->get(0));
			convertedData->set(convertedDataIndex++, ba->get(1));
			convertedData->set(convertedDataIndex++, ba->get(2));
		} else if (size == 4) {
			$nc(convertedData)->set(convertedDataIndex++, $nc(ba)->get(0));
			convertedData->set(convertedDataIndex++, ba->get(1));
			convertedData->set(convertedDataIndex++, ba->get(2));
			convertedData->set(convertedDataIndex++, ba->get(3));
		}
		++stringIndex;
	}
	$nc(result)->set(resultIndex++, lastFontDescriptor);
	result->set(resultIndex, convertedData);
	if (convertedData != nullptr) {
		convertedDataIndex -= 4;
		convertedData->set(0, (int8_t)(convertedDataIndex >> 24));
		convertedData->set(1, (int8_t)(convertedDataIndex >> 16));
		convertedData->set(2, (int8_t)(convertedDataIndex >> 8));
		convertedData->set(3, (int8_t)convertedDataIndex);
	}
	return result;
}

$ObjectArray* PlatformFont::getFontCache() {
	if (this->fontCache == nullptr) {
		$set(this, fontCache, $new($ObjectArray, PlatformFont::FONTCACHESIZE));
	}
	return this->fontCache;
}

void PlatformFont::initIDs() {
	$init(PlatformFont);
	$prepareNativeStatic(PlatformFont, initIDs, void);
	$invokeNativeStatic(PlatformFont, initIDs);
	$finishNativeStatic();
}

void clinit$PlatformFont($Class* class$) {
	{
		$NativeLibLoader::loadLibraries();
		PlatformFont::initIDs();
	}
	PlatformFont::FONTCACHESIZE = 256;
	PlatformFont::FONTCACHEMASK = PlatformFont::FONTCACHESIZE - 1;
}

PlatformFont::PlatformFont() {
}

$Class* PlatformFont::load$($String* name, bool initialize) {
	$loadClass(PlatformFont, name, initialize, &_PlatformFont_ClassInfo_, clinit$PlatformFont, allocate$PlatformFont);
	return class$;
}

$Class* PlatformFont::class$ = nullptr;

	} // awt
} // sun