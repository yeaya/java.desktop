#include <sun/font/CMap$CMapFormat4.h>

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

$FieldInfo _CMap$CMapFormat4_FieldInfo_[] = {
	{"segCount", "I", nullptr, 0, $field(CMap$CMapFormat4, segCount)},
	{"entrySelector", "I", nullptr, 0, $field(CMap$CMapFormat4, entrySelector)},
	{"rangeShift", "I", nullptr, 0, $field(CMap$CMapFormat4, rangeShift)},
	{"endCount", "[C", nullptr, 0, $field(CMap$CMapFormat4, endCount)},
	{"startCount", "[C", nullptr, 0, $field(CMap$CMapFormat4, startCount)},
	{"idDelta", "[S", nullptr, 0, $field(CMap$CMapFormat4, idDelta)},
	{"idRangeOffset", "[C", nullptr, 0, $field(CMap$CMapFormat4, idRangeOffset)},
	{"glyphIds", "[C", nullptr, 0, $field(CMap$CMapFormat4, glyphIds)},
	{}
};

$MethodInfo _CMap$CMapFormat4_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;I[C)V", nullptr, 0, $method(static_cast<void(CMap$CMapFormat4::*)($ByteBuffer*,int32_t,$chars*)>(&CMap$CMapFormat4::init$))},
	{"getGlyph", "(I)C", nullptr, 0},
	{}
};

$InnerClassInfo _CMap$CMapFormat4_InnerClassesInfo_[] = {
	{"sun.font.CMap$CMapFormat4", "sun.font.CMap", "CMapFormat4", $STATIC},
	{}
};

$ClassInfo _CMap$CMapFormat4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CMap$CMapFormat4",
	"sun.font.CMap",
	nullptr,
	_CMap$CMapFormat4_FieldInfo_,
	_CMap$CMapFormat4_MethodInfo_,
	nullptr,
	nullptr,
	_CMap$CMapFormat4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CMap"
};

$Object* allocate$CMap$CMapFormat4($Class* clazz) {
	return $of($alloc(CMap$CMapFormat4));
}

void CMap$CMapFormat4::init$($ByteBuffer* bbuffer, int32_t offset, $chars* xlat) {
	$CMap::init$();
	$set(this, xlat, xlat);
	$nc(bbuffer)->position(offset);
	$var($CharBuffer, buffer, bbuffer->asCharBuffer());
	$nc(buffer)->get();
	int32_t subtableLength = buffer->get();
	if (offset + subtableLength > bbuffer->capacity()) {
		subtableLength = bbuffer->capacity() - offset;
	}
	buffer->get();
	this->segCount = buffer->get() / 2;
	int32_t searchRange = buffer->get();
	this->entrySelector = buffer->get();
	this->rangeShift = buffer->get() / 2;
	$set(this, startCount, $new($chars, this->segCount));
	$set(this, endCount, $new($chars, this->segCount));
	$set(this, idDelta, $new($shorts, this->segCount));
	$set(this, idRangeOffset, $new($chars, this->segCount));
	for (int32_t i = 0; i < this->segCount; ++i) {
		$nc(this->endCount)->set(i, buffer->get());
	}
	buffer->get();
	for (int32_t i = 0; i < this->segCount; ++i) {
		$nc(this->startCount)->set(i, buffer->get());
	}
	for (int32_t i = 0; i < this->segCount; ++i) {
		$nc(this->idDelta)->set(i, (int16_t)buffer->get());
	}
	for (int32_t i = 0; i < this->segCount; ++i) {
		char16_t ctmp = buffer->get();
		$nc(this->idRangeOffset)->set(i, (char16_t)((int32_t)((ctmp >> 1) & (uint32_t)0x0000FFFF)));
	}
	int32_t pos = (this->segCount * 8 + 16) / 2;
	buffer->position(pos);
	int32_t numGlyphIds = (subtableLength / 2 - pos);
	$set(this, glyphIds, $new($chars, numGlyphIds));
	for (int32_t i = 0; i < numGlyphIds; ++i) {
		$nc(this->glyphIds)->set(i, buffer->get());
	}
}

char16_t CMap$CMapFormat4::getGlyph(int32_t charCode) {
	int32_t origCharCode = charCode;
	int32_t index = 0;
	char16_t glyphCode = (char16_t)0;
	int32_t controlGlyph = getControlCodeGlyph(charCode, true);
	if (controlGlyph >= 0) {
		return (char16_t)controlGlyph;
	}
	if (this->xlat != nullptr) {
		charCode = $nc(this->xlat)->get(charCode);
	}
	int32_t left = 0;
	int32_t right = $nc(this->startCount)->length;
	index = $nc(this->startCount)->length >> 1;
	while (left < right) {
		if ($nc(this->endCount)->get(index) < charCode) {
			left = index + 1;
		} else {
			right = index;
		}
		index = (left + right) >> 1;
	}
	if (charCode >= $nc(this->startCount)->get(index) && charCode <= $nc(this->endCount)->get(index)) {
		int32_t rangeOffset = $nc(this->idRangeOffset)->get(index);
		if (rangeOffset == 0) {
			glyphCode = (char16_t)(charCode + $nc(this->idDelta)->get(index));
		} else {
			int32_t glyphIDIndex = rangeOffset - this->segCount + index + (charCode - $nc(this->startCount)->get(index));
			glyphCode = $nc(this->glyphIds)->get(glyphIDIndex);
			if (glyphCode != 0) {
				glyphCode = (char16_t)(glyphCode + $nc(this->idDelta)->get(index));
			}
		}
	}
	if (glyphCode == 0) {
		glyphCode = getFormatCharGlyph(origCharCode);
	}
	return glyphCode;
}

CMap$CMapFormat4::CMap$CMapFormat4() {
}

$Class* CMap$CMapFormat4::load$($String* name, bool initialize) {
	$loadClass(CMap$CMapFormat4, name, initialize, &_CMap$CMapFormat4_ClassInfo_, allocate$CMap$CMapFormat4);
	return class$;
}

$Class* CMap$CMapFormat4::class$ = nullptr;

	} // font
} // sun