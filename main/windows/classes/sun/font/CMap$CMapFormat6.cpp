#include <sun/font/CMap$CMapFormat6.h>

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

$FieldInfo _CMap$CMapFormat6_FieldInfo_[] = {
	{"firstCode", "C", nullptr, 0, $field(CMap$CMapFormat6, firstCode)},
	{"entryCount", "C", nullptr, 0, $field(CMap$CMapFormat6, entryCount)},
	{"glyphIdArray", "[C", nullptr, 0, $field(CMap$CMapFormat6, glyphIdArray)},
	{}
};

$MethodInfo _CMap$CMapFormat6_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;I[C)V", nullptr, 0, $method(static_cast<void(CMap$CMapFormat6::*)($ByteBuffer*,int32_t,$chars*)>(&CMap$CMapFormat6::init$))},
	{"getGlyph", "(I)C", nullptr, 0},
	{}
};

$InnerClassInfo _CMap$CMapFormat6_InnerClassesInfo_[] = {
	{"sun.font.CMap$CMapFormat6", "sun.font.CMap", "CMapFormat6", $STATIC},
	{}
};

$ClassInfo _CMap$CMapFormat6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CMap$CMapFormat6",
	"sun.font.CMap",
	nullptr,
	_CMap$CMapFormat6_FieldInfo_,
	_CMap$CMapFormat6_MethodInfo_,
	nullptr,
	nullptr,
	_CMap$CMapFormat6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CMap"
};

$Object* allocate$CMap$CMapFormat6($Class* clazz) {
	return $of($alloc(CMap$CMapFormat6));
}

void CMap$CMapFormat6::init$($ByteBuffer* bbuffer, int32_t offset, $chars* xlat) {
	$CMap::init$();
	$nc(bbuffer)->position(offset + 6);
	$var($CharBuffer, buffer, bbuffer->asCharBuffer());
	this->firstCode = $nc(buffer)->get();
	this->entryCount = buffer->get();
	$set(this, glyphIdArray, $new($chars, this->entryCount));
	for (int32_t i = 0; i < this->entryCount; ++i) {
		$nc(this->glyphIdArray)->set(i, buffer->get());
	}
}

char16_t CMap$CMapFormat6::getGlyph(int32_t charCode) {
	int32_t origCharCode = charCode;
	int32_t controlGlyph = getControlCodeGlyph(charCode, true);
	if (controlGlyph >= 0) {
		return (char16_t)controlGlyph;
	}
	if (this->xlat != nullptr) {
		charCode = $nc(this->xlat)->get(charCode);
	}
	charCode -= this->firstCode;
	if (charCode < 0 || charCode >= this->entryCount) {
		return getFormatCharGlyph(origCharCode);
	} else {
		return $nc(this->glyphIdArray)->get(charCode);
	}
}

CMap$CMapFormat6::CMap$CMapFormat6() {
}

$Class* CMap$CMapFormat6::load$($String* name, bool initialize) {
	$loadClass(CMap$CMapFormat6, name, initialize, &_CMap$CMapFormat6_ClassInfo_, allocate$CMap$CMapFormat6);
	return class$;
}

$Class* CMap$CMapFormat6::class$ = nullptr;

	} // font
} // sun