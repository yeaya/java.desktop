#include <sun/awt/X11/XTrayIconPeer$XTrayIconEmbeddedFrame.h>

#include <java/awt/Window.h>
#include <sun/awt/X11/XEmbeddedFrame.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XEmbeddedFrame = ::sun::awt::X11::XEmbeddedFrame;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XTrayIconPeer$XTrayIconEmbeddedFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XTrayIconPeer$XTrayIconEmbeddedFrame::*)()>(&XTrayIconPeer$XTrayIconEmbeddedFrame::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"isResizable", "()Z", nullptr, $PUBLIC},
	{"isUndecorated", "()Z", nullptr, $PUBLIC},
	{"realDispose", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTrayIconPeer$XTrayIconEmbeddedFrame_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$XTrayIconEmbeddedFrame", "sun.awt.X11.XTrayIconPeer", "XTrayIconEmbeddedFrame", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XTrayIconPeer$XTrayIconEmbeddedFrame_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$XTrayIconEmbeddedFrame",
	"sun.awt.X11.XEmbeddedFrame",
	nullptr,
	nullptr,
	_XTrayIconPeer$XTrayIconEmbeddedFrame_MethodInfo_,
	nullptr,
	nullptr,
	_XTrayIconPeer$XTrayIconEmbeddedFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$XTrayIconEmbeddedFrame($Class* clazz) {
	return $of($alloc(XTrayIconPeer$XTrayIconEmbeddedFrame));
}

void XTrayIconPeer$XTrayIconEmbeddedFrame::init$() {
	$XEmbeddedFrame::init$($XToolkit::getDefaultRootWindow(), true, true);
}

bool XTrayIconPeer$XTrayIconEmbeddedFrame::isUndecorated() {
	return true;
}

bool XTrayIconPeer$XTrayIconEmbeddedFrame::isResizable() {
	return false;
}

void XTrayIconPeer$XTrayIconEmbeddedFrame::dispose() {
}

void XTrayIconPeer$XTrayIconEmbeddedFrame::realDispose() {
	$XEmbeddedFrame::dispose();
}

XTrayIconPeer$XTrayIconEmbeddedFrame::XTrayIconPeer$XTrayIconEmbeddedFrame() {
}

$Class* XTrayIconPeer$XTrayIconEmbeddedFrame::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$XTrayIconEmbeddedFrame, name, initialize, &_XTrayIconPeer$XTrayIconEmbeddedFrame_ClassInfo_, allocate$XTrayIconPeer$XTrayIconEmbeddedFrame);
	return class$;
}

$Class* XTrayIconPeer$XTrayIconEmbeddedFrame::class$ = nullptr;

		} // X11
	} // awt
} // sun