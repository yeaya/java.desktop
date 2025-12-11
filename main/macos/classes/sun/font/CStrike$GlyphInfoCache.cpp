#include <sun/font/CStrike$GlyphInfoCache.h>

#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <sun/font/CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray.h>
#include <sun/font/CStrike.h>
#include <sun/font/CStrikeDisposer.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/StrikeCache.h>
#include <jcpp.h>

#undef FIRST_LAYER_SIZE
#undef SECOND_LAYER_SIZE

using $longArray2 = $Array<int64_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray = ::sun::font::CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray;
using $CStrikeDisposer = ::sun::font::CStrikeDisposer;
using $Font2D = ::sun::font::Font2D;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $StrikeCache = ::sun::font::StrikeCache;

namespace sun {
	namespace font {

$FieldInfo _CStrike$GlyphInfoCache_FieldInfo_[] = {
	{"FIRST_LAYER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CStrike$GlyphInfoCache, FIRST_LAYER_SIZE)},
	{"SECOND_LAYER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CStrike$GlyphInfoCache, SECOND_LAYER_SIZE)},
	{"disposed", "Z", nullptr, $PRIVATE, $field(CStrike$GlyphInfoCache, disposed)},
	{"firstLayerCache", "[J", nullptr, $PRIVATE | $FINAL, $field(CStrike$GlyphInfoCache, firstLayerCache)},
	{"secondLayerCache", "Lsun/font/CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray;", nullptr, $PRIVATE, $field(CStrike$GlyphInfoCache, secondLayerCache)},
	{"generalCache", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/Long;>;", $PRIVATE, $field(CStrike$GlyphInfoCache, generalCache)},
	{}
};

$MethodInfo _CStrike$GlyphInfoCache_MethodInfo_[] = {
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;)V", nullptr, 0, $method(static_cast<void(CStrike$GlyphInfoCache::*)($Font2D*,$FontStrikeDesc*)>(&CStrike$GlyphInfoCache::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"disposeLongArray", "([J)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($longs*)>(&CStrike$GlyphInfoCache::disposeLongArray))},
	{"get", "(I)J", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"put", "(IJ)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _CStrike$GlyphInfoCache_InnerClassesInfo_[] = {
	{"sun.font.CStrike$GlyphInfoCache", "sun.font.CStrike", "GlyphInfoCache", $PRIVATE | $STATIC},
	{"sun.font.CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray", "sun.font.CStrike$GlyphInfoCache", "SparseBitShiftingTwoLayerArray", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CStrike$GlyphInfoCache_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CStrike$GlyphInfoCache",
	"sun.font.CStrikeDisposer",
	nullptr,
	_CStrike$GlyphInfoCache_FieldInfo_,
	_CStrike$GlyphInfoCache_MethodInfo_,
	nullptr,
	nullptr,
	_CStrike$GlyphInfoCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CStrike"
};

$Object* allocate$CStrike$GlyphInfoCache($Class* clazz) {
	return $of($alloc(CStrike$GlyphInfoCache));
}

void CStrike$GlyphInfoCache::init$($Font2D* nativeFont, $FontStrikeDesc* desc) {
	$CStrikeDisposer::init$(nativeFont, desc);
	this->disposed = false;
	$set(this, firstLayerCache, $new($longs, CStrike$GlyphInfoCache::FIRST_LAYER_SIZE));
}

int64_t CStrike$GlyphInfoCache::get(int32_t index) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (index < 0) {
			if (-index < CStrike$GlyphInfoCache::SECOND_LAYER_SIZE) {
				if (this->secondLayerCache == nullptr) {
					return 0;
				}
				return $nc(this->secondLayerCache)->get(-index);
			}
		} else if (index < CStrike$GlyphInfoCache::FIRST_LAYER_SIZE) {
			return $nc(this->firstLayerCache)->get(index);
		}
		if (this->generalCache == nullptr) {
			return 0;
		}
		$var($Long, value, $cast($Long, $nc(this->generalCache)->get($($Integer::valueOf(index)))));
		if (value == nullptr) {
			return 0;
		}
		return $nc(value)->longValue();
	}
}

void CStrike$GlyphInfoCache::put(int32_t index, int64_t value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (index < 0) {
			if (-index < CStrike$GlyphInfoCache::SECOND_LAYER_SIZE) {
				if (this->secondLayerCache == nullptr) {
					$set(this, secondLayerCache, $new($CStrike$GlyphInfoCache$SparseBitShiftingTwoLayerArray, CStrike$GlyphInfoCache::SECOND_LAYER_SIZE, 7));
				}
				$nc(this->secondLayerCache)->put(-index, value);
				return;
			}
		} else if (index < CStrike$GlyphInfoCache::FIRST_LAYER_SIZE) {
			$nc(this->firstLayerCache)->set(index, value);
			return;
		}
		if (this->generalCache == nullptr) {
			$set(this, generalCache, $new($HashMap));
		}
		$var($Object, var$0, $of($Integer::valueOf(index)));
		$nc(this->generalCache)->put(var$0, $($Long::valueOf(value)));
	}
}

void CStrike$GlyphInfoCache::dispose() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->disposed) {
			return;
		}
		$CStrikeDisposer::dispose();
		disposeLongArray(this->firstLayerCache);
		if (this->secondLayerCache != nullptr) {
			$var($longArray2, secondLayerLongArrayArray, $nc(this->secondLayerCache)->cache);
			for (int32_t i = 0; i < $nc(secondLayerLongArrayArray)->length; ++i) {
				$var($longs, longArray, secondLayerLongArrayArray->get(i));
				if (longArray != nullptr) {
					disposeLongArray(longArray);
				}
			}
		}
		if (this->generalCache != nullptr) {
			$var($Iterator, i, $nc($($nc(this->generalCache)->values()))->iterator());
			while ($nc(i)->hasNext()) {
				int64_t longValue = $nc(($cast($Long, $(i->next()))))->longValue();
				if (longValue != -1 && longValue != 0) {
					removeGlyphInfoFromCache(longValue);
					$StrikeCache::freeLongPointer(longValue);
				}
			}
		}
		this->disposed = true;
	}
}

void CStrike$GlyphInfoCache::disposeLongArray($longs* longArray) {
	$init(CStrike$GlyphInfoCache);
	for (int32_t i = 0; i < $nc(longArray)->length; ++i) {
		int64_t ptr = longArray->get(i);
		if (ptr != 0 && ptr != -1) {
			removeGlyphInfoFromCache(ptr);
			$StrikeCache::freeLongPointer(ptr);
		}
	}
}

CStrike$GlyphInfoCache::CStrike$GlyphInfoCache() {
}

$Class* CStrike$GlyphInfoCache::load$($String* name, bool initialize) {
	$loadClass(CStrike$GlyphInfoCache, name, initialize, &_CStrike$GlyphInfoCache_ClassInfo_, allocate$CStrike$GlyphInfoCache);
	return class$;
}

$Class* CStrike$GlyphInfoCache::class$ = nullptr;

	} // font
} // sun