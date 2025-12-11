#include <sun/lwawt/macosx/CTrayIcon.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Button.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/MediaTracker.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuItem.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Transparency.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIManager.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <sun/lwawt/macosx/CImage$Creator.h>
#include <sun/lwawt/macosx/CImage.h>
#include <sun/lwawt/macosx/CPopupMenu.h>
#include <sun/lwawt/macosx/CTrayIcon$1.h>
#include <sun/lwawt/macosx/CTrayIcon$IconObserver.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <sun/lwawt/macosx/NSEvent.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef KEY_INTERPOLATION
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef NOBUTTON
#undef TRANSLUCENT
#undef VALUE_INTERPOLATION_BILINEAR

using $AWTEvent = ::java::awt::AWTEvent;
using $Button = ::java::awt::Button;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $MediaTracker = ::java::awt::MediaTracker;
using $Menu = ::java::awt::Menu;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $PopupMenu = ::java::awt::PopupMenu;
using $RenderingHints = ::java::awt::RenderingHints;
using $Toolkit = ::java::awt::Toolkit;
using $Transparency = ::java::awt::Transparency;
using $TrayIcon = ::java::awt::TrayIcon;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $Point2D = ::java::awt::geom::Point2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Icon = ::javax::swing::Icon;
using $UIManager = ::javax::swing::UIManager;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CImage = ::sun::lwawt::macosx::CImage;
using $CImage$Creator = ::sun::lwawt::macosx::CImage$Creator;
using $CPopupMenu = ::sun::lwawt::macosx::CPopupMenu;
using $CTrayIcon$1 = ::sun::lwawt::macosx::CTrayIcon$1;
using $CTrayIcon$IconObserver = ::sun::lwawt::macosx::CTrayIcon$IconObserver;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;
using $NSEvent = ::sun::lwawt::macosx::NSEvent;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CTrayIcon$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(CTrayIcon$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(CTrayIcon::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CTrayIcon$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CTrayIcon$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CTrayIcon$$Lambda$lambda$static$0::*)()>(&CTrayIcon$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CTrayIcon$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CTrayIcon$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* CTrayIcon$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(CTrayIcon$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CTrayIcon$$Lambda$lambda$static$0::class$ = nullptr;

class CTrayIcon$$Lambda$lambda$displayMessage$2$1 : public $CFRetainedResource$CFNativeAction {
	$class(CTrayIcon$$Lambda$lambda$displayMessage$2$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CTrayIcon* inst, $String* caption, $String* text) {
		$set(this, inst$, inst);
		$set(this, caption, caption);
		$set(this, text, text);
	}
	virtual void run(int64_t imagePtr) override {
		$nc(inst$)->lambda$displayMessage$2(caption, text, imagePtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CTrayIcon$$Lambda$lambda$displayMessage$2$1>());
	}
	CTrayIcon* inst$ = nullptr;
	$String* caption = nullptr;
	$String* text = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CTrayIcon$$Lambda$lambda$displayMessage$2$1::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$displayMessage$2$1, inst$)},
	{"caption", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$displayMessage$2$1, caption)},
	{"text", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$displayMessage$2$1, text)},
	{}
};
$MethodInfo CTrayIcon$$Lambda$lambda$displayMessage$2$1::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CTrayIcon;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CTrayIcon$$Lambda$lambda$displayMessage$2$1::*)(CTrayIcon*,$String*,$String*)>(&CTrayIcon$$Lambda$lambda$displayMessage$2$1::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CTrayIcon$$Lambda$lambda$displayMessage$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CTrayIcon$$Lambda$lambda$displayMessage$2$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CTrayIcon$$Lambda$lambda$displayMessage$2$1::load$($String* name, bool initialize) {
	$loadClass(CTrayIcon$$Lambda$lambda$displayMessage$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CTrayIcon$$Lambda$lambda$displayMessage$2$1::class$ = nullptr;

class CTrayIcon$$Lambda$lambda$displayMessage$3$2 : public $CFRetainedResource$CFNativeAction {
	$class(CTrayIcon$$Lambda$lambda$displayMessage$3$2, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CTrayIcon* inst, $String* caption, $String* text) {
		$set(this, inst$, inst);
		$set(this, caption, caption);
		$set(this, text, text);
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$displayMessage$3(caption, text, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CTrayIcon$$Lambda$lambda$displayMessage$3$2>());
	}
	CTrayIcon* inst$ = nullptr;
	$String* caption = nullptr;
	$String* text = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CTrayIcon$$Lambda$lambda$displayMessage$3$2::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$displayMessage$3$2, inst$)},
	{"caption", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$displayMessage$3$2, caption)},
	{"text", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$displayMessage$3$2, text)},
	{}
};
$MethodInfo CTrayIcon$$Lambda$lambda$displayMessage$3$2::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CTrayIcon;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CTrayIcon$$Lambda$lambda$displayMessage$3$2::*)(CTrayIcon*,$String*,$String*)>(&CTrayIcon$$Lambda$lambda$displayMessage$3$2::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CTrayIcon$$Lambda$lambda$displayMessage$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CTrayIcon$$Lambda$lambda$displayMessage$3$2",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CTrayIcon$$Lambda$lambda$displayMessage$3$2::load$($String* name, bool initialize) {
	$loadClass(CTrayIcon$$Lambda$lambda$displayMessage$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CTrayIcon$$Lambda$lambda$displayMessage$3$2::class$ = nullptr;

class CTrayIcon$$Lambda$lambda$setToolTip$4$3 : public $CFRetainedResource$CFNativeAction {
	$class(CTrayIcon$$Lambda$lambda$setToolTip$4$3, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CTrayIcon* inst, $String* tooltip) {
		$set(this, inst$, inst);
		$set(this, tooltip, tooltip);
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$setToolTip$4(tooltip, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CTrayIcon$$Lambda$lambda$setToolTip$4$3>());
	}
	CTrayIcon* inst$ = nullptr;
	$String* tooltip = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CTrayIcon$$Lambda$lambda$setToolTip$4$3::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$setToolTip$4$3, inst$)},
	{"tooltip", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$setToolTip$4$3, tooltip)},
	{}
};
$MethodInfo CTrayIcon$$Lambda$lambda$setToolTip$4$3::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CTrayIcon;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CTrayIcon$$Lambda$lambda$setToolTip$4$3::*)(CTrayIcon*,$String*)>(&CTrayIcon$$Lambda$lambda$setToolTip$4$3::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CTrayIcon$$Lambda$lambda$setToolTip$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CTrayIcon$$Lambda$lambda$setToolTip$4$3",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CTrayIcon$$Lambda$lambda$setToolTip$4$3::load$($String* name, bool initialize) {
	$loadClass(CTrayIcon$$Lambda$lambda$setToolTip$4$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CTrayIcon$$Lambda$lambda$setToolTip$4$3::class$ = nullptr;

class CTrayIcon$$Lambda$lambda$updateNativeImage$6$4 : public $CFRetainedResource$CFNativeAction {
	$class(CTrayIcon$$Lambda$lambda$updateNativeImage$6$4, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CTrayIcon* inst, bool imageAutoSize) {
		$set(this, inst$, inst);
		this->imageAutoSize = imageAutoSize;
	}
	virtual void run(int64_t imagePtr) override {
		$nc(inst$)->lambda$updateNativeImage$6(imageAutoSize, imagePtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CTrayIcon$$Lambda$lambda$updateNativeImage$6$4>());
	}
	CTrayIcon* inst$ = nullptr;
	bool imageAutoSize = false;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CTrayIcon$$Lambda$lambda$updateNativeImage$6$4::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$updateNativeImage$6$4, inst$)},
	{"imageAutoSize", "Z", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$updateNativeImage$6$4, imageAutoSize)},
	{}
};
$MethodInfo CTrayIcon$$Lambda$lambda$updateNativeImage$6$4::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CTrayIcon;Z)V", nullptr, $PUBLIC, $method(static_cast<void(CTrayIcon$$Lambda$lambda$updateNativeImage$6$4::*)(CTrayIcon*,bool)>(&CTrayIcon$$Lambda$lambda$updateNativeImage$6$4::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CTrayIcon$$Lambda$lambda$updateNativeImage$6$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CTrayIcon$$Lambda$lambda$updateNativeImage$6$4",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CTrayIcon$$Lambda$lambda$updateNativeImage$6$4::load$($String* name, bool initialize) {
	$loadClass(CTrayIcon$$Lambda$lambda$updateNativeImage$6$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CTrayIcon$$Lambda$lambda$updateNativeImage$6$4::class$ = nullptr;

class CTrayIcon$$Lambda$lambda$updateNativeImage$5$5 : public $CFRetainedResource$CFNativeAction {
	$class(CTrayIcon$$Lambda$lambda$updateNativeImage$5$5, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CTrayIcon* inst, int64_t imagePtr, bool imageAutoSize) {
		$set(this, inst$, inst);
		this->imagePtr = imagePtr;
		this->imageAutoSize = imageAutoSize;
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$updateNativeImage$5(imagePtr, imageAutoSize, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CTrayIcon$$Lambda$lambda$updateNativeImage$5$5>());
	}
	CTrayIcon* inst$ = nullptr;
	int64_t imagePtr = 0;
	bool imageAutoSize = false;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CTrayIcon$$Lambda$lambda$updateNativeImage$5$5::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$updateNativeImage$5$5, inst$)},
	{"imagePtr", "J", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$updateNativeImage$5$5, imagePtr)},
	{"imageAutoSize", "Z", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$updateNativeImage$5$5, imageAutoSize)},
	{}
};
$MethodInfo CTrayIcon$$Lambda$lambda$updateNativeImage$5$5::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CTrayIcon;JZ)V", nullptr, $PUBLIC, $method(static_cast<void(CTrayIcon$$Lambda$lambda$updateNativeImage$5$5::*)(CTrayIcon*,int64_t,bool)>(&CTrayIcon$$Lambda$lambda$updateNativeImage$5$5::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CTrayIcon$$Lambda$lambda$updateNativeImage$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CTrayIcon$$Lambda$lambda$updateNativeImage$5$5",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CTrayIcon$$Lambda$lambda$updateNativeImage$5$5::load$($String* name, bool initialize) {
	$loadClass(CTrayIcon$$Lambda$lambda$updateNativeImage$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CTrayIcon$$Lambda$lambda$updateNativeImage$5$5::class$ = nullptr;

class CTrayIcon$$Lambda$lambda$displayMessage$1$6 : public $CFRetainedResource$CFNativeAction {
	$class(CTrayIcon$$Lambda$lambda$displayMessage$1$6, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CTrayIcon* inst, $String* caption, $String* text, int64_t imagePtr) {
		$set(this, inst$, inst);
		$set(this, caption, caption);
		$set(this, text, text);
		this->imagePtr = imagePtr;
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$displayMessage$1(caption, text, imagePtr, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CTrayIcon$$Lambda$lambda$displayMessage$1$6>());
	}
	CTrayIcon* inst$ = nullptr;
	$String* caption = nullptr;
	$String* text = nullptr;
	int64_t imagePtr = 0;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CTrayIcon$$Lambda$lambda$displayMessage$1$6::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$displayMessage$1$6, inst$)},
	{"caption", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$displayMessage$1$6, caption)},
	{"text", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$displayMessage$1$6, text)},
	{"imagePtr", "J", nullptr, $PUBLIC, $field(CTrayIcon$$Lambda$lambda$displayMessage$1$6, imagePtr)},
	{}
};
$MethodInfo CTrayIcon$$Lambda$lambda$displayMessage$1$6::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CTrayIcon;Ljava/lang/String;Ljava/lang/String;J)V", nullptr, $PUBLIC, $method(static_cast<void(CTrayIcon$$Lambda$lambda$displayMessage$1$6::*)(CTrayIcon*,$String*,$String*,int64_t)>(&CTrayIcon$$Lambda$lambda$displayMessage$1$6::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CTrayIcon$$Lambda$lambda$displayMessage$1$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CTrayIcon$$Lambda$lambda$displayMessage$1$6",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CTrayIcon$$Lambda$lambda$displayMessage$1$6::load$($String* name, bool initialize) {
	$loadClass(CTrayIcon$$Lambda$lambda$displayMessage$1$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CTrayIcon$$Lambda$lambda$displayMessage$1$6::class$ = nullptr;

$FieldInfo _CTrayIcon_FieldInfo_[] = {
	{"target", "Ljava/awt/TrayIcon;", nullptr, $PRIVATE, $field(CTrayIcon, target)},
	{"popup", "Ljava/awt/PopupMenu;", nullptr, $PRIVATE, $field(CTrayIcon, popup)},
	{"dummyFrame", "Ljava/awt/Frame;", nullptr, $PRIVATE | $FINAL, $field(CTrayIcon, dummyFrame)},
	{"observer", "Lsun/lwawt/macosx/CTrayIcon$IconObserver;", nullptr, 0, $field(CTrayIcon, observer)},
	{"mouseClickButtons", "I", nullptr, $PRIVATE | $STATIC, $staticField(CTrayIcon, mouseClickButtons)},
	{"useTemplateImages", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CTrayIcon, useTemplateImages)},
	{}
};

$MethodInfo _CTrayIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/TrayIcon;)V", nullptr, 0, $method(static_cast<void(CTrayIcon::*)($TrayIcon*)>(&CTrayIcon::init$))},
	{"checkAndCreatePopupPeer", "()Lsun/lwawt/macosx/CPopupMenu;", nullptr, $PRIVATE, $method(static_cast<$CPopupMenu*(CTrayIcon::*)()>(&CTrayIcon::checkAndCreatePopupPeer))},
	{"createModel", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(CTrayIcon::*)()>(&CTrayIcon::createModel))},
	{"displayMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getIconForMessageType", "(Ljava/lang/String;)Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Icon*(*)($String*)>(&CTrayIcon::getIconForMessageType))},
	{"getPopupMenuModel", "()J", nullptr, $PUBLIC},
	{"handleMouseEvent", "(Lsun/lwawt/macosx/NSEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(CTrayIcon::*)($NSEvent*)>(&CTrayIcon::handleMouseEvent))},
	{"lambda$displayMessage$1", "(Ljava/lang/String;Ljava/lang/String;JJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CTrayIcon::*)($String*,$String*,int64_t,int64_t)>(&CTrayIcon::lambda$displayMessage$1))},
	{"lambda$displayMessage$2", "(Ljava/lang/String;Ljava/lang/String;J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CTrayIcon::*)($String*,$String*,int64_t)>(&CTrayIcon::lambda$displayMessage$2))},
	{"lambda$displayMessage$3", "(Ljava/lang/String;Ljava/lang/String;J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CTrayIcon::*)($String*,$String*,int64_t)>(&CTrayIcon::lambda$displayMessage$3))},
	{"lambda$setToolTip$4", "(Ljava/lang/String;J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CTrayIcon::*)($String*,int64_t)>(&CTrayIcon::lambda$setToolTip$4))},
	{"lambda$static$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)()>(&CTrayIcon::lambda$static$0))},
	{"lambda$updateNativeImage$5", "(JZJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CTrayIcon::*)(int64_t,bool,int64_t)>(&CTrayIcon::lambda$updateNativeImage$5))},
	{"lambda$updateNativeImage$6", "(ZJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CTrayIcon::*)(bool,int64_t)>(&CTrayIcon::lambda$updateNativeImage$6))},
	{"nativeCreate", "()J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CTrayIcon::*)()>(&CTrayIcon::nativeCreate))},
	{"nativeGetIconLocation", "(J)Ljava/awt/geom/Point2D;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$Point2D*(CTrayIcon::*)(int64_t)>(&CTrayIcon::nativeGetIconLocation))},
	{"nativeSetToolTip", "(JLjava/lang/String;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CTrayIcon::*)(int64_t,$String*)>(&CTrayIcon::nativeSetToolTip))},
	{"nativeShowNotification", "(JLjava/lang/String;Ljava/lang/String;J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CTrayIcon::*)(int64_t,$String*,$String*,int64_t)>(&CTrayIcon::nativeShowNotification))},
	{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(CTrayIcon::*)($AWTEvent*)>(&CTrayIcon::postEvent))},
	{"scaleIcon", "(Ljavax/swing/Icon;D)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BufferedImage*(*)($Icon*,double)>(&CTrayIcon::scaleIcon))},
	{"setNativeImage", "(JJZZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CTrayIcon::*)(int64_t,int64_t,bool,bool)>(&CTrayIcon::setNativeImage))},
	{"setToolTip", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"showPopupMenu", "(II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateImage", "()V", nullptr, $PUBLIC},
	{"updateNativeImage", "(Ljava/awt/Image;)V", nullptr, 0},
	{}
};

#define _METHOD_INDEX_nativeCreate 19
#define _METHOD_INDEX_nativeGetIconLocation 20
#define _METHOD_INDEX_nativeSetToolTip 21
#define _METHOD_INDEX_nativeShowNotification 22
#define _METHOD_INDEX_setNativeImage 25

$InnerClassInfo _CTrayIcon_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CTrayIcon$IconObserver", "sun.lwawt.macosx.CTrayIcon", "IconObserver", 0},
	{"sun.lwawt.macosx.CTrayIcon$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CTrayIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CTrayIcon",
	"sun.lwawt.macosx.CFRetainedResource",
	"java.awt.peer.TrayIconPeer",
	_CTrayIcon_FieldInfo_,
	_CTrayIcon_MethodInfo_,
	nullptr,
	nullptr,
	_CTrayIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CTrayIcon$IconObserver,sun.lwawt.macosx.CTrayIcon$IconObserver$1,sun.lwawt.macosx.CTrayIcon$1"
};

$Object* allocate$CTrayIcon($Class* clazz) {
	return $of($alloc(CTrayIcon));
}

void CTrayIcon::finalize() {
	this->$CFRetainedResource::finalize();
}

int32_t CTrayIcon::hashCode() {
	 return this->$CFRetainedResource::hashCode();
}

bool CTrayIcon::equals(Object$* arg0) {
	 return this->$CFRetainedResource::equals(arg0);
}

$Object* CTrayIcon::clone() {
	 return this->$CFRetainedResource::clone();
}

$String* CTrayIcon::toString() {
	 return this->$CFRetainedResource::toString();
}

int32_t CTrayIcon::mouseClickButtons = 0;
bool CTrayIcon::useTemplateImages = false;

void CTrayIcon::init$($TrayIcon* target) {
	$CFRetainedResource::init$(0, true);
	$set(this, observer, $new($CTrayIcon$IconObserver, this));
	$set(this, target, target);
	$set(this, popup, $nc(target)->getPopupMenu());
	$set(this, dummyFrame, $new($Frame));
	setPtr(createModel());
	checkAndCreatePopupPeer();
	updateImage();
}

$CPopupMenu* CTrayIcon::checkAndCreatePopupPeer() {
	$useLocalCurrentObjectStackCache();
	$var($CPopupMenu, menuPeer, nullptr);
	if (this->popup != nullptr) {
		try {
			$var($AWTAccessor$MenuComponentAccessor, acc, $AWTAccessor::getMenuComponentAccessor());
			$assign(menuPeer, $cast($CPopupMenu, $nc(acc)->getPeer(this->popup)));
			if (menuPeer == nullptr) {
				$nc(this->popup)->addNotify();
				$assign(menuPeer, $cast($CPopupMenu, acc->getPeer(this->popup)));
			}
		} catch ($Exception& e) {
			e->printStackTrace();
		}
	}
	return menuPeer;
}

int64_t CTrayIcon::createModel() {
	return nativeCreate();
}

int64_t CTrayIcon::nativeCreate() {
	int64_t $ret = 0;
	$prepareNative(CTrayIcon, nativeCreate, int64_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

int64_t CTrayIcon::getPopupMenuModel() {
	$useLocalCurrentObjectStackCache();
	$var($PopupMenu, newPopup, $nc(this->target)->getPopupMenu());
	if (this->popup == newPopup) {
		if (this->popup == nullptr) {
			return 0;
		}
	} else if (newPopup != nullptr) {
		if (this->popup != nullptr) {
			$nc(this->popup)->removeNotify();
			$set(this, popup, newPopup);
		} else {
			$set(this, popup, newPopup);
		}
	} else {
		return 0;
	}
	return $nc($(checkAndCreatePopupPeer()))->ptr;
}

void CTrayIcon::displayMessage($String* caption, $String* text, $String* messageType) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, icon, getIconForMessageType(messageType));
	$var($CImage, cimage, nullptr);
	if (icon != nullptr) {
		$var($BufferedImage, image, scaleIcon(icon, 0.75));
		$assign(cimage, $nc($($CImage::getCreator()))->createFromImage(image, nullptr));
	}
	if (cimage != nullptr) {
		cimage->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CTrayIcon$$Lambda$lambda$displayMessage$2$1, this, caption, text)));
	} else {
		execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CTrayIcon$$Lambda$lambda$displayMessage$3$2, this, caption, text)));
	}
}

void CTrayIcon::dispose() {
	$nc(this->dummyFrame)->dispose();
	if (this->popup != nullptr) {
		$nc(this->popup)->removeNotify();
	}
	$LWCToolkit::targetDisposedPeer(this->target, this);
	$set(this, target, nullptr);
	$CFRetainedResource::dispose();
}

void CTrayIcon::setToolTip($String* tooltip) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CTrayIcon$$Lambda$lambda$setToolTip$4$3, this, tooltip)));
}

void CTrayIcon::nativeSetToolTip(int64_t trayIconModel, $String* tooltip) {
	$prepareNative(CTrayIcon, nativeSetToolTip, void, int64_t trayIconModel, $String* tooltip);
	$invokeNative(trayIconModel, tooltip);
	$finishNative();
}

void CTrayIcon::showPopupMenu(int32_t x, int32_t y) {
}

void CTrayIcon::updateImage() {
	$var($Image, image, $nc(this->target)->getImage());
	if (image != nullptr) {
		updateNativeImage(image);
	}
}

void CTrayIcon::updateNativeImage($Image* image) {
	$useLocalCurrentObjectStackCache();
	$var($MediaTracker, tracker, $new($MediaTracker, $$new($Button, ""_s)));
	tracker->addImage(image, 0);
	try {
		tracker->waitForAll();
	} catch ($InterruptedException& ignore) {
	}
	bool var$0 = $nc(image)->getWidth(nullptr) <= 0;
	if (var$0 || $nc(image)->getHeight(nullptr) <= 0) {
		return;
	}
	$var($CImage, cimage, $nc($($CImage::getCreator()))->createFromImage(image, this->observer));
	bool imageAutoSize = $nc(this->target)->isImageAutoSize();
	if (cimage != nullptr) {
		cimage->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CTrayIcon$$Lambda$lambda$updateNativeImage$6$4, this, imageAutoSize)));
	}
}

void CTrayIcon::setNativeImage(int64_t model, int64_t nsimage, bool autosize, bool template$) {
	$prepareNative(CTrayIcon, setNativeImage, void, int64_t model, int64_t nsimage, bool autosize, bool template$);
	$invokeNative(model, nsimage, autosize, template$);
	$finishNative();
}

void CTrayIcon::postEvent($AWTEvent* event) {
	$SunToolkit::executeOnEventHandlerThread(this->target, $$new($CTrayIcon$1, this, event));
}

void CTrayIcon::handleMouseEvent($NSEvent* nsEvent) {
	$useLocalCurrentObjectStackCache();
	int32_t buttonNumber = $nc(nsEvent)->getButtonNumber();
	$var($SunToolkit, tk, $cast($SunToolkit, $Toolkit::getDefaultToolkit()));
	bool var$0 = (buttonNumber > 2 && !$nc(tk)->areExtraMouseButtonsEnabled());
	if (var$0 || buttonNumber > $nc(tk)->getNumberOfButtons() - 1) {
		return;
	}
	int32_t jeventType = $NSEvent::nsToJavaEventType(nsEvent->getType());
	int32_t jbuttonNumber = $MouseEvent::NOBUTTON;
	int32_t jclickCount = 0;
	if (jeventType != $MouseEvent::MOUSE_MOVED) {
		jbuttonNumber = $NSEvent::nsToJavaButton(buttonNumber);
		jclickCount = nsEvent->getClickCount();
	}
	int32_t jmodifiers = $NSEvent::nsToJavaModifiers(nsEvent->getModifierFlags());
	bool isPopupTrigger = $NSEvent::isPopupTrigger(jmodifiers);
	int32_t eventButtonMask = (jbuttonNumber > 0) ? $MouseEvent::getMaskForButton(jbuttonNumber) : 0;
	int64_t when = $System::currentTimeMillis();
	if (jeventType == $MouseEvent::MOUSE_PRESSED) {
		CTrayIcon::mouseClickButtons |= eventButtonMask;
	} else if (jeventType == $MouseEvent::MOUSE_DRAGGED) {
		CTrayIcon::mouseClickButtons = 0;
	}
	int32_t absX = nsEvent->getAbsX();
	int32_t absY = nsEvent->getAbsY();
	$var($MouseEvent, mouseEvent, $new($MouseEvent, this->dummyFrame, jeventType, when, jmodifiers, absX, absY, absX, absY, jclickCount, isPopupTrigger, jbuttonNumber));
	mouseEvent->setSource(this->target);
	postEvent(mouseEvent);
	if (jeventType == $MouseEvent::MOUSE_PRESSED && isPopupTrigger) {
		$var($String, cmd, $nc(this->target)->getActionCommand());
		$var($ActionEvent, event, $new($ActionEvent, this->target, $ActionEvent::ACTION_PERFORMED, cmd));
		postEvent(event);
	}
	if (jeventType == $MouseEvent::MOUSE_RELEASED) {
		if (((int32_t)(CTrayIcon::mouseClickButtons & (uint32_t)eventButtonMask)) != 0) {
			$var($MouseEvent, clickEvent, $new($MouseEvent, this->dummyFrame, $MouseEvent::MOUSE_CLICKED, when, jmodifiers, absX, absY, absX, absY, jclickCount, isPopupTrigger, jbuttonNumber));
			clickEvent->setSource(this->target);
			postEvent(clickEvent);
		}
		CTrayIcon::mouseClickButtons &= (uint32_t)~eventButtonMask;
	}
}

void CTrayIcon::nativeShowNotification(int64_t trayIconModel, $String* caption, $String* text, int64_t nsimage) {
	$prepareNative(CTrayIcon, nativeShowNotification, void, int64_t trayIconModel, $String* caption, $String* text, int64_t nsimage);
	$invokeNative(trayIconModel, caption, text, nsimage);
	$finishNative();
}

$Point2D* CTrayIcon::nativeGetIconLocation(int64_t trayIconModel) {
	$var($Point2D, $ret, nullptr);
	$prepareNative(CTrayIcon, nativeGetIconLocation, $Point2D*, int64_t trayIconModel);
	$assign($ret, $invokeNativeObject(trayIconModel));
	$finishNative();
	return $ret;
}

$BufferedImage* CTrayIcon::scaleIcon($Icon* icon, double scaleFactor) {
	$init(CTrayIcon);
	$useLocalCurrentObjectStackCache();
	if (icon == nullptr) {
		return nullptr;
	}
	int32_t w = $nc(icon)->getIconWidth();
	int32_t h = icon->getIconHeight();
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($GraphicsDevice, gd, $nc(ge)->getDefaultScreenDevice());
	$var($GraphicsConfiguration, gc, $nc(gd)->getDefaultConfiguration());
	$var($BufferedImage, iconImage, $nc(gc)->createCompatibleImage(w, h, $Transparency::TRANSLUCENT));
	$var($Graphics2D, g, $nc(iconImage)->createGraphics());
	icon->paintIcon(nullptr, g, 0, 0);
	$nc(g)->dispose();
	int32_t scaledW = $cast(int32_t, (w * scaleFactor));
	int32_t scaledH = $cast(int32_t, (h * scaleFactor));
	$var($BufferedImage, scaledImage, gc->createCompatibleImage(scaledW, scaledH, $Transparency::TRANSLUCENT));
	$assign(g, $nc(scaledImage)->createGraphics());
	$init($RenderingHints);
	g->setRenderingHint($RenderingHints::KEY_INTERPOLATION, $RenderingHints::VALUE_INTERPOLATION_BILINEAR);
	g->drawImage(iconImage, 0, 0, scaledW, scaledH, nullptr);
	g->dispose();
	return scaledImage;
}

$Icon* CTrayIcon::getIconForMessageType($String* messageType) {
	$init(CTrayIcon);
	if ($nc(messageType)->equals("ERROR"_s)) {
		return $UIManager::getIcon("OptionPane.errorIcon"_s);
	} else if (messageType->equals("WARNING"_s)) {
		return $UIManager::getIcon("OptionPane.warningIcon"_s);
	} else {
		return $UIManager::getIcon("OptionPane.informationIcon"_s);
	}
}

void CTrayIcon::lambda$updateNativeImage$6(bool imageAutoSize, int64_t imagePtr) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CTrayIcon$$Lambda$lambda$updateNativeImage$5$5, this, imagePtr, imageAutoSize)));
}

void CTrayIcon::lambda$updateNativeImage$5(int64_t imagePtr, bool imageAutoSize, int64_t ptr) {
	setNativeImage(ptr, imagePtr, imageAutoSize, CTrayIcon::useTemplateImages);
}

void CTrayIcon::lambda$setToolTip$4($String* tooltip, int64_t ptr) {
	nativeSetToolTip(ptr, tooltip);
}

void CTrayIcon::lambda$displayMessage$3($String* caption, $String* text, int64_t ptr) {
	nativeShowNotification(ptr, caption, text, 0);
}

void CTrayIcon::lambda$displayMessage$2($String* caption, $String* text, int64_t imagePtr) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CTrayIcon$$Lambda$lambda$displayMessage$1$6, this, caption, text, imagePtr)));
}

void CTrayIcon::lambda$displayMessage$1($String* caption, $String* text, int64_t imagePtr, int64_t ptr) {
	nativeShowNotification(ptr, caption, text, imagePtr);
}

$Boolean* CTrayIcon::lambda$static$0() {
	$init(CTrayIcon);
	return $Boolean::valueOf($Boolean::getBoolean("apple.awt.enableTemplateImages"_s));
}

void clinit$CTrayIcon($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	CTrayIcon::mouseClickButtons = 0;
	CTrayIcon::useTemplateImages = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(CTrayIcon$$Lambda$lambda$static$0)))))))->booleanValue();
}

CTrayIcon::CTrayIcon() {
}

$Class* CTrayIcon::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CTrayIcon$$Lambda$lambda$static$0::classInfo$.name)) {
			return CTrayIcon$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals(CTrayIcon$$Lambda$lambda$displayMessage$2$1::classInfo$.name)) {
			return CTrayIcon$$Lambda$lambda$displayMessage$2$1::load$(name, initialize);
		}
		if (name->equals(CTrayIcon$$Lambda$lambda$displayMessage$3$2::classInfo$.name)) {
			return CTrayIcon$$Lambda$lambda$displayMessage$3$2::load$(name, initialize);
		}
		if (name->equals(CTrayIcon$$Lambda$lambda$setToolTip$4$3::classInfo$.name)) {
			return CTrayIcon$$Lambda$lambda$setToolTip$4$3::load$(name, initialize);
		}
		if (name->equals(CTrayIcon$$Lambda$lambda$updateNativeImage$6$4::classInfo$.name)) {
			return CTrayIcon$$Lambda$lambda$updateNativeImage$6$4::load$(name, initialize);
		}
		if (name->equals(CTrayIcon$$Lambda$lambda$updateNativeImage$5$5::classInfo$.name)) {
			return CTrayIcon$$Lambda$lambda$updateNativeImage$5$5::load$(name, initialize);
		}
		if (name->equals(CTrayIcon$$Lambda$lambda$displayMessage$1$6::classInfo$.name)) {
			return CTrayIcon$$Lambda$lambda$displayMessage$1$6::load$(name, initialize);
		}
	}
	$loadClass(CTrayIcon, name, initialize, &_CTrayIcon_ClassInfo_, clinit$CTrayIcon, allocate$CTrayIcon);
	return class$;
}

$Class* CTrayIcon::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun