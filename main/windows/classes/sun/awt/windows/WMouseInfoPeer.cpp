#include <sun/awt/windows/WMouseInfoPeer.h>

#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $MouseInfoPeer = ::java::awt::peer::MouseInfoPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WMouseInfoPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WMouseInfoPeer::*)()>(&WMouseInfoPeer::init$))},
	{"fillPointWithCoords", "(Ljava/awt/Point;)I", nullptr, $PUBLIC | $NATIVE},
	{"isWindowUnderMouse", "(Ljava/awt/Window;)Z", nullptr, $PUBLIC | $NATIVE},
	{}
};

#define _METHOD_INDEX_fillPointWithCoords 1
#define _METHOD_INDEX_isWindowUnderMouse 2

$ClassInfo _WMouseInfoPeer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.WMouseInfoPeer",
	"java.lang.Object",
	"java.awt.peer.MouseInfoPeer",
	nullptr,
	_WMouseInfoPeer_MethodInfo_
};

$Object* allocate$WMouseInfoPeer($Class* clazz) {
	return $of($alloc(WMouseInfoPeer));
}

void WMouseInfoPeer::init$() {
}

int32_t WMouseInfoPeer::fillPointWithCoords($Point* point) {
	int32_t $ret = 0;
	$prepareNative(WMouseInfoPeer, fillPointWithCoords, int32_t, $Point* point);
	$ret = $invokeNative(WMouseInfoPeer, fillPointWithCoords, point);
	$finishNative();
	return $ret;
}

bool WMouseInfoPeer::isWindowUnderMouse($Window* w) {
	bool $ret = false;
	$prepareNative(WMouseInfoPeer, isWindowUnderMouse, bool, $Window* w);
	$ret = $invokeNative(WMouseInfoPeer, isWindowUnderMouse, w);
	$finishNative();
	return $ret;
}

void clinit$WMouseInfoPeer($Class* class$) {
	{
		$nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice();
	}
}

WMouseInfoPeer::WMouseInfoPeer() {
}

$Class* WMouseInfoPeer::load$($String* name, bool initialize) {
	$loadClass(WMouseInfoPeer, name, initialize, &_WMouseInfoPeer_ClassInfo_, clinit$WMouseInfoPeer, allocate$WMouseInfoPeer);
	return class$;
}

$Class* WMouseInfoPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun