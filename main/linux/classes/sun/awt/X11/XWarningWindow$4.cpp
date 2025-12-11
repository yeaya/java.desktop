#include <sun/awt/X11/XWarningWindow$4.h>

#include <java/lang/Runnable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWarningWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWarningWindow = ::sun::awt::X11::XWarningWindow;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWarningWindow$4_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XWarningWindow;", nullptr, $FINAL | $SYNTHETIC, $field(XWarningWindow$4, this$0)},
	{}
};

$MethodInfo _XWarningWindow$4_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XWarningWindow;)V", nullptr, 0, $method(static_cast<void(XWarningWindow$4::*)($XWarningWindow*)>(&XWarningWindow$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XWarningWindow$4_EnclosingMethodInfo_ = {
	"sun.awt.X11.XWarningWindow",
	nullptr,
	nullptr
};

$InnerClassInfo _XWarningWindow$4_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWarningWindow$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XWarningWindow$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWarningWindow$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_XWarningWindow$4_FieldInfo_,
	_XWarningWindow$4_MethodInfo_,
	nullptr,
	&_XWarningWindow$4_EnclosingMethodInfo_,
	_XWarningWindow$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XWarningWindow"
};

$Object* allocate$XWarningWindow$4($Class* clazz) {
	return $of($alloc(XWarningWindow$4));
}

void XWarningWindow$4::init$($XWarningWindow* this$0) {
	$set(this, this$0, this$0);
}

void XWarningWindow$4::run() {
	if (!this->this$0->isVisible()) {
		this->this$0->xSetVisible(true);
		this->this$0->updateIconSize();
		$var($XWindowPeer, peer, $cast($XWindowPeer, $nc(this->this$0->ownerPeer)->get()));
		if (peer != nullptr) {
			peer->repositionSecurityWarning();
		}
	}
	this->this$0->repaint();
	if (this->this$0->currentIcon > 0) {
		--this->this$0->currentIcon;
		$XToolkit::schedule(this->this$0->showingTask, 330);
	}
}

XWarningWindow$4::XWarningWindow$4() {
}

$Class* XWarningWindow$4::load$($String* name, bool initialize) {
	$loadClass(XWarningWindow$4, name, initialize, &_XWarningWindow$4_ClassInfo_, allocate$XWarningWindow$4);
	return class$;
}

$Class* XWarningWindow$4::class$ = nullptr;

		} // X11
	} // awt
} // sun