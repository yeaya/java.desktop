#include <sun/awt/windows/WTrayIconPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Point.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/Window.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WPopupMenuPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WTrayIconPeer$IconObserver.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef TRAY_ICON_HEIGHT
#undef TRAY_ICON_MASK_SIZE
#undef TRAY_ICON_WIDTH
#undef TYPE_INT_ARGB

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Menu = ::java::awt::Menu;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $Point = ::java::awt::Point;
using $PopupMenu = ::java::awt::PopupMenu;
using $TrayIcon = ::java::awt::TrayIcon;
using $Window = ::java::awt::Window;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WPopupMenuPeer = ::sun::awt::windows::WPopupMenuPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WTrayIconPeer$IconObserver = ::sun::awt::windows::WTrayIconPeer$IconObserver;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

class WTrayIconPeer$$Lambda$lambda$showPopupMenu$0 : public $Runnable {
	$class(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(WTrayIconPeer* inst, int32_t x, int32_t y) {
		$set(this, inst$, inst);
		this->x = x;
		this->y = y;
	}
	virtual void run() override {
		$nc(inst$)->lambda$showPopupMenu$0(x, y);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WTrayIconPeer$$Lambda$lambda$showPopupMenu$0>());
	}
	WTrayIconPeer* inst$ = nullptr;
	int32_t x = 0;
	int32_t y = 0;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WTrayIconPeer$$Lambda$lambda$showPopupMenu$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, inst$)},
	{"x", "I", nullptr, $PUBLIC, $field(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, x)},
	{"y", "I", nullptr, $PUBLIC, $field(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, y)},
	{}
};
$MethodInfo WTrayIconPeer$$Lambda$lambda$showPopupMenu$0::methodInfos[3] = {
	{"<init>", "(Lsun/awt/windows/WTrayIconPeer;II)V", nullptr, $PUBLIC, $method(static_cast<void(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0::*)(WTrayIconPeer*,int32_t,int32_t)>(&WTrayIconPeer$$Lambda$lambda$showPopupMenu$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WTrayIconPeer$$Lambda$lambda$showPopupMenu$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.windows.WTrayIconPeer$$Lambda$lambda$showPopupMenu$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* WTrayIconPeer$$Lambda$lambda$showPopupMenu$0::load$($String* name, bool initialize) {
	$loadClass(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WTrayIconPeer$$Lambda$lambda$showPopupMenu$0::class$ = nullptr;

$FieldInfo _WTrayIconPeer_FieldInfo_[] = {
	{"TRAY_ICON_WIDTH", "I", nullptr, $STATIC | $FINAL, $constField(WTrayIconPeer, TRAY_ICON_WIDTH)},
	{"TRAY_ICON_HEIGHT", "I", nullptr, $STATIC | $FINAL, $constField(WTrayIconPeer, TRAY_ICON_HEIGHT)},
	{"TRAY_ICON_MASK_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(WTrayIconPeer, TRAY_ICON_MASK_SIZE)},
	{"observer", "Lsun/awt/windows/WTrayIconPeer$IconObserver;", nullptr, 0, $field(WTrayIconPeer, observer)},
	{"firstUpdate", "Z", nullptr, 0, $field(WTrayIconPeer, firstUpdate)},
	{"popupParent", "Ljava/awt/Frame;", nullptr, 0, $field(WTrayIconPeer, popupParent)},
	{"popup", "Ljava/awt/PopupMenu;", nullptr, 0, $field(WTrayIconPeer, popup)},
	{}
};

$MethodInfo _WTrayIconPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/TrayIcon;)V", nullptr, 0, $method(static_cast<void(WTrayIconPeer::*)($TrayIcon*)>(&WTrayIconPeer::init$))},
	{"_displayMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $NATIVE, $method(static_cast<void(WTrayIconPeer::*)($String*,$String*,$String*)>(&WTrayIconPeer::_displayMessage))},
	{"_dispose", "()V", nullptr, $SYNCHRONIZED | $NATIVE, $method(static_cast<void(WTrayIconPeer::*)()>(&WTrayIconPeer::_dispose))},
	{"create", "()V", nullptr, $NATIVE, $method(static_cast<void(WTrayIconPeer::*)()>(&WTrayIconPeer::create))},
	{"createNativeImage", "(Ljava/awt/image/BufferedImage;)V", nullptr, 0, $method(static_cast<void(WTrayIconPeer::*)($BufferedImage*)>(&WTrayIconPeer::createNativeImage))},
	{"displayMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"disposeImpl", "()V", nullptr, $PROTECTED},
	{"lambda$showPopupMenu$0", "(II)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(WTrayIconPeer::*)(int32_t,int32_t)>(&WTrayIconPeer::lambda$showPopupMenu$0))},
	{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0, $method(static_cast<void(WTrayIconPeer::*)($AWTEvent*)>(&WTrayIconPeer::postEvent))},
	{"setNativeIcon", "([I[BIII)V", nullptr, $NATIVE, $method(static_cast<void(WTrayIconPeer::*)($ints*,$bytes*,int32_t,int32_t,int32_t)>(&WTrayIconPeer::setNativeIcon))},
	{"setToolTip", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $NATIVE},
	{"showPopupMenu", "(II)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateImage", "()V", nullptr, $PUBLIC},
	{"updateNativeIcon", "(Z)V", nullptr, $NATIVE, $method(static_cast<void(WTrayIconPeer::*)(bool)>(&WTrayIconPeer::updateNativeIcon))},
	{"updateNativeImage", "(Ljava/awt/Image;)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(WTrayIconPeer::*)($Image*)>(&WTrayIconPeer::updateNativeImage))},
	{}
};

#define _METHOD_INDEX__displayMessage 6
#define _METHOD_INDEX__dispose 7
#define _METHOD_INDEX_create 8
#define _METHOD_INDEX_setNativeIcon 14
#define _METHOD_INDEX_setToolTip 15
#define _METHOD_INDEX_updateNativeIcon 19

$InnerClassInfo _WTrayIconPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WTrayIconPeer$IconObserver", "sun.awt.windows.WTrayIconPeer", "IconObserver", 0},
	{}
};

$ClassInfo _WTrayIconPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WTrayIconPeer",
	"sun.awt.windows.WObjectPeer",
	"java.awt.peer.TrayIconPeer",
	_WTrayIconPeer_FieldInfo_,
	_WTrayIconPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WTrayIconPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WTrayIconPeer$IconObserver"
};

$Object* allocate$WTrayIconPeer($Class* clazz) {
	return $of($alloc(WTrayIconPeer));
}

void WTrayIconPeer::dispose() {
	this->$WObjectPeer::dispose();
}

int32_t WTrayIconPeer::hashCode() {
	 return this->$WObjectPeer::hashCode();
}

bool WTrayIconPeer::equals(Object$* arg0) {
	 return this->$WObjectPeer::equals(arg0);
}

$Object* WTrayIconPeer::clone() {
	 return this->$WObjectPeer::clone();
}

$String* WTrayIconPeer::toString() {
	 return this->$WObjectPeer::toString();
}

void WTrayIconPeer::finalize() {
	this->$WObjectPeer::finalize();
}

void WTrayIconPeer::disposeImpl() {
	if (this->popupParent != nullptr) {
		$nc(this->popupParent)->dispose();
	}
	$nc(this->popupParent)->dispose();
	_dispose();
	$WToolkit::targetDisposedPeer(this->target, this);
}

void WTrayIconPeer::init$($TrayIcon* target) {
	$WObjectPeer::init$();
	$set(this, observer, $new($WTrayIconPeer$IconObserver, this));
	this->firstUpdate = true;
	$set(this, popupParent, $new($Frame, "PopupMessageWindow"_s));
	$set(this, target, target);
	$nc(this->popupParent)->addNotify();
	create();
	updateImage();
}

void WTrayIconPeer::updateImage() {
	$var($Image, image, $nc(($cast($TrayIcon, this->target)))->getImage());
	if (image != nullptr) {
		updateNativeImage(image);
	}
}

void WTrayIconPeer::setToolTip($String* tooltip) {
	$prepareNative(WTrayIconPeer, setToolTip, void, $String* tooltip);
	$invokeNative(tooltip);
	$finishNative();
}

void WTrayIconPeer::showPopupMenu(int32_t x, int32_t y) {
	$synchronized(this) {
		if (isDisposed()) {
			return;
		}
		$SunToolkit::executeOnEventHandlerThread(this->target, static_cast<$Runnable*>($$new(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0, this, x, y)));
	}
}

void WTrayIconPeer::displayMessage($String* caption$renamed, $String* text$renamed, $String* messageType) {
	$useLocalCurrentObjectStackCache();
	$var($String, caption, caption$renamed);
	$var($String, text, text$renamed);
	if (caption == nullptr) {
		$assign(caption, ""_s);
	}
	if (text == nullptr) {
		$assign(text, ""_s);
	}
	_displayMessage(caption, text, messageType);
}

void WTrayIconPeer::updateNativeImage($Image* image) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (isDisposed()) {
			return;
		}
		bool autosize = $nc(($cast($TrayIcon, this->target)))->isImageAutoSize();
		$var($AffineTransform, tx, $nc($($nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration()))->getDefaultTransform());
		int32_t w = $Region::clipScale(WTrayIconPeer::TRAY_ICON_WIDTH, $nc(tx)->getScaleX());
		int32_t h = $Region::clipScale(WTrayIconPeer::TRAY_ICON_HEIGHT, $nc(tx)->getScaleY());
		int32_t var$0 = $nc(image)->getWidth(this->observer);
		int32_t imgWidth = $Region::clipScale(var$0, $nc(tx)->getScaleX());
		int32_t var$1 = $nc(image)->getHeight(this->observer);
		int32_t imgHeight = $Region::clipScale(var$1, $nc(tx)->getScaleY());
		$var($BufferedImage, bufImage, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB));
		$var($Graphics2D, gr, bufImage->createGraphics());
		if (gr != nullptr) {
			{
				$var($Throwable, var$2, nullptr);
				try {
					gr->setPaintMode();
					gr->drawImage(image, 0, 0, (autosize ? w : imgWidth), (autosize ? h : imgHeight), this->observer);
					createNativeImage(bufImage);
					updateNativeIcon(!this->firstUpdate);
					if (this->firstUpdate) {
						this->firstUpdate = false;
					}
				} catch ($Throwable& var$3) {
					$assign(var$2, var$3);
				} /*finally*/ {
					gr->dispose();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		}
	}
}

void WTrayIconPeer::createNativeImage($BufferedImage* bimage) {
	$useLocalCurrentObjectStackCache();
	$var($Raster, raster, $nc(bimage)->getRaster());
	$var($bytes, andMask, $new($bytes, WTrayIconPeer::TRAY_ICON_MASK_SIZE));
	$var($ints, pixels, $nc(($cast($DataBufferInt, $($nc(raster)->getDataBuffer()))))->getData());
	int32_t npixels = $nc(pixels)->length;
	int32_t ficW = raster->getWidth();
	for (int32_t i = 0; i < npixels; ++i) {
		int32_t ibyte = i / 8;
		int32_t omask = $sl(1, 7 - (i % 8));
		if (((int32_t)(pixels->get(i) & (uint32_t)(int32_t)0xFF000000)) == 0) {
			if (ibyte < andMask->length) {
				(*andMask)[ibyte] |= omask;
			}
		}
	}
	if ($instanceOf($IntegerComponentRaster, raster)) {
		ficW = $nc(($cast($IntegerComponentRaster, raster)))->getScanlineStride();
	}
	$var($ints, var$0, $nc(($cast($DataBufferInt, $($nc($(bimage->getRaster()))->getDataBuffer()))))->getData());
	$var($bytes, var$1, andMask);
	int32_t var$2 = ficW;
	int32_t var$3 = raster->getWidth();
	setNativeIcon(var$0, var$1, var$2, var$3, raster->getHeight());
}

void WTrayIconPeer::postEvent($AWTEvent* event) {
	$WToolkit::postEvent($($WToolkit::targetToAppContext(this->target)), event);
}

void WTrayIconPeer::create() {
	$prepareNative(WTrayIconPeer, create, void);
	$invokeNative();
	$finishNative();
}

void WTrayIconPeer::_dispose() {
	$prepareNative(WTrayIconPeer, _dispose, void);
	$invokeNative();
	$finishNative();
}

void WTrayIconPeer::updateNativeIcon(bool doUpdate) {
	$prepareNative(WTrayIconPeer, updateNativeIcon, void, bool doUpdate);
	$invokeNative(doUpdate);
	$finishNative();
}

void WTrayIconPeer::setNativeIcon($ints* rData, $bytes* andMask, int32_t nScanStride, int32_t width, int32_t height) {
	$prepareNative(WTrayIconPeer, setNativeIcon, void, $ints* rData, $bytes* andMask, int32_t nScanStride, int32_t width, int32_t height);
	$invokeNative(rData, andMask, nScanStride, width, height);
	$finishNative();
}

void WTrayIconPeer::_displayMessage($String* caption, $String* text, $String* messageType) {
	$prepareNative(WTrayIconPeer, _displayMessage, void, $String* caption, $String* text, $String* messageType);
	$invokeNative(caption, text, messageType);
	$finishNative();
}

void WTrayIconPeer::lambda$showPopupMenu$0(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($PopupMenu, newPopup, $nc(($cast($TrayIcon, this->target)))->getPopupMenu());
	if (this->popup != newPopup) {
		if (this->popup != nullptr) {
			$nc(this->popupParent)->remove(static_cast<$MenuComponent*>(this->popup));
		}
		if (newPopup != nullptr) {
			$nc(this->popupParent)->add(newPopup);
		}
		$set(this, popup, newPopup);
	}
	if (this->popup != nullptr) {
		$var($WPopupMenuPeer, peer, $cast($WPopupMenuPeer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(this->popup)));
		$nc(peer)->show(this->popupParent, $$new($Point, x, y));
	}
}

WTrayIconPeer::WTrayIconPeer() {
}

$Class* WTrayIconPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WTrayIconPeer$$Lambda$lambda$showPopupMenu$0::classInfo$.name)) {
			return WTrayIconPeer$$Lambda$lambda$showPopupMenu$0::load$(name, initialize);
		}
	}
	$loadClass(WTrayIconPeer, name, initialize, &_WTrayIconPeer_ClassInfo_, allocate$WTrayIconPeer);
	return class$;
}

$Class* WTrayIconPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun