#include <sun/awt/X11/XBaseWindow$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/X11/XBaseWindow$InitialiseState.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <jcpp.h>

#undef FAILED_INITIALISATION
#undef INITIALISED
#undef INITIALISING

using $XBaseWindow$InitialiseStateArray = $Array<::sun::awt::X11::XBaseWindow$InitialiseState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XBaseWindow$InitialiseState = ::sun::awt::X11::XBaseWindow$InitialiseState;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XBaseWindow$1_FieldInfo_[] = {
	{"$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XBaseWindow$1, $SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState)},
	{}
};

$EnclosingMethodInfo _XBaseWindow$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XBaseWindow",
	nullptr,
	nullptr
};

$InnerClassInfo _XBaseWindow$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XBaseWindow$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _XBaseWindow$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.awt.X11.XBaseWindow$1",
	"java.lang.Object",
	nullptr,
	_XBaseWindow$1_FieldInfo_,
	nullptr,
	nullptr,
	&_XBaseWindow$1_EnclosingMethodInfo_,
	_XBaseWindow$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XBaseWindow"
};

$Object* allocate$XBaseWindow$1($Class* clazz) {
	return $of($alloc(XBaseWindow$1));
}

$ints* XBaseWindow$1::$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState = nullptr;

void clinit$XBaseWindow$1($Class* class$) {
	$assignStatic(XBaseWindow$1::$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState, $new($ints, $($XBaseWindow$InitialiseState::values())->length));
	{
		try {
			$nc(XBaseWindow$1::$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState)->set($XBaseWindow$InitialiseState::INITIALISED->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(XBaseWindow$1::$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState)->set($XBaseWindow$InitialiseState::INITIALISING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(XBaseWindow$1::$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState)->set($XBaseWindow$InitialiseState::FAILED_INITIALISATION->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

XBaseWindow$1::XBaseWindow$1() {
}

$Class* XBaseWindow$1::load$($String* name, bool initialize) {
	$loadClass(XBaseWindow$1, name, initialize, &_XBaseWindow$1_ClassInfo_, clinit$XBaseWindow$1, allocate$XBaseWindow$1);
	return class$;
}

$Class* XBaseWindow$1::class$ = nullptr;

		} // X11
	} // awt
} // sun