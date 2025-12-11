#include <sun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter.h>

#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Runnable.h>
#include <sun/awt/windows/TranslucentWindowPainter$BIWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter$1.h>
#include <sun/awt/windows/TranslucentWindowPainter$VIWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/DestSurfaceProvider.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $TranslucentWindowPainter$VIOptWindowPainter$1 = ::sun::awt::windows::TranslucentWindowPainter$VIOptWindowPainter$1;
using $TranslucentWindowPainter$VIWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$VIWindowPainter;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $DestSurfaceProvider = ::sun::java2d::DestSurfaceProvider;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $Surface = ::sun::java2d::Surface;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _TranslucentWindowPainter$VIOptWindowPainter_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $PROTECTED, $method(static_cast<void(TranslucentWindowPainter$VIOptWindowPainter::*)($WWindowPeer*)>(&TranslucentWindowPainter$VIOptWindowPainter::init$))},
	{"update", "(Ljava/awt/Image;)Z", nullptr, $PROTECTED},
	{"updateWindowAccel", "(JII)Z", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$InnerClassInfo _TranslucentWindowPainter$VIOptWindowPainter_InnerClassesInfo_[] = {
	{"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptWindowPainter", $PRIVATE | $STATIC | $ABSTRACT},
	{"sun.awt.windows.TranslucentWindowPainter$VIWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIWindowPainter", $PRIVATE | $STATIC},
	{"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TranslucentWindowPainter$VIOptWindowPainter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter",
	"sun.awt.windows.TranslucentWindowPainter$VIWindowPainter",
	nullptr,
	nullptr,
	_TranslucentWindowPainter$VIOptWindowPainter_MethodInfo_,
	nullptr,
	nullptr,
	_TranslucentWindowPainter$VIOptWindowPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.TranslucentWindowPainter"
};

$Object* allocate$TranslucentWindowPainter$VIOptWindowPainter($Class* clazz) {
	return $of($alloc(TranslucentWindowPainter$VIOptWindowPainter));
}

void TranslucentWindowPainter$VIOptWindowPainter::init$($WWindowPeer* peer) {
	$TranslucentWindowPainter$VIWindowPainter::init$(peer);
}

bool TranslucentWindowPainter$VIOptWindowPainter::update($Image* bb) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DestSurfaceProvider, bb)) {
		$var($Surface, s, $nc(($cast($DestSurfaceProvider, bb)))->getDestSurface());
		if ($instanceOf($AccelSurface, s)) {
			$var($booleans, arr, $new($booleans, {false}));
			$var($AccelSurface, as, $cast($AccelSurface, s));
			int32_t w = $nc($($nc(as)->getBounds()))->width;
			int32_t h = $nc($(as->getBounds()))->height;
			$var($RenderQueue, rq, $nc($(as->getContext()))->getRenderQueue());
			$nc(rq)->lock();
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$BufferedContext::validateContext(as);
						rq->flushAndInvokeNow($$new($TranslucentWindowPainter$VIOptWindowPainter$1, this, as, arr, w, h));
					} catch ($InvalidPipeException& e) {
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					rq->unlock();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			return arr->get(0);
		}
	}
	return $TranslucentWindowPainter$VIWindowPainter::update(bb);
}

TranslucentWindowPainter$VIOptWindowPainter::TranslucentWindowPainter$VIOptWindowPainter() {
}

$Class* TranslucentWindowPainter$VIOptWindowPainter::load$($String* name, bool initialize) {
	$loadClass(TranslucentWindowPainter$VIOptWindowPainter, name, initialize, &_TranslucentWindowPainter$VIOptWindowPainter_ClassInfo_, allocate$TranslucentWindowPainter$VIOptWindowPainter);
	return class$;
}

$Class* TranslucentWindowPainter$VIOptWindowPainter::class$ = nullptr;

		} // windows
	} // awt
} // sun