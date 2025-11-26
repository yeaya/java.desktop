#include <sun/font/CMap$CMapFormat2.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <sun/font/CMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CMap = ::sun::font::CMap;

namespace sun {
	namespace font {

$FieldInfo _CMap$CMapFormat2_FieldInfo_[] = {
	{"subHeaderKey", "[C", nullptr, 0, $field(CMap$CMapFormat2, subHeaderKey)},
	{"firstCodeArray", "[C", nullptr, 0, $field(CMap$CMapFormat2, firstCodeArray)},
	{"entryCountArray", "[C", nullptr, 0, $field(CMap$CMapFormat2, entryCountArray)},
	{"idDeltaArray", "[S", nullptr, 0, $field(CMap$CMapFormat2, idDeltaArray)},
	{"idRangeOffSetArray", "[C", nullptr, 0, $field(CMap$CMapFormat2, idRangeOffSetArray)},
	{"glyphIndexArray", "[C", nullptr, 0, $field(CMap$CMapFormat2, glyphIndexArray)},
	{}
};

$MethodInfo _CMap$CMapFormat2_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;I[C)V", nullptr, 0, $method(static_cast<void(CMap$CMapFormat2::*)($ByteBuffer*,int32_t,$chars*)>(&CMap$CMapFormat2::init$))},
	{"getGlyph", "(I)C", nullptr, 0},
	{}
};

$InnerClassInfo _CMap$CMapFormat2_InnerClassesInfo_[] = {
	{"sun.font.CMap$CMapFormat2", "sun.font.CMap", "CMapFormat2", $STATIC},
	{}
};

$ClassInfo _CMap$CMapFormat2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CMap$CMapFormat2",
	"sun.font.CMap",
	nullptr,
	_CMap$CMapFormat2_FieldInfo_,
	_CMap$CMapFormat2_MethodInfo_,
	nullptr,
	nullptr,
	_CMap$CMapFormat2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CMap"
};

$Object* allocate$CMap$CMapFormat2($Class* clazz) {
	return $of($alloc(CMap$CMapFormat2));
}

void CMap$CMapFormat2::init$($ByteBuffer* buffer, int32_t offset, $chars* xlat) {
	$CMap::init$();
	$set(this, subHeaderKey, $new($chars, 256));
	$set(this, xlat, xlat);
	int32_t tableLen = $nc(buffer)->getChar(offset + 2);
	buffer->position(offset + 6);
	$var($CharBuffer, cBuffer, buffer->asCharBuffer());
	char16_t maxSubHeader = (char16_t)0;
	for (int32_t i = 0; i < 256; ++i) {
		$nc(this->subHeaderKey)->set(i, $nc(cBuffer)->get());
		if ($nc(this->subHeaderKey)->get(i) > maxSubHeader) {
			maxSubHeader = $nc(this->subHeaderKey)->get(i);
		}
	}
	int32_t numSubHeaders = (maxSubHeader >> 3) + 1;
	$set(this, firstCodeArray, $new($chars, numSubHeaders));
	$set(this, entryCountArray, $new($chars, numSubHeaders));
	$set(this, idDeltaArray, $new($shorts, numSubHeaders));
	$set(this, idRangeOffSetArray, $new($chars, numSubHeaders));
	for (int32_t i = 0; i < numSubHeaders; ++i) {
		$nc(this->firstCodeArray)->set(i, $nc(cBuffer)->get());
		$nc(this->entryCountArray)->set(i, cBuffer->get());
		$nc(this->idDeltaArray)->set(i, (int16_t)cBuffer->get());
		$nc(this->idRangeOffSetArray)->set(i, cBuffer->get());
	}
	int32_t glyphIndexArrSize = (tableLen - 518 - numSubHeaders * 8) / 2;
	$set(this, glyphIndexArray, $new($chars, glyphIndexArrSize));
	for (int32_t i = 0; i < glyphIndexArrSize; ++i) {
		$nc(this->glyphIndexArray)->set(i, $nc(cBuffer)->get());
	}
}

char16_t CMap$CMapFormat2::getGlyph(int32_t charCode) {
	int32_t origCharCode = charCode;
	int32_t controlGlyph = getControlCodeGlyph(charCode, true);
	if (controlGlyph >= 0) {
		return (char16_t)controlGlyph;
	}
	if (this->xlat != nullptr) {
		charCode = $nc(this->xlat)->get(charCode);
	}
	char16_t highByte = (char16_t)(charCode >> 8);
	char16_t lowByte = (char16_t)((int32_t)(charCode & (uint32_t)255));
	int32_t key = $nc(this->subHeaderKey)->get(highByte) >> 3;
	char16_t mapMe = 0;
	if (key != 0) {
		mapMe = lowByte;
	} else {
		mapMe = highByte;
		if (mapMe == 0) {
			mapMe = lowByte;
		}
	}
	char16_t firstCode = $nc(this->firstCodeArray)->get(key);
	if (mapMe < firstCode) {
		return (char16_t)0;
	} else {
		mapMe -= firstCode;
	}
	if (mapMe < $nc(this->entryCountArray)->get(key)) {
		int32_t glyphArrayOffset = (($nc(this->idRangeOffSetArray)->length - key) * 8) - 6;
		int32_t glyphSubArrayStart = ($nc(this->idRangeOffSetArray)->get(key) - glyphArrayOffset) / 2;
		char16_t glyphCode = $nc(this->glyphIndexArray)->get(glyphSubArrayStart + mapMe);
		if (glyphCode != 0) {
			glyphCode += $nc(this->idDeltaArray)->get(key);
			return glyphCode;
		}
	}
	return getFormatCharGlyph(origCharCode);
}

CMap$CMapFormat2::CMap$CMapFormat2() {
}

$Class* CMap$CMapFormat2::load$($String* name, bool initialize) {
	$loadClass(CMap$CMapFormat2, name, initialize, &_CMap$CMapFormat2_ClassInfo_, allocate$CMap$CMapFormat2);
	return class$;
}

$Class* CMap$CMapFormat2::class$ = nullptr;

	} // font
} // sun