#include <sun/awt/windows/TranslucentWindowPainter$VIOptWGLWindowPainter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter.h>
#include <sun/awt/windows/WCanvasPeer.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WPanelPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/opengl/WGLSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TranslucentWindowPainter = ::sun::awt::windows::TranslucentWindowPainter;
using $TranslucentWindowPainter$VIOptWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$VIOptWindowPainter;
using $WCanvasPeer = ::sun::awt::windows::WCanvasPeer;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WPanelPeer = ::sun::awt::windows::WPanelPeer;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $WGLSurfaceData = ::sun::java2d::opengl::WGLSurfaceData;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _TranslucentWindowPainter$VIOptWGLWindowPainter_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $PROTECTED, $method(static_cast<void(TranslucentWindowPainter$VIOptWGLWindowPainter::*)($WWindowPeer*)>(&TranslucentWindowPainter$VIOptWGLWindowPainter::init$))},
	{"updateWindowAccel", "(JII)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _TranslucentWindowPainter$VIOptWGLWindowPainter_InnerClassesInfo_[] = {
	{"sun.awt.windows.TranslucentWindowPainter$VIOptWGLWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptWGLWindowPainter", $PRIVATE | $STATIC},
	{"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptWindowPainter", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TranslucentWindowPainter$VIOptWGLWindowPainter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.TranslucentWindowPainter$VIOptWGLWindowPainter",
	"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter",
	nullptr,
	nullptr,
	_TranslucentWindowPainter$VIOptWGLWindowPainter_MethodInfo_,
	nullptr,
	nullptr,
	_TranslucentWindowPainter$VIOptWGLWindowPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.TranslucentWindowPainter"
};

$Object* allocate$TranslucentWindowPainter$VIOptWGLWindowPainter($Class* clazz) {
	return $of($alloc(TranslucentWindowPainter$VIOptWGLWindowPainter));
}

void TranslucentWindowPainter$VIOptWGLWindowPainter::init$($WWindowPeer* peer) {
	$TranslucentWindowPainter$VIOptWindowPainter::init$(peer);
}

bool TranslucentWindowPainter$VIOptWGLWindowPainter::updateWindowAccel(int64_t psdops, int32_t w, int32_t h) {
	return $WGLSurfaceData::updateWindowAccelImpl(psdops, this->peer, w, h);
}

TranslucentWindowPainter$VIOptWGLWindowPainter::TranslucentWindowPainter$VIOptWGLWindowPainter() {
}

$Class* TranslucentWindowPainter$VIOptWGLWindowPainter::load$($String* name, bool initialize) {
	$loadClass(TranslucentWindowPainter$VIOptWGLWindowPainter, name, initialize, &_TranslucentWindowPainter$VIOptWGLWindowPainter_ClassInfo_, allocate$TranslucentWindowPainter$VIOptWGLWindowPainter);
	return class$;
}

$Class* TranslucentWindowPainter$VIOptWGLWindowPainter::class$ = nullptr;

		} // windows
	} // awt
} // sun