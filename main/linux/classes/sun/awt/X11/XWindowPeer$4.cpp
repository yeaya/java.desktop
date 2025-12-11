#include <sun/awt/X11/XWindowPeer$4.h>

#include <java/awt/Window$Type.h>
#include <java/awt/Window.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

#undef NORMAL
#undef POPUP
#undef UTILITY

using $Window$Type = ::java::awt::Window$Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWindowPeer$4_FieldInfo_[] = {
	{"$SwitchMap$java$awt$Window$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XWindowPeer$4, $SwitchMap$java$awt$Window$Type)},
	{}
};

$EnclosingMethodInfo _XWindowPeer$4_EnclosingMethodInfo_ = {
	"sun.awt.X11.XWindowPeer",
	nullptr,
	nullptr
};

$InnerClassInfo _XWindowPeer$4_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWindowPeer$4", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _XWindowPeer$4_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.awt.X11.XWindowPeer$4",
	"java.lang.Object",
	nullptr,
	_XWindowPeer$4_FieldInfo_,
	nullptr,
	nullptr,
	&_XWindowPeer$4_EnclosingMethodInfo_,
	_XWindowPeer$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XWindowPeer"
};

$Object* allocate$XWindowPeer$4($Class* clazz) {
	return $of($alloc(XWindowPeer$4));
}

$ints* XWindowPeer$4::$SwitchMap$java$awt$Window$Type = nullptr;

void clinit$XWindowPeer$4($Class* class$) {
	$assignStatic(XWindowPeer$4::$SwitchMap$java$awt$Window$Type, $new($ints, $($Window$Type::values())->length));
	{
		try {
			$nc(XWindowPeer$4::$SwitchMap$java$awt$Window$Type)->set($Window$Type::NORMAL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(XWindowPeer$4::$SwitchMap$java$awt$Window$Type)->set($Window$Type::UTILITY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(XWindowPeer$4::$SwitchMap$java$awt$Window$Type)->set($Window$Type::POPUP->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

XWindowPeer$4::XWindowPeer$4() {
}

$Class* XWindowPeer$4::load$($String* name, bool initialize) {
	$loadClass(XWindowPeer$4, name, initialize, &_XWindowPeer$4_ClassInfo_, clinit$XWindowPeer$4, allocate$XWindowPeer$4);
	return class$;
}

$Class* XWindowPeer$4::class$ = nullptr;

		} // X11
	} // awt
} // sun