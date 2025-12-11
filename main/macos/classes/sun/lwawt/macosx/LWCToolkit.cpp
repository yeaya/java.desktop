#include <sun/lwawt/macosx/LWCToolkit.h>

#include <com/apple/laf/AquaMenuBarUI.h>
#include <java/awt/AWTError.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Desktop.h>
#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Event.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FileDialog.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Point.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/SystemTray.h>
#include <java/awt/Taskbar.h>
#include <java/awt/Toolkit.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/Window.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/MouseDragGestureRecognizer.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/im/InputMethodHighlight.h>
#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/awt/peer/CheckboxMenuItemPeer.h>
#include <java/awt/peer/DesktopPeer.h>
#include <java/awt/peer/DialogPeer.h>
#include <java/awt/peer/FileDialogPeer.h>
#include <java/awt/peer/FontPeer.h>
#include <java/awt/peer/MenuBarPeer.h>
#include <java/awt/peer/MenuItemPeer.h>
#include <java/awt/peer/MenuPeer.h>
#include <java/awt/peer/PopupMenuPeer.h>
#include <java/awt/peer/RobotPeer.h>
#include <java/awt/peer/SystemTrayPeer.h>
#include <java/awt/peer/TaskbarPeer.h>
#include <java/awt/peer/TrayIconPeer.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/UndeclaredThrowableException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/ResourceBundle.h>
#include <java/util/concurrent/Callable.h>
#include <javax/swing/UIManager.h>
#include <sun/awt/AWTAccessor$SystemColorAccessor.h>
#include <sun/awt/AWTAccessor$ToolkitAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/LightweightFrame.h>
#include <sun/awt/PlatformFont.h>
#include <sun/awt/PlatformGraphicsInfo.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/SunClipboard.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWCursorManager.h>
#include <sun/lwawt/LWToolkit.h>
#include <sun/lwawt/LWWindowPeer$PeerType.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <sun/lwawt/PlatformDropTarget.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/SecurityWarningWindow.h>
#include <sun/lwawt/macosx/CCheckboxMenuItem.h>
#include <sun/lwawt/macosx/CClipboard.h>
#include <sun/lwawt/macosx/CCursorManager.h>
#include <sun/lwawt/macosx/CCustomCursor.h>
#include <sun/lwawt/macosx/CDataTransferer.h>
#include <sun/lwawt/macosx/CDesktopPeer.h>
#include <sun/lwawt/macosx/CDragSourceContextPeer.h>
#include <sun/lwawt/macosx/CDropTarget.h>
#include <sun/lwawt/macosx/CEmbeddedFrame.h>
#include <sun/lwawt/macosx/CFileDialog.h>
#include <sun/lwawt/macosx/CImage$Creator.h>
#include <sun/lwawt/macosx/CImage.h>
#include <sun/lwawt/macosx/CInputMethod.h>
#include <sun/lwawt/macosx/CInputMethodDescriptor.h>
#include <sun/lwawt/macosx/CMenu.h>
#include <sun/lwawt/macosx/CMenuBar.h>
#include <sun/lwawt/macosx/CMenuItem.h>
#include <sun/lwawt/macosx/CMouseDragGestureRecognizer.h>
#include <sun/lwawt/macosx/CPlatformComponent.h>
#include <sun/lwawt/macosx/CPlatformEmbeddedFrame.h>
#include <sun/lwawt/macosx/CPlatformLWComponent.h>
#include <sun/lwawt/macosx/CPlatformLWWindow.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <sun/lwawt/macosx/CPopupMenu.h>
#include <sun/lwawt/macosx/CPrinterDialog.h>
#include <sun/lwawt/macosx/CPrinterDialogPeer.h>
#include <sun/lwawt/macosx/CRobot.h>
#include <sun/lwawt/macosx/CSystemTray.h>
#include <sun/lwawt/macosx/CTaskbarPeer.h>
#include <sun/lwawt/macosx/CTrayIcon.h>
#include <sun/lwawt/macosx/CViewEmbeddedFrame.h>
#include <sun/lwawt/macosx/CViewPlatformEmbeddedFrame.h>
#include <sun/lwawt/macosx/CWarningWindow.h>
#include <sun/lwawt/macosx/LWCToolkit$1.h>
#include <sun/lwawt/macosx/LWCToolkit$2.h>
#include <sun/lwawt/macosx/LWCToolkit$3.h>
#include <sun/lwawt/macosx/LWCToolkit$AppleSpecificColor.h>
#include <sun/lwawt/macosx/LWCToolkit$CallableWrapper.h>
#include <sun/lwawt/macosx/LWCToolkit$OSXPlatformFont.h>
#include <sun/lwawt/macosx/NamedCursor.h>
#include <jcpp.h>

#undef ALT_MASK
#undef APPKIT_THREAD_NAME
#undef APPLICATION_EXCLUDE
#undef APPLICATION_MODAL
#undef BUTTONS
#undef CTRL_MASK
#undef DESKTOPFONTHINTS
#undef DIALOG
#undef DOCUMENT_MODAL
#undef EMBEDDED_FRAME
#undef FRAME
#undef ICONIFIED
#undef INACTIVE_SELECTION_BACKGROUND_COLOR
#undef INACTIVE_SELECTION_FOREGROUND_COLOR
#undef KEYBOARD_FOCUS_COLOR
#undef KEY_TEXT_ANTIALIASING
#undef LW_FRAME
#undef MAXIMIZED_BOTH
#undef META_DOWN_MASK
#undef META_MASK
#undef MODELESS
#undef NORMAL
#undef NO_EXCLUDE
#undef NUM_APPLE_COLORS
#undef SELECTED_CONTROL_TEXT_COLOR
#undef SIMPLEWINDOW
#undef TOOLKIT_EXCLUDE
#undef TOOLKIT_MODAL
#undef TRUE
#undef VALUE_TEXT_ANTIALIAS_LCD_HRGB
#undef VIEW_EMBEDDED_FRAME
#undef VK_CAPS_LOCK
#undef VK_KANA_LOCK
#undef VK_NUM_LOCK
#undef VK_SCROLL_LOCK

using $AquaMenuBarUI = ::com::apple::laf::AquaMenuBarUI;
using $AWTError = ::java::awt::AWTError;
using $AWTEvent = ::java::awt::AWTEvent;
using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Desktop = ::java::awt::Desktop;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Dimension = ::java::awt::Dimension;
using $Event = ::java::awt::Event;
using $EventQueue = ::java::awt::EventQueue;
using $FileDialog = ::java::awt::FileDialog;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $MenuItem = ::java::awt::MenuItem;
using $Point = ::java::awt::Point;
using $PopupMenu = ::java::awt::PopupMenu;
using $RenderingHints = ::java::awt::RenderingHints;
using $SystemTray = ::java::awt::SystemTray;
using $Taskbar = ::java::awt::Taskbar;
using $Toolkit = ::java::awt::Toolkit;
using $TrayIcon = ::java::awt::TrayIcon;
using $Window = ::java::awt::Window;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $MouseDragGestureRecognizer = ::java::awt::dnd::MouseDragGestureRecognizer;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $InputEvent = ::java::awt::event::InputEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $InputMethodHighlight = ::java::awt::im::InputMethodHighlight;
using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $CheckboxMenuItemPeer = ::java::awt::peer::CheckboxMenuItemPeer;
using $DesktopPeer = ::java::awt::peer::DesktopPeer;
using $DialogPeer = ::java::awt::peer::DialogPeer;
using $FileDialogPeer = ::java::awt::peer::FileDialogPeer;
using $FontPeer = ::java::awt::peer::FontPeer;
using $MenuBarPeer = ::java::awt::peer::MenuBarPeer;
using $MenuItemPeer = ::java::awt::peer::MenuItemPeer;
using $MenuPeer = ::java::awt::peer::MenuPeer;
using $PopupMenuPeer = ::java::awt::peer::PopupMenuPeer;
using $RobotPeer = ::java::awt::peer::RobotPeer;
using $SystemTrayPeer = ::java::awt::peer::SystemTrayPeer;
using $TaskbarPeer = ::java::awt::peer::TaskbarPeer;
using $TrayIconPeer = ::java::awt::peer::TrayIconPeer;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $UndeclaredThrowableException = ::java::lang::reflect::UndeclaredThrowableException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Callable = ::java::util::concurrent::Callable;
using $UIManager = ::javax::swing::UIManager;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$SystemColorAccessor = ::sun::awt::AWTAccessor$SystemColorAccessor;
using $AWTAccessor$ToolkitAccessor = ::sun::awt::AWTAccessor$ToolkitAccessor;
using $AppContext = ::sun::awt::AppContext;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $LightweightFrame = ::sun::awt::LightweightFrame;
using $PlatformFont = ::sun::awt::PlatformFont;
using $PlatformGraphicsInfo = ::sun::awt::PlatformGraphicsInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $SunClipboard = ::sun::awt::datatransfer::SunClipboard;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $LWCursorManager = ::sun::lwawt::LWCursorManager;
using $LWToolkit = ::sun::lwawt::LWToolkit;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $LWWindowPeer$PeerType = ::sun::lwawt::LWWindowPeer$PeerType;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;
using $PlatformDropTarget = ::sun::lwawt::PlatformDropTarget;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $SecurityWarningWindow = ::sun::lwawt::SecurityWarningWindow;
using $CCheckboxMenuItem = ::sun::lwawt::macosx::CCheckboxMenuItem;
using $CClipboard = ::sun::lwawt::macosx::CClipboard;
using $CCursorManager = ::sun::lwawt::macosx::CCursorManager;
using $CCustomCursor = ::sun::lwawt::macosx::CCustomCursor;
using $CDataTransferer = ::sun::lwawt::macosx::CDataTransferer;
using $CDesktopPeer = ::sun::lwawt::macosx::CDesktopPeer;
using $CDragSourceContextPeer = ::sun::lwawt::macosx::CDragSourceContextPeer;
using $CDropTarget = ::sun::lwawt::macosx::CDropTarget;
using $CEmbeddedFrame = ::sun::lwawt::macosx::CEmbeddedFrame;
using $CFileDialog = ::sun::lwawt::macosx::CFileDialog;
using $CImage = ::sun::lwawt::macosx::CImage;
using $CImage$Creator = ::sun::lwawt::macosx::CImage$Creator;
using $CInputMethod = ::sun::lwawt::macosx::CInputMethod;
using $CInputMethodDescriptor = ::sun::lwawt::macosx::CInputMethodDescriptor;
using $CMenu = ::sun::lwawt::macosx::CMenu;
using $CMenuBar = ::sun::lwawt::macosx::CMenuBar;
using $CMenuItem = ::sun::lwawt::macosx::CMenuItem;
using $CMouseDragGestureRecognizer = ::sun::lwawt::macosx::CMouseDragGestureRecognizer;
using $CPlatformComponent = ::sun::lwawt::macosx::CPlatformComponent;
using $CPlatformEmbeddedFrame = ::sun::lwawt::macosx::CPlatformEmbeddedFrame;
using $CPlatformLWComponent = ::sun::lwawt::macosx::CPlatformLWComponent;
using $CPlatformLWWindow = ::sun::lwawt::macosx::CPlatformLWWindow;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;
using $CPopupMenu = ::sun::lwawt::macosx::CPopupMenu;
using $CPrinterDialog = ::sun::lwawt::macosx::CPrinterDialog;
using $CPrinterDialogPeer = ::sun::lwawt::macosx::CPrinterDialogPeer;
using $CRobot = ::sun::lwawt::macosx::CRobot;
using $CSystemTray = ::sun::lwawt::macosx::CSystemTray;
using $CTaskbarPeer = ::sun::lwawt::macosx::CTaskbarPeer;
using $CTrayIcon = ::sun::lwawt::macosx::CTrayIcon;
using $CViewEmbeddedFrame = ::sun::lwawt::macosx::CViewEmbeddedFrame;
using $CViewPlatformEmbeddedFrame = ::sun::lwawt::macosx::CViewPlatformEmbeddedFrame;
using $CWarningWindow = ::sun::lwawt::macosx::CWarningWindow;
using $LWCToolkit$1 = ::sun::lwawt::macosx::LWCToolkit$1;
using $LWCToolkit$2 = ::sun::lwawt::macosx::LWCToolkit$2;
using $LWCToolkit$3 = ::sun::lwawt::macosx::LWCToolkit$3;
using $LWCToolkit$AppleSpecificColor = ::sun::lwawt::macosx::LWCToolkit$AppleSpecificColor;
using $LWCToolkit$CallableWrapper = ::sun::lwawt::macosx::LWCToolkit$CallableWrapper;
using $LWCToolkit$OSXPlatformFont = ::sun::lwawt::macosx::LWCToolkit$OSXPlatformFont;
using $NamedCursor = ::sun::lwawt::macosx::NamedCursor;

namespace sun {
	namespace lwawt {
		namespace macosx {

class LWCToolkit$$Lambda$lambda$new$0 : public $PrivilegedAction {
	$class(LWCToolkit$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(LWCToolkit::lambda$new$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LWCToolkit$$Lambda$lambda$new$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LWCToolkit$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LWCToolkit$$Lambda$lambda$new$0::*)()>(&LWCToolkit$$Lambda$lambda$new$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LWCToolkit$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.LWCToolkit$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* LWCToolkit$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(LWCToolkit$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LWCToolkit$$Lambda$lambda$new$0::class$ = nullptr;

class LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1 : public $Runnable {
	$class(LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		LWCToolkit::lambda$systemColorsChanged$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1::*)()>(&LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1::load$($String* name, bool initialize) {
	$loadClass(LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1::class$ = nullptr;

class LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2 : public $PrivilegedAction {
	$class(LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(LWCToolkit::lambda$installToolkitThreadInJava$3());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2::*)()>(&LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2::load$($String* name, bool initialize) {
	$loadClass(LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2::class$ = nullptr;

class LWCToolkit$$Lambda$lambda$invokeAndWait$4$3 : public $Runnable {
	$class(LWCToolkit$$Lambda$lambda$invokeAndWait$4$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(int64_t mediator) {
		this->mediator = mediator;
	}
	virtual void run() override {
		LWCToolkit::lambda$invokeAndWait$4(mediator);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LWCToolkit$$Lambda$lambda$invokeAndWait$4$3>());
	}
	int64_t mediator = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LWCToolkit$$Lambda$lambda$invokeAndWait$4$3::fieldInfos[2] = {
	{"mediator", "J", nullptr, $PUBLIC, $field(LWCToolkit$$Lambda$lambda$invokeAndWait$4$3, mediator)},
	{}
};
$MethodInfo LWCToolkit$$Lambda$lambda$invokeAndWait$4$3::methodInfos[3] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(LWCToolkit$$Lambda$lambda$invokeAndWait$4$3::*)(int64_t)>(&LWCToolkit$$Lambda$lambda$invokeAndWait$4$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LWCToolkit$$Lambda$lambda$invokeAndWait$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.LWCToolkit$$Lambda$lambda$invokeAndWait$4$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* LWCToolkit$$Lambda$lambda$invokeAndWait$4$3::load$($String* name, bool initialize) {
	$loadClass(LWCToolkit$$Lambda$lambda$invokeAndWait$4$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LWCToolkit$$Lambda$lambda$invokeAndWait$4$3::class$ = nullptr;

class LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4 : public $PrivilegedAction {
	$class(LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return LWCToolkit::lambda$systemColorsChanged$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4::*)()>(&LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4::load$($String* name, bool initialize) {
	$loadClass(LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4::class$ = nullptr;

$NamedAttribute LWCToolkit_Attribute_var$0[] = {
	{"since", 's', "10"},
	{}
};

$CompoundAttribute _LWCToolkit_MethodAnnotations_getMenuShortcutKeyMask49[] = {
	{"Ljava/lang/Deprecated;", LWCToolkit_Attribute_var$0},
	{}
};

$FieldInfo _LWCToolkit_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LWCToolkit, $assertionsDisabled)},
	{"BUTTONS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWCToolkit, BUTTONS)},
	{"sInputMethodDescriptor", "Lsun/lwawt/macosx/CInputMethodDescriptor;", nullptr, $PRIVATE | $STATIC, $staticField(LWCToolkit, sInputMethodDescriptor)},
	{"inAWT", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LWCToolkit, inAWT)},
	{"NUM_APPLE_COLORS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWCToolkit, NUM_APPLE_COLORS)},
	{"KEYBOARD_FOCUS_COLOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LWCToolkit, KEYBOARD_FOCUS_COLOR)},
	{"INACTIVE_SELECTION_BACKGROUND_COLOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LWCToolkit, INACTIVE_SELECTION_BACKGROUND_COLOR)},
	{"INACTIVE_SELECTION_FOREGROUND_COLOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LWCToolkit, INACTIVE_SELECTION_FOREGROUND_COLOR)},
	{"SELECTED_CONTROL_TEXT_COLOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LWCToolkit, SELECTED_CONTROL_TEXT_COLOR)},
	{"appleColors", "[I", nullptr, $PRIVATE | $STATIC, $staticField(LWCToolkit, appleColors)},
	{"areExtraMouseButtonsEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(LWCToolkit, areExtraMouseButtonsEnabled$)},
	{"APPKIT_THREAD_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LWCToolkit, APPKIT_THREAD_NAME)},
	{"nsImagePrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LWCToolkit, nsImagePrefix)},
	{}
};

$MethodInfo _LWCToolkit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LWCToolkit::*)()>(&LWCToolkit::init$))},
	{"activateApplicationIgnoringOtherApps", "()V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(LWCToolkit::*)()>(&LWCToolkit::activateApplicationIgnoringOtherApps))},
	{"areExtraMouseButtonsEnabled", "()Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"beep", "()V", nullptr, $PUBLIC | $NATIVE},
	{"canPopupOverlapTaskBar", "()Z", nullptr, $PUBLIC},
	{"checkException", "(Ljava/awt/event/InvocationEvent;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($InvocationEvent*)>(&LWCToolkit::checkException)), "java.lang.reflect.InvocationTargetException"},
	{"checkForNSImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PRIVATE, $method(static_cast<$Image*(LWCToolkit::*)($String*)>(&LWCToolkit::checkForNSImage))},
	{"createAWTRunLoopMediator", "()J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&LWCToolkit::createAWTRunLoopMediator))},
	{"createCPrinterDialog", "(Lsun/lwawt/macosx/CPrinterDialog;)Lsun/lwawt/macosx/CPrinterDialogPeer;", nullptr, $PRIVATE, $method(static_cast<$CPrinterDialogPeer*(LWCToolkit::*)($CPrinterDialog*)>(&LWCToolkit::createCPrinterDialog))},
	{"createCheckboxMenuItem", "(Ljava/awt/CheckboxMenuItem;)Ljava/awt/peer/CheckboxMenuItemPeer;", nullptr, $PUBLIC},
	{"createCustomCursor", "(Ljava/awt/Image;Ljava/awt/Point;Ljava/lang/String;)Ljava/awt/Cursor;", nullptr, $PUBLIC, nullptr, "java.lang.IndexOutOfBoundsException,java.awt.HeadlessException"},
	{"createDesktopPeer", "(Ljava/awt/Desktop;)Ljava/awt/peer/DesktopPeer;", nullptr, $PUBLIC},
	{"createDialog", "(Ljava/awt/Dialog;)Ljava/awt/peer/DialogPeer;", nullptr, $PUBLIC},
	{"createDragGestureRecognizer", "(Ljava/lang/Class;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)Ljava/awt/dnd/DragGestureRecognizer;", "<T:Ljava/awt/dnd/DragGestureRecognizer;>(Ljava/lang/Class<TT;>;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)TT;", $PUBLIC},
	{"createDragSourceContextPeer", "(Ljava/awt/dnd/DragGestureEvent;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"createDropTarget", "(Ljava/awt/dnd/DropTarget;Ljava/awt/Component;Lsun/lwawt/LWComponentPeer;)Lsun/lwawt/PlatformDropTarget;", "(Ljava/awt/dnd/DropTarget;Ljava/awt/Component;Lsun/lwawt/LWComponentPeer<**>;)Lsun/lwawt/PlatformDropTarget;", $PROTECTED},
	{"createEmbeddedFrame", "(Lsun/lwawt/macosx/CEmbeddedFrame;)Lsun/lwawt/LWWindowPeer;", nullptr, 0, $method(static_cast<$LWWindowPeer*(LWCToolkit::*)($CEmbeddedFrame*)>(&LWCToolkit::createEmbeddedFrame))},
	{"createEmbeddedFrame", "(Lsun/lwawt/macosx/CViewEmbeddedFrame;)Lsun/lwawt/LWWindowPeer;", nullptr, 0, $method(static_cast<$LWWindowPeer*(LWCToolkit::*)($CViewEmbeddedFrame*)>(&LWCToolkit::createEmbeddedFrame))},
	{"createFileDialogPeer", "(Ljava/awt/FileDialog;)Ljava/awt/peer/FileDialogPeer;", nullptr, $PROTECTED},
	{"createLwPlatformComponent", "()Lsun/lwawt/PlatformComponent;", nullptr, $PROTECTED},
	{"createMenu", "(Ljava/awt/Menu;)Ljava/awt/peer/MenuPeer;", nullptr, $PUBLIC},
	{"createMenuBar", "(Ljava/awt/MenuBar;)Ljava/awt/peer/MenuBarPeer;", nullptr, $PUBLIC},
	{"createMenuItem", "(Ljava/awt/MenuItem;)Ljava/awt/peer/MenuItemPeer;", nullptr, $PUBLIC},
	{"createPlatformClipboard", "()Ljava/awt/datatransfer/Clipboard;", nullptr, $PUBLIC},
	{"createPlatformComponent", "()Lsun/lwawt/PlatformComponent;", nullptr, $PROTECTED},
	{"createPlatformWindow", "(Lsun/lwawt/LWWindowPeer$PeerType;)Lsun/lwawt/PlatformWindow;", nullptr, $PROTECTED},
	{"createPopupMenu", "(Ljava/awt/PopupMenu;)Ljava/awt/peer/PopupMenuPeer;", nullptr, $PUBLIC},
	{"createRobot", "(Ljava/awt/GraphicsDevice;)Ljava/awt/peer/RobotPeer;", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createSecurityWarning", "(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;)Lsun/lwawt/SecurityWarningWindow;", nullptr, $PROTECTED},
	{"createSystemTray", "(Ljava/awt/SystemTray;)Ljava/awt/peer/SystemTrayPeer;", nullptr, $PUBLIC},
	{"createTaskbarPeer", "(Ljava/awt/Taskbar;)Ljava/awt/peer/TaskbarPeer;", nullptr, $PUBLIC},
	{"createTrayIcon", "(Ljava/awt/TrayIcon;)Ljava/awt/peer/TrayIconPeer;", nullptr, $PUBLIC},
	{"doAWTRunLoop", "(JZ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,bool)>(&LWCToolkit::doAWTRunLoop))},
	{"doAWTRunLoopImpl", "(JZZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,bool,bool)>(&LWCToolkit::doAWTRunLoopImpl))},
	{"doEquals", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(Object$*,Object$*,$Component*)>(&LWCToolkit::doEquals))},
	{"enableInputMethodsForTextComponent", "()Z", nullptr, $PUBLIC},
	{"flushNativeSelectors", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&LWCToolkit::flushNativeSelectors))},
	{"getAppleColor", "(I)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Color*(*)(int32_t)>(&LWCToolkit::getAppleColor))},
	{"getBestCursorSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getCursorManager", "()Lsun/lwawt/LWCursorManager;", nullptr, $PUBLIC},
	{"getDataTransferer", "()Lsun/awt/datatransfer/DataTransferer;", nullptr, $PUBLIC},
	{"getDefaultKeyboardLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getFocusAcceleratorKeyMask", "()I", nullptr, $PUBLIC},
	{"getFontPeer", "(Ljava/lang/String;I)Ljava/awt/peer/FontPeer;", nullptr, $PUBLIC},
	{"getImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getImage", "(Ljava/net/URL;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getInputMethodAdapterDescriptor", "()Ljava/awt/im/spi/InputMethodDescriptor;", nullptr, $PUBLIC},
	{"getLWCToolkit", "()Lsun/lwawt/macosx/LWCToolkit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LWCToolkit*(*)()>(&LWCToolkit::getLWCToolkit))},
	{"getLockingKeyState", "(I)Z", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"getMenuShortcutKeyMask", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _LWCToolkit_MethodAnnotations_getMenuShortcutKeyMask49},
	{"getMenuShortcutKeyMaskEx", "()I", nullptr, $PUBLIC},
	{"getMultiClickTime", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&LWCToolkit::getMultiClickTime))},
	{"getNumberOfButtons", "()I", nullptr, $PUBLIC},
	{"getPlatformWindowUnderMouse", "()Lsun/lwawt/PlatformWindow;", nullptr, $PROTECTED},
	{"getScaledImageName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&LWCToolkit::getScaledImageName))},
	{"getScaledImageURL", "(Ljava/net/URL;)Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URL*(*)($URL*)>(&LWCToolkit::getScaledImageURL))},
	{"getScreenInsets", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getScreenResolution", "()I", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"initAppkit", "(Ljava/lang/ThreadGroup;Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($ThreadGroup*,bool)>(&LWCToolkit::initAppkit))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&LWCToolkit::initIDs))},
	{"initializeDesktopProperties", "()V", nullptr, $PROTECTED},
	{"installToolkitThreadInJava", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&LWCToolkit::installToolkitThreadInJava))},
	{"invokeAndWait", "(Ljava/util/concurrent/Callable;Ljava/awt/Component;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;Ljava/awt/Component;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Callable*,$Component*)>(&LWCToolkit::invokeAndWait)), "java.lang.Exception"},
	{"invokeAndWait", "(Ljava/lang/Runnable;Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Runnable*,$Component*)>(&LWCToolkit::invokeAndWait)), "java.lang.reflect.InvocationTargetException"},
	{"invokeLater", "(Ljava/lang/Runnable;Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Runnable*,$Component*)>(&LWCToolkit::invokeLater)), "java.lang.reflect.InvocationTargetException"},
	{"isAlwaysOnTopSupported", "()Z", nullptr, $PUBLIC},
	{"isApplicationActive", "()Z", nullptr, $NATIVE, $method(static_cast<bool(LWCToolkit::*)()>(&LWCToolkit::isApplicationActive))},
	{"isCapsLockOn", "()Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(LWCToolkit::*)()>(&LWCToolkit::isCapsLockOn))},
	{"isCharModifierKeyInUSInternationalPC", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&LWCToolkit::isCharModifierKeyInUSInternationalPC))},
	{"isEmbedded", "()Z", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&LWCToolkit::isEmbedded))},
	{"isFrameStateSupported", "(I)Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"isLocaleUSInternationalPC", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Locale*)>(&LWCToolkit::isLocaleUSInternationalPC))},
	{"isModalExclusionTypeSupported", "(Ljava/awt/Dialog$ModalExclusionType;)Z", nullptr, $PUBLIC},
	{"isModalityTypeSupported", "(Ljava/awt/Dialog$ModalityType;)Z", nullptr, $PUBLIC},
	{"isPrintableCharacterModifiersMask", "(I)Z", nullptr, $PUBLIC},
	{"isSwingBackbufferTranslucencySupported", "()Z", nullptr, $PUBLIC},
	{"isTranslucencyCapable", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"isTraySupported", "()Z", nullptr, $PUBLIC},
	{"isValidPath", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&LWCToolkit::isValidPath))},
	{"isWindowOpacitySupported", "()Z", nullptr, $PUBLIC},
	{"isWindowShapingSupported", "()Z", nullptr, $PUBLIC},
	{"isWindowTranslucencySupported", "()Z", nullptr, $PUBLIC},
	{"lambda$installToolkitThreadInJava$3", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&LWCToolkit::lambda$installToolkitThreadInJava$3))},
	{"lambda$invokeAndWait$4", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&LWCToolkit::lambda$invokeAndWait$4))},
	{"lambda$new$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&LWCToolkit::lambda$new$0))},
	{"lambda$systemColorsChanged$1", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)()>(&LWCToolkit::lambda$systemColorsChanged$1))},
	{"lambda$systemColorsChanged$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&LWCToolkit::lambda$systemColorsChanged$2))},
	{"loadNativeColors", "([I[I)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(LWCToolkit::*)($ints*,$ints*)>(&LWCToolkit::loadNativeColors))},
	{"loadSystemColors", "([I)V", nullptr, $PROTECTED},
	{"mapInputMethodHighlight", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map;", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map<Ljava/awt/font/TextAttribute;*>;", $PUBLIC},
	{"nativeSyncQueue", "(J)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(LWCToolkit::*)(int64_t)>(&LWCToolkit::nativeSyncQueue))},
	{"performOnMainThreadAfterDelay", "(Ljava/lang/Runnable;J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)($Runnable*,int64_t)>(&LWCToolkit::performOnMainThreadAfterDelay))},
	{"platformCleanup", "()V", nullptr, $PROTECTED},
	{"platformInit", "()V", nullptr, $PROTECTED},
	{"platformRunMessage", "()V", nullptr, $PROTECTED},
	{"platformShutdown", "()V", nullptr, $PROTECTED},
	{"stopAWTRunLoop", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&LWCToolkit::stopAWTRunLoop))},
	{"sync", "()V", nullptr, $PUBLIC},
	{"syncNativeQueue", "(J)Z", nullptr, $PROTECTED},
	{"systemColorsChanged", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&LWCToolkit::systemColorsChanged))},
	{"updateScreenMenuBarUI", "()V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_activateApplicationIgnoringOtherApps 1
#define _METHOD_INDEX_beep 3
#define _METHOD_INDEX_createAWTRunLoopMediator 7
#define _METHOD_INDEX_doAWTRunLoopImpl 33
#define _METHOD_INDEX_flushNativeSelectors 36
#define _METHOD_INDEX_getMultiClickTime 51
#define _METHOD_INDEX_initAppkit 58
#define _METHOD_INDEX_initIDs 59
#define _METHOD_INDEX_isApplicationActive 66
#define _METHOD_INDEX_isCapsLockOn 67
#define _METHOD_INDEX_isEmbedded 69
#define _METHOD_INDEX_loadNativeColors 87
#define _METHOD_INDEX_nativeSyncQueue 90
#define _METHOD_INDEX_performOnMainThreadAfterDelay 91
#define _METHOD_INDEX_stopAWTRunLoop 96

$InnerClassInfo _LWCToolkit_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.LWCToolkit$CallableWrapper", "sun.lwawt.macosx.LWCToolkit", "CallableWrapper", $STATIC | $FINAL},
	{"sun.lwawt.macosx.LWCToolkit$OSXPlatformFont", "sun.lwawt.macosx.LWCToolkit", "OSXPlatformFont", 0},
	{"sun.lwawt.macosx.LWCToolkit$AppleSpecificColor", "sun.lwawt.macosx.LWCToolkit", "AppleSpecificColor", $PRIVATE | $STATIC},
	{"sun.lwawt.macosx.LWCToolkit$3", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.LWCToolkit$2", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.LWCToolkit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWCToolkit_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.LWCToolkit",
	"sun.lwawt.LWToolkit",
	nullptr,
	_LWCToolkit_FieldInfo_,
	_LWCToolkit_MethodInfo_,
	nullptr,
	nullptr,
	_LWCToolkit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.LWCToolkit$CallableWrapper,sun.lwawt.macosx.LWCToolkit$OSXPlatformFont,sun.lwawt.macosx.LWCToolkit$AppleSpecificColor,sun.lwawt.macosx.LWCToolkit$3,sun.lwawt.macosx.LWCToolkit$2,sun.lwawt.macosx.LWCToolkit$1"
};

$Object* allocate$LWCToolkit($Class* clazz) {
	return $of($alloc(LWCToolkit));
}

bool LWCToolkit::$assertionsDisabled = false;
$CInputMethodDescriptor* LWCToolkit::sInputMethodDescriptor = nullptr;
bool LWCToolkit::inAWT = false;
$ints* LWCToolkit::appleColors = nullptr;
bool LWCToolkit::areExtraMouseButtonsEnabled$ = false;
$String* LWCToolkit::APPKIT_THREAD_NAME = nullptr;
$String* LWCToolkit::nsImagePrefix = nullptr;

void LWCToolkit::initIDs() {
	$init(LWCToolkit);
	$prepareNativeStatic(LWCToolkit, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void LWCToolkit::initAppkit($ThreadGroup* appKitThreadGroup, bool headless) {
	$init(LWCToolkit);
	$prepareNativeStatic(LWCToolkit, initAppkit, void, $ThreadGroup* appKitThreadGroup, bool headless);
	$invokeNativeStatic(appKitThreadGroup, headless);
	$finishNativeStatic();
}

void LWCToolkit::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$LWToolkit::init$();
	$var($String, extraButtons, "sun.awt.enableExtraMouseButtons"_s);
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(LWCToolkit$$Lambda$lambda$new$0)));
}

void LWCToolkit::loadNativeColors($ints* systemColors, $ints* appleColors) {
	$prepareNative(LWCToolkit, loadNativeColors, void, $ints* systemColors, $ints* appleColors);
	$invokeNative(systemColors, appleColors);
	$finishNative();
}

void LWCToolkit::loadSystemColors($ints* systemColors) {
	if (systemColors == nullptr) {
		return;
	}
	loadNativeColors(systemColors, LWCToolkit::appleColors);
}

$Color* LWCToolkit::getAppleColor(int32_t color) {
	$init(LWCToolkit);
	return $new($LWCToolkit$AppleSpecificColor, color);
}

void LWCToolkit::systemColorsChanged() {
	$init(LWCToolkit);
	$EventQueue::invokeLater(static_cast<$Runnable*>($$new(LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1)));
}

LWCToolkit* LWCToolkit::getLWCToolkit() {
	$init(LWCToolkit);
	return $cast(LWCToolkit, $Toolkit::getDefaultToolkit());
}

$PlatformWindow* LWCToolkit::createPlatformWindow($LWWindowPeer$PeerType* peerType) {
	$init($LWWindowPeer$PeerType);
	if (peerType == $LWWindowPeer$PeerType::EMBEDDED_FRAME) {
		return $new($CPlatformEmbeddedFrame);
	} else {
		if (peerType == $LWWindowPeer$PeerType::VIEW_EMBEDDED_FRAME) {
			return $new($CViewPlatformEmbeddedFrame);
		} else {
			if (peerType == $LWWindowPeer$PeerType::LW_FRAME) {
				return $new($CPlatformLWWindow);
			} else {
				if (!LWCToolkit::$assertionsDisabled && !(peerType == $LWWindowPeer$PeerType::SIMPLEWINDOW || peerType == $LWWindowPeer$PeerType::DIALOG || peerType == $LWWindowPeer$PeerType::FRAME)) {
					$throwNew($AssertionError);
				}
				return $new($CPlatformWindow);
			}
		}
	}
}

$LWWindowPeer* LWCToolkit::createEmbeddedFrame($CEmbeddedFrame* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$init($LWWindowPeer$PeerType);
	$var($PlatformWindow, platformWindow, createPlatformWindow($LWWindowPeer$PeerType::EMBEDDED_FRAME));
	return createDelegatedPeer(target, platformComponent, platformWindow, $LWWindowPeer$PeerType::EMBEDDED_FRAME);
}

$LWWindowPeer* LWCToolkit::createEmbeddedFrame($CViewEmbeddedFrame* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$init($LWWindowPeer$PeerType);
	$var($PlatformWindow, platformWindow, createPlatformWindow($LWWindowPeer$PeerType::VIEW_EMBEDDED_FRAME));
	return createDelegatedPeer(target, platformComponent, platformWindow, $LWWindowPeer$PeerType::VIEW_EMBEDDED_FRAME);
}

$CPrinterDialogPeer* LWCToolkit::createCPrinterDialog($CPrinterDialog* target) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformComponent, platformComponent, createPlatformComponent());
	$init($LWWindowPeer$PeerType);
	$var($PlatformWindow, platformWindow, createPlatformWindow($LWWindowPeer$PeerType::DIALOG));
	$var($CPrinterDialogPeer, peer, $new($CPrinterDialogPeer, target, platformComponent, platformWindow));
	targetCreatedPeer(target, peer);
	return peer;
}

$DialogPeer* LWCToolkit::createDialog($Dialog* target) {
	if ($instanceOf($CPrinterDialog, target)) {
		return createCPrinterDialog($cast($CPrinterDialog, target));
	}
	return $LWToolkit::createDialog(target);
}

$SecurityWarningWindow* LWCToolkit::createSecurityWarning($Window* ownerWindow, $LWWindowPeer* ownerPeer) {
	return $new($CWarningWindow, ownerWindow, ownerPeer);
}

$PlatformComponent* LWCToolkit::createPlatformComponent() {
	return $new($CPlatformComponent);
}

$PlatformComponent* LWCToolkit::createLwPlatformComponent() {
	return $new($CPlatformLWComponent);
}

$FileDialogPeer* LWCToolkit::createFileDialogPeer($FileDialog* target) {
	return $new($CFileDialog, target);
}

$MenuPeer* LWCToolkit::createMenu($Menu* target) {
	$var($MenuPeer, peer, $new($CMenu, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$MenuBarPeer* LWCToolkit::createMenuBar($MenuBar* target) {
	$var($MenuBarPeer, peer, $new($CMenuBar, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$MenuItemPeer* LWCToolkit::createMenuItem($MenuItem* target) {
	$var($MenuItemPeer, peer, $new($CMenuItem, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$CheckboxMenuItemPeer* LWCToolkit::createCheckboxMenuItem($CheckboxMenuItem* target) {
	$var($CheckboxMenuItemPeer, peer, $new($CCheckboxMenuItem, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$PopupMenuPeer* LWCToolkit::createPopupMenu($PopupMenu* target) {
	$var($PopupMenuPeer, peer, $new($CPopupMenu, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$SystemTrayPeer* LWCToolkit::createSystemTray($SystemTray* target) {
	return $new($CSystemTray);
}

$TrayIconPeer* LWCToolkit::createTrayIcon($TrayIcon* target) {
	$var($TrayIconPeer, peer, $new($CTrayIcon, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$DesktopPeer* LWCToolkit::createDesktopPeer($Desktop* target) {
	return $new($CDesktopPeer);
}

$TaskbarPeer* LWCToolkit::createTaskbarPeer($Taskbar* target) {
	return $new($CTaskbarPeer);
}

$LWCursorManager* LWCToolkit::getCursorManager() {
	return $CCursorManager::getInstance();
}

$Cursor* LWCToolkit::createCustomCursor($Image* cursor, $Point* hotSpot, $String* name) {
	return $new($CCustomCursor, cursor, hotSpot, name);
}

$Dimension* LWCToolkit::getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight) {
	return $CCustomCursor::getBestCursorSize(preferredWidth, preferredHeight);
}

void LWCToolkit::platformCleanup() {
}

void LWCToolkit::platformInit() {
}

void LWCToolkit::platformRunMessage() {
}

void LWCToolkit::platformShutdown() {
}

$FontPeer* LWCToolkit::getFontPeer($String* name, int32_t style) {
	return $new($LWCToolkit$OSXPlatformFont, this, name, style);
}

void LWCToolkit::initializeDesktopProperties() {
	$useLocalCurrentObjectStackCache();
	$LWToolkit::initializeDesktopProperties();
	$var($Map, fontHints, $new($HashMap));
	$init($RenderingHints);
	fontHints->put($RenderingHints::KEY_TEXT_ANTIALIASING, $RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB);
	$init($SunToolkit);
	$nc(this->desktopProperties)->put($SunToolkit::DESKTOPFONTHINTS, fontHints);
	$nc(this->desktopProperties)->put("awt.mouse.numButtons"_s, $($Integer::valueOf(LWCToolkit::BUTTONS)));
	$nc(this->desktopProperties)->put("awt.multiClickInterval"_s, $($Integer::valueOf(getMultiClickTime())));
	$nc(this->desktopProperties)->put("DnD.Autoscroll.initialDelay"_s, $($Integer::valueOf(50)));
	$nc(this->desktopProperties)->put("DnD.Autoscroll.interval"_s, $($Integer::valueOf(50)));
	$nc(this->desktopProperties)->put("DnD.Autoscroll.cursorHysteresis"_s, $($Integer::valueOf(5)));
	$init($Boolean);
	$nc(this->desktopProperties)->put("DnD.isDragImageSupported"_s, $Boolean::TRUE);
	$nc(this->desktopProperties)->put("DnD.Cursor.CopyDrop"_s, $$new($NamedCursor, "DnD.Cursor.CopyDrop"_s));
	$nc(this->desktopProperties)->put("DnD.Cursor.MoveDrop"_s, $$new($NamedCursor, "DnD.Cursor.MoveDrop"_s));
	$nc(this->desktopProperties)->put("DnD.Cursor.LinkDrop"_s, $$new($NamedCursor, "DnD.Cursor.LinkDrop"_s));
	$nc(this->desktopProperties)->put("DnD.Cursor.CopyNoDrop"_s, $$new($NamedCursor, "DnD.Cursor.CopyNoDrop"_s));
	$nc(this->desktopProperties)->put("DnD.Cursor.MoveNoDrop"_s, $$new($NamedCursor, "DnD.Cursor.MoveNoDrop"_s));
	$nc(this->desktopProperties)->put("DnD.Cursor.LinkNoDrop"_s, $$new($NamedCursor, "DnD.Cursor.LinkNoDrop"_s));
}

bool LWCToolkit::syncNativeQueue(int64_t timeout) {
	if (timeout <= 0) {
		return false;
	}
	bool var$0 = $SunDragSourceContextPeer::isDragDropInProgress();
	if (var$0 || $EventQueue::isDispatchThread()) {
		timeout = 50;
	}
	return nativeSyncQueue(timeout);
}

void LWCToolkit::beep() {
	$prepareNative(LWCToolkit, beep, void);
	$invokeNative();
	$finishNative();
}

int32_t LWCToolkit::getScreenResolution() {
	$useLocalCurrentObjectStackCache();
	return $cast(int32_t, $nc(($cast($CGraphicsDevice, $($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))))->getXResolution());
}

$Insets* LWCToolkit::getScreenInsets($GraphicsConfiguration* gc) {
	$var($GraphicsDevice, gd, $nc(gc)->getDevice());
	if (!($instanceOf($CGraphicsDevice, gd))) {
		return $LWToolkit::getScreenInsets(gc);
	}
	return $nc(($cast($CGraphicsDevice, gd)))->getScreenInsets();
}

void LWCToolkit::sync() {
	if ($CGraphicsDevice::usingMetalPipeline()) {
		$MTLRenderQueue::sync();
	} else {
		$OGLRenderQueue::sync();
	}
	flushNativeSelectors();
}

$RobotPeer* LWCToolkit::createRobot($GraphicsDevice* screen) {
	if ($instanceOf($CGraphicsDevice, screen)) {
		return $new($CRobot, $cast($CGraphicsDevice, screen));
	}
	return $LWToolkit::createRobot(screen);
}

bool LWCToolkit::isCapsLockOn() {
	bool $ret = false;
	$prepareNative(LWCToolkit, isCapsLockOn, bool);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

bool LWCToolkit::getLockingKeyState(int32_t keyCode) {
	switch (keyCode) {
	case $KeyEvent::VK_NUM_LOCK:
		{}
	case $KeyEvent::VK_SCROLL_LOCK:
		{}
	case $KeyEvent::VK_KANA_LOCK:
		{
			$throwNew($UnsupportedOperationException, "Toolkit.getLockingKeyState"_s);
		}
	case $KeyEvent::VK_CAPS_LOCK:
		{
			return isCapsLockOn();
		}
	default:
		{
			$throwNew($IllegalArgumentException, "invalid key for Toolkit.getLockingKeyState"_s);
		}
	}
}

bool LWCToolkit::areExtraMouseButtonsEnabled() {
	return LWCToolkit::areExtraMouseButtonsEnabled$;
}

int32_t LWCToolkit::getNumberOfButtons() {
	return LWCToolkit::BUTTONS;
}

int32_t LWCToolkit::getMultiClickTime() {
	$init(LWCToolkit);
	int32_t $ret = 0;
	$prepareNativeStatic(LWCToolkit, getMultiClickTime, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool LWCToolkit::isTraySupported() {
	return true;
}

$DataTransferer* LWCToolkit::getDataTransferer() {
	return $CDataTransferer::getInstanceImpl();
}

bool LWCToolkit::isAlwaysOnTopSupported() {
	return true;
}

void LWCToolkit::installToolkitThreadInJava() {
	$init(LWCToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$($Thread::currentThread())->setName(LWCToolkit::APPKIT_THREAD_NAME);
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2)));
}

bool LWCToolkit::isWindowOpacitySupported() {
	return true;
}

bool LWCToolkit::isFrameStateSupported(int32_t state) {
	switch (state) {
	case $Frame::NORMAL:
		{}
	case $Frame::ICONIFIED:
		{}
	case $Frame::MAXIMIZED_BOTH:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

int32_t LWCToolkit::getMenuShortcutKeyMask() {
	return $Event::META_MASK;
}

int32_t LWCToolkit::getMenuShortcutKeyMaskEx() {
	return $InputEvent::META_DOWN_MASK;
}

$Image* LWCToolkit::getImage($String* filename) {
	$useLocalCurrentObjectStackCache();
	$var($Image, nsImage, checkForNSImage(filename));
	if (nsImage != nullptr) {
		return nsImage;
	}
	if (imageCached(filename)) {
		return $LWToolkit::getImage(filename);
	}
	$var($String, filename2x, getScaledImageName(filename));
	return (imageExists(filename2x)) ? getImageWithResolutionVariant(filename, filename2x) : $LWToolkit::getImage(filename);
}

$Image* LWCToolkit::getImage($URL* url) {
	if (imageCached(url)) {
		return $LWToolkit::getImage(url);
	}
	$var($URL, url2x, getScaledImageURL(url));
	return (imageExists(url2x)) ? getImageWithResolutionVariant(url, url2x) : $LWToolkit::getImage(url);
}

$Image* LWCToolkit::checkForNSImage($String* imageName) {
	$useLocalCurrentObjectStackCache();
	if (imageName == nullptr) {
		return nullptr;
	}
	if (!$nc(imageName)->startsWith(LWCToolkit::nsImagePrefix)) {
		return nullptr;
	}
	return $nc($($CImage::getCreator()))->createImageFromName($($nc(imageName)->substring($nc(LWCToolkit::nsImagePrefix)->length())));
}

bool LWCToolkit::doEquals(Object$* a, Object$* b, $Component* c) {
	$init(LWCToolkit);
	$useLocalCurrentObjectStackCache();
	if ($equals(a, b)) {
		return true;
	}
	$var($booleans, ret, $new($booleans, 1));
	try {
		invokeAndWait(static_cast<$Runnable*>($$new($LWCToolkit$3, ret, a, b)), c);
	} catch ($Exception& e) {
		e->printStackTrace();
	}
	$synchronized(ret) {
		return ret->get(0);
	}
}

$Object* LWCToolkit::invokeAndWait($Callable* callable, $Component* component) {
	$init(LWCToolkit);
	$var($LWCToolkit$CallableWrapper, wrapper, $new($LWCToolkit$CallableWrapper, callable));
	invokeAndWait(static_cast<$Runnable*>(wrapper), component);
	return $of(wrapper->getResult());
}

void LWCToolkit::invokeAndWait($Runnable* runnable, $Component* component) {
	$init(LWCToolkit);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(component), "Null component provided to invokeAndWait"_s);
	int64_t mediator = createAWTRunLoopMediator();
	$var($InvocationEvent, invocationEvent, $new($InvocationEvent, $of(component), runnable, static_cast<$Runnable*>($$new(LWCToolkit$$Lambda$lambda$invokeAndWait$4$3, mediator)), true));
	$var($AppContext, appContext, $SunToolkit::targetToAppContext(component));
	$SunToolkit::postEvent(appContext, invocationEvent);
	$SunToolkit::flushPendingEvents(appContext);
	doAWTRunLoop(mediator, false);
	checkException(invocationEvent);
}

void LWCToolkit::invokeLater($Runnable* event, $Component* component) {
	$init(LWCToolkit);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(component), "Null component provided to invokeLater"_s);
	$var($InvocationEvent, invocationEvent, $new($InvocationEvent, component, event));
	$var($AppContext, appContext, $SunToolkit::targetToAppContext(component));
	$SunToolkit::postEvent($($SunToolkit::targetToAppContext(component)), invocationEvent);
	$SunToolkit::flushPendingEvents(appContext);
	checkException(invocationEvent);
}

void LWCToolkit::checkException($InvocationEvent* event) {
	$init(LWCToolkit);
	$var($Throwable, eventException, $nc(event)->getException());
	if (eventException == nullptr) {
		return;
	}
	if ($instanceOf($UndeclaredThrowableException, eventException)) {
		$assign(eventException, $nc(($cast($UndeclaredThrowableException, eventException)))->getUndeclaredThrowable());
	}
	$throwNew($InvocationTargetException, eventException);
}

void LWCToolkit::performOnMainThreadAfterDelay($Runnable* r, int64_t delay) {
	$init(LWCToolkit);
	$prepareNativeStatic(LWCToolkit, performOnMainThreadAfterDelay, void, $Runnable* r, int64_t delay);
	$invokeNativeStatic(r, delay);
	$finishNativeStatic();
}

$DragSourceContextPeer* LWCToolkit::createDragSourceContextPeer($DragGestureEvent* dge) {
	$useLocalCurrentObjectStackCache();
	$var($LightweightFrame, f, $SunToolkit::getLightweightFrame($($nc(dge)->getComponent())));
	if (f != nullptr) {
		return f->createDragSourceContextPeer(dge);
	}
	return $CDragSourceContextPeer::createDragSourceContextPeer(dge);
}

$DragGestureRecognizer* LWCToolkit::createDragGestureRecognizer($Class* abstractRecognizerClass, $DragSource* ds, $Component* c, int32_t srcActions, $DragGestureListener* dgl) {
	$useLocalCurrentObjectStackCache();
	$var($LightweightFrame, f, $SunToolkit::getLightweightFrame(c));
	if (f != nullptr) {
		return f->createDragGestureRecognizer(abstractRecognizerClass, ds, c, srcActions, dgl);
	}
	$var($DragGestureRecognizer, dgr, nullptr);
	$load($MouseDragGestureRecognizer);
	if ($of($MouseDragGestureRecognizer::class$)->equals(abstractRecognizerClass)) {
		$assign(dgr, $new($CMouseDragGestureRecognizer, ds, c, srcActions, dgl));
	}
	return dgr;
}

$PlatformDropTarget* LWCToolkit::createDropTarget($DropTarget* dropTarget, $Component* component, $LWComponentPeer* peer) {
	return $new($CDropTarget, dropTarget, component, peer);
}

$Locale* LWCToolkit::getDefaultKeyboardLocale() {
	$var($Locale, locale, $CInputMethod::getNativeLocale());
	if (locale == nullptr) {
		return $LWToolkit::getDefaultKeyboardLocale();
	}
	return locale;
}

bool LWCToolkit::isLocaleUSInternationalPC($Locale* locale) {
	$init(LWCToolkit);
	return (locale != nullptr ? $nc($($nc(locale)->toString()))->equals("_US_UserDefined_15000"_s) : false);
}

bool LWCToolkit::isCharModifierKeyInUSInternationalPC(char16_t ch) {
	$init(LWCToolkit);
	$useLocalCurrentObjectStackCache();
	$var($chars, modifierKeys, $new($chars, {
		u'\'',
		u'\"',
		u'`',
		(char16_t)0x2DC,
		(char16_t)0x2C6
	}));
	{
		$var($chars, arr$, modifierKeys);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			char16_t modKey = arr$->get(i$);
			{
				if (modKey == ch) {
					return true;
				}
			}
		}
	}
	return false;
}

$InputMethodDescriptor* LWCToolkit::getInputMethodAdapterDescriptor() {
	if (LWCToolkit::sInputMethodDescriptor == nullptr) {
		$assignStatic(LWCToolkit::sInputMethodDescriptor, $new($CInputMethodDescriptor));
	}
	return LWCToolkit::sInputMethodDescriptor;
}

$Map* LWCToolkit::mapInputMethodHighlight($InputMethodHighlight* highlight) {
	return $CInputMethod::mapInputMethodHighlight(highlight);
}

int32_t LWCToolkit::getFocusAcceleratorKeyMask() {
	return $InputEvent::CTRL_MASK | $InputEvent::ALT_MASK;
}

bool LWCToolkit::isPrintableCharacterModifiersMask(int32_t mods) {
	return (((int32_t)(mods & (uint32_t)($InputEvent::META_MASK | $InputEvent::CTRL_MASK))) == 0);
}

bool LWCToolkit::canPopupOverlapTaskBar() {
	return false;
}

bool LWCToolkit::isApplicationActive() {
	bool $ret = false;
	$prepareNative(LWCToolkit, isApplicationActive, bool);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

bool LWCToolkit::isEmbedded() {
	$init(LWCToolkit);
	bool $ret = false;
	$prepareNativeStatic(LWCToolkit, isEmbedded, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void LWCToolkit::activateApplicationIgnoringOtherApps() {
	$prepareNative(LWCToolkit, activateApplicationIgnoringOtherApps, void);
	$invokeNative();
	$finishNative();
}

int64_t LWCToolkit::createAWTRunLoopMediator() {
	$init(LWCToolkit);
	int64_t $ret = 0;
	$prepareNativeStatic(LWCToolkit, createAWTRunLoopMediator, int64_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void LWCToolkit::doAWTRunLoop(int64_t mediator, bool processEvents) {
	$init(LWCToolkit);
	doAWTRunLoopImpl(mediator, processEvents, LWCToolkit::inAWT);
}

void LWCToolkit::doAWTRunLoopImpl(int64_t mediator, bool processEvents, bool inAWT) {
	$init(LWCToolkit);
	$prepareNativeStatic(LWCToolkit, doAWTRunLoopImpl, void, int64_t mediator, bool processEvents, bool inAWT);
	$invokeNativeStatic(mediator, processEvents, inAWT);
	$finishNativeStatic();
}

void LWCToolkit::stopAWTRunLoop(int64_t mediator) {
	$init(LWCToolkit);
	$prepareNativeStatic(LWCToolkit, stopAWTRunLoop, void, int64_t mediator);
	$invokeNativeStatic(mediator);
	$finishNativeStatic();
}

bool LWCToolkit::nativeSyncQueue(int64_t timeout) {
	bool $ret = false;
	$prepareNative(LWCToolkit, nativeSyncQueue, bool, int64_t timeout);
	$ret = $invokeNative(timeout);
	$finishNative();
	return $ret;
}

void LWCToolkit::flushNativeSelectors() {
	$init(LWCToolkit);
	$prepareNativeStatic(LWCToolkit, flushNativeSelectors, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$Clipboard* LWCToolkit::createPlatformClipboard() {
	return $new($CClipboard, "System"_s);
}

bool LWCToolkit::isModalExclusionTypeSupported($Dialog$ModalExclusionType* exclusionType) {
	$init($Dialog$ModalExclusionType);
	return (exclusionType == nullptr) || (exclusionType == $Dialog$ModalExclusionType::NO_EXCLUDE) || (exclusionType == $Dialog$ModalExclusionType::APPLICATION_EXCLUDE) || (exclusionType == $Dialog$ModalExclusionType::TOOLKIT_EXCLUDE);
}

bool LWCToolkit::isModalityTypeSupported($Dialog$ModalityType* modalityType) {
	$init($Dialog$ModalityType);
	return (modalityType == nullptr) || (modalityType == $Dialog$ModalityType::MODELESS) || (modalityType == $Dialog$ModalityType::DOCUMENT_MODAL) || (modalityType == $Dialog$ModalityType::APPLICATION_MODAL) || (modalityType == $Dialog$ModalityType::TOOLKIT_MODAL);
}

bool LWCToolkit::isWindowShapingSupported() {
	return true;
}

bool LWCToolkit::isWindowTranslucencySupported() {
	return true;
}

bool LWCToolkit::isTranslucencyCapable($GraphicsConfiguration* gc) {
	return true;
}

bool LWCToolkit::isSwingBackbufferTranslucencySupported() {
	return true;
}

bool LWCToolkit::enableInputMethodsForTextComponent() {
	return true;
}

$URL* LWCToolkit::getScaledImageURL($URL* url) {
	$init(LWCToolkit);
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, scaledImagePath, getScaledImageName($($nc(url)->getPath())));
		$var($URL, var$0, nullptr);
		if (scaledImagePath == nullptr) {
			$assign(var$0, nullptr);
		} else {
			$var($String, var$1, $nc(url)->getProtocol());
			$var($String, var$2, url->getHost());
			$assign(var$0, $new($URL, var$1, var$2, url->getPort(), scaledImagePath));
		}
		return var$0;
	} catch ($MalformedURLException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* LWCToolkit::getScaledImageName($String* path) {
	$init(LWCToolkit);
	$useLocalCurrentObjectStackCache();
	if (!isValidPath(path)) {
		return nullptr;
	}
	int32_t slash = $nc(path)->lastIndexOf((int32_t)u'/');
	$var($String, name, (slash < 0) ? path : path->substring(slash + 1));
	if ($nc(name)->contains("@2x"_s)) {
		return nullptr;
	}
	int32_t dot = $nc(name)->lastIndexOf((int32_t)u'.');
	$var($String, var$0, nullptr);
	if (dot < 0) {
		$assign(var$0, $str({name, "@2x"_s}));
	} else {
		$var($String, var$1, $$str({$(name->substring(0, dot)), "@2x"_s}));
		$assign(var$0, $concat(var$1, $(name->substring(dot))));
	}
	$var($String, name2x, var$0);
	return (slash < 0) ? name2x : $str({$(path->substring(0, slash + 1)), name2x});
}

bool LWCToolkit::isValidPath($String* path) {
	$init(LWCToolkit);
	bool var$1 = path != nullptr && !path->isEmpty();
	bool var$0 = var$1 && !path->endsWith("/"_s);
	return var$0 && !path->endsWith("."_s);
}

$PlatformWindow* LWCToolkit::getPlatformWindowUnderMouse() {
	return $CPlatformWindow::nativeGetTopmostPlatformWindowUnderMouse();
}

void LWCToolkit::updateScreenMenuBarUI() {
	if ($AquaMenuBarUI::getScreenMenuBarProperty()) {
		$UIManager::put("MenuBarUI"_s, "com.apple.laf.AquaMenuBarUI"_s);
	} else {
		$UIManager::put("MenuBarUI"_s, nullptr);
	}
}

void LWCToolkit::lambda$invokeAndWait$4(int64_t mediator) {
	$init(LWCToolkit);
	if (mediator != 0) {
		stopAWTRunLoop(mediator);
	}
}

$Void* LWCToolkit::lambda$installToolkitThreadInJava$3() {
	$init(LWCToolkit);
	$($Thread::currentThread())->setContextClassLoader(nullptr);
	return nullptr;
}

void LWCToolkit::lambda$systemColorsChanged$2() {
	$init(LWCToolkit);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4)));
}

$Object* LWCToolkit::lambda$systemColorsChanged$1() {
	$init(LWCToolkit);
	$nc($($AWTAccessor::getSystemColorAccessor()))->updateSystemColors();
	return $of(nullptr);
}

$Void* LWCToolkit::lambda$new$0() {
	$init(LWCToolkit);
	$useLocalCurrentObjectStackCache();
	$var($String, extraButtons, "sun.awt.enableExtraMouseButtons"_s);
	LWCToolkit::areExtraMouseButtonsEnabled$ = $Boolean::parseBoolean($($System::getProperty(extraButtons, "true"_s)));
	$System::setProperty(extraButtons, $$str({""_s, $$str(LWCToolkit::areExtraMouseButtonsEnabled$)}));
	$var($ThreadGroup, var$0, $ThreadGroupUtils::getRootThreadGroup());
	initAppkit(var$0, $GraphicsEnvironment::isHeadless());
	return nullptr;
}

void clinit$LWCToolkit($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(LWCToolkit::APPKIT_THREAD_NAME, "AppKit Thread"_s);
	$assignStatic(LWCToolkit::nsImagePrefix, "NSImage://"_s);
	$beforeCallerSensitive();
	LWCToolkit::$assertionsDisabled = !LWCToolkit::class$->desiredAssertionStatus();
	{
		$nc($System::err)->flush();
		$var($ResourceBundle, platformResources, $cast($ResourceBundle, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($LWCToolkit$1)))));
		bool var$0 = !$GraphicsEnvironment::isHeadless();
		if (var$0 && !$PlatformGraphicsInfo::isInAquaSession()) {
			$throwNew($AWTError, "WindowServer is not available"_s);
		}
		$nc($($AWTAccessor::getToolkitAccessor()))->setPlatformResources(platformResources);
		if (!$GraphicsEnvironment::isHeadless()) {
			LWCToolkit::initIDs();
		}
		LWCToolkit::inAWT = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($LWCToolkit$2)))))))->booleanValue();
	}
	$assignStatic(LWCToolkit::appleColors, $new($ints, {
		(int32_t)0xFF808080,
		(int32_t)0xFFC0C0C0,
		(int32_t)0xFF303030,
		-1
	}));
	LWCToolkit::areExtraMouseButtonsEnabled$ = true;
}

LWCToolkit::LWCToolkit() {
}

$Class* LWCToolkit::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LWCToolkit$$Lambda$lambda$new$0::classInfo$.name)) {
			return LWCToolkit$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1::classInfo$.name)) {
			return LWCToolkit$$Lambda$lambda$systemColorsChanged$2$1::load$(name, initialize);
		}
		if (name->equals(LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2::classInfo$.name)) {
			return LWCToolkit$$Lambda$lambda$installToolkitThreadInJava$3$2::load$(name, initialize);
		}
		if (name->equals(LWCToolkit$$Lambda$lambda$invokeAndWait$4$3::classInfo$.name)) {
			return LWCToolkit$$Lambda$lambda$invokeAndWait$4$3::load$(name, initialize);
		}
		if (name->equals(LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4::classInfo$.name)) {
			return LWCToolkit$$Lambda$lambda$systemColorsChanged$1$4::load$(name, initialize);
		}
	}
	$loadClass(LWCToolkit, name, initialize, &_LWCToolkit_ClassInfo_, clinit$LWCToolkit, allocate$LWCToolkit);
	return class$;
}

$Class* LWCToolkit::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun