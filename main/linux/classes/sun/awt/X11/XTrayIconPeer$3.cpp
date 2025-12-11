#include <sun/awt/X11/XTrayIconPeer$3.h>

#include <sun/awt/X11/XConfigureEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $XConfigureEvent = ::sun::awt::X11::XConfigureEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTrayIconPeer$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTrayIconPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$3, this$0)},
	{}
};

$MethodInfo _XTrayIconPeer$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTrayIconPeer;)V", nullptr, 0, $method(static_cast<void(XTrayIconPeer$3::*)($XTrayIconPeer*)>(&XTrayIconPeer$3::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XTrayIconPeer$3_EnclosingMethodInfo_ = {
	"sun.awt.X11.XTrayIconPeer",
	"<init>",
	"(Ljava/awt/TrayIcon;)V"
};

$InnerClassInfo _XTrayIconPeer$3_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XTrayIconPeer$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$3",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	_XTrayIconPeer$3_FieldInfo_,
	_XTrayIconPeer$3_MethodInfo_,
	nullptr,
	&_XTrayIconPeer$3_EnclosingMethodInfo_,
	_XTrayIconPeer$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$3($Class* clazz) {
	return $of($alloc(XTrayIconPeer$3));
}

void XTrayIconPeer$3::init$($XTrayIconPeer* this$0) {
	$set(this, this$0, this$0);
}

void XTrayIconPeer$3::dispatchEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = this->this$0->isDisposed();
	if (var$0 || $nc(ev)->get_type() != $XConstants::ConfigureNotify) {
		return;
	}
	$var($XConfigureEvent, ce, $nc(ev)->get_xconfigure());
	$init($PlatformLogger$Level);
	if ($nc($XTrayIconPeer::ctrLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc($XTrayIconPeer::ctrLog)->fine("ConfigureNotify on parent of {0}: {1}x{2}+{3}+{4} (old: {5}+{6})"_s, $$new($ObjectArray, {
			$of(this->this$0),
			$($of($Integer::valueOf($nc(ce)->get_width()))),
			$($of($Integer::valueOf($nc(ce)->get_height()))),
			$($of($Integer::valueOf($nc(ce)->get_x()))),
			$($of($Integer::valueOf($nc(ce)->get_y()))),
			$($of($Integer::valueOf(this->this$0->old_x))),
			$($of($Integer::valueOf(this->this$0->old_y)))
		}));
	}
	bool var$1 = $nc(ce)->get_height() != 24;
	if (var$1 && ce->get_width() != 24) {
		if ($nc($XTrayIconPeer::ctrLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc($XTrayIconPeer::ctrLog)->fine("ConfigureNotify on parent of {0}. Skipping as intermediate resizing."_s, $$new($ObjectArray, {$of(this->this$0)}));
		}
		return;
	} else if (ce->get_height() > 24) {
		if ($nc($XTrayIconPeer::ctrLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc($XTrayIconPeer::ctrLog)->fine("ConfigureNotify on parent of {0}. Centering by \"Y\"."_s, $$new($ObjectArray, {$of(this->this$0)}));
		}
		int64_t var$2 = $XToolkit::getDisplay();
		int64_t var$3 = this->this$0->eframeParentID;
		int32_t var$4 = ce->get_x();
		int32_t var$5 = ce->get_y();
		$XlibWrapper::XMoveResizeWindow(var$2, var$3, var$4, var$5 + ce->get_height() / 2 - 24 / 2, 24, 24);
		this->this$0->ex_height = ce->get_height();
		this->this$0->ex_width = 0;
	} else if (ce->get_width() > 24) {
		if ($nc($XTrayIconPeer::ctrLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc($XTrayIconPeer::ctrLog)->fine("ConfigureNotify on parent of {0}. Centering by \"X\"."_s, $$new($ObjectArray, {$of(this->this$0)}));
		}
		int64_t var$6 = $XToolkit::getDisplay();
		int64_t var$7 = this->this$0->eframeParentID;
		int32_t var$9 = ce->get_x();
		int32_t var$8 = var$9 + ce->get_width() / 2 - 24 / 2;
		$XlibWrapper::XMoveResizeWindow(var$6, var$7, var$8, ce->get_y(), 24, 24);
		this->this$0->ex_width = ce->get_width();
		this->this$0->ex_height = 0;
	} else {
		bool var$11 = this->this$0->isParentWindowLocated && ce->get_x() != this->this$0->old_x;
		if (var$11 && ce->get_y() != this->this$0->old_y) {
			if (this->this$0->ex_height != 0) {
				if ($nc($XTrayIconPeer::ctrLog)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc($XTrayIconPeer::ctrLog)->fine("ConfigureNotify on parent of {0}. Move detected. Centering by \"Y\"."_s, $$new($ObjectArray, {$of(this->this$0)}));
				}
				int64_t var$12 = $XToolkit::getDisplay();
				int64_t var$13 = this->this$0->eframeParentID;
				int32_t var$14 = ce->get_x();
				$XlibWrapper::XMoveWindow(var$12, var$13, var$14, ce->get_y() + this->this$0->ex_height / 2 - 24 / 2);
			} else if (this->this$0->ex_width != 0) {
				if ($nc($XTrayIconPeer::ctrLog)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc($XTrayIconPeer::ctrLog)->fine("ConfigureNotify on parent of {0}. Move detected. Centering by \"X\"."_s, $$new($ObjectArray, {$of(this->this$0)}));
				}
				int64_t var$15 = $XToolkit::getDisplay();
				int64_t var$16 = this->this$0->eframeParentID;
				int32_t var$17 = ce->get_x() + this->this$0->ex_width / 2 - 24 / 2;
				$XlibWrapper::XMoveWindow(var$15, var$16, var$17, ce->get_y());
			} else {
				if ($nc($XTrayIconPeer::ctrLog)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc($XTrayIconPeer::ctrLog)->fine("ConfigureNotify on parent of {0}. Move detected. Skipping."_s, $$new($ObjectArray, {$of(this->this$0)}));
				}
			}
		}
	}
	this->this$0->old_x = $nc(ce)->get_x();
	this->this$0->old_y = ce->get_y();
	this->this$0->isParentWindowLocated = true;
}

XTrayIconPeer$3::XTrayIconPeer$3() {
}

$Class* XTrayIconPeer$3::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$3, name, initialize, &_XTrayIconPeer$3_ClassInfo_, allocate$XTrayIconPeer$3);
	return class$;
}

$Class* XTrayIconPeer$3::class$ = nullptr;

		} // X11
	} // awt
} // sun