#include <sun/awt/X11/XScrollPanePeer$XScrollPaneContentWindow.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/ScrollPane.h>
#include <sun/awt/X11/XScrollPanePeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ScrollPane = ::java::awt::ScrollPane;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XScrollPanePeer = ::sun::awt::X11::XScrollPanePeer;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XScrollPanePeer$XScrollPaneContentWindow_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/ScrollPane;J)V", nullptr, 0, $method(static_cast<void(XScrollPanePeer$XScrollPaneContentWindow::*)($ScrollPane*,int64_t)>(&XScrollPanePeer$XScrollPaneContentWindow::init$))},
	{"getWMName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XScrollPanePeer$XScrollPaneContentWindow_InnerClassesInfo_[] = {
	{"sun.awt.X11.XScrollPanePeer$XScrollPaneContentWindow", "sun.awt.X11.XScrollPanePeer", "XScrollPaneContentWindow", $STATIC},
	{}
};

$ClassInfo _XScrollPanePeer$XScrollPaneContentWindow_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XScrollPanePeer$XScrollPaneContentWindow",
	"sun.awt.X11.XWindow",
	nullptr,
	nullptr,
	_XScrollPanePeer$XScrollPaneContentWindow_MethodInfo_,
	nullptr,
	nullptr,
	_XScrollPanePeer$XScrollPaneContentWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XScrollPanePeer"
};

$Object* allocate$XScrollPanePeer$XScrollPaneContentWindow($Class* clazz) {
	return $of($alloc(XScrollPanePeer$XScrollPaneContentWindow));
}

void XScrollPanePeer$XScrollPaneContentWindow::init$($ScrollPane* target, int64_t parentWindow) {
	$XWindow::init$(static_cast<$Component*>(target), parentWindow);
}

$String* XScrollPanePeer$XScrollPaneContentWindow::getWMName() {
	return "ScrollPane content"_s;
}

XScrollPanePeer$XScrollPaneContentWindow::XScrollPanePeer$XScrollPaneContentWindow() {
}

$Class* XScrollPanePeer$XScrollPaneContentWindow::load$($String* name, bool initialize) {
	$loadClass(XScrollPanePeer$XScrollPaneContentWindow, name, initialize, &_XScrollPanePeer$XScrollPaneContentWindow_ClassInfo_, allocate$XScrollPanePeer$XScrollPaneContentWindow);
	return class$;
}

$Class* XScrollPanePeer$XScrollPaneContentWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun