#include <sun/lwawt/macosx/CPlatformWindow.h>

#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window$Type.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/List.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$WindowAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWLightweightFramePeer.h>
#include <sun/lwawt/LWToolkit.h>
#include <sun/lwawt/LWWindowPeer$PeerType.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformEventNotifier.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CEmbeddedFrame.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeActionGet.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <sun/lwawt/macosx/CImage$Creator.h>
#include <sun/lwawt/macosx/CImage.h>
#include <sun/lwawt/macosx/CMenuBar.h>
#include <sun/lwawt/macosx/CPlatformResponder.h>
#include <sun/lwawt/macosx/CPlatformView.h>
#include <sun/lwawt/macosx/CPlatformWindow$1.h>
#include <sun/lwawt/macosx/CPlatformWindow$10.h>
#include <sun/lwawt/macosx/CPlatformWindow$11.h>
#include <sun/lwawt/macosx/CPlatformWindow$12.h>
#include <sun/lwawt/macosx/CPlatformWindow$13.h>
#include <sun/lwawt/macosx/CPlatformWindow$14.h>
#include <sun/lwawt/macosx/CPlatformWindow$15.h>
#include <sun/lwawt/macosx/CPlatformWindow$16.h>
#include <sun/lwawt/macosx/CPlatformWindow$2.h>
#include <sun/lwawt/macosx/CPlatformWindow$3.h>
#include <sun/lwawt/macosx/CPlatformWindow$4.h>
#include <sun/lwawt/macosx/CPlatformWindow$5.h>
#include <sun/lwawt/macosx/CPlatformWindow$6.h>
#include <sun/lwawt/macosx/CPlatformWindow$7.h>
#include <sun/lwawt/macosx/CPlatformWindow$8.h>
#include <sun/lwawt/macosx/CPlatformWindow$9.h>
#include <sun/lwawt/macosx/CPrinterDialogPeer.h>
#include <sun/lwawt/macosx/CViewPlatformEmbeddedFrame.h>
#include <sun/lwawt/macosx/CWrapper$NSWindow.h>
#include <sun/lwawt/macosx/CocoaConstants.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ALWAYS_ON_TOP
#undef APPLICATION_EXCLUDE
#undef APPLICATION_MODAL
#undef CLIENT_PROPERTY_APPLICATOR
#undef CLOSEABLE
#undef DECORATED
#undef DOCUMENT_MODAL
#undef DOCUMENT_MODIFIED
#undef DRAGGABLE_BACKGROUND
#undef EMBEDDED_FRAME
#undef FRAME
#undef FULLSCREENABLE
#undef FULL_WINDOW_CONTENT
#undef HAS_SHADOW
#undef HIDES_ON_DEACTIVATE
#undef HUD
#undef ICONIFIED
#undef IS
#undef IS_DIALOG
#undef IS_MODAL
#undef IS_POPUP
#undef MAC_OS_TABBED_WINDOW
#undef MAXIMIZED_BOTH
#undef MINIMIZABLE
#undef MODAL_EXCLUDED
#undef MODELESS
#undef MOUSE_EVENT
#undef NONACTIVATING
#undef NORMAL
#undef POPUP
#undef RESIZABLE
#undef SET
#undef SHEET
#undef SHOULD_BECOME_KEY
#undef SHOULD_BECOME_MAIN
#undef TEXTURED
#undef TITLE_VISIBLE
#undef TOOLKIT_MODAL
#undef TRANSPARENT_TITLE_BAR
#undef UNIFIED
#undef UTILITY
#undef WINDOW_ALPHA
#undef WINDOW_BRUSH_METAL_LOOK
#undef WINDOW_CLOSEABLE
#undef WINDOW_CLOSING
#undef WINDOW_DOCUMENT_FILE
#undef WINDOW_DOCUMENT_MODIFIED
#undef WINDOW_DOC_MODAL_SHEET
#undef WINDOW_DRAGGABLE_BACKGROUND
#undef WINDOW_FADE_DELEGATE
#undef WINDOW_FADE_IN
#undef WINDOW_FADE_OUT
#undef WINDOW_FULLSCREENABLE
#undef WINDOW_FULL_CONTENT
#undef WINDOW_HIDES_ON_DEACTIVATE
#undef WINDOW_MINIMIZABLE
#undef WINDOW_SHADOW
#undef WINDOW_SHADOW_REVALIDATE_NOW
#undef WINDOW_STYLE
#undef WINDOW_TITLE_VISIBLE
#undef WINDOW_TRANSPARENT_TITLE_BAR
#undef WINDOW_ZOOMABLE
#undef ZOOMABLE
#undef _CALLBACK_PROP_BITMASK
#undef _METHOD_PROP_BITMASK
#undef _RESERVED_FOR_DATA
#undef _STYLE_PROP_BITMASK

using $ClientPropertyApplicator$PropertyArray = $Array<::com::apple::laf::ClientPropertyApplicator$Property>;
using $WindowArray = $Array<::java::awt::Window>;
using $ClientPropertyApplicator = ::com::apple::laf::ClientPropertyApplicator;
using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $MenuBar = ::java::awt::MenuBar;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $Window$Type = ::java::awt::Window$Type;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $JRootPane = ::javax::swing::JRootPane;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$WindowAccessor = ::sun::awt::AWTAccessor$WindowAccessor;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $LWLightweightFramePeer = ::sun::lwawt::LWLightweightFramePeer;
using $LWToolkit = ::sun::lwawt::LWToolkit;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $LWWindowPeer$PeerType = ::sun::lwawt::LWWindowPeer$PeerType;
using $PlatformEventNotifier = ::sun::lwawt::PlatformEventNotifier;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $CEmbeddedFrame = ::sun::lwawt::macosx::CEmbeddedFrame;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CFRetainedResource$CFNativeActionGet = ::sun::lwawt::macosx::CFRetainedResource$CFNativeActionGet;
using $CImage = ::sun::lwawt::macosx::CImage;
using $CImage$Creator = ::sun::lwawt::macosx::CImage$Creator;
using $CMenuBar = ::sun::lwawt::macosx::CMenuBar;
using $CPlatformResponder = ::sun::lwawt::macosx::CPlatformResponder;
using $CPlatformView = ::sun::lwawt::macosx::CPlatformView;
using $CPlatformWindow$1 = ::sun::lwawt::macosx::CPlatformWindow$1;
using $CPlatformWindow$10 = ::sun::lwawt::macosx::CPlatformWindow$10;
using $CPlatformWindow$11 = ::sun::lwawt::macosx::CPlatformWindow$11;
using $CPlatformWindow$12 = ::sun::lwawt::macosx::CPlatformWindow$12;
using $CPlatformWindow$13 = ::sun::lwawt::macosx::CPlatformWindow$13;
using $CPlatformWindow$14 = ::sun::lwawt::macosx::CPlatformWindow$14;
using $CPlatformWindow$15 = ::sun::lwawt::macosx::CPlatformWindow$15;
using $CPlatformWindow$16 = ::sun::lwawt::macosx::CPlatformWindow$16;
using $CPlatformWindow$2 = ::sun::lwawt::macosx::CPlatformWindow$2;
using $CPlatformWindow$3 = ::sun::lwawt::macosx::CPlatformWindow$3;
using $CPlatformWindow$4 = ::sun::lwawt::macosx::CPlatformWindow$4;
using $CPlatformWindow$5 = ::sun::lwawt::macosx::CPlatformWindow$5;
using $CPlatformWindow$6 = ::sun::lwawt::macosx::CPlatformWindow$6;
using $CPlatformWindow$7 = ::sun::lwawt::macosx::CPlatformWindow$7;
using $CPlatformWindow$8 = ::sun::lwawt::macosx::CPlatformWindow$8;
using $CPlatformWindow$9 = ::sun::lwawt::macosx::CPlatformWindow$9;
using $CPrinterDialogPeer = ::sun::lwawt::macosx::CPrinterDialogPeer;
using $CViewPlatformEmbeddedFrame = ::sun::lwawt::macosx::CViewPlatformEmbeddedFrame;
using $CWrapper$NSWindow = ::sun::lwawt::macosx::CWrapper$NSWindow;
using $CocoaConstants = ::sun::lwawt::macosx::CocoaConstants;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformWindow$$Lambda$lambda$new$0 : public $Comparator {
	$class(CPlatformWindow$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Comparator)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* w1, Object$* w2) override {
		 return CPlatformWindow::lambda$new$0($cast($Window, w1), $cast($Window, w2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$new$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$new$0::*)()>(&CPlatformWindow$$Lambda$lambda$new$0::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$new$0::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$initialize$2$1 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$initialize$2$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CPlatformWindow* inst, $AtomicLong* ref, int32_t styleBits, $Rectangle* bounds) {
		$set(this, inst$, inst);
		$set(this, ref, ref);
		this->styleBits = styleBits;
		$set(this, bounds, bounds);
	}
	virtual void run(int64_t viewPtr) override {
		$nc(inst$)->lambda$initialize$2(ref, styleBits, bounds, viewPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$initialize$2$1>());
	}
	CPlatformWindow* inst$ = nullptr;
	$AtomicLong* ref = nullptr;
	int32_t styleBits = 0;
	$Rectangle* bounds = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$initialize$2$1::fieldInfos[5] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$initialize$2$1, inst$)},
	{"ref", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$initialize$2$1, ref)},
	{"styleBits", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$initialize$2$1, styleBits)},
	{"bounds", "Ljava/awt/Rectangle;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$initialize$2$1, bounds)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$initialize$2$1::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/util/concurrent/atomic/AtomicLong;ILjava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$initialize$2$1::*)(CPlatformWindow*,$AtomicLong*,int32_t,$Rectangle*)>(&CPlatformWindow$$Lambda$lambda$initialize$2$1::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$initialize$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$initialize$2$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$initialize$2$1::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$initialize$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$initialize$2$1::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setStyleBits$3$2 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setStyleBits$3$2, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int32_t mask, bool value) {
		this->mask = mask;
		this->value = value;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setStyleBits$3(mask, value, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setStyleBits$3$2>());
	}
	int32_t mask = 0;
	bool value = false;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setStyleBits$3$2::fieldInfos[3] = {
	{"mask", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setStyleBits$3$2, mask)},
	{"value", "Z", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setStyleBits$3$2, value)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setStyleBits$3$2::methodInfos[3] = {
	{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setStyleBits$3$2::*)(int32_t,bool)>(&CPlatformWindow$$Lambda$lambda$setStyleBits$3$2::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setStyleBits$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setStyleBits$3$2",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setStyleBits$3$2::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setStyleBits$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setStyleBits$3$2::class$ = nullptr;

class CPlatformWindow$$Lambda$_toggleFullScreenMode$3 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$_toggleFullScreenMode$3, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CPlatformWindow* inst) {
		$set(this, inst$, inst);
	}
	virtual void run(int64_t model) override {
		$nc(inst$)->_toggleFullScreenMode(model);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$_toggleFullScreenMode$3>());
	}
	CPlatformWindow* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$_toggleFullScreenMode$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$_toggleFullScreenMode$3, inst$)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$_toggleFullScreenMode$3::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$_toggleFullScreenMode$3::*)(CPlatformWindow*)>(&CPlatformWindow$$Lambda$_toggleFullScreenMode$3::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$_toggleFullScreenMode$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$_toggleFullScreenMode$3",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$_toggleFullScreenMode$3::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$_toggleFullScreenMode$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$_toggleFullScreenMode$3::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setMenuBar$5$4 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setMenuBar$5$4, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($CMenuBar* mbPeer) {
		$set(this, mbPeer, mbPeer);
	}
	virtual void run(int64_t nsWindowPtr) override {
		CPlatformWindow::lambda$setMenuBar$5(mbPeer, nsWindowPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setMenuBar$5$4>());
	}
	$CMenuBar* mbPeer = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setMenuBar$5$4::fieldInfos[2] = {
	{"mbPeer", "Lsun/lwawt/macosx/CMenuBar;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setMenuBar$5$4, mbPeer)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setMenuBar$5$4::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CMenuBar;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setMenuBar$5$4::*)($CMenuBar*)>(&CPlatformWindow$$Lambda$lambda$setMenuBar$5$4::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setMenuBar$5$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setMenuBar$5$4",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setMenuBar$5$4::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setMenuBar$5$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setMenuBar$5$4::class$ = nullptr;

class CPlatformWindow$$Lambda$nativeDispose$5 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$nativeDispose$5, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t nsWindowPtr) override {
		CPlatformWindow::nativeDispose(nsWindowPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$nativeDispose$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$nativeDispose$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$nativeDispose$5::*)()>(&CPlatformWindow$$Lambda$nativeDispose$5::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$nativeDispose$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$nativeDispose$5",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$nativeDispose$5::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$nativeDispose$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$nativeDispose$5::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$getInsets$6$6 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$getInsets$6$6, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($AtomicReference* ref) {
		$set(this, ref, ref);
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$getInsets$6(ref, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$getInsets$6$6>());
	}
	$AtomicReference* ref = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$getInsets$6$6::fieldInfos[2] = {
	{"ref", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$getInsets$6$6, ref)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$getInsets$6$6::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicReference;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$getInsets$6$6::*)($AtomicReference*)>(&CPlatformWindow$$Lambda$lambda$getInsets$6$6::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$getInsets$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$getInsets$6$6",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$getInsets$6$6::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$getInsets$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$getInsets$6$6::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setBounds$7$7 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setBounds$7$7, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int32_t x, int32_t y, int32_t w, int32_t h) {
		this->x = x;
		this->y = y;
		this->w = w;
		this->h = h;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setBounds$7(x, y, w, h, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setBounds$7$7>());
	}
	int32_t x = 0;
	int32_t y = 0;
	int32_t w = 0;
	int32_t h = 0;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setBounds$7$7::fieldInfos[5] = {
	{"x", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setBounds$7$7, x)},
	{"y", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setBounds$7$7, y)},
	{"w", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setBounds$7$7, w)},
	{"h", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setBounds$7$7, h)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setBounds$7$7::methodInfos[3] = {
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setBounds$7$7::*)(int32_t,int32_t,int32_t,int32_t)>(&CPlatformWindow$$Lambda$lambda$setBounds$7$7::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setBounds$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setBounds$7$7",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setBounds$7$7::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setBounds$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setBounds$7$7::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int32_t x, int32_t y, int32_t w, int32_t h) {
		this->x = x;
		this->y = y;
		this->w = w;
		this->h = h;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setMaximizedBounds$8(x, y, w, h, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8>());
	}
	int32_t x = 0;
	int32_t y = 0;
	int32_t w = 0;
	int32_t h = 0;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8::fieldInfos[5] = {
	{"x", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8, x)},
	{"y", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8, y)},
	{"w", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8, w)},
	{"h", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8, h)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8::methodInfos[3] = {
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8::*)(int32_t,int32_t,int32_t,int32_t)>(&CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8::class$ = nullptr;

class CPlatformWindow$$Lambda$zoom$9 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$zoom$9, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t window) override {
		$CWrapper$NSWindow::zoom(window);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$zoom$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$zoom$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$zoom$9::*)()>(&CPlatformWindow$$Lambda$zoom$9::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$zoom$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$zoom$9",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$zoom$9::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$zoom$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$zoom$9::class$ = nullptr;

class CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t nsWindowPtr) override {
		CPlatformWindow::nativeSetNSWindowLocationByPlatform(nsWindowPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10::*)()>(&CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setVisible$10$11 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setVisible$10$11, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CPlatformWindow* inst) {
		$set(this, inst$, inst);
	}
	virtual void run(int64_t viewPtr) override {
		$nc(inst$)->lambda$setVisible$10(viewPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setVisible$10$11>());
	}
	CPlatformWindow* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setVisible$10$11::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setVisible$10$11, inst$)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setVisible$10$11::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setVisible$10$11::*)(CPlatformWindow*)>(&CPlatformWindow$$Lambda$lambda$setVisible$10$11::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setVisible$10$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setVisible$10$11",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setVisible$10$11::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setVisible$10$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setVisible$10$11::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setVisible$11$12 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setVisible$11$12, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CPlatformWindow* inst, bool isPopup) {
		$set(this, inst$, inst);
		this->isPopup = isPopup;
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$setVisible$11(isPopup, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setVisible$11$12>());
	}
	CPlatformWindow* inst$ = nullptr;
	bool isPopup = false;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setVisible$11$12::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setVisible$11$12, inst$)},
	{"isPopup", "Z", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setVisible$11$12, isPopup)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setVisible$11$12::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;Z)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setVisible$11$12::*)(CPlatformWindow*,bool)>(&CPlatformWindow$$Lambda$lambda$setVisible$11$12::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setVisible$11$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setVisible$11$12",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setVisible$11$12::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setVisible$11$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setVisible$11$12::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setVisible$12$13 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setVisible$12$13, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setVisible$12(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setVisible$12$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setVisible$12$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setVisible$12$13::*)()>(&CPlatformWindow$$Lambda$lambda$setVisible$12$13::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setVisible$12$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setVisible$12$13",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setVisible$12$13::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setVisible$12$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setVisible$12$13::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setVisible$14$14 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setVisible$14$14, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CPlatformWindow* inst) {
		$set(this, inst$, inst);
	}
	virtual void run(int64_t blockerPtr) override {
		$nc(inst$)->lambda$setVisible$14(blockerPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setVisible$14$14>());
	}
	CPlatformWindow* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setVisible$14$14::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setVisible$14$14, inst$)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setVisible$14$14::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setVisible$14$14::*)(CPlatformWindow*)>(&CPlatformWindow$$Lambda$lambda$setVisible$14$14::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setVisible$14$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setVisible$14$14",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setVisible$14$14::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setVisible$14$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setVisible$14$14::class$ = nullptr;

class CPlatformWindow$$Lambda$miniaturize$15 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$miniaturize$15, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t window) override {
		$CWrapper$NSWindow::miniaturize(window);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$miniaturize$15>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$miniaturize$15::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$miniaturize$15::*)()>(&CPlatformWindow$$Lambda$miniaturize$15::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$miniaturize$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$miniaturize$15",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$miniaturize$15::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$miniaturize$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$miniaturize$15::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setVisible$16$16 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setVisible$16$16, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CPlatformWindow* inst) {
		$set(this, inst$, inst);
	}
	virtual void run(int64_t ownerPtr) override {
		$nc(inst$)->lambda$setVisible$16(ownerPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setVisible$16$16>());
	}
	CPlatformWindow* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setVisible$16$16::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setVisible$16$16, inst$)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setVisible$16$16::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setVisible$16$16::*)(CPlatformWindow*)>(&CPlatformWindow$$Lambda$lambda$setVisible$16$16::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setVisible$16$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setVisible$16$16",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setVisible$16$16::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setVisible$16$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setVisible$16$16::class$ = nullptr;

class CPlatformWindow$$Lambda$orderFront$17 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$orderFront$17, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t window) override {
		$CWrapper$NSWindow::orderFront(window);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$orderFront$17>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$orderFront$17::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$orderFront$17::*)()>(&CPlatformWindow$$Lambda$orderFront$17::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$orderFront$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$orderFront$17",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$orderFront$17::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$orderFront$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$orderFront$17::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setVisible$18$18 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setVisible$18$18, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CPlatformWindow* inst) {
		$set(this, inst$, inst);
	}
	virtual void run(int64_t childPtr) override {
		$nc(inst$)->lambda$setVisible$18(childPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setVisible$18$18>());
	}
	CPlatformWindow* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setVisible$18$18::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setVisible$18$18, inst$)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setVisible$18$18::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setVisible$18$18::*)(CPlatformWindow*)>(&CPlatformWindow$$Lambda$lambda$setVisible$18$18::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setVisible$18$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setVisible$18$18",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setVisible$18$18::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setVisible$18$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setVisible$18$18::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setTitle$19$19 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setTitle$19$19, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($String* title) {
		$set(this, title, title);
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setTitle$19(title, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setTitle$19$19>());
	}
	$String* title = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setTitle$19$19::fieldInfos[2] = {
	{"title", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setTitle$19$19, title)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setTitle$19$19::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setTitle$19$19::*)($String*)>(&CPlatformWindow$$Lambda$lambda$setTitle$19$19::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setTitle$19$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setTitle$19$19",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setTitle$19$19::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setTitle$19$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setTitle$19$19::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$updateIconImages$21$20 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$updateIconImages$21$20, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($CImage* cImage) {
		$set(this, cImage, cImage);
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$updateIconImages$21(cImage, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$updateIconImages$21$20>());
	}
	$CImage* cImage = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$updateIconImages$21$20::fieldInfos[2] = {
	{"cImage", "Lsun/lwawt/macosx/CImage;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$updateIconImages$21$20, cImage)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$updateIconImages$21$20::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CImage;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$updateIconImages$21$20::*)($CImage*)>(&CPlatformWindow$$Lambda$lambda$updateIconImages$21$20::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$updateIconImages$21$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$updateIconImages$21$20",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$updateIconImages$21$20::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$updateIconImages$21$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$updateIconImages$21$20::class$ = nullptr;

class CPlatformWindow$$Lambda$nativePushNSWindowToBack$21 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$nativePushNSWindowToBack$21, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t nsWindowPtr) override {
		CPlatformWindow::nativePushNSWindowToBack(nsWindowPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$nativePushNSWindowToBack$21>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$nativePushNSWindowToBack$21::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$nativePushNSWindowToBack$21::*)()>(&CPlatformWindow$$Lambda$nativePushNSWindowToBack$21::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$nativePushNSWindowToBack$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$nativePushNSWindowToBack$21",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$nativePushNSWindowToBack$21::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$nativePushNSWindowToBack$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$nativePushNSWindowToBack$21::class$ = nullptr;

class CPlatformWindow$$Lambda$nativePushNSWindowToFront$22 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$nativePushNSWindowToFront$22, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t nsWindowPtr) override {
		CPlatformWindow::nativePushNSWindowToFront(nsWindowPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$nativePushNSWindowToFront$22>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$nativePushNSWindowToFront$22::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$nativePushNSWindowToFront$22::*)()>(&CPlatformWindow$$Lambda$nativePushNSWindowToFront$22::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$nativePushNSWindowToFront$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$nativePushNSWindowToFront$22",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$nativePushNSWindowToFront$22::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$nativePushNSWindowToFront$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$nativePushNSWindowToFront$22::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int32_t minW, int32_t minH, int32_t maxW, int32_t maxH) {
		this->minW = minW;
		this->minH = minH;
		this->maxW = maxW;
		this->maxH = maxH;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setSizeConstraints$22(minW, minH, maxW, maxH, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23>());
	}
	int32_t minW = 0;
	int32_t minH = 0;
	int32_t maxW = 0;
	int32_t maxH = 0;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23::fieldInfos[5] = {
	{"minW", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23, minW)},
	{"minH", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23, minH)},
	{"maxW", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23, maxW)},
	{"maxH", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23, maxH)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23::methodInfos[3] = {
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23::*)(int32_t,int32_t,int32_t,int32_t)>(&CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$requestWindowFocus$23(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24::*)()>(&CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$isActive$24$25 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$isActive$24$25, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($AtomicBoolean* ref) {
		$set(this, ref, ref);
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$isActive$24(ref, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$isActive$24$25>());
	}
	$AtomicBoolean* ref = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$isActive$24$25::fieldInfos[2] = {
	{"ref", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$isActive$24$25, ref)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$isActive$24$25::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicBoolean;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$isActive$24$25::*)($AtomicBoolean*)>(&CPlatformWindow$$Lambda$lambda$isActive$24$25::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$isActive$24$25::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$isActive$24$25",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$isActive$24$25::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$isActive$24$25, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$isActive$24$25::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setOpacity$25$26 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setOpacity$25$26, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(float opacity) {
		this->opacity = opacity;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setOpacity$25(opacity, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setOpacity$25$26>());
	}
	float opacity = 0.0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setOpacity$25$26::fieldInfos[2] = {
	{"opacity", "F", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setOpacity$25$26, opacity)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setOpacity$25$26::methodInfos[3] = {
	{"<init>", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setOpacity$25$26::*)(float)>(&CPlatformWindow$$Lambda$lambda$setOpacity$25$26::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setOpacity$25$26::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setOpacity$25$26",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setOpacity$25$26::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setOpacity$25$26, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setOpacity$25$26::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setOpaque$26$27 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setOpaque$26$27, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(bool isOpaque) {
		this->isOpaque = isOpaque;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setOpaque$26(isOpaque, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setOpaque$26$27>());
	}
	bool isOpaque = false;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setOpaque$26$27::fieldInfos[2] = {
	{"isOpaque", "Z", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setOpaque$26$27, isOpaque)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setOpaque$26$27::methodInfos[3] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setOpaque$26$27::*)(bool)>(&CPlatformWindow$$Lambda$lambda$setOpaque$26$27::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setOpaque$26$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setOpaque$26$27",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setOpaque$26$27::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setOpaque$26$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setOpaque$26$27::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setOpaque$27$28 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setOpaque$27$28, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setOpaque$27(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setOpaque$27$28>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setOpaque$27$28::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setOpaque$27$28::*)()>(&CPlatformWindow$$Lambda$lambda$setOpaque$27$28::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setOpaque$27$28::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setOpaque$27$28",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setOpaque$27$28::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setOpaque$27$28, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setOpaque$27$28::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setOpaque$28$29 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setOpaque$28$29, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int32_t rgb) {
		this->rgb = rgb;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setOpaque$28(rgb, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setOpaque$28$29>());
	}
	int32_t rgb = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setOpaque$28$29::fieldInfos[2] = {
	{"rgb", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setOpaque$28$29, rgb)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setOpaque$28$29::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setOpaque$28$29::*)(int32_t)>(&CPlatformWindow$$Lambda$lambda$setOpaque$28$29::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setOpaque$28$29::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setOpaque$28$29",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setOpaque$28$29::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setOpaque$28$29, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setOpaque$28$29::class$ = nullptr;

class CPlatformWindow$$Lambda$invalidateShadow$30 : public $Runnable {
	$class(CPlatformWindow$$Lambda$invalidateShadow$30, $NO_CLASS_INIT, $Runnable)
public:
	void init$(CPlatformWindow* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->invalidateShadow();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$invalidateShadow$30>());
	}
	CPlatformWindow* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$invalidateShadow$30::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$invalidateShadow$30, inst$)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$invalidateShadow$30::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$invalidateShadow$30::*)(CPlatformWindow*)>(&CPlatformWindow$$Lambda$invalidateShadow$30::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$invalidateShadow$30::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$invalidateShadow$30",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$invalidateShadow$30::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$invalidateShadow$30, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$invalidateShadow$30::class$ = nullptr;

class CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t nsWindowPtr) override {
		CPlatformWindow::nativeEnterFullScreenMode(nsWindowPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31::*)()>(&CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31::class$ = nullptr;

class CPlatformWindow$$Lambda$nativeExitFullScreenMode$32 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$nativeExitFullScreenMode$32, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t nsWindowPtr) override {
		CPlatformWindow::nativeExitFullScreenMode(nsWindowPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$nativeExitFullScreenMode$32>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$nativeExitFullScreenMode$32::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$nativeExitFullScreenMode$32::*)()>(&CPlatformWindow$$Lambda$nativeExitFullScreenMode$32::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$nativeExitFullScreenMode$32::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$nativeExitFullScreenMode$32",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$nativeExitFullScreenMode$32::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$nativeExitFullScreenMode$32, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$nativeExitFullScreenMode$32::class$ = nullptr;

class CPlatformWindow$$Lambda$deminiaturize$33 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$deminiaturize$33, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t window) override {
		$CWrapper$NSWindow::deminiaturize(window);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$deminiaturize$33>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$deminiaturize$33::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$deminiaturize$33::*)()>(&CPlatformWindow$$Lambda$deminiaturize$33::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$deminiaturize$33::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$deminiaturize$33",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$deminiaturize$33::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$deminiaturize$33, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$deminiaturize$33::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setModalBlocked$29(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34::*)()>(&CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(bool blocked) {
		this->blocked = blocked;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setModalBlocked$30(blocked, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35>());
	}
	bool blocked = false;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35::fieldInfos[2] = {
	{"blocked", "Z", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35, blocked)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35::methodInfos[3] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35::*)(bool)>(&CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$invalidateShadow$31(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36::*)()>(&CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($AtomicBoolean* ref) {
		$set(this, ref, ref);
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$deliverMoveResizeEvent$32(ref, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37>());
	}
	$AtomicBoolean* ref = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37::fieldInfos[2] = {
	{"ref", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37, ref)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicBoolean;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37::*)($AtomicBoolean*)>(&CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$checkBlockingAndOrder$33(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38::*)()>(&CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CPlatformWindow* pw) {
		$set(this, pw, pw);
	}
	virtual void run(int64_t underPtr) override {
		CPlatformWindow::lambda$orderAboveSiblingsImpl$35(pw, underPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39>());
	}
	CPlatformWindow* pw = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39::fieldInfos[2] = {
	{"pw", "Lsun/lwawt/macosx/CPlatformWindow;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39, pw)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39::*)(CPlatformWindow*)>(&CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$applyWindowLevel$36(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40::*)()>(&CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$applyWindowLevel$37(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41::*)()>(&CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setVisible$15$42 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setVisible$15$42, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int64_t ownerPtr) {
		this->ownerPtr = ownerPtr;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setVisible$15(ownerPtr, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setVisible$15$42>());
	}
	int64_t ownerPtr = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setVisible$15$42::fieldInfos[2] = {
	{"ownerPtr", "J", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setVisible$15$42, ownerPtr)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setVisible$15$42::methodInfos[3] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setVisible$15$42::*)(int64_t)>(&CPlatformWindow$$Lambda$lambda$setVisible$15$42::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setVisible$15$42::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setVisible$15$42",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setVisible$15$42::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setVisible$15$42, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setVisible$15$42::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$updateIconImages$20$43 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$updateIconImages$20$43, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int64_t ptr) {
		this->ptr = ptr;
	}
	virtual void run(int64_t imagePtr) override {
		CPlatformWindow::lambda$updateIconImages$20(ptr, imagePtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$updateIconImages$20$43>());
	}
	int64_t ptr = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$updateIconImages$20$43::fieldInfos[2] = {
	{"ptr", "J", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$updateIconImages$20$43, ptr)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$updateIconImages$20$43::methodInfos[3] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$updateIconImages$20$43::*)(int64_t)>(&CPlatformWindow$$Lambda$lambda$updateIconImages$20$43::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$updateIconImages$20$43::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$updateIconImages$20$43",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$updateIconImages$20$43::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$updateIconImages$20$43, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$updateIconImages$20$43::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setVisible$17$44 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setVisible$17$44, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int64_t childPtr) {
		this->childPtr = childPtr;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setVisible$17(childPtr, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setVisible$17$44>());
	}
	int64_t childPtr = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setVisible$17$44::fieldInfos[2] = {
	{"childPtr", "J", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setVisible$17$44, childPtr)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setVisible$17$44::methodInfos[3] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setVisible$17$44::*)(int64_t)>(&CPlatformWindow$$Lambda$lambda$setVisible$17$44::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setVisible$17$44::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setVisible$17$44",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setVisible$17$44::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setVisible$17$44, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setVisible$17$44::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setVisible$13$45 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setVisible$13$45, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int64_t blockerPtr) {
		this->blockerPtr = blockerPtr;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setVisible$13(blockerPtr, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setVisible$13$45>());
	}
	int64_t blockerPtr = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setVisible$13$45::fieldInfos[2] = {
	{"blockerPtr", "J", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setVisible$13$45, blockerPtr)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setVisible$13$45::methodInfos[3] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setVisible$13$45::*)(int64_t)>(&CPlatformWindow$$Lambda$lambda$setVisible$13$45::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setVisible$13$45::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setVisible$13$45",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setVisible$13$45::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setVisible$13$45, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setVisible$13$45::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setVisible$9$46 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setVisible$9$46, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int64_t viewPtr) {
		this->viewPtr = viewPtr;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setVisible$9(viewPtr, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setVisible$9$46>());
	}
	int64_t viewPtr = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setVisible$9$46::fieldInfos[2] = {
	{"viewPtr", "J", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setVisible$9$46, viewPtr)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setVisible$9$46::methodInfos[3] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setVisible$9$46::*)(int64_t)>(&CPlatformWindow$$Lambda$lambda$setVisible$9$46::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setVisible$9$46::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setVisible$9$46",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setVisible$9$46::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setVisible$9$46, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setVisible$9$46::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$setMenuBar$4$47 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$$Lambda$lambda$setMenuBar$4$47, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int64_t nsWindowPtr) {
		this->nsWindowPtr = nsWindowPtr;
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow::lambda$setMenuBar$4(nsWindowPtr, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$setMenuBar$4$47>());
	}
	int64_t nsWindowPtr = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$setMenuBar$4$47::fieldInfos[2] = {
	{"nsWindowPtr", "J", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$setMenuBar$4$47, nsWindowPtr)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$setMenuBar$4$47::methodInfos[3] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$setMenuBar$4$47::*)(int64_t)>(&CPlatformWindow$$Lambda$lambda$setMenuBar$4$47::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$setMenuBar$4$47::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$setMenuBar$4$47",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$setMenuBar$4$47::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$setMenuBar$4$47, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$setMenuBar$4$47::class$ = nullptr;

class CPlatformWindow$$Lambda$lambda$initialize$1$48 : public $CFRetainedResource$CFNativeActionGet {
	$class(CPlatformWindow$$Lambda$lambda$initialize$1$48, $NO_CLASS_INIT, $CFRetainedResource$CFNativeActionGet)
public:
	void init$(CPlatformWindow* inst, $AtomicLong* ref, int64_t viewPtr, int32_t styleBits, $Rectangle* bounds) {
		$set(this, inst$, inst);
		$set(this, ref, ref);
		this->viewPtr = viewPtr;
		this->styleBits = styleBits;
		$set(this, bounds, bounds);
	}
	virtual int64_t run(int64_t ownerPtr) override {
		 return $nc(inst$)->lambda$initialize$1(ref, viewPtr, styleBits, bounds, ownerPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$$Lambda$lambda$initialize$1$48>());
	}
	CPlatformWindow* inst$ = nullptr;
	$AtomicLong* ref = nullptr;
	int64_t viewPtr = 0;
	int32_t styleBits = 0;
	$Rectangle* bounds = nullptr;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$$Lambda$lambda$initialize$1$48::fieldInfos[6] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$initialize$1$48, inst$)},
	{"ref", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$initialize$1$48, ref)},
	{"viewPtr", "J", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$initialize$1$48, viewPtr)},
	{"styleBits", "I", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$initialize$1$48, styleBits)},
	{"bounds", "Ljava/awt/Rectangle;", nullptr, $PUBLIC, $field(CPlatformWindow$$Lambda$lambda$initialize$1$48, bounds)},
	{}
};
$MethodInfo CPlatformWindow$$Lambda$lambda$initialize$1$48::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/util/concurrent/atomic/AtomicLong;JILjava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$$Lambda$lambda$initialize$1$48::*)(CPlatformWindow*,$AtomicLong*,int64_t,int32_t,$Rectangle*)>(&CPlatformWindow$$Lambda$lambda$initialize$1$48::init$))},
	{"run", "(J)J", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$$Lambda$lambda$initialize$1$48::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$$Lambda$lambda$initialize$1$48",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeActionGet",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$$Lambda$lambda$initialize$1$48::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$$Lambda$lambda$initialize$1$48, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$$Lambda$lambda$initialize$1$48::class$ = nullptr;

$FieldInfo _CPlatformWindow_FieldInfo_[] = {
	{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CPlatformWindow, logger)},
	{"focusLogger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CPlatformWindow, focusLogger)},
	{"WINDOW_BRUSH_METAL_LOOK", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_BRUSH_METAL_LOOK)},
	{"WINDOW_DRAGGABLE_BACKGROUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_DRAGGABLE_BACKGROUND)},
	{"WINDOW_ALPHA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_ALPHA)},
	{"WINDOW_SHADOW", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_SHADOW)},
	{"WINDOW_STYLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_STYLE)},
	{"WINDOW_SHADOW_REVALIDATE_NOW", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_SHADOW_REVALIDATE_NOW)},
	{"WINDOW_DOCUMENT_MODIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_DOCUMENT_MODIFIED)},
	{"WINDOW_DOCUMENT_FILE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_DOCUMENT_FILE)},
	{"WINDOW_CLOSEABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_CLOSEABLE)},
	{"WINDOW_MINIMIZABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_MINIMIZABLE)},
	{"WINDOW_ZOOMABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_ZOOMABLE)},
	{"WINDOW_HIDES_ON_DEACTIVATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_HIDES_ON_DEACTIVATE)},
	{"WINDOW_DOC_MODAL_SHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_DOC_MODAL_SHEET)},
	{"WINDOW_FADE_DELEGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_FADE_DELEGATE)},
	{"WINDOW_FADE_IN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_FADE_IN)},
	{"WINDOW_FADE_OUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_FADE_OUT)},
	{"WINDOW_FULLSCREENABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_FULLSCREENABLE)},
	{"WINDOW_FULL_CONTENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_FULL_CONTENT)},
	{"WINDOW_TRANSPARENT_TITLE_BAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_TRANSPARENT_TITLE_BAR)},
	{"WINDOW_TITLE_VISIBLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, WINDOW_TITLE_VISIBLE)},
	{"MAC_OS_TABBED_WINDOW", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CPlatformWindow, MAC_OS_TABBED_WINDOW)},
	{"MODELESS", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, MODELESS)},
	{"DOCUMENT_MODAL", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, DOCUMENT_MODAL)},
	{"APPLICATION_MODAL", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, APPLICATION_MODAL)},
	{"TOOLKIT_MODAL", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, TOOLKIT_MODAL)},
	{"_RESERVED_FOR_DATA", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, _RESERVED_FOR_DATA)},
	{"DECORATED", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, DECORATED)},
	{"TEXTURED", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, TEXTURED)},
	{"UNIFIED", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, UNIFIED)},
	{"UTILITY", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, UTILITY)},
	{"HUD", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, HUD)},
	{"SHEET", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, SHEET)},
	{"CLOSEABLE", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, CLOSEABLE)},
	{"MINIMIZABLE", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, MINIMIZABLE)},
	{"RESIZABLE", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, RESIZABLE)},
	{"NONACTIVATING", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, NONACTIVATING)},
	{"IS_DIALOG", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, IS_DIALOG)},
	{"IS_MODAL", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, IS_MODAL)},
	{"IS_POPUP", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, IS_POPUP)},
	{"FULL_WINDOW_CONTENT", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, FULL_WINDOW_CONTENT)},
	{"_STYLE_PROP_BITMASK", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, _STYLE_PROP_BITMASK)},
	{"HAS_SHADOW", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, HAS_SHADOW)},
	{"ZOOMABLE", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, ZOOMABLE)},
	{"ALWAYS_ON_TOP", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, ALWAYS_ON_TOP)},
	{"HIDES_ON_DEACTIVATE", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, HIDES_ON_DEACTIVATE)},
	{"DRAGGABLE_BACKGROUND", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, DRAGGABLE_BACKGROUND)},
	{"DOCUMENT_MODIFIED", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, DOCUMENT_MODIFIED)},
	{"FULLSCREENABLE", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, FULLSCREENABLE)},
	{"TRANSPARENT_TITLE_BAR", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, TRANSPARENT_TITLE_BAR)},
	{"TITLE_VISIBLE", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, TITLE_VISIBLE)},
	{"_METHOD_PROP_BITMASK", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, _METHOD_PROP_BITMASK)},
	{"SHOULD_BECOME_KEY", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, SHOULD_BECOME_KEY)},
	{"SHOULD_BECOME_MAIN", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, SHOULD_BECOME_MAIN)},
	{"MODAL_EXCLUDED", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, MODAL_EXCLUDED)},
	{"_CALLBACK_PROP_BITMASK", "I", nullptr, $STATIC | $FINAL, $constField(CPlatformWindow, _CALLBACK_PROP_BITMASK)},
	{"CLIENT_PROPERTY_APPLICATOR", "Lcom/apple/laf/ClientPropertyApplicator;", "Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/JRootPane;Lsun/lwawt/macosx/CPlatformWindow;>;", $STATIC, $staticField(CPlatformWindow, CLIENT_PROPERTY_APPLICATOR)},
	{"siblingsComparator", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/awt/Window;>;", $PRIVATE | $FINAL, $field(CPlatformWindow, siblingsComparator)},
	{"nativeBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(CPlatformWindow, nativeBounds)},
	{"isFullScreenMode", "Z", nullptr, $PRIVATE | $VOLATILE, $field(CPlatformWindow, isFullScreenMode$)},
	{"isFullScreenAnimationOn", "Z", nullptr, $PRIVATE, $field(CPlatformWindow, isFullScreenAnimationOn)},
	{"isInFullScreen", "Z", nullptr, $PRIVATE | $VOLATILE, $field(CPlatformWindow, isInFullScreen)},
	{"isIconifyAnimationActive", "Z", nullptr, $PRIVATE | $VOLATILE, $field(CPlatformWindow, isIconifyAnimationActive)},
	{"isZoomed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(CPlatformWindow, isZoomed)},
	{"target", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(CPlatformWindow, target)},
	{"peer", "Lsun/lwawt/LWWindowPeer;", nullptr, $PRIVATE, $field(CPlatformWindow, peer)},
	{"contentView", "Lsun/lwawt/macosx/CPlatformView;", nullptr, $PROTECTED, $field(CPlatformWindow, contentView)},
	{"owner", "Lsun/lwawt/macosx/CPlatformWindow;", nullptr, $PROTECTED, $field(CPlatformWindow, owner)},
	{"visible", "Z", nullptr, $PROTECTED, $field(CPlatformWindow, visible)},
	{"undecorated", "Z", nullptr, $PRIVATE, $field(CPlatformWindow, undecorated)},
	{"normalBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(CPlatformWindow, normalBounds)},
	{"responder", "Lsun/lwawt/macosx/CPlatformResponder;", nullptr, $PRIVATE, $field(CPlatformWindow, responder)},
	{"lastBecomeMainTime", "J", nullptr, $PRIVATE, $field(CPlatformWindow, lastBecomeMainTime)},
	{}
};

$MethodInfo _CPlatformWindow_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::init$))},
	{"IS", "(II)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&CPlatformWindow::IS))},
	{"SET", "(IIZ)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,bool)>(&CPlatformWindow::SET))},
	{"_toggleFullScreenMode", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CPlatformWindow::*)(int64_t)>(&CPlatformWindow::_toggleFullScreenMode))},
	{"access$001", "(Lsun/lwawt/macosx/CPlatformWindow;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(CPlatformWindow*)>(&CPlatformWindow::access$001))},
	{"applyWindowLevel", "(Ljava/awt/Window;)V", nullptr, $PROTECTED},
	{"checkBlockingAndOrder", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CPlatformWindow::*)()>(&CPlatformWindow::checkBlockingAndOrder))},
	{"checkZoom", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::checkZoom))},
	{"createContentView", "()Lsun/lwawt/macosx/CPlatformView;", nullptr, 0},
	{"createPlatformResponder", "()Lsun/lwawt/macosx/CPlatformResponder;", nullptr, $PROTECTED},
	{"deliverIconify", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)(bool)>(&CPlatformWindow::deliverIconify))},
	{"deliverMoveResizeEvent", "(IIIIZ)V", nullptr, $PROTECTED},
	{"deliverNCMouseDown", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::deliverNCMouseDown))},
	{"deliverWindowClosingEvent", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::deliverWindowClosingEvent))},
	{"deliverWindowFocusEvent", "(ZLsun/lwawt/macosx/CPlatformWindow;)V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)(bool,CPlatformWindow*)>(&CPlatformWindow::deliverWindowFocusEvent))},
	{"deliverZoom", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)(bool)>(&CPlatformWindow::deliverZoom))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"enterFullScreenMode", "()V", nullptr, $PUBLIC},
	{"exitFullScreenMode", "()V", nullptr, $PUBLIC},
	{"flushBuffers", "()V", nullptr, 0},
	{"getContentView", "()Lsun/lwawt/macosx/CPlatformView;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGraphicsDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC},
	{"getImageForTarget", "()Lsun/lwawt/macosx/CImage;", nullptr, $PRIVATE, $method(static_cast<$CImage*(CPlatformWindow::*)()>(&CPlatformWindow::getImageForTarget))},
	{"getInitialStyleBits", "()I", nullptr, $PROTECTED},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLayerPtr", "()J", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getNativeViewPtr", "(Lsun/lwawt/PlatformWindow;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($PlatformWindow*)>(&CPlatformWindow::getNativeViewPtr))},
	{"getOwnerFrameOrDialog", "(Ljava/awt/Window;)Ljava/awt/Window;", nullptr, $PRIVATE, $method(static_cast<$Window*(CPlatformWindow::*)($Window*)>(&CPlatformWindow::getOwnerFrameOrDialog))},
	{"getPeer", "()Lsun/lwawt/LWWindowPeer;", nullptr, $PUBLIC},
	{"getRootOwner", "()Lsun/lwawt/macosx/CPlatformWindow;", nullptr, $PRIVATE, $method(static_cast<CPlatformWindow*(CPlatformWindow::*)()>(&CPlatformWindow::getRootOwner))},
	{"getScreenSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"initialize", "(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC},
	{"initializeBase", "(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;Lsun/lwawt/PlatformWindow;)V", nullptr, 0},
	{"invalidateShadow", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::invalidateShadow))},
	{"isActive", "()Z", nullptr, $PUBLIC},
	{"isBlocked", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CPlatformWindow::*)()>(&CPlatformWindow::isBlocked))},
	{"isFullScreenMode", "()Z", nullptr, $PUBLIC},
	{"isIconified", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CPlatformWindow::*)()>(&CPlatformWindow::isIconified))},
	{"isMaximized", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CPlatformWindow::*)()>(&CPlatformWindow::isMaximized))},
	{"isNativelyFocusableWindow", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CPlatformWindow::*)()>(&CPlatformWindow::isNativelyFocusableWindow))},
	{"isOneOfOwnersOrSelf", "(Lsun/lwawt/macosx/CPlatformWindow;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CPlatformWindow::*)(CPlatformWindow*)>(&CPlatformWindow::isOneOfOwnersOrSelf))},
	{"isSimpleWindowOwnedByEmbeddedFrame", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CPlatformWindow::*)()>(&CPlatformWindow::isSimpleWindowOwnedByEmbeddedFrame))},
	{"isUnderMouse", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"lambda$applyWindowLevel$36", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::lambda$applyWindowLevel$36))},
	{"lambda$applyWindowLevel$37", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::lambda$applyWindowLevel$37))},
	{"lambda$checkBlockingAndOrder$33", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::lambda$checkBlockingAndOrder$33))},
	{"lambda$deliverMoveResizeEvent$32", "(Ljava/util/concurrent/atomic/AtomicBoolean;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($AtomicBoolean*,int64_t)>(&CPlatformWindow::lambda$deliverMoveResizeEvent$32))},
	{"lambda$getInsets$6", "(Ljava/util/concurrent/atomic/AtomicReference;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($AtomicReference*,int64_t)>(&CPlatformWindow::lambda$getInsets$6))},
	{"lambda$initialize$1", "(Ljava/util/concurrent/atomic/AtomicLong;JILjava/awt/Rectangle;J)J", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<int64_t(CPlatformWindow::*)($AtomicLong*,int64_t,int32_t,$Rectangle*,int64_t)>(&CPlatformWindow::lambda$initialize$1))},
	{"lambda$initialize$2", "(Ljava/util/concurrent/atomic/AtomicLong;ILjava/awt/Rectangle;J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CPlatformWindow::*)($AtomicLong*,int32_t,$Rectangle*,int64_t)>(&CPlatformWindow::lambda$initialize$2))},
	{"lambda$invalidateShadow$31", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::lambda$invalidateShadow$31))},
	{"lambda$isActive$24", "(Ljava/util/concurrent/atomic/AtomicBoolean;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($AtomicBoolean*,int64_t)>(&CPlatformWindow::lambda$isActive$24))},
	{"lambda$new$0", "(Ljava/awt/Window;Ljava/awt/Window;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($Window*,$Window*)>(&CPlatformWindow::lambda$new$0))},
	{"lambda$orderAboveSiblingsImpl$35", "(Lsun/lwawt/macosx/CPlatformWindow;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(CPlatformWindow*,int64_t)>(&CPlatformWindow::lambda$orderAboveSiblingsImpl$35))},
	{"lambda$requestWindowFocus$23", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::lambda$requestWindowFocus$23))},
	{"lambda$setBounds$7", "(IIIIJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t,int32_t,int64_t)>(&CPlatformWindow::lambda$setBounds$7))},
	{"lambda$setMaximizedBounds$8", "(IIIIJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t,int32_t,int64_t)>(&CPlatformWindow::lambda$setMaximizedBounds$8))},
	{"lambda$setMenuBar$4", "(JJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t,int64_t)>(&CPlatformWindow::lambda$setMenuBar$4))},
	{"lambda$setMenuBar$5", "(Lsun/lwawt/macosx/CMenuBar;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CMenuBar*,int64_t)>(&CPlatformWindow::lambda$setMenuBar$5))},
	{"lambda$setModalBlocked$29", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::lambda$setModalBlocked$29))},
	{"lambda$setModalBlocked$30", "(ZJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bool,int64_t)>(&CPlatformWindow::lambda$setModalBlocked$30))},
	{"lambda$setOpacity$25", "(FJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(float,int64_t)>(&CPlatformWindow::lambda$setOpacity$25))},
	{"lambda$setOpaque$26", "(ZJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bool,int64_t)>(&CPlatformWindow::lambda$setOpaque$26))},
	{"lambda$setOpaque$27", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::lambda$setOpaque$27))},
	{"lambda$setOpaque$28", "(IJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t,int64_t)>(&CPlatformWindow::lambda$setOpaque$28))},
	{"lambda$setSizeConstraints$22", "(IIIIJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t,int32_t,int64_t)>(&CPlatformWindow::lambda$setSizeConstraints$22))},
	{"lambda$setStyleBits$3", "(IZJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t,bool,int64_t)>(&CPlatformWindow::lambda$setStyleBits$3))},
	{"lambda$setTitle$19", "(Ljava/lang/String;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,int64_t)>(&CPlatformWindow::lambda$setTitle$19))},
	{"lambda$setVisible$10", "(J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CPlatformWindow::*)(int64_t)>(&CPlatformWindow::lambda$setVisible$10))},
	{"lambda$setVisible$11", "(ZJ)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CPlatformWindow::*)(bool,int64_t)>(&CPlatformWindow::lambda$setVisible$11))},
	{"lambda$setVisible$12", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::lambda$setVisible$12))},
	{"lambda$setVisible$13", "(JJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t,int64_t)>(&CPlatformWindow::lambda$setVisible$13))},
	{"lambda$setVisible$14", "(J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CPlatformWindow::*)(int64_t)>(&CPlatformWindow::lambda$setVisible$14))},
	{"lambda$setVisible$15", "(JJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t,int64_t)>(&CPlatformWindow::lambda$setVisible$15))},
	{"lambda$setVisible$16", "(J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CPlatformWindow::*)(int64_t)>(&CPlatformWindow::lambda$setVisible$16))},
	{"lambda$setVisible$17", "(JJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t,int64_t)>(&CPlatformWindow::lambda$setVisible$17))},
	{"lambda$setVisible$18", "(J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CPlatformWindow::*)(int64_t)>(&CPlatformWindow::lambda$setVisible$18))},
	{"lambda$setVisible$9", "(JJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t,int64_t)>(&CPlatformWindow::lambda$setVisible$9))},
	{"lambda$updateIconImages$20", "(JJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t,int64_t)>(&CPlatformWindow::lambda$updateIconImages$20))},
	{"lambda$updateIconImages$21", "(Lsun/lwawt/macosx/CImage;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CImage*,int64_t)>(&CPlatformWindow::lambda$updateIconImages$21))},
	{"maximize", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::maximize))},
	{"nativeCreateNSWindow", "(JJJDDDD)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CPlatformWindow::*)(int64_t,int64_t,int64_t,double,double,double,double)>(&CPlatformWindow::nativeCreateNSWindow))},
	{"nativeDispose", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::nativeDispose))},
	{"nativeEnterFullScreenMode", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::nativeEnterFullScreenMode))},
	{"nativeExitFullScreenMode", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::nativeExitFullScreenMode))},
	{"nativeGetNSWindowInsets", "(J)Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Insets*(*)(int64_t)>(&CPlatformWindow::nativeGetNSWindowInsets))},
	{"nativeGetTopmostPlatformWindowUnderMouse", "()Lsun/lwawt/macosx/CPlatformWindow;", nullptr, $STATIC | $NATIVE, $method(static_cast<CPlatformWindow*(*)()>(&CPlatformWindow::nativeGetTopmostPlatformWindowUnderMouse))},
	{"nativePushNSWindowToBack", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::nativePushNSWindowToBack))},
	{"nativePushNSWindowToFront", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::nativePushNSWindowToFront))},
	{"nativeRevalidateNSWindowShadow", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::nativeRevalidateNSWindowShadow))},
	{"nativeSetAllowAutomaticTabbingProperty", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(bool)>(&CPlatformWindow::nativeSetAllowAutomaticTabbingProperty))},
	{"nativeSetEnabled", "(JZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,bool)>(&CPlatformWindow::nativeSetEnabled))},
	{"nativeSetNSWindowBounds", "(JDDDD)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,double,double,double,double)>(&CPlatformWindow::nativeSetNSWindowBounds))},
	{"nativeSetNSWindowLocationByPlatform", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow::nativeSetNSWindowLocationByPlatform))},
	{"nativeSetNSWindowMenuBar", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&CPlatformWindow::nativeSetNSWindowMenuBar))},
	{"nativeSetNSWindowMinMax", "(JDDDD)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,double,double,double,double)>(&CPlatformWindow::nativeSetNSWindowMinMax))},
	{"nativeSetNSWindowMinimizedIcon", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&CPlatformWindow::nativeSetNSWindowMinimizedIcon))},
	{"nativeSetNSWindowRepresentedFilename", "(JLjava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$String*)>(&CPlatformWindow::nativeSetNSWindowRepresentedFilename))},
	{"nativeSetNSWindowStandardFrame", "(JDDDD)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,double,double,double,double)>(&CPlatformWindow::nativeSetNSWindowStandardFrame))},
	{"nativeSetNSWindowStyleBits", "(JII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int32_t)>(&CPlatformWindow::nativeSetNSWindowStyleBits))},
	{"nativeSetNSWindowTitle", "(JLjava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$String*)>(&CPlatformWindow::nativeSetNSWindowTitle))},
	{"nativeSynthesizeMouseEnteredExitedEvents", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&CPlatformWindow::nativeSynthesizeMouseEnteredExitedEvents))},
	{"nativeSynthesizeMouseEnteredExitedEvents", "(JI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t)>(&CPlatformWindow::nativeSynthesizeMouseEnteredExitedEvents))},
	{"orderAboveSiblings", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::orderAboveSiblings))},
	{"orderAboveSiblingsImpl", "([Ljava/awt/Window;)V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)($WindowArray*)>(&CPlatformWindow::orderAboveSiblingsImpl))},
	{"rejectFocusRequest", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"replaceSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"requestWindowFocus", "()Z", nullptr, $PUBLIC},
	{"setAlwaysOnTop", "(Z)V", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setCanFullscreen", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)(bool)>(&CPlatformWindow::setCanFullscreen))},
	{"setMaximizedBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC},
	{"setModalBlocked", "(Z)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setSizeConstraints", "(IIII)V", nullptr, $PUBLIC},
	{"setStyleBits", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)(int32_t,bool)>(&CPlatformWindow::setStyleBits))},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setWindowState", "(I)V", nullptr, $PUBLIC},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toggleFullScreen", "()V", nullptr, $PUBLIC},
	{"unmaximize", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::unmaximize))},
	{"updateFocusabilityForAutoRequestFocus", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)(bool)>(&CPlatformWindow::updateFocusabilityForAutoRequestFocus))},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC},
	{"windowDidBecomeMain", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::windowDidBecomeMain))},
	{"windowDidEnterFullScreen", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::windowDidEnterFullScreen))},
	{"windowDidExitFullScreen", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::windowDidExitFullScreen))},
	{"windowWillEnterFullScreen", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::windowWillEnterFullScreen))},
	{"windowWillExitFullScreen", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::windowWillExitFullScreen))},
	{"windowWillMiniaturize", "()V", nullptr, $PRIVATE, $method(static_cast<void(CPlatformWindow::*)()>(&CPlatformWindow::windowWillMiniaturize))},
	{}
};

#define _METHOD_INDEX__toggleFullScreenMode 7
#define _METHOD_INDEX_nativeCreateNSWindow 89
#define _METHOD_INDEX_nativeDispose 90
#define _METHOD_INDEX_nativeEnterFullScreenMode 91
#define _METHOD_INDEX_nativeExitFullScreenMode 92
#define _METHOD_INDEX_nativeGetNSWindowInsets 93
#define _METHOD_INDEX_nativeGetTopmostPlatformWindowUnderMouse 94
#define _METHOD_INDEX_nativePushNSWindowToBack 95
#define _METHOD_INDEX_nativePushNSWindowToFront 96
#define _METHOD_INDEX_nativeRevalidateNSWindowShadow 97
#define _METHOD_INDEX_nativeSetAllowAutomaticTabbingProperty 98
#define _METHOD_INDEX_nativeSetEnabled 99
#define _METHOD_INDEX_nativeSetNSWindowBounds 100
#define _METHOD_INDEX_nativeSetNSWindowLocationByPlatform 101
#define _METHOD_INDEX_nativeSetNSWindowMenuBar 102
#define _METHOD_INDEX_nativeSetNSWindowMinMax 103
#define _METHOD_INDEX_nativeSetNSWindowMinimizedIcon 104
#define _METHOD_INDEX_nativeSetNSWindowRepresentedFilename 105
#define _METHOD_INDEX_nativeSetNSWindowStandardFrame 106
#define _METHOD_INDEX_nativeSetNSWindowStyleBits 107
#define _METHOD_INDEX_nativeSetNSWindowTitle 108
#define _METHOD_INDEX_nativeSynthesizeMouseEnteredExitedEvents$109 109
#define _METHOD_INDEX_nativeSynthesizeMouseEnteredExitedEvents$110 110

$InnerClassInfo _CPlatformWindow_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPlatformWindow$16", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$15", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$14", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$13", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$12", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$11", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$10", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$9", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$8", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$7", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$6", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$5", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$4", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$3", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$2", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CPlatformWindow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CPlatformWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CPlatformWindow",
	"sun.lwawt.macosx.CFRetainedResource",
	"sun.lwawt.PlatformWindow",
	_CPlatformWindow_FieldInfo_,
	_CPlatformWindow_MethodInfo_,
	nullptr,
	nullptr,
	_CPlatformWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPlatformWindow$16,sun.lwawt.macosx.CPlatformWindow$15,sun.lwawt.macosx.CPlatformWindow$14,sun.lwawt.macosx.CPlatformWindow$13,sun.lwawt.macosx.CPlatformWindow$12,sun.lwawt.macosx.CPlatformWindow$11,sun.lwawt.macosx.CPlatformWindow$10,sun.lwawt.macosx.CPlatformWindow$9,sun.lwawt.macosx.CPlatformWindow$8,sun.lwawt.macosx.CPlatformWindow$7,sun.lwawt.macosx.CPlatformWindow$6,sun.lwawt.macosx.CPlatformWindow$5,sun.lwawt.macosx.CPlatformWindow$4,sun.lwawt.macosx.CPlatformWindow$3,sun.lwawt.macosx.CPlatformWindow$2,sun.lwawt.macosx.CPlatformWindow$1"
};

$Object* allocate$CPlatformWindow($Class* clazz) {
	return $of($alloc(CPlatformWindow));
}

void CPlatformWindow::finalize() {
	this->$CFRetainedResource::finalize();
}

int32_t CPlatformWindow::hashCode() {
	 return this->$CFRetainedResource::hashCode();
}

bool CPlatformWindow::equals(Object$* arg0) {
	 return this->$CFRetainedResource::equals(arg0);
}

$Object* CPlatformWindow::clone() {
	 return this->$CFRetainedResource::clone();
}

$String* CPlatformWindow::toString() {
	 return this->$CFRetainedResource::toString();
}

$PlatformLogger* CPlatformWindow::logger = nullptr;
$PlatformLogger* CPlatformWindow::focusLogger = nullptr;
$String* CPlatformWindow::WINDOW_BRUSH_METAL_LOOK = nullptr;
$String* CPlatformWindow::WINDOW_DRAGGABLE_BACKGROUND = nullptr;
$String* CPlatformWindow::WINDOW_ALPHA = nullptr;
$String* CPlatformWindow::WINDOW_SHADOW = nullptr;
$String* CPlatformWindow::WINDOW_STYLE = nullptr;
$String* CPlatformWindow::WINDOW_SHADOW_REVALIDATE_NOW = nullptr;
$String* CPlatformWindow::WINDOW_DOCUMENT_MODIFIED = nullptr;
$String* CPlatformWindow::WINDOW_DOCUMENT_FILE = nullptr;
$String* CPlatformWindow::WINDOW_CLOSEABLE = nullptr;
$String* CPlatformWindow::WINDOW_MINIMIZABLE = nullptr;
$String* CPlatformWindow::WINDOW_ZOOMABLE = nullptr;
$String* CPlatformWindow::WINDOW_HIDES_ON_DEACTIVATE = nullptr;
$String* CPlatformWindow::WINDOW_DOC_MODAL_SHEET = nullptr;
$String* CPlatformWindow::WINDOW_FADE_DELEGATE = nullptr;
$String* CPlatformWindow::WINDOW_FADE_IN = nullptr;
$String* CPlatformWindow::WINDOW_FADE_OUT = nullptr;
$String* CPlatformWindow::WINDOW_FULLSCREENABLE = nullptr;
$String* CPlatformWindow::WINDOW_FULL_CONTENT = nullptr;
$String* CPlatformWindow::WINDOW_TRANSPARENT_TITLE_BAR = nullptr;
$String* CPlatformWindow::WINDOW_TITLE_VISIBLE = nullptr;
$String* CPlatformWindow::MAC_OS_TABBED_WINDOW = nullptr;
$ClientPropertyApplicator* CPlatformWindow::CLIENT_PROPERTY_APPLICATOR = nullptr;

void CPlatformWindow::access$001(CPlatformWindow* x0) {
	$init(CPlatformWindow);
	$nc(x0)->$CFRetainedResource::dispose();
}

int64_t CPlatformWindow::nativeCreateNSWindow(int64_t nsViewPtr, int64_t ownerPtr, int64_t styleBits, double x, double y, double w, double h) {
	int64_t $ret = 0;
	$prepareNative(CPlatformWindow, nativeCreateNSWindow, int64_t, int64_t nsViewPtr, int64_t ownerPtr, int64_t styleBits, double x, double y, double w, double h);
	$ret = $invokeNative(nsViewPtr, ownerPtr, styleBits, x, y, w, h);
	$finishNative();
	return $ret;
}

void CPlatformWindow::nativeSetNSWindowStyleBits(int64_t nsWindowPtr, int32_t mask, int32_t data) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeSetNSWindowStyleBits, void, int64_t nsWindowPtr, int32_t mask, int32_t data);
	$invokeNativeStatic(nsWindowPtr, mask, data);
	$finishNativeStatic();
}

void CPlatformWindow::nativeSetNSWindowMenuBar(int64_t nsWindowPtr, int64_t menuBarPtr) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeSetNSWindowMenuBar, void, int64_t nsWindowPtr, int64_t menuBarPtr);
	$invokeNativeStatic(nsWindowPtr, menuBarPtr);
	$finishNativeStatic();
}

$Insets* CPlatformWindow::nativeGetNSWindowInsets(int64_t nsWindowPtr) {
	$init(CPlatformWindow);
	$var($Insets, $ret, nullptr);
	$prepareNativeStatic(CPlatformWindow, nativeGetNSWindowInsets, $Insets*, int64_t nsWindowPtr);
	$assign($ret, $invokeNativeStaticObject(nsWindowPtr));
	$finishNativeStatic();
	return $ret;
}

void CPlatformWindow::nativeSetNSWindowBounds(int64_t nsWindowPtr, double x, double y, double w, double h) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeSetNSWindowBounds, void, int64_t nsWindowPtr, double x, double y, double w, double h);
	$invokeNativeStatic(nsWindowPtr, x, y, w, h);
	$finishNativeStatic();
}

void CPlatformWindow::nativeSetNSWindowLocationByPlatform(int64_t nsWindowPtr) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeSetNSWindowLocationByPlatform, void, int64_t nsWindowPtr);
	$invokeNativeStatic(nsWindowPtr);
	$finishNativeStatic();
}

void CPlatformWindow::nativeSetNSWindowStandardFrame(int64_t nsWindowPtr, double x, double y, double w, double h) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeSetNSWindowStandardFrame, void, int64_t nsWindowPtr, double x, double y, double w, double h);
	$invokeNativeStatic(nsWindowPtr, x, y, w, h);
	$finishNativeStatic();
}

void CPlatformWindow::nativeSetNSWindowMinMax(int64_t nsWindowPtr, double minW, double minH, double maxW, double maxH) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeSetNSWindowMinMax, void, int64_t nsWindowPtr, double minW, double minH, double maxW, double maxH);
	$invokeNativeStatic(nsWindowPtr, minW, minH, maxW, maxH);
	$finishNativeStatic();
}

void CPlatformWindow::nativePushNSWindowToBack(int64_t nsWindowPtr) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativePushNSWindowToBack, void, int64_t nsWindowPtr);
	$invokeNativeStatic(nsWindowPtr);
	$finishNativeStatic();
}

void CPlatformWindow::nativePushNSWindowToFront(int64_t nsWindowPtr) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativePushNSWindowToFront, void, int64_t nsWindowPtr);
	$invokeNativeStatic(nsWindowPtr);
	$finishNativeStatic();
}

void CPlatformWindow::nativeSetNSWindowTitle(int64_t nsWindowPtr, $String* title) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeSetNSWindowTitle, void, int64_t nsWindowPtr, $String* title);
	$invokeNativeStatic(nsWindowPtr, title);
	$finishNativeStatic();
}

void CPlatformWindow::nativeRevalidateNSWindowShadow(int64_t nsWindowPtr) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeRevalidateNSWindowShadow, void, int64_t nsWindowPtr);
	$invokeNativeStatic(nsWindowPtr);
	$finishNativeStatic();
}

void CPlatformWindow::nativeSetNSWindowMinimizedIcon(int64_t nsWindowPtr, int64_t nsImage) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeSetNSWindowMinimizedIcon, void, int64_t nsWindowPtr, int64_t nsImage);
	$invokeNativeStatic(nsWindowPtr, nsImage);
	$finishNativeStatic();
}

void CPlatformWindow::nativeSetNSWindowRepresentedFilename(int64_t nsWindowPtr, $String* representedFilename) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeSetNSWindowRepresentedFilename, void, int64_t nsWindowPtr, $String* representedFilename);
	$invokeNativeStatic(nsWindowPtr, representedFilename);
	$finishNativeStatic();
}

void CPlatformWindow::nativeSetAllowAutomaticTabbingProperty(bool allowAutomaticWindowTabbing) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeSetAllowAutomaticTabbingProperty, void, bool allowAutomaticWindowTabbing);
	$invokeNativeStatic(allowAutomaticWindowTabbing);
	$finishNativeStatic();
}

void CPlatformWindow::nativeSetEnabled(int64_t nsWindowPtr, bool isEnabled) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeSetEnabled, void, int64_t nsWindowPtr, bool isEnabled);
	$invokeNativeStatic(nsWindowPtr, isEnabled);
	$finishNativeStatic();
}

void CPlatformWindow::nativeSynthesizeMouseEnteredExitedEvents() {
	$init(CPlatformWindow);
	$prepareNativeStatic0(_METHOD_INDEX_nativeSynthesizeMouseEnteredExitedEvents$109, CPlatformWindow, nativeSynthesizeMouseEnteredExitedEvents, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void CPlatformWindow::nativeSynthesizeMouseEnteredExitedEvents(int64_t nsWindowPtr, int32_t eventType) {
	$init(CPlatformWindow);
	$prepareNativeStatic0(_METHOD_INDEX_nativeSynthesizeMouseEnteredExitedEvents$110, CPlatformWindow, nativeSynthesizeMouseEnteredExitedEvents, void, int64_t nsWindowPtr, int32_t eventType);
	$invokeNativeStatic(nsWindowPtr, eventType);
	$finishNativeStatic();
}

void CPlatformWindow::nativeDispose(int64_t nsWindowPtr) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeDispose, void, int64_t nsWindowPtr);
	$invokeNativeStatic(nsWindowPtr);
	$finishNativeStatic();
}

void CPlatformWindow::nativeEnterFullScreenMode(int64_t nsWindowPtr) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeEnterFullScreenMode, void, int64_t nsWindowPtr);
	$invokeNativeStatic(nsWindowPtr);
	$finishNativeStatic();
}

void CPlatformWindow::nativeExitFullScreenMode(int64_t nsWindowPtr) {
	$init(CPlatformWindow);
	$prepareNativeStatic(CPlatformWindow, nativeExitFullScreenMode, void, int64_t nsWindowPtr);
	$invokeNativeStatic(nsWindowPtr);
	$finishNativeStatic();
}

CPlatformWindow* CPlatformWindow::nativeGetTopmostPlatformWindowUnderMouse() {
	$init(CPlatformWindow);
	$var(CPlatformWindow, $ret, nullptr);
	$prepareNativeStatic(CPlatformWindow, nativeGetTopmostPlatformWindowUnderMouse, CPlatformWindow*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

int32_t CPlatformWindow::SET(int32_t bits, int32_t mask, bool value) {
	$init(CPlatformWindow);
	if (value) {
		return (bits | mask);
	}
	return (int32_t)(bits & (uint32_t)~mask);
}

bool CPlatformWindow::IS(int32_t bits, int32_t mask) {
	$init(CPlatformWindow);
	return ((int32_t)(bits & (uint32_t)mask)) != 0;
}

void CPlatformWindow::init$() {
	$CFRetainedResource::init$(0, true);
	$set(this, siblingsComparator, static_cast<$Comparator*>($new(CPlatformWindow$$Lambda$lambda$new$0)));
	$set(this, nativeBounds, $new($Rectangle, 0, 0, 0, 0));
	this->visible = false;
	$set(this, normalBounds, nullptr);
}

void CPlatformWindow::initialize($Window* _target, $LWWindowPeer* _peer, $PlatformWindow* _owner) {
	$useLocalCurrentObjectStackCache();
	initializeBase(_target, _peer, _owner);
	int32_t styleBits = getInitialStyleBits();
	$set(this, responder, createPlatformResponder());
	$nc(this->contentView)->initialize(this->peer, this->responder);
	$var($Rectangle, bounds, nullptr);
	if (!IS(CPlatformWindow::DECORATED, styleBits)) {
		$assign(bounds, $new($Rectangle, 0, 0, 1, 1));
	} else {
		$assign(bounds, $nc(_peer)->constrainBounds($($nc(_target)->getBounds())));
	}
	$var($AtomicLong, ref, $new($AtomicLong));
	$nc(this->contentView)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$initialize$2$1, this, ref, styleBits, bounds)));
	setPtr(ref->get());
	if ($instanceOf($RootPaneContainer, this->target)) {
		$var($JRootPane, rootpane, $nc(($cast($RootPaneContainer, this->target)))->getRootPane());
		if (rootpane != nullptr) {
			rootpane->addPropertyChangeListener("ancestor"_s, $$new($CPlatformWindow$15, this, rootpane));
		}
	}
}

void CPlatformWindow::initializeBase($Window* target, $LWWindowPeer* peer, $PlatformWindow* owner) {
	$set(this, peer, peer);
	$set(this, target, target);
	if ($instanceOf(CPlatformWindow, owner)) {
		$set(this, owner, $cast(CPlatformWindow, owner));
	}
	$set(this, contentView, createContentView());
}

$CPlatformResponder* CPlatformWindow::createPlatformResponder() {
	return $new($CPlatformResponder, this->peer, false);
}

$CPlatformView* CPlatformWindow::createContentView() {
	return $new($CPlatformView);
}

int32_t CPlatformWindow::getInitialStyleBits() {
	$useLocalCurrentObjectStackCache();
	int32_t styleBits = (((((CPlatformWindow::DECORATED | CPlatformWindow::HAS_SHADOW) | CPlatformWindow::CLOSEABLE) | CPlatformWindow::MINIMIZABLE) | CPlatformWindow::ZOOMABLE) | CPlatformWindow::RESIZABLE) | CPlatformWindow::TITLE_VISIBLE;
	if (isNativelyFocusableWindow()) {
		styleBits = SET(styleBits, CPlatformWindow::SHOULD_BECOME_KEY, true);
		styleBits = SET(styleBits, CPlatformWindow::SHOULD_BECOME_MAIN, true);
	}
	bool isFrame = ($instanceOf($Frame, this->target));
	bool isDialog = ($instanceOf($Dialog, this->target));
	$init($Window$Type);
	bool isPopup = ($nc(this->target)->getType() == $Window$Type::POPUP);
	if (isDialog) {
		styleBits = SET(styleBits, CPlatformWindow::MINIMIZABLE, false);
	}
	{
		this->undecorated = isFrame ? $nc(($cast($Frame, this->target)))->isUndecorated() : (isDialog ? $nc(($cast($Dialog, this->target)))->isUndecorated() : true);
		if (this->undecorated) {
			styleBits = SET(styleBits, CPlatformWindow::DECORATED, false);
		}
	}
	{
		bool resizable = isFrame ? $nc(($cast($Frame, this->target)))->isResizable() : (isDialog ? $nc(($cast($Dialog, this->target)))->isResizable() : false);
		styleBits = SET(styleBits, CPlatformWindow::RESIZABLE, resizable);
		if (!resizable) {
			styleBits = SET(styleBits, CPlatformWindow::ZOOMABLE, false);
		}
	}
	if ($nc(this->target)->isAlwaysOnTop()) {
		styleBits = SET(styleBits, CPlatformWindow::ALWAYS_ON_TOP, true);
	}
	$init($Dialog$ModalExclusionType);
	if ($nc(this->target)->getModalExclusionType() == $Dialog$ModalExclusionType::APPLICATION_EXCLUDE) {
		styleBits = SET(styleBits, CPlatformWindow::MODAL_EXCLUDED, true);
	}
	if (isPopup) {
		styleBits = SET(styleBits, CPlatformWindow::TEXTURED, false);
		styleBits = SET(styleBits, CPlatformWindow::NONACTIVATING, true);
		styleBits = SET(styleBits, CPlatformWindow::IS_POPUP, true);
	}
	if ($Window$Type::UTILITY->equals($($nc(this->target)->getType()))) {
		styleBits = SET(styleBits, CPlatformWindow::UTILITY, true);
	}
	if ($instanceOf($RootPaneContainer, this->target)) {
		$var($JRootPane, rootpane, $nc(($cast($RootPaneContainer, this->target)))->getRootPane());
		$var($Object, prop, nullptr);
		$assign(prop, $nc(rootpane)->getClientProperty(CPlatformWindow::WINDOW_BRUSH_METAL_LOOK));
		if (prop != nullptr) {
			styleBits = SET(styleBits, CPlatformWindow::TEXTURED, $Boolean::parseBoolean($($of(prop)->toString())));
		}
		$init($Dialog$ModalityType);
		if (isDialog && $nc(($cast($Dialog, this->target)))->getModalityType() == $Dialog$ModalityType::DOCUMENT_MODAL) {
			$assign(prop, rootpane->getClientProperty(CPlatformWindow::WINDOW_DOC_MODAL_SHEET));
			if (prop != nullptr) {
				styleBits = SET(styleBits, CPlatformWindow::SHEET, $Boolean::parseBoolean($($of(prop)->toString())));
			}
		}
		$assign(prop, rootpane->getClientProperty(CPlatformWindow::WINDOW_STYLE));
		if (prop != nullptr) {
			if ("small"_s->equals(prop)) {
				styleBits = SET(styleBits, CPlatformWindow::UTILITY, true);
				bool var$0 = $nc(this->target)->isAlwaysOnTop();
				if (var$0 && rootpane->getClientProperty(CPlatformWindow::WINDOW_HIDES_ON_DEACTIVATE) == nullptr) {
					styleBits = SET(styleBits, CPlatformWindow::HIDES_ON_DEACTIVATE, true);
				}
			}
			if ("textured"_s->equals(prop)) {
				styleBits = SET(styleBits, CPlatformWindow::TEXTURED, true);
			}
			if ("unified"_s->equals(prop)) {
				styleBits = SET(styleBits, CPlatformWindow::UNIFIED, true);
			}
			if ("hud"_s->equals(prop)) {
				styleBits = SET(styleBits, CPlatformWindow::HUD, true);
			}
		}
		$assign(prop, rootpane->getClientProperty(CPlatformWindow::WINDOW_HIDES_ON_DEACTIVATE));
		if (prop != nullptr) {
			styleBits = SET(styleBits, CPlatformWindow::HIDES_ON_DEACTIVATE, $Boolean::parseBoolean($($of(prop)->toString())));
		}
		$assign(prop, rootpane->getClientProperty(CPlatformWindow::WINDOW_CLOSEABLE));
		if (prop != nullptr) {
			styleBits = SET(styleBits, CPlatformWindow::CLOSEABLE, $Boolean::parseBoolean($($of(prop)->toString())));
		}
		$assign(prop, rootpane->getClientProperty(CPlatformWindow::WINDOW_MINIMIZABLE));
		if (prop != nullptr) {
			styleBits = SET(styleBits, CPlatformWindow::MINIMIZABLE, $Boolean::parseBoolean($($of(prop)->toString())));
		}
		$assign(prop, rootpane->getClientProperty(CPlatformWindow::WINDOW_ZOOMABLE));
		if (prop != nullptr) {
			styleBits = SET(styleBits, CPlatformWindow::ZOOMABLE, $Boolean::parseBoolean($($of(prop)->toString())));
		}
		$assign(prop, rootpane->getClientProperty(CPlatformWindow::WINDOW_FULLSCREENABLE));
		if (prop != nullptr) {
			styleBits = SET(styleBits, CPlatformWindow::FULLSCREENABLE, $Boolean::parseBoolean($($of(prop)->toString())));
		}
		$assign(prop, rootpane->getClientProperty(CPlatformWindow::WINDOW_SHADOW));
		if (prop != nullptr) {
			styleBits = SET(styleBits, CPlatformWindow::HAS_SHADOW, $Boolean::parseBoolean($($of(prop)->toString())));
		}
		$assign(prop, rootpane->getClientProperty(CPlatformWindow::WINDOW_DRAGGABLE_BACKGROUND));
		if (prop != nullptr) {
			styleBits = SET(styleBits, CPlatformWindow::DRAGGABLE_BACKGROUND, $Boolean::parseBoolean($($of(prop)->toString())));
		}
		$assign(prop, rootpane->getClientProperty(CPlatformWindow::WINDOW_FULL_CONTENT));
		if (prop != nullptr) {
			styleBits = SET(styleBits, CPlatformWindow::FULL_WINDOW_CONTENT, $Boolean::parseBoolean($($of(prop)->toString())));
		}
		$assign(prop, rootpane->getClientProperty(CPlatformWindow::WINDOW_TRANSPARENT_TITLE_BAR));
		if (prop != nullptr) {
			styleBits = SET(styleBits, CPlatformWindow::TRANSPARENT_TITLE_BAR, $Boolean::parseBoolean($($of(prop)->toString())));
		}
		$assign(prop, rootpane->getClientProperty(CPlatformWindow::WINDOW_TITLE_VISIBLE));
		if (prop != nullptr) {
			styleBits = SET(styleBits, CPlatformWindow::TITLE_VISIBLE, $Boolean::parseBoolean($($of(prop)->toString())));
		}
	}
	if (isDialog) {
		styleBits = SET(styleBits, CPlatformWindow::IS_DIALOG, true);
		if ($nc(($cast($Dialog, this->target)))->isModal()) {
			styleBits = SET(styleBits, CPlatformWindow::IS_MODAL, true);
		}
	}
	$nc(this->peer)->setTextured(IS(CPlatformWindow::TEXTURED, styleBits));
	return styleBits;
}

void CPlatformWindow::setStyleBits(int32_t mask, bool value) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setStyleBits$3$2, mask, value)));
}

void CPlatformWindow::_toggleFullScreenMode(int64_t model) {
	$prepareNative(CPlatformWindow, _toggleFullScreenMode, void, int64_t model);
	$invokeNative(model);
	$finishNative();
}

void CPlatformWindow::toggleFullScreen() {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$_toggleFullScreenMode$3, this)));
}

void CPlatformWindow::setMenuBar($MenuBar* mb) {
	$useLocalCurrentObjectStackCache();
	$var($CMenuBar, mbPeer, $cast($CMenuBar, $LWToolkit::targetToPeer(mb)));
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setMenuBar$5$4, mbPeer)));
}

void CPlatformWindow::dispose() {
	$nc(this->contentView)->dispose();
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$nativeDispose$5)));
	CPlatformWindow::access$001(this);
}

$FontMetrics* CPlatformWindow::getFontMetrics($Font* f) {
	($$new($RuntimeException, "unimplemented"_s))->printStackTrace();
	return nullptr;
}

$Insets* CPlatformWindow::getInsets() {
	$useLocalCurrentObjectStackCache();
	$var($AtomicReference, ref, $new($AtomicReference));
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$getInsets$6$6, ref)));
	return ref->get() != nullptr ? $cast($Insets, ref->get()) : $new($Insets, 0, 0, 0, 0);
}

$Point* CPlatformWindow::getLocationOnScreen() {
	return $new($Point, $nc(this->nativeBounds)->x, $nc(this->nativeBounds)->y);
}

$GraphicsDevice* CPlatformWindow::getGraphicsDevice() {
	return $nc(this->contentView)->getGraphicsDevice();
}

$SurfaceData* CPlatformWindow::getScreenSurface() {
	return nullptr;
}

$SurfaceData* CPlatformWindow::replaceSurfaceData() {
	return $nc(this->contentView)->replaceSurfaceData();
}

void CPlatformWindow::setBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setBounds$7$7, x, y, w, h)));
}

void CPlatformWindow::setMaximizedBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8, x, y, w, h)));
}

bool CPlatformWindow::isMaximized() {
	return this->undecorated ? this->normalBounds != nullptr : $cast(bool, this->isZoomed);
}

void CPlatformWindow::maximize() {
	$useLocalCurrentObjectStackCache();
	if (this->peer == nullptr || isMaximized()) {
		return;
	}
	if (!this->undecorated) {
		execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$zoom$9)));
	} else {
		deliverZoom(true);
		$LWCToolkit::flushNativeSelectors();
		$set(this, normalBounds, $nc(this->peer)->getBounds());
		$var($Rectangle, maximizedBounds, $nc(this->peer)->getMaximizedBounds());
		setBounds($nc(maximizedBounds)->x, maximizedBounds->y, maximizedBounds->width, maximizedBounds->height);
	}
}

void CPlatformWindow::unmaximize() {
	$useLocalCurrentObjectStackCache();
	if (!isMaximized()) {
		return;
	}
	if (!this->undecorated) {
		execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$zoom$9)));
	} else {
		deliverZoom(false);
		$var($Rectangle, toBounds, this->normalBounds);
		$set(this, normalBounds, nullptr);
		setBounds($nc(toBounds)->x, toBounds->y, toBounds->width, toBounds->height);
	}
}

bool CPlatformWindow::isVisible() {
	return this->visible;
}

void CPlatformWindow::setVisible(bool visible) {
	$useLocalCurrentObjectStackCache();
	updateIconImages();
	updateFocusabilityForAutoRequestFocus(false);
	bool wasMaximized = isMaximized();
	if (visible && $nc(this->target)->isLocationByPlatform()) {
		execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10)));
	}
	$var($LWWindowPeer, blocker, (this->peer == nullptr) ? ($LWWindowPeer*)nullptr : $nc(this->peer)->getBlocker());
	if (blocker == nullptr || !visible) {
		if (visible) {
			$nc(this->contentView)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setVisible$10$11, this)));
			$init($Window$Type);
			bool isPopup = ($nc(this->target)->getType() == $Window$Type::POPUP);
			execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setVisible$11$12, this, isPopup)));
		} else {
			execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setVisible$12$13)));
		}
	} else {
		$var(CPlatformWindow, bw, $cast(CPlatformWindow, $nc(blocker)->getPlatformWindow()));
		$nc(bw)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setVisible$14$14, this)));
	}
	this->visible = visible;
	if (visible) {
		bool resizable = ($instanceOf($Frame, this->target)) ? $nc(($cast($Frame, this->target)))->isResizable() : (($instanceOf($Dialog, this->target)) ? $nc(($cast($Dialog, this->target)))->isResizable() : false);
		if (resizable) {
			setCanFullscreen(true);
		}
		if ($instanceOf($Frame, this->target)) {
			if (!wasMaximized && isMaximized()) {
				deliverZoom(true);
			} else {
				int32_t frameState = $nc(($cast($Frame, this->target)))->getExtendedState();
				if (((int32_t)(frameState & (uint32_t)$Frame::ICONIFIED)) != 0) {
					frameState = $Frame::ICONIFIED;
				}
				switch (frameState) {
				case $Frame::ICONIFIED:
					{
						execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$miniaturize$15)));
						break;
					}
				case $Frame::MAXIMIZED_BOTH:
					{
						maximize();
						break;
					}
				default:
					{
						unmaximize();
						break;
					}
				}
			}
		}
	}
	nativeSynthesizeMouseEnteredExitedEvents();
	updateFocusabilityForAutoRequestFocus(true);
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	if (visible) {
		if (this->owner != nullptr && $nc(this->owner)->isVisible()) {
			$nc(this->owner)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setVisible$16$16, this)));
			execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$orderFront$17)));
			applyWindowLevel(this->target);
		}
		{
			$var($WindowArray, arr$, $nc(this->target)->getOwnedWindows());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Window, w, arr$->get(i$));
				{
					$var($Object, p, $nc(acc)->getPeer(w));
					if ($instanceOf($LWWindowPeer, p)) {
						$var(CPlatformWindow, pw, $cast(CPlatformWindow, $nc(($cast($LWWindowPeer, p)))->getPlatformWindow()));
						if (pw != nullptr && pw->isVisible()) {
							pw->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setVisible$18$18, this)));
							pw->applyWindowLevel(w);
						}
					}
				}
			}
		}
	}
	if (blocker != nullptr && visible) {
		$nc(($cast(CPlatformWindow, $(blocker->getPlatformWindow()))))->orderAboveSiblings();
	}
}

void CPlatformWindow::setTitle($String* title) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setTitle$19$19, title)));
}

void CPlatformWindow::updateIconImages() {
	$useLocalCurrentObjectStackCache();
	$var($CImage, cImage, getImageForTarget());
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$updateIconImages$21$20, cImage)));
}

$SurfaceData* CPlatformWindow::getSurfaceData() {
	return $nc(this->contentView)->getSurfaceData();
}

void CPlatformWindow::toBack() {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$nativePushNSWindowToBack$21)));
}

void CPlatformWindow::toFront() {
	$useLocalCurrentObjectStackCache();
	$var($LWCToolkit, lwcToolkit, $cast($LWCToolkit, $Toolkit::getDefaultToolkit()));
	$var($Window, w, $nc($($DefaultKeyboardFocusManager::getCurrentKeyboardFocusManager()))->getActiveWindow());
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	bool var$1 = w != nullptr && $nc(acc)->getPeer(w) != nullptr;
	$init($LWWindowPeer$PeerType);
	bool var$0 = var$1 && $nc(($cast($LWWindowPeer, $(acc->getPeer(w)))))->getPeerType() == $LWWindowPeer$PeerType::EMBEDDED_FRAME;
	if (var$0 && !$nc(lwcToolkit)->isApplicationActive()) {
		lwcToolkit->activateApplicationIgnoringOtherApps();
	}
	updateFocusabilityForAutoRequestFocus(false);
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$nativePushNSWindowToFront$22)));
	updateFocusabilityForAutoRequestFocus(true);
}

void CPlatformWindow::setCanFullscreen(bool canFullScreen) {
	$useLocalCurrentObjectStackCache();
	$init($LWWindowPeer$PeerType);
	if ($instanceOf($RootPaneContainer, this->target) && $nc($(getPeer()))->getPeerType() == $LWWindowPeer$PeerType::FRAME) {
		if (this->isInFullScreen && !canFullScreen) {
			toggleFullScreen();
		}
		$var($RootPaneContainer, rpc, $cast($RootPaneContainer, this->target));
		$nc($($nc(rpc)->getRootPane()))->putClientProperty(CPlatformWindow::WINDOW_FULLSCREENABLE, $($Boolean::valueOf(canFullScreen)));
	}
}

void CPlatformWindow::setResizable(bool resizable) {
	setCanFullscreen(resizable);
	setStyleBits(CPlatformWindow::RESIZABLE, resizable);
	setStyleBits(CPlatformWindow::ZOOMABLE, resizable);
}

void CPlatformWindow::setSizeConstraints(int32_t minW, int32_t minH, int32_t maxW, int32_t maxH) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23, minW, minH, maxW, maxH)));
}

bool CPlatformWindow::rejectFocusRequest($FocusEvent$Cause* cause) {
	$init($FocusEvent$Cause);
	if (cause != $FocusEvent$Cause::MOUSE_EVENT && !$nc(($cast($LWCToolkit, $($Toolkit::getDefaultToolkit()))))->isApplicationActive()) {
		$nc(CPlatformWindow::focusLogger)->fine("the app is inactive, so the request is rejected"_s);
		return true;
	}
	return false;
}

bool CPlatformWindow::requestWindowFocus() {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24)));
	return true;
}

bool CPlatformWindow::isActive() {
	$useLocalCurrentObjectStackCache();
	$var($AtomicBoolean, ref, $new($AtomicBoolean));
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$isActive$24$25, ref)));
	return ref->get();
}

void CPlatformWindow::updateFocusableWindowState() {
	bool isFocusable = isNativelyFocusableWindow();
	setStyleBits(CPlatformWindow::SHOULD_BECOME_KEY | CPlatformWindow::SHOULD_BECOME_MAIN, isFocusable);
}

void CPlatformWindow::setAlwaysOnTop(bool isAlwaysOnTop) {
	setStyleBits(CPlatformWindow::ALWAYS_ON_TOP, isAlwaysOnTop);
}

void CPlatformWindow::setOpacity(float opacity) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setOpacity$25$26, opacity)));
}

void CPlatformWindow::setOpaque(bool isOpaque) {
	$useLocalCurrentObjectStackCache();
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setOpaque$26$27, isOpaque)));
	bool isTextured = (this->peer == nullptr) ? false : $nc(this->peer)->isTextured();
	if (!isTextured) {
		if (!isOpaque) {
			execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setOpaque$27$28)));
		} else if (this->peer != nullptr) {
			$var($Color, color, $nc(this->peer)->getBackground());
			if (color != nullptr) {
				int32_t rgb = color->getRGB();
				execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setOpaque$28$29, rgb)));
			}
		}
	}
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(CPlatformWindow$$Lambda$invalidateShadow$30, this)));
}

void CPlatformWindow::enterFullScreenMode() {
	this->isFullScreenMode$ = true;
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31)));
}

void CPlatformWindow::exitFullScreenMode() {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$nativeExitFullScreenMode$32)));
	this->isFullScreenMode$ = false;
}

bool CPlatformWindow::isFullScreenMode() {
	return this->isFullScreenMode$;
}

void CPlatformWindow::setWindowState(int32_t windowState) {
	$useLocalCurrentObjectStackCache();
	if (this->peer == nullptr || !$nc(this->peer)->isVisible()) {
		return;
	}
	int32_t prevWindowState = $nc(this->peer)->getState();
	if (prevWindowState == windowState) {
		return;
	}
	if (((int32_t)(windowState & (uint32_t)$Frame::ICONIFIED)) != 0) {
		windowState = $Frame::ICONIFIED;
	}
	switch (windowState) {
	case $Frame::ICONIFIED:
		{
			if (prevWindowState == $Frame::MAXIMIZED_BOTH) {
				unmaximize();
			}
			execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$miniaturize$15)));
			break;
		}
	case $Frame::MAXIMIZED_BOTH:
		{
			if (prevWindowState == $Frame::ICONIFIED) {
				execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$deminiaturize$33)));
			}
			maximize();
			break;
		}
	case $Frame::NORMAL:
		{
			if (prevWindowState == $Frame::ICONIFIED) {
				execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$deminiaturize$33)));
			} else if (prevWindowState == $Frame::MAXIMIZED_BOTH) {
				unmaximize();
			}
			break;
		}
	default:
		{
			$throwNew($RuntimeException, $$str({"Unknown window state: "_s, $$str(windowState)}));
		}
	}
}

void CPlatformWindow::setModalBlocked(bool blocked) {
	$useLocalCurrentObjectStackCache();
	$init($Dialog$ModalExclusionType);
	if ($nc(this->target)->getModalExclusionType() == $Dialog$ModalExclusionType::APPLICATION_EXCLUDE) {
		return;
	}
	if (blocked) {
		execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34)));
	}
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35, blocked)));
	checkBlockingAndOrder();
}

void CPlatformWindow::invalidateShadow() {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36)));
}

$CImage* CPlatformWindow::getImageForTarget() {
	$useLocalCurrentObjectStackCache();
	$var($CImage, icon, nullptr);
	try {
		$assign(icon, $nc($($CImage::getCreator()))->createFromImages($($nc(this->target)->getIconImages())));
	} catch ($Exception& ignored) {
	}
	return icon;
}

$LWWindowPeer* CPlatformWindow::getPeer() {
	return this->peer;
}

bool CPlatformWindow::isUnderMouse() {
	return $nc(this->contentView)->isUnderMouse();
}

$CPlatformView* CPlatformWindow::getContentView() {
	return this->contentView;
}

int64_t CPlatformWindow::getLayerPtr() {
	return $nc(this->contentView)->getWindowLayerPtr();
}

void CPlatformWindow::flushBuffers() {
	bool var$0 = isVisible();
	if (var$0 && !$nc(this->nativeBounds)->isEmpty() && !this->isFullScreenMode$) {
		try {
			$LWCToolkit::invokeAndWait(static_cast<$Runnable*>($$new($CPlatformWindow$16, this)), static_cast<$Component*>(this->target));
		} catch ($InvocationTargetException& e) {
			e->printStackTrace();
		}
	}
}

int64_t CPlatformWindow::getNativeViewPtr($PlatformWindow* platformWindow) {
	$init(CPlatformWindow);
	int64_t nativePeer = 0;
	if ($instanceOf(CPlatformWindow, platformWindow)) {
		nativePeer = $nc($($nc(($cast(CPlatformWindow, platformWindow)))->getContentView()))->getAWTView();
	} else if ($instanceOf($CViewPlatformEmbeddedFrame, platformWindow)) {
		nativePeer = $nc(($cast($CViewPlatformEmbeddedFrame, platformWindow)))->getNSViewPtr();
	}
	return nativePeer;
}

void CPlatformWindow::deliverWindowFocusEvent(bool gained, CPlatformWindow* opposite) {
	$useLocalCurrentObjectStackCache();
	if (gained && !$nc(($cast($LWCToolkit, $($Toolkit::getDefaultToolkit()))))->isApplicationActive()) {
		$nc(CPlatformWindow::focusLogger)->fine("the app is inactive, so the notification is ignored"_s);
		return;
	}
	$var($LWWindowPeer, oppositePeer, (opposite == nullptr) ? ($LWWindowPeer*)nullptr : $nc(opposite)->getPeer());
	$nc(this->responder)->handleWindowFocusEvent(gained, oppositePeer);
}

void CPlatformWindow::deliverMoveResizeEvent(int32_t x, int32_t y, int32_t width, int32_t height, bool byUser) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicBoolean, ref, $new($AtomicBoolean));
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37, ref)));
	this->isZoomed = ref->get();
	checkZoom();
	$var($Rectangle, oldB, this->nativeBounds);
	$set(this, nativeBounds, $new($Rectangle, x, y, width, height));
	if (this->peer != nullptr) {
		$nc(this->peer)->notifyReshape(x, y, width, height);
		if ((byUser && !$nc($($nc(oldB)->getSize()))->equals($($nc(this->nativeBounds)->getSize()))) || this->isFullScreenAnimationOn) {
			flushBuffers();
		}
	}
}

void CPlatformWindow::deliverWindowClosingEvent() {
	if (this->peer != nullptr && $nc(this->peer)->getBlocker() == nullptr) {
		$nc(this->peer)->postEvent($$new($WindowEvent, this->target, $WindowEvent::WINDOW_CLOSING));
	}
}

void CPlatformWindow::deliverIconify(bool iconify) {
	if (this->peer != nullptr) {
		$nc(this->peer)->notifyIconify(iconify);
	}
	if (iconify) {
		this->isIconifyAnimationActive = false;
	}
}

void CPlatformWindow::deliverZoom(bool isZoomed) {
	if (this->peer != nullptr) {
		$nc(this->peer)->notifyZoom(isZoomed);
	}
}

void CPlatformWindow::checkZoom() {
	if (this->peer != nullptr) {
		int32_t state = $nc(this->peer)->getState();
		if (state != $Frame::MAXIMIZED_BOTH && isMaximized()) {
			deliverZoom(true);
		} else if (state == $Frame::MAXIMIZED_BOTH && !isMaximized()) {
			deliverZoom(false);
		}
	}
}

void CPlatformWindow::deliverNCMouseDown() {
	if (this->peer != nullptr) {
		$nc(this->peer)->notifyNCMouseDown();
	}
}

bool CPlatformWindow::isNativelyFocusableWindow() {
	if (this->peer == nullptr) {
		return false;
	}
	bool var$0 = !$nc(this->peer)->isSimpleWindow();
	return var$0 && $nc(this->target)->getFocusableWindowState();
}

bool CPlatformWindow::isBlocked() {
	$var($LWWindowPeer, blocker, (this->peer != nullptr) ? $nc(this->peer)->getBlocker() : ($LWWindowPeer*)nullptr);
	return (blocker != nullptr);
}

void CPlatformWindow::updateFocusabilityForAutoRequestFocus(bool isFocusable) {
	bool var$0 = $nc(this->target)->isAutoRequestFocus();
	if (var$0 || !isNativelyFocusableWindow()) {
		return;
	}
	setStyleBits(CPlatformWindow::SHOULD_BECOME_KEY | CPlatformWindow::SHOULD_BECOME_MAIN, isFocusable);
}

bool CPlatformWindow::checkBlockingAndOrder() {
	$useLocalCurrentObjectStackCache();
	$var($LWWindowPeer, blocker, (this->peer == nullptr) ? ($LWWindowPeer*)nullptr : $nc(this->peer)->getBlocker());
	if (blocker == nullptr) {
		return false;
	}
	if ($instanceOf($CPrinterDialogPeer, blocker)) {
		return true;
	}
	$var(CPlatformWindow, pWindow, $cast(CPlatformWindow, $nc(blocker)->getPlatformWindow()));
	$nc(pWindow)->orderAboveSiblings();
	pWindow->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38)));
	return true;
}

bool CPlatformWindow::isIconified() {
	bool isIconified = false;
	if ($instanceOf($Frame, this->target)) {
		int32_t state = $nc(($cast($Frame, this->target)))->getExtendedState();
		if (((int32_t)(state & (uint32_t)$Frame::ICONIFIED)) != 0) {
			isIconified = true;
		}
	}
	return this->isIconifyAnimationActive || isIconified;
}

bool CPlatformWindow::isOneOfOwnersOrSelf(CPlatformWindow* window$renamed) {
	$var(CPlatformWindow, window, window$renamed);
	while (window != nullptr) {
		if (this == window) {
			return true;
		}
		$assign(window, window->owner);
	}
	return false;
}

CPlatformWindow* CPlatformWindow::getRootOwner() {
	$var(CPlatformWindow, rootOwner, this);
	while ($nc(rootOwner)->owner != nullptr) {
		$assign(rootOwner, rootOwner->owner);
	}
	return rootOwner;
}

void CPlatformWindow::orderAboveSiblings() {
	$useLocalCurrentObjectStackCache();
	$var(CPlatformWindow, rootOwner, getRootOwner());
	bool var$1 = $nc(rootOwner)->isVisible();
	bool var$0 = var$1 && !rootOwner->isIconified();
	if (var$0 && !rootOwner->isActive()) {
		rootOwner->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$orderFront$17)));
	}
	if (!$nc(rootOwner)->isIconified()) {
		$var($AWTAccessor$WindowAccessor, windowAccessor, $AWTAccessor::getWindowAccessor());
		orderAboveSiblingsImpl($($nc(windowAccessor)->getOwnedWindows(rootOwner->target)));
	}
}

void CPlatformWindow::orderAboveSiblingsImpl($WindowArray* windows) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, childWindows, $new($ArrayList));
	$var($AWTAccessor$ComponentAccessor, componentAccessor, $AWTAccessor::getComponentAccessor());
	$var($AWTAccessor$WindowAccessor, windowAccessor, $AWTAccessor::getWindowAccessor());
	$Arrays::sort(windows, this->siblingsComparator);
	$var(CPlatformWindow, pwUnder, nullptr);
	{
		$var($WindowArray, arr$, windows);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Window, w, arr$->get(i$));
			{
				bool iconified = false;
				$var($Object, p, $nc(componentAccessor)->getPeer(w));
				if ($instanceOf($LWWindowPeer, p)) {
					$var(CPlatformWindow, pw, $cast(CPlatformWindow, $nc(($cast($LWWindowPeer, p)))->getPlatformWindow()));
					iconified = isIconified();
					if (pw != nullptr && pw->isVisible() && !iconified) {
						if (pw->isOneOfOwnersOrSelf(this)) {
							pw->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$orderFront$17)));
						} else {
							if (pwUnder == nullptr) {
								$assign(pwUnder, pw->owner);
							}
							$nc(pwUnder)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39, pw)));
							$assign(pwUnder, pw);
						}
						pw->applyWindowLevel(w);
					}
				}
				if (!iconified) {
					childWindows->addAll($($Arrays::asList($($nc(windowAccessor)->getOwnedWindows(w)))));
				}
			}
		}
	}
	if (!childWindows->isEmpty()) {
		orderAboveSiblingsImpl($fcast($WindowArray, $(childWindows->toArray($$new($WindowArray, 0)))));
	}
}

void CPlatformWindow::applyWindowLevel($Window* target) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(target)->isAlwaysOnTop();
	$init($Window$Type);
	if (var$0 && target->getType() != $Window$Type::POPUP) {
		execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40)));
	} else {
		if (target->getType() == $Window$Type::POPUP) {
			execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41)));
		}
	}
}

$Window* CPlatformWindow::getOwnerFrameOrDialog($Window* window) {
	$var($Window, owner, $nc(window)->getOwner());
	while (owner != nullptr && !($instanceOf($Frame, owner) || $instanceOf($Dialog, owner))) {
		$assign(owner, $nc(owner)->getOwner());
	}
	return owner;
}

bool CPlatformWindow::isSimpleWindowOwnedByEmbeddedFrame() {
	if (this->peer != nullptr && $nc(this->peer)->isSimpleWindow()) {
		return ($instanceOf($CEmbeddedFrame, $(getOwnerFrameOrDialog(this->target))));
	}
	return false;
}

void CPlatformWindow::windowWillMiniaturize() {
	this->isIconifyAnimationActive = true;
}

void CPlatformWindow::windowDidBecomeMain() {
	this->lastBecomeMainTime = $System::currentTimeMillis();
	if (checkBlockingAndOrder()) {
		return;
	}
	orderAboveSiblings();
}

void CPlatformWindow::windowWillEnterFullScreen() {
	this->isFullScreenAnimationOn = true;
}

void CPlatformWindow::windowDidEnterFullScreen() {
	this->isInFullScreen = true;
	this->isFullScreenAnimationOn = false;
}

void CPlatformWindow::windowWillExitFullScreen() {
	this->isFullScreenAnimationOn = true;
}

void CPlatformWindow::windowDidExitFullScreen() {
	this->isInFullScreen = false;
	this->isFullScreenAnimationOn = false;
}

void CPlatformWindow::lambda$applyWindowLevel$37(int64_t ptr) {
	$init(CPlatformWindow);
	$CWrapper$NSWindow::setLevel(ptr, $CWrapper$NSWindow::NSPopUpMenuWindowLevel);
}

void CPlatformWindow::lambda$applyWindowLevel$36(int64_t ptr) {
	$init(CPlatformWindow);
	$CWrapper$NSWindow::setLevel(ptr, $CWrapper$NSWindow::NSFloatingWindowLevel);
}

void CPlatformWindow::lambda$orderAboveSiblingsImpl$35(CPlatformWindow* pw, int64_t underPtr) {
	$init(CPlatformWindow);
	$nc(pw)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setVisible$15$42, underPtr)));
}

void CPlatformWindow::lambda$checkBlockingAndOrder$33(int64_t ptr) {
	$init(CPlatformWindow);
	$CWrapper$NSWindow::orderFrontRegardless(ptr);
	$CWrapper$NSWindow::makeKeyAndOrderFront(ptr);
	$CWrapper$NSWindow::makeMainWindow(ptr);
}

void CPlatformWindow::lambda$deliverMoveResizeEvent$32($AtomicBoolean* ref, int64_t ptr) {
	$init(CPlatformWindow);
	$nc(ref)->set($CWrapper$NSWindow::isZoomed(ptr));
}

void CPlatformWindow::lambda$invalidateShadow$31(int64_t ptr) {
	$init(CPlatformWindow);
	nativeRevalidateNSWindowShadow(ptr);
}

void CPlatformWindow::lambda$setModalBlocked$30(bool blocked, int64_t ptr) {
	$init(CPlatformWindow);
	nativeSetEnabled(ptr, !blocked);
}

void CPlatformWindow::lambda$setModalBlocked$29(int64_t ptr) {
	$init(CPlatformWindow);
	nativeSynthesizeMouseEnteredExitedEvents(ptr, $CocoaConstants::NSMouseExited);
}

void CPlatformWindow::lambda$setOpaque$28(int32_t rgb, int64_t ptr) {
	$init(CPlatformWindow);
	$CWrapper$NSWindow::setBackgroundColor(ptr, rgb);
}

void CPlatformWindow::lambda$setOpaque$27(int64_t ptr) {
	$init(CPlatformWindow);
	$CWrapper$NSWindow::setBackgroundColor(ptr, 0);
}

void CPlatformWindow::lambda$setOpaque$26(bool isOpaque, int64_t ptr) {
	$init(CPlatformWindow);
	$CWrapper$NSWindow::setOpaque(ptr, isOpaque);
}

void CPlatformWindow::lambda$setOpacity$25(float opacity, int64_t ptr) {
	$init(CPlatformWindow);
	$CWrapper$NSWindow::setAlphaValue(ptr, opacity);
}

void CPlatformWindow::lambda$isActive$24($AtomicBoolean* ref, int64_t ptr) {
	$init(CPlatformWindow);
	$nc(ref)->set($CWrapper$NSWindow::isKeyWindow(ptr));
}

void CPlatformWindow::lambda$requestWindowFocus$23(int64_t ptr) {
	$init(CPlatformWindow);
	if ($CWrapper$NSWindow::canBecomeMainWindow(ptr)) {
		$CWrapper$NSWindow::makeMainWindow(ptr);
	}
	$CWrapper$NSWindow::makeKeyAndOrderFront(ptr);
}

void CPlatformWindow::lambda$setSizeConstraints$22(int32_t minW, int32_t minH, int32_t maxW, int32_t maxH, int64_t ptr) {
	$init(CPlatformWindow);
	nativeSetNSWindowMinMax(ptr, (double)minW, (double)minH, (double)maxW, (double)maxH);
}

void CPlatformWindow::lambda$updateIconImages$21($CImage* cImage, int64_t ptr) {
	$init(CPlatformWindow);
	if (cImage == nullptr) {
		nativeSetNSWindowMinimizedIcon(ptr, 0);
	} else {
		$nc(cImage)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$updateIconImages$20$43, ptr)));
	}
}

void CPlatformWindow::lambda$updateIconImages$20(int64_t ptr, int64_t imagePtr) {
	$init(CPlatformWindow);
	nativeSetNSWindowMinimizedIcon(ptr, imagePtr);
}

void CPlatformWindow::lambda$setTitle$19($String* title, int64_t ptr) {
	$init(CPlatformWindow);
	nativeSetNSWindowTitle(ptr, title);
}

void CPlatformWindow::lambda$setVisible$18(int64_t childPtr) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setVisible$17$44, childPtr)));
}

void CPlatformWindow::lambda$setVisible$17(int64_t childPtr, int64_t ptr) {
	$init(CPlatformWindow);
	$CWrapper$NSWindow::orderWindow(childPtr, $CWrapper$NSWindow::NSWindowAbove, ptr);
}

void CPlatformWindow::lambda$setVisible$16(int64_t ownerPtr) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setVisible$15$42, ownerPtr)));
}

void CPlatformWindow::lambda$setVisible$15(int64_t ownerPtr, int64_t ptr) {
	$init(CPlatformWindow);
	$CWrapper$NSWindow::orderWindow(ptr, $CWrapper$NSWindow::NSWindowAbove, ownerPtr);
}

void CPlatformWindow::lambda$setVisible$14(int64_t blockerPtr) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setVisible$13$45, blockerPtr)));
}

void CPlatformWindow::lambda$setVisible$13(int64_t blockerPtr, int64_t ptr) {
	$init(CPlatformWindow);
	$CWrapper$NSWindow::orderWindow(ptr, $CWrapper$NSWindow::NSWindowBelow, blockerPtr);
}

void CPlatformWindow::lambda$setVisible$12(int64_t ptr) {
	$init(CPlatformWindow);
	$CWrapper$NSWindow::orderOut(ptr);
	$CWrapper$NSWindow::close(ptr);
}

void CPlatformWindow::lambda$setVisible$11(bool isPopup, int64_t ptr) {
	$useLocalCurrentObjectStackCache();
	if (isPopup) {
		$CWrapper$NSWindow::orderFrontRegardless(ptr);
	} else {
		$CWrapper$NSWindow::orderFront(ptr);
	}
	bool isKeyWindow = $CWrapper$NSWindow::isKeyWindow(ptr);
	if (!isKeyWindow) {
		$CWrapper$NSWindow::makeKeyWindow(ptr);
	}
	if (this->owner != nullptr && $instanceOf($LWLightweightFramePeer, $($nc(this->owner)->getPeer()))) {
		$var($LWLightweightFramePeer, peer, $cast($LWLightweightFramePeer, $nc(this->owner)->getPeer()));
		int64_t ownerWindowPtr = $nc(peer)->getOverriddenWindowHandle();
		if (ownerWindowPtr != 0) {
			$CWrapper$NSWindow::addChildWindow(ownerWindowPtr, ptr, $CWrapper$NSWindow::NSWindowAbove);
		}
	}
}

void CPlatformWindow::lambda$setVisible$10(int64_t viewPtr) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setVisible$9$46, viewPtr)));
}

void CPlatformWindow::lambda$setVisible$9(int64_t viewPtr, int64_t ptr) {
	$init(CPlatformWindow);
	$CWrapper$NSWindow::makeFirstResponder(ptr, viewPtr);
}

void CPlatformWindow::lambda$setMaximizedBounds$8(int32_t x, int32_t y, int32_t w, int32_t h, int64_t ptr) {
	$init(CPlatformWindow);
	nativeSetNSWindowStandardFrame(ptr, (double)x, (double)y, (double)w, (double)h);
}

void CPlatformWindow::lambda$setBounds$7(int32_t x, int32_t y, int32_t w, int32_t h, int64_t ptr) {
	$init(CPlatformWindow);
	nativeSetNSWindowBounds(ptr, (double)x, (double)y, (double)w, (double)h);
}

void CPlatformWindow::lambda$getInsets$6($AtomicReference* ref, int64_t ptr) {
	$init(CPlatformWindow);
	$nc(ref)->set($(nativeGetNSWindowInsets(ptr)));
}

void CPlatformWindow::lambda$setMenuBar$5($CMenuBar* mbPeer, int64_t nsWindowPtr) {
	$init(CPlatformWindow);
	if (mbPeer != nullptr) {
		mbPeer->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$$Lambda$lambda$setMenuBar$4$47, nsWindowPtr)));
	} else {
		nativeSetNSWindowMenuBar(nsWindowPtr, 0);
	}
}

void CPlatformWindow::lambda$setMenuBar$4(int64_t nsWindowPtr, int64_t ptr) {
	$init(CPlatformWindow);
	nativeSetNSWindowMenuBar(nsWindowPtr, ptr);
}

void CPlatformWindow::lambda$setStyleBits$3(int32_t mask, bool value, int64_t ptr) {
	$init(CPlatformWindow);
	nativeSetNSWindowStyleBits(ptr, mask, value ? mask : 0);
}

void CPlatformWindow::lambda$initialize$2($AtomicLong* ref, int32_t styleBits, $Rectangle* bounds, int64_t viewPtr) {
	bool hasOwnerPtr = false;
	if (this->owner != nullptr) {
		hasOwnerPtr = (int64_t)0 != $nc(this->owner)->executeGet(static_cast<$CFRetainedResource$CFNativeActionGet*>($$new(CPlatformWindow$$Lambda$lambda$initialize$1$48, this, ref, viewPtr, styleBits, bounds)));
	}
	if (!hasOwnerPtr) {
		$nc(ref)->set(nativeCreateNSWindow(viewPtr, 0, styleBits, (double)$nc(bounds)->x, (double)bounds->y, (double)bounds->width, (double)bounds->height));
	}
}

int64_t CPlatformWindow::lambda$initialize$1($AtomicLong* ref, int64_t viewPtr, int32_t styleBits, $Rectangle* bounds, int64_t ownerPtr) {
	$nc(ref)->set(nativeCreateNSWindow(viewPtr, ownerPtr, styleBits, (double)$nc(bounds)->x, (double)bounds->y, (double)bounds->width, (double)bounds->height));
	return 1;
}

int32_t CPlatformWindow::lambda$new$0($Window* w1, $Window* w2) {
	$init(CPlatformWindow);
	$useLocalCurrentObjectStackCache();
	if (w1 == w2) {
		return 0;
	}
	$var($AWTAccessor$ComponentAccessor, componentAccessor, $AWTAccessor::getComponentAccessor());
	$var($Object, p1, $nc(componentAccessor)->getPeer(w1));
	$var($Object, p2, componentAccessor->getPeer(w2));
	int64_t time1 = 0;
	if ($instanceOf($LWWindowPeer, p1)) {
		time1 = $nc((($cast(CPlatformWindow, $($nc(($cast($LWWindowPeer, p1)))->getPlatformWindow())))))->lastBecomeMainTime;
	}
	int64_t time2 = 0;
	if ($instanceOf($LWWindowPeer, p2)) {
		time2 = $nc((($cast(CPlatformWindow, $($nc(($cast($LWWindowPeer, p2)))->getPlatformWindow())))))->lastBecomeMainTime;
	}
	return $Long::compare(time1, time2);
}

void clinit$CPlatformWindow($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(CPlatformWindow::WINDOW_BRUSH_METAL_LOOK, "apple.awt.brushMetalLook"_s);
	$assignStatic(CPlatformWindow::WINDOW_DRAGGABLE_BACKGROUND, "apple.awt.draggableWindowBackground"_s);
	$assignStatic(CPlatformWindow::WINDOW_ALPHA, "Window.alpha"_s);
	$assignStatic(CPlatformWindow::WINDOW_SHADOW, "Window.shadow"_s);
	$assignStatic(CPlatformWindow::WINDOW_STYLE, "Window.style"_s);
	$assignStatic(CPlatformWindow::WINDOW_SHADOW_REVALIDATE_NOW, "apple.awt.windowShadow.revalidateNow"_s);
	$assignStatic(CPlatformWindow::WINDOW_DOCUMENT_MODIFIED, "Window.documentModified"_s);
	$assignStatic(CPlatformWindow::WINDOW_DOCUMENT_FILE, "Window.documentFile"_s);
	$assignStatic(CPlatformWindow::WINDOW_CLOSEABLE, "Window.closeable"_s);
	$assignStatic(CPlatformWindow::WINDOW_MINIMIZABLE, "Window.minimizable"_s);
	$assignStatic(CPlatformWindow::WINDOW_ZOOMABLE, "Window.zoomable"_s);
	$assignStatic(CPlatformWindow::WINDOW_HIDES_ON_DEACTIVATE, "Window.hidesOnDeactivate"_s);
	$assignStatic(CPlatformWindow::WINDOW_DOC_MODAL_SHEET, "apple.awt.documentModalSheet"_s);
	$assignStatic(CPlatformWindow::WINDOW_FADE_DELEGATE, "apple.awt._windowFadeDelegate"_s);
	$assignStatic(CPlatformWindow::WINDOW_FADE_IN, "apple.awt._windowFadeIn"_s);
	$assignStatic(CPlatformWindow::WINDOW_FADE_OUT, "apple.awt._windowFadeOut"_s);
	$assignStatic(CPlatformWindow::WINDOW_FULLSCREENABLE, "apple.awt.fullscreenable"_s);
	$assignStatic(CPlatformWindow::WINDOW_FULL_CONTENT, "apple.awt.fullWindowContent"_s);
	$assignStatic(CPlatformWindow::WINDOW_TRANSPARENT_TITLE_BAR, "apple.awt.transparentTitleBar"_s);
	$assignStatic(CPlatformWindow::WINDOW_TITLE_VISIBLE, "apple.awt.windowTitleVisible"_s);
	$beforeCallerSensitive();
	$assignStatic(CPlatformWindow::logger, $PlatformLogger::getLogger("sun.lwawt.macosx.CPlatformWindow"_s));
	$assignStatic(CPlatformWindow::focusLogger, $PlatformLogger::getLogger("sun.lwawt.macosx.focus.CPlatformWindow"_s));
	$assignStatic(CPlatformWindow::MAC_OS_TABBED_WINDOW, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "jdk.allowMacOSTabbedWindows"_s)))));
	{
		CPlatformWindow::nativeSetAllowAutomaticTabbingProperty($Boolean::parseBoolean(CPlatformWindow::MAC_OS_TABBED_WINDOW));
	}
	$assignStatic(CPlatformWindow::CLIENT_PROPERTY_APPLICATOR, $new($CPlatformWindow$14, $$new($ClientPropertyApplicator$PropertyArray, {
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$1, CPlatformWindow::WINDOW_DOCUMENT_MODIFIED)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$2, CPlatformWindow::WINDOW_BRUSH_METAL_LOOK)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$3, CPlatformWindow::WINDOW_ALPHA)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$4, CPlatformWindow::WINDOW_SHADOW)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$5, CPlatformWindow::WINDOW_MINIMIZABLE)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$6, CPlatformWindow::WINDOW_CLOSEABLE)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$7, CPlatformWindow::WINDOW_ZOOMABLE)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$8, CPlatformWindow::WINDOW_FULLSCREENABLE)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$9, CPlatformWindow::WINDOW_SHADOW_REVALIDATE_NOW)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$10, CPlatformWindow::WINDOW_DOCUMENT_FILE)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$11, CPlatformWindow::WINDOW_FULL_CONTENT)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$12, CPlatformWindow::WINDOW_TRANSPARENT_TITLE_BAR)),
		static_cast<$ClientPropertyApplicator$Property*>($$new($CPlatformWindow$13, CPlatformWindow::WINDOW_TITLE_VISIBLE))
	})));
}

CPlatformWindow::CPlatformWindow() {
}

$Class* CPlatformWindow::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CPlatformWindow$$Lambda$lambda$new$0::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$initialize$2$1::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$initialize$2$1::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setStyleBits$3$2::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setStyleBits$3$2::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$_toggleFullScreenMode$3::classInfo$.name)) {
			return CPlatformWindow$$Lambda$_toggleFullScreenMode$3::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setMenuBar$5$4::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setMenuBar$5$4::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$nativeDispose$5::classInfo$.name)) {
			return CPlatformWindow$$Lambda$nativeDispose$5::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$getInsets$6$6::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$getInsets$6$6::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setBounds$7$7::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setBounds$7$7::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setMaximizedBounds$8$8::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$zoom$9::classInfo$.name)) {
			return CPlatformWindow$$Lambda$zoom$9::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10::classInfo$.name)) {
			return CPlatformWindow$$Lambda$nativeSetNSWindowLocationByPlatform$10::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setVisible$10$11::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setVisible$10$11::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setVisible$11$12::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setVisible$11$12::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setVisible$12$13::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setVisible$12$13::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setVisible$14$14::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setVisible$14$14::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$miniaturize$15::classInfo$.name)) {
			return CPlatformWindow$$Lambda$miniaturize$15::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setVisible$16$16::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setVisible$16$16::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$orderFront$17::classInfo$.name)) {
			return CPlatformWindow$$Lambda$orderFront$17::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setVisible$18$18::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setVisible$18$18::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setTitle$19$19::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setTitle$19$19::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$updateIconImages$21$20::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$updateIconImages$21$20::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$nativePushNSWindowToBack$21::classInfo$.name)) {
			return CPlatformWindow$$Lambda$nativePushNSWindowToBack$21::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$nativePushNSWindowToFront$22::classInfo$.name)) {
			return CPlatformWindow$$Lambda$nativePushNSWindowToFront$22::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setSizeConstraints$22$23::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$requestWindowFocus$23$24::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$isActive$24$25::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$isActive$24$25::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setOpacity$25$26::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setOpacity$25$26::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setOpaque$26$27::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setOpaque$26$27::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setOpaque$27$28::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setOpaque$27$28::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setOpaque$28$29::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setOpaque$28$29::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$invalidateShadow$30::classInfo$.name)) {
			return CPlatformWindow$$Lambda$invalidateShadow$30::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31::classInfo$.name)) {
			return CPlatformWindow$$Lambda$nativeEnterFullScreenMode$31::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$nativeExitFullScreenMode$32::classInfo$.name)) {
			return CPlatformWindow$$Lambda$nativeExitFullScreenMode$32::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$deminiaturize$33::classInfo$.name)) {
			return CPlatformWindow$$Lambda$deminiaturize$33::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setModalBlocked$29$34::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setModalBlocked$30$35::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$invalidateShadow$31$36::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$deliverMoveResizeEvent$32$37::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$checkBlockingAndOrder$33$38::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$orderAboveSiblingsImpl$35$39::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$applyWindowLevel$36$40::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$applyWindowLevel$37$41::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setVisible$15$42::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setVisible$15$42::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$updateIconImages$20$43::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$updateIconImages$20$43::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setVisible$17$44::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setVisible$17$44::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setVisible$13$45::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setVisible$13$45::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setVisible$9$46::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setVisible$9$46::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$setMenuBar$4$47::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$setMenuBar$4$47::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$$Lambda$lambda$initialize$1$48::classInfo$.name)) {
			return CPlatformWindow$$Lambda$lambda$initialize$1$48::load$(name, initialize);
		}
	}
	$loadClass(CPlatformWindow, name, initialize, &_CPlatformWindow_ClassInfo_, clinit$CPlatformWindow, allocate$CPlatformWindow);
	return class$;
}

$Class* CPlatformWindow::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun