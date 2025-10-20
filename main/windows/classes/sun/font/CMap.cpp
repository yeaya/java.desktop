#include <sun/font/CMap.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <sun/font/CMap$CMapFormat0.h>
#include <sun/font/CMap$CMapFormat10.h>
#include <sun/font/CMap$CMapFormat12.h>
#include <sun/font/CMap$CMapFormat2.h>
#include <sun/font/CMap$CMapFormat4.h>
#include <sun/font/CMap$CMapFormat6.h>
#include <sun/font/CMap$CMapFormat8.h>
#include <sun/font/CMap$NullCMapClass.h>
#include <sun/font/CMap$UVS.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

#undef INTMASK
#undef INVISIBLE_GLYPH_ID
#undef REPLACE
#undef SHORTMASK

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $CMap$CMapFormat0 = ::sun::font::CMap$CMapFormat0;
using $CMap$CMapFormat10 = ::sun::font::CMap$CMapFormat10;
using $CMap$CMapFormat12 = ::sun::font::CMap$CMapFormat12;
using $CMap$CMapFormat2 = ::sun::font::CMap$CMapFormat2;
using $CMap$CMapFormat4 = ::sun::font::CMap$CMapFormat4;
using $CMap$CMapFormat6 = ::sun::font::CMap$CMapFormat6;
using $CMap$CMapFormat8 = ::sun::font::CMap$CMapFormat8;
using $CMap$NullCMapClass = ::sun::font::CMap$NullCMapClass;
using $CMap$UVS = ::sun::font::CMap$UVS;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $FontUtilities = ::sun::font::FontUtilities;
using $TrueTypeFont = ::sun::font::TrueTypeFont;

namespace sun {
	namespace font {

$FieldInfo _CMap_FieldInfo_[] = {
	{"ShiftJISEncoding", "S", nullptr, $STATIC | $FINAL, $constField(CMap, ShiftJISEncoding)},
	{"GBKEncoding", "S", nullptr, $STATIC | $FINAL, $constField(CMap, GBKEncoding)},
	{"Big5Encoding", "S", nullptr, $STATIC | $FINAL, $constField(CMap, Big5Encoding)},
	{"WansungEncoding", "S", nullptr, $STATIC | $FINAL, $constField(CMap, WansungEncoding)},
	{"JohabEncoding", "S", nullptr, $STATIC | $FINAL, $constField(CMap, JohabEncoding)},
	{"MSUnicodeSurrogateEncoding", "S", nullptr, $STATIC | $FINAL, $constField(CMap, MSUnicodeSurrogateEncoding)},
	{"noSuchChar", "C", nullptr, $STATIC | $FINAL, $constField(CMap, noSuchChar)},
	{"SHORTMASK", "I", nullptr, $STATIC | $FINAL, $constField(CMap, SHORTMASK)},
	{"INTMASK", "I", nullptr, $STATIC | $FINAL, $constField(CMap, INTMASK)},
	{"converterMaps", "[[C", nullptr, $STATIC | $FINAL, $staticField(CMap, converterMaps)},
	{"xlat", "[C", nullptr, 0, $field(CMap, xlat)},
	{"uvs", "Lsun/font/CMap$UVS;", nullptr, 0, $field(CMap, uvs)},
	{"theNullCmap", "Lsun/font/CMap$NullCMapClass;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CMap, theNullCmap)},
	{}
};

$MethodInfo _CMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CMap::*)()>(&CMap::init$))},
	{"createCMap", "(Ljava/nio/ByteBuffer;I[C)Lsun/font/CMap;", nullptr, $STATIC, $method(static_cast<CMap*(*)($ByteBuffer*,int32_t,$chars*)>(&CMap::createCMap))},
	{"createUVS", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PRIVATE, $method(static_cast<void(CMap::*)($ByteBuffer*,int32_t)>(&CMap::createUVS))},
	{"getControlCodeGlyph", "(IZ)I", nullptr, $FINAL, $method(static_cast<int32_t(CMap::*)(int32_t,bool)>(&CMap::getControlCodeGlyph))},
	{"getConverter", "(S)[C", nullptr, $STATIC, $method(static_cast<$chars*(*)(int16_t)>(&CMap::getConverter))},
	{"getConverterMap", "(S)[C", nullptr, $STATIC, $method(static_cast<$chars*(*)(int16_t)>(&CMap::getConverterMap))},
	{"getFormatCharGlyph", "(I)C", nullptr, $FINAL, $method(static_cast<char16_t(CMap::*)(int32_t)>(&CMap::getFormatCharGlyph))},
	{"getGlyph", "(I)C", nullptr, $ABSTRACT},
	{"getVariationGlyph", "(II)C", nullptr, 0},
	{"initialize", "(Lsun/font/TrueTypeFont;)Lsun/font/CMap;", nullptr, $STATIC, $method(static_cast<CMap*(*)($TrueTypeFont*)>(&CMap::initialize))},
	{}
};

$InnerClassInfo _CMap_InnerClassesInfo_[] = {
	{"sun.font.CMap$UVS", "sun.font.CMap", "UVS", $STATIC},
	{"sun.font.CMap$NullCMapClass", "sun.font.CMap", "NullCMapClass", $STATIC},
	{"sun.font.CMap$CMapFormat12", "sun.font.CMap", "CMapFormat12", $STATIC},
	{"sun.font.CMap$CMapFormat10", "sun.font.CMap", "CMapFormat10", $STATIC},
	{"sun.font.CMap$CMapFormat8", "sun.font.CMap", "CMapFormat8", $STATIC},
	{"sun.font.CMap$CMapFormat6", "sun.font.CMap", "CMapFormat6", $STATIC},
	{"sun.font.CMap$CMapFormat2", "sun.font.CMap", "CMapFormat2", $STATIC},
	{"sun.font.CMap$CMapFormat0", "sun.font.CMap", "CMapFormat0", $STATIC},
	{"sun.font.CMap$CMapFormat4", "sun.font.CMap", "CMapFormat4", $STATIC},
	{}
};

$ClassInfo _CMap_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.font.CMap",
	"java.lang.Object",
	nullptr,
	_CMap_FieldInfo_,
	_CMap_MethodInfo_,
	nullptr,
	nullptr,
	_CMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.CMap$UVS,sun.font.CMap$NullCMapClass,sun.font.CMap$CMapFormat12,sun.font.CMap$CMapFormat10,sun.font.CMap$CMapFormat8,sun.font.CMap$CMapFormat6,sun.font.CMap$CMapFormat2,sun.font.CMap$CMapFormat0,sun.font.CMap$CMapFormat4"
};

$Object* allocate$CMap($Class* clazz) {
	return $of($alloc(CMap));
}

$charArray2* CMap::converterMaps = nullptr;
$CMap$NullCMapClass* CMap::theNullCmap = nullptr;

void CMap::init$() {
	$set(this, uvs, nullptr);
}

CMap* CMap::initialize($TrueTypeFont* font) {
	$init(CMap);
	$useLocalCurrentObjectStackCache();
	$var(CMap, cmap, nullptr);
	int32_t offset = 0;
	int32_t platformID = 0;
	int32_t encodingID = -1;
	int32_t three0 = 0;
	int32_t three1 = 0;
	int32_t three2 = 0;
	int32_t three3 = 0;
	int32_t three4 = 0;
	int32_t three5 = 0;
	int32_t three6 = 0;
	int32_t three10 = 0;
	int32_t zero5 = 0;
	bool threeStar = false;
	$var($ByteBuffer, cmapBuffer, $nc(font)->getTableBuffer($TrueTypeFont::cmapTag));
	int32_t cmapTableOffset = font->getTableSize($TrueTypeFont::cmapTag);
	int16_t numberSubTables = $nc(cmapBuffer)->getShort(2);
	for (int32_t i = 0; i < numberSubTables; ++i) {
		cmapBuffer->position(i * 8 + 4);
		platformID = cmapBuffer->getShort();
		if (platformID == 3) {
			threeStar = true;
			encodingID = cmapBuffer->getShort();
			offset = cmapBuffer->getInt();
			switch (encodingID) {
			case 0:
				{
					three0 = offset;
					break;
				}
			case 1:
				{
					three1 = offset;
					break;
				}
			case 2:
				{
					three2 = offset;
					break;
				}
			case 3:
				{
					three3 = offset;
					break;
				}
			case 4:
				{
					three4 = offset;
					break;
				}
			case 5:
				{
					three5 = offset;
					break;
				}
			case 6:
				{
					three6 = offset;
					break;
				}
			case 10:
				{
					three10 = offset;
					break;
				}
			}
		} else if (platformID == 0) {
			encodingID = cmapBuffer->getShort();
			offset = cmapBuffer->getInt();
			if (encodingID == 5) {
				zero5 = offset;
			}
		}
	}
	if (threeStar) {
		if (three10 != 0) {
			$assign(cmap, createCMap(cmapBuffer, three10, nullptr));
		} else if (three0 != 0) {
			$assign(cmap, createCMap(cmapBuffer, three0, nullptr));
		} else if (three1 != 0) {
			$assign(cmap, createCMap(cmapBuffer, three1, nullptr));
		} else if (three2 != 0) {
			$assign(cmap, createCMap(cmapBuffer, three2, $(getConverterMap(CMap::ShiftJISEncoding))));
		} else if (three3 != 0) {
			$assign(cmap, createCMap(cmapBuffer, three3, $(getConverterMap(CMap::GBKEncoding))));
		} else if (three4 != 0) {
			$assign(cmap, createCMap(cmapBuffer, three4, $(getConverterMap(CMap::Big5Encoding))));
		} else if (three5 != 0) {
			$assign(cmap, createCMap(cmapBuffer, three5, $(getConverterMap(CMap::WansungEncoding))));
		} else if (three6 != 0) {
			$assign(cmap, createCMap(cmapBuffer, three6, $(getConverterMap(CMap::JohabEncoding))));
		}
	} else {
		$assign(cmap, createCMap(cmapBuffer, cmapBuffer->getInt(8), nullptr));
	}
	if (cmap != nullptr && zero5 != 0) {
		cmap->createUVS(cmapBuffer, zero5);
	}
	return cmap;
}

$chars* CMap::getConverter(int16_t encodingID) {
	$init(CMap);
	$useLocalCurrentObjectStackCache();
	int32_t dBegin = 32768;
	int32_t dEnd = 0x0000FFFF;
	$var($String, encoding, nullptr);
	switch (encodingID) {
	case CMap::ShiftJISEncoding:
		{
			dBegin = 0x00008140;
			dEnd = 0x0000FCFC;
			$assign(encoding, "SJIS"_s);
			break;
		}
	case CMap::GBKEncoding:
		{
			dBegin = 0x00008140;
			dEnd = 0x0000FEA0;
			$assign(encoding, "GBK"_s);
			break;
		}
	case CMap::Big5Encoding:
		{
			dBegin = 0x0000A140;
			dEnd = 0x0000FEFE;
			$assign(encoding, "Big5"_s);
			break;
		}
	case CMap::WansungEncoding:
		{
			dBegin = 0x0000A1A1;
			dEnd = 0x0000FEDE;
			$assign(encoding, "EUC_KR"_s);
			break;
		}
	case CMap::JohabEncoding:
		{
			dBegin = 0x00008141;
			dEnd = 0x0000FDFE;
			$assign(encoding, "Johab"_s);
			break;
		}
	default:
		{
			return nullptr;
		}
	}
	try {
		$var($chars, convertedChars, $new($chars, 0x00010000));
		for (int32_t i = 0; i < 0x00010000; ++i) {
			convertedChars->set(i, CMap::noSuchChar);
		}
		$var($bytes, inputBytes, $new($bytes, (dEnd - dBegin + 1) * 2));
		$var($chars, outputChars, $new($chars, (dEnd - dBegin + 1)));
		int32_t j = 0;
		int32_t firstByte = 0;
		if (encodingID == CMap::ShiftJISEncoding) {
			for (int32_t i = dBegin; i <= dEnd; ++i) {
				firstByte = ((int32_t)((i >> 8) & (uint32_t)255));
				if (firstByte >= 161 && firstByte <= 223) {
					inputBytes->set(j++, (int8_t)255);
					inputBytes->set(j++, (int8_t)255);
				} else {
					inputBytes->set(j++, (int8_t)firstByte);
					inputBytes->set(j++, (int8_t)((int32_t)(i & (uint32_t)255)));
				}
			}
		} else {
			for (int32_t i = dBegin; i <= dEnd; ++i) {
				inputBytes->set(j++, (int8_t)((int32_t)((i >> 8) & (uint32_t)255)));
				inputBytes->set(j++, (int8_t)((int32_t)(i & (uint32_t)255)));
			}
		}
		$init($CodingErrorAction);
		$var($ByteBuffer, var$0, $ByteBuffer::wrap(inputBytes, 0, inputBytes->length));
		$nc($($nc($($nc($($nc($($nc($($Charset::forName(encoding)))->newDecoder()))->onMalformedInput($CodingErrorAction::REPLACE)))->onUnmappableCharacter($CodingErrorAction::REPLACE)))->replaceWith($cstr({'\0'}))))->decode(var$0, $($CharBuffer::wrap(outputChars, 0, outputChars->length)), true);
		for (int32_t i = 32; i <= 126; ++i) {
			convertedChars->set(i, (char16_t)i);
		}
		if (encodingID == CMap::ShiftJISEncoding) {
			for (int32_t i = 161; i <= 223; ++i) {
				convertedChars->set(i, (char16_t)(i - 161 + 0x0000FF61));
			}
		}
		$System::arraycopy(outputChars, 0, convertedChars, dBegin, outputChars->length);
		$var($chars, invertedChars, $new($chars, 0x00010000));
		for (int32_t i = 0; i < 0x00010000; ++i) {
			if (convertedChars->get(i) != CMap::noSuchChar) {
				invertedChars->set(convertedChars->get(i), (char16_t)i);
			}
		}
		return invertedChars;
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		e->printStackTrace();
	}
	return nullptr;
}

$chars* CMap::getConverterMap(int16_t encodingID) {
	$init(CMap);
	if ($nc(CMap::converterMaps)->get(encodingID) == nullptr) {
		$nc(CMap::converterMaps)->set(encodingID, $(getConverter(encodingID)));
	}
	return $nc(CMap::converterMaps)->get(encodingID);
}

CMap* CMap::createCMap($ByteBuffer* buffer, int32_t offset, $chars* xlat) {
	$init(CMap);
	$useLocalCurrentObjectStackCache();
	int32_t subtableFormat = $nc(buffer)->getChar(offset);
	int64_t subtableLength = 0;
	if (subtableFormat < 8) {
		subtableLength = buffer->getChar(offset + 2);
	} else {
		subtableLength = (int32_t)(buffer->getInt(offset + 4) & (uint32_t)CMap::INTMASK);
	}
	bool var$0 = $FontUtilities::isLogging();
	if (var$0 && offset + subtableLength > buffer->capacity()) {
		$FontUtilities::logWarning("Cmap subtable overflows buffer."_s);
	}
	switch (subtableFormat) {
	case 0:
		{
			return $new($CMap$CMapFormat0, buffer, offset);
		}
	case 2:
		{
			return $new($CMap$CMapFormat2, buffer, offset, xlat);
		}
	case 4:
		{
			return $new($CMap$CMapFormat4, buffer, offset, xlat);
		}
	case 6:
		{
			return $new($CMap$CMapFormat6, buffer, offset, xlat);
		}
	case 8:
		{
			return $new($CMap$CMapFormat8, buffer, offset, xlat);
		}
	case 10:
		{
			return $new($CMap$CMapFormat10, buffer, offset, xlat);
		}
	case 12:
		{
			return $new($CMap$CMapFormat12, buffer, offset, xlat);
		}
	default:
		{
			$throwNew($RuntimeException, $$str({"Cmap format unimplemented: "_s, $$str((int32_t)buffer->getChar(offset))}));
		}
	}
}

void CMap::createUVS($ByteBuffer* buffer, int32_t offset) {
	int32_t subtableFormat = $nc(buffer)->getChar(offset);
	if (subtableFormat == 14) {
		int64_t subtableLength = (int32_t)(buffer->getInt(offset + 2) & (uint32_t)CMap::INTMASK);
		bool var$0 = $FontUtilities::isLogging();
		if (var$0 && offset + subtableLength > buffer->capacity()) {
			$FontUtilities::logWarning("Cmap UVS subtable overflows buffer."_s);
		}
		try {
			$set(this, uvs, $new($CMap$UVS, buffer, offset));
		} catch ($Throwable&) {
			$catch();
		}
	}
	return;
}

int32_t CMap::getControlCodeGlyph(int32_t charCode, bool noSurrogates) {
	if (charCode < 16) {
		switch (charCode) {
		case 9:
			{}
		case 10:
			{}
		case 13:
			{
				return $CharToGlyphMapper::INVISIBLE_GLYPH_ID;
			}
		}
	} else if (noSurrogates && charCode >= 0x0000FFFF) {
		return 0;
	}
	return -1;
}

char16_t CMap::getFormatCharGlyph(int32_t charCode) {
	if (charCode >= 8204) {
		if ((charCode <= 8207) || (charCode >= 8232 && charCode <= 8238) || (charCode >= 8298 && charCode <= 8303)) {
			return (char16_t)$CharToGlyphMapper::INVISIBLE_GLYPH_ID;
		}
	}
	return (char16_t)0;
}

char16_t CMap::getVariationGlyph(int32_t charCode, int32_t variationSelector) {
	char16_t glyph = (char16_t)0;
	if (this->uvs == nullptr) {
		glyph = getGlyph(charCode);
	} else {
		int32_t result = $nc(this->uvs)->getGlyph(charCode, variationSelector);
		if (result > 0) {
			glyph = (char16_t)((int32_t)(result & (uint32_t)0x0000FFFF));
		} else {
			glyph = getGlyph(charCode);
		}
	}
	return glyph;
}

void clinit$CMap($Class* class$) {
	$assignStatic(CMap::converterMaps, $new($charArray2, 7));
	$assignStatic(CMap::theNullCmap, $new($CMap$NullCMapClass));
}

CMap::CMap() {
}

$Class* CMap::load$($String* name, bool initialize) {
	$loadClass(CMap, name, initialize, &_CMap_ClassInfo_, clinit$CMap, allocate$CMap);
	return class$;
}

$Class* CMap::class$ = nullptr;

	} // font
} // sun