#include <sun/awt/X11/XMSelection$3.h>

#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XMSelection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XMSelection = ::sun::awt::X11::XMSelection;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMSelection$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XMSelection;", nullptr, $FINAL | $SYNTHETIC, $field(XMSelection$3, this$0)},
	{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(XMSelection$3, val$screen)},
	{}
};

$MethodInfo _XMSelection$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XMSelection;I)V", "()V", 0, $method(static_cast<void(XMSelection$3::*)($XMSelection*,int32_t)>(&XMSelection$3::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XMSelection$3_EnclosingMethodInfo_ = {
	"sun.awt.X11.XMSelection",
	"selectPerScreen",
	"(IJ)V"
};

$InnerClassInfo _XMSelection$3_InnerClassesInfo_[] = {
	{"sun.awt.X11.XMSelection$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMSelection$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XMSelection$3",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	_XMSelection$3_FieldInfo_,
	_XMSelection$3_MethodInfo_,
	nullptr,
	&_XMSelection$3_EnclosingMethodInfo_,
	_XMSelection$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XMSelection"
};

$Object* allocate$XMSelection$3($Class* clazz) {
	return $of($alloc(XMSelection$3));
}

void XMSelection$3::init$($XMSelection* this$0, int32_t val$screen) {
	$set(this, this$0, this$0);
	this->val$screen = val$screen;
}

void XMSelection$3::dispatchEvent($XEvent* ev) {
	this->this$0->dispatchSelectionEvent(ev, this->val$screen);
}

XMSelection$3::XMSelection$3() {
}

$Class* XMSelection$3::load$($String* name, bool initialize) {
	$loadClass(XMSelection$3, name, initialize, &_XMSelection$3_ClassInfo_, allocate$XMSelection$3);
	return class$;
}

$Class* XMSelection$3::class$ = nullptr;

		} // X11
	} // awt
} // sun