#include <sun/awt/X11/XTrayIconPeer$TrayIconCanvas.h>

#include <java/awt/Image.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/image/ImageObserver.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $TrayIcon = ::java::awt::TrayIcon;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;
using $XTrayIconPeer$IconCanvas = ::sun::awt::X11::XTrayIconPeer$IconCanvas;
using $XTrayIconPeer$IconCanvas$IconObserver = ::sun::awt::X11::XTrayIconPeer$IconCanvas$IconObserver;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTrayIconPeer$TrayIconCanvas_FieldInfo_[] = {
	{"target", "Ljava/awt/TrayIcon;", nullptr, 0, $field(XTrayIconPeer$TrayIconCanvas, target)},
	{"autosize", "Z", nullptr, 0, $field(XTrayIconPeer$TrayIconCanvas, autosize)},
	{}
};

$MethodInfo _XTrayIconPeer$TrayIconCanvas_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/TrayIcon;II)V", nullptr, 0, $method(static_cast<void(XTrayIconPeer$TrayIconCanvas::*)($TrayIcon*,int32_t,int32_t)>(&XTrayIconPeer$TrayIconCanvas::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"repaintImage", "(Z)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _XTrayIconPeer$TrayIconCanvas_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$TrayIconCanvas", "sun.awt.X11.XTrayIconPeer", "TrayIconCanvas", $STATIC},
	{"sun.awt.X11.XTrayIconPeer$IconCanvas", "sun.awt.X11.XTrayIconPeer", "IconCanvas", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XTrayIconPeer$TrayIconCanvas_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$TrayIconCanvas",
	"sun.awt.X11.XTrayIconPeer$IconCanvas",
	nullptr,
	_XTrayIconPeer$TrayIconCanvas_FieldInfo_,
	_XTrayIconPeer$TrayIconCanvas_MethodInfo_,
	nullptr,
	nullptr,
	_XTrayIconPeer$TrayIconCanvas_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$TrayIconCanvas($Class* clazz) {
	return $of($alloc(XTrayIconPeer$TrayIconCanvas));
}

void XTrayIconPeer$TrayIconCanvas::init$($TrayIcon* target, int32_t width, int32_t height) {
	$XTrayIconPeer$IconCanvas::init$(width, height);
	$set(this, target, target);
}

void XTrayIconPeer$TrayIconCanvas::repaintImage(bool doClear) {
	bool old_autosize = this->autosize;
	this->autosize = $nc(this->target)->isImageAutoSize();
	this->curW = this->autosize ? this->width : $nc(this->image)->getWidth(this->observer);
	this->curH = this->autosize ? this->height : $nc(this->image)->getHeight(this->observer);
	$XTrayIconPeer$IconCanvas::repaintImage(doClear || (old_autosize != this->autosize));
}

void XTrayIconPeer$TrayIconCanvas::dispose() {
	$XTrayIconPeer$IconCanvas::dispose();
	$set(this, target, nullptr);
}

XTrayIconPeer$TrayIconCanvas::XTrayIconPeer$TrayIconCanvas() {
}

$Class* XTrayIconPeer$TrayIconCanvas::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$TrayIconCanvas, name, initialize, &_XTrayIconPeer$TrayIconCanvas_ClassInfo_, allocate$XTrayIconPeer$TrayIconCanvas);
	return class$;
}

$Class* XTrayIconPeer$TrayIconCanvas::class$ = nullptr;

		} // X11
	} // awt
} // sun