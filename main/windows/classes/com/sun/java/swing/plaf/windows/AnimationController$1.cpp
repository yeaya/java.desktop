#include <com/sun/java/swing/plaf/windows/AnimationController$1.h>

#include <com/sun/java/swing/plaf/windows/AnimationController.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
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
#include <jcpp.h>

#undef DOWNDISABLED
#undef DOWNHOT
#undef DOWNNORMAL
#undef DOWNPRESSED
#undef LEFTDISABLED
#undef LEFTHOT
#undef LEFTNORMAL
#undef LEFTPRESSED
#undef RIGHTDISABLED
#undef RIGHTHOT
#undef RIGHTNORMAL
#undef RIGHTPRESSED

using $TMSchema$StateArray = $Array<::com::sun::java::swing::plaf::windows::TMSchema$State>;
using $AnimationController = ::com::sun::java::swing::plaf::windows::AnimationController;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _AnimationController$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AnimationController$1, $SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)},
	{}
};

$EnclosingMethodInfo _AnimationController$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.AnimationController",
	nullptr,
	nullptr
};

$InnerClassInfo _AnimationController$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.AnimationController$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _AnimationController$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.java.swing.plaf.windows.AnimationController$1",
	"java.lang.Object",
	nullptr,
	_AnimationController$1_FieldInfo_,
	nullptr,
	nullptr,
	&_AnimationController$1_EnclosingMethodInfo_,
	_AnimationController$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.AnimationController"
};

$Object* allocate$AnimationController$1($Class* clazz) {
	return $of($alloc(AnimationController$1));
}

$ints* AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State = nullptr;

void clinit$AnimationController$1($Class* class$) {
	$assignStatic(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State, $new($ints, $($TMSchema$State::values())->length));
	{
		try {
			$nc(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::DOWNPRESSED->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::LEFTPRESSED->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::RIGHTPRESSED->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::DOWNDISABLED->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::LEFTDISABLED->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::RIGHTDISABLED->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::DOWNHOT->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::LEFTHOT->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::RIGHTHOT->ordinal(), 9);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::DOWNNORMAL->ordinal(), 10);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::LEFTNORMAL->ordinal(), 11);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::RIGHTNORMAL->ordinal(), 12);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

AnimationController$1::AnimationController$1() {
}

$Class* AnimationController$1::load$($String* name, bool initialize) {
	$loadClass(AnimationController$1, name, initialize, &_AnimationController$1_ClassInfo_, clinit$AnimationController$1, allocate$AnimationController$1);
	return class$;
}

$Class* AnimationController$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com