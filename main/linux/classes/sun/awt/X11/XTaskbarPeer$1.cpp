#include <sun/awt/X11/XTaskbarPeer$1.h>

#include <java/awt/Taskbar$Feature.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/X11/XTaskbarPeer.h>
#include <jcpp.h>

#undef ICON_BADGE_NUMBER
#undef MENU
#undef PROGRESS_VALUE
#undef USER_ATTENTION

using $Taskbar$FeatureArray = $Array<::java::awt::Taskbar$Feature>;
using $Taskbar$Feature = ::java::awt::Taskbar$Feature;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $XTaskbarPeer = ::sun::awt::X11::XTaskbarPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTaskbarPeer$1_FieldInfo_[] = {
	{"$SwitchMap$java$awt$Taskbar$Feature", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XTaskbarPeer$1, $SwitchMap$java$awt$Taskbar$Feature)},
	{}
};

$EnclosingMethodInfo _XTaskbarPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XTaskbarPeer",
	nullptr,
	nullptr
};

$InnerClassInfo _XTaskbarPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTaskbarPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _XTaskbarPeer$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.awt.X11.XTaskbarPeer$1",
	"java.lang.Object",
	nullptr,
	_XTaskbarPeer$1_FieldInfo_,
	nullptr,
	nullptr,
	&_XTaskbarPeer$1_EnclosingMethodInfo_,
	_XTaskbarPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTaskbarPeer"
};

$Object* allocate$XTaskbarPeer$1($Class* clazz) {
	return $of($alloc(XTaskbarPeer$1));
}

$ints* XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature = nullptr;

void clinit$XTaskbarPeer$1($Class* class$) {
	$assignStatic(XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature, $new($ints, $($Taskbar$Feature::values())->length));
	{
		try {
			$nc(XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature)->set($Taskbar$Feature::ICON_BADGE_NUMBER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature)->set($Taskbar$Feature::MENU->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature)->set($Taskbar$Feature::PROGRESS_VALUE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature)->set($Taskbar$Feature::USER_ATTENTION->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

XTaskbarPeer$1::XTaskbarPeer$1() {
}

$Class* XTaskbarPeer$1::load$($String* name, bool initialize) {
	$loadClass(XTaskbarPeer$1, name, initialize, &_XTaskbarPeer$1_ClassInfo_, clinit$XTaskbarPeer$1, allocate$XTaskbarPeer$1);
	return class$;
}

$Class* XTaskbarPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun