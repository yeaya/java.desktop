#include <sun/java2d/marlin/CollinearSimplifier$SimplifierState.h>

#include <java/lang/Enum.h>
#include <sun/java2d/marlin/CollinearSimplifier.h>
#include <jcpp.h>

using $CollinearSimplifier$SimplifierStateArray = $Array<::sun::java2d::marlin::CollinearSimplifier$SimplifierState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CollinearSimplifier = ::sun::java2d::marlin::CollinearSimplifier;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _CollinearSimplifier$SimplifierState_FieldInfo_[] = {
	{"Empty", "Lsun/java2d/marlin/CollinearSimplifier$SimplifierState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CollinearSimplifier$SimplifierState, Empty)},
	{"PreviousPoint", "Lsun/java2d/marlin/CollinearSimplifier$SimplifierState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CollinearSimplifier$SimplifierState, PreviousPoint)},
	{"PreviousLine", "Lsun/java2d/marlin/CollinearSimplifier$SimplifierState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CollinearSimplifier$SimplifierState, PreviousLine)},
	{"$VALUES", "[Lsun/java2d/marlin/CollinearSimplifier$SimplifierState;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CollinearSimplifier$SimplifierState, $VALUES)},
	{}
};

$MethodInfo _CollinearSimplifier$SimplifierState_MethodInfo_[] = {
	{"$values", "()[Lsun/java2d/marlin/CollinearSimplifier$SimplifierState;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CollinearSimplifier$SimplifierStateArray*(*)()>(&CollinearSimplifier$SimplifierState::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CollinearSimplifier$SimplifierState::*)($String*,int32_t)>(&CollinearSimplifier$SimplifierState::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/java2d/marlin/CollinearSimplifier$SimplifierState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CollinearSimplifier$SimplifierState*(*)($String*)>(&CollinearSimplifier$SimplifierState::valueOf))},
	{"values", "()[Lsun/java2d/marlin/CollinearSimplifier$SimplifierState;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CollinearSimplifier$SimplifierStateArray*(*)()>(&CollinearSimplifier$SimplifierState::values))},
	{}
};

$InnerClassInfo _CollinearSimplifier$SimplifierState_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.CollinearSimplifier$SimplifierState", "sun.java2d.marlin.CollinearSimplifier", "SimplifierState", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CollinearSimplifier$SimplifierState_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.java2d.marlin.CollinearSimplifier$SimplifierState",
	"java.lang.Enum",
	nullptr,
	_CollinearSimplifier$SimplifierState_FieldInfo_,
	_CollinearSimplifier$SimplifierState_MethodInfo_,
	"Ljava/lang/Enum<Lsun/java2d/marlin/CollinearSimplifier$SimplifierState;>;",
	nullptr,
	_CollinearSimplifier$SimplifierState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.CollinearSimplifier"
};

$Object* allocate$CollinearSimplifier$SimplifierState($Class* clazz) {
	return $of($alloc(CollinearSimplifier$SimplifierState));
}

CollinearSimplifier$SimplifierState* CollinearSimplifier$SimplifierState::Empty = nullptr;
CollinearSimplifier$SimplifierState* CollinearSimplifier$SimplifierState::PreviousPoint = nullptr;
CollinearSimplifier$SimplifierState* CollinearSimplifier$SimplifierState::PreviousLine = nullptr;
$CollinearSimplifier$SimplifierStateArray* CollinearSimplifier$SimplifierState::$VALUES = nullptr;

$CollinearSimplifier$SimplifierStateArray* CollinearSimplifier$SimplifierState::$values() {
	$init(CollinearSimplifier$SimplifierState);
	return $new($CollinearSimplifier$SimplifierStateArray, {
		CollinearSimplifier$SimplifierState::Empty,
		CollinearSimplifier$SimplifierState::PreviousPoint,
		CollinearSimplifier$SimplifierState::PreviousLine
	});
}

$CollinearSimplifier$SimplifierStateArray* CollinearSimplifier$SimplifierState::values() {
	$init(CollinearSimplifier$SimplifierState);
	return $cast($CollinearSimplifier$SimplifierStateArray, CollinearSimplifier$SimplifierState::$VALUES->clone());
}

CollinearSimplifier$SimplifierState* CollinearSimplifier$SimplifierState::valueOf($String* name) {
	$init(CollinearSimplifier$SimplifierState);
	return $cast(CollinearSimplifier$SimplifierState, $Enum::valueOf(CollinearSimplifier$SimplifierState::class$, name));
}

void CollinearSimplifier$SimplifierState::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CollinearSimplifier$SimplifierState($Class* class$) {
	$assignStatic(CollinearSimplifier$SimplifierState::Empty, $new(CollinearSimplifier$SimplifierState, "Empty"_s, 0));
	$assignStatic(CollinearSimplifier$SimplifierState::PreviousPoint, $new(CollinearSimplifier$SimplifierState, "PreviousPoint"_s, 1));
	$assignStatic(CollinearSimplifier$SimplifierState::PreviousLine, $new(CollinearSimplifier$SimplifierState, "PreviousLine"_s, 2));
	$assignStatic(CollinearSimplifier$SimplifierState::$VALUES, CollinearSimplifier$SimplifierState::$values());
}

CollinearSimplifier$SimplifierState::CollinearSimplifier$SimplifierState() {
}

$Class* CollinearSimplifier$SimplifierState::load$($String* name, bool initialize) {
	$loadClass(CollinearSimplifier$SimplifierState, name, initialize, &_CollinearSimplifier$SimplifierState_ClassInfo_, clinit$CollinearSimplifier$SimplifierState, allocate$CollinearSimplifier$SimplifierState);
	return class$;
}

$Class* CollinearSimplifier$SimplifierState::class$ = nullptr;

		} // marlin
	} // java2d
} // sun