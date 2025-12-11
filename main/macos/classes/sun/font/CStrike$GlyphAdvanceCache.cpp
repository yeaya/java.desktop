#include <sun/font/CStrike$GlyphAdvanceCache.h>

#include <java/util/HashMap.h>
#include <sun/font/CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray.h>
#include <sun/font/CStrike.h>
#include <jcpp.h>

#undef FIRST_LAYER_SIZE
#undef SECOND_LAYER_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray = ::sun::font::CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray;

namespace sun {
	namespace font {

$FieldInfo _CStrike$GlyphAdvanceCache_FieldInfo_[] = {
	{"FIRST_LAYER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CStrike$GlyphAdvanceCache, FIRST_LAYER_SIZE)},
	{"SECOND_LAYER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CStrike$GlyphAdvanceCache, SECOND_LAYER_SIZE)},
	{"firstLayerCache", "[F", nullptr, $PRIVATE | $FINAL, $field(CStrike$GlyphAdvanceCache, firstLayerCache)},
	{"secondLayerCache", "Lsun/font/CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray;", nullptr, $PRIVATE, $field(CStrike$GlyphAdvanceCache, secondLayerCache)},
	{"generalCache", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/Float;>;", $PRIVATE, $field(CStrike$GlyphAdvanceCache, generalCache)},
	{}
};

$MethodInfo _CStrike$GlyphAdvanceCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CStrike$GlyphAdvanceCache::*)()>(&CStrike$GlyphAdvanceCache::init$))},
	{"get", "(I)F", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"put", "(IF)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _CStrike$GlyphAdvanceCache_InnerClassesInfo_[] = {
	{"sun.font.CStrike$GlyphAdvanceCache", "sun.font.CStrike", "GlyphAdvanceCache", $PRIVATE | $STATIC},
	{"sun.font.CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray", "sun.font.CStrike$GlyphAdvanceCache", "SparseBitShiftingTwoLayerArray", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CStrike$GlyphAdvanceCache_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CStrike$GlyphAdvanceCache",
	"java.lang.Object",
	nullptr,
	_CStrike$GlyphAdvanceCache_FieldInfo_,
	_CStrike$GlyphAdvanceCache_MethodInfo_,
	nullptr,
	nullptr,
	_CStrike$GlyphAdvanceCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CStrike"
};

$Object* allocate$CStrike$GlyphAdvanceCache($Class* clazz) {
	return $of($alloc(CStrike$GlyphAdvanceCache));
}

void CStrike$GlyphAdvanceCache::init$() {
	$set(this, firstLayerCache, $new($floats, CStrike$GlyphAdvanceCache::FIRST_LAYER_SIZE));
}

float CStrike$GlyphAdvanceCache::get(int32_t index) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (index < 0) {
			if (-index < CStrike$GlyphAdvanceCache::SECOND_LAYER_SIZE) {
				if (this->secondLayerCache == nullptr) {
					return (float)0;
				}
				return $nc(this->secondLayerCache)->get(-index);
			}
		} else if (index < CStrike$GlyphAdvanceCache::FIRST_LAYER_SIZE) {
			return $nc(this->firstLayerCache)->get(index);
		}
		if (this->generalCache == nullptr) {
			return (float)0;
		}
		$var($Float, value, $cast($Float, $nc(this->generalCache)->get($($Integer::valueOf(index)))));
		if (value == nullptr) {
			return (float)0;
		}
		return $nc(value)->floatValue();
	}
}

void CStrike$GlyphAdvanceCache::put(int32_t index, float value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (index < 0) {
			if (-index < CStrike$GlyphAdvanceCache::SECOND_LAYER_SIZE) {
				if (this->secondLayerCache == nullptr) {
					$set(this, secondLayerCache, $new($CStrike$GlyphAdvanceCache$SparseBitShiftingTwoLayerArray, CStrike$GlyphAdvanceCache::SECOND_LAYER_SIZE, 7));
				}
				$nc(this->secondLayerCache)->put(-index, value);
				return;
			}
		} else if (index < CStrike$GlyphAdvanceCache::FIRST_LAYER_SIZE) {
			$nc(this->firstLayerCache)->set(index, value);
			return;
		}
		if (this->generalCache == nullptr) {
			$set(this, generalCache, $new($HashMap));
		}
		$var($Object, var$0, $of($Integer::valueOf(index)));
		$nc(this->generalCache)->put(var$0, $($Float::valueOf(value)));
	}
}

CStrike$GlyphAdvanceCache::CStrike$GlyphAdvanceCache() {
}

$Class* CStrike$GlyphAdvanceCache::load$($String* name, bool initialize) {
	$loadClass(CStrike$GlyphAdvanceCache, name, initialize, &_CStrike$GlyphAdvanceCache_ClassInfo_, allocate$CStrike$GlyphAdvanceCache);
	return class$;
}

$Class* CStrike$GlyphAdvanceCache::class$ = nullptr;

	} // font
} // sun