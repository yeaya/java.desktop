#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>

#include <java/awt/Canvas.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <sun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $Canvas = ::java::awt::Canvas;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XTrayIconPeer$IconCanvas$IconObserver = ::sun::awt::X11::XTrayIconPeer$IconCanvas$IconObserver;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTrayIconPeer$IconCanvas_FieldInfo_[] = {
	{"image", "Ljava/awt/Image;", nullptr, $VOLATILE, $field(XTrayIconPeer$IconCanvas, image)},
	{"observer", "Lsun/awt/X11/XTrayIconPeer$IconCanvas$IconObserver;", nullptr, 0, $field(XTrayIconPeer$IconCanvas, observer)},
	{"width", "I", nullptr, 0, $field(XTrayIconPeer$IconCanvas, width)},
	{"height", "I", nullptr, 0, $field(XTrayIconPeer$IconCanvas, height)},
	{"curW", "I", nullptr, 0, $field(XTrayIconPeer$IconCanvas, curW)},
	{"curH", "I", nullptr, 0, $field(XTrayIconPeer$IconCanvas, curH)},
	{}
};

$MethodInfo _XTrayIconPeer$IconCanvas_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(XTrayIconPeer$IconCanvas::*)(int32_t,int32_t)>(&XTrayIconPeer$IconCanvas::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"repaintImage", "(Z)V", nullptr, $PROTECTED},
	{"updateImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTrayIconPeer$IconCanvas_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTrayIconPeer$IconCanvas", "sun.awt.X11.XTrayIconPeer", "IconCanvas", $PUBLIC | $STATIC},
	{"sun.awt.X11.XTrayIconPeer$IconCanvas$IconObserver", "sun.awt.X11.XTrayIconPeer$IconCanvas", "IconObserver", 0},
	{}
};

$ClassInfo _XTrayIconPeer$IconCanvas_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XTrayIconPeer$IconCanvas",
	"java.awt.Canvas",
	nullptr,
	_XTrayIconPeer$IconCanvas_FieldInfo_,
	_XTrayIconPeer$IconCanvas_MethodInfo_,
	nullptr,
	nullptr,
	_XTrayIconPeer$IconCanvas_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTrayIconPeer"
};

$Object* allocate$XTrayIconPeer$IconCanvas($Class* clazz) {
	return $of($alloc(XTrayIconPeer$IconCanvas));
}

void XTrayIconPeer$IconCanvas::init$(int32_t width, int32_t height) {
	$Canvas::init$();
	this->width = (this->curW = width);
	this->height = (this->curH = height);
}

void XTrayIconPeer$IconCanvas::updateImage($Image* image) {
	$set(this, image, image);
	if (this->observer == nullptr) {
		$set(this, observer, $new($XTrayIconPeer$IconCanvas$IconObserver, this));
	}
	repaintImage(true);
}

void XTrayIconPeer$IconCanvas::dispose() {
	$set(this, observer, nullptr);
}

void XTrayIconPeer$IconCanvas::repaintImage(bool doClear) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, getGraphics());
	if (g != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (isVisible()) {
					if (doClear) {
						update(g);
					} else {
						paint(g);
					}
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				g->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void XTrayIconPeer$IconCanvas::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (g != nullptr && this->curW > 0 && this->curH > 0) {
		$var($BufferedImage, bufImage, $new($BufferedImage, this->curW, this->curH, $BufferedImage::TYPE_INT_ARGB));
		$var($Graphics2D, gr, bufImage->createGraphics());
		if (gr != nullptr) {
			{
				$var($Throwable, var$0, nullptr);
				try {
					gr->setColor($(getBackground()));
					gr->fillRect(0, 0, this->curW, this->curH);
					gr->drawImage(this->image, 0, 0, this->curW, this->curH, this->observer);
					gr->dispose();
					g->drawImage(bufImage, 0, 0, this->curW, this->curH, nullptr);
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					gr->dispose();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

XTrayIconPeer$IconCanvas::XTrayIconPeer$IconCanvas() {
}

$Class* XTrayIconPeer$IconCanvas::load$($String* name, bool initialize) {
	$loadClass(XTrayIconPeer$IconCanvas, name, initialize, &_XTrayIconPeer$IconCanvas_ClassInfo_, allocate$XTrayIconPeer$IconCanvas);
	return class$;
}

$Class* XTrayIconPeer$IconCanvas::class$ = nullptr;

		} // X11
	} // awt
} // sun