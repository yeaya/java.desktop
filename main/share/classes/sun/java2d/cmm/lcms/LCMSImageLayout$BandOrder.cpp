#include <sun/java2d/cmm/lcms/LCMSImageLayout$BandOrder.h>

#include <java/lang/Enum.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout$1.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout.h>
#include <jcpp.h>

#undef ARBITRARY
#undef DIRECT
#undef INVERTED
#undef UNKNOWN

using $LCMSImageLayout$BandOrderArray = $Array<::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LCMSImageLayout$1 = ::sun::java2d::cmm::lcms::LCMSImageLayout$1;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

$FieldInfo _LCMSImageLayout$BandOrder_FieldInfo_[] = {
	{"DIRECT", "Lsun/java2d/cmm/lcms/LCMSImageLayout$BandOrder;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LCMSImageLayout$BandOrder, DIRECT)},
	{"INVERTED", "Lsun/java2d/cmm/lcms/LCMSImageLayout$BandOrder;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LCMSImageLayout$BandOrder, INVERTED)},
	{"ARBITRARY", "Lsun/java2d/cmm/lcms/LCMSImageLayout$BandOrder;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LCMSImageLayout$BandOrder, ARBITRARY)},
	{"UNKNOWN", "Lsun/java2d/cmm/lcms/LCMSImageLayout$BandOrder;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LCMSImageLayout$BandOrder, UNKNOWN)},
	{"$VALUES", "[Lsun/java2d/cmm/lcms/LCMSImageLayout$BandOrder;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LCMSImageLayout$BandOrder, $VALUES)},
	{}
};

$MethodInfo _LCMSImageLayout$BandOrder_MethodInfo_[] = {
	{"$values", "()[Lsun/java2d/cmm/lcms/LCMSImageLayout$BandOrder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LCMSImageLayout$BandOrderArray*(*)()>(&LCMSImageLayout$BandOrder::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(LCMSImageLayout$BandOrder::*)($String*,int32_t)>(&LCMSImageLayout$BandOrder::init$))},
	{"getBandOrder", "([I)Lsun/java2d/cmm/lcms/LCMSImageLayout$BandOrder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LCMSImageLayout$BandOrder*(*)($ints*)>(&LCMSImageLayout$BandOrder::getBandOrder))},
	{"valueOf", "(Ljava/lang/String;)Lsun/java2d/cmm/lcms/LCMSImageLayout$BandOrder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LCMSImageLayout$BandOrder*(*)($String*)>(&LCMSImageLayout$BandOrder::valueOf))},
	{"values", "()[Lsun/java2d/cmm/lcms/LCMSImageLayout$BandOrder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LCMSImageLayout$BandOrderArray*(*)()>(&LCMSImageLayout$BandOrder::values))},
	{}
};

$InnerClassInfo _LCMSImageLayout$BandOrder_InnerClassesInfo_[] = {
	{"sun.java2d.cmm.lcms.LCMSImageLayout$BandOrder", "sun.java2d.cmm.lcms.LCMSImageLayout", "BandOrder", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LCMSImageLayout$BandOrder_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.java2d.cmm.lcms.LCMSImageLayout$BandOrder",
	"java.lang.Enum",
	nullptr,
	_LCMSImageLayout$BandOrder_FieldInfo_,
	_LCMSImageLayout$BandOrder_MethodInfo_,
	"Ljava/lang/Enum<Lsun/java2d/cmm/lcms/LCMSImageLayout$BandOrder;>;",
	nullptr,
	_LCMSImageLayout$BandOrder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.cmm.lcms.LCMSImageLayout"
};

$Object* allocate$LCMSImageLayout$BandOrder($Class* clazz) {
	return $of($alloc(LCMSImageLayout$BandOrder));
}

LCMSImageLayout$BandOrder* LCMSImageLayout$BandOrder::DIRECT = nullptr;
LCMSImageLayout$BandOrder* LCMSImageLayout$BandOrder::INVERTED = nullptr;
LCMSImageLayout$BandOrder* LCMSImageLayout$BandOrder::ARBITRARY = nullptr;
LCMSImageLayout$BandOrder* LCMSImageLayout$BandOrder::UNKNOWN = nullptr;
$LCMSImageLayout$BandOrderArray* LCMSImageLayout$BandOrder::$VALUES = nullptr;

$LCMSImageLayout$BandOrderArray* LCMSImageLayout$BandOrder::$values() {
	$init(LCMSImageLayout$BandOrder);
	return $new($LCMSImageLayout$BandOrderArray, {
		LCMSImageLayout$BandOrder::DIRECT,
		LCMSImageLayout$BandOrder::INVERTED,
		LCMSImageLayout$BandOrder::ARBITRARY,
		LCMSImageLayout$BandOrder::UNKNOWN
	});
}

$LCMSImageLayout$BandOrderArray* LCMSImageLayout$BandOrder::values() {
	$init(LCMSImageLayout$BandOrder);
	return $cast($LCMSImageLayout$BandOrderArray, LCMSImageLayout$BandOrder::$VALUES->clone());
}

LCMSImageLayout$BandOrder* LCMSImageLayout$BandOrder::valueOf($String* name) {
	$init(LCMSImageLayout$BandOrder);
	return $cast(LCMSImageLayout$BandOrder, $Enum::valueOf(LCMSImageLayout$BandOrder::class$, name));
}

void LCMSImageLayout$BandOrder::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

LCMSImageLayout$BandOrder* LCMSImageLayout$BandOrder::getBandOrder($ints* bandOffsets) {
	$init(LCMSImageLayout$BandOrder);
	LCMSImageLayout$BandOrder* order = LCMSImageLayout$BandOrder::UNKNOWN;
	int32_t numBands = $nc(bandOffsets)->length;
	for (int32_t i = 0; (order != LCMSImageLayout$BandOrder::ARBITRARY) && (i < bandOffsets->length); ++i) {
		$init($LCMSImageLayout$1);
		switch ($nc($LCMSImageLayout$1::$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder)->get($nc((order))->ordinal())) {
		case 1:
			{
				if (bandOffsets->get(i) == i) {
					order = LCMSImageLayout$BandOrder::DIRECT;
				} else if (bandOffsets->get(i) == (numBands - 1 - i)) {
					order = LCMSImageLayout$BandOrder::INVERTED;
				} else {
					order = LCMSImageLayout$BandOrder::ARBITRARY;
				}
				break;
			}
		case 2:
			{
				if (bandOffsets->get(i) != i) {
					order = LCMSImageLayout$BandOrder::ARBITRARY;
				}
				break;
			}
		case 3:
			{
				if (bandOffsets->get(i) != (numBands - 1 - i)) {
					order = LCMSImageLayout$BandOrder::ARBITRARY;
				}
				break;
			}
		}
	}
	return order;
}

void clinit$LCMSImageLayout$BandOrder($Class* class$) {
	$assignStatic(LCMSImageLayout$BandOrder::DIRECT, $new(LCMSImageLayout$BandOrder, "DIRECT"_s, 0));
	$assignStatic(LCMSImageLayout$BandOrder::INVERTED, $new(LCMSImageLayout$BandOrder, "INVERTED"_s, 1));
	$assignStatic(LCMSImageLayout$BandOrder::ARBITRARY, $new(LCMSImageLayout$BandOrder, "ARBITRARY"_s, 2));
	$assignStatic(LCMSImageLayout$BandOrder::UNKNOWN, $new(LCMSImageLayout$BandOrder, "UNKNOWN"_s, 3));
	$assignStatic(LCMSImageLayout$BandOrder::$VALUES, LCMSImageLayout$BandOrder::$values());
}

LCMSImageLayout$BandOrder::LCMSImageLayout$BandOrder() {
}

$Class* LCMSImageLayout$BandOrder::load$($String* name, bool initialize) {
	$loadClass(LCMSImageLayout$BandOrder, name, initialize, &_LCMSImageLayout$BandOrder_ClassInfo_, clinit$LCMSImageLayout$BandOrder, allocate$LCMSImageLayout$BandOrder);
	return class$;
}

$Class* LCMSImageLayout$BandOrder::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun