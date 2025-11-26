#include <sun/awt/X11/XChoicePeer$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/event/KeyEvent.h>
#include <sun/awt/X11/XChoicePeer.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XChoicePeer = ::sun::awt::X11::XChoicePeer;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XChoicePeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XChoicePeer;", nullptr, $FINAL | $SYNTHETIC, $field(XChoicePeer$1, this$0)},
	{"val$e", "Ljava/awt/AWTEvent;", nullptr, $FINAL | $SYNTHETIC, $field(XChoicePeer$1, val$e)},
	{}
};

$MethodInfo _XChoicePeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XChoicePeer;Ljava/awt/AWTEvent;)V", "()V", 0, $method(static_cast<void(XChoicePeer$1::*)($XChoicePeer*,$AWTEvent*)>(&XChoicePeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XChoicePeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XChoicePeer",
	"prePostEvent",
	"(Ljava/awt/AWTEvent;)Z"
};

$InnerClassInfo _XChoicePeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XChoicePeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XChoicePeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XChoicePeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XChoicePeer$1_FieldInfo_,
	_XChoicePeer$1_MethodInfo_,
	nullptr,
	&_XChoicePeer$1_EnclosingMethodInfo_,
	_XChoicePeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XChoicePeer"
};

$Object* allocate$XChoicePeer$1($Class* clazz) {
	return $of($alloc(XChoicePeer$1));
}

void XChoicePeer$1::init$($XChoicePeer* this$0, $AWTEvent* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
}

void XChoicePeer$1::run() {
	bool var$0 = $nc(this->this$0->target)->isFocusable();
	if (var$0 && $nc($(this->this$0->getParentTopLevel()))->isFocusableWindow()) {
		this->this$0->handleJavaKeyEvent($cast($KeyEvent, this->val$e));
	}
}

XChoicePeer$1::XChoicePeer$1() {
}

$Class* XChoicePeer$1::load$($String* name, bool initialize) {
	$loadClass(XChoicePeer$1, name, initialize, &_XChoicePeer$1_ClassInfo_, allocate$XChoicePeer$1);
	return class$;
}

$Class* XChoicePeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun