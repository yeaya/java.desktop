#include <sun/awt/X11/XMSelection$1.h>

#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XMSelection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEvent = ::sun::awt::X11::XEvent;
using $XMSelection = ::sun::awt::X11::XMSelection;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMSelection$1_FieldInfo_[] = {
	{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(XMSelection$1, val$screen)},
	{}
};

$MethodInfo _XMSelection$1_MethodInfo_[] = {
	{"<init>", "(I)V", "()V", 0, $method(static_cast<void(XMSelection$1::*)(int32_t)>(&XMSelection$1::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XMSelection$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XMSelection",
	"initScreen",
	"(JI)V"
};

$InnerClassInfo _XMSelection$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XMSelection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMSelection$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XMSelection$1",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	_XMSelection$1_FieldInfo_,
	_XMSelection$1_MethodInfo_,
	nullptr,
	&_XMSelection$1_EnclosingMethodInfo_,
	_XMSelection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XMSelection"
};

$Object* allocate$XMSelection$1($Class* clazz) {
	return $of($alloc(XMSelection$1));
}

void XMSelection$1::init$(int32_t val$screen) {
	this->val$screen = val$screen;
}

void XMSelection$1::dispatchEvent($XEvent* ev) {
	$XMSelection::processRootEvent(ev, this->val$screen);
}

XMSelection$1::XMSelection$1() {
}

$Class* XMSelection$1::load$($String* name, bool initialize) {
	$loadClass(XMSelection$1, name, initialize, &_XMSelection$1_ClassInfo_, allocate$XMSelection$1);
	return class$;
}

$Class* XMSelection$1::class$ = nullptr;

		} // X11
	} // awt
} // sun