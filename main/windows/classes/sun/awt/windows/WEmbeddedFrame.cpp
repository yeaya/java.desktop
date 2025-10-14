#include <sun/awt/windows/WEmbeddedFrame.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/FramePeer.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/image/ByteInterleavedRaster.h>
#include <sun/awt/windows/WCanvasPeer.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WEmbeddedFrame$1.h>
#include <sun/awt/windows/WEmbeddedFrame$2.h>
#include <sun/awt/windows/WEmbeddedFramePeer.h>
#include <sun/awt/windows/WFramePeer.h>
#include <sun/awt/windows/WPanelPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef MAX_BAND_SIZE
#undef TYPE_3BYTE_BGR

using $AWTEvent = ::java::awt::AWTEvent;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $FramePeer = ::java::awt::peer::FramePeer;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AppContext = ::sun::awt::AppContext;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $SunToolkit = ::sun::awt::SunToolkit;
using $ByteInterleavedRaster = ::sun::awt::image::ByteInterleavedRaster;
using $WCanvasPeer = ::sun::awt::windows::WCanvasPeer;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WEmbeddedFrame$1 = ::sun::awt::windows::WEmbeddedFrame$1;
using $WEmbeddedFrame$2 = ::sun::awt::windows::WEmbeddedFrame$2;
using $WEmbeddedFramePeer = ::sun::awt::windows::WEmbeddedFramePeer;
using $WFramePeer = ::sun::awt::windows::WFramePeer;
using $WPanelPeer = ::sun::awt::windows::WPanelPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace windows {

$CompoundAttribute _WEmbeddedFrame_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _WEmbeddedFrame_FieldInfo_[] = {
	{"handle", "J", nullptr, $PRIVATE, $field(WEmbeddedFrame, handle)},
	{"bandWidth", "I", nullptr, $PRIVATE, $field(WEmbeddedFrame, bandWidth)},
	{"bandHeight", "I", nullptr, $PRIVATE, $field(WEmbeddedFrame, bandHeight)},
	{"imgWid", "I", nullptr, $PRIVATE, $field(WEmbeddedFrame, imgWid)},
	{"imgHgt", "I", nullptr, $PRIVATE, $field(WEmbeddedFrame, imgHgt)},
	{"pScale", "I", nullptr, $PRIVATE | $STATIC, $staticField(WEmbeddedFrame, pScale)},
	{"MAX_BAND_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WEmbeddedFrame, MAX_BAND_SIZE)},
	{"isEmbeddedInIE", "Z", nullptr, $PRIVATE, $field(WEmbeddedFrame, isEmbeddedInIE)},
	{"printScale", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(WEmbeddedFrame, printScale)},
	{}
};

$MethodInfo _WEmbeddedFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WEmbeddedFrame::*)()>(&WEmbeddedFrame::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(WEmbeddedFrame::*)(int32_t)>(&WEmbeddedFrame::init$)), nullptr, nullptr, _WEmbeddedFrame_MethodAnnotations_init$1},
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(WEmbeddedFrame::*)(int64_t)>(&WEmbeddedFrame::init$))},
	{"activateEmbeddingTopLevel", "()V", nullptr, $PUBLIC},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"getEmbedderHandle", "()J", nullptr, $PUBLIC},
	{"getPrintScaleFactor", "()I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)()>(&WEmbeddedFrame::getPrintScaleFactor))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WEmbeddedFrame::initIDs))},
	{"isPrinterDC", "(J)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(WEmbeddedFrame::*)(int64_t)>(&WEmbeddedFrame::isPrinterDC))},
	{"notifyModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"notifyModalBlockedImpl", "(Lsun/awt/windows/WEmbeddedFramePeer;Lsun/awt/windows/WWindowPeer;Z)V", nullptr, $NATIVE},
	{"print", "(J)V", nullptr, 0},
	{"printBand", "(J[BIIIIIIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WEmbeddedFrame::*)(int64_t,$bytes*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&WEmbeddedFrame::printBand))},
	{"registerAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC},
	{"synthesizeWindowActivation", "(Z)V", nullptr, $PUBLIC},
	{"unregisterAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 7
#define _METHOD_INDEX_isPrinterDC 8
#define _METHOD_INDEX_notifyModalBlockedImpl 10
#define _METHOD_INDEX_printBand 12

$InnerClassInfo _WEmbeddedFrame_InnerClassesInfo_[] = {
	{"sun.awt.windows.WEmbeddedFrame$2", nullptr, nullptr, 0},
	{"sun.awt.windows.WEmbeddedFrame$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WEmbeddedFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.windows.WEmbeddedFrame",
	"sun.awt.EmbeddedFrame",
	nullptr,
	_WEmbeddedFrame_FieldInfo_,
	_WEmbeddedFrame_MethodInfo_,
	nullptr,
	nullptr,
	_WEmbeddedFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WEmbeddedFrame$2,sun.awt.windows.WEmbeddedFrame$1"
};

$Object* allocate$WEmbeddedFrame($Class* clazz) {
	return $of($alloc(WEmbeddedFrame));
}

int32_t WEmbeddedFrame::pScale = 0;
$String* WEmbeddedFrame::printScale = nullptr;

void WEmbeddedFrame::init$() {
	WEmbeddedFrame::init$((int64_t)0);
}

void WEmbeddedFrame::init$(int32_t handle) {
	WEmbeddedFrame::init$((int64_t)handle);
}

void WEmbeddedFrame::init$(int64_t handle) {
	$EmbeddedFrame::init$();
	this->bandWidth = 0;
	this->bandHeight = 0;
	this->imgWid = 0;
	this->imgHgt = 0;
	this->isEmbeddedInIE = false;
	this->handle = handle;
	if (handle != 0) {
		addNotify();
		show();
	}
}

void WEmbeddedFrame::addNotify() {
	if (!isDisplayable()) {
		$var($WToolkit, toolkit, $cast($WToolkit, $Toolkit::getDefaultToolkit()));
		setPeer($(static_cast<$ComponentPeer*>(static_cast<$WComponentPeer*>(static_cast<$WCanvasPeer*>(static_cast<$WPanelPeer*>(static_cast<$WWindowPeer*>(static_cast<$WFramePeer*>($nc(toolkit)->createEmbeddedFrame(this)))))))));
	}
	$EmbeddedFrame::addNotify();
}

int64_t WEmbeddedFrame::getEmbedderHandle() {
	return this->handle;
}

void WEmbeddedFrame::print(int64_t hdc) {
	$var($BufferedImage, bandImage, nullptr);
	int32_t xscale = 1;
	int32_t yscale = 1;
	if (isPrinterDC(hdc)) {
		xscale = (yscale = getPrintScaleFactor());
	}
	int32_t frameHeight = getHeight();
	if (bandImage == nullptr) {
		this->bandWidth = getWidth();
		if (this->bandWidth % 4 != 0) {
			this->bandWidth += (4 - (this->bandWidth % 4));
		}
		if (this->bandWidth <= 0) {
			return;
		}
		this->bandHeight = $Math::min($div(WEmbeddedFrame::MAX_BAND_SIZE, this->bandWidth), frameHeight);
		this->imgWid = this->bandWidth * xscale;
		this->imgHgt = this->bandHeight * yscale;
		$assign(bandImage, $new($BufferedImage, this->imgWid, this->imgHgt, $BufferedImage::TYPE_3BYTE_BGR));
	}
	$var($Graphics, clearGraphics, $nc(bandImage)->getGraphics());
	$init($Color);
	$nc(clearGraphics)->setColor($Color::white);
	$var($Graphics2D, g2d, $cast($Graphics2D, bandImage->getGraphics()));
	$nc(g2d)->translate(0, this->imgHgt);
	g2d->scale((double)xscale, (double)(-yscale));
	$var($ByteInterleavedRaster, ras, $cast($ByteInterleavedRaster, bandImage->getRaster()));
	$var($bytes, data, $nc(ras)->getDataStorage());
	for (int32_t bandTop = 0; bandTop < frameHeight; bandTop += this->bandHeight) {
		clearGraphics->fillRect(0, 0, this->bandWidth, this->bandHeight);
		printComponents(g2d);
		int32_t imageOffset = 0;
		int32_t currBandHeight = this->bandHeight;
		int32_t currImgHeight = this->imgHgt;
		if ((bandTop + this->bandHeight) > frameHeight) {
			currBandHeight = frameHeight - bandTop;
			currImgHeight = currBandHeight * yscale;
			imageOffset = this->imgWid * (this->imgHgt - currImgHeight) * 3;
		}
		printBand(hdc, data, imageOffset, 0, 0, this->imgWid, currImgHeight, 0, bandTop, this->bandWidth, currBandHeight);
		g2d->translate(0, -this->bandHeight);
	}
}

int32_t WEmbeddedFrame::getPrintScaleFactor() {
	$init(WEmbeddedFrame);
	$beforeCallerSensitive();
	if (WEmbeddedFrame::pScale != 0) {
		return WEmbeddedFrame::pScale;
	}
	if (WEmbeddedFrame::printScale == nullptr) {
		$assignStatic(WEmbeddedFrame::printScale, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($WEmbeddedFrame$1)))));
	}
	int32_t default_printDC_scale = 4;
	int32_t scale = default_printDC_scale;
	if (WEmbeddedFrame::printScale != nullptr) {
		try {
			scale = $Integer::parseInt(WEmbeddedFrame::printScale);
			if (scale > 8 || scale < 1) {
				scale = default_printDC_scale;
			}
		} catch ($NumberFormatException&) {
			$catch();
		}
	}
	WEmbeddedFrame::pScale = scale;
	return WEmbeddedFrame::pScale;
}

bool WEmbeddedFrame::isPrinterDC(int64_t hdc) {
	bool $ret = false;
	$prepareNative(WEmbeddedFrame, isPrinterDC, bool, int64_t hdc);
	$ret = $invokeNative(WEmbeddedFrame, isPrinterDC, hdc);
	$finishNative();
	return $ret;
}

void WEmbeddedFrame::printBand(int64_t hdc, $bytes* data, int32_t offset, int32_t sx, int32_t sy, int32_t swidth, int32_t sheight, int32_t dx, int32_t dy, int32_t dwidth, int32_t dheight) {
	$prepareNative(WEmbeddedFrame, printBand, void, int64_t hdc, $bytes* data, int32_t offset, int32_t sx, int32_t sy, int32_t swidth, int32_t sheight, int32_t dx, int32_t dy, int32_t dwidth, int32_t dheight);
	$invokeNative(WEmbeddedFrame, printBand, hdc, data, offset, sx, sy, swidth, sheight, dx, dy, dwidth, dheight);
	$finishNative();
}

void WEmbeddedFrame::initIDs() {
	$init(WEmbeddedFrame);
	$prepareNativeStatic(WEmbeddedFrame, initIDs, void);
	$invokeNativeStatic(WEmbeddedFrame, initIDs);
	$finishNativeStatic();
}

void WEmbeddedFrame::activateEmbeddingTopLevel() {
}

void WEmbeddedFrame::synthesizeWindowActivation(bool activate) {
	$var($FramePeer, peer, $cast($FramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)));
	if (!activate || $EventQueue::isDispatchThread()) {
		$nc(peer)->emulateActivation(activate);
	} else {
		$var($Runnable, r, $new($WEmbeddedFrame$2, this, peer));
		$var($AppContext, var$0, $WToolkit::targetToAppContext(this));
		$WToolkit::postEvent(var$0, $$new($InvocationEvent, this, r));
	}
}

void WEmbeddedFrame::registerAccelerator($AWTKeyStroke* stroke) {
}

void WEmbeddedFrame::unregisterAccelerator($AWTKeyStroke* stroke) {
}

void WEmbeddedFrame::notifyModalBlocked($Dialog* blocker, bool blocked) {
	try {
		$var($ComponentPeer, thisPeer, $cast($ComponentPeer, $WToolkit::targetToPeer(this)));
		$var($ComponentPeer, blockerPeer, $cast($ComponentPeer, $WToolkit::targetToPeer(blocker)));
		notifyModalBlockedImpl($cast($WEmbeddedFramePeer, thisPeer), $cast($WWindowPeer, blockerPeer), blocked);
	} catch ($Exception&) {
		$var($Exception, z, $catch());
		$init($System);
		z->printStackTrace($System::err);
	}
}

void WEmbeddedFrame::notifyModalBlockedImpl($WEmbeddedFramePeer* peer, $WWindowPeer* blockerPeer, bool blocked) {
	$prepareNative(WEmbeddedFrame, notifyModalBlockedImpl, void, $WEmbeddedFramePeer* peer, $WWindowPeer* blockerPeer, bool blocked);
	$invokeNative(WEmbeddedFrame, notifyModalBlockedImpl, peer, blockerPeer, blocked);
	$finishNative();
}

void clinit$WEmbeddedFrame($Class* class$) {
	$beforeCallerSensitive();
	{
		WEmbeddedFrame::initIDs();
	}
	WEmbeddedFrame::pScale = 0;
	$assignStatic(WEmbeddedFrame::printScale, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.print.pluginscalefactor"_s)))));
}

WEmbeddedFrame::WEmbeddedFrame() {
}

$Class* WEmbeddedFrame::load$($String* name, bool initialize) {
	$loadClass(WEmbeddedFrame, name, initialize, &_WEmbeddedFrame_ClassInfo_, clinit$WEmbeddedFrame, allocate$WEmbeddedFrame);
	return class$;
}

$Class* WEmbeddedFrame::class$ = nullptr;

		} // windows
	} // awt
} // sun