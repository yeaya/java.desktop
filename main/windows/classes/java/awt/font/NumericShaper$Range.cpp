#include <java/awt/font/NumericShaper$Range.h>

#include <java/awt/font/NumericShaper$Range$1.h>
#include <java/awt/font/NumericShaper.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef ARABIC
#undef BALINESE
#undef BENGALI
#undef CHAM
#undef DEVANAGARI
#undef EASTERN_ARABIC
#undef ETHIOPIC
#undef EUROPEAN
#undef GUJARATI
#undef GURMUKHI
#undef JAVANESE
#undef KANNADA
#undef KAYAH_LI
#undef KHMER
#undef LAO
#undef LEPCHA
#undef LIMBU
#undef MALAYALAM
#undef MEETEI_MAYEK
#undef MONGOLIAN
#undef MYANMAR
#undef MYANMAR_SHAN
#undef MYANMAR_TAI_LAING
#undef NEW_TAI_LUE
#undef NKO
#undef OL_CHIKI
#undef ORIYA
#undef SAURASHTRA
#undef SINHALA
#undef SUNDANESE
#undef TAI_THAM_HORA
#undef TAI_THAM_THAM
#undef TAMIL
#undef TELUGU
#undef THAI
#undef TIBETAN
#undef VAI

using $NumericShaper$RangeArray = $Array<::java::awt::font::NumericShaper$Range>;
using $NumericShaper = ::java::awt::font::NumericShaper;
using $NumericShaper$Range$1 = ::java::awt::font::NumericShaper$Range$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _NumericShaper$Range_FieldInfo_[] = {
	{"EUROPEAN", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, EUROPEAN)},
	{"ARABIC", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, ARABIC)},
	{"EASTERN_ARABIC", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, EASTERN_ARABIC)},
	{"DEVANAGARI", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, DEVANAGARI)},
	{"BENGALI", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, BENGALI)},
	{"GURMUKHI", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, GURMUKHI)},
	{"GUJARATI", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, GUJARATI)},
	{"ORIYA", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, ORIYA)},
	{"TAMIL", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, TAMIL)},
	{"TELUGU", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, TELUGU)},
	{"KANNADA", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, KANNADA)},
	{"MALAYALAM", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, MALAYALAM)},
	{"THAI", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, THAI)},
	{"LAO", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, LAO)},
	{"TIBETAN", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, TIBETAN)},
	{"MYANMAR", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, MYANMAR)},
	{"ETHIOPIC", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, ETHIOPIC)},
	{"KHMER", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, KHMER)},
	{"MONGOLIAN", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, MONGOLIAN)},
	{"NKO", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, NKO)},
	{"MYANMAR_SHAN", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, MYANMAR_SHAN)},
	{"LIMBU", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, LIMBU)},
	{"NEW_TAI_LUE", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, NEW_TAI_LUE)},
	{"BALINESE", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, BALINESE)},
	{"SUNDANESE", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, SUNDANESE)},
	{"LEPCHA", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, LEPCHA)},
	{"OL_CHIKI", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, OL_CHIKI)},
	{"VAI", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, VAI)},
	{"SAURASHTRA", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, SAURASHTRA)},
	{"KAYAH_LI", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, KAYAH_LI)},
	{"CHAM", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, CHAM)},
	{"TAI_THAM_HORA", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, TAI_THAM_HORA)},
	{"TAI_THAM_THAM", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, TAI_THAM_THAM)},
	{"JAVANESE", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, JAVANESE)},
	{"MEETEI_MAYEK", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, MEETEI_MAYEK)},
	{"SINHALA", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, SINHALA)},
	{"MYANMAR_TAI_LAING", "Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumericShaper$Range, MYANMAR_TAI_LAING)},
	{"$VALUES", "[Ljava/awt/font/NumericShaper$Range;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(NumericShaper$Range, $VALUES)},
	{"base", "I", nullptr, $PRIVATE | $FINAL, $field(NumericShaper$Range, base)},
	{"start", "I", nullptr, $PRIVATE | $FINAL, $field(NumericShaper$Range, start)},
	{"end", "I", nullptr, $PRIVATE | $FINAL, $field(NumericShaper$Range, end)},
	{}
};

$MethodInfo _NumericShaper$Range_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/font/NumericShaper$Range;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$NumericShaper$RangeArray*(*)()>(&NumericShaper$Range::$values))},
	{"<init>", "(Ljava/lang/String;IIII)V", "(III)V", $PRIVATE, $method(static_cast<void(NumericShaper$Range::*)($String*,int32_t,int32_t,int32_t,int32_t)>(&NumericShaper$Range::init$))},
	{"getDigitBase", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(NumericShaper$Range::*)()>(&NumericShaper$Range::getDigitBase))},
	{"getNumericBase", "()C", nullptr, 0},
	{"inRange", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(NumericShaper$Range::*)(int32_t)>(&NumericShaper$Range::inRange))},
	{"indexToRange", "(I)Ljava/awt/font/NumericShaper$Range;", nullptr, $PRIVATE | $STATIC, $method(static_cast<NumericShaper$Range*(*)(int32_t)>(&NumericShaper$Range::indexToRange))},
	{"maskToRangeSet", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)(int32_t)>(&NumericShaper$Range::maskToRangeSet))},
	{"toRangeIndex", "(Ljava/awt/font/NumericShaper$Range;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(NumericShaper$Range*)>(&NumericShaper$Range::toRangeIndex))},
	{"toRangeMask", "(Ljava/util/Set;)I", "(Ljava/util/Set<Ljava/awt/font/NumericShaper$Range;>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Set*)>(&NumericShaper$Range::toRangeMask))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NumericShaper$Range*(*)($String*)>(&NumericShaper$Range::valueOf))},
	{"values", "()[Ljava/awt/font/NumericShaper$Range;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$NumericShaper$RangeArray*(*)()>(&NumericShaper$Range::values))},
	{}
};

$InnerClassInfo _NumericShaper$Range_InnerClassesInfo_[] = {
	{"java.awt.font.NumericShaper$Range", "java.awt.font.NumericShaper", "Range", $PUBLIC | $STATIC | $ENUM},
	{"java.awt.font.NumericShaper$Range$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _NumericShaper$Range_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ENUM,
	"java.awt.font.NumericShaper$Range",
	"java.lang.Enum",
	nullptr,
	_NumericShaper$Range_FieldInfo_,
	_NumericShaper$Range_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/font/NumericShaper$Range;>;",
	nullptr,
	_NumericShaper$Range_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.font.NumericShaper"
};

$Object* allocate$NumericShaper$Range($Class* clazz) {
	return $of($alloc(NumericShaper$Range));
}


NumericShaper$Range* NumericShaper$Range::EUROPEAN = nullptr;

NumericShaper$Range* NumericShaper$Range::ARABIC = nullptr;

NumericShaper$Range* NumericShaper$Range::EASTERN_ARABIC = nullptr;

NumericShaper$Range* NumericShaper$Range::DEVANAGARI = nullptr;

NumericShaper$Range* NumericShaper$Range::BENGALI = nullptr;

NumericShaper$Range* NumericShaper$Range::GURMUKHI = nullptr;

NumericShaper$Range* NumericShaper$Range::GUJARATI = nullptr;

NumericShaper$Range* NumericShaper$Range::ORIYA = nullptr;

NumericShaper$Range* NumericShaper$Range::TAMIL = nullptr;

NumericShaper$Range* NumericShaper$Range::TELUGU = nullptr;

NumericShaper$Range* NumericShaper$Range::KANNADA = nullptr;

NumericShaper$Range* NumericShaper$Range::MALAYALAM = nullptr;

NumericShaper$Range* NumericShaper$Range::THAI = nullptr;

NumericShaper$Range* NumericShaper$Range::LAO = nullptr;

NumericShaper$Range* NumericShaper$Range::TIBETAN = nullptr;

NumericShaper$Range* NumericShaper$Range::MYANMAR = nullptr;

NumericShaper$Range* NumericShaper$Range::ETHIOPIC = nullptr;

NumericShaper$Range* NumericShaper$Range::KHMER = nullptr;

NumericShaper$Range* NumericShaper$Range::MONGOLIAN = nullptr;

NumericShaper$Range* NumericShaper$Range::NKO = nullptr;

NumericShaper$Range* NumericShaper$Range::MYANMAR_SHAN = nullptr;

NumericShaper$Range* NumericShaper$Range::LIMBU = nullptr;

NumericShaper$Range* NumericShaper$Range::NEW_TAI_LUE = nullptr;

NumericShaper$Range* NumericShaper$Range::BALINESE = nullptr;

NumericShaper$Range* NumericShaper$Range::SUNDANESE = nullptr;

NumericShaper$Range* NumericShaper$Range::LEPCHA = nullptr;

NumericShaper$Range* NumericShaper$Range::OL_CHIKI = nullptr;

NumericShaper$Range* NumericShaper$Range::VAI = nullptr;

NumericShaper$Range* NumericShaper$Range::SAURASHTRA = nullptr;

NumericShaper$Range* NumericShaper$Range::KAYAH_LI = nullptr;

NumericShaper$Range* NumericShaper$Range::CHAM = nullptr;

NumericShaper$Range* NumericShaper$Range::TAI_THAM_HORA = nullptr;

NumericShaper$Range* NumericShaper$Range::TAI_THAM_THAM = nullptr;

NumericShaper$Range* NumericShaper$Range::JAVANESE = nullptr;

NumericShaper$Range* NumericShaper$Range::MEETEI_MAYEK = nullptr;

NumericShaper$Range* NumericShaper$Range::SINHALA = nullptr;

NumericShaper$Range* NumericShaper$Range::MYANMAR_TAI_LAING = nullptr;
$NumericShaper$RangeArray* NumericShaper$Range::$VALUES = nullptr;

$NumericShaper$RangeArray* NumericShaper$Range::$values() {
	$init(NumericShaper$Range);
	return $new($NumericShaper$RangeArray, {
		NumericShaper$Range::EUROPEAN,
		NumericShaper$Range::ARABIC,
		NumericShaper$Range::EASTERN_ARABIC,
		NumericShaper$Range::DEVANAGARI,
		NumericShaper$Range::BENGALI,
		NumericShaper$Range::GURMUKHI,
		NumericShaper$Range::GUJARATI,
		NumericShaper$Range::ORIYA,
		NumericShaper$Range::TAMIL,
		NumericShaper$Range::TELUGU,
		NumericShaper$Range::KANNADA,
		NumericShaper$Range::MALAYALAM,
		NumericShaper$Range::THAI,
		NumericShaper$Range::LAO,
		NumericShaper$Range::TIBETAN,
		NumericShaper$Range::MYANMAR,
		NumericShaper$Range::ETHIOPIC,
		NumericShaper$Range::KHMER,
		NumericShaper$Range::MONGOLIAN,
		NumericShaper$Range::NKO,
		NumericShaper$Range::MYANMAR_SHAN,
		NumericShaper$Range::LIMBU,
		NumericShaper$Range::NEW_TAI_LUE,
		NumericShaper$Range::BALINESE,
		NumericShaper$Range::SUNDANESE,
		NumericShaper$Range::LEPCHA,
		NumericShaper$Range::OL_CHIKI,
		NumericShaper$Range::VAI,
		NumericShaper$Range::SAURASHTRA,
		NumericShaper$Range::KAYAH_LI,
		NumericShaper$Range::CHAM,
		NumericShaper$Range::TAI_THAM_HORA,
		NumericShaper$Range::TAI_THAM_THAM,
		NumericShaper$Range::JAVANESE,
		NumericShaper$Range::MEETEI_MAYEK,
		NumericShaper$Range::SINHALA,
		NumericShaper$Range::MYANMAR_TAI_LAING
	});
}

$NumericShaper$RangeArray* NumericShaper$Range::values() {
	$init(NumericShaper$Range);
	return $cast($NumericShaper$RangeArray, NumericShaper$Range::$VALUES->clone());
}

NumericShaper$Range* NumericShaper$Range::valueOf($String* name) {
	$init(NumericShaper$Range);
	return $cast(NumericShaper$Range, $Enum::valueOf(NumericShaper$Range::class$, name));
}

int32_t NumericShaper$Range::toRangeIndex(NumericShaper$Range* script) {
	$init(NumericShaper$Range);
	int32_t index = $nc(script)->ordinal();
	return index < 19 ? index : -1;
}

NumericShaper$Range* NumericShaper$Range::indexToRange(int32_t index) {
	$init(NumericShaper$Range);
	return index < 19 ? $(NumericShaper$Range::values())->get(index) : (NumericShaper$Range*)nullptr;
}

int32_t NumericShaper$Range::toRangeMask($Set* ranges) {
	$init(NumericShaper$Range);
	int32_t m = 0;
	{
		$var($Iterator, i$, $nc(ranges)->iterator());
		for (; $nc(i$)->hasNext();) {
			NumericShaper$Range* range = $cast(NumericShaper$Range, i$->next());
			{
				int32_t index = $nc(range)->ordinal();
				if (index < 19) {
					m |= $sl(1, index);
				}
			}
		}
	}
	return m;
}

$Set* NumericShaper$Range::maskToRangeSet(int32_t mask) {
	$init(NumericShaper$Range);
	$var($Set, set, $EnumSet::noneOf(NumericShaper$Range::class$));
	$var($NumericShaper$RangeArray, a, NumericShaper$Range::values());
	for (int32_t i = 0; i < 19; ++i) {
		if (((int32_t)(mask & (uint32_t)($sl(1, i)))) != 0) {
			$nc(set)->add($nc(a)->get(i));
		}
	}
	return set;
}

void NumericShaper$Range::init$($String* $enum$name, int32_t $enum$ordinal, int32_t base, int32_t start, int32_t end) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->base = base - (u'0' + getNumericBase());
	this->start = start;
	this->end = end;
}

int32_t NumericShaper$Range::getDigitBase() {
	return this->base;
}

char16_t NumericShaper$Range::getNumericBase() {
	return (char16_t)0;
}

bool NumericShaper$Range::inRange(int32_t c) {
	return this->start <= c && c < this->end;
}

void clinit$NumericShaper$Range($Class* class$) {
	$assignStatic(NumericShaper$Range::EUROPEAN, $new(NumericShaper$Range, "EUROPEAN"_s, 0, u'0', u'\0', (char16_t)0x300));
	$assignStatic(NumericShaper$Range::ARABIC, $new(NumericShaper$Range, "ARABIC"_s, 1, (char16_t)0x660, (char16_t)0x600, (char16_t)0x780));
	$assignStatic(NumericShaper$Range::EASTERN_ARABIC, $new(NumericShaper$Range, "EASTERN_ARABIC"_s, 2, (char16_t)0x6F0, (char16_t)0x600, (char16_t)0x780));
	$assignStatic(NumericShaper$Range::DEVANAGARI, $new(NumericShaper$Range, "DEVANAGARI"_s, 3, (char16_t)0x966, (char16_t)0x900, (char16_t)0x980));
	$assignStatic(NumericShaper$Range::BENGALI, $new(NumericShaper$Range, "BENGALI"_s, 4, (char16_t)0x9E6, (char16_t)0x980, (char16_t)0xA00));
	$assignStatic(NumericShaper$Range::GURMUKHI, $new(NumericShaper$Range, "GURMUKHI"_s, 5, (char16_t)0xA66, (char16_t)0xA00, (char16_t)0xA80));
	$assignStatic(NumericShaper$Range::GUJARATI, $new(NumericShaper$Range, "GUJARATI"_s, 6, (char16_t)0xAE6, (char16_t)0xB00, (char16_t)0xB80));
	$assignStatic(NumericShaper$Range::ORIYA, $new(NumericShaper$Range, "ORIYA"_s, 7, (char16_t)0xB66, (char16_t)0xB00, (char16_t)0xB80));
	$assignStatic(NumericShaper$Range::TAMIL, $new(NumericShaper$Range, "TAMIL"_s, 8, (char16_t)0xBE6, (char16_t)0xB80, (char16_t)0xC00));
	$assignStatic(NumericShaper$Range::TELUGU, $new(NumericShaper$Range, "TELUGU"_s, 9, (char16_t)0xC66, (char16_t)0xC00, (char16_t)0xC80));
	$assignStatic(NumericShaper$Range::KANNADA, $new(NumericShaper$Range, "KANNADA"_s, 10, (char16_t)0xCE6, (char16_t)0xC80, (char16_t)0xD00));
	$assignStatic(NumericShaper$Range::MALAYALAM, $new(NumericShaper$Range, "MALAYALAM"_s, 11, (char16_t)0xD66, (char16_t)0xD00, (char16_t)0xD80));
	$assignStatic(NumericShaper$Range::THAI, $new(NumericShaper$Range, "THAI"_s, 12, (char16_t)0xE50, (char16_t)0xE00, (char16_t)0xE80));
	$assignStatic(NumericShaper$Range::LAO, $new(NumericShaper$Range, "LAO"_s, 13, (char16_t)0xED0, (char16_t)0xE80, (char16_t)0xF00));
	$assignStatic(NumericShaper$Range::TIBETAN, $new(NumericShaper$Range, "TIBETAN"_s, 14, (char16_t)0xF20, (char16_t)0xF00, (char16_t)0x1000));
	$assignStatic(NumericShaper$Range::MYANMAR, $new(NumericShaper$Range, "MYANMAR"_s, 15, (char16_t)0x1040, (char16_t)0x1000, (char16_t)0x1080));
	$assignStatic(NumericShaper$Range::ETHIOPIC, $new($NumericShaper$Range$1, "ETHIOPIC"_s, 16, (char16_t)0x1369, (char16_t)0x1200, (char16_t)0x1380));
	$assignStatic(NumericShaper$Range::KHMER, $new(NumericShaper$Range, "KHMER"_s, 17, (char16_t)0x17E0, (char16_t)0x1780, (char16_t)0x1800));
	$assignStatic(NumericShaper$Range::MONGOLIAN, $new(NumericShaper$Range, "MONGOLIAN"_s, 18, (char16_t)0x1810, (char16_t)0x1800, (char16_t)0x1900));
	$assignStatic(NumericShaper$Range::NKO, $new(NumericShaper$Range, "NKO"_s, 19, (char16_t)0x7C0, (char16_t)0x7C0, (char16_t)0x800));
	$assignStatic(NumericShaper$Range::MYANMAR_SHAN, $new(NumericShaper$Range, "MYANMAR_SHAN"_s, 20, (char16_t)0x1090, (char16_t)0x1000, (char16_t)0x10A0));
	$assignStatic(NumericShaper$Range::LIMBU, $new(NumericShaper$Range, "LIMBU"_s, 21, (char16_t)0x1946, (char16_t)0x1900, (char16_t)0x1950));
	$assignStatic(NumericShaper$Range::NEW_TAI_LUE, $new(NumericShaper$Range, "NEW_TAI_LUE"_s, 22, (char16_t)0x19D0, (char16_t)0x1980, (char16_t)0x19E0));
	$assignStatic(NumericShaper$Range::BALINESE, $new(NumericShaper$Range, "BALINESE"_s, 23, (char16_t)0x1B50, (char16_t)0x1B00, (char16_t)0x1B80));
	$assignStatic(NumericShaper$Range::SUNDANESE, $new(NumericShaper$Range, "SUNDANESE"_s, 24, (char16_t)0x1BB0, (char16_t)0x1B80, (char16_t)0x1BC0));
	$assignStatic(NumericShaper$Range::LEPCHA, $new(NumericShaper$Range, "LEPCHA"_s, 25, (char16_t)0x1C40, (char16_t)0x1C00, (char16_t)0x1C50));
	$assignStatic(NumericShaper$Range::OL_CHIKI, $new(NumericShaper$Range, "OL_CHIKI"_s, 26, (char16_t)0x1C50, (char16_t)0x1C50, (char16_t)0x1C80));
	$assignStatic(NumericShaper$Range::VAI, $new(NumericShaper$Range, "VAI"_s, 27, (char16_t)0xA620, (char16_t)0xA500, (char16_t)0xA640));
	$assignStatic(NumericShaper$Range::SAURASHTRA, $new(NumericShaper$Range, "SAURASHTRA"_s, 28, (char16_t)0xA8D0, (char16_t)0xA880, (char16_t)0xA8E0));
	$assignStatic(NumericShaper$Range::KAYAH_LI, $new(NumericShaper$Range, "KAYAH_LI"_s, 29, (char16_t)0xA900, (char16_t)0xA900, (char16_t)0xA930));
	$assignStatic(NumericShaper$Range::CHAM, $new(NumericShaper$Range, "CHAM"_s, 30, (char16_t)0xAA50, (char16_t)0xAA00, (char16_t)0xAA60));
	$assignStatic(NumericShaper$Range::TAI_THAM_HORA, $new(NumericShaper$Range, "TAI_THAM_HORA"_s, 31, (char16_t)0x1A80, (char16_t)0x1A20, (char16_t)0x1AB0));
	$assignStatic(NumericShaper$Range::TAI_THAM_THAM, $new(NumericShaper$Range, "TAI_THAM_THAM"_s, 32, (char16_t)0x1A90, (char16_t)0x1A20, (char16_t)0x1AB0));
	$assignStatic(NumericShaper$Range::JAVANESE, $new(NumericShaper$Range, "JAVANESE"_s, 33, (char16_t)0xA9D0, (char16_t)0xA980, (char16_t)0xA9E0));
	$assignStatic(NumericShaper$Range::MEETEI_MAYEK, $new(NumericShaper$Range, "MEETEI_MAYEK"_s, 34, (char16_t)0xABF0, (char16_t)0xABC0, (char16_t)0xAC00));
	$assignStatic(NumericShaper$Range::SINHALA, $new(NumericShaper$Range, "SINHALA"_s, 35, (char16_t)0xDE6, (char16_t)0xD80, (char16_t)0xE00));
	$assignStatic(NumericShaper$Range::MYANMAR_TAI_LAING, $new(NumericShaper$Range, "MYANMAR_TAI_LAING"_s, 36, (char16_t)0xA9F0, (char16_t)0xA9E0, (char16_t)0xAA00));
	$assignStatic(NumericShaper$Range::$VALUES, NumericShaper$Range::$values());
}

NumericShaper$Range::NumericShaper$Range() {
}

$Class* NumericShaper$Range::load$($String* name, bool initialize) {
	$loadClass(NumericShaper$Range, name, initialize, &_NumericShaper$Range_ClassInfo_, clinit$NumericShaper$Range, allocate$NumericShaper$Range);
	return class$;
}

$Class* NumericShaper$Range::class$ = nullptr;

		} // font
	} // awt
} // java