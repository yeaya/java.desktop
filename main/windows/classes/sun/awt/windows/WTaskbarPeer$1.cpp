#include <sun/awt/windows/WTaskbarPeer$1.h>

#include <java/awt/Taskbar$Feature.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/windows/WTaskbarPeer.h>
#include <jcpp.h>

#undef ICON_BADGE_IMAGE_WINDOW
#undef PROGRESS_STATE_WINDOW
#undef PROGRESS_VALUE_WINDOW
#undef USER_ATTENTION_WINDOW

using $Taskbar$FeatureArray = $Array<::java::awt::Taskbar$Feature>;
using $Taskbar$Feature = ::java::awt::Taskbar$Feature;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $WTaskbarPeer = ::sun::awt::windows::WTaskbarPeer;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WTaskbarPeer$1_FieldInfo_[] = {
	{"$SwitchMap$java$awt$Taskbar$Feature", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WTaskbarPeer$1, $SwitchMap$java$awt$Taskbar$Feature)},
	{}
};

$EnclosingMethodInfo _WTaskbarPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.WTaskbarPeer",
	nullptr,
	nullptr
};

$InnerClassInfo _WTaskbarPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.WTaskbarPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _WTaskbarPeer$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.awt.windows.WTaskbarPeer$1",
	"java.lang.Object",
	nullptr,
	_WTaskbarPeer$1_FieldInfo_,
	nullptr,
	nullptr,
	&_WTaskbarPeer$1_EnclosingMethodInfo_,
	_WTaskbarPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WTaskbarPeer"
};

$Object* allocate$WTaskbarPeer$1($Class* clazz) {
	return $of($alloc(WTaskbarPeer$1));
}

$ints* WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature = nullptr;

void clinit$WTaskbarPeer$1($Class* class$) {
	$assignStatic(WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature, $new($ints, $($Taskbar$Feature::values())->length));
	{
		try {
			$nc(WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature)->set($Taskbar$Feature::ICON_BADGE_IMAGE_WINDOW->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature)->set($Taskbar$Feature::PROGRESS_STATE_WINDOW->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature)->set($Taskbar$Feature::PROGRESS_VALUE_WINDOW->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature)->set($Taskbar$Feature::USER_ATTENTION_WINDOW->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WTaskbarPeer$1::WTaskbarPeer$1() {
}

$Class* WTaskbarPeer$1::load$($String* name, bool initialize) {
	$loadClass(WTaskbarPeer$1, name, initialize, &_WTaskbarPeer$1_ClassInfo_, clinit$WTaskbarPeer$1, allocate$WTaskbarPeer$1);
	return class$;
}

$Class* WTaskbarPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun