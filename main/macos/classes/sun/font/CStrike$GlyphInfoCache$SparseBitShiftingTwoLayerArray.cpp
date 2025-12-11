#include <sun/font/CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray.h>

#include <sun/font/CStrike$GlyphInfoCache.h>
#include <jcpp.h>

using $longArray2 = $Array<int64_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$FieldInfo _CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray_FieldInfo_[] = {
	{"cache", "[[J", nullptr, $FINAL, $field(CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray, cache)},
	{"shift", "I", nullptr, $FINAL, $field(CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray, shift)},
	{"secondLayerLength", "I", nullptr, $FINAL, $field(CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray, secondLayerLength)},
	{}
};

$MethodInfo _CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray::*)(int32_t,int32_t)>(&CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray::init$))},
	{"get", "(I)J", nullptr, $PUBLIC},
	{"put", "(IJ)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray_InnerClassesInfo_[] = {
	{"sun.font.CStrike$GlyphInfoCache", "sun.font.CStrike", "GlyphInfoCache", $PRIVATE | $STATIC},
	{"sun.font.CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray", "sun.font.CStrike$GlyphInfoCache", "SparseBitShiftingTwoLayerArray", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray",
	"java.lang.Object",
	nullptr,
	_CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray_FieldInfo_,
	_CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray_MethodInfo_,
	nullptr,
	nullptr,
	_CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CStrike"
};

$Object* allocate$CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray($Class* clazz) {
	return $of($alloc(CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray));
}

void CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray::init$(int32_t size, int32_t shift) {
	this->shift = shift;
	$set(this, cache, $new($longArray2, $sl(1, shift)));
	this->secondLayerLength = $sr(size, shift);
}

int64_t CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray::get(int32_t index) {
	int32_t firstIndex = $sr(index, this->shift);
	$var($longs, firstLayerRow, $nc(this->cache)->get(firstIndex));
	if (firstLayerRow == nullptr) {
		return 0;
	}
	return $nc(firstLayerRow)->get(index - (firstIndex * ($sl(1, this->shift))));
}

void CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray::put(int32_t index, int64_t value) {
	int32_t firstIndex = $sr(index, this->shift);
	$var($longs, firstLayerRow, $nc(this->cache)->get(firstIndex));
	if (firstLayerRow == nullptr) {
		$nc(this->cache)->set(firstIndex, $assign(firstLayerRow, $new($longs, this->secondLayerLength)));
	}
	$nc(firstLayerRow)->set(index - (firstIndex * ($sl(1, this->shift))), value);
}

CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray::CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray() {
}

$Class* CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray::load$($String* name, bool initialize) {
	$loadClass(CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray, name, initialize, &_CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray_ClassInfo_, allocate$CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray);
	return class$;
}

$Class* CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray::class$ = nullptr;

	} // font
} // sun