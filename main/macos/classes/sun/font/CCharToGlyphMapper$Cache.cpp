#include <sun/font/CCharToGlyphMapper$Cache.h>

#include <java/util/HashMap.h>
#include <sun/font/CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray.h>
#include <sun/font/CCharToGlyphMapper.h>
#include <sun/font/CFont.h>
#include <jcpp.h>

#undef FIRST_LAYER_SIZE
#undef SECOND_LAYER_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $CCharToGlyphMapper = ::sun::font::CCharToGlyphMapper;
using $CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray = ::sun::font::CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray;
using $CFont = ::sun::font::CFont;

namespace sun {
	namespace font {

$FieldInfo _CCharToGlyphMapper$Cache_FieldInfo_[] = {
	{"this$0", "Lsun/font/CCharToGlyphMapper;", nullptr, $FINAL | $SYNTHETIC, $field(CCharToGlyphMapper$Cache, this$0)},
	{"FIRST_LAYER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CCharToGlyphMapper$Cache, FIRST_LAYER_SIZE)},
	{"SECOND_LAYER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CCharToGlyphMapper$Cache, SECOND_LAYER_SIZE)},
	{"firstLayerCache", "[I", nullptr, $PRIVATE | $FINAL, $field(CCharToGlyphMapper$Cache, firstLayerCache)},
	{"secondLayerCache", "Lsun/font/CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray;", nullptr, $PRIVATE, $field(CCharToGlyphMapper$Cache, secondLayerCache)},
	{"generalCache", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/Integer;>;", $PRIVATE, $field(CCharToGlyphMapper$Cache, generalCache)},
	{}
};

$MethodInfo _CCharToGlyphMapper$Cache_MethodInfo_[] = {
	{"<init>", "(Lsun/font/CCharToGlyphMapper;)V", nullptr, 0, $method(static_cast<void(CCharToGlyphMapper$Cache::*)($CCharToGlyphMapper*)>(&CCharToGlyphMapper$Cache::init$))},
	{"get", "(I)I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"get", "(I[C[I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"put", "(II)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _CCharToGlyphMapper$Cache_InnerClassesInfo_[] = {
	{"sun.font.CCharToGlyphMapper$Cache", "sun.font.CCharToGlyphMapper", "Cache", $PRIVATE},
	{"sun.font.CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray", "sun.font.CCharToGlyphMapper$Cache", "SparseBitShiftingTwoLayerArray", $PRIVATE},
	{}
};

$ClassInfo _CCharToGlyphMapper$Cache_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CCharToGlyphMapper$Cache",
	"java.lang.Object",
	nullptr,
	_CCharToGlyphMapper$Cache_FieldInfo_,
	_CCharToGlyphMapper$Cache_MethodInfo_,
	nullptr,
	nullptr,
	_CCharToGlyphMapper$Cache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CCharToGlyphMapper"
};

$Object* allocate$CCharToGlyphMapper$Cache($Class* clazz) {
	return $of($alloc(CCharToGlyphMapper$Cache));
}

void CCharToGlyphMapper$Cache::init$($CCharToGlyphMapper* this$0) {
	$set(this, this$0, this$0);
	$set(this, firstLayerCache, $new($ints, CCharToGlyphMapper$Cache::FIRST_LAYER_SIZE));
	$nc(this->firstLayerCache)->set(1, 1);
}

int32_t CCharToGlyphMapper$Cache::get(int32_t index) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (index < CCharToGlyphMapper$Cache::FIRST_LAYER_SIZE) {
			return $nc(this->firstLayerCache)->get(index);
		}
		if (index < CCharToGlyphMapper$Cache::SECOND_LAYER_SIZE) {
			if (this->secondLayerCache == nullptr) {
				return 0;
			}
			return $nc(this->secondLayerCache)->get(index);
		}
		if (this->generalCache == nullptr) {
			return 0;
		}
		$var($Integer, value, $cast($Integer, $nc(this->generalCache)->get($($Integer::valueOf(index)))));
		if (value == nullptr) {
			return 0;
		}
		return $nc(value)->intValue();
	}
}

void CCharToGlyphMapper$Cache::put(int32_t index, int32_t value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (index < CCharToGlyphMapper$Cache::FIRST_LAYER_SIZE) {
			$nc(this->firstLayerCache)->set(index, value);
			return;
		}
		if (index < CCharToGlyphMapper$Cache::SECOND_LAYER_SIZE) {
			if (this->secondLayerCache == nullptr) {
				$set(this, secondLayerCache, $new($CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray, this, CCharToGlyphMapper$Cache::SECOND_LAYER_SIZE, 7));
			}
			$nc(this->secondLayerCache)->put(index, value);
			return;
		}
		if (this->generalCache == nullptr) {
			$set(this, generalCache, $new($HashMap));
		}
		$var($Object, var$0, $of($Integer::valueOf(index)));
		$nc(this->generalCache)->put(var$0, $($Integer::valueOf(value)));
	}
}

void CCharToGlyphMapper$Cache::get(int32_t count, $chars* indicies, $ints* values) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		int32_t missed = 0;
		$var($chars, unmappedChars, nullptr);
		$var($ints, unmappedCharIndices, nullptr);
		for (int32_t i = 0; i < count; ++i) {
			int32_t code = $nc(indicies)->get(i);
			if (code >= 0x0000D800 && code <= 0x0000DBFF && i < count - 1) {
				char16_t low = indicies->get(i + 1);
				if (low >= 0x0000DC00 && low <= 0x0000DFFF) {
					code = (code - 0x0000D800) * 1024 + low - 0x0000DC00 + 0x00010000;
				}
			}
			int32_t value = get(code);
			if (value != 0 && value != -1) {
				$nc(values)->set(i, value);
				if (code >= 0x00010000) {
					values->set(i + 1, 0x0000FFFF);
					++i;
				}
			} else {
				$nc(values)->set(i, 0);
				put(code, -1);
				if (unmappedChars == nullptr) {
					$assign(unmappedChars, $new($chars, indicies->length));
					$assign(unmappedCharIndices, $new($ints, indicies->length));
				}
				$nc(unmappedChars)->set(missed, indicies->get(i));
				$nc(unmappedCharIndices)->set(missed, i);
				if (code >= 0x00010000) {
					unmappedChars->set(++missed, indicies->get(++i));
				}
				++missed;
			}
		}
		if (missed == 0) {
			return;
		}
		$var($ints, glyphCodes, $new($ints, missed));
		$CCharToGlyphMapper::nativeCharsToGlyphs($nc(this->this$0->fFont)->getNativeFontPtr(), missed, unmappedChars, glyphCodes);
		for (int32_t m = 0; m < missed; ++m) {
			int32_t i = $nc(unmappedCharIndices)->get(m);
			int32_t code = $nc(unmappedChars)->get(m);
			if (code >= 0x0000D800 && code <= 0x0000DBFF && m < missed - 1) {
				char16_t low = unmappedChars->get(m + 1);
				if (low >= 0x0000DC00 && low <= 0x0000DFFF) {
					code = (code - 0x0000D800) * 1024 + low - 0x0000DC00 + 0x00010000;
				}
			}
			$nc(values)->set(i, glyphCodes->get(m));
			put(code, values->get(i));
			if (code >= 0x00010000) {
				++m;
				values->set(i + 1, 0x0000FFFF);
			}
		}
	}
}

CCharToGlyphMapper$Cache::CCharToGlyphMapper$Cache() {
}

$Class* CCharToGlyphMapper$Cache::load$($String* name, bool initialize) {
	$loadClass(CCharToGlyphMapper$Cache, name, initialize, &_CCharToGlyphMapper$Cache_ClassInfo_, allocate$CCharToGlyphMapper$Cache);
	return class$;
}

$Class* CCharToGlyphMapper$Cache::class$ = nullptr;

	} // font
} // sun