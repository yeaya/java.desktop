#include <sun/awt/X11/XRepaintArea.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/RepaintArea.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $RepaintArea = ::sun::awt::RepaintArea;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XRepaintArea_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XRepaintArea::*)()>(&XRepaintArea::init$))},
	{"paintComponent", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"updateComponent", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XRepaintArea_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XRepaintArea",
	"sun.awt.RepaintArea",
	nullptr,
	nullptr,
	_XRepaintArea_MethodInfo_
};

$Object* allocate$XRepaintArea($Class* clazz) {
	return $of($alloc(XRepaintArea));
}

void XRepaintArea::init$() {
	$RepaintArea::init$();
}

void XRepaintArea::updateComponent($Component* comp, $Graphics* g) {
	if (comp != nullptr) {
		$RepaintArea::updateComponent(comp, g);
	}
}

void XRepaintArea::paintComponent($Component* comp, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (comp != nullptr) {
		$var($XComponentPeer, peer, $cast($XComponentPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(comp)));
		if (peer != nullptr) {
			peer->paintPeer(g);
		}
		$RepaintArea::paintComponent(comp, g);
	}
}

XRepaintArea::XRepaintArea() {
}

$Class* XRepaintArea::load$($String* name, bool initialize) {
	$loadClass(XRepaintArea, name, initialize, &_XRepaintArea_ClassInfo_, allocate$XRepaintArea);
	return class$;
}

$Class* XRepaintArea::class$ = nullptr;

		} // X11
	} // awt
} // sun