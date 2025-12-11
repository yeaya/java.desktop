#include <sun/awt/X11/XTrayIconPeer$4.h>

#include <java/awt/TrayIcon.h>
#include <java/lang/Runnable.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XReparentEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTrayIconPeer$4$1.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XReparentEvent = ::sun::awt::X11::XReparentEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;
using $XTrayIconPeer$4$1 = ::sun::awt::X11::XTrayIconPeer$4$1;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTrayIconPeer$4_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTrayIconPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$4, this$0)},
	{"xtiPeer", "Lsun/awt/X11/XTrayIconPeer;", nullptr, 0, $field(XTrayIconPeer$4, xtiPeer)},
	{}
};

$MethodInfo _XTrayIconPeer$4_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTrayIconPeer;)V", nullptr, 0, $method(static_cast<void(XTrayIconPeer$4::*)($XTrayIconPeer*)>(&XTrayIconPeer$4::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XTrayIconPeer$4_EnclosingMethodInfo_ = {
	"sun.awt.X11.XTrayIconPeer",
	"<init>",
	"(Ljava/awt/TrayIcon;)V"
};

$InnerClassInfo _XTrayIconPeer$4_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$4", nullptr, nullptr, 0},
	{"sun.awt.X11.XTrayIconPeer$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XTrayIconPeer$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$4",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	_XTrayIconPeer$4_FieldInfo_,
	_XTrayIconPeer$4_MethodInfo_,
	nullptr,
	&_XTrayIconPeer$4_EnclosingMethodInfo_,
	_XTrayIconPeer$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$4($Class* clazz) {
	return $of($alloc(XTrayIconPeer$4));
}

void XTrayIconPeer$4::init$($XTrayIconPeer* this$0) {
	$set(this, this$0, this$0);
	$set(this, xtiPeer, this->this$0);
}

void XTrayIconPeer$4::dispatchEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = this->this$0->isDisposed();
	if (var$0 || $nc(ev)->get_type() != $XConstants::ReparentNotify) {
		return;
	}
	$var($XReparentEvent, re, $nc(ev)->get_xreparent());
	this->this$0->eframeParentID = $nc(re)->get_parent();
	if (this->this$0->eframeParentID == $XToolkit::getDefaultRootWindow()) {
		if (this->this$0->isTrayIconDisplayed) {
			$SunToolkit::executeOnEventHandlerThread($nc(this->xtiPeer)->target, $$new($XTrayIconPeer$4$1, this));
		}
		return;
	}
	if (!this->this$0->isTrayIconDisplayed) {
		this->this$0->addXED(this->this$0->eframeParentID, this->this$0->parentXED, $XConstants::StructureNotifyMask);
		this->this$0->isTrayIconDisplayed = true;
		$XToolkit::awtLockNotifyAll();
	}
}

XTrayIconPeer$4::XTrayIconPeer$4() {
}

$Class* XTrayIconPeer$4::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$4, name, initialize, &_XTrayIconPeer$4_ClassInfo_, allocate$XTrayIconPeer$4);
	return class$;
}

$Class* XTrayIconPeer$4::class$ = nullptr;

		} // X11
	} // awt
} // sun