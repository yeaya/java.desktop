#include <sun/font/CMap$CMapFormat0.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <sun/font/CMap.h>
#include <sun/font/CharToGlyphMapper.h>
#include <jcpp.h>

#undef INVISIBLE_GLYPH_ID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CMap = ::sun::font::CMap;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;

namespace sun {
	namespace font {

$FieldInfo _CMap$CMapFormat0_FieldInfo_[] = {
	{"cmap", "[B", nullptr, 0, $field(CMap$CMapFormat0, cmap)},
	{}
};

$MethodInfo _CMap$CMapFormat0_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;I)V", nullptr, 0, $method(static_cast<void(CMap$CMapFormat0::*)($ByteBuffer*,int32_t)>(&CMap$CMapFormat0::init$))},
	{"getGlyph", "(I)C", nullptr, 0},
	{}
};

$InnerClassInfo _CMap$CMapFormat0_InnerClassesInfo_[] = {
	{"sun.font.CMap$CMapFormat0", "sun.font.CMap", "CMapFormat0", $STATIC},
	{}
};

$ClassInfo _CMap$CMapFormat0_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CMap$CMapFormat0",
	"sun.font.CMap",
	nullptr,
	_CMap$CMapFormat0_FieldInfo_,
	_CMap$CMapFormat0_MethodInfo_,
	nullptr,
	nullptr,
	_CMap$CMapFormat0_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CMap"
};

$Object* allocate$CMap$CMapFormat0($Class* clazz) {
	return $of($alloc(CMap$CMapFormat0));
}

void CMap$CMapFormat0::init$($ByteBuffer* buffer, int32_t offset) {
	$CMap::init$();
	int32_t len = $nc(buffer)->getChar(offset + 2);
	$set(this, cmap, $new($bytes, len - 6));
	buffer->position(offset + 6);
	buffer->get(this->cmap);
}

char16_t CMap$CMapFormat0::getGlyph(int32_t charCode) {
	if (charCode < 256) {
		if (charCode < 16) {
			switch (charCode) {
			case 9:
				{}
			case 10:
				{}
			case 13:
				{
					return (char16_t)$CharToGlyphMapper::INVISIBLE_GLYPH_ID;
				}
			}
		}
		return (char16_t)((int32_t)(255 & (uint32_t)(int32_t)$nc(this->cmap)->get(charCode)));
	} else {
		return (char16_t)0;
	}
}

CMap$CMapFormat0::CMap$CMapFormat0() {
}

$Class* CMap$CMapFormat0::load$($String* name, bool initialize) {
	$loadClass(CMap$CMapFormat0, name, initialize, &_CMap$CMapFormat0_ClassInfo_, allocate$CMap$CMapFormat0);
	return class$;
}

$Class* CMap$CMapFormat0::class$ = nullptr;

	} // font
} // sun