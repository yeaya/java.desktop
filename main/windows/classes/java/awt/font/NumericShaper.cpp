#include <java/awt/font/NumericShaper.h>

#include <java/awt/font/JavaAWTFontAccessImpl.h>
#include <java/awt/font/NumericShaper$1.h>
#include <java/awt/font/NumericShaper$Range.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jdk/internal/access/JavaAWTFontAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef ALL_RANGES
#undef ARABIC
#undef ARABIC_KEY
#undef BENGALI
#undef BENGALI_KEY
#undef BSEARCH_THRESHOLD
#undef CONTEXTUAL_MASK
#undef DEVANAGARI
#undef DEVANAGARI_KEY
#undef EASTERN_ARABIC
#undef EASTERN_ARABIC_KEY
#undef ETHIOPIC
#undef ETHIOPIC_KEY
#undef EUROPEAN
#undef EUROPEAN_KEY
#undef GUJARATI
#undef GUJARATI_KEY
#undef GURMUKHI
#undef GURMUKHI_KEY
#undef KANNADA
#undef KANNADA_KEY
#undef KHMER
#undef KHMER_KEY
#undef LAO
#undef LAO_KEY
#undef MALAYALAM
#undef MALAYALAM_KEY
#undef MONGOLIAN
#undef MONGOLIAN_KEY
#undef MYANMAR
#undef MYANMAR_KEY
#undef NUM_KEYS
#undef ORIYA
#undef ORIYA_KEY
#undef TAI_THAM_HORA
#undef TAI_THAM_THAM
#undef TAMIL
#undef TAMIL_KEY
#undef TELUGU
#undef TELUGU_KEY
#undef THAI
#undef THAI_KEY
#undef TIBETAN
#undef TIBETAN_KEY

using $NumericShaper$RangeArray = $Array<::java::awt::font::NumericShaper$Range>;
using $JavaAWTFontAccessImpl = ::java::awt::font::JavaAWTFontAccessImpl;
using $NumericShaper$1 = ::java::awt::font::NumericShaper$1;
using $NumericShaper$Range = ::java::awt::font::NumericShaper$Range;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $EnumSet = ::java::util::EnumSet;
using $Set = ::java::util::Set;
using $JavaAWTFontAccess = ::jdk::internal::access::JavaAWTFontAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _NumericShaper_FieldInfo_[] = {
	{"key", "I", nullptr, $PRIVATE, $field(NumericShaper, key)},
	{"mask", "I", nullptr, $PRIVATE, $field(NumericShaper, mask)},
	{"shapingRange", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PRIVATE, $field(NumericShaper, shapingRange)},
	{"rangeSet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;", $PRIVATE | $TRANSIENT, $field(NumericShaper, rangeSet)},
	{"rangeArray", "[Ljava/awt/font/NumericShaper$Range;", nullptr, $PRIVATE | $TRANSIENT, $field(NumericShaper, rangeArray)},
	{"BSEARCH_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, BSEARCH_THRESHOLD)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, serialVersionUID)},
	{"EUROPEAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, EUROPEAN)},
	{"ARABIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, ARABIC)},
	{"EASTERN_ARABIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, EASTERN_ARABIC)},
	{"DEVANAGARI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, DEVANAGARI)},
	{"BENGALI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, BENGALI)},
	{"GURMUKHI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, GURMUKHI)},
	{"GUJARATI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, GUJARATI)},
	{"ORIYA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, ORIYA)},
	{"TAMIL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, TAMIL)},
	{"TELUGU", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, TELUGU)},
	{"KANNADA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, KANNADA)},
	{"MALAYALAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, MALAYALAM)},
	{"THAI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, THAI)},
	{"LAO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, LAO)},
	{"TIBETAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, TIBETAN)},
	{"MYANMAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, MYANMAR)},
	{"ETHIOPIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, ETHIOPIC)},
	{"KHMER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, KHMER)},
	{"MONGOLIAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, MONGOLIAN)},
	{"ALL_RANGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumericShaper, ALL_RANGES)},
	{"EUROPEAN_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, EUROPEAN_KEY)},
	{"ARABIC_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, ARABIC_KEY)},
	{"EASTERN_ARABIC_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, EASTERN_ARABIC_KEY)},
	{"DEVANAGARI_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, DEVANAGARI_KEY)},
	{"BENGALI_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, BENGALI_KEY)},
	{"GURMUKHI_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, GURMUKHI_KEY)},
	{"GUJARATI_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, GUJARATI_KEY)},
	{"ORIYA_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, ORIYA_KEY)},
	{"TAMIL_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, TAMIL_KEY)},
	{"TELUGU_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, TELUGU_KEY)},
	{"KANNADA_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, KANNADA_KEY)},
	{"MALAYALAM_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, MALAYALAM_KEY)},
	{"THAI_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, THAI_KEY)},
	{"LAO_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, LAO_KEY)},
	{"TIBETAN_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, TIBETAN_KEY)},
	{"MYANMAR_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, MYANMAR_KEY)},
	{"ETHIOPIC_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, ETHIOPIC_KEY)},
	{"KHMER_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, KHMER_KEY)},
	{"MONGOLIAN_KEY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, MONGOLIAN_KEY)},
	{"NUM_KEYS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, NUM_KEYS)},
	{"CONTEXTUAL_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumericShaper, CONTEXTUAL_MASK)},
	{"bases", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NumericShaper, bases)},
	{"contexts", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NumericShaper, contexts)},
	{"ctCache", "I", nullptr, $PRIVATE | $STATIC, $staticField(NumericShaper, ctCache)},
	{"ctCacheLimit", "I", nullptr, $PRIVATE | $STATIC, $staticField(NumericShaper, ctCacheLimit)},
	{"currentRange", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(NumericShaper, currentRange)},
	{"strongTable", "[I", nullptr, $PRIVATE | $STATIC, $staticField(NumericShaper, strongTable)},
	{"stCache", "I", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(NumericShaper, stCache)},
	{}
};

$MethodInfo _NumericShaper_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(NumericShaper::*)(int32_t,int32_t)>(&NumericShaper::init$))},
	{"<init>", "(Ljava/awt/font/NumericShaper$Range;Ljava/util/Set;)V", "(Ljava/awt/font/NumericShaper$Range;Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;)V", $PRIVATE, $method(static_cast<void(NumericShaper::*)($NumericShaper$Range*,$Set*)>(&NumericShaper::init$))},
	{"checkParams", "([CII)V", nullptr, $PRIVATE, $method(static_cast<void(NumericShaper::*)($chars*,int32_t,int32_t)>(&NumericShaper::checkParams))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getContextKey", "(C)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(char16_t)>(&NumericShaper::getContextKey))},
	{"getContextualShaper", "(I)Ljava/awt/font/NumericShaper;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NumericShaper*(*)(int32_t)>(&NumericShaper::getContextualShaper))},
	{"getContextualShaper", "(Ljava/util/Set;)Ljava/awt/font/NumericShaper;", "(Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;)Ljava/awt/font/NumericShaper;", $PUBLIC | $STATIC, $method(static_cast<NumericShaper*(*)($Set*)>(&NumericShaper::getContextualShaper))},
	{"getContextualShaper", "(II)Ljava/awt/font/NumericShaper;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NumericShaper*(*)(int32_t,int32_t)>(&NumericShaper::getContextualShaper))},
	{"getContextualShaper", "(Ljava/util/Set;Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;", "(Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;", $PUBLIC | $STATIC, $method(static_cast<NumericShaper*(*)($Set*,$NumericShaper$Range*)>(&NumericShaper::getContextualShaper))},
	{"getHighBit", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&NumericShaper::getHighBit))},
	{"getKeyFromMask", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&NumericShaper::getKeyFromMask))},
	{"getRangeSet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;", $PUBLIC, $method(static_cast<$Set*(NumericShaper::*)()>(&NumericShaper::getRangeSet))},
	{"getRanges", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(NumericShaper::*)()>(&NumericShaper::getRanges))},
	{"getShaper", "(I)Ljava/awt/font/NumericShaper;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NumericShaper*(*)(int32_t)>(&NumericShaper::getShaper))},
	{"getShaper", "(Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NumericShaper*(*)($NumericShaper$Range*)>(&NumericShaper::getShaper))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isContextual", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(NumericShaper::*)()>(&NumericShaper::isContextual))},
	{"isStrongDirectional", "(C)Z", nullptr, $PRIVATE, $method(static_cast<bool(NumericShaper::*)(char16_t)>(&NumericShaper::isStrongDirectional))},
	{"rangeForCodePoint", "(I)Ljava/awt/font/NumericShaper$Range;", nullptr, $PRIVATE, $method(static_cast<$NumericShaper$Range*(NumericShaper::*)(int32_t)>(&NumericShaper::rangeForCodePoint))},
	{"search", "(I[III)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$ints*,int32_t,int32_t)>(&NumericShaper::search))},
	{"shape", "([CII)V", nullptr, $PUBLIC, $method(static_cast<void(NumericShaper::*)($chars*,int32_t,int32_t)>(&NumericShaper::shape))},
	{"shape", "([CIII)V", nullptr, $PUBLIC, $method(static_cast<void(NumericShaper::*)($chars*,int32_t,int32_t,int32_t)>(&NumericShaper::shape))},
	{"shape", "([CIILjava/awt/font/NumericShaper$Range;)V", nullptr, $PUBLIC, $method(static_cast<void(NumericShaper::*)($chars*,int32_t,int32_t,$NumericShaper$Range*)>(&NumericShaper::shape))},
	{"shapeContextually", "([CIII)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(NumericShaper::*)($chars*,int32_t,int32_t,int32_t)>(&NumericShaper::shapeContextually))},
	{"shapeContextually", "([CIILjava/awt/font/NumericShaper$Range;)V", nullptr, $PRIVATE, $method(static_cast<void(NumericShaper::*)($chars*,int32_t,int32_t,$NumericShaper$Range*)>(&NumericShaper::shapeContextually))},
	{"shapeNonContextually", "([CII)V", nullptr, $PRIVATE, $method(static_cast<void(NumericShaper::*)($chars*,int32_t,int32_t)>(&NumericShaper::shapeNonContextually))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(NumericShaper::*)($ObjectOutputStream*)>(&NumericShaper::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _NumericShaper_InnerClassesInfo_[] = {
	{"java.awt.font.NumericShaper$Range", "java.awt.font.NumericShaper", "Range", $PUBLIC | $STATIC | $ENUM},
	{"java.awt.font.NumericShaper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NumericShaper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.font.NumericShaper",
	"java.lang.Object",
	"java.io.Serializable",
	_NumericShaper_FieldInfo_,
	_NumericShaper_MethodInfo_,
	nullptr,
	nullptr,
	_NumericShaper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.font.NumericShaper$Range,java.awt.font.NumericShaper$Range$1,java.awt.font.NumericShaper$1"
};

$Object* allocate$NumericShaper($Class* clazz) {
	return $of($alloc(NumericShaper));
}

$chars* NumericShaper::bases = nullptr;
$chars* NumericShaper::contexts = nullptr;
int32_t NumericShaper::ctCache = 0;
int32_t NumericShaper::ctCacheLimit = 0;
$ints* NumericShaper::strongTable = nullptr;

int32_t NumericShaper::getContextKey(char16_t c) {
	$init(NumericShaper);
	if (c < $nc(NumericShaper::contexts)->get(NumericShaper::ctCache)) {
		while (NumericShaper::ctCache > 0 && c < $nc(NumericShaper::contexts)->get(NumericShaper::ctCache)) {
			--NumericShaper::ctCache;
		}
	} else {
		if (c >= $nc(NumericShaper::contexts)->get(NumericShaper::ctCache + 1)) {
			while (NumericShaper::ctCache < NumericShaper::ctCacheLimit && c >= $nc(NumericShaper::contexts)->get(NumericShaper::ctCache + 1)) {
				++NumericShaper::ctCache;
			}
		}
	}
	return ((int32_t)(NumericShaper::ctCache & (uint32_t)1)) == 0 ? (NumericShaper::ctCache / 2) : NumericShaper::EUROPEAN_KEY;
}

$NumericShaper$Range* NumericShaper::rangeForCodePoint(int32_t codepoint) {
	if ($nc(this->currentRange)->inRange(codepoint)) {
		return this->currentRange;
	}
	$var($NumericShaper$RangeArray, ranges, this->rangeArray);
	if ($nc(ranges)->length > NumericShaper::BSEARCH_THRESHOLD) {
		int32_t lo = 0;
		int32_t hi = ranges->length - 1;
		while (lo <= hi) {
			int32_t mid = (lo + hi) / 2;
			$NumericShaper$Range* range = ranges->get(mid);
			if (codepoint < $nc(range)->start) {
				hi = mid - 1;
			} else if (codepoint >= range->end) {
				lo = mid + 1;
			} else {
				$set(this, currentRange, range);
				return range;
			}
		}
	} else {
		for (int32_t i = 0; i < ranges->length; ++i) {
			if ($nc(ranges->get(i))->inRange(codepoint)) {
				return ranges->get(i);
			}
		}
	}
	return $NumericShaper$Range::EUROPEAN;
}

bool NumericShaper::isStrongDirectional(char16_t c) {
	int32_t cachedIndex = this->stCache;
	if (c < $nc(NumericShaper::strongTable)->get(cachedIndex)) {
		cachedIndex = search(c, NumericShaper::strongTable, 0, cachedIndex);
	} else if (c >= $nc(NumericShaper::strongTable)->get(cachedIndex + 1)) {
		cachedIndex = search(c, NumericShaper::strongTable, cachedIndex + 1, $nc(NumericShaper::strongTable)->length - cachedIndex - 1);
	}
	bool val = ((int32_t)(cachedIndex & (uint32_t)1)) == 1;
	this->stCache = cachedIndex;
	return val;
}

int32_t NumericShaper::getKeyFromMask(int32_t mask) {
	$init(NumericShaper);
	$useLocalCurrentObjectStackCache();
	int32_t key = 0;
	while (key < NumericShaper::NUM_KEYS && (((int32_t)(mask & (uint32_t)($sl(1, key)))) == 0)) {
		++key;
	}
	if (key == NumericShaper::NUM_KEYS || (((int32_t)(mask & (uint32_t)~($sl(1, key)))) != 0)) {
		$throwNew($IllegalArgumentException, $$str({"invalid shaper: "_s, $($Integer::toHexString(mask))}));
	}
	return key;
}

NumericShaper* NumericShaper::getShaper(int32_t singleRange) {
	$init(NumericShaper);
	int32_t key = getKeyFromMask(singleRange);
	return $new(NumericShaper, key, singleRange);
}

NumericShaper* NumericShaper::getShaper($NumericShaper$Range* singleRange) {
	$init(NumericShaper);
	return $new(NumericShaper, singleRange, $(static_cast<$Set*>($EnumSet::of(singleRange))));
}

NumericShaper* NumericShaper::getContextualShaper(int32_t ranges) {
	$init(NumericShaper);
	ranges |= NumericShaper::CONTEXTUAL_MASK;
	return $new(NumericShaper, NumericShaper::EUROPEAN_KEY, ranges);
}

NumericShaper* NumericShaper::getContextualShaper($Set* ranges) {
	$init(NumericShaper);
	$init($NumericShaper$Range);
	$var(NumericShaper, shaper, $new(NumericShaper, $NumericShaper$Range::EUROPEAN, ranges));
	shaper->mask = NumericShaper::CONTEXTUAL_MASK;
	return shaper;
}

NumericShaper* NumericShaper::getContextualShaper(int32_t ranges, int32_t defaultContext) {
	$init(NumericShaper);
	int32_t key = getKeyFromMask(defaultContext);
	ranges |= NumericShaper::CONTEXTUAL_MASK;
	return $new(NumericShaper, key, ranges);
}

NumericShaper* NumericShaper::getContextualShaper($Set* ranges, $NumericShaper$Range* defaultContext) {
	$init(NumericShaper);
	if (defaultContext == nullptr) {
		$throwNew($NullPointerException);
	}
	$var(NumericShaper, shaper, $new(NumericShaper, defaultContext, ranges));
	shaper->mask = NumericShaper::CONTEXTUAL_MASK;
	return shaper;
}

void NumericShaper::init$(int32_t key, int32_t mask) {
	$init($NumericShaper$Range);
	$set(this, currentRange, $NumericShaper$Range::EUROPEAN);
	this->stCache = 0;
	this->key = key;
	this->mask = mask;
}

void NumericShaper::init$($NumericShaper$Range* defaultContext, $Set* ranges) {
	$useLocalCurrentObjectStackCache();
	$init($NumericShaper$Range);
	$set(this, currentRange, $NumericShaper$Range::EUROPEAN);
	this->stCache = 0;
	$set(this, shapingRange, defaultContext);
	$set(this, rangeSet, $EnumSet::copyOf(static_cast<$Collection*>(ranges)));
	bool var$0 = $nc(this->rangeSet)->contains($NumericShaper$Range::EASTERN_ARABIC);
	if (var$0 && $nc(this->rangeSet)->contains($NumericShaper$Range::ARABIC)) {
		$nc(this->rangeSet)->remove($NumericShaper$Range::ARABIC);
	}
	bool var$1 = $nc(this->rangeSet)->contains($NumericShaper$Range::TAI_THAM_THAM);
	if (var$1 && $nc(this->rangeSet)->contains($NumericShaper$Range::TAI_THAM_HORA)) {
		$nc(this->rangeSet)->remove($NumericShaper$Range::TAI_THAM_HORA);
	}
	$set(this, rangeArray, $fcast($NumericShaper$RangeArray, $nc(this->rangeSet)->toArray($$new($NumericShaper$RangeArray, $nc(this->rangeSet)->size()))));
	if ($nc(this->rangeArray)->length > NumericShaper::BSEARCH_THRESHOLD) {
		$Arrays::sort(this->rangeArray, $$new($NumericShaper$1, this));
	}
}

void NumericShaper::shape($chars* text, int32_t start, int32_t count) {
	checkParams(text, start, count);
	if (isContextual()) {
		if (this->rangeSet == nullptr) {
			shapeContextually(text, start, count, this->key);
		} else {
			shapeContextually(text, start, count, this->shapingRange);
		}
	} else {
		shapeNonContextually(text, start, count);
	}
}

void NumericShaper::shape($chars* text, int32_t start, int32_t count, int32_t context) {
	checkParams(text, start, count);
	if (isContextual()) {
		int32_t ctxKey = getKeyFromMask(context);
		if (this->rangeSet == nullptr) {
			shapeContextually(text, start, count, ctxKey);
		} else {
			shapeContextually(text, start, count, $($NumericShaper$Range::values())->get(ctxKey));
		}
	} else {
		shapeNonContextually(text, start, count);
	}
}

void NumericShaper::shape($chars* text, int32_t start, int32_t count, $NumericShaper$Range* context) {
	checkParams(text, start, count);
	if (context == nullptr) {
		$throwNew($NullPointerException, "context is null"_s);
	}
	if (isContextual()) {
		if (this->rangeSet != nullptr) {
			shapeContextually(text, start, count, context);
		} else {
			int32_t key = $NumericShaper$Range::toRangeIndex(context);
			if (key >= 0) {
				shapeContextually(text, start, count, key);
			} else {
				shapeContextually(text, start, count, this->shapingRange);
			}
		}
	} else {
		shapeNonContextually(text, start, count);
	}
}

void NumericShaper::checkParams($chars* text, int32_t start, int32_t count) {
	$useLocalCurrentObjectStackCache();
	if (text == nullptr) {
		$throwNew($NullPointerException, "text is null"_s);
	}
	if ((start < 0) || (start > $nc(text)->length) || ((start + count) < 0) || ((start + count) > $nc(text)->length)) {
		$throwNew($IndexOutOfBoundsException, $$str({"bad start or count for text of length "_s, $$str(text->length)}));
	}
}

bool NumericShaper::isContextual() {
	return ((int32_t)(this->mask & (uint32_t)NumericShaper::CONTEXTUAL_MASK)) != 0;
}

int32_t NumericShaper::getRanges() {
	return (int32_t)(this->mask & (uint32_t)~NumericShaper::CONTEXTUAL_MASK);
}

$Set* NumericShaper::getRangeSet() {
	if (this->rangeSet != nullptr) {
		return $EnumSet::copyOf(static_cast<$Collection*>(this->rangeSet));
	}
	return $NumericShaper$Range::maskToRangeSet(this->mask);
}

void NumericShaper::shapeNonContextually($chars* text, int32_t start, int32_t count) {
	int32_t base = 0;
	char16_t minDigit = u'0';
	if (this->shapingRange != nullptr) {
		base = $nc(this->shapingRange)->getDigitBase();
		minDigit += $nc(this->shapingRange)->getNumericBase();
	} else {
		base = $nc(NumericShaper::bases)->get(this->key);
		if (this->key == NumericShaper::ETHIOPIC_KEY) {
			++minDigit;
		}
	}
	{
		int32_t i = start;
		int32_t e = start + count;
		for (; i < e; ++i) {
			char16_t c = $nc(text)->get(i);
			if (c >= minDigit && c <= u'9') {
				text->set(i, (char16_t)(c + base));
			}
		}
	}
}

void NumericShaper::shapeContextually($chars* text, int32_t start, int32_t count, int32_t ctxKey) {
	$synchronized(this) {
		if (((int32_t)(this->mask & (uint32_t)($sl(1, ctxKey)))) == 0) {
			ctxKey = NumericShaper::EUROPEAN_KEY;
		}
		int32_t lastkey = ctxKey;
		int32_t base = $nc(NumericShaper::bases)->get(ctxKey);
		char16_t minDigit = ctxKey == NumericShaper::ETHIOPIC_KEY ? u'1' : u'0';
		$synchronized(NumericShaper::class$) {
			{
				int32_t i = start;
				int32_t e = start + count;
				for (; i < e; ++i) {
					char16_t c = $nc(text)->get(i);
					if (c >= minDigit && c <= u'9') {
						text->set(i, (char16_t)(c + base));
					}
					if (isStrongDirectional(c)) {
						int32_t newkey = getContextKey(c);
						if (newkey != lastkey) {
							lastkey = newkey;
							ctxKey = newkey;
							if ((((int32_t)(this->mask & (uint32_t)NumericShaper::EASTERN_ARABIC)) != 0) && (ctxKey == NumericShaper::ARABIC_KEY || ctxKey == NumericShaper::EASTERN_ARABIC_KEY)) {
								ctxKey = NumericShaper::EASTERN_ARABIC_KEY;
							} else if ((((int32_t)(this->mask & (uint32_t)NumericShaper::ARABIC)) != 0) && (ctxKey == NumericShaper::ARABIC_KEY || ctxKey == NumericShaper::EASTERN_ARABIC_KEY)) {
								ctxKey = NumericShaper::ARABIC_KEY;
							} else if (((int32_t)(this->mask & (uint32_t)($sl(1, ctxKey)))) == 0) {
								ctxKey = NumericShaper::EUROPEAN_KEY;
							}
							base = $nc(NumericShaper::bases)->get(ctxKey);
							minDigit = ctxKey == NumericShaper::ETHIOPIC_KEY ? u'1' : u'0';
						}
					}
				}
			}
		}
	}
}

void NumericShaper::shapeContextually($chars* text, int32_t start, int32_t count, $NumericShaper$Range* ctxKey$renamed) {
	$var($NumericShaper$Range, ctxKey, ctxKey$renamed);
	if (ctxKey == nullptr || !$nc(this->rangeSet)->contains(ctxKey)) {
		$init($NumericShaper$Range);
		ctxKey = $NumericShaper$Range::EUROPEAN;
	}
	$NumericShaper$Range* lastKey = ctxKey;
	int32_t base = $nc(ctxKey)->getDigitBase();
	char16_t minDigit = (char16_t)(u'0' + ctxKey->getNumericBase());
	int32_t end = start + count;
	for (int32_t i = start; i < end; ++i) {
		char16_t c = $nc(text)->get(i);
		if (c >= minDigit && c <= u'9') {
			text->set(i, (char16_t)(c + base));
			continue;
		}
		if (isStrongDirectional(c)) {
			ctxKey = rangeForCodePoint(c);
			if (ctxKey != lastKey) {
				lastKey = ctxKey;
				base = ctxKey->getDigitBase();
				minDigit = (char16_t)(u'0' + ctxKey->getNumericBase());
			}
		}
	}
}

int32_t NumericShaper::hashCode() {
	int32_t hash = this->mask;
	if (this->rangeSet != nullptr) {
		hash &= (uint32_t)NumericShaper::CONTEXTUAL_MASK;
		hash ^= $nc(this->rangeSet)->hashCode();
	}
	return hash;
}

bool NumericShaper::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (o != nullptr) {
		try {
			$var(NumericShaper, rhs, $cast(NumericShaper, o));
			if (this->rangeSet != nullptr) {
				if (rhs->rangeSet != nullptr) {
					bool var$1 = isContextual();
					bool var$0 = var$1 == rhs->isContextual();
					return var$0 && $nc(this->rangeSet)->equals(rhs->rangeSet) && this->shapingRange == rhs->shapingRange;
				}
				bool var$4 = isContextual();
				bool var$3 = var$4 == rhs->isContextual();
				bool var$2 = var$3 && $nc(this->rangeSet)->equals($($NumericShaper$Range::maskToRangeSet(rhs->mask)));
				return var$2 && this->shapingRange == $NumericShaper$Range::indexToRange(rhs->key);
			} else if (rhs->rangeSet != nullptr) {
				$var($Set, rset, $NumericShaper$Range::maskToRangeSet(this->mask));
				$NumericShaper$Range* srange = $NumericShaper$Range::indexToRange(this->key);
				bool var$6 = isContextual();
				bool var$5 = var$6 == rhs->isContextual();
				return var$5 && $nc(rset)->equals(rhs->rangeSet) && srange == rhs->shapingRange;
			}
			return rhs->mask == this->mask && rhs->key == this->key;
		} catch ($ClassCastException&) {
			$catch();
		}
	}
	return false;
}

$String* NumericShaper::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, $($Serializable::toString())));
	buf->append("[contextual:"_s)->append(isContextual());
	$var($StringArray, keyNames, nullptr);
	if (isContextual()) {
		buf->append(", context:"_s);
		buf->append(this->shapingRange == nullptr ? $of($($NumericShaper$Range::values())->get(this->key)) : $of(this->shapingRange));
	}
	if (this->rangeSet == nullptr) {
		buf->append(", range(s): "_s);
		bool first = true;
		for (int32_t i = 0; i < NumericShaper::NUM_KEYS; ++i) {
			if (((int32_t)(this->mask & (uint32_t)($sl(1, i)))) != 0) {
				if (first) {
					first = false;
				} else {
					buf->append(", "_s);
				}
				buf->append($of($($NumericShaper$Range::values())->get(i)));
			}
		}
	} else {
		buf->append(", range set: "_s)->append($of(this->rangeSet));
	}
	buf->append(u']');
	return buf->toString();
}

int32_t NumericShaper::getHighBit(int32_t value) {
	$init(NumericShaper);
	if (value <= 0) {
		return -32;
	}
	int32_t bit = 0;
	if (value >= 1 << 16) {
		value >>= 16;
		bit += 16;
	}
	if (value >= 1 << 8) {
		value >>= 8;
		bit += 8;
	}
	if (value >= 1 << 4) {
		value >>= 4;
		bit += 4;
	}
	if (value >= 1 << 2) {
		value >>= 2;
		bit += 2;
	}
	if (value >= 1 << 1) {
		bit += 1;
	}
	return bit;
}

int32_t NumericShaper::search(int32_t value, $ints* array, int32_t start, int32_t length) {
	$init(NumericShaper);
	int32_t power = $sl(1, getHighBit(length));
	int32_t extra = length - power;
	int32_t probe = power;
	int32_t index = start;
	if (value >= $nc(array)->get(index + extra)) {
		index += extra;
	}
	while (probe > 1) {
		probe >>= 1;
		if (value >= $nc(array)->get(index + probe)) {
			index += probe;
		}
	}
	return index;
}

void NumericShaper::writeObject($ObjectOutputStream* stream) {
	if (this->shapingRange != nullptr) {
		int32_t index = $NumericShaper$Range::toRangeIndex(this->shapingRange);
		if (index >= 0) {
			this->key = index;
		}
	}
	if (this->rangeSet != nullptr) {
		this->mask |= $NumericShaper$Range::toRangeMask(this->rangeSet);
	}
	$nc(stream)->defaultWriteObject();
}

void clinit$NumericShaper($Class* class$) {
	{
		if ($SharedSecrets::getJavaAWTFontAccess() == nullptr) {
			$SharedSecrets::setJavaAWTFontAccess($$new($JavaAWTFontAccessImpl));
		}
	}
	$assignStatic(NumericShaper::bases, $new($chars, {
		(char16_t)(u'0' - u'0'),
		(char16_t)((char16_t)0x660 - u'0'),
		(char16_t)((char16_t)0x6F0 - u'0'),
		(char16_t)((char16_t)0x966 - u'0'),
		(char16_t)((char16_t)0x9E6 - u'0'),
		(char16_t)((char16_t)0xA66 - u'0'),
		(char16_t)((char16_t)0xAE6 - u'0'),
		(char16_t)((char16_t)0xB66 - u'0'),
		(char16_t)((char16_t)0xBE6 - u'0'),
		(char16_t)((char16_t)0xC66 - u'0'),
		(char16_t)((char16_t)0xCE6 - u'0'),
		(char16_t)((char16_t)0xD66 - u'0'),
		(char16_t)((char16_t)0xE50 - u'0'),
		(char16_t)((char16_t)0xED0 - u'0'),
		(char16_t)((char16_t)0xF20 - u'0'),
		(char16_t)((char16_t)0x1040 - u'0'),
		(char16_t)((char16_t)0x1369 - u'1'),
		(char16_t)((char16_t)0x17E0 - u'0'),
		(char16_t)((char16_t)0x1810 - u'0')
	}));
	$assignStatic(NumericShaper::contexts, $new($chars, {
		u'\0',
		(char16_t)0x300,
		(char16_t)0x600,
		(char16_t)0x780,
		(char16_t)0x600,
		(char16_t)0x780,
		(char16_t)0x900,
		(char16_t)0x980,
		(char16_t)0x980,
		(char16_t)0xA00,
		(char16_t)0xA00,
		(char16_t)0xA80,
		(char16_t)0xA80,
		(char16_t)0xB00,
		(char16_t)0xB00,
		(char16_t)0xB80,
		(char16_t)0xB80,
		(char16_t)0xC00,
		(char16_t)0xC00,
		(char16_t)0xC80,
		(char16_t)0xC80,
		(char16_t)0xD00,
		(char16_t)0xD00,
		(char16_t)0xD80,
		(char16_t)0xE00,
		(char16_t)0xE80,
		(char16_t)0xE80,
		(char16_t)0xF00,
		(char16_t)0xF00,
		(char16_t)0x1000,
		(char16_t)0x1000,
		(char16_t)0x1080,
		(char16_t)0x1200,
		(char16_t)0x1380,
		(char16_t)0x1780,
		(char16_t)0x1800,
		(char16_t)0x1800,
		(char16_t)0x1900,
		(char16_t)0xFFFF
	}));
	NumericShaper::ctCache = 0;
	NumericShaper::ctCacheLimit = $nc(NumericShaper::contexts)->length - 2;
	$assignStatic(NumericShaper::strongTable, $new($ints, {
		0,
		65,
		91,
		97,
		123,
		170,
		171,
		181,
		182,
		186,
		187,
		192,
		215,
		216,
		247,
		248,
		697,
		699,
		706,
		720,
		722,
		736,
		741,
		750,
		751,
		880,
		884,
		886,
		888,
		890,
		894,
		895,
		896,
		902,
		903,
		904,
		907,
		908,
		909,
		910,
		930,
		931,
		1014,
		1015,
		1155,
		1162,
		1328,
		1329,
		1367,
		1369,
		1418,
		1424,
		1425,
		1470,
		1471,
		1472,
		1473,
		1475,
		1476,
		1478,
		1479,
		1480,
		1536,
		1544,
		1545,
		1547,
		1548,
		1549,
		1550,
		1563,
		1611,
		1645,
		1648,
		1649,
		1750,
		1765,
		1767,
		1774,
		1776,
		1786,
		1809,
		1810,
		1840,
		1867,
		1958,
		1969,
		2027,
		2036,
		2038,
		2042,
		2045,
		2046,
		2070,
		2074,
		2075,
		2084,
		2085,
		2088,
		2089,
		2094,
		2137,
		2140,
		2275,
		2307,
		2362,
		2363,
		2364,
		2365,
		2369,
		2377,
		2381,
		2382,
		2385,
		2392,
		2402,
		2404,
		2433,
		2434,
		2436,
		2437,
		2445,
		2447,
		2449,
		2451,
		2473,
		2474,
		2481,
		2482,
		2483,
		2486,
		2490,
		2493,
		2497,
		2503,
		2505,
		2507,
		2509,
		2510,
		2511,
		2519,
		2520,
		2524,
		2526,
		2527,
		2530,
		2534,
		2546,
		2548,
		2555,
		2556,
		2558,
		2563,
		2564,
		2565,
		2571,
		2575,
		2577,
		2579,
		2601,
		2602,
		2609,
		2610,
		2612,
		2613,
		2615,
		2616,
		2618,
		2622,
		2625,
		2649,
		2653,
		2654,
		2655,
		2662,
		2672,
		2674,
		2677,
		2678,
		2675,
		2691,
		2692,
		2693,
		2702,
		2703,
		2706,
		2707,
		2729,
		2730,
		2737,
		2738,
		2740,
		2741,
		2746,
		2749,
		2753,
		2761,
		2762,
		2763,
		2765,
		2768,
		2769,
		2784,
		2786,
		2790,
		2801,
		2809,
		2810,
		2818,
		2820,
		2821,
		2829,
		2831,
		2833,
		2835,
		2857,
		2858,
		2865,
		2866,
		2868,
		2869,
		2874,
		2877,
		2879,
		2880,
		2881,
		2887,
		2889,
		2891,
		2893,
		2903,
		2904,
		2908,
		2910,
		2911,
		2914,
		2918,
		2936,
		2947,
		2948,
		2949,
		2955,
		2958,
		2961,
		2962,
		2966,
		2969,
		2971,
		2972,
		2973,
		2974,
		2976,
		2979,
		2981,
		2984,
		2987,
		2990,
		3002,
		3006,
		3008,
		3009,
		3011,
		3014,
		3017,
		3018,
		3021,
		3024,
		3025,
		3031,
		3032,
		3046,
		3059,
		3073,
		3076,
		3077,
		3085,
		3086,
		3089,
		3090,
		3113,
		3114,
		3130,
		3133,
		3134,
		3137,
		3141,
		3160,
		3163,
		3168,
		3170,
		3174,
		3184,
		3199,
		3201,
		3202,
		3213,
		3214,
		3217,
		3218,
		3241,
		3242,
		3252,
		3253,
		3258,
		3261,
		3269,
		3270,
		3273,
		3274,
		3276,
		3285,
		3287,
		3294,
		3295,
		3296,
		3298,
		3302,
		3312,
		3313,
		3315,
		3330,
		3332,
		3333,
		3341,
		3342,
		3345,
		3346,
		3387,
		3389,
		3393,
		3398,
		3401,
		3402,
		3405,
		3406,
		3426,
		3430,
		3456,
		3458,
		3460,
		3461,
		3479,
		3482,
		3506,
		3507,
		3516,
		3517,
		3518,
		3520,
		3527,
		3535,
		3538,
		3544,
		3552,
		3558,
		3568,
		3570,
		3573,
		3585,
		3633,
		3634,
		3636,
		3648,
		3655,
		3663,
		3676,
		3713,
		3715,
		3716,
		3717,
		3719,
		3721,
		3722,
		3723,
		3725,
		3726,
		3732,
		3736,
		3737,
		3744,
		3745,
		3748,
		3749,
		3750,
		3751,
		3752,
		3754,
		3756,
		3757,
		3761,
		3762,
		3764,
		3773,
		3774,
		3776,
		3781,
		3782,
		3783,
		3792,
		3802,
		3804,
		3808,
		3840,
		3864,
		3866,
		3893,
		3894,
		3895,
		3896,
		3897,
		3902,
		3912,
		3913,
		3949,
		3967,
		3968,
		3973,
		3974,
		3976,
		3981,
		4030,
		4038,
		4039,
		4045,
		4046,
		4059,
		4096,
		4141,
		4145,
		4146,
		4152,
		4153,
		4155,
		4157,
		4159,
		4184,
		4186,
		4190,
		4193,
		4209,
		4213,
		4226,
		4227,
		4229,
		4231,
		4237,
		4238,
		4253,
		4254,
		4294,
		4295,
		4296,
		4301,
		4302,
		4304,
		4681,
		4682,
		4686,
		4688,
		4695,
		4696,
		4697,
		4698,
		4702,
		4704,
		4745,
		4746,
		4750,
		4752,
		4785,
		4786,
		4790,
		4792,
		4799,
		4800,
		4801,
		4802,
		4806,
		4808,
		4823,
		4824,
		4881,
		4882,
		4886,
		4888,
		4955,
		4960,
		4989,
		4992,
		5008,
		5024,
		5110,
		5112,
		5118,
		5121,
		5760,
		5761,
		5787,
		5792,
		5881,
		5888,
		5901,
		5902,
		5906,
		5920,
		5938,
		5941,
		5943,
		5952,
		5970,
		5984,
		5997,
		5998,
		6001,
		6016,
		6068,
		6070,
		6071,
		6078,
		6086,
		6087,
		6089,
		6100,
		6107,
		6108,
		6109,
		6112,
		6122,
		6160,
		6170,
		6176,
		6265,
		6276,
		6277,
		6279,
		6313,
		6314,
		6315,
		6320,
		6390,
		6400,
		6431,
		6435,
		6439,
		6441,
		6444,
		6448,
		6450,
		6451,
		6457,
		6470,
		6510,
		6512,
		6517,
		6528,
		6572,
		6576,
		6602,
		6608,
		6619,
		6656,
		6679,
		6681,
		6683,
		6686,
		6742,
		6743,
		6744,
		6753,
		6754,
		6755,
		6757,
		6765,
		6771,
		6784,
		6794,
		6800,
		6810,
		6816,
		6830,
		6916,
		6964,
		6965,
		6966,
		6971,
		6972,
		6973,
		6978,
		6979,
		6988,
		6992,
		7019,
		7028,
		7037,
		7042,
		7074,
		7078,
		7080,
		7082,
		7083,
		7086,
		7142,
		7143,
		7144,
		7146,
		7149,
		7150,
		7151,
		7154,
		7156,
		7164,
		7212,
		7220,
		7222,
		7227,
		7242,
		7245,
		7305,
		7312,
		7355,
		7357,
		7368,
		7379,
		7380,
		7393,
		7394,
		7401,
		7405,
		7406,
		7412,
		7413,
		7416,
		7424,
		7616,
		7680,
		7958,
		7960,
		7966,
		7968,
		8006,
		8008,
		8014,
		8016,
		8024,
		8025,
		8026,
		8027,
		8028,
		8029,
		8030,
		8031,
		8062,
		8064,
		8117,
		8118,
		8125,
		8126,
		8127,
		8130,
		8133,
		8134,
		8141,
		8144,
		8148,
		8150,
		8156,
		8160,
		8173,
		8178,
		8181,
		8182,
		8189,
		8206,
		8208,
		8305,
		8306,
		8319,
		8320,
		8336,
		8349,
		8450,
		8451,
		8455,
		8456,
		8458,
		8468,
		8469,
		8470,
		8473,
		8478,
		8484,
		8485,
		8486,
		8487,
		8488,
		8489,
		8490,
		8494,
		8495,
		8506,
		8508,
		8512,
		8517,
		8522,
		8526,
		8528,
		8544,
		8585,
		9014,
		9083,
		9109,
		9110,
		9372,
		9450,
		9900,
		9901,
		10240,
		10496,
		11264,
		11311,
		11312,
		11359,
		11360,
		11493,
		11499,
		11503,
		11506,
		11508,
		11520,
		11558,
		11559,
		11560,
		11565,
		11566,
		11568,
		11624,
		11631,
		11633,
		11648,
		11671,
		11680,
		11687,
		11688,
		11695,
		11696,
		11703,
		11704,
		11711,
		11712,
		11719,
		11720,
		11727,
		11728,
		11735,
		11736,
		11743,
		12293,
		12296,
		12321,
		12330,
		12334,
		12336,
		12337,
		12342,
		12344,
		12349,
		12353,
		12439,
		12445,
		12448,
		12449,
		12539,
		12540,
		12544,
		12549,
		12592,
		12593,
		12687,
		12688,
		12731,
		12784,
		12829,
		12832,
		12880,
		12896,
		12924,
		12927,
		12977,
		12992,
		13004,
		13008,
		13055,
		13056,
		13175,
		13179,
		13278,
		13280,
		13311,
		13312,
		19894,
		19968,
		0x00009FF0,
		0x0000A000,
		0x0000A48D,
		0x0000A4D0,
		0x0000A60D,
		0x0000A610,
		0x0000A62C,
		0x0000A640,
		0x0000A66F,
		0x0000A680,
		0x0000A69E,
		0x0000A6A0,
		0x0000A6F0,
		0x0000A6F2,
		0x0000A6F8,
		0x0000A722,
		0x0000A788,
		0x0000A789,
		0x0000A7BA,
		0x0000A7F7,
		0x0000A802,
		0x0000A803,
		0x0000A806,
		0x0000A807,
		0x0000A80B,
		0x0000A80C,
		0x0000A825,
		0x0000A827,
		0x0000A828,
		0x0000A830,
		0x0000A838,
		0x0000A840,
		0x0000A874,
		0x0000A880,
		0x0000A8C4,
		0x0000A8CE,
		0x0000A8DA,
		0x0000A8F2,
		0x0000A8FF,
		0x0000A900,
		0x0000A926,
		0x0000A92E,
		0x0000A947,
		0x0000A952,
		0x0000A954,
		0x0000A95F,
		0x0000A97D,
		0x0000A983,
		0x0000A9B3,
		0x0000A9B4,
		0x0000A9B6,
		0x0000A9BA,
		0x0000A9BC,
		0x0000A9BD,
		0x0000A9CE,
		0x0000A9CF,
		0x0000A9DA,
		0x0000A9DE,
		0x0000A9E5,
		0x0000A9E6,
		0x0000A9FF,
		0x0000AA00,
		0x0000AA29,
		0x0000AA2F,
		0x0000AA31,
		0x0000AA33,
		0x0000AA35,
		0x0000AA40,
		0x0000AA43,
		0x0000AA44,
		0x0000AA4C,
		0x0000AA4D,
		0x0000AA4E,
		0x0000AA50,
		0x0000AA5A,
		0x0000AA5C,
		0x0000AA7C,
		0x0000AA7D,
		0x0000AAB0,
		0x0000AAB1,
		0x0000AAB2,
		0x0000AAB5,
		0x0000AAB7,
		0x0000AAB9,
		0x0000AABE,
		0x0000AAC0,
		0x0000AAC1,
		0x0000AAC2,
		0x0000AAC3,
		0x0000AADB,
		0x0000AAEC,
		0x0000AAEE,
		0x0000AAF6,
		0x0000AB01,
		0x0000AB07,
		0x0000AB09,
		0x0000AB0F,
		0x0000AB11,
		0x0000AB17,
		0x0000AB20,
		0x0000AB27,
		0x0000AB28,
		0x0000AB2F,
		0x0000AB30,
		0x0000AB66,
		0x0000AB70,
		0x0000ABE5,
		0x0000ABE6,
		0x0000ABE8,
		0x0000ABE9,
		0x0000ABED,
		0x0000ABF0,
		0x0000ABFA,
		0x0000AC00,
		0x0000D7A4,
		0x0000D7B0,
		0x0000D7C7,
		0x0000D7CB,
		0x0000D7FC,
		0x0000E000,
		0x0000FA6E,
		0x0000FA70,
		0x0000FADA,
		0x0000FB00,
		0x0000FB07,
		0x0000FB13,
		0x0000FB18,
		0x0000FB1D,
		0x0000FB1E,
		0x0000FB1F,
		0x0000FB29,
		0x0000FB2A,
		0x0000FD3E,
		0x0000FD40,
		0x0000FDD0,
		0x0000FDF0,
		0x0000FDFD,
		0x0000FDFE,
		0x0000FE00,
		0x0000FE70,
		0x0000FEFF,
		0x0000FF21,
		0x0000FF3B,
		0x0000FF41,
		0x0000FF5B,
		0x0000FF66,
		0x0000FFBF,
		0x0000FFC2,
		0x0000FFC8,
		0x0000FFCA,
		0x0000FFD0,
		0x0000FFD2,
		0x0000FFD8,
		0x0000FFDA,
		0x0000FFDD,
		0x00010000,
		0x0001000C,
		0x0001000D,
		0x00010027,
		0x00010028,
		0x0001003B,
		0x0001003C,
		0x0001003E,
		0x0001003F,
		0x0001004E,
		0x00010050,
		0x0001005E,
		0x00010080,
		0x000100FB,
		0x00010100,
		0x00010101,
		0x00010102,
		0x00010103,
		0x00010107,
		0x00010134,
		0x00010137,
		0x00010140,
		0x0001018D,
		0x0001018F,
		0x000101D0,
		0x000101FD,
		0x00010280,
		0x0001029D,
		0x000102A0,
		0x000102D1,
		0x00010300,
		0x00010324,
		0x0001032D,
		0x0001034B,
		0x00010350,
		0x00010376,
		0x00010380,
		0x0001039E,
		0x0001039F,
		0x000103C4,
		0x000103C8,
		0x000103D6,
		0x00010400,
		0x0001049E,
		0x000104A0,
		0x000104AA,
		0x000104D3,
		0x000104D4,
		0x000104D8,
		0x000104FC,
		0x00010500,
		0x00010528,
		0x00010530,
		0x00010564,
		0x0001056F,
		0x00010570,
		0x00010600,
		0x00010737,
		0x00010740,
		0x00010756,
		0x00010760,
		0x00010768,
		0x00010800,
		0x0001091F,
		0x00010920,
		0x00010A01,
		0x00010A04,
		0x00010A05,
		0x00010A07,
		0x00010A0C,
		0x00010A10,
		0x00010A38,
		0x00010A3B,
		0x00010A3F,
		0x00010A40,
		0x00010AE5,
		0x00010AE7,
		0x00010B39,
		0x00010B40,
		0x00010D00,
		0x00010D40,
		0x00010E60,
		0x00010E7F,
		0x00010F30,
		0x00010F70,
		0x00011001,
		0x00011002,
		0x00011038,
		0x00011047,
		0x0001104E,
		0x00011066,
		0x00011070,
		0x00011082,
		0x000110B3,
		0x000110B7,
		0x000110B9,
		0x000110BB,
		0x000110C2,
		0x000110CD,
		0x000110CE,
		0x000110D0,
		0x000110E9,
		0x000110F0,
		0x000110FA,
		0x00011103,
		0x00011127,
		0x0001112C,
		0x0001112D,
		0x00011136,
		0x00011147,
		0x00011150,
		0x00011173,
		0x00011174,
		0x00011177,
		0x00011182,
		0x000111B6,
		0x000111BF,
		0x000111C9,
		0x000111CD,
		0x000111CE,
		0x000111D0,
		0x000111E0,
		0x000111E1,
		0x000111F5,
		0x00011200,
		0x00011212,
		0x00011213,
		0x0001122F,
		0x00011232,
		0x00011234,
		0x00011235,
		0x00011236,
		0x00011238,
		0x0001123E,
		0x00011280,
		0x00011287,
		0x00011288,
		0x00011289,
		0x0001128A,
		0x0001128E,
		0x0001128F,
		0x0001129E,
		0x0001129F,
		0x000112AA,
		0x000112B0,
		0x000112DF,
		0x000112E0,
		0x000112E3,
		0x000112F0,
		0x000112FA,
		0x00011302,
		0x00011304,
		0x00011305,
		0x0001130D,
		0x0001130F,
		0x00011311,
		0x00011313,
		0x00011329,
		0x0001132A,
		0x00011331,
		0x00011332,
		0x00011334,
		0x00011335,
		0x0001133A,
		0x0001133D,
		0x00011340,
		0x00011341,
		0x00011345,
		0x00011347,
		0x00011349,
		0x0001134B,
		0x0001134E,
		0x00011350,
		0x00011351,
		0x00011357,
		0x00011358,
		0x0001135D,
		0x00011364,
		0x00011400,
		0x00011438,
		0x00011440,
		0x00011442,
		0x00011445,
		0x00011446,
		0x00011447,
		0x0001145A,
		0x0001145B,
		0x0001145C,
		0x0001145D,
		0x0001145E,
		0x00011480,
		0x000114B3,
		0x000114B9,
		0x000114BA,
		0x000114BB,
		0x000114BF,
		0x000114C1,
		0x000114C2,
		0x000114C4,
		0x000114C8,
		0x000114D0,
		0x000114DA,
		0x00011580,
		0x000115B2,
		0x000115B8,
		0x000115BC,
		0x000115BE,
		0x000115BF,
		0x000115C1,
		0x000115DC,
		0x00011600,
		0x00011633,
		0x0001163B,
		0x0001163D,
		0x0001163E,
		0x0001163F,
		0x00011641,
		0x00011645,
		0x00011650,
		0x0001165A,
		0x00011680,
		0x000116AB,
		0x000116AC,
		0x000116AD,
		0x000116AE,
		0x000116B0,
		0x000116B6,
		0x000116B7,
		0x000116C0,
		0x000116CA,
		0x00011700,
		0x0001171B,
		0x00011720,
		0x00011722,
		0x00011726,
		0x00011727,
		0x00011730,
		0x0001182F,
		0x00011838,
		0x00011839,
		0x0001183B,
		0x0001183C,
		0x000118A0,
		0x000118F3,
		0x000118FF,
		0x00011900,
		0x00011A00,
		0x00011A01,
		0x00011A07,
		0x00011A09,
		0x00011A0B,
		0x00011A33,
		0x00011A3A,
		0x00011A3B,
		0x00011A3F,
		0x00011A47,
		0x00011A50,
		0x00011A51,
		0x00011A57,
		0x00011A59,
		0x00011A5C,
		0x00011A84,
		0x00011A86,
		0x00011A8A,
		0x00011A97,
		0x00011A98,
		0x00011A9A,
		0x00011AA3,
		0x00011AC0,
		0x00011AF9,
		0x00011C00,
		0x00011C09,
		0x00011C0A,
		0x00011C30,
		0x00011C3E,
		0x00011C46,
		0x00011C50,
		0x00011C6D,
		0x00011C70,
		0x00011C90,
		0x00011CA9,
		0x00011CAA,
		0x00011CB1,
		0x00011CB2,
		0x00011CB4,
		0x00011CB5,
		0x00011D00,
		0x00011D07,
		0x00011D08,
		0x00011D0A,
		0x00011D0B,
		0x00011D31,
		0x00011D46,
		0x00011D47,
		0x00011D50,
		0x00011D5A,
		0x00011D60,
		0x00011D66,
		0x00011D67,
		0x00011D69,
		0x00011D6A,
		0x00011D8F,
		0x00011D93,
		0x00011D95,
		0x00011D96,
		0x00011D97,
		0x00011D98,
		0x00011D99,
		0x00011DA0,
		0x00011DAA,
		0x00011EE0,
		0x00011EF3,
		0x00011EF5,
		0x00011EF9,
		0x00012000,
		0x0001239A,
		0x00012400,
		0x0001246F,
		0x00012470,
		0x00012475,
		0x00012480,
		0x00012544,
		0x00013000,
		0x0001342F,
		0x00014400,
		0x00014647,
		0x00016800,
		0x00016A39,
		0x00016A40,
		0x00016A5F,
		0x00016A60,
		0x00016A6A,
		0x00016A6E,
		0x00016A70,
		0x00016AD0,
		0x00016AEE,
		0x00016AF5,
		0x00016AF6,
		0x00016B00,
		0x00016B30,
		0x00016B37,
		0x00016B46,
		0x00016B50,
		0x00016B5A,
		0x00016B5B,
		0x00016B62,
		0x00016B63,
		0x00016B78,
		0x00016B7D,
		0x00016B90,
		0x00016E40,
		0x00016E9B,
		0x00016F00,
		0x00016F45,
		0x00016F50,
		0x00016F7F,
		0x00016F93,
		0x00016FA0,
		0x00016FE0,
		0x00016FE2,
		0x00017000,
		0x000187F2,
		0x00018800,
		0x00018AF3,
		0x0001B000,
		0x0001B11F,
		0x0001B170,
		0x0001B2FC,
		0x0001BC00,
		0x0001BC6B,
		0x0001BC70,
		0x0001BC7D,
		0x0001BC80,
		0x0001BC89,
		0x0001BC90,
		0x0001BC9A,
		0x0001BC9C,
		0x0001BC9D,
		0x0001BC9F,
		0x0001BCA0,
		0x0001D000,
		0x0001D0F6,
		0x0001D100,
		0x0001D127,
		0x0001D129,
		0x0001D167,
		0x0001D16A,
		0x0001D173,
		0x0001D183,
		0x0001D185,
		0x0001D18C,
		0x0001D1AA,
		0x0001D1AE,
		0x0001D1E9,
		0x0001D2E0,
		0x0001D2F4,
		0x0001D360,
		0x0001D379,
		0x0001D400,
		0x0001D455,
		0x0001D456,
		0x0001D49D,
		0x0001D49E,
		0x0001D4A0,
		0x0001D4A2,
		0x0001D4A3,
		0x0001D4A5,
		0x0001D4A7,
		0x0001D4A9,
		0x0001D4AD,
		0x0001D4AE,
		0x0001D4BA,
		0x0001D4BB,
		0x0001D4BC,
		0x0001D4BD,
		0x0001D4C4,
		0x0001D4C5,
		0x0001D506,
		0x0001D507,
		0x0001D50B,
		0x0001D50D,
		0x0001D515,
		0x0001D516,
		0x0001D51D,
		0x0001D51E,
		0x0001D53A,
		0x0001D53B,
		0x0001D53F,
		0x0001D540,
		0x0001D545,
		0x0001D546,
		0x0001D547,
		0x0001D54A,
		0x0001D551,
		0x0001D552,
		0x0001D6A6,
		0x0001D6A8,
		0x0001D6DB,
		0x0001D6DC,
		0x0001D715,
		0x0001D716,
		0x0001D74F,
		0x0001D750,
		0x0001D789,
		0x0001D78A,
		0x0001D7C3,
		0x0001D7C4,
		0x0001D7CC,
		0x0001D800,
		0x0001DA00,
		0x0001DA37,
		0x0001DA3B,
		0x0001DA6D,
		0x0001DA75,
		0x0001DA76,
		0x0001DA84,
		0x0001DA85,
		0x0001DA8C,
		0x0001E800,
		0x0001E8D0,
		0x0001E8D7,
		0x0001E944,
		0x0001E94B,
		0x0001EC70,
		0x0001ECC0,
		0x0001EE00,
		0x0001EF00,
		0x0001F000,
		0x0001F110,
		0x0001F12F,
		0x0001F130,
		0x0001F16A,
		0x0001F170,
		0x0001F1AD,
		0x0001F1E6,
		0x0001F203,
		0x0001F210,
		0x0001F23C,
		0x0001F240,
		0x0001F249,
		0x0001F250,
		0x0001F252,
		0x00020000,
		0x0002A6D7,
		0x0002A700,
		0x0002B735,
		0x0002B740,
		0x0002B81E,
		0x0002B820,
		0x0002CEA2,
		0x0002CEB0,
		0x0002EBE1,
		0x0002F800,
		0x0002FA1E,
		0x000F0000,
		0x000FFFFE,
		0x00100000,
		0x0010FFFE,
		0x0010FFFF
	}));
}

NumericShaper::NumericShaper() {
}

$Class* NumericShaper::load$($String* name, bool initialize) {
	$loadClass(NumericShaper, name, initialize, &_NumericShaper_ClassInfo_, clinit$NumericShaper, allocate$NumericShaper);
	return class$;
}

$Class* NumericShaper::class$ = nullptr;

		} // font
	} // awt
} // java