#include <sun/awt/windows/TranslucentWindowPainter$VIOptD3DWindowPainter.h>

#include <sun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TranslucentWindowPainter$VIOptWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$VIOptWindowPainter;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _TranslucentWindowPainter$VIOptD3DWindowPainter_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $PROTECTED, $method(static_cast<void(TranslucentWindowPainter$VIOptD3DWindowPainter::*)($WWindowPeer*)>(&TranslucentWindowPainter$VIOptD3DWindowPainter::init$))},
	{"updateWindowAccel", "(JII)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _TranslucentWindowPainter$VIOptD3DWindowPainter_InnerClassesInfo_[] = {
	{"sun.awt.windows.TranslucentWindowPainter$VIOptD3DWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptD3DWindowPainter", $PRIVATE | $STATIC},
	{"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptWindowPainter", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TranslucentWindowPainter$VIOptD3DWindowPainter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.TranslucentWindowPainter$VIOptD3DWindowPainter",
	"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter",
	nullptr,
	nullptr,
	_TranslucentWindowPainter$VIOptD3DWindowPainter_MethodInfo_,
	nullptr,
	nullptr,
	_TranslucentWindowPainter$VIOptD3DWindowPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.TranslucentWindowPainter"
};

$Object* allocate$TranslucentWindowPainter$VIOptD3DWindowPainter($Class* clazz) {
	return $of($alloc(TranslucentWindowPainter$VIOptD3DWindowPainter));
}

void TranslucentWindowPainter$VIOptD3DWindowPainter::init$($WWindowPeer* peer) {
	$TranslucentWindowPainter$VIOptWindowPainter::init$(peer);
}

bool TranslucentWindowPainter$VIOptD3DWindowPainter::updateWindowAccel(int64_t psdops, int32_t w, int32_t h) {
	return $D3DSurfaceData::updateWindowAccelImpl(psdops, $nc(this->peer)->getData(), w, h);
}

TranslucentWindowPainter$VIOptD3DWindowPainter::TranslucentWindowPainter$VIOptD3DWindowPainter() {
}

$Class* TranslucentWindowPainter$VIOptD3DWindowPainter::load$($String* name, bool initialize) {
	$loadClass(TranslucentWindowPainter$VIOptD3DWindowPainter, name, initialize, &_TranslucentWindowPainter$VIOptD3DWindowPainter_ClassInfo_, allocate$TranslucentWindowPainter$VIOptD3DWindowPainter);
	return class$;
}

$Class* TranslucentWindowPainter$VIOptD3DWindowPainter::class$ = nullptr;

		} // windows
	} // awt
} // sun