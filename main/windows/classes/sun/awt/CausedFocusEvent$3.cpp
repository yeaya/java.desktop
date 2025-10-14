#include <sun/awt/CausedFocusEvent$3.h>

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
#include <sun/awt/CausedFocusEvent$Cause.h>
#include <sun/awt/CausedFocusEvent.h>
#include <jcpp.h>

#undef ACTIVATION
#undef CLEAR_GLOBAL_FOCUS_OWNER
#undef MOUSE_EVENT
#undef NATIVE_SYSTEM
#undef ROLLBACK
#undef TRAVERSAL
#undef TRAVERSAL_BACKWARD
#undef TRAVERSAL_DOWN
#undef TRAVERSAL_FORWARD
#undef TRAVERSAL_UP
#undef UNKNOWN

using $CausedFocusEvent$CauseArray = $Array<::sun::awt::CausedFocusEvent$Cause>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $CausedFocusEvent = ::sun::awt::CausedFocusEvent;
using $CausedFocusEvent$Cause = ::sun::awt::CausedFocusEvent$Cause;

namespace sun {
	namespace awt {

$FieldInfo _CausedFocusEvent$3_FieldInfo_[] = {
	{"$SwitchMap$sun$awt$CausedFocusEvent$Cause", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CausedFocusEvent$3, $SwitchMap$sun$awt$CausedFocusEvent$Cause)},
	{}
};

$EnclosingMethodInfo _CausedFocusEvent$3_EnclosingMethodInfo_ = {
	"sun.awt.CausedFocusEvent",
	nullptr,
	nullptr
};

$InnerClassInfo _CausedFocusEvent$3_InnerClassesInfo_[] = {
	{"sun.awt.CausedFocusEvent$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _CausedFocusEvent$3_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.awt.CausedFocusEvent$3",
	"java.lang.Object",
	nullptr,
	_CausedFocusEvent$3_FieldInfo_,
	nullptr,
	nullptr,
	&_CausedFocusEvent$3_EnclosingMethodInfo_,
	_CausedFocusEvent$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.CausedFocusEvent"
};

$Object* allocate$CausedFocusEvent$3($Class* clazz) {
	return $of($alloc(CausedFocusEvent$3));
}

$ints* CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause = nullptr;

void clinit$CausedFocusEvent$3($Class* class$) {
	$assignStatic(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause, $new($ints, $($CausedFocusEvent$Cause::values())->length));
	{
		try {
			$nc(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause)->set($CausedFocusEvent$Cause::UNKNOWN->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause)->set($CausedFocusEvent$Cause::MOUSE_EVENT->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause)->set($CausedFocusEvent$Cause::TRAVERSAL->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause)->set($CausedFocusEvent$Cause::TRAVERSAL_UP->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause)->set($CausedFocusEvent$Cause::TRAVERSAL_DOWN->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause)->set($CausedFocusEvent$Cause::TRAVERSAL_FORWARD->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause)->set($CausedFocusEvent$Cause::TRAVERSAL_BACKWARD->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause)->set($CausedFocusEvent$Cause::ROLLBACK->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause)->set($CausedFocusEvent$Cause::NATIVE_SYSTEM->ordinal(), 9);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause)->set($CausedFocusEvent$Cause::ACTIVATION->ordinal(), 10);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause)->set($CausedFocusEvent$Cause::CLEAR_GLOBAL_FOCUS_OWNER->ordinal(), 11);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

CausedFocusEvent$3::CausedFocusEvent$3() {
}

$Class* CausedFocusEvent$3::load$($String* name, bool initialize) {
	$loadClass(CausedFocusEvent$3, name, initialize, &_CausedFocusEvent$3_ClassInfo_, clinit$CausedFocusEvent$3, allocate$CausedFocusEvent$3);
	return class$;
}

$Class* CausedFocusEvent$3::class$ = nullptr;

	} // awt
} // sun