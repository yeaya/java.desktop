#include <sun/awt/X11/XFramePeer$1.h>

#include <java/awt/Component.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XFramePeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XFramePeer = ::sun::awt::X11::XFramePeer;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XFramePeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XFramePeer;", nullptr, $FINAL | $SYNTHETIC, $field(XFramePeer$1, this$0)},
	{}
};

$MethodInfo _XFramePeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XFramePeer;)V", nullptr, 0, $method(static_cast<void(XFramePeer$1::*)($XFramePeer*)>(&XFramePeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XFramePeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XFramePeer",
	"reshapeMenubarPeer",
	"()V"
};

$InnerClassInfo _XFramePeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XFramePeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XFramePeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XFramePeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XFramePeer$1_FieldInfo_,
	_XFramePeer$1_MethodInfo_,
	nullptr,
	&_XFramePeer$1_EnclosingMethodInfo_,
	_XFramePeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XFramePeer"
};

$Object* allocate$XFramePeer$1($Class* clazz) {
	return $of($alloc(XFramePeer$1));
}

void XFramePeer$1::init$($XFramePeer* this$0) {
	$set(this, this$0, this$0);
}

void XFramePeer$1::run() {
	this->this$0->updateChildrenSizes();
	bool heightChanged = false;
	int32_t height = this->this$0->getMenuBarHeight();
	$synchronized(this->this$0->getStateLock()) {
		if (height != this->this$0->lastAppliedMenubarHeight) {
			this->this$0->lastAppliedMenubarHeight = height;
			heightChanged = true;
		}
	}
	if (heightChanged) {
		$nc(this->this$0->target)->invalidate();
		$nc(this->this$0->target)->validate();
	}
}

XFramePeer$1::XFramePeer$1() {
}

$Class* XFramePeer$1::load$($String* name, bool initialize) {
	$loadClass(XFramePeer$1, name, initialize, &_XFramePeer$1_ClassInfo_, allocate$XFramePeer$1);
	return class$;
}

$Class* XFramePeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun