#include <sun/font/CMap$CMapFormat8.h>

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
using $CMap = ::sun::font::CMap;

namespace sun {
	namespace font {

$FieldInfo _CMap$CMapFormat8_FieldInfo_[] = {
	{"is32", "[B", nullptr, 0, $field(CMap$CMapFormat8, is32)},
	{"nGroups", "I", nullptr, 0, $field(CMap$CMapFormat8, nGroups)},
	{"startCharCode", "[I", nullptr, 0, $field(CMap$CMapFormat8, startCharCode)},
	{"endCharCode", "[I", nullptr, 0, $field(CMap$CMapFormat8, endCharCode)},
	{"startGlyphID", "[I", nullptr, 0, $field(CMap$CMapFormat8, startGlyphID)},
	{}
};

$MethodInfo _CMap$CMapFormat8_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;I[C)V", nullptr, 0, $method(static_cast<void(CMap$CMapFormat8::*)($ByteBuffer*,int32_t,$chars*)>(&CMap$CMapFormat8::init$))},
	{"getGlyph", "(I)C", nullptr, 0},
	{}
};

$InnerClassInfo _CMap$CMapFormat8_InnerClassesInfo_[] = {
	{"sun.font.CMap$CMapFormat8", "sun.font.CMap", "CMapFormat8", $STATIC},
	{}
};

$ClassInfo _CMap$CMapFormat8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CMap$CMapFormat8",
	"sun.font.CMap",
	nullptr,
	_CMap$CMapFormat8_FieldInfo_,
	_CMap$CMapFormat8_MethodInfo_,
	nullptr,
	nullptr,
	_CMap$CMapFormat8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CMap"
};

$Object* allocate$CMap$CMapFormat8($Class* clazz) {
	return $of($alloc(CMap$CMapFormat8));
}

void CMap$CMapFormat8::init$($ByteBuffer* bbuffer, int32_t offset, $chars* xlat) {
	$CMap::init$();
	$set(this, is32, $new($bytes, 8192));
	$nc(bbuffer)->position(12);
	bbuffer->get(this->is32);
	this->nGroups = (int32_t)(bbuffer->getInt() & (uint32_t)$CMap::INTMASK);
	if (bbuffer->remaining() < (12 * (int64_t)this->nGroups)) {
		$throwNew($RuntimeException, "Format 8 table exceeded"_s);
	}
	$set(this, startCharCode, $new($ints, this->nGroups));
	$set(this, endCharCode, $new($ints, this->nGroups));
	$set(this, startGlyphID, $new($ints, this->nGroups));
}

char16_t CMap$CMapFormat8::getGlyph(int32_t charCode) {
	if (this->xlat != nullptr) {
		$throwNew($RuntimeException, "xlat array for cmap fmt=8"_s);
	}
	return (char16_t)0;
}

CMap$CMapFormat8::CMap$CMapFormat8() {
}

$Class* CMap$CMapFormat8::load$($String* name, bool initialize) {
	$loadClass(CMap$CMapFormat8, name, initialize, &_CMap$CMapFormat8_ClassInfo_, allocate$CMap$CMapFormat8);
	return class$;
}

$Class* CMap$CMapFormat8::class$ = nullptr;

	} // font
} // sun