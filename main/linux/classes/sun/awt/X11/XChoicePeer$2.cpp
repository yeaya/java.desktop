#include <sun/awt/X11/XChoicePeer$2.h>

#include <java/awt/event/MouseEvent.h>
#include <sun/awt/X11/XChoicePeer.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XChoicePeer = ::sun::awt::X11::XChoicePeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XChoicePeer$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XChoicePeer;", nullptr, $FINAL | $SYNTHETIC, $field(XChoicePeer$2, this$0)},
	{"val$me", "Ljava/awt/event/MouseEvent;", nullptr, $FINAL | $SYNTHETIC, $field(XChoicePeer$2, val$me)},
	{}
};

$MethodInfo _XChoicePeer$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XChoicePeer;Ljava/awt/event/MouseEvent;)V", "()V", 0, $method(static_cast<void(XChoicePeer$2::*)($XChoicePeer*,$MouseEvent*)>(&XChoicePeer$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XChoicePeer$2_EnclosingMethodInfo_ = {
	"sun.awt.X11.XChoicePeer",
	"handleMouseEventByChoice",
	"(Ljava/awt/event/MouseEvent;)Z"
};

$InnerClassInfo _XChoicePeer$2_InnerClassesInfo_[] = {
	{"sun.awt.X11.XChoicePeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XChoicePeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XChoicePeer$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_XChoicePeer$2_FieldInfo_,
	_XChoicePeer$2_MethodInfo_,
	nullptr,
	&_XChoicePeer$2_EnclosingMethodInfo_,
	_XChoicePeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XChoicePeer"
};

$Object* allocate$XChoicePeer$2($Class* clazz) {
	return $of($alloc(XChoicePeer$2));
}

void XChoicePeer$2::init$($XChoicePeer* this$0, $MouseEvent* val$me) {
	$set(this, this$0, this$0);
	$set(this, val$me, val$me);
}

void XChoicePeer$2::run() {
	this->this$0->handleJavaMouseEvent(this->val$me);
}

XChoicePeer$2::XChoicePeer$2() {
}

$Class* XChoicePeer$2::load$($String* name, bool initialize) {
	$loadClass(XChoicePeer$2, name, initialize, &_XChoicePeer$2_ClassInfo_, allocate$XChoicePeer$2);
	return class$;
}

$Class* XChoicePeer$2::class$ = nullptr;

		} // X11
	} // awt
} // sun