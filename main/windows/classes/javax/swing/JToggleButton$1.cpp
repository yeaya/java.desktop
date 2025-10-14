#include <javax/swing/JToggleButton$1.h>

#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
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
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef ACTIVATION
#undef TRAVERSAL
#undef TRAVERSAL_BACKWARD
#undef TRAVERSAL_DOWN
#undef TRAVERSAL_FORWARD
#undef TRAVERSAL_UP

using $FocusEvent$CauseArray = $Array<::java::awt::event::FocusEvent$Cause>;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $JToggleButton = ::javax::swing::JToggleButton;

namespace javax {
	namespace swing {

$FieldInfo _JToggleButton$1_FieldInfo_[] = {
	{"$SwitchMap$java$awt$event$FocusEvent$Cause", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JToggleButton$1, $SwitchMap$java$awt$event$FocusEvent$Cause)},
	{}
};

$EnclosingMethodInfo _JToggleButton$1_EnclosingMethodInfo_ = {
	"javax.swing.JToggleButton",
	nullptr,
	nullptr
};

$InnerClassInfo _JToggleButton$1_InnerClassesInfo_[] = {
	{"javax.swing.JToggleButton$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JToggleButton$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.JToggleButton$1",
	"java.lang.Object",
	nullptr,
	_JToggleButton$1_FieldInfo_,
	nullptr,
	nullptr,
	&_JToggleButton$1_EnclosingMethodInfo_,
	_JToggleButton$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JToggleButton"
};

$Object* allocate$JToggleButton$1($Class* clazz) {
	return $of($alloc(JToggleButton$1));
}

$ints* JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause = nullptr;

void clinit$JToggleButton$1($Class* class$) {
	$assignStatic(JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause, $new($ints, $($FocusEvent$Cause::values())->length));
	{
		try {
			$nc(JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause)->set($FocusEvent$Cause::ACTIVATION->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause)->set($FocusEvent$Cause::TRAVERSAL->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause)->set($FocusEvent$Cause::TRAVERSAL_UP->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause)->set($FocusEvent$Cause::TRAVERSAL_DOWN->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause)->set($FocusEvent$Cause::TRAVERSAL_FORWARD->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JToggleButton$1::$SwitchMap$java$awt$event$FocusEvent$Cause)->set($FocusEvent$Cause::TRAVERSAL_BACKWARD->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

JToggleButton$1::JToggleButton$1() {
}

$Class* JToggleButton$1::load$($String* name, bool initialize) {
	$loadClass(JToggleButton$1, name, initialize, &_JToggleButton$1_ClassInfo_, clinit$JToggleButton$1, allocate$JToggleButton$1);
	return class$;
}

$Class* JToggleButton$1::class$ = nullptr;

	} // swing
} // javax