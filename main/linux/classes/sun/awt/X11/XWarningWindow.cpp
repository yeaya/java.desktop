#include <sun/awt/X11/XWarningWindow.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Window.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/AWTAccessor$WindowAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTIcon32_security_icon_bw16_png.h>
#include <sun/awt/AWTIcon32_security_icon_bw24_png.h>
#include <sun/awt/AWTIcon32_security_icon_bw32_png.h>
#include <sun/awt/AWTIcon32_security_icon_bw48_png.h>
#include <sun/awt/AWTIcon32_security_icon_interim16_png.h>
#include <sun/awt/AWTIcon32_security_icon_interim24_png.h>
#include <sun/awt/AWTIcon32_security_icon_interim32_png.h>
#include <sun/awt/AWTIcon32_security_icon_interim48_png.h>
#include <sun/awt/AWTIcon32_security_icon_yellow16_png.h>
#include <sun/awt/AWTIcon32_security_icon_yellow24_png.h>
#include <sun/awt/AWTIcon32_security_icon_yellow32_png.h>
#include <sun/awt/AWTIcon32_security_icon_yellow48_png.h>
#include <sun/awt/AWTIcon64_security_icon_bw16_png.h>
#include <sun/awt/AWTIcon64_security_icon_bw24_png.h>
#include <sun/awt/AWTIcon64_security_icon_bw32_png.h>
#include <sun/awt/AWTIcon64_security_icon_bw48_png.h>
#include <sun/awt/AWTIcon64_security_icon_interim16_png.h>
#include <sun/awt/AWTIcon64_security_icon_interim24_png.h>
#include <sun/awt/AWTIcon64_security_icon_interim32_png.h>
#include <sun/awt/AWTIcon64_security_icon_interim48_png.h>
#include <sun/awt/AWTIcon64_security_icon_yellow16_png.h>
#include <sun/awt/AWTIcon64_security_icon_yellow24_png.h>
#include <sun/awt/AWTIcon64_security_icon_yellow32_png.h>
#include <sun/awt/AWTIcon64_security_icon_yellow48_png.h>
#include <sun/awt/IconInfo.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/InfoWindow$Tooltip$LiveArguments.h>
#include <sun/awt/X11/InfoWindow$Tooltip.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XExposeEvent.h>
#include <sun/awt/X11/XNETProtocol.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XUnmapEvent.h>
#include <sun/awt/X11/XUtilConstants.h>
#include <sun/awt/X11/XWM.h>
#include <sun/awt/X11/XWMHints.h>
#include <sun/awt/X11/XWarningWindow$1.h>
#include <sun/awt/X11/XWarningWindow$2.h>
#include <sun/awt/X11/XWarningWindow$3.h>
#include <sun/awt/X11/XWarningWindow$4.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

#undef HIDING_DELAY
#undef OWNER
#undef SHOWING_DELAY
#undef TARGET
#undef XA_NET_WM_STATE_SKIP_TASKBAR

using $IconInfoArray = $Array<::sun::awt::IconInfo>;
using $IconInfoArray2 = $Array<::sun::awt::IconInfo, 2>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $SystemColor = ::java::awt::SystemColor;
using $Window = ::java::awt::Window;
using $Point2D = ::java::awt::geom::Point2D;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $HashMap = ::java::util::HashMap;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$WindowAccessor = ::sun::awt::AWTAccessor$WindowAccessor;
using $AWTIcon32_security_icon_bw16_png = ::sun::awt::AWTIcon32_security_icon_bw16_png;
using $AWTIcon32_security_icon_bw24_png = ::sun::awt::AWTIcon32_security_icon_bw24_png;
using $AWTIcon32_security_icon_bw32_png = ::sun::awt::AWTIcon32_security_icon_bw32_png;
using $AWTIcon32_security_icon_bw48_png = ::sun::awt::AWTIcon32_security_icon_bw48_png;
using $AWTIcon32_security_icon_interim16_png = ::sun::awt::AWTIcon32_security_icon_interim16_png;
using $AWTIcon32_security_icon_interim24_png = ::sun::awt::AWTIcon32_security_icon_interim24_png;
using $AWTIcon32_security_icon_interim32_png = ::sun::awt::AWTIcon32_security_icon_interim32_png;
using $AWTIcon32_security_icon_interim48_png = ::sun::awt::AWTIcon32_security_icon_interim48_png;
using $AWTIcon32_security_icon_yellow16_png = ::sun::awt::AWTIcon32_security_icon_yellow16_png;
using $AWTIcon32_security_icon_yellow24_png = ::sun::awt::AWTIcon32_security_icon_yellow24_png;
using $AWTIcon32_security_icon_yellow32_png = ::sun::awt::AWTIcon32_security_icon_yellow32_png;
using $AWTIcon32_security_icon_yellow48_png = ::sun::awt::AWTIcon32_security_icon_yellow48_png;
using $AWTIcon64_security_icon_bw16_png = ::sun::awt::AWTIcon64_security_icon_bw16_png;
using $AWTIcon64_security_icon_bw24_png = ::sun::awt::AWTIcon64_security_icon_bw24_png;
using $AWTIcon64_security_icon_bw32_png = ::sun::awt::AWTIcon64_security_icon_bw32_png;
using $AWTIcon64_security_icon_bw48_png = ::sun::awt::AWTIcon64_security_icon_bw48_png;
using $AWTIcon64_security_icon_interim16_png = ::sun::awt::AWTIcon64_security_icon_interim16_png;
using $AWTIcon64_security_icon_interim24_png = ::sun::awt::AWTIcon64_security_icon_interim24_png;
using $AWTIcon64_security_icon_interim32_png = ::sun::awt::AWTIcon64_security_icon_interim32_png;
using $AWTIcon64_security_icon_interim48_png = ::sun::awt::AWTIcon64_security_icon_interim48_png;
using $AWTIcon64_security_icon_yellow16_png = ::sun::awt::AWTIcon64_security_icon_yellow16_png;
using $AWTIcon64_security_icon_yellow24_png = ::sun::awt::AWTIcon64_security_icon_yellow24_png;
using $AWTIcon64_security_icon_yellow32_png = ::sun::awt::AWTIcon64_security_icon_yellow32_png;
using $AWTIcon64_security_icon_yellow48_png = ::sun::awt::AWTIcon64_security_icon_yellow48_png;
using $IconInfo = ::sun::awt::IconInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $InfoWindow$Tooltip = ::sun::awt::X11::InfoWindow$Tooltip;
using $InfoWindow$Tooltip$LiveArguments = ::sun::awt::X11::InfoWindow$Tooltip$LiveArguments;
using $XAtom = ::sun::awt::X11::XAtom;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XEvent = ::sun::awt::X11::XEvent;
using $XExposeEvent = ::sun::awt::X11::XExposeEvent;
using $XNETProtocol = ::sun::awt::X11::XNETProtocol;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XUnmapEvent = ::sun::awt::X11::XUnmapEvent;
using $XUtilConstants = ::sun::awt::X11::XUtilConstants;
using $XWM = ::sun::awt::X11::XWM;
using $XWMHints = ::sun::awt::X11::XWMHints;
using $XWarningWindow$1 = ::sun::awt::X11::XWarningWindow$1;
using $XWarningWindow$2 = ::sun::awt::X11::XWarningWindow$2;
using $XWarningWindow$3 = ::sun::awt::X11::XWarningWindow$3;
using $XWarningWindow$4 = ::sun::awt::X11::XWarningWindow$4;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWarningWindow_FieldInfo_[] = {
	{"SHOWING_DELAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XWarningWindow, SHOWING_DELAY)},
	{"HIDING_DELAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XWarningWindow, HIDING_DELAY)},
	{"ownerWindow", "Ljava/awt/Window;", nullptr, $PRIVATE | $FINAL, $field(XWarningWindow, ownerWindow)},
	{"ownerPeer", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/awt/X11/XWindowPeer;>;", $PRIVATE, $field(XWarningWindow, ownerPeer)},
	{"parentWindow", "J", nullptr, $PRIVATE, $field(XWarningWindow, parentWindow)},
	{"OWNER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XWarningWindow, OWNER)},
	{"tooltip", "Lsun/awt/X11/InfoWindow$Tooltip;", nullptr, $PRIVATE, $field(XWarningWindow, tooltip)},
	{"currentIcon", "I", nullptr, $PRIVATE | $VOLATILE, $field(XWarningWindow, currentIcon)},
	{"currentSize", "I", nullptr, $PRIVATE, $field(XWarningWindow, currentSize)},
	{"icons", "[[Lsun/awt/IconInfo;", nullptr, $PRIVATE | $STATIC, $staticField(XWarningWindow, icons)},
	{"hidingTask", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(XWarningWindow, hidingTask)},
	{"showingTask", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(XWarningWindow, showingTask)},
	{}
};

$MethodInfo _XWarningWindow_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Window;JLsun/awt/X11/XWindowPeer;)V", nullptr, 0, $method(static_cast<void(XWarningWindow::*)($Window*,int64_t,$XWindowPeer*)>(&XWarningWindow::init$))},
	{"enterNotify", "(J)V", nullptr, $PROTECTED},
	{"getBackground", "()Ljava/awt/Color;", nullptr, 0},
	{"getColor", "()Ljava/awt/Color;", nullptr, 0},
	{"getFont", "()Ljava/awt/Font;", nullptr, 0},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, 0},
	{"getSecurityIconInfo", "(II)Lsun/awt/IconInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$IconInfo*(*)(int32_t,int32_t)>(&XWarningWindow::getSecurityIconInfo))},
	{"getSecurityIconInfo", "()Lsun/awt/IconInfo;", nullptr, $PRIVATE, $method(static_cast<$IconInfo*(XWarningWindow::*)()>(&XWarningWindow::getSecurityIconInfo))},
	{"getWMName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getWarningString", "()Ljava/lang/String;", nullptr, 0},
	{"getWidth", "()I", nullptr, 0},
	{"handleExposeEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"isEventDisabled", "(Lsun/awt/X11/XEvent;)Z", nullptr, $PROTECTED},
	{"leaveNotify", "(J)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;IIII)V", nullptr, 0},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"repaint", "()V", nullptr, $PUBLIC},
	{"reposition", "(IIII)V", nullptr, $PUBLIC},
	{"requestNoTaskbar", "()V", nullptr, $PRIVATE, $method(static_cast<void(XWarningWindow::*)()>(&XWarningWindow::requestNoTaskbar))},
	{"setMouseAbove", "(Z)V", nullptr, $PROTECTED},
	{"setSecurityWarningVisible", "(ZZ)V", nullptr, $PUBLIC},
	{"stateChanged", "(JII)V", nullptr, $PROTECTED},
	{"updateIconSize", "()V", nullptr, $PRIVATE, $method(static_cast<void(XWarningWindow::*)()>(&XWarningWindow::updateIconSize))},
	{"withdraw", "()V", nullptr, $PRIVATE, $method(static_cast<void(XWarningWindow::*)()>(&XWarningWindow::withdraw))},
	{"xSetVisible", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XWarningWindow_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWarningWindow$4", nullptr, nullptr, 0},
	{"sun.awt.X11.XWarningWindow$3", nullptr, nullptr, 0},
	{"sun.awt.X11.XWarningWindow$2", nullptr, nullptr, 0},
	{"sun.awt.X11.XWarningWindow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XWarningWindow_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWarningWindow",
	"sun.awt.X11.XWindow",
	nullptr,
	_XWarningWindow_FieldInfo_,
	_XWarningWindow_MethodInfo_,
	nullptr,
	nullptr,
	_XWarningWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XWarningWindow$4,sun.awt.X11.XWarningWindow$3,sun.awt.X11.XWarningWindow$2,sun.awt.X11.XWarningWindow$1"
};

$Object* allocate$XWarningWindow($Class* clazz) {
	return $of($alloc(XWarningWindow));
}

$String* XWarningWindow::OWNER = nullptr;
$IconInfoArray2* XWarningWindow::icons = nullptr;

$IconInfo* XWarningWindow::getSecurityIconInfo(int32_t size, int32_t num) {
	$init(XWarningWindow);
	$useLocalCurrentObjectStackCache();
	$synchronized(XWarningWindow::class$) {
		if (XWarningWindow::icons == nullptr) {
			$assignStatic(XWarningWindow::icons, $new($IconInfoArray2, 4, 3));
			$init($XlibWrapper);
			if ($XlibWrapper::dataModel == 32) {
				$init($AWTIcon32_security_icon_bw16_png);
				$nc($nc(XWarningWindow::icons)->get(0))->set(0, $$new($IconInfo, $AWTIcon32_security_icon_bw16_png::security_icon_bw16_png));
				$init($AWTIcon32_security_icon_interim16_png);
				$nc($nc(XWarningWindow::icons)->get(0))->set(1, $$new($IconInfo, $AWTIcon32_security_icon_interim16_png::security_icon_interim16_png));
				$init($AWTIcon32_security_icon_yellow16_png);
				$nc($nc(XWarningWindow::icons)->get(0))->set(2, $$new($IconInfo, $AWTIcon32_security_icon_yellow16_png::security_icon_yellow16_png));
				$init($AWTIcon32_security_icon_bw24_png);
				$nc($nc(XWarningWindow::icons)->get(1))->set(0, $$new($IconInfo, $AWTIcon32_security_icon_bw24_png::security_icon_bw24_png));
				$init($AWTIcon32_security_icon_interim24_png);
				$nc($nc(XWarningWindow::icons)->get(1))->set(1, $$new($IconInfo, $AWTIcon32_security_icon_interim24_png::security_icon_interim24_png));
				$init($AWTIcon32_security_icon_yellow24_png);
				$nc($nc(XWarningWindow::icons)->get(1))->set(2, $$new($IconInfo, $AWTIcon32_security_icon_yellow24_png::security_icon_yellow24_png));
				$init($AWTIcon32_security_icon_bw32_png);
				$nc($nc(XWarningWindow::icons)->get(2))->set(0, $$new($IconInfo, $AWTIcon32_security_icon_bw32_png::security_icon_bw32_png));
				$init($AWTIcon32_security_icon_interim32_png);
				$nc($nc(XWarningWindow::icons)->get(2))->set(1, $$new($IconInfo, $AWTIcon32_security_icon_interim32_png::security_icon_interim32_png));
				$init($AWTIcon32_security_icon_yellow32_png);
				$nc($nc(XWarningWindow::icons)->get(2))->set(2, $$new($IconInfo, $AWTIcon32_security_icon_yellow32_png::security_icon_yellow32_png));
				$init($AWTIcon32_security_icon_bw48_png);
				$nc($nc(XWarningWindow::icons)->get(3))->set(0, $$new($IconInfo, $AWTIcon32_security_icon_bw48_png::security_icon_bw48_png));
				$init($AWTIcon32_security_icon_interim48_png);
				$nc($nc(XWarningWindow::icons)->get(3))->set(1, $$new($IconInfo, $AWTIcon32_security_icon_interim48_png::security_icon_interim48_png));
				$init($AWTIcon32_security_icon_yellow48_png);
				$nc($nc(XWarningWindow::icons)->get(3))->set(2, $$new($IconInfo, $AWTIcon32_security_icon_yellow48_png::security_icon_yellow48_png));
			} else {
				$init($AWTIcon64_security_icon_bw16_png);
				$nc($nc(XWarningWindow::icons)->get(0))->set(0, $$new($IconInfo, $AWTIcon64_security_icon_bw16_png::security_icon_bw16_png));
				$init($AWTIcon64_security_icon_interim16_png);
				$nc($nc(XWarningWindow::icons)->get(0))->set(1, $$new($IconInfo, $AWTIcon64_security_icon_interim16_png::security_icon_interim16_png));
				$init($AWTIcon64_security_icon_yellow16_png);
				$nc($nc(XWarningWindow::icons)->get(0))->set(2, $$new($IconInfo, $AWTIcon64_security_icon_yellow16_png::security_icon_yellow16_png));
				$init($AWTIcon64_security_icon_bw24_png);
				$nc($nc(XWarningWindow::icons)->get(1))->set(0, $$new($IconInfo, $AWTIcon64_security_icon_bw24_png::security_icon_bw24_png));
				$init($AWTIcon64_security_icon_interim24_png);
				$nc($nc(XWarningWindow::icons)->get(1))->set(1, $$new($IconInfo, $AWTIcon64_security_icon_interim24_png::security_icon_interim24_png));
				$init($AWTIcon64_security_icon_yellow24_png);
				$nc($nc(XWarningWindow::icons)->get(1))->set(2, $$new($IconInfo, $AWTIcon64_security_icon_yellow24_png::security_icon_yellow24_png));
				$init($AWTIcon64_security_icon_bw32_png);
				$nc($nc(XWarningWindow::icons)->get(2))->set(0, $$new($IconInfo, $AWTIcon64_security_icon_bw32_png::security_icon_bw32_png));
				$init($AWTIcon64_security_icon_interim32_png);
				$nc($nc(XWarningWindow::icons)->get(2))->set(1, $$new($IconInfo, $AWTIcon64_security_icon_interim32_png::security_icon_interim32_png));
				$init($AWTIcon64_security_icon_yellow32_png);
				$nc($nc(XWarningWindow::icons)->get(2))->set(2, $$new($IconInfo, $AWTIcon64_security_icon_yellow32_png::security_icon_yellow32_png));
				$init($AWTIcon64_security_icon_bw48_png);
				$nc($nc(XWarningWindow::icons)->get(3))->set(0, $$new($IconInfo, $AWTIcon64_security_icon_bw48_png::security_icon_bw48_png));
				$init($AWTIcon64_security_icon_interim48_png);
				$nc($nc(XWarningWindow::icons)->get(3))->set(1, $$new($IconInfo, $AWTIcon64_security_icon_interim48_png::security_icon_interim48_png));
				$init($AWTIcon64_security_icon_yellow48_png);
				$nc($nc(XWarningWindow::icons)->get(3))->set(2, $$new($IconInfo, $AWTIcon64_security_icon_yellow48_png::security_icon_yellow48_png));
			}
		}
	}
	int32_t sizeIndex = $mod(size, $nc(XWarningWindow::icons)->length);
	return $nc($nc(XWarningWindow::icons)->get(sizeIndex))->get($mod(num, $nc($nc(XWarningWindow::icons)->get(sizeIndex))->length));
}

void XWarningWindow::updateIconSize() {
	$useLocalCurrentObjectStackCache();
	int32_t newSize = -1;
	if (this->ownerWindow != nullptr) {
		$var($Insets, insets, $nc(this->ownerWindow)->getInsets());
		int32_t max = $Math::max($nc(insets)->top, $Math::max(insets->bottom, $Math::max(insets->left, insets->right)));
		if (max < 24) {
			newSize = 0;
		} else if (max < 32) {
			newSize = 1;
		} else if (max < 48) {
			newSize = 2;
		} else {
			newSize = 3;
		}
	}
	if (newSize == -1) {
		newSize = 0;
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (newSize != this->currentSize) {
				this->currentSize = newSize;
				$var($IconInfo, ico, getSecurityIconInfo(this->currentSize, 0));
				int64_t var$1 = $XToolkit::getDisplay();
				int64_t var$2 = getWindow();
				int32_t var$3 = $nc(ico)->getWidth();
				int32_t var$4 = ico->getHeight();
				$XlibWrapper::SetBitmapShape(var$1, var$2, var$3, var$4, $(ico->getIntData()));
				$var($Window, var$5, this->ownerWindow);
				int32_t var$6 = $nc(ico)->getWidth();
				$nc($($AWTAccessor::getWindowAccessor()))->setSecurityWarningSize(var$5, var$6, ico->getHeight());
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$IconInfo* XWarningWindow::getSecurityIconInfo() {
	updateIconSize();
	return getSecurityIconInfo(this->currentSize, this->currentIcon);
}

void XWarningWindow::init$($Window* ownerWindow, int64_t parentWindow, $XWindowPeer* ownerPeer) {
	$useLocalCurrentObjectStackCache();
	$init($XWindow);
	$XWindow::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of($XWindow::TARGET),
		$of(ownerWindow),
		$of(XWarningWindow::OWNER),
		$($of($Long::valueOf(parentWindow)))
	})));
	this->currentIcon = 0;
	this->currentSize = -1;
	$set(this, hidingTask, $new($XWarningWindow$3, this));
	$set(this, showingTask, $new($XWarningWindow$4, this));
	$set(this, ownerWindow, ownerWindow);
	this->parentWindow = parentWindow;
	$var($Object, var$0, getTarget());
	$set(this, tooltip, $new($InfoWindow$Tooltip, nullptr, var$0, $$new($XWarningWindow$1, this)));
	$set(this, ownerPeer, $new($WeakReference, ownerPeer));
}

void XWarningWindow::requestNoTaskbar() {
	$useLocalCurrentObjectStackCache();
	$var($XNETProtocol, netProtocol, $nc($($XWM::getWM()))->getNETProtocol());
	if (netProtocol != nullptr) {
		netProtocol->requestState(this, netProtocol->XA_NET_WM_STATE_SKIP_TASKBAR, true);
	}
}

void XWarningWindow::postInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XWindow::postInit(params);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XWM::setMotifDecor(this, false, 0, 0);
			$XWM::setOLDecor(this, false, 0);
			int64_t parentWindow = $nc(($cast($Long, $($nc(params)->get(XWarningWindow::OWNER)))))->longValue();
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XSetTransientFor(var$1, getWindow(), parentWindow);
			$var($XWMHints, hints, getWMHints());
			$nc(hints)->set_flags((hints->get_flags() | (int32_t)$XUtilConstants::InputHint) | (int32_t)$XUtilConstants::StateHint);
			hints->set_input(false);
			hints->set_initial_state($XUtilConstants::NormalState);
			int64_t var$2 = $XToolkit::getDisplay();
			$XlibWrapper::XSetWMHints(var$2, getWindow(), hints->pData);
			initWMProtocols();
			requestNoTaskbar();
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XWarningWindow::reposition(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Point2D, point, $nc($($AWTAccessor::getWindowAccessor()))->calculateSecurityWarningPosition(this->ownerWindow, (double)x, (double)y, (double)w, (double)h));
	int32_t var$0 = $cast(int32_t, $nc(point)->getX());
	int32_t var$1 = $cast(int32_t, point->getY());
	int32_t var$2 = getWidth();
	reshape(var$0, var$1, var$2, getHeight());
}

$String* XWarningWindow::getWMName() {
	return "Warning window"_s;
}

$Graphics* XWarningWindow::getGraphics() {
	$useLocalCurrentObjectStackCache();
	if ((this->surfaceData == nullptr) || (this->ownerWindow == nullptr)) {
		return nullptr;
	}
	$var($SurfaceData, var$0, this->surfaceData);
	$var($Color, var$1, getColor());
	$var($Color, var$2, getBackground());
	return getGraphics(var$0, var$1, var$2, $(getFont()));
}

void XWarningWindow::paint($Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->drawImage($($nc($(getSecurityIconInfo()))->getImage()), 0, 0, nullptr);
}

$String* XWarningWindow::getWarningString() {
	return $nc(this->ownerWindow)->getWarningString();
}

int32_t XWarningWindow::getWidth() {
	return $nc($(getSecurityIconInfo()))->getWidth();
}

int32_t XWarningWindow::getHeight() {
	return $nc($(getSecurityIconInfo()))->getHeight();
}

$Color* XWarningWindow::getBackground() {
	$init($SystemColor);
	return $SystemColor::window;
}

$Color* XWarningWindow::getColor() {
	$init($Color);
	return $Color::black;
}

$Font* XWarningWindow::getFont() {
	return $nc(this->ownerWindow)->getFont();
}

void XWarningWindow::repaint() {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, bounds, getBounds());
	$var($Graphics, g, getGraphics());
	if (g != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				paint(g, 0, 0, $nc(bounds)->width, bounds->height);
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

void XWarningWindow::handleExposeEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$XWindow::handleExposeEvent(xev);
	$var($XExposeEvent, xe, $nc(xev)->get_xexpose());
	int32_t x = scaleDown($nc(xe)->get_x());
	int32_t y = scaleDown($nc(xe)->get_y());
	int32_t width = scaleDown($nc(xe)->get_width());
	int32_t height = scaleDown($nc(xe)->get_height());
	$SunToolkit::executeOnEventHandlerThread(this->target, $$new($XWarningWindow$2, this, x, y, width, height));
}

bool XWarningWindow::isEventDisabled($XEvent* e) {
	return true;
}

void XWarningWindow::withdraw() {
	$useLocalCurrentObjectStackCache();
	$var($XEvent, req, $new($XEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t root = 0;
			$XToolkit::awtLock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					int64_t var$2 = $XToolkit::getDisplay();
					root = $XlibWrapper::RootWindow(var$2, getScreenNumber());
				} catch ($Throwable& var$3) {
					$assign(var$1, var$3);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
			req->set_type($XConstants::UnmapNotify);
			$var($XUnmapEvent, umev, req->get_xunmap());
			$nc(umev)->set_event(root);
			umev->set_window(getWindow());
			umev->set_from_configure(false);
			$XToolkit::awtLock();
			{
				$var($Throwable, var$4, nullptr);
				try {
					$XlibWrapper::XSendEvent($XToolkit::getDisplay(), root, false, $XConstants::SubstructureRedirectMask | $XConstants::SubstructureNotifyMask, req->pData);
				} catch ($Throwable& var$5) {
					$assign(var$4, var$5);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$4 != nullptr) {
					$throw(var$4);
				}
			}
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} /*finally*/ {
			req->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XWarningWindow::stateChanged(int64_t time, int32_t oldState, int32_t newState) {
	if (newState == $XUtilConstants::IconicState) {
		$XWindow::xSetVisible(false);
		withdraw();
	}
}

void XWarningWindow::setMouseAbove(bool above) {
	$XWindow::setMouseAbove(above);
	$var($XWindowPeer, p, $cast($XWindowPeer, $nc(this->ownerPeer)->get()));
	if (p != nullptr) {
		p->updateSecurityWarningVisibility();
	}
}

void XWarningWindow::enterNotify(int64_t window) {
	$XWindow::enterNotify(window);
	if (window == getWindow()) {
		$nc(this->tooltip)->enter();
	}
}

void XWarningWindow::leaveNotify(int64_t window) {
	$XWindow::leaveNotify(window);
	if (window == getWindow()) {
		$nc(this->tooltip)->exit();
	}
}

void XWarningWindow::xSetVisible(bool visible) {
	$XWindow::xSetVisible(visible);
	requestNoTaskbar();
}

void XWarningWindow::setSecurityWarningVisible(bool visible, bool doSchedule) {
	if (visible) {
		$XToolkit::remove(this->hidingTask);
		$XToolkit::remove(this->showingTask);
		if (isVisible()) {
			this->currentIcon = 0;
		} else {
			this->currentIcon = 3;
		}
		if (doSchedule) {
			$XToolkit::schedule(this->showingTask, 1);
		} else {
			$nc(this->showingTask)->run();
		}
	} else {
		$XToolkit::remove(this->showingTask);
		$XToolkit::remove(this->hidingTask);
		if (!isVisible()) {
			return;
		}
		if (doSchedule) {
			$XToolkit::schedule(this->hidingTask, XWarningWindow::HIDING_DELAY);
		} else {
			$nc(this->hidingTask)->run();
		}
	}
}

XWarningWindow::XWarningWindow() {
}

void clinit$XWarningWindow($Class* class$) {
	$assignStatic(XWarningWindow::OWNER, "OWNER"_s);
}

$Class* XWarningWindow::load$($String* name, bool initialize) {
	$loadClass(XWarningWindow, name, initialize, &_XWarningWindow_ClassInfo_, clinit$XWarningWindow, allocate$XWarningWindow);
	return class$;
}

$Class* XWarningWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun