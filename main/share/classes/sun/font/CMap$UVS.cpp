#include <sun/font/CMap$UVS.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Arrays.h>
#include <sun/font/CMap.h>
#include <jcpp.h>

#undef VS_NOGLYPH

using $charArray2 = $Array<char16_t, 2>;
using $intArray2 = $Array<int32_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Arrays = ::java::util::Arrays;

namespace sun {
	namespace font {

$FieldInfo _CMap$UVS_FieldInfo_[] = {
	{"numSelectors", "I", nullptr, 0, $field(CMap$UVS, numSelectors)},
	{"selector", "[I", nullptr, 0, $field(CMap$UVS, selector)},
	{"numUVSMapping", "[I", nullptr, 0, $field(CMap$UVS, numUVSMapping)},
	{"unicodeValue", "[[I", nullptr, 0, $field(CMap$UVS, unicodeValue)},
	{"glyphID", "[[C", nullptr, 0, $field(CMap$UVS, glyphID)},
	{"VS_NOGLYPH", "I", nullptr, $STATIC | $FINAL, $constField(CMap$UVS, VS_NOGLYPH)},
	{}
};

$MethodInfo _CMap$UVS_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;I)V", nullptr, 0, $method(static_cast<void(CMap$UVS::*)($ByteBuffer*,int32_t)>(&CMap$UVS::init$))},
	{"getGlyph", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(CMap$UVS::*)(int32_t,int32_t)>(&CMap$UVS::getGlyph))},
	{}
};

$InnerClassInfo _CMap$UVS_InnerClassesInfo_[] = {
	{"sun.font.CMap$UVS", "sun.font.CMap", "UVS", $STATIC},
	{}
};

$ClassInfo _CMap$UVS_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CMap$UVS",
	"java.lang.Object",
	nullptr,
	_CMap$UVS_FieldInfo_,
	_CMap$UVS_MethodInfo_,
	nullptr,
	nullptr,
	_CMap$UVS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CMap"
};

$Object* allocate$CMap$UVS($Class* clazz) {
	return $of($alloc(CMap$UVS));
}

void CMap$UVS::init$($ByteBuffer* buffer, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	$nc(buffer)->position(offset + 6);
	this->numSelectors = (int32_t)(buffer->getInt() & (uint32_t)0x7FFFFFFF);
	if (buffer->remaining() < (11 * (int64_t)this->numSelectors)) {
		$throwNew($RuntimeException, "Variations exceed buffer"_s);
	}
	$set(this, selector, $new($ints, this->numSelectors));
	$set(this, numUVSMapping, $new($ints, this->numSelectors));
	$set(this, unicodeValue, $new($intArray2, this->numSelectors));
	$set(this, glyphID, $new($charArray2, this->numSelectors));
	for (int32_t i = 0; i < this->numSelectors; ++i) {
		buffer->position(offset + 10 + i * 11);
		$nc(this->selector)->set(i, ((int32_t)(buffer->get() & (uint32_t)255)) << 16);
		(*$nc(this->selector))[i] += ((int32_t)(buffer->get() & (uint32_t)255)) << 8;
		(*$nc(this->selector))[i] += (int32_t)(buffer->get() & (uint32_t)255);
		int32_t tableOffset = buffer->getInt(offset + 10 + i * 11 + 7);
		if (tableOffset == 0) {
			$nc(this->numUVSMapping)->set(i, 0);
		} else if (tableOffset > 0) {
			buffer->position(offset + tableOffset);
			$nc(this->numUVSMapping)->set(i, (int32_t)(buffer->getInt() & (uint32_t)0x7FFFFFFF));
			if (buffer->remaining() < (5 * (int64_t)$nc(this->numUVSMapping)->get(i))) {
				$throwNew($RuntimeException, "Variations exceed buffer"_s);
			}
			$nc(this->unicodeValue)->set(i, $$new($ints, $nc(this->numUVSMapping)->get(i)));
			$nc(this->glyphID)->set(i, $$new($chars, $nc(this->numUVSMapping)->get(i)));
			for (int32_t j = 0; j < $nc(this->numUVSMapping)->get(i); ++j) {
				int32_t temp = ((int32_t)(buffer->get() & (uint32_t)255)) << 16;
				temp += ((int32_t)(buffer->get() & (uint32_t)255)) << 8;
				temp += (int32_t)(buffer->get() & (uint32_t)255);
				$nc($nc(this->unicodeValue)->get(i))->set(j, temp);
				$nc($nc(this->glyphID)->get(i))->set(j, buffer->getChar());
			}
		}
	}
}

int32_t CMap$UVS::getGlyph(int32_t charCode, int32_t variationSelector) {
	int32_t targetSelector = -1;
	for (int32_t i = 0; i < this->numSelectors; ++i) {
		if ($nc(this->selector)->get(i) == variationSelector) {
			targetSelector = i;
			break;
		}
	}
	if (targetSelector == -1) {
		return CMap$UVS::VS_NOGLYPH;
	}
	if ($nc(this->numUVSMapping)->get(targetSelector) > 0) {
		int32_t index = $Arrays::binarySearch($nc(this->unicodeValue)->get(targetSelector), charCode);
		if (index >= 0) {
			return $nc($nc(this->glyphID)->get(targetSelector))->get(index);
		}
	}
	return CMap$UVS::VS_NOGLYPH;
}

CMap$UVS::CMap$UVS() {
}

$Class* CMap$UVS::load$($String* name, bool initialize) {
	$loadClass(CMap$UVS, name, initialize, &_CMap$UVS_ClassInfo_, allocate$CMap$UVS);
	return class$;
}

$Class* CMap$UVS::class$ = nullptr;

	} // font
} // sun