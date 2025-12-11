#include <sun/font/XMap.h>

#include <java/lang/reflect/Constructor.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

#undef DOUBLE_BYTE
#undef REPLACE
#undef SINGLE_BYTE
#undef SURR_MAX
#undef SURR_MIN

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $HashMap = ::java::util::HashMap;

namespace sun {
	namespace font {

$FieldInfo _XMap_FieldInfo_[] = {
	{"xMappers", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Lsun/font/XMap;>;", $PRIVATE | $STATIC, $staticField(XMap, xMappers)},
	{"convertedGlyphs", "[C", nullptr, 0, $field(XMap, convertedGlyphs)},
	{"SINGLE_BYTE", "I", nullptr, $STATIC | $FINAL, $constField(XMap, SINGLE_BYTE)},
	{"DOUBLE_BYTE", "I", nullptr, $STATIC | $FINAL, $constField(XMap, DOUBLE_BYTE)},
	{"SURR_MIN", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMap, SURR_MIN)},
	{"SURR_MAX", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMap, SURR_MAX)},
	{}
};

$MethodInfo _XMap_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IIIZZ)V", nullptr, $PRIVATE, $method(static_cast<void(XMap::*)($String*,int32_t,int32_t,int32_t,bool,bool)>(&XMap::init$))},
	{"getXMapper", "(Ljava/lang/String;)Lsun/font/XMap;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<XMap*(*)($String*)>(&XMap::getXMapper))},
	{"getXMapperInternal", "(Ljava/lang/String;)Lsun/font/XMap;", nullptr, $PRIVATE | $STATIC, $method(static_cast<XMap*(*)($String*)>(&XMap::getXMapperInternal))},
	{}
};

$ClassInfo _XMap_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.XMap",
	"java.lang.Object",
	nullptr,
	_XMap_FieldInfo_,
	_XMap_MethodInfo_
};

$Object* allocate$XMap($Class* clazz) {
	return $of($alloc(XMap));
}

$HashMap* XMap::xMappers = nullptr;

XMap* XMap::getXMapper($String* encoding) {
	$load(XMap);
	$synchronized(class$) {
		$init(XMap);
		$var(XMap, mapper, $cast(XMap, $nc(XMap::xMappers)->get(encoding)));
		if (mapper == nullptr) {
			$assign(mapper, getXMapperInternal(encoding));
			$nc(XMap::xMappers)->put(encoding, mapper);
		}
		return mapper;
	}
}

XMap* XMap::getXMapperInternal($String* encoding) {
	$init(XMap);
	$var($String, jclass, nullptr);
	int32_t nBytes = XMap::SINGLE_BYTE;
	int32_t maxU = 0x0000FFFF;
	int32_t minU = 0;
	bool addAscii = false;
	bool lowPartOnly = false;
	if ($nc(encoding)->equals("dingbats"_s)) {
		$assign(jclass, "sun.font.X11Dingbats"_s);
		minU = 9985;
		maxU = 10174;
	} else if (encoding->equals("symbol"_s)) {
		$assign(jclass, "sun.awt.Symbol"_s);
		minU = 913;
		maxU = 8943;
	} else if (encoding->equals("iso8859-1"_s)) {
		maxU = 255;
	} else if (encoding->equals("iso8859-2"_s)) {
		$assign(jclass, "ISO8859_2"_s);
	} else if (encoding->equals("jisx0208.1983-0"_s)) {
		$assign(jclass, "JIS0208"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->equals("jisx0201.1976-0"_s)) {
		$assign(jclass, "JIS0201"_s);
		addAscii = true;
		lowPartOnly = true;
	} else if (encoding->equals("jisx0212.1990-0"_s)) {
		$assign(jclass, "JIS0212"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->equals("iso8859-4"_s)) {
		$assign(jclass, "ISO8859_4"_s);
	} else if (encoding->equals("iso8859-5"_s)) {
		$assign(jclass, "ISO8859_5"_s);
	} else if (encoding->equals("koi8-r"_s)) {
		$assign(jclass, "KOI8_R"_s);
	} else if (encoding->equals("ansi-1251"_s)) {
		$assign(jclass, "windows-1251"_s);
	} else if (encoding->equals("iso8859-6"_s)) {
		$assign(jclass, "ISO8859_6"_s);
	} else if (encoding->equals("iso8859-7"_s)) {
		$assign(jclass, "ISO8859_7"_s);
	} else if (encoding->equals("iso8859-8"_s)) {
		$assign(jclass, "ISO8859_8"_s);
	} else if (encoding->equals("iso8859-9"_s)) {
		$assign(jclass, "ISO8859_9"_s);
	} else if (encoding->equals("iso8859-13"_s)) {
		$assign(jclass, "ISO8859_13"_s);
	} else if (encoding->equals("iso8859-15"_s)) {
		$assign(jclass, "ISO8859_15"_s);
	} else if (encoding->equals("ksc5601.1987-0"_s)) {
		$assign(jclass, "sun.font.X11KSC5601"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->equals("ksc5601.1992-3"_s)) {
		$assign(jclass, "sun.font.X11Johab"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->equals("ksc5601.1987-1"_s)) {
		$assign(jclass, "EUC_KR"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->equals("cns11643-1"_s)) {
		$assign(jclass, "sun.font.X11CNS11643P1"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->equals("cns11643-2"_s)) {
		$assign(jclass, "sun.font.X11CNS11643P2"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->equals("cns11643-3"_s)) {
		$assign(jclass, "sun.font.X11CNS11643P3"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->equals("gb2312.1980-0"_s)) {
		$assign(jclass, "sun.font.X11GB2312"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->indexOf("big5"_s) >= 0) {
		$assign(jclass, "Big5"_s);
		nBytes = XMap::DOUBLE_BYTE;
		addAscii = true;
	} else if (encoding->equals("tis620.2533-0"_s)) {
		$assign(jclass, "TIS620"_s);
	} else if (encoding->equals("gbk-0"_s)) {
		$assign(jclass, "sun.font.X11GBK"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->indexOf("sun.unicode-0"_s) >= 0) {
		$assign(jclass, "sun.font.X11SunUnicode_0"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->indexOf("gb18030.2000-1"_s) >= 0) {
		$assign(jclass, "sun.font.X11GB18030_1"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->indexOf("gb18030.2000-0"_s) >= 0) {
		$assign(jclass, "sun.font.X11GB18030_0"_s);
		nBytes = XMap::DOUBLE_BYTE;
	} else if (encoding->indexOf("hkscs"_s) >= 0) {
		$assign(jclass, "MS950_HKSCS_XP"_s);
		nBytes = XMap::DOUBLE_BYTE;
	}
	return $new(XMap, jclass, minU, maxU, nBytes, addAscii, lowPartOnly);
}

void XMap::init$($String* className, int32_t minU, int32_t maxU, int32_t nBytes, bool addAscii, bool lowPartOnly) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($CharsetEncoder, enc, nullptr);
	if (className != nullptr) {
		try {
			if (className->startsWith("sun.awt"_s)) {
				$assign(enc, $nc(($cast($Charset, $($nc($($Class::forName(className)->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))))))->newEncoder());
			} else {
				$assign(enc, $nc($($Charset::forName(className)))->newEncoder());
			}
		} catch ($Exception& x) {
			x->printStackTrace();
		}
	}
	if (enc == nullptr) {
		$set(this, convertedGlyphs, $new($chars, 256));
		for (int32_t i = 0; i < 256; ++i) {
			$nc(this->convertedGlyphs)->set(i, (char16_t)i);
		}
		return;
	} else {
		int32_t count = maxU - minU + 1;
		$var($bytes, bytes, $new($bytes, count * nBytes));
		$var($chars, chars, $new($chars, count));
		for (int32_t i = 0; i < count; ++i) {
			chars->set(i, (char16_t)(minU + i));
		}
		int32_t startCharIndex = 0;
		if (nBytes > XMap::SINGLE_BYTE && minU < 256) {
			startCharIndex = 256 - minU;
		}
		$var($bytes, rbytes, $new($bytes, nBytes));
		try {
			int32_t cbLen = 0;
			int32_t bbLen = 0;
			if (startCharIndex < XMap::SURR_MIN && startCharIndex + count > XMap::SURR_MAX) {
				cbLen = XMap::SURR_MIN - startCharIndex;
				bbLen = cbLen * nBytes;
				$init($CodingErrorAction);
				$var($CharBuffer, var$0, $CharBuffer::wrap(chars, startCharIndex, cbLen));
				$nc($($nc($($nc($($nc(enc)->onMalformedInput($CodingErrorAction::REPLACE)))->onUnmappableCharacter($CodingErrorAction::REPLACE)))->replaceWith(rbytes)))->encode(var$0, $($ByteBuffer::wrap(bytes, startCharIndex * nBytes, bbLen)), true);
				startCharIndex = XMap::SURR_MAX + 1;
			}
			cbLen = count - startCharIndex;
			bbLen = cbLen * nBytes;
			$init($CodingErrorAction);
			$var($CharBuffer, var$1, $CharBuffer::wrap(chars, startCharIndex, cbLen));
			$nc($($nc($($nc($($nc(enc)->onMalformedInput($CodingErrorAction::REPLACE)))->onUnmappableCharacter($CodingErrorAction::REPLACE)))->replaceWith(rbytes)))->encode(var$1, $($ByteBuffer::wrap(bytes, startCharIndex * nBytes, bbLen)), true);
		} catch ($Exception& e) {
			e->printStackTrace();
		}
		$set(this, convertedGlyphs, $new($chars, 0x00010000));
		for (int32_t i = 0; i < count; ++i) {
			if (nBytes == 1) {
				$nc(this->convertedGlyphs)->set(i + minU, (char16_t)((int32_t)(bytes->get(i) & (uint32_t)255)));
			} else {
				$nc(this->convertedGlyphs)->set(i + minU, (char16_t)((((int32_t)(bytes->get(i * 2) & (uint32_t)255)) << 8) + ((int32_t)(bytes->get(i * 2 + 1) & (uint32_t)255))));
			}
		}
	}
	int32_t max = (lowPartOnly) ? 128 : 256;
	if (addAscii && $nc(this->convertedGlyphs)->length >= 256) {
		for (int32_t i = 0; i < max; ++i) {
			if ($nc(this->convertedGlyphs)->get(i) == 0) {
				$nc(this->convertedGlyphs)->set(i, (char16_t)i);
			}
		}
	}
}

void clinit$XMap($Class* class$) {
	$assignStatic(XMap::xMappers, $new($HashMap));
}

XMap::XMap() {
}

$Class* XMap::load$($String* name, bool initialize) {
	$loadClass(XMap, name, initialize, &_XMap_ClassInfo_, clinit$XMap, allocate$XMap);
	return class$;
}

$Class* XMap::class$ = nullptr;

	} // font
} // sun