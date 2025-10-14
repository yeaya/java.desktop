#include <sun/font/CMap$CMapFormat12.h>

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
#include <java/nio/IntBuffer.h>
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
using $IntBuffer = ::java::nio::IntBuffer;
using $CMap = ::sun::font::CMap;

namespace sun {
	namespace font {

$FieldInfo _CMap$CMapFormat12_FieldInfo_[] = {
	{"numGroups", "I", nullptr, 0, $field(CMap$CMapFormat12, numGroups)},
	{"highBit", "I", nullptr, 0, $field(CMap$CMapFormat12, highBit)},
	{"power", "I", nullptr, 0, $field(CMap$CMapFormat12, power)},
	{"extra", "I", nullptr, 0, $field(CMap$CMapFormat12, extra)},
	{"startCharCode", "[J", nullptr, 0, $field(CMap$CMapFormat12, startCharCode)},
	{"endCharCode", "[J", nullptr, 0, $field(CMap$CMapFormat12, endCharCode)},
	{"startGlyphID", "[I", nullptr, 0, $field(CMap$CMapFormat12, startGlyphID)},
	{}
};

$MethodInfo _CMap$CMapFormat12_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;I[C)V", nullptr, 0, $method(static_cast<void(CMap$CMapFormat12::*)($ByteBuffer*,int32_t,$chars*)>(&CMap$CMapFormat12::init$))},
	{"getGlyph", "(I)C", nullptr, 0},
	{}
};

$InnerClassInfo _CMap$CMapFormat12_InnerClassesInfo_[] = {
	{"sun.font.CMap$CMapFormat12", "sun.font.CMap", "CMapFormat12", $STATIC},
	{}
};

$ClassInfo _CMap$CMapFormat12_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CMap$CMapFormat12",
	"sun.font.CMap",
	nullptr,
	_CMap$CMapFormat12_FieldInfo_,
	_CMap$CMapFormat12_MethodInfo_,
	nullptr,
	nullptr,
	_CMap$CMapFormat12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CMap"
};

$Object* allocate$CMap$CMapFormat12($Class* clazz) {
	return $of($alloc(CMap$CMapFormat12));
}

void CMap$CMapFormat12::init$($ByteBuffer* buffer$renamed, int32_t offset, $chars* xlat) {
	$var($ByteBuffer, buffer, buffer$renamed);
	$CMap::init$();
	this->highBit = 0;
	if (xlat != nullptr) {
		$throwNew($RuntimeException, "xlat array for cmap fmt=12"_s);
	}
	$nc(buffer)->position(offset + 12);
	this->numGroups = (int32_t)(buffer->getInt() & (uint32_t)$CMap::INTMASK);
	if (buffer->remaining() < (12 * (int64_t)this->numGroups)) {
		$throwNew($RuntimeException, "Format 12 table exceeded"_s);
	}
	$set(this, startCharCode, $new($longs, this->numGroups));
	$set(this, endCharCode, $new($longs, this->numGroups));
	$set(this, startGlyphID, $new($ints, this->numGroups));
	$assign(buffer, buffer->slice());
	$var($IntBuffer, ibuffer, buffer->asIntBuffer());
	for (int32_t i = 0; i < this->numGroups; ++i) {
		$nc(this->startCharCode)->set(i, (int32_t)($nc(ibuffer)->get() & (uint32_t)$CMap::INTMASK));
		$nc(this->endCharCode)->set(i, (int32_t)(ibuffer->get() & (uint32_t)$CMap::INTMASK));
		$nc(this->startGlyphID)->set(i, (int32_t)(ibuffer->get() & (uint32_t)$CMap::INTMASK));
	}
	int32_t value = this->numGroups;
	if (value >= 1 << 16) {
		value >>= 16;
		this->highBit += 16;
	}
	if (value >= 1 << 8) {
		value >>= 8;
		this->highBit += 8;
	}
	if (value >= 1 << 4) {
		value >>= 4;
		this->highBit += 4;
	}
	if (value >= 1 << 2) {
		value >>= 2;
		this->highBit += 2;
	}
	if (value >= 1 << 1) {
		value >>= 1;
		this->highBit += 1;
	}
	this->power = $sl(1, this->highBit);
	this->extra = this->numGroups - this->power;
}

char16_t CMap$CMapFormat12::getGlyph(int32_t charCode) {
	int32_t origCharCode = charCode;
	int32_t controlGlyph = getControlCodeGlyph(charCode, false);
	if (controlGlyph >= 0) {
		return (char16_t)controlGlyph;
	}
	int32_t probe = this->power;
	int32_t range = 0;
	if ($nc(this->startCharCode)->get(this->extra) <= charCode) {
		range = this->extra;
	}
	while (probe > 1) {
		probe >>= 1;
		if ($nc(this->startCharCode)->get(range + probe) <= charCode) {
			range += probe;
		}
	}
	if ($nc(this->startCharCode)->get(range) <= charCode && $nc(this->endCharCode)->get(range) >= charCode) {
		return (char16_t)($nc(this->startGlyphID)->get(range) + (charCode - $nc(this->startCharCode)->get(range)));
	}
	return getFormatCharGlyph(origCharCode);
}

CMap$CMapFormat12::CMap$CMapFormat12() {
}

$Class* CMap$CMapFormat12::load$($String* name, bool initialize) {
	$loadClass(CMap$CMapFormat12, name, initialize, &_CMap$CMapFormat12_ClassInfo_, allocate$CMap$CMapFormat12);
	return class$;
}

$Class* CMap$CMapFormat12::class$ = nullptr;

	} // font
} // sun