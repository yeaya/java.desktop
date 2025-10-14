#include <sun/java2d/marlin/CollinearSimplifier$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/marlin/CollinearSimplifier$SimplifierState.h>
#include <sun/java2d/marlin/CollinearSimplifier.h>
#include <jcpp.h>

using $CollinearSimplifier$SimplifierStateArray = $Array<::sun::java2d::marlin::CollinearSimplifier$SimplifierState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $CollinearSimplifier = ::sun::java2d::marlin::CollinearSimplifier;
using $CollinearSimplifier$SimplifierState = ::sun::java2d::marlin::CollinearSimplifier$SimplifierState;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _CollinearSimplifier$1_FieldInfo_[] = {
	{"$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CollinearSimplifier$1, $SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState)},
	{}
};

$EnclosingMethodInfo _CollinearSimplifier$1_EnclosingMethodInfo_ = {
	"sun.java2d.marlin.CollinearSimplifier",
	nullptr,
	nullptr
};

$InnerClassInfo _CollinearSimplifier$1_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.CollinearSimplifier$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _CollinearSimplifier$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.java2d.marlin.CollinearSimplifier$1",
	"java.lang.Object",
	nullptr,
	_CollinearSimplifier$1_FieldInfo_,
	nullptr,
	nullptr,
	&_CollinearSimplifier$1_EnclosingMethodInfo_,
	_CollinearSimplifier$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.CollinearSimplifier"
};

$Object* allocate$CollinearSimplifier$1($Class* clazz) {
	return $of($alloc(CollinearSimplifier$1));
}

$ints* CollinearSimplifier$1::$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState = nullptr;

void clinit$CollinearSimplifier$1($Class* class$) {
	$assignStatic(CollinearSimplifier$1::$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState, $new($ints, $($CollinearSimplifier$SimplifierState::values())->length));
	{
		try {
			$nc(CollinearSimplifier$1::$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState)->set($CollinearSimplifier$SimplifierState::Empty->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CollinearSimplifier$1::$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState)->set($CollinearSimplifier$SimplifierState::PreviousPoint->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CollinearSimplifier$1::$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState)->set($CollinearSimplifier$SimplifierState::PreviousLine->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

CollinearSimplifier$1::CollinearSimplifier$1() {
}

$Class* CollinearSimplifier$1::load$($String* name, bool initialize) {
	$loadClass(CollinearSimplifier$1, name, initialize, &_CollinearSimplifier$1_ClassInfo_, clinit$CollinearSimplifier$1, allocate$CollinearSimplifier$1);
	return class$;
}

$Class* CollinearSimplifier$1::class$ = nullptr;

		} // marlin
	} // java2d
} // sun