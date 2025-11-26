#include <sun/awt/X11/XListPeer$1.h>

#include <java/awt/event/MouseEvent.h>
#include <sun/awt/X11/XListPeer.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XListPeer = ::sun::awt::X11::XListPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XListPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XListPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XListPeer$1, this$0)},
	{"val$me", "Ljava/awt/event/MouseEvent;", nullptr, $FINAL | $SYNTHETIC, $field(XListPeer$1, val$me)},
	{}
};

$MethodInfo _XListPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XListPeer;Ljava/awt/event/MouseEvent;)V", "()V", 0, $method(static_cast<void(XListPeer$1::*)($XListPeer*,$MouseEvent*)>(&XListPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XListPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XListPeer",
	"handleJavaMouseEventOnEDT",
	"(Ljava/awt/event/MouseEvent;)V"
};

$InnerClassInfo _XListPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XListPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XListPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XListPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XListPeer$1_FieldInfo_,
	_XListPeer$1_MethodInfo_,
	nullptr,
	&_XListPeer$1_EnclosingMethodInfo_,
	_XListPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XListPeer"
};

$Object* allocate$XListPeer$1($Class* clazz) {
	return $of($alloc(XListPeer$1));
}

void XListPeer$1::init$($XListPeer* this$0, $MouseEvent* val$me) {
	$set(this, this$0, this$0);
	$set(this, val$me, val$me);
}

void XListPeer$1::run() {
	this->this$0->handleJavaMouseEvent(this->val$me);
}

XListPeer$1::XListPeer$1() {
}

$Class* XListPeer$1::load$($String* name, bool initialize) {
	$loadClass(XListPeer$1, name, initialize, &_XListPeer$1_ClassInfo_, allocate$XListPeer$1);
	return class$;
}

$Class* XListPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun