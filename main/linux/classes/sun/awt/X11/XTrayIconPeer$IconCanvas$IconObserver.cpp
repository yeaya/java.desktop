#include <sun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver.h>

#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Runnable.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver$1.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
#include <jcpp.h>

#undef ALLBITS
#undef FRAMEBITS
#undef HEIGHT
#undef WIDTH

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XTrayIconPeer$IconCanvas = ::sun::awt::X11::XTrayIconPeer$IconCanvas;
using $XTrayIconPeer$IconCanvas$IconObserver$1 = ::sun::awt::X11::XTrayIconPeer$IconCanvas$IconObserver$1;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTrayIconPeer$IconCanvas$IconObserver_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTrayIconPeer$IconCanvas;", nullptr, $FINAL | $SYNTHETIC, $field(XTrayIconPeer$IconCanvas$IconObserver, this$0)},
	{}
};

$MethodInfo _XTrayIconPeer$IconCanvas$IconObserver_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTrayIconPeer$IconCanvas;)V", nullptr, 0, $method(static_cast<void(XTrayIconPeer$IconCanvas$IconObserver::*)($XTrayIconPeer$IconCanvas*)>(&XTrayIconPeer$IconCanvas$IconObserver::init$))},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTrayIconPeer$IconCanvas$IconObserver_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$IconCanvas", "sun.awt.X11.XTrayIconPeer", "IconCanvas", $PUBLIC | $STATIC},
	{"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver", "sun.awt.X11.XTrayIconPeer$IconCanvas", "IconObserver", 0},
	{"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XTrayIconPeer$IconCanvas$IconObserver_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver",
	"java.lang.Object",
	"java.awt.image.ImageObserver",
	_XTrayIconPeer$IconCanvas$IconObserver_FieldInfo_,
	_XTrayIconPeer$IconCanvas$IconObserver_MethodInfo_,
	nullptr,
	nullptr,
	_XTrayIconPeer$IconCanvas$IconObserver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$IconCanvas$IconObserver($Class* clazz) {
	return $of($alloc(XTrayIconPeer$IconCanvas$IconObserver));
}

void XTrayIconPeer$IconCanvas$IconObserver::init$($XTrayIconPeer$IconCanvas* this$0) {
	$set(this, this$0, this$0);
}

bool XTrayIconPeer$IconCanvas$IconObserver::imageUpdate($Image* image, int32_t flags, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (image != this->this$0->image || !this->this$0->isVisible()) {
		return false;
	}
	if (((int32_t)(flags & (uint32_t)((($ImageObserver::FRAMEBITS | $ImageObserver::ALLBITS) | $ImageObserver::WIDTH) | $ImageObserver::HEIGHT))) != 0) {
		$SunToolkit::executeOnEventHandlerThread(this->this$0, $$new($XTrayIconPeer$IconCanvas$IconObserver$1, this));
	}
	return ((int32_t)(flags & (uint32_t)$ImageObserver::ALLBITS)) == 0;
}

XTrayIconPeer$IconCanvas$IconObserver::XTrayIconPeer$IconCanvas$IconObserver() {
}

$Class* XTrayIconPeer$IconCanvas$IconObserver::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$IconCanvas$IconObserver, name, initialize, &_XTrayIconPeer$IconCanvas$IconObserver_ClassInfo_, allocate$XTrayIconPeer$IconCanvas$IconObserver);
	return class$;
}

$Class* XTrayIconPeer$IconCanvas$IconObserver::class$ = nullptr;

		} // X11
	} // awt
} // sun