#include <sun/font/CMap$CMapFormat10.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <sun/font/CMap.h>
#include <jcpp.h>

#undef INTMASK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CMap = ::sun::font::CMap;

namespace sun {
	namespace font {

$FieldInfo _CMap$CMapFormat10_FieldInfo_[] = {
	{"firstCode", "J", nullptr, 0, $field(CMap$CMapFormat10, firstCode)},
	{"entryCount", "I", nullptr, 0, $field(CMap$CMapFormat10, entryCount)},
	{"glyphIdArray", "[C", nullptr, 0, $field(CMap$CMapFormat10, glyphIdArray)},
	{}
};

$MethodInfo _CMap$CMapFormat10_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;I[C)V", nullptr, 0, $method(static_cast<void(CMap$CMapFormat10::*)($ByteBuffer*,int32_t,$chars*)>(&CMap$CMapFormat10::init$))},
	{"getGlyph", "(I)C", nullptr, 0},
	{}
};

$InnerClassInfo _CMap$CMapFormat10_InnerClassesInfo_[] = {
	{"sun.font.CMap$CMapFormat10", "sun.font.CMap", "CMapFormat10", $STATIC},
	{}
};

$ClassInfo _CMap$CMapFormat10_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CMap$CMapFormat10",
	"sun.font.CMap",
	nullptr,
	_CMap$CMapFormat10_FieldInfo_,
	_CMap$CMapFormat10_MethodInfo_,
	nullptr,
	nullptr,
	_CMap$CMapFormat10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CMap"
};

$Object* allocate$CMap$CMapFormat10($Class* clazz) {
	return $of($alloc(CMap$CMapFormat10));
}

void CMap$CMapFormat10::init$($ByteBuffer* bbuffer, int32_t offset, $chars* xlat) {
	$CMap::init$();
	$nc(bbuffer)->position(offset + 12);
	this->firstCode = (int32_t)(bbuffer->getInt() & (uint32_t)$CMap::INTMASK);
	this->entryCount = (int32_t)(bbuffer->getInt() & (uint32_t)$CMap::INTMASK);
	if (bbuffer->remaining() < (2 * (int64_t)this->entryCount)) {
		$throwNew($RuntimeException, "Format 10 table exceeded"_s);
	}
	$var($CharBuffer, buffer, bbuffer->asCharBuffer());
	$set(this, glyphIdArray, $new($chars, this->entryCount));
	for (int32_t i = 0; i < this->entryCount; ++i) {
		$nc(this->glyphIdArray)->set(i, $nc(buffer)->get());
	}
}

char16_t CMap$CMapFormat10::getGlyph(int32_t charCode) {
	if (this->xlat != nullptr) {
		$throwNew($RuntimeException, "xlat array for cmap fmt=10"_s);
	}
	int32_t code = (int32_t)(charCode - this->firstCode);
	if (code < 0 || code >= this->entryCount) {
		return (char16_t)0;
	} else {
		return $nc(this->glyphIdArray)->get(code);
	}
}

CMap$CMapFormat10::CMap$CMapFormat10() {
}

$Class* CMap$CMapFormat10::load$($String* name, bool initialize) {
	$loadClass(CMap$CMapFormat10, name, initialize, &_CMap$CMapFormat10_ClassInfo_, allocate$CMap$CMapFormat10);
	return class$;
}

$Class* CMap$CMapFormat10::class$ = nullptr;

	} // font
} // sun