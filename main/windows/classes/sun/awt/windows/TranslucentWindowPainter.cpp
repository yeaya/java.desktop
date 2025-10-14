#include <sun/awt/windows/TranslucentWindowPainter.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Composite.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Window.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/windows/TranslucentWindowPainter$BIWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter$VIOptD3DWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter$VIOptWGLWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter.h>
#include <sun/awt/windows/TranslucentWindowPainter$VIWindowPainter.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/pipe/hw/AccelGraphicsConfig.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Composite = ::java::awt::Composite;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Window = ::java::awt::Window;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $TranslucentWindowPainter$BIWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$BIWindowPainter;
using $TranslucentWindowPainter$VIOptD3DWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$VIOptD3DWindowPainter;
using $TranslucentWindowPainter$VIOptWGLWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$VIOptWGLWindowPainter;
using $TranslucentWindowPainter$VIOptWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$VIOptWindowPainter;
using $TranslucentWindowPainter$VIWindowPainter = ::sun::awt::windows::TranslucentWindowPainter$VIWindowPainter;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $AccelGraphicsConfig = ::sun::java2d::pipe::hw::AccelGraphicsConfig;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _TranslucentWindowPainter_FieldInfo_[] = {
	{"window", "Ljava/awt/Window;", nullptr, $PROTECTED, $field(TranslucentWindowPainter, window)},
	{"peer", "Lsun/awt/windows/WWindowPeer;", nullptr, $PROTECTED, $field(TranslucentWindowPainter, peer)},
	{"forceOpt", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TranslucentWindowPainter, forceOpt)},
	{"forceSW", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TranslucentWindowPainter, forceSW)},
	{}
};

$MethodInfo _TranslucentWindowPainter_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $PROTECTED, $method(static_cast<void(TranslucentWindowPainter::*)($WWindowPeer*)>(&TranslucentWindowPainter::init$))},
	{"clearImage", "(Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$Image*(*)($Image*)>(&TranslucentWindowPainter::clearImage))},
	{"createInstance", "(Lsun/awt/windows/WWindowPeer;)Lsun/awt/windows/TranslucentWindowPainter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TranslucentWindowPainter*(*)($WWindowPeer*)>(&TranslucentWindowPainter::createInstance))},
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getBackBuffer", "(Z)Ljava/awt/Image;", nullptr, $PROTECTED | $ABSTRACT},
	{"getGraphics", "(Z)Ljava/awt/Graphics;", nullptr, $PROTECTED | $ABSTRACT},
	{"update", "(Ljava/awt/Image;)Z", nullptr, $PROTECTED | $ABSTRACT},
	{"updateWindow", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TranslucentWindowPainter_InnerClassesInfo_[] = {
	{"sun.awt.windows.TranslucentWindowPainter$VIOptWGLWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptWGLWindowPainter", $PRIVATE | $STATIC},
	{"sun.awt.windows.TranslucentWindowPainter$VIOptD3DWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptD3DWindowPainter", $PRIVATE | $STATIC},
	{"sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIOptWindowPainter", $PRIVATE | $STATIC | $ABSTRACT},
	{"sun.awt.windows.TranslucentWindowPainter$VIWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "VIWindowPainter", $PRIVATE | $STATIC},
	{"sun.awt.windows.TranslucentWindowPainter$BIWindowPainter", "sun.awt.windows.TranslucentWindowPainter", "BIWindowPainter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TranslucentWindowPainter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.awt.windows.TranslucentWindowPainter",
	"java.lang.Object",
	nullptr,
	_TranslucentWindowPainter_FieldInfo_,
	_TranslucentWindowPainter_MethodInfo_,
	nullptr,
	nullptr,
	_TranslucentWindowPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.TranslucentWindowPainter$VIOptWGLWindowPainter,sun.awt.windows.TranslucentWindowPainter$VIOptD3DWindowPainter,sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter,sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter$1,sun.awt.windows.TranslucentWindowPainter$VIWindowPainter,sun.awt.windows.TranslucentWindowPainter$BIWindowPainter"
};

$Object* allocate$TranslucentWindowPainter($Class* clazz) {
	return $of($alloc(TranslucentWindowPainter));
}

bool TranslucentWindowPainter::forceOpt = false;
bool TranslucentWindowPainter::forceSW = false;

TranslucentWindowPainter* TranslucentWindowPainter::createInstance($WWindowPeer* peer) {
	$init(TranslucentWindowPainter);
	$var($GraphicsConfiguration, gc, $nc(peer)->getGraphicsConfiguration());
	if (!TranslucentWindowPainter::forceSW && $instanceOf($AccelGraphicsConfig, gc)) {
		$var($String, gcName, $nc($of(gc))->getClass()->getSimpleName());
		$var($AccelGraphicsConfig, agc, $cast($AccelGraphicsConfig, gc));
		if (((int32_t)($nc($(agc->getContextCapabilities()))->getCaps() & (uint32_t)256)) != 0 || TranslucentWindowPainter::forceOpt) {
			if ($nc(gcName)->startsWith("D3D"_s)) {
				return $new($TranslucentWindowPainter$VIOptD3DWindowPainter, peer);
			} else {
				if (TranslucentWindowPainter::forceOpt && gcName->startsWith("WGL"_s)) {
					return $new($TranslucentWindowPainter$VIOptWGLWindowPainter, peer);
				}
			}
		}
	}
	return $new($TranslucentWindowPainter$BIWindowPainter, peer);
}

void TranslucentWindowPainter::init$($WWindowPeer* peer) {
	$set(this, peer, peer);
	$set(this, window, $cast($Window, $nc(peer)->getTarget()));
}

void TranslucentWindowPainter::updateWindow(bool repaint) {
	bool done = false;
	while (!done) {
		if (repaint) {
			$var($Graphics2D, g, $cast($Graphics2D, getGraphics(repaint)));
			{
				$var($Throwable, var$0, nullptr);
				try {
					$nc(this->window)->paintAll(g);
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					$nc(g)->dispose();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		done = update($(getBackBuffer(false)));
		if (!done) {
			repaint = true;
		}
	}
}

$Image* TranslucentWindowPainter::clearImage($Image* bb) {
	$init(TranslucentWindowPainter);
	$var($Graphics2D, g, $cast($Graphics2D, $nc(bb)->getGraphics()));
	int32_t w = bb->getWidth(nullptr);
	int32_t h = bb->getHeight(nullptr);
	$init($AlphaComposite);
	$nc(g)->setComposite($AlphaComposite::Src);
	g->setColor($$new($Color, 0, 0, 0, 0));
	g->fillRect(0, 0, w, h);
	return bb;
}

void clinit$TranslucentWindowPainter($Class* class$) {
	$beforeCallerSensitive();
	TranslucentWindowPainter::forceOpt = $nc($($Boolean::valueOf($cast($String, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.twp.forceopt"_s, "false"_s))))))))->booleanValue();
	TranslucentWindowPainter::forceSW = $nc($($Boolean::valueOf($cast($String, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.twp.forcesw"_s, "false"_s))))))))->booleanValue();
}

TranslucentWindowPainter::TranslucentWindowPainter() {
}

$Class* TranslucentWindowPainter::load$($String* name, bool initialize) {
	$loadClass(TranslucentWindowPainter, name, initialize, &_TranslucentWindowPainter_ClassInfo_, clinit$TranslucentWindowPainter, allocate$TranslucentWindowPainter);
	return class$;
}

$Class* TranslucentWindowPainter::class$ = nullptr;

		} // windows
	} // awt
} // sun