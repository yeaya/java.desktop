#include <sun/lwawt/LWRepaintArea.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/RepaintArea.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $RepaintArea = ::sun::awt::RepaintArea;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;

namespace sun {
	namespace lwawt {

$MethodInfo _LWRepaintArea_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LWRepaintArea::*)()>(&LWRepaintArea::init$))},
	{"paintComponent", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"updateComponent", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _LWRepaintArea_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWRepaintArea",
	"sun.awt.RepaintArea",
	nullptr,
	nullptr,
	_LWRepaintArea_MethodInfo_
};

$Object* allocate$LWRepaintArea($Class* clazz) {
	return $of($alloc(LWRepaintArea));
}

void LWRepaintArea::init$() {
	$RepaintArea::init$();
}

void LWRepaintArea::updateComponent($Component* comp, $Graphics* g) {
	if (comp != nullptr) {
		$RepaintArea::updateComponent(comp, g);
		$LWComponentPeer::flushOnscreenGraphics();
	}
}

void LWRepaintArea::paintComponent($Component* comp, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (comp != nullptr) {
		$var($Object, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(comp));
		if (peer != nullptr) {
			$nc(($cast($LWComponentPeer, peer)))->paintPeer(g);
		}
		$RepaintArea::paintComponent(comp, g);
		$LWComponentPeer::flushOnscreenGraphics();
	}
}

LWRepaintArea::LWRepaintArea() {
}

$Class* LWRepaintArea::load$($String* name, bool initialize) {
	$loadClass(LWRepaintArea, name, initialize, &_LWRepaintArea_ClassInfo_, allocate$LWRepaintArea);
	return class$;
}

$Class* LWRepaintArea::class$ = nullptr;

	} // lwawt
} // sun