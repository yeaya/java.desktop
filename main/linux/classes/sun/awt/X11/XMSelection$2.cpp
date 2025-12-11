#include <sun/awt/X11/XMSelection$2.h>

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

$FieldInfo _XMSelection$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XMSelection;", nullptr, $FINAL | $SYNTHETIC, $field(XMSelection$2, this$0)},
	{"val$screen", "I", nullptr, $FINAL | $SYNTHETIC, $field(XMSelection$2, val$screen)},
	{}
};

$MethodInfo _XMSelection$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XMSelection;I)V", "()V", 0, $method(static_cast<void(XMSelection$2::*)($XMSelection*,int32_t)>(&XMSelection$2::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XMSelection$2_EnclosingMethodInfo_ = {
	"sun.awt.X11.XMSelection",
	"resetOwner",
	"(JI)V"
};

$InnerClassInfo _XMSelection$2_InnerClassesInfo_[] = {
	{"sun.awt.X11.XMSelection$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMSelection$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XMSelection$2",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	_XMSelection$2_FieldInfo_,
	_XMSelection$2_MethodInfo_,
	nullptr,
	&_XMSelection$2_EnclosingMethodInfo_,
	_XMSelection$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XMSelection"
};

$Object* allocate$XMSelection$2($Class* clazz) {
	return $of($alloc(XMSelection$2));
}

void XMSelection$2::init$($XMSelection* this$0, int32_t val$screen) {
	$set(this, this$0, this$0);
	this->val$screen = val$screen;
}

void XMSelection$2::dispatchEvent($XEvent* ev) {
	this->this$0->dispatchSelectionEvent(ev, this->val$screen);
}

XMSelection$2::XMSelection$2() {
}

$Class* XMSelection$2::load$($String* name, bool initialize) {
	$loadClass(XMSelection$2, name, initialize, &_XMSelection$2_ClassInfo_, allocate$XMSelection$2);
	return class$;
}

$Class* XMSelection$2::class$ = nullptr;

		} // X11
	} // awt
} // sun