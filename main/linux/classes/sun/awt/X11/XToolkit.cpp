#include <sun/awt/X11/XToolkit.h>

#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel.h>
#include <java/awt/AWTError.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/AWTException.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Button.h>
#include <java/awt/Canvas.h>
#include <java/awt/Checkbox.h>
#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/Choice.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Desktop.h>
#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FileDialog.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/JobAttributes.h>
#include <java/awt/Label.h>
#include <java/awt/List.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuItem.h>
#include <java/awt/PageAttributes.h>
#include <java/awt/Panel.h>
#include <java/awt/Point.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/PrintJob.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/ScrollPane.h>
#include <java/awt/Scrollbar.h>
#include <java/awt/SystemColor.h>
#include <java/awt/SystemTray.h>
#include <java/awt/Taskbar.h>
#include <java/awt/TextArea.h>
#include <java/awt/TextField.h>
#include <java/awt/Toolkit.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/Window.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/MouseDragGestureRecognizer.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/im/InputMethodHighlight.h>
#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/awt/peer/ButtonPeer.h>
#include <java/awt/peer/CanvasPeer.h>
#include <java/awt/peer/CheckboxMenuItemPeer.h>
#include <java/awt/peer/CheckboxPeer.h>
#include <java/awt/peer/ChoicePeer.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/DesktopPeer.h>
#include <java/awt/peer/DialogPeer.h>
#include <java/awt/peer/FileDialogPeer.h>
#include <java/awt/peer/FontPeer.h>
#include <java/awt/peer/FramePeer.h>
#include <java/awt/peer/KeyboardFocusManagerPeer.h>
#include <java/awt/peer/LabelPeer.h>
#include <java/awt/peer/ListPeer.h>
#include <java/awt/peer/MenuBarPeer.h>
#include <java/awt/peer/MenuItemPeer.h>
#include <java/awt/peer/MenuPeer.h>
#include <java/awt/peer/MouseInfoPeer.h>
#include <java/awt/peer/PanelPeer.h>
#include <java/awt/peer/PopupMenuPeer.h>
#include <java/awt/peer/RobotPeer.h>
#include <java/awt/peer/ScrollPanePeer.h>
#include <java/awt/peer/ScrollbarPeer.h>
#include <java/awt/peer/SystemTrayPeer.h>
#include <java/awt/peer/TaskbarPeer.h>
#include <java/awt/peer/TextAreaPeer.h>
#include <java/awt/peer/TextFieldPeer.h>
#include <java/awt/peer/TrayIconPeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/NavigableMap.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/TreeMap.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/function/BiConsumer.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$EventQueueAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/CustomCursor.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/KeyboardFocusManagerPeerImpl.h>
#include <sun/awt/LightweightFrame.h>
#include <sun/awt/PlatformFont.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UNIXToolkit.h>
#include <sun/awt/X11/GtkFileDialogPeer.h>
#include <sun/awt/X11/MotifColorUtilities.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XAWTLookAndFeel.h>
#include <sun/awt/X11/XAWTXSettings.h>
#include <sun/awt/X11/XAnyEvent.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XButtonPeer.h>
#include <sun/awt/X11/XCanvasPeer.h>
#include <sun/awt/X11/XCheckboxMenuItemPeer.h>
#include <sun/awt/X11/XCheckboxPeer.h>
#include <sun/awt/X11/XChoicePeer.h>
#include <sun/awt/X11/XClipboard.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCrossingEvent.h>
#include <sun/awt/X11/XCursorFontConstants.h>
#include <sun/awt/X11/XCustomCursor.h>
#include <sun/awt/X11/XDataTransferer.h>
#include <sun/awt/X11/XDesktopPeer.h>
#include <sun/awt/X11/XDialogPeer.h>
#include <sun/awt/X11/XDragSourceContextPeer.h>
#include <sun/awt/X11/XDropTargetEventProcessor.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XEmbedChildProxy.h>
#include <sun/awt/X11/XEmbedChildProxyPeer.h>
#include <sun/awt/X11/XEmbeddedFrame.h>
#include <sun/awt/X11/XEmbeddedFramePeer.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XFileDialogPeer.h>
#include <sun/awt/X11/XFontPeer.h>
#include <sun/awt/X11/XFramePeer.h>
#include <sun/awt/X11/XInputMethod.h>
#include <sun/awt/X11/XInputMethodDescriptor.h>
#include <sun/awt/X11/XKeySymConstants.h>
#include <sun/awt/X11/XKeyboardFocusManagerPeer.h>
#include <sun/awt/X11/XKeysym.h>
#include <sun/awt/X11/XLabelPeer.h>
#include <sun/awt/X11/XLayerProtocol.h>
#include <sun/awt/X11/XLightweightFramePeer.h>
#include <sun/awt/X11/XListPeer.h>
#include <sun/awt/X11/XMenuBarPeer.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <sun/awt/X11/XMenuPeer.h>
#include <sun/awt/X11/XModifierKeymap.h>
#include <sun/awt/X11/XMotionEvent.h>
#include <sun/awt/X11/XMouseDragGestureRecognizer.h>
#include <sun/awt/X11/XMouseInfoPeer.h>
#include <sun/awt/X11/XNETProtocol.h>
#include <sun/awt/X11/XPanelPeer.h>
#include <sun/awt/X11/XPopupMenuPeer.h>
#include <sun/awt/X11/XRobotPeer.h>
#include <sun/awt/X11/XRootWindow.h>
#include <sun/awt/X11/XScrollPanePeer.h>
#include <sun/awt/X11/XScrollbarPeer.h>
#include <sun/awt/X11/XSystemTrayPeer.h>
#include <sun/awt/X11/XTaskbarPeer.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <sun/awt/X11/XTextFieldPeer.h>
#include <sun/awt/X11/XToolkit$1.h>
#include <sun/awt/X11/XToolkit$2.h>
#include <sun/awt/X11/XToolkit$3.h>
#include <sun/awt/X11/XToolkit$4.h>
#include <sun/awt/X11/XToolkit$XEventListener.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <sun/awt/X11/XWM.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XkbAnyEvent.h>
#include <sun/awt/X11/XkbEvent.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11CustomCursor.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <sun/awt/X11InputMethodBase.h>
#include <sun/awt/X11InputMethodDescriptor.h>
#include <sun/awt/XSettings.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/SunClipboard.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <sun/awt/util/PerformanceLogger.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/font/FontConfigManager.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/print/PrintJob2D.h>
#include <sun/security/action/GetBooleanAction.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACCESS_CLIPBOARD_PERMISSION
#undef APPLICATION_EXCLUDE
#undef APPLICATION_MODAL
#undef AWT_MULTICLICK_DEFAULT_TIME
#undef BUTTON1
#undef BUTTON1_DOWN_MASK
#undef BUTTON2
#undef BUTTON2_DOWN_MASK
#undef BUTTON3
#undef BUTTON3_DOWN_MASK
#undef CONFIG
#undef DESKTOPFONTHINTS
#undef DOCUMENT_MODAL
#undef EVENT_QUEUE_KEY
#undef FINE
#undef FINER
#undef FONTCONFIGAAHINT
#undef ICONIFIED
#undef IS_KANA_KEYBOARD
#undef IS_NONKANA_KEYBOARD
#undef IS_NONSUN_KEYBOARD
#undef IS_SUN_KEYBOARD
#undef LAYER_ALWAYS_ON_TOP
#undef MAX_BUTTONS
#undef MAX_BUTTONS_SUPPORTED
#undef MODELESS
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef NANOSECONDS
#undef NORMAL
#undef NORM_PRIORITY
#undef NO_EXCLUDE
#undef PRIMARY_LOOP
#undef SECONDARY_LOOP
#undef TOOLKIT_EXCLUDE
#undef TOOLKIT_MODAL
#undef VK_CAPS_LOCK
#undef VK_KANA_LOCK
#undef VK_NUM_LOCK
#undef VK_SCROLL_LOCK
#undef WARNING
#undef XA_ATOM
#undef XA_CARDINAL
#undef XA_NET_WORKAREA
#undef XORG_KP_BEHAVIOR
#undef XSUN_KP_BEHAVIOR
#undef _XA_JAVA_TIME_PROPERTY_ATOM

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $MotifLookAndFeel = ::com::sun::java::swing::plaf::motif::MotifLookAndFeel;
using $AWTError = ::java::awt::AWTError;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTException = ::java::awt::AWTException;
using $AWTPermission = ::java::awt::AWTPermission;
using $Button = ::java::awt::Button;
using $Canvas = ::java::awt::Canvas;
using $Checkbox = ::java::awt::Checkbox;
using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $Choice = ::java::awt::Choice;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Desktop = ::java::awt::Desktop;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $FileDialog = ::java::awt::FileDialog;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $JobAttributes = ::java::awt::JobAttributes;
using $Label = ::java::awt::Label;
using $1List = ::java::awt::List;
using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $MenuItem = ::java::awt::MenuItem;
using $PageAttributes = ::java::awt::PageAttributes;
using $Panel = ::java::awt::Panel;
using $Point = ::java::awt::Point;
using $PopupMenu = ::java::awt::PopupMenu;
using $PrintJob = ::java::awt::PrintJob;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $ScrollPane = ::java::awt::ScrollPane;
using $Scrollbar = ::java::awt::Scrollbar;
using $SystemColor = ::java::awt::SystemColor;
using $SystemTray = ::java::awt::SystemTray;
using $Taskbar = ::java::awt::Taskbar;
using $TextArea = ::java::awt::TextArea;
using $TextField = ::java::awt::TextField;
using $Toolkit = ::java::awt::Toolkit;
using $TrayIcon = ::java::awt::TrayIcon;
using $Window = ::java::awt::Window;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $MouseDragGestureRecognizer = ::java::awt::dnd::MouseDragGestureRecognizer;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $InputMethodHighlight = ::java::awt::im::InputMethodHighlight;
using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $ButtonPeer = ::java::awt::peer::ButtonPeer;
using $CanvasPeer = ::java::awt::peer::CanvasPeer;
using $CheckboxMenuItemPeer = ::java::awt::peer::CheckboxMenuItemPeer;
using $CheckboxPeer = ::java::awt::peer::CheckboxPeer;
using $ChoicePeer = ::java::awt::peer::ChoicePeer;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $DesktopPeer = ::java::awt::peer::DesktopPeer;
using $DialogPeer = ::java::awt::peer::DialogPeer;
using $FileDialogPeer = ::java::awt::peer::FileDialogPeer;
using $FontPeer = ::java::awt::peer::FontPeer;
using $FramePeer = ::java::awt::peer::FramePeer;
using $KeyboardFocusManagerPeer = ::java::awt::peer::KeyboardFocusManagerPeer;
using $LabelPeer = ::java::awt::peer::LabelPeer;
using $ListPeer = ::java::awt::peer::ListPeer;
using $MenuBarPeer = ::java::awt::peer::MenuBarPeer;
using $MenuItemPeer = ::java::awt::peer::MenuItemPeer;
using $MenuPeer = ::java::awt::peer::MenuPeer;
using $MouseInfoPeer = ::java::awt::peer::MouseInfoPeer;
using $PanelPeer = ::java::awt::peer::PanelPeer;
using $PopupMenuPeer = ::java::awt::peer::PopupMenuPeer;
using $RobotPeer = ::java::awt::peer::RobotPeer;
using $ScrollPanePeer = ::java::awt::peer::ScrollPanePeer;
using $ScrollbarPeer = ::java::awt::peer::ScrollbarPeer;
using $SystemTrayPeer = ::java::awt::peer::SystemTrayPeer;
using $TaskbarPeer = ::java::awt::peer::TaskbarPeer;
using $TextAreaPeer = ::java::awt::peer::TextAreaPeer;
using $TextFieldPeer = ::java::awt::peer::TextFieldPeer;
using $TrayIconPeer = ::java::awt::peer::TrayIconPeer;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $NavigableMap = ::java::util::NavigableMap;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $TreeMap = ::java::util::TreeMap;
using $Vector = ::java::util::Vector;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $BiConsumer = ::java::util::function::BiConsumer;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$EventQueueAccessor = ::sun::awt::AWTAccessor$EventQueueAccessor;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $AppContext = ::sun::awt::AppContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;
using $CustomCursor = ::sun::awt::CustomCursor;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $KeyboardFocusManagerPeerImpl = ::sun::awt::KeyboardFocusManagerPeerImpl;
using $LightweightFrame = ::sun::awt::LightweightFrame;
using $PlatformFont = ::sun::awt::PlatformFont;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $GtkFileDialogPeer = ::sun::awt::X11::GtkFileDialogPeer;
using $MotifColorUtilities = ::sun::awt::X11::MotifColorUtilities;
using $Native = ::sun::awt::X11::Native;
using $XAWTLookAndFeel = ::sun::awt::X11::XAWTLookAndFeel;
using $XAWTXSettings = ::sun::awt::X11::XAWTXSettings;
using $XAnyEvent = ::sun::awt::X11::XAnyEvent;
using $XAtom = ::sun::awt::X11::XAtom;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XButtonPeer = ::sun::awt::X11::XButtonPeer;
using $XCanvasPeer = ::sun::awt::X11::XCanvasPeer;
using $XCheckboxMenuItemPeer = ::sun::awt::X11::XCheckboxMenuItemPeer;
using $XCheckboxPeer = ::sun::awt::X11::XCheckboxPeer;
using $XChoicePeer = ::sun::awt::X11::XChoicePeer;
using $XClipboard = ::sun::awt::X11::XClipboard;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCrossingEvent = ::sun::awt::X11::XCrossingEvent;
using $XCursorFontConstants = ::sun::awt::X11::XCursorFontConstants;
using $XCustomCursor = ::sun::awt::X11::XCustomCursor;
using $XDataTransferer = ::sun::awt::X11::XDataTransferer;
using $XDesktopPeer = ::sun::awt::X11::XDesktopPeer;
using $XDialogPeer = ::sun::awt::X11::XDialogPeer;
using $XDragSourceContextPeer = ::sun::awt::X11::XDragSourceContextPeer;
using $XDropTargetEventProcessor = ::sun::awt::X11::XDropTargetEventProcessor;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $XEmbedChildProxy = ::sun::awt::X11::XEmbedChildProxy;
using $XEmbedChildProxyPeer = ::sun::awt::X11::XEmbedChildProxyPeer;
using $XEmbeddedFrame = ::sun::awt::X11::XEmbeddedFrame;
using $XEmbeddedFramePeer = ::sun::awt::X11::XEmbeddedFramePeer;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XFileDialogPeer = ::sun::awt::X11::XFileDialogPeer;
using $XFontPeer = ::sun::awt::X11::XFontPeer;
using $XFramePeer = ::sun::awt::X11::XFramePeer;
using $XInputMethod = ::sun::awt::X11::XInputMethod;
using $XInputMethodDescriptor = ::sun::awt::X11::XInputMethodDescriptor;
using $XKeySymConstants = ::sun::awt::X11::XKeySymConstants;
using $XKeyboardFocusManagerPeer = ::sun::awt::X11::XKeyboardFocusManagerPeer;
using $XKeysym = ::sun::awt::X11::XKeysym;
using $XLabelPeer = ::sun::awt::X11::XLabelPeer;
using $XLayerProtocol = ::sun::awt::X11::XLayerProtocol;
using $XLightweightFramePeer = ::sun::awt::X11::XLightweightFramePeer;
using $XListPeer = ::sun::awt::X11::XListPeer;
using $XMenuBarPeer = ::sun::awt::X11::XMenuBarPeer;
using $XMenuItemPeer = ::sun::awt::X11::XMenuItemPeer;
using $XMenuPeer = ::sun::awt::X11::XMenuPeer;
using $XModifierKeymap = ::sun::awt::X11::XModifierKeymap;
using $XMotionEvent = ::sun::awt::X11::XMotionEvent;
using $XMouseDragGestureRecognizer = ::sun::awt::X11::XMouseDragGestureRecognizer;
using $XMouseInfoPeer = ::sun::awt::X11::XMouseInfoPeer;
using $XNETProtocol = ::sun::awt::X11::XNETProtocol;
using $XPanelPeer = ::sun::awt::X11::XPanelPeer;
using $XPopupMenuPeer = ::sun::awt::X11::XPopupMenuPeer;
using $XRobotPeer = ::sun::awt::X11::XRobotPeer;
using $XRootWindow = ::sun::awt::X11::XRootWindow;
using $XScrollPanePeer = ::sun::awt::X11::XScrollPanePeer;
using $XScrollbarPeer = ::sun::awt::X11::XScrollbarPeer;
using $XSystemTrayPeer = ::sun::awt::X11::XSystemTrayPeer;
using $XTaskbarPeer = ::sun::awt::X11::XTaskbarPeer;
using $XTextAreaPeer = ::sun::awt::X11::XTextAreaPeer;
using $XTextFieldPeer = ::sun::awt::X11::XTextFieldPeer;
using $XToolkit$1 = ::sun::awt::X11::XToolkit$1;
using $XToolkit$2 = ::sun::awt::X11::XToolkit$2;
using $XToolkit$3 = ::sun::awt::X11::XToolkit$3;
using $XToolkit$4 = ::sun::awt::X11::XToolkit$4;
using $XToolkit$XEventListener = ::sun::awt::X11::XToolkit$XEventListener;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;
using $XWM = ::sun::awt::X11::XWM;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XkbAnyEvent = ::sun::awt::X11::XkbAnyEvent;
using $XkbEvent = ::sun::awt::X11::XkbEvent;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $X11CustomCursor = ::sun::awt::X11CustomCursor;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;
using $X11InputMethodBase = ::sun::awt::X11InputMethodBase;
using $X11InputMethodDescriptor = ::sun::awt::X11InputMethodDescriptor;
using $XSettings = ::sun::awt::XSettings;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $SunClipboard = ::sun::awt::datatransfer::SunClipboard;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;
using $PerformanceLogger = ::sun::awt::util::PerformanceLogger;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $FontConfigManager = ::sun::font::FontConfigManager;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $PrintJob2D = ::sun::print::PrintJob2D;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

class XToolkit$$Lambda$lambda$init$0 : public $PrivilegedAction {
	$class(XToolkit$$Lambda$lambda$init$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(XToolkit::lambda$init$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XToolkit$$Lambda$lambda$init$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo XToolkit$$Lambda$lambda$init$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XToolkit$$Lambda$lambda$init$0::*)()>(&XToolkit$$Lambda$lambda$init$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XToolkit$$Lambda$lambda$init$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.X11.XToolkit$$Lambda$lambda$init$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* XToolkit$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$loadClass(XToolkit$$Lambda$lambda$init$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XToolkit$$Lambda$lambda$init$0::class$ = nullptr;

class XToolkit$$Lambda$lambda$init$2$1 : public $PrivilegedAction {
	$class(XToolkit$$Lambda$lambda$init$2$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(XToolkit* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$init$2());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XToolkit$$Lambda$lambda$init$2$1>());
	}
	XToolkit* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XToolkit$$Lambda$lambda$init$2$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(XToolkit$$Lambda$lambda$init$2$1, inst$)},
	{}
};
$MethodInfo XToolkit$$Lambda$lambda$init$2$1::methodInfos[3] = {
	{"<init>", "(Lsun/awt/X11/XToolkit;)V", nullptr, $PUBLIC, $method(static_cast<void(XToolkit$$Lambda$lambda$init$2$1::*)(XToolkit*)>(&XToolkit$$Lambda$lambda$init$2$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XToolkit$$Lambda$lambda$init$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.X11.XToolkit$$Lambda$lambda$init$2$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* XToolkit$$Lambda$lambda$init$2$1::load$($String* name, bool initialize) {
	$loadClass(XToolkit$$Lambda$lambda$init$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XToolkit$$Lambda$lambda$init$2$1::class$ = nullptr;

class XToolkit$$Lambda$lambda$new$3$2 : public $PrivilegedAction {
	$class(XToolkit$$Lambda$lambda$new$3$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(XToolkit* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$new$3());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XToolkit$$Lambda$lambda$new$3$2>());
	}
	XToolkit* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XToolkit$$Lambda$lambda$new$3$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(XToolkit$$Lambda$lambda$new$3$2, inst$)},
	{}
};
$MethodInfo XToolkit$$Lambda$lambda$new$3$2::methodInfos[3] = {
	{"<init>", "(Lsun/awt/X11/XToolkit;)V", nullptr, $PUBLIC, $method(static_cast<void(XToolkit$$Lambda$lambda$new$3$2::*)(XToolkit*)>(&XToolkit$$Lambda$lambda$new$3$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XToolkit$$Lambda$lambda$new$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.X11.XToolkit$$Lambda$lambda$new$3$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* XToolkit$$Lambda$lambda$new$3$2::load$($String* name, bool initialize) {
	$loadClass(XToolkit$$Lambda$lambda$new$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XToolkit$$Lambda$lambda$new$3$2::class$ = nullptr;

class XToolkit$$Lambda$lambda$dumpPeers$4$3 : public $BiConsumer {
	$class(XToolkit$$Lambda$lambda$dumpPeers$4$3, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* k, Object$* v) override {
		XToolkit::lambda$dumpPeers$4($cast($Long, k), $cast($XBaseWindow, v));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XToolkit$$Lambda$lambda$dumpPeers$4$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo XToolkit$$Lambda$lambda$dumpPeers$4$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XToolkit$$Lambda$lambda$dumpPeers$4$3::*)()>(&XToolkit$$Lambda$lambda$dumpPeers$4$3::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo XToolkit$$Lambda$lambda$dumpPeers$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.X11.XToolkit$$Lambda$lambda$dumpPeers$4$3",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* XToolkit$$Lambda$lambda$dumpPeers$4$3::load$($String* name, bool initialize) {
	$loadClass(XToolkit$$Lambda$lambda$dumpPeers$4$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XToolkit$$Lambda$lambda$dumpPeers$4$3::class$ = nullptr;

class XToolkit$$Lambda$lambda$dumpPeers$5$4 : public $BiConsumer {
	$class(XToolkit$$Lambda$lambda$dumpPeers$5$4, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* k, Object$* v) override {
		XToolkit::lambda$dumpPeers$5(k, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XToolkit$$Lambda$lambda$dumpPeers$5$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo XToolkit$$Lambda$lambda$dumpPeers$5$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XToolkit$$Lambda$lambda$dumpPeers$5$4::*)()>(&XToolkit$$Lambda$lambda$dumpPeers$5$4::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo XToolkit$$Lambda$lambda$dumpPeers$5$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.X11.XToolkit$$Lambda$lambda$dumpPeers$5$4",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* XToolkit$$Lambda$lambda$dumpPeers$5$4::load$($String* name, bool initialize) {
	$loadClass(XToolkit$$Lambda$lambda$dumpPeers$5$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XToolkit$$Lambda$lambda$dumpPeers$5$4::class$ = nullptr;

class XToolkit$$Lambda$lambda$dumpPeers$6$5 : public $BiConsumer {
	$class(XToolkit$$Lambda$lambda$dumpPeers$6$5, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* k, Object$* v) override {
		XToolkit::lambda$dumpPeers$6($cast($Long, k), $cast($Collection, v));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XToolkit$$Lambda$lambda$dumpPeers$6$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo XToolkit$$Lambda$lambda$dumpPeers$6$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XToolkit$$Lambda$lambda$dumpPeers$6$5::*)()>(&XToolkit$$Lambda$lambda$dumpPeers$6$5::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo XToolkit$$Lambda$lambda$dumpPeers$6$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.X11.XToolkit$$Lambda$lambda$dumpPeers$6$5",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* XToolkit$$Lambda$lambda$dumpPeers$6$5::load$($String* name, bool initialize) {
	$loadClass(XToolkit$$Lambda$lambda$dumpPeers$6$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XToolkit$$Lambda$lambda$dumpPeers$6$5::class$ = nullptr;

class XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6 : public $PropertyChangeListener {
	$class(XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$() {
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		XToolkit::lambda$initializeDesktopProperties$7(evt);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6::*)()>(&XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.X11.XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	methodInfos
};
$Class* XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6::load$($String* name, bool initialize) {
	$loadClass(XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6::class$ = nullptr;

class XToolkit$$Lambda$lambda$init$1$7 : public $Runnable {
	$class(XToolkit$$Lambda$lambda$init$1$7, $NO_CLASS_INIT, $Runnable)
public:
	void init$(XToolkit* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$init$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XToolkit$$Lambda$lambda$init$1$7>());
	}
	XToolkit* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XToolkit$$Lambda$lambda$init$1$7::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(XToolkit$$Lambda$lambda$init$1$7, inst$)},
	{}
};
$MethodInfo XToolkit$$Lambda$lambda$init$1$7::methodInfos[3] = {
	{"<init>", "(Lsun/awt/X11/XToolkit;)V", nullptr, $PUBLIC, $method(static_cast<void(XToolkit$$Lambda$lambda$init$1$7::*)(XToolkit*)>(&XToolkit$$Lambda$lambda$init$1$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo XToolkit$$Lambda$lambda$init$1$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.X11.XToolkit$$Lambda$lambda$init$1$7",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* XToolkit$$Lambda$lambda$init$1$7::load$($String* name, bool initialize) {
	$loadClass(XToolkit$$Lambda$lambda$init$1$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XToolkit$$Lambda$lambda$init$1$7::class$ = nullptr;

$FieldInfo _XToolkit_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkit, log)},
	{"eventLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkit, eventLog)},
	{"timeoutTaskLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkit, timeoutTaskLog)},
	{"keyEventLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkit, keyEventLog)},
	{"backingStoreLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkit, backingStoreLog)},
	{"AWT_MULTICLICK_DEFAULT_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XToolkit, AWT_MULTICLICK_DEFAULT_TIME)},
	{"PRIMARY_LOOP", "Z", nullptr, $STATIC | $FINAL, $constField(XToolkit, PRIMARY_LOOP)},
	{"SECONDARY_LOOP", "Z", nullptr, $STATIC | $FINAL, $constField(XToolkit, SECONDARY_LOOP)},
	{"awtAppClassName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, awtAppClassName)},
	{"clipboard", "Lsun/awt/X11/XClipboard;", nullptr, 0, $field(XToolkit, clipboard)},
	{"selection", "Lsun/awt/X11/XClipboard;", nullptr, 0, $field(XToolkit, selection)},
	{"dynamicLayoutSetting", "Z", nullptr, $PROTECTED | $STATIC, $staticField(XToolkit, dynamicLayoutSetting)},
	{"areExtraMouseButtonsEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, areExtraMouseButtonsEnabled$)},
	{"loadedXSettings", "Z", nullptr, $PRIVATE, $field(XToolkit, loadedXSettings)},
	{"xs", "Lsun/awt/XSettings;", nullptr, $PRIVATE, $field(XToolkit, xs)},
	{"fcManager", "Lsun/font/FontConfigManager;", nullptr, $PRIVATE, $field(XToolkit, fcManager)},
	{"arrowCursor", "I", nullptr, $STATIC, $staticField(XToolkit, arrowCursor)},
	{"winMap", "Ljava/util/TreeMap;", "Ljava/util/TreeMap<Ljava/lang/Long;Lsun/awt/X11/XBaseWindow;>;", $STATIC, $staticField(XToolkit, winMap)},
	{"specialPeerMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Object;Ljava/lang/Object;>;", $STATIC, $staticField(XToolkit, specialPeerMap)},
	{"winToDispatcher", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Long;Ljava/util/Collection<Lsun/awt/X11/XEventDispatcher;>;>;", $STATIC, $staticField(XToolkit, winToDispatcher)},
	{"uidefaults", "Ljavax/swing/UIDefaults;", nullptr, $STATIC, $staticField(XToolkit, uidefaults)},
	{"localEnv", "Lsun/awt/X11GraphicsEnvironment;", nullptr, $STATIC | $FINAL, $staticField(XToolkit, localEnv)},
	{"device", "Lsun/awt/X11GraphicsDevice;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkit, device)},
	{"display", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkit, display)},
	{"awt_multiclick_time", "I", nullptr, $STATIC, $staticField(XToolkit, awt_multiclick_time)},
	{"securityWarningEnabled", "Z", nullptr, $STATIC, $staticField(XToolkit, securityWarningEnabled)},
	{"maxWindowWidthInPixels", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(XToolkit, maxWindowWidthInPixels)},
	{"maxWindowHeightInPixels", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(XToolkit, maxWindowHeightInPixels)},
	{"xPeer", "Lsun/awt/X11/XMouseInfoPeer;", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, xPeer)},
	{"toolkitThread", "Ljava/lang/Thread;", nullptr, $STATIC, $staticField(XToolkit, toolkitThread)},
	{"lastCursorPos", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(XToolkit, lastCursorPos)},
	{"listeners", "Ljava/util/Collection;", "Ljava/util/Collection<Lsun/awt/X11/XToolkit$XEventListener;>;", $PRIVATE, $field(XToolkit, listeners)},
	{"displayChangedHandler", "Lsun/awt/DisplayChangedListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkit, displayChangedHandler)},
	{"sunAwtDisableGtkFileDialogs", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, sunAwtDisableGtkFileDialogs)},
	{"initialized", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, initialized)},
	{"timeStampUpdated", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, timeStampUpdated)},
	{"timeStamp", "J", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, timeStamp)},
	{"timeFetcher", "Lsun/awt/X11/XEventDispatcher;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkit, timeFetcher)},
	{"_XA_JAVA_TIME_PROPERTY_ATOM", "Lsun/awt/X11/XAtom;", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, _XA_JAVA_TIME_PROPERTY_ATOM)},
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkit, prefix)},
	{"postfix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkit, postfix)},
	{"dndPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XToolkit, dndPrefix)},
	{"altMask", "I", nullptr, $STATIC, $staticField(XToolkit, altMask)},
	{"metaMask", "I", nullptr, $STATIC, $staticField(XToolkit, metaMask)},
	{"numLockMask", "I", nullptr, $STATIC, $staticField(XToolkit, numLockMask)},
	{"modeSwitchMask", "I", nullptr, $STATIC, $staticField(XToolkit, modeSwitchMask)},
	{"modLockIsShiftLock", "I", nullptr, $STATIC, $staticField(XToolkit, modLockIsShiftLock)},
	{"timeoutTasks", "Ljava/util/SortedMap;", "Ljava/util/SortedMap<Ljava/lang/Long;Ljava/util/List<Ljava/lang/Runnable;>;>;", $PRIVATE | $STATIC, $staticField(XToolkit, timeoutTasks)},
	{"backingStoreType", "I", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, backingStoreType)},
	{"XSUN_KP_BEHAVIOR", "I", nullptr, $STATIC | $FINAL, $constField(XToolkit, XSUN_KP_BEHAVIOR)},
	{"XORG_KP_BEHAVIOR", "I", nullptr, $STATIC | $FINAL, $constField(XToolkit, XORG_KP_BEHAVIOR)},
	{"IS_SUN_KEYBOARD", "I", nullptr, $STATIC | $FINAL, $constField(XToolkit, IS_SUN_KEYBOARD)},
	{"IS_NONSUN_KEYBOARD", "I", nullptr, $STATIC | $FINAL, $constField(XToolkit, IS_NONSUN_KEYBOARD)},
	{"IS_KANA_KEYBOARD", "I", nullptr, $STATIC | $FINAL, $constField(XToolkit, IS_KANA_KEYBOARD)},
	{"IS_NONKANA_KEYBOARD", "I", nullptr, $STATIC | $FINAL, $constField(XToolkit, IS_NONKANA_KEYBOARD)},
	{"awt_IsXsunKPBehavior", "I", nullptr, $STATIC, $staticField(XToolkit, awt_IsXsunKPBehavior)},
	{"awt_UseXKB", "Z", nullptr, $STATIC, $staticField(XToolkit, awt_UseXKB)},
	{"awt_UseXKB_Calls", "Z", nullptr, $STATIC, $staticField(XToolkit, awt_UseXKB_Calls)},
	{"awt_XKBBaseEventCode", "I", nullptr, $STATIC, $staticField(XToolkit, awt_XKBBaseEventCode)},
	{"awt_XKBEffectiveGroup", "I", nullptr, $STATIC, $staticField(XToolkit, awt_XKBEffectiveGroup)},
	{"awt_XKBDescPtr", "J", nullptr, $STATIC, $staticField(XToolkit, awt_XKBDescPtr)},
	{"sunOrNotKeyboard", "I", nullptr, $STATIC, $staticField(XToolkit, sunOrNotKeyboard)},
	{"kanaOrNotKeyboard", "I", nullptr, $STATIC, $staticField(XToolkit, kanaOrNotKeyboard)},
	{"eventNumber", "J", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, eventNumber)},
	{"oops_waiter", "Lsun/awt/X11/XEventDispatcher;", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, oops_waiter)},
	{"oops_updated", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, oops_updated)},
	{"oops_position", "I", nullptr, $PRIVATE | $STATIC, $staticField(XToolkit, oops_position)},
	{}
};

$MethodInfo _XToolkit_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XToolkit::*)()>(&XToolkit::init$))},
	{"XSync", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XToolkit::XSync))},
	{"addEventDispatcher", "(JLsun/awt/X11/XEventDispatcher;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$XEventDispatcher*)>(&XToolkit::addEventDispatcher))},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addToWinMap", "(JLsun/awt/X11/XBaseWindow;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$XBaseWindow*)>(&XToolkit::addToWinMap))},
	{"addXEventListener", "(Lsun/awt/X11/XToolkit$XEventListener;)V", nullptr, $PUBLIC, $method(static_cast<void(XToolkit::*)($XToolkit$XEventListener*)>(&XToolkit::addXEventListener))},
	{"areExtraMouseButtonsEnabled", "()Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"awtFUnlock", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XToolkit::awtFUnlock))},
	{"awt_output_flush", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&XToolkit::awt_output_flush))},
	{"awt_toolkit_init", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&XToolkit::awt_toolkit_init))},
	{"beep", "()V", nullptr, $PUBLIC},
	{"callTimeoutTasks", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&XToolkit::callTimeoutTasks))},
	{"canUseXKBCalls", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XToolkit::canUseXKBCalls))},
	{"createButton", "(Ljava/awt/Button;)Ljava/awt/peer/ButtonPeer;", nullptr, $PUBLIC},
	{"createCanvas", "(Ljava/awt/Canvas;)Ljava/awt/peer/CanvasPeer;", nullptr, $PUBLIC},
	{"createCheckbox", "(Ljava/awt/Checkbox;)Ljava/awt/peer/CheckboxPeer;", nullptr, $PUBLIC},
	{"createCheckboxMenuItem", "(Ljava/awt/CheckboxMenuItem;)Ljava/awt/peer/CheckboxMenuItemPeer;", nullptr, $PUBLIC},
	{"createChoice", "(Ljava/awt/Choice;)Ljava/awt/peer/ChoicePeer;", nullptr, $PUBLIC},
	{"createCustomCursor", "(Ljava/awt/Image;Ljava/awt/Point;Ljava/lang/String;)Ljava/awt/Cursor;", nullptr, $PUBLIC, nullptr, "java.lang.IndexOutOfBoundsException"},
	{"createDesktopPeer", "(Ljava/awt/Desktop;)Ljava/awt/peer/DesktopPeer;", nullptr, $PUBLIC},
	{"createDialog", "(Ljava/awt/Dialog;)Ljava/awt/peer/DialogPeer;", nullptr, $PUBLIC},
	{"createDragGestureRecognizer", "(Ljava/lang/Class;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)Ljava/awt/dnd/DragGestureRecognizer;", "<T:Ljava/awt/dnd/DragGestureRecognizer;>(Ljava/lang/Class<TT;>;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)TT;", $PUBLIC},
	{"createDragSourceContextPeer", "(Ljava/awt/dnd/DragGestureEvent;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"createEmbedProxy", "(Lsun/awt/X11/XEmbedChildProxy;)Lsun/awt/X11/XEmbedChildProxyPeer;", nullptr, 0, $method(static_cast<$XEmbedChildProxyPeer*(XToolkit::*)($XEmbedChildProxy*)>(&XToolkit::createEmbedProxy))},
	{"createEmbeddedFrame", "(Lsun/awt/X11/XEmbeddedFrame;)Lsun/awt/X11/XEmbeddedFramePeer;", nullptr, $PUBLIC, $method(static_cast<$XEmbeddedFramePeer*(XToolkit::*)($XEmbeddedFrame*)>(&XToolkit::createEmbeddedFrame))},
	{"createFileDialog", "(Ljava/awt/FileDialog;)Ljava/awt/peer/FileDialogPeer;", nullptr, $PUBLIC},
	{"createFrame", "(Ljava/awt/Frame;)Ljava/awt/peer/FramePeer;", nullptr, $PUBLIC},
	{"createLabel", "(Ljava/awt/Label;)Ljava/awt/peer/LabelPeer;", nullptr, $PUBLIC},
	{"createLightweightFrame", "(Lsun/awt/LightweightFrame;)Ljava/awt/peer/FramePeer;", nullptr, $PUBLIC},
	{"createList", "(Ljava/awt/List;)Ljava/awt/peer/ListPeer;", nullptr, $PUBLIC},
	{"createMenu", "(Ljava/awt/Menu;)Ljava/awt/peer/MenuPeer;", nullptr, $PUBLIC},
	{"createMenuBar", "(Ljava/awt/MenuBar;)Ljava/awt/peer/MenuBarPeer;", nullptr, $PUBLIC},
	{"createMenuItem", "(Ljava/awt/MenuItem;)Ljava/awt/peer/MenuItemPeer;", nullptr, $PUBLIC},
	{"createPanel", "(Ljava/awt/Panel;)Ljava/awt/peer/PanelPeer;", nullptr, $PUBLIC},
	{"createPopupMenu", "(Ljava/awt/PopupMenu;)Ljava/awt/peer/PopupMenuPeer;", nullptr, $PUBLIC},
	{"createRobot", "(Ljava/awt/GraphicsDevice;)Ljava/awt/peer/RobotPeer;", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createScrollPane", "(Ljava/awt/ScrollPane;)Ljava/awt/peer/ScrollPanePeer;", nullptr, $PUBLIC},
	{"createScrollbar", "(Ljava/awt/Scrollbar;)Ljava/awt/peer/ScrollbarPeer;", nullptr, $PUBLIC},
	{"createSystemTray", "(Ljava/awt/SystemTray;)Ljava/awt/peer/SystemTrayPeer;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"createTaskbarPeer", "(Ljava/awt/Taskbar;)Ljava/awt/peer/TaskbarPeer;", nullptr, $PUBLIC},
	{"createTextArea", "(Ljava/awt/TextArea;)Ljava/awt/peer/TextAreaPeer;", nullptr, $PUBLIC},
	{"createTextField", "(Ljava/awt/TextField;)Ljava/awt/peer/TextFieldPeer;", nullptr, $PUBLIC},
	{"createTrayIcon", "(Ljava/awt/TrayIcon;)Ljava/awt/peer/TrayIconPeer;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException,java.awt.AWTException"},
	{"createWindow", "(Ljava/awt/Window;)Ljava/awt/peer/WindowPeer;", nullptr, $PUBLIC},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XToolkit::*)($XEvent*)>(&XToolkit::dispatchEvent))},
	{"dumpPeers", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XToolkit::dumpPeers))},
	{"enableInputMethodsForTextComponent", "()Z", nullptr, $PUBLIC},
	{"freeXKB", "()V", nullptr, 0, $method(static_cast<void(XToolkit::*)()>(&XToolkit::freeXKB))},
	{"getAWTAppClassName", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&XToolkit::getAWTAppClassName))},
	{"getBackingStoreType", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&XToolkit::getBackingStoreType))},
	{"getBestCursorSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getCorrectXIDString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&XToolkit::getCorrectXIDString))},
	{"getCurrentServerTime", "()J", nullptr, $STATIC, $method(static_cast<int64_t(*)()>(&XToolkit::getCurrentServerTime))},
	{"getDataTransferer", "()Lsun/awt/datatransfer/DataTransferer;", nullptr, $PUBLIC},
	{"getDefaultRootWindow", "()J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)()>(&XToolkit::getDefaultRootWindow))},
	{"getDefaultXColormap", "()J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&XToolkit::getDefaultXColormap))},
	{"getDisplay", "()J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)()>(&XToolkit::getDisplay))},
	{"getEnv", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)($String*)>(&XToolkit::getEnv))},
	{"getEventNumber", "()J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)()>(&XToolkit::getEventNumber))},
	{"getEventQueue", "(Ljava/lang/Object;)Ljava/awt/EventQueue;", nullptr, $STATIC, $method(static_cast<$EventQueue*(*)(Object$*)>(&XToolkit::getEventQueue))},
	{"getFontPeer", "(Ljava/lang/String;I)Ljava/awt/peer/FontPeer;", nullptr, $PUBLIC},
	{"getInputMethodAdapterDescriptor", "()Ljava/awt/im/spi/InputMethodDescriptor;", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"getKeyboardFocusManagerPeer", "()Ljava/awt/peer/KeyboardFocusManagerPeer;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getLastCursorPos", "(Ljava/awt/Point;)Z", nullptr, 0, $method(static_cast<bool(XToolkit::*)($Point*)>(&XToolkit::getLastCursorPos))},
	{"getLockingKeyState", "(I)Z", nullptr, $PUBLIC},
	{"getMaxWindowHeightInPixels", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&XToolkit::getMaxWindowHeightInPixels))},
	{"getMaxWindowWidthInPixels", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&XToolkit::getMaxWindowWidthInPixels))},
	{"getMaximumCursorColors", "()I", nullptr, $PUBLIC},
	{"getModifierState", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&XToolkit::getModifierState))},
	{"getMouseInfoPeer", "()Ljava/awt/peer/MouseInfoPeer;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getMultiClickTime", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&XToolkit::getMultiClickTime))},
	{"getNextTaskTime", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(XToolkit::*)()>(&XToolkit::getNextTaskTime))},
	{"getNumberOfButtons", "()I", nullptr, $PUBLIC},
	{"getNumberOfButtonsForMask", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&XToolkit::getNumberOfButtonsForMask))},
	{"getNumberOfButtonsImpl", "()I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(XToolkit::*)()>(&XToolkit::getNumberOfButtonsImpl))},
	{"getPrintJob", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/util/Properties;)Ljava/awt/PrintJob;", nullptr, $PUBLIC},
	{"getPrintJob", "(Ljava/awt/Frame;Ljava/lang/String;Ljava/awt/JobAttributes;Ljava/awt/PageAttributes;)Ljava/awt/PrintJob;", nullptr, $PUBLIC},
	{"getScreenInsets", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getScreenResolution", "()I", nullptr, $PUBLIC},
	{"getSunAwtDisableGrab", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&XToolkit::getSunAwtDisableGrab))},
	{"getSunAwtDisableGtkFileDialogs", "()Z", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)()>(&XToolkit::getSunAwtDisableGtkFileDialogs))},
	{"getSystemClipboard", "()Ljava/awt/datatransfer/Clipboard;", nullptr, $PUBLIC},
	{"getSystemSelection", "()Ljava/awt/datatransfer/Clipboard;", nullptr, $PUBLIC},
	{"getTrayIconDisplayTimeout", "()J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&XToolkit::getTrayIconDisplayTimeout))},
	{"getUIDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $STATIC, $method(static_cast<$UIDefaults*(*)()>(&XToolkit::getUIDefaults))},
	{"getWorkArea", "(JI)Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Rectangle*(*)(int64_t,int32_t)>(&XToolkit::getWorkArea))},
	{"getXKBBaseEventCode", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&XToolkit::getXKBBaseEventCode))},
	{"getXKBEffectiveGroup", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&XToolkit::getXKBEffectiveGroup))},
	{"getXKBKbdDesc", "()J", nullptr, $STATIC, $method(static_cast<int64_t(*)()>(&XToolkit::getXKBKbdDesc))},
	{"grab", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{"init", "()V", nullptr, 0, $method(static_cast<void(XToolkit::*)()>(&XToolkit::init))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&XToolkit::initIDs))},
	{"initScreenSize", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&XToolkit::initScreenSize))},
	{"initSecurityWarning", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XToolkit::initSecurityWarning))},
	{"initUIDefaults", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XToolkit::initUIDefaults))},
	{"initXSettingsIfNeeded", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XToolkit::*)($String*)>(&XToolkit::initXSettingsIfNeeded))},
	{"initializeDesktopProperties", "()V", nullptr, $PROTECTED},
	{"initializeMultiClickTime", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XToolkit::initializeMultiClickTime))},
	{"isAlwaysOnTopSupported", "()Z", nullptr, $PUBLIC},
	{"isDesktopSupported", "()Z", nullptr, $PUBLIC},
	{"isDynamicLayoutActive", "()Z", nullptr, $PUBLIC},
	{"isDynamicLayoutSet", "()Z", nullptr, $PROTECTED},
	{"isDynamicLayoutSupported", "()Z", nullptr, $PROTECTED, $method(static_cast<bool(XToolkit::*)()>(&XToolkit::isDynamicLayoutSupported))},
	{"isFrameStateSupported", "(I)Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"isKanaKeyboard", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XToolkit::isKanaKeyboard))},
	{"isLeftMouseButton", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($MouseEvent*)>(&XToolkit::isLeftMouseButton))},
	{"isModalExclusionTypeSupported", "(Ljava/awt/Dialog$ModalExclusionType;)Z", nullptr, $PUBLIC},
	{"isModalityTypeSupported", "(Ljava/awt/Dialog$ModalityType;)Z", nullptr, $PUBLIC},
	{"isRightMouseButton", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($MouseEvent*)>(&XToolkit::isRightMouseButton))},
	{"isSecurityWarningEnabled", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XToolkit::isSecurityWarningEnabled))},
	{"isSunKeyboard", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XToolkit::isSunKeyboard))},
	{"isTaskbarSupported", "()Z", nullptr, $PUBLIC},
	{"isToolkitThread", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XToolkit::isToolkitThread))},
	{"isTranslucencyCapable", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"isTraySupported", "()Z", nullptr, $PUBLIC},
	{"isWindowOpacitySupported", "()Z", nullptr, $PUBLIC},
	{"isWindowShapingSupported", "()Z", nullptr, $PUBLIC},
	{"isWindowTranslucencySupported", "()Z", nullptr, $PUBLIC},
	{"isXKBenabled", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XToolkit::isXKBenabled))},
	{"isXsunKPBehavior", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XToolkit::isXsunKPBehavior))},
	{"keysymToPrimaryKeycode", "(J)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&XToolkit::keysymToPrimaryKeycode))},
	{"lambda$dumpPeers$4", "(Ljava/lang/Long;Lsun/awt/X11/XBaseWindow;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Long*,$XBaseWindow*)>(&XToolkit::lambda$dumpPeers$4))},
	{"lambda$dumpPeers$5", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(Object$*,Object$*)>(&XToolkit::lambda$dumpPeers$5))},
	{"lambda$dumpPeers$6", "(Ljava/lang/Long;Ljava/util/Collection;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Long*,$Collection*)>(&XToolkit::lambda$dumpPeers$6))},
	{"lambda$init$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&XToolkit::lambda$init$0))},
	{"lambda$init$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(XToolkit::*)()>(&XToolkit::lambda$init$1))},
	{"lambda$init$2", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Void*(XToolkit::*)()>(&XToolkit::lambda$init$2))},
	{"lambda$initializeDesktopProperties$7", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($PropertyChangeEvent*)>(&XToolkit::lambda$initializeDesktopProperties$7))},
	{"lambda$new$3", "()Ljava/lang/Thread;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Thread*(XToolkit::*)()>(&XToolkit::lambda$new$3))},
	{"lazilyLoadDesktopProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"loadSystemColors", "([I)V", nullptr, $PUBLIC},
	{"loadXSettings", "()V", nullptr, $PRIVATE, $method(static_cast<void(XToolkit::*)()>(&XToolkit::loadXSettings))},
	{"mapInputMethodHighlight", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map;", "(Ljava/awt/im/InputMethodHighlight;)Ljava/util/Map<Ljava/awt/font/TextAttribute;*>;", $PUBLIC},
	{"nativeLoadSystemColors", "([I)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(XToolkit::*)($ints*)>(&XToolkit::nativeLoadSystemColors))},
	{"needsXEmbedImpl", "()Z", nullptr, $PROTECTED},
	{"notifyListeners", "(Lsun/awt/X11/XEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XToolkit::*)($XEvent*)>(&XToolkit::notifyListeners))},
	{"parseXSettings", "(ILjava/util/Map;)V", "(ILjava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", 0, $method(static_cast<void(XToolkit::*)(int32_t,$Map*)>(&XToolkit::parseXSettings))},
	{"processException", "(Ljava/lang/Throwable;)V", nullptr, $STATIC, $method(static_cast<void(*)($Throwable*)>(&XToolkit::processException))},
	{"processGlobalMotionEvent", "(Lsun/awt/X11/XEvent;Lsun/awt/X11/XBaseWindow;)V", nullptr, $PRIVATE, $method(static_cast<void(XToolkit::*)($XEvent*,$XBaseWindow*)>(&XToolkit::processGlobalMotionEvent))},
	{"processXkbChanges", "(Lsun/awt/X11/XEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XToolkit::*)($XEvent*)>(&XToolkit::processXkbChanges))},
	{"remove", "(Ljava/lang/Runnable;)V", nullptr, $STATIC, $method(static_cast<void(*)($Runnable*)>(&XToolkit::remove))},
	{"removeEventDispatcher", "(JLsun/awt/X11/XEventDispatcher;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$XEventDispatcher*)>(&XToolkit::removeEventDispatcher))},
	{"removeFromWinMap", "(JLsun/awt/X11/XBaseWindow;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$XBaseWindow*)>(&XToolkit::removeFromWinMap))},
	{"removeSourceEvents", "(Ljava/awt/EventQueue;Ljava/lang/Object;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($EventQueue*,Object$*,bool)>(&XToolkit::removeSourceEvents))},
	{"resetKeyboardSniffer", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XToolkit::resetKeyboardSniffer))},
	{"run", "()V", nullptr, $PUBLIC},
	{"run", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(XToolkit::*)(bool)>(&XToolkit::run))},
	{"schedule", "(Ljava/lang/Runnable;J)V", nullptr, $STATIC, $method(static_cast<void(*)($Runnable*,int64_t)>(&XToolkit::schedule))},
	{"setBackingStoreType", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&XToolkit::setBackingStoreType))},
	{"setDynamicLayout", "(Z)V", nullptr, $PUBLIC},
	{"setupModifierMap", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XToolkit::setupModifierMap))},
	{"syncNativeQueue", "(J)Z", nullptr, $PROTECTED},
	{"targetDisposedPeer", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)(Object$*,Object$*)>(&XToolkit::targetDisposedPeer))},
	{"targetToPeer", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&XToolkit::targetToPeer))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryXKB", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XToolkit::tryXKB))},
	{"ungrab", "(Ljava/awt/Window;)V", nullptr, $PUBLIC},
	{"useBufferPerWindow", "()Z", nullptr, $PUBLIC},
	{"waitForEvents", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&XToolkit::waitForEvents))},
	{"wakeup_poll", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&XToolkit::wakeup_poll))},
	{"windowToXWindow", "(J)Lsun/awt/X11/XBaseWindow;", nullptr, $STATIC, $method(static_cast<$XBaseWindow*(*)(int64_t)>(&XToolkit::windowToXWindow))},
	{}
};

#define _METHOD_INDEX_awt_output_flush 12
#define _METHOD_INDEX_awt_toolkit_init 13
#define _METHOD_INDEX_getDefaultXColormap 59
#define _METHOD_INDEX_getEnv 61
#define _METHOD_INDEX_getNumberOfButtonsImpl 78
#define _METHOD_INDEX_getTrayIconDisplayTimeout 87
#define _METHOD_INDEX_initIDs 95
#define _METHOD_INDEX_nativeLoadSystemColors 137
#define _METHOD_INDEX_waitForEvents 162
#define _METHOD_INDEX_wakeup_poll 163

$InnerClassInfo _XToolkit_InnerClassesInfo_[] = {
	{"sun.awt.X11.XToolkit$XEventListener", "sun.awt.X11.XToolkit", "XEventListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.X11.XToolkit$4", nullptr, nullptr, 0},
	{"sun.awt.X11.XToolkit$3", nullptr, nullptr, 0},
	{"sun.awt.X11.XToolkit$2", nullptr, nullptr, 0},
	{"sun.awt.X11.XToolkit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XToolkit_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.XToolkit",
	"sun.awt.UNIXToolkit",
	"java.lang.Runnable",
	_XToolkit_FieldInfo_,
	_XToolkit_MethodInfo_,
	nullptr,
	nullptr,
	_XToolkit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XToolkit$XEventListener,sun.awt.X11.XToolkit$4,sun.awt.X11.XToolkit$3,sun.awt.X11.XToolkit$2,sun.awt.X11.XToolkit$1"
};

$Object* allocate$XToolkit($Class* clazz) {
	return $of($alloc(XToolkit));
}

int32_t XToolkit::hashCode() {
	 return this->$UNIXToolkit::hashCode();
}

bool XToolkit::equals(Object$* arg0) {
	 return this->$UNIXToolkit::equals(arg0);
}

$Object* XToolkit::clone() {
	 return this->$UNIXToolkit::clone();
}

$String* XToolkit::toString() {
	 return this->$UNIXToolkit::toString();
}

void XToolkit::finalize() {
	this->$UNIXToolkit::finalize();
}

$PlatformLogger* XToolkit::log = nullptr;
$PlatformLogger* XToolkit::eventLog = nullptr;
$PlatformLogger* XToolkit::timeoutTaskLog = nullptr;
$PlatformLogger* XToolkit::keyEventLog = nullptr;
$PlatformLogger* XToolkit::backingStoreLog = nullptr;
$String* XToolkit::awtAppClassName = nullptr;
bool XToolkit::dynamicLayoutSetting = false;
bool XToolkit::areExtraMouseButtonsEnabled$ = false;
int32_t XToolkit::arrowCursor = 0;
$TreeMap* XToolkit::winMap = nullptr;
$HashMap* XToolkit::specialPeerMap = nullptr;
$HashMap* XToolkit::winToDispatcher = nullptr;
$UIDefaults* XToolkit::uidefaults = nullptr;
$X11GraphicsEnvironment* XToolkit::localEnv = nullptr;
$X11GraphicsDevice* XToolkit::device = nullptr;
int64_t XToolkit::display = 0;
int32_t XToolkit::awt_multiclick_time = 0;
bool XToolkit::securityWarningEnabled = false;
$volatile(int32_t) XToolkit::maxWindowWidthInPixels = 0;
$volatile(int32_t) XToolkit::maxWindowHeightInPixels = 0;
$XMouseInfoPeer* XToolkit::xPeer = nullptr;
$Thread* XToolkit::toolkitThread = nullptr;
$DisplayChangedListener* XToolkit::displayChangedHandler = nullptr;
$Boolean* XToolkit::sunAwtDisableGtkFileDialogs = nullptr;
bool XToolkit::initialized = false;
bool XToolkit::timeStampUpdated = false;
int64_t XToolkit::timeStamp = 0;
$XEventDispatcher* XToolkit::timeFetcher = nullptr;
$XAtom* XToolkit::_XA_JAVA_TIME_PROPERTY_ATOM = nullptr;
$String* XToolkit::prefix = nullptr;
$String* XToolkit::postfix = nullptr;
$String* XToolkit::dndPrefix = nullptr;
int32_t XToolkit::altMask = 0;
int32_t XToolkit::metaMask = 0;
int32_t XToolkit::numLockMask = 0;
int32_t XToolkit::modeSwitchMask = 0;
int32_t XToolkit::modLockIsShiftLock = 0;
$SortedMap* XToolkit::timeoutTasks = nullptr;
int32_t XToolkit::backingStoreType = 0;
int32_t XToolkit::awt_IsXsunKPBehavior = 0;
bool XToolkit::awt_UseXKB = false;
bool XToolkit::awt_UseXKB_Calls = false;
int32_t XToolkit::awt_XKBBaseEventCode = 0;
int32_t XToolkit::awt_XKBEffectiveGroup = 0;
int64_t XToolkit::awt_XKBDescPtr = 0;
int32_t XToolkit::sunOrNotKeyboard = 0;
int32_t XToolkit::kanaOrNotKeyboard = 0;
int64_t XToolkit::eventNumber = 0;
$XEventDispatcher* XToolkit::oops_waiter = nullptr;
bool XToolkit::oops_updated = false;
int32_t XToolkit::oops_position = 0;

int64_t XToolkit::getTrayIconDisplayTimeout() {
	$init(XToolkit);
	int64_t $ret = 0;
	$prepareNativeStatic(XToolkit, getTrayIconDisplayTimeout, int64_t);
	$ret = $invokeNativeStatic(XToolkit, getTrayIconDisplayTimeout);
	$finishNativeStatic();
	return $ret;
}

void XToolkit::initIDs() {
	$init(XToolkit);
	$prepareNativeStatic(XToolkit, initIDs, void);
	$invokeNativeStatic(XToolkit, initIDs);
	$finishNativeStatic();
}

void XToolkit::waitForEvents(int64_t nextTaskTime) {
	$init(XToolkit);
	$prepareNativeStatic(XToolkit, waitForEvents, void, int64_t nextTaskTime);
	$invokeNativeStatic(XToolkit, waitForEvents, nextTaskTime);
	$finishNativeStatic();
}

bool XToolkit::isToolkitThread() {
	$init(XToolkit);
	return $Thread::currentThread() == XToolkit::toolkitThread;
}

void XToolkit::initSecurityWarning() {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, runtime, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "java.runtime.version"_s)))));
	XToolkit::securityWarningEnabled = (runtime != nullptr && runtime->contains("internal"_s));
}

bool XToolkit::isSecurityWarningEnabled() {
	$init(XToolkit);
	return XToolkit::securityWarningEnabled;
}

void XToolkit::awt_output_flush() {
	$init(XToolkit);
	$prepareNativeStatic(XToolkit, awt_output_flush, void);
	$invokeNativeStatic(XToolkit, awt_output_flush);
	$finishNativeStatic();
}

void XToolkit::awtFUnlock() {
	$init(XToolkit);
	awtUnlock();
	awt_output_flush();
}

void XToolkit::nativeLoadSystemColors($ints* systemColors) {
	$prepareNative(XToolkit, nativeLoadSystemColors, void, $ints* systemColors);
	$invokeNative(XToolkit, nativeLoadSystemColors, systemColors);
	$finishNative();
}

$UIDefaults* XToolkit::getUIDefaults() {
	$init(XToolkit);
	if (XToolkit::uidefaults == nullptr) {
		initUIDefaults();
	}
	return XToolkit::uidefaults;
}

void XToolkit::loadSystemColors($ints* systemColors) {
	nativeLoadSystemColors(systemColors);
	$MotifColorUtilities::loadSystemColors(systemColors);
}

void XToolkit::initUIDefaults() {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	try {
		$init($SystemColor);
		$var($Color, c, $SystemColor::text);
		$var($LookAndFeel, lnf, $new($XAWTLookAndFeel));
		$assignStatic(XToolkit::uidefaults, lnf->getDefaults());
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

int64_t XToolkit::getDisplay() {
	$init(XToolkit);
	if (XToolkit::localEnv == nullptr) {
		$throwNew($AWTError, "Local GraphicsEnvironment must not be null"_s);
	}
	return XToolkit::display;
}

int64_t XToolkit::getDefaultRootWindow() {
	$init(XToolkit);
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			int64_t var$3 = XToolkit::getDisplay();
			int64_t res = $XlibWrapper::RootWindow(var$3, $XlibWrapper::DefaultScreen(XToolkit::getDisplay()));
			if (res == 0) {
				$throwNew($IllegalStateException, "Root window must not be null"_s);
			}
			var$2 = res;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void XToolkit::init() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XSupportsLocale();
			if ($XlibWrapper::XSetLocaleModifiers(""_s) == nullptr) {
				$nc(XToolkit::log)->finer("X locale modifiers are not supported, using default"_s);
			}
			tryXKB();
			XToolkit::arrowCursor = $XlibWrapper::XCreateFontCursor(XToolkit::getDisplay(), $XCursorFontConstants::XC_arrow);
			$var($String, extraButtons, "sun.awt.enableExtraMouseButtons"_s);
			$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(XToolkit$$Lambda$lambda$init$0)));
			int64_t var$1 = XToolkit::getDisplay();
			$XlibWrapper::XSelectInput(var$1, XToolkit::getDefaultRootWindow(), $XConstants::StructureNotifyMask);
			int64_t var$2 = XToolkit::getDefaultRootWindow();
			XToolkit::addEventDispatcher(var$2, $$new($XToolkit$1, this));
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($PrivilegedAction, a, static_cast<$PrivilegedAction*>($new(XToolkit$$Lambda$lambda$init$2$1, this)));
	$AccessController::doPrivileged(a);
}

$String* XToolkit::getCorrectXIDString($String* val) {
	$init(XToolkit);
	if (val != nullptr) {
		return val->replace(u'.', u'-');
	} else {
		return val;
	}
}

$String* XToolkit::getEnv($String* key) {
	$init(XToolkit);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(XToolkit, getEnv, $String*, $String* key);
	$assign($ret, $invokeNativeStatic(XToolkit, getEnv, key));
	$finishNativeStatic();
	return $ret;
}

$String* XToolkit::getAWTAppClassName() {
	$init(XToolkit);
	return XToolkit::awtAppClassName;
}

void XToolkit::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$UNIXToolkit::init$();
	$set(this, fcManager, $new($FontConfigManager));
	$set(this, listeners, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$AbstractSequentialList*>($new($LinkedList))))));
	if ($PerformanceLogger::loggingEnabled()) {
		$PerformanceLogger::setTime("XToolkit construction"_s);
	}
	if (!$GraphicsEnvironment::isHeadless()) {
		$var($String, mainClassName, nullptr);
		$var($StackTraceElementArray, trace, ($$new($Throwable))->getStackTrace());
		int32_t bottom = $nc(trace)->length - 1;
		if (bottom >= 0) {
			$assign(mainClassName, $nc(trace->get(bottom))->getClassName());
		}
		if (mainClassName == nullptr || $nc(mainClassName)->isEmpty()) {
			$assign(mainClassName, "AWT"_s);
		}
		$assignStatic(XToolkit::awtAppClassName, getCorrectXIDString(mainClassName));
		init();
		$XWM::init();
		$assignStatic(XToolkit::toolkitThread, $cast($Thread, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(XToolkit$$Lambda$lambda$new$3$2, this)))));
		$nc(XToolkit::toolkitThread)->start();
	}
}

$ButtonPeer* XToolkit::createButton($Button* target) {
	$var($ButtonPeer, peer, $new($XButtonPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$FramePeer* XToolkit::createLightweightFrame($LightweightFrame* target) {
	$var($FramePeer, peer, $new($XLightweightFramePeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$FramePeer* XToolkit::createFrame($Frame* target) {
	$var($FramePeer, peer, $new($XFramePeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

void XToolkit::addToWinMap(int64_t window, $XBaseWindow* xwin) {
	$init(XToolkit);
	$synchronized(XToolkit::winMap) {
		$nc(XToolkit::winMap)->put($($Long::valueOf(window)), xwin);
	}
}

void XToolkit::removeFromWinMap(int64_t window, $XBaseWindow* xwin) {
	$init(XToolkit);
	$synchronized(XToolkit::winMap) {
		$nc(XToolkit::winMap)->remove($($Long::valueOf(window)));
	}
}

$XBaseWindow* XToolkit::windowToXWindow(int64_t window) {
	$init(XToolkit);
	$synchronized(XToolkit::winMap) {
		return $cast($XBaseWindow, $nc(XToolkit::winMap)->get($($Long::valueOf(window))));
	}
}

void XToolkit::addEventDispatcher(int64_t window, $XEventDispatcher* dispatcher) {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	$synchronized(XToolkit::winToDispatcher) {
		$var($Long, key, $Long::valueOf(window));
		$var($Collection, dispatchers, $cast($Collection, $nc(XToolkit::winToDispatcher)->get(key)));
		if (dispatchers == nullptr) {
			$assign(dispatchers, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>($new($Vector)))));
			$nc(XToolkit::winToDispatcher)->put(key, dispatchers);
		}
		$nc(dispatchers)->add(dispatcher);
	}
}

void XToolkit::removeEventDispatcher(int64_t window, $XEventDispatcher* dispatcher) {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	$synchronized(XToolkit::winToDispatcher) {
		$var($Long, key, $Long::valueOf(window));
		$var($Collection, dispatchers, $cast($Collection, $nc(XToolkit::winToDispatcher)->get(key)));
		if (dispatchers != nullptr) {
			dispatchers->remove(dispatcher);
		}
	}
}

bool XToolkit::getLastCursorPos($Point* p) {
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (this->lastCursorPos == nullptr) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			$nc(p)->setLocation(this->lastCursorPos);
			var$2 = true;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void XToolkit::processGlobalMotionEvent($XEvent* e, $XBaseWindow* win) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->get_type() == $XConstants::MotionNotify) {
		$var($XMotionEvent, ev, e->get_xmotion());
		awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (this->lastCursorPos == nullptr) {
					int32_t var$1 = $nc(win)->scaleDown($nc(ev)->get_x_root());
					$set(this, lastCursorPos, $new($Point, var$1, win->scaleDown($nc(ev)->get_y_root())));
				} else {
					int32_t var$2 = $nc(win)->scaleDown($nc(ev)->get_x_root());
					$nc(this->lastCursorPos)->setLocation(var$2, win->scaleDown($nc(ev)->get_y_root()));
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else if (e->get_type() == $XConstants::LeaveNotify) {
		awtLock();
		{
			$var($Throwable, var$4, nullptr);
			try {
				$set(this, lastCursorPos, nullptr);
			} catch ($Throwable& var$5) {
				$assign(var$4, var$5);
			} /*finally*/ {
				awtUnlock();
			}
			if (var$4 != nullptr) {
				$throw(var$4);
			}
		}
	} else if (e->get_type() == $XConstants::EnterNotify) {
		$var($XCrossingEvent, ev, e->get_xcrossing());
		awtLock();
		{
			$var($Throwable, var$6, nullptr);
			try {
				if (this->lastCursorPos == nullptr) {
					int32_t var$7 = $nc(win)->scaleDown($nc(ev)->get_x_root());
					$set(this, lastCursorPos, $new($Point, var$7, win->scaleDown($nc(ev)->get_y_root())));
				} else {
					int32_t var$8 = $nc(win)->scaleDown($nc(ev)->get_x_root());
					$nc(this->lastCursorPos)->setLocation(var$8, win->scaleDown($nc(ev)->get_y_root()));
				}
			} catch ($Throwable& var$9) {
				$assign(var$6, var$9);
			} /*finally*/ {
				awtUnlock();
			}
			if (var$6 != nullptr) {
				$throw(var$6);
			}
		}
	}
}

void XToolkit::addXEventListener($XToolkit$XEventListener* listener) {
	$synchronized(this->listeners) {
		$nc(this->listeners)->add(listener);
	}
}

void XToolkit::notifyListeners($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->listeners) {
		if ($nc(this->listeners)->size() == 0) {
			return;
		}
		$var($XEvent, copy, $cast($XEvent, $nc(xev)->clone()));
		{
			$var($Throwable, var$0, nullptr);
			try {
				{
					$var($Iterator, i$, $nc(this->listeners)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($XToolkit$XEventListener, listener, $cast($XToolkit$XEventListener, i$->next()));
						{
							$nc(listener)->eventProcessed(copy);
						}
					}
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(copy)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void XToolkit::dispatchEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($XAnyEvent, xany, $nc(ev)->get_xany());
	$var($XBaseWindow, baseWindow, windowToXWindow($nc(xany)->get_window()));
	bool var$0 = baseWindow != nullptr;
	if (var$0) {
		bool var$2 = ev->get_type() == $XConstants::MotionNotify;
		bool var$1 = var$2 || ev->get_type() == $XConstants::EnterNotify;
		var$0 = (var$1 || ev->get_type() == $XConstants::LeaveNotify);
	}
	if (var$0) {
		processGlobalMotionEvent(ev, baseWindow);
	}
	if (ev->get_type() == $XConstants::MappingNotify) {
		$XlibWrapper::XRefreshKeyboardMapping(ev->pData);
		resetKeyboardSniffer();
		setupModifierMap();
	}
	$XBaseWindow::dispatchToWindow(ev);
	$var($Collection, dispatchers, nullptr);
	$synchronized(XToolkit::winToDispatcher) {
		$var($Long, key, $Long::valueOf($nc(xany)->get_window()));
		$assign(dispatchers, $cast($Collection, $nc(XToolkit::winToDispatcher)->get(key)));
		if (dispatchers != nullptr) {
			$assign(dispatchers, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>($new($Vector, dispatchers)))));
		}
	}
	if (dispatchers != nullptr) {
		$var($Iterator, iter, dispatchers->iterator());
		while ($nc(iter)->hasNext()) {
			$var($XEventDispatcher, disp, $cast($XEventDispatcher, iter->next()));
			$nc(disp)->dispatchEvent(ev);
		}
	}
	notifyListeners(ev);
}

void XToolkit::processException($Throwable* thr) {
	$init(XToolkit);
	$init($PlatformLogger$Level);
	if ($nc(XToolkit::log)->isLoggable($PlatformLogger$Level::WARNING)) {
		$nc(XToolkit::log)->warning("Exception on Toolkit thread"_s, thr);
	}
}

void XToolkit::awt_toolkit_init() {
	$init(XToolkit);
	$prepareNativeStatic(XToolkit, awt_toolkit_init, void);
	$invokeNativeStatic(XToolkit, awt_toolkit_init);
	$finishNativeStatic();
}

void XToolkit::run() {
	awt_toolkit_init();
	run(XToolkit::PRIMARY_LOOP);
}

void XToolkit::run(bool loop) {
	$useLocalCurrentObjectStackCache();
	$var($XEvent, ev, $new($XEvent));
	while (true) {
		if ($($Thread::currentThread())->isInterrupted()) {
			if ($nc($($AppContext::getAppContext()))->isDisposed()) {
				break;
			}
		}
		awtLock();
		{
			$var($Throwable, var$0, nullptr);
			bool return$1 = false;
			bool break$2 = false;
			bool continue$3 = false;
			bool continue$4 = false;
			try {
				try {
					if (loop == XToolkit::SECONDARY_LOOP) {
						if (!$XlibWrapper::XNextSecondaryLoopEvent(getDisplay(), ev->pData)) {
							// break;
							break$2 = true;
							goto $finally;
						}
					} else {
						callTimeoutTasks();
						while (true) {
							bool var$5 = ($XlibWrapper::XEventsQueued(getDisplay(), $XConstants::QueuedAfterReading) == 0);
							if (!(var$5 && ($XlibWrapper::XEventsQueued(getDisplay(), $XConstants::QueuedAfterFlush) == 0))) {
								break;
							}
							{
								callTimeoutTasks();
								waitForEvents(getNextTaskTime());
							}
						}
						$XlibWrapper::XNextEvent(getDisplay(), ev->pData);
					}
					if (ev->get_type() != $XConstants::NoExpose) {
						++XToolkit::eventNumber;
					}
					if (XToolkit::awt_UseXKB_Calls && ev->get_type() == XToolkit::awt_XKBBaseEventCode) {
						processXkbChanges(ev);
					}
					bool var$6 = $XDropTargetEventProcessor::processEvent(ev);
					if (var$6 || $XDragSourceContextPeer::processEvent(ev)) {
						// continue;
						continue$3 = true;
						goto $finally;
					}
					$init($PlatformLogger$Level);
					if ($nc(XToolkit::eventLog)->isLoggable($PlatformLogger$Level::FINER)) {
						$nc(XToolkit::eventLog)->finer("{0}"_s, $$new($ObjectArray, {$of(ev)}));
					}
					int64_t w = 0;
					if (windowToXWindow($nc($(ev->get_xany()))->get_window()) != nullptr) {
						$var($Component, owner, $nc($($XKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusOwner());
						if (owner != nullptr) {
							$var($XWindow, ownerWindow, $cast($XWindow, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(owner)));
							if (ownerWindow != nullptr) {
								w = ownerWindow->getContentWindow();
							}
						}
					}
					bool var$7 = $nc(XToolkit::keyEventLog)->isLoggable($PlatformLogger$Level::FINE);
					if (var$7) {
						bool var$8 = ev->get_type() == $XConstants::KeyPress;
						var$7 = (var$8 || ev->get_type() == $XConstants::KeyRelease);
					}
					if (var$7) {
						$nc(XToolkit::keyEventLog)->fine($$str({"before XFilterEvent:"_s, ev}));
					}
					if ($XlibWrapper::XFilterEvent(ev->getPData(), w)) {
						// continue;
						continue$4 = true;
						goto $finally;
					}
					bool var$9 = $nc(XToolkit::keyEventLog)->isLoggable($PlatformLogger$Level::FINE);
					if (var$9) {
						bool var$10 = ev->get_type() == $XConstants::KeyPress;
						var$9 = (var$10 || ev->get_type() == $XConstants::KeyRelease);
					}
					if (var$9) {
						$nc(XToolkit::keyEventLog)->fine($$str({"after XFilterEvent:"_s, ev}));
					}
					dispatchEvent(ev);
				} catch ($ThreadDeath& td) {
					$XBaseWindow::ungrabInput();
					return$1 = true;
					goto $finally;
				} catch ($Throwable& thr) {
					$XBaseWindow::ungrabInput();
					processException(thr);
				}
			} catch ($Throwable& var$11) {
				$assign(var$0, var$11);
			} $finally: {
				awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (break$2) {
				break;
			}
			if (continue$3) {
				continue;
			}
			if (continue$4) {
				continue;
			}
			if (return$1) {
				return;
			}
		}
	}
}

void XToolkit::initScreenSize() {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	if (XToolkit::maxWindowWidthInPixels == -1 || XToolkit::maxWindowHeightInPixels == -1) {
		awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($XWindowAttributes, pattr, $new($XWindowAttributes));
				{
					$var($Throwable, var$1, nullptr);
					try {
						int64_t var$2 = XToolkit::getDisplay();
						$XlibWrapper::XGetWindowAttributes(var$2, XToolkit::getDefaultRootWindow(), pattr->pData);
						XToolkit::maxWindowWidthInPixels = pattr->get_width();
						XToolkit::maxWindowHeightInPixels = pattr->get_height();
					} catch ($Throwable& var$3) {
						$assign(var$1, var$3);
					} /*finally*/ {
						pattr->dispose();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			} catch ($Throwable& var$4) {
				$assign(var$0, var$4);
			} /*finally*/ {
				awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

int32_t XToolkit::getMaxWindowWidthInPixels() {
	$init(XToolkit);
	initScreenSize();
	return XToolkit::maxWindowWidthInPixels;
}

int32_t XToolkit::getMaxWindowHeightInPixels() {
	$init(XToolkit);
	initScreenSize();
	return XToolkit::maxWindowHeightInPixels;
}

$Rectangle* XToolkit::getWorkArea(int64_t root, int32_t scale) {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	$var($XAtom, XA_NET_WORKAREA, $XAtom::get("_NET_WORKAREA"_s));
	int64_t native_ptr = $Native::allocateLongArray(4);
	{
		$var($Throwable, var$0, nullptr);
		$var($Rectangle, var$2, nullptr);
		bool return$1 = false;
		try {
			bool workareaPresent = $nc(XA_NET_WORKAREA)->getAtomData(root, $XAtom::XA_CARDINAL, native_ptr, 4);
			if (workareaPresent) {
				int32_t rootX = (int32_t)$Native::getLong(native_ptr, 0);
				int32_t rootY = (int32_t)$Native::getLong(native_ptr, 1);
				int32_t rootWidth = (int32_t)$Native::getLong(native_ptr, 2);
				int32_t rootHeight = (int32_t)$Native::getLong(native_ptr, 3);
				int32_t var$3 = $XlibUtil::scaleDown(rootX, scale);
				int32_t var$4 = $XlibUtil::scaleDown(rootY, scale);
				int32_t var$5 = $XlibUtil::scaleDown(rootWidth, scale);
				$assign(var$2, $new($Rectangle, var$3, var$4, var$5, $XlibUtil::scaleDown(rootHeight, scale)));
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} $finally: {
			$init($XlibWrapper);
			$nc($XlibWrapper::unsafe)->freeMemory(native_ptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return nullptr;
}

$Insets* XToolkit::getScreenInsets($GraphicsConfiguration* gc) {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsDevice, gd, $nc(gc)->getDevice());
	$var($XNETProtocol, np, $nc($($XWM::getWM()))->getNETProtocol());
	if (np == nullptr || !($instanceOf($X11GraphicsDevice, gd)) || !$nc(np)->active()) {
		return $UNIXToolkit::getScreenInsets(gc);
	}
	XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Insets, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($X11GraphicsDevice, x11gd, $cast($X11GraphicsDevice, gd));
			int64_t root = $XlibUtil::getRootWindow($nc(x11gd)->getScreen());
			$var($Rectangle, workArea, getWorkArea(root, $nc(x11gd)->getScaleFactor()));
			$var($Rectangle, screen, gc->getBounds());
			if (workArea != nullptr && $nc(screen)->contains($(workArea->getLocation()))) {
				$assign(workArea, workArea->intersection(screen));
				int32_t top = $nc(workArea)->y - screen->y;
				int32_t left = workArea->x - screen->x;
				int32_t bottom = screen->height - workArea->height - top;
				int32_t right = screen->width - workArea->width - left;
				$assign(var$2, $new($Insets, top, left, bottom, right));
				return$1 = true;
				goto $finally;
			}
			$assign(var$2, $new($Insets, 0, 0, 0, 0));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Object* XToolkit::targetToPeer(Object$* target) {
	$init(XToolkit);
	$var($Object, p, nullptr);
	if (target != nullptr && !$GraphicsEnvironment::isHeadless()) {
		$assign(p, $nc(XToolkit::specialPeerMap)->get(target));
	}
	if (p != nullptr) {
		return $of(p);
	} else {
		return $of($SunToolkit::targetToPeer(target));
	}
}

void XToolkit::targetDisposedPeer(Object$* target, Object$* peer) {
	$init(XToolkit);
	$SunToolkit::targetDisposedPeer(target, peer);
}

$RobotPeer* XToolkit::createRobot($GraphicsDevice* screen) {
	if ($instanceOf($X11GraphicsDevice, screen)) {
		return $new($XRobotPeer, $cast($X11GraphicsDevice, screen));
	}
	return $UNIXToolkit::createRobot(screen);
}

void XToolkit::setDynamicLayout(bool b) {
	XToolkit::dynamicLayoutSetting = b;
}

bool XToolkit::isDynamicLayoutSet() {
	return XToolkit::dynamicLayoutSetting;
}

bool XToolkit::isDynamicLayoutSupported() {
	return $nc($($XWM::getWM()))->supportsDynamicLayout();
}

bool XToolkit::isDynamicLayoutActive() {
	return isDynamicLayoutSupported();
}

$FontPeer* XToolkit::getFontPeer($String* name, int32_t style) {
	return $new($XFontPeer, name, style);
}

$DragSourceContextPeer* XToolkit::createDragSourceContextPeer($DragGestureEvent* dge) {
	$useLocalCurrentObjectStackCache();
	$var($LightweightFrame, f, $SunToolkit::getLightweightFrame($($nc(dge)->getComponent())));
	if (f != nullptr) {
		return f->createDragSourceContextPeer(dge);
	}
	return $XDragSourceContextPeer::createDragSourceContextPeer(dge);
}

$DragGestureRecognizer* XToolkit::createDragGestureRecognizer($Class* recognizerClass, $DragSource* ds, $Component* c, int32_t srcActions, $DragGestureListener* dgl) {
	$var($LightweightFrame, f, $SunToolkit::getLightweightFrame(c));
	if (f != nullptr) {
		return f->createDragGestureRecognizer(recognizerClass, ds, c, srcActions, dgl);
	}
	$load($MouseDragGestureRecognizer);
	if ($of($MouseDragGestureRecognizer::class$)->equals(recognizerClass)) {
		return static_cast<$DragGestureRecognizer*>($new($XMouseDragGestureRecognizer, ds, c, srcActions, dgl));
	} else {
		return nullptr;
	}
}

$CheckboxMenuItemPeer* XToolkit::createCheckboxMenuItem($CheckboxMenuItem* target) {
	$var($XCheckboxMenuItemPeer, peer, $new($XCheckboxMenuItemPeer, target));
	return peer;
}

$MenuItemPeer* XToolkit::createMenuItem($MenuItem* target) {
	$var($XMenuItemPeer, peer, $new($XMenuItemPeer, target));
	return peer;
}

$TextFieldPeer* XToolkit::createTextField($TextField* target) {
	$var($TextFieldPeer, peer, $new($XTextFieldPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$LabelPeer* XToolkit::createLabel($Label* target) {
	$var($LabelPeer, peer, $new($XLabelPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$ListPeer* XToolkit::createList($1List* target) {
	$var($ListPeer, peer, $new($XListPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$CheckboxPeer* XToolkit::createCheckbox($Checkbox* target) {
	$var($CheckboxPeer, peer, $new($XCheckboxPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$ScrollbarPeer* XToolkit::createScrollbar($Scrollbar* target) {
	$var($XScrollbarPeer, peer, $new($XScrollbarPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$ScrollPanePeer* XToolkit::createScrollPane($ScrollPane* target) {
	$var($XScrollPanePeer, peer, $new($XScrollPanePeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$TextAreaPeer* XToolkit::createTextArea($TextArea* target) {
	$var($TextAreaPeer, peer, $new($XTextAreaPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$ChoicePeer* XToolkit::createChoice($Choice* target) {
	$var($XChoicePeer, peer, $new($XChoicePeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$CanvasPeer* XToolkit::createCanvas($Canvas* target) {
	$var($XCanvasPeer, peer, isXEmbedServerRequested() ? static_cast<$XCanvasPeer*>($new($XEmbedCanvasPeer, static_cast<$Component*>(target))) : $new($XCanvasPeer, static_cast<$Component*>(target)));
	targetCreatedPeer(target, peer);
	return peer;
}

$PanelPeer* XToolkit::createPanel($Panel* target) {
	$var($PanelPeer, peer, $new($XPanelPeer, static_cast<$Component*>(target)));
	targetCreatedPeer(target, peer);
	return peer;
}

$WindowPeer* XToolkit::createWindow($Window* target) {
	$var($WindowPeer, peer, $new($XWindowPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$DialogPeer* XToolkit::createDialog($Dialog* target) {
	$var($DialogPeer, peer, $new($XDialogPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

bool XToolkit::getSunAwtDisableGtkFileDialogs() {
	$load(XToolkit);
	$synchronized(class$) {
		$init(XToolkit);
		$beforeCallerSensitive();
		if (XToolkit::sunAwtDisableGtkFileDialogs == nullptr) {
			$assignStatic(XToolkit::sunAwtDisableGtkFileDialogs, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "sun.awt.disableGtkFileDialogs"_s)))));
		}
		return $nc(XToolkit::sunAwtDisableGtkFileDialogs)->booleanValue();
	}
}

$FileDialogPeer* XToolkit::createFileDialog($FileDialog* target) {
	$var($FileDialogPeer, peer, nullptr);
	bool var$0 = !getSunAwtDisableGtkFileDialogs();
	if (var$0) {
		bool var$1 = checkGtkVersion(2, 4, 0);
		var$0 = (var$1 || checkGtkVersion(3, 0, 0));
	}
	if (var$0) {
		$assign(peer, $new($GtkFileDialogPeer, target));
	} else {
		$assign(peer, $new($XFileDialogPeer, target));
	}
	targetCreatedPeer(target, peer);
	return peer;
}

$MenuBarPeer* XToolkit::createMenuBar($MenuBar* target) {
	$var($XMenuBarPeer, peer, $new($XMenuBarPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$MenuPeer* XToolkit::createMenu($Menu* target) {
	$var($XMenuPeer, peer, $new($XMenuPeer, target));
	return peer;
}

$PopupMenuPeer* XToolkit::createPopupMenu($PopupMenu* target) {
	$var($XPopupMenuPeer, peer, $new($XPopupMenuPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$MouseInfoPeer* XToolkit::getMouseInfoPeer() {
	$synchronized(this) {
		if (XToolkit::xPeer == nullptr) {
			$assignStatic(XToolkit::xPeer, $new($XMouseInfoPeer));
		}
		return XToolkit::xPeer;
	}
}

$XEmbeddedFramePeer* XToolkit::createEmbeddedFrame($XEmbeddedFrame* target) {
	$var($XEmbeddedFramePeer, peer, $new($XEmbeddedFramePeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$XEmbedChildProxyPeer* XToolkit::createEmbedProxy($XEmbedChildProxy* target) {
	$var($XEmbedChildProxyPeer, peer, $new($XEmbedChildProxyPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$KeyboardFocusManagerPeer* XToolkit::getKeyboardFocusManagerPeer() {
	return $XKeyboardFocusManagerPeer::getInstance();
}

$Cursor* XToolkit::createCustomCursor($Image* cursor, $Point* hotSpot, $String* name) {
	return $new($XCustomCursor, cursor, hotSpot, name);
}

$TrayIconPeer* XToolkit::createTrayIcon($TrayIcon* target) {
	$var($TrayIconPeer, peer, $new($XTrayIconPeer, target));
	targetCreatedPeer(target, peer);
	return peer;
}

$SystemTrayPeer* XToolkit::createSystemTray($SystemTray* target) {
	$var($SystemTrayPeer, peer, $new($XSystemTrayPeer, target));
	return peer;
}

bool XToolkit::isTraySupported() {
	$var($XSystemTrayPeer, peer, $XSystemTrayPeer::getPeerInstance());
	if (peer != nullptr) {
		return peer->isAvailable();
	}
	return false;
}

$DataTransferer* XToolkit::getDataTransferer() {
	return $XDataTransferer::getInstanceImpl();
}

$Dimension* XToolkit::getBestCursorSize(int32_t preferredWidth, int32_t preferredHeight) {
	int32_t var$0 = $Math::max(1, preferredWidth);
	return $XCustomCursor::getBestCursorSize(var$0, $Math::max(1, preferredHeight));
}

int32_t XToolkit::getMaximumCursorColors() {
	return 2;
}

$Map* XToolkit::mapInputMethodHighlight($InputMethodHighlight* highlight) {
	return $XInputMethod::mapInputMethodHighlight(highlight);
}

bool XToolkit::getLockingKeyState(int32_t key) {
	if (!(key == $KeyEvent::VK_CAPS_LOCK || key == $KeyEvent::VK_NUM_LOCK || key == $KeyEvent::VK_SCROLL_LOCK || key == $KeyEvent::VK_KANA_LOCK)) {
		$throwNew($IllegalArgumentException, "invalid key for Toolkit.getLockingKeyState"_s);
	}
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = getModifierState(key);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Clipboard* XToolkit::getSystemClipboard() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::ACCESS_CLIPBOARD_PERMISSION);
	}
	$synchronized(this) {
		if (this->clipboard == nullptr) {
			$set(this, clipboard, $new($XClipboard, "System"_s, "CLIPBOARD"_s));
		}
	}
	return this->clipboard;
}

$Clipboard* XToolkit::getSystemSelection() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::ACCESS_CLIPBOARD_PERMISSION);
	}
	$synchronized(this) {
		if (this->selection == nullptr) {
			$set(this, selection, $new($XClipboard, "Selection"_s, "PRIMARY"_s));
		}
	}
	return this->selection;
}

void XToolkit::beep() {
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XBell(getDisplay(), 0);
			$XlibWrapper::XFlush(getDisplay());
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$PrintJob* XToolkit::getPrintJob($Frame* frame, $String* doctitle, $Properties* props) {
	if (frame == nullptr) {
		$throwNew($NullPointerException, "frame must not be null"_s);
	}
	$var($PrintJob2D, printJob, $new($PrintJob2D, frame, doctitle, props));
	if (printJob->printDialog() == false) {
		$assign(printJob, nullptr);
	}
	return printJob;
}

$PrintJob* XToolkit::getPrintJob($Frame* frame, $String* doctitle, $JobAttributes* jobAttributes, $PageAttributes* pageAttributes) {
	if (frame == nullptr) {
		$throwNew($NullPointerException, "frame must not be null"_s);
	}
	$var($PrintJob2D, printJob, $new($PrintJob2D, frame, doctitle, jobAttributes, pageAttributes));
	if (printJob->printDialog() == false) {
		$assign(printJob, nullptr);
	}
	return printJob;
}

void XToolkit::XSync() {
	$init(XToolkit);
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XSync(getDisplay(), 0);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t XToolkit::getScreenResolution() {
	int64_t display = getDisplay();
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			double var$3 = ($XlibWrapper::DisplayWidth(display, $XlibWrapper::DefaultScreen(display)) * 25.4);
			var$2 = $cast(int32_t, (var$3 / $XlibWrapper::DisplayWidthMM(display, $XlibWrapper::DefaultScreen(display))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t XToolkit::getDefaultXColormap() {
	$init(XToolkit);
	int64_t $ret = 0;
	$prepareNativeStatic(XToolkit, getDefaultXColormap, int64_t);
	$ret = $invokeNativeStatic(XToolkit, getDefaultXColormap);
	$finishNativeStatic();
	return $ret;
}

$InputMethodDescriptor* XToolkit::getInputMethodAdapterDescriptor() {
	return $new($XInputMethodDescriptor);
}

bool XToolkit::enableInputMethodsForTextComponent() {
	return true;
}

int32_t XToolkit::getMultiClickTime() {
	$init(XToolkit);
	if (XToolkit::awt_multiclick_time == 0) {
		initializeMultiClickTime();
	}
	return XToolkit::awt_multiclick_time;
}

void XToolkit::initializeMultiClickTime() {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($String, multiclick_time_query, $XlibWrapper::XGetDefault(XToolkit::getDisplay(), "*"_s, "multiClickTime"_s));
				if (multiclick_time_query != nullptr) {
					XToolkit::awt_multiclick_time = (int32_t)$Long::parseLong(multiclick_time_query);
				} else {
					$assign(multiclick_time_query, $XlibWrapper::XGetDefault(XToolkit::getDisplay(), "OpenWindows"_s, "MultiClickTimeout"_s));
					if (multiclick_time_query != nullptr) {
						XToolkit::awt_multiclick_time = (int32_t)$Long::parseLong(multiclick_time_query) * 100;
					} else {
						XToolkit::awt_multiclick_time = XToolkit::AWT_MULTICLICK_DEFAULT_TIME;
					}
				}
			} catch ($NumberFormatException& nf) {
				XToolkit::awt_multiclick_time = XToolkit::AWT_MULTICLICK_DEFAULT_TIME;
			} catch ($NullPointerException& npe) {
				XToolkit::awt_multiclick_time = XToolkit::AWT_MULTICLICK_DEFAULT_TIME;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (XToolkit::awt_multiclick_time == 0) {
		XToolkit::awt_multiclick_time = XToolkit::AWT_MULTICLICK_DEFAULT_TIME;
	}
}

bool XToolkit::isFrameStateSupported(int32_t state) {
	if (state == $Frame::NORMAL || state == $Frame::ICONIFIED) {
		return true;
	} else {
		return $nc($($XWM::getWM()))->supportsExtendedState(state);
	}
}

void XToolkit::dumpPeers() {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XToolkit::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XToolkit::log)->fine("Mapped windows:"_s);
		$nc(XToolkit::winMap)->forEach(static_cast<$BiConsumer*>($$new(XToolkit$$Lambda$lambda$dumpPeers$4$3)));
		$SunToolkit::dumpPeers(XToolkit::log);
		$nc(XToolkit::log)->fine("Mapped special peers:"_s);
		$nc(XToolkit::specialPeerMap)->forEach(static_cast<$BiConsumer*>($$new(XToolkit$$Lambda$lambda$dumpPeers$5$4)));
		$nc(XToolkit::log)->fine("Mapped dispatchers:"_s);
		$nc(XToolkit::winToDispatcher)->forEach(static_cast<$BiConsumer*>($$new(XToolkit$$Lambda$lambda$dumpPeers$6$5)));
	}
}

int64_t XToolkit::getCurrentServerTime() {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (!XToolkit::initialized) {
					XToolkit::addEventDispatcher($nc($($XBaseWindow::getXAWTRootWindow()))->getWindow(), XToolkit::timeFetcher);
					$assignStatic(XToolkit::_XA_JAVA_TIME_PROPERTY_ATOM, $XAtom::get("_SUNW_JAVA_AWT_TIME"_s));
					XToolkit::initialized = true;
				}
				XToolkit::timeStampUpdated = false;
				int64_t var$1 = XToolkit::getDisplay();
				int64_t var$2 = $nc($($XBaseWindow::getXAWTRootWindow()))->getWindow();
				$XlibWrapper::XChangeProperty(var$1, var$2, $nc(XToolkit::_XA_JAVA_TIME_PROPERTY_ATOM)->getAtom(), $XAtom::XA_ATOM, 32, $XConstants::PropModeAppend, 0, 0);
				$XlibWrapper::XFlush(XToolkit::getDisplay());
				if (isToolkitThread()) {
					$var($XEvent, event, $new($XEvent));
					{
						$var($Throwable, var$3, nullptr);
						try {
							int64_t var$4 = XToolkit::getDisplay();
							$XlibWrapper::XWindowEvent(var$4, $nc($($XBaseWindow::getXAWTRootWindow()))->getWindow(), $XConstants::PropertyChangeMask, event->pData);
							$nc(XToolkit::timeFetcher)->dispatchEvent(event);
						} catch ($Throwable& var$5) {
							$assign(var$3, var$5);
						} /*finally*/ {
							event->dispose();
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
					}
				} else {
					while (!XToolkit::timeStampUpdated) {
						awtLockWait();
					}
				}
			} catch ($InterruptedException& ie) {
				$init($PlatformLogger$Level);
				if ($nc(XToolkit::log)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(XToolkit::log)->fine($$str({"Catched exception, timeStamp may not be correct (ie = "_s, ie, ")"_s}));
				}
			}
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} /*finally*/ {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return XToolkit::timeStamp;
}

void XToolkit::initializeDesktopProperties() {
	$useLocalCurrentObjectStackCache();
	$nc(this->desktopProperties)->put("DnD.Autoscroll.initialDelay"_s, $($Integer::valueOf(50)));
	$nc(this->desktopProperties)->put("DnD.Autoscroll.interval"_s, $($Integer::valueOf(50)));
	$nc(this->desktopProperties)->put("DnD.Autoscroll.cursorHysteresis"_s, $($Integer::valueOf(5)));
	$nc(this->desktopProperties)->put("Shell.shellFolderManager"_s, "sun.awt.shell.ShellFolderManager"_s);
	if (!$GraphicsEnvironment::isHeadless()) {
		$nc(this->desktopProperties)->put("awt.multiClickInterval"_s, $($Integer::valueOf(getMultiClickTime())));
		$nc(this->desktopProperties)->put("awt.mouse.numButtons"_s, $($Integer::valueOf(getNumberOfButtons())));
		if ($SunGraphicsEnvironment::isUIScaleEnabled()) {
			addPropertyChangeListener("gnome.Xft/DPI"_s, static_cast<$PropertyChangeListener*>($$new(XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6)));
		}
	}
}

int32_t XToolkit::getNumberOfButtonsImpl() {
	int32_t $ret = 0;
	$prepareNative(XToolkit, getNumberOfButtonsImpl, int32_t);
	$ret = $invokeNative(XToolkit, getNumberOfButtonsImpl);
	$finishNative();
	return $ret;
}

int32_t XToolkit::getNumberOfButtons() {
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($SunToolkit);
			if ($SunToolkit::numberOfButtons == 0) {
				$SunToolkit::numberOfButtons = getNumberOfButtonsImpl();
				$SunToolkit::numberOfButtons = ($SunToolkit::numberOfButtons > $SunToolkit::MAX_BUTTONS_SUPPORTED) ? $SunToolkit::MAX_BUTTONS_SUPPORTED : $SunToolkit::numberOfButtons;
				if ($SunToolkit::numberOfButtons >= 5) {
					$SunToolkit::numberOfButtons -= 2;
				} else {
					if ($SunToolkit::numberOfButtons == 4 || $SunToolkit::numberOfButtons == 5) {
						$SunToolkit::numberOfButtons = 3;
					}
				}
			}
			var$2 = $SunToolkit::numberOfButtons;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t XToolkit::getNumberOfButtonsForMask() {
	$init(XToolkit);
	return $Math::min($XConstants::MAX_BUTTONS, $nc((($cast($SunToolkit, $($Toolkit::getDefaultToolkit())))))->getNumberOfButtons());
}

$Object* XToolkit::lazilyLoadDesktopProperty($String* name) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->startsWith(XToolkit::prefix)) {
		int32_t var$1 = $nc(XToolkit::prefix)->length();
		$var($String, var$0, $(name->substring(var$1, name->length())));
		$var($String, cursorName, $concat(var$0, XToolkit::postfix));
		try {
			return $of($Cursor::getSystemCustomCursor(cursorName));
		} catch ($AWTException& awte) {
			$throwNew($RuntimeException, $$str({"cannot load system cursor: "_s, cursorName}), awte);
		}
	}
	if ($nc(name)->equals("awt.dynamicLayoutSupported"_s)) {
		return $of($Boolean::valueOf(isDynamicLayoutSupported()));
	}
	if (initXSettingsIfNeeded(name)) {
		return $of($nc(this->desktopProperties)->get(name));
	}
	return $of($UNIXToolkit::lazilyLoadDesktopProperty(name));
}

void XToolkit::addPropertyChangeListener($String* name, $PropertyChangeListener* pcl) {
	$synchronized(this) {
		if (name == nullptr) {
			return;
		}
		initXSettingsIfNeeded(name);
		$UNIXToolkit::addPropertyChangeListener(name, pcl);
	}
}

bool XToolkit::initXSettingsIfNeeded($String* propName) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !this->loadedXSettings;
	if (var$0) {
		bool var$2 = $nc(propName)->startsWith("gnome."_s);
		$init($SunToolkit);
		bool var$1 = var$2 || $nc(propName)->equals($SunToolkit::DESKTOPFONTHINTS);
		var$0 = (var$1 || $nc(propName)->startsWith(XToolkit::dndPrefix));
	}
	if (var$0) {
		this->loadedXSettings = true;
		if (!$GraphicsEnvironment::isHeadless()) {
			loadXSettings();
			$init($SunToolkit);
			if ($nc(this->desktopProperties)->get($SunToolkit::DESKTOPFONTHINTS) == nullptr) {
				if ($XWM::isKDE2()) {
					$var($Object, hint, $FontConfigManager::getFontConfigAAHint());
					if (hint != nullptr) {
						$init($UNIXToolkit);
						$nc(this->desktopProperties)->put($UNIXToolkit::FONTCONFIGAAHINT, hint);
					}
				}
				$nc(this->desktopProperties)->put($SunToolkit::DESKTOPFONTHINTS, $($SunToolkit::getDesktopFontHints()));
			}
			return true;
		}
	}
	return false;
}

void XToolkit::loadXSettings() {
	$set(this, xs, $new($XAWTXSettings));
}

void XToolkit::parseXSettings(int32_t screen_XXX_ignored, $Map* updatedSettings) {
	$useLocalCurrentObjectStackCache();
	if (updatedSettings == nullptr || $nc(updatedSettings)->isEmpty()) {
		return;
	}
	$var($Iterator, i, $nc($($nc(updatedSettings)->entrySet()))->iterator());
	while ($nc(i)->hasNext()) {
		$var($Map$Entry, e, $cast($Map$Entry, i->next()));
		$var($String, name, $cast($String, $nc(e)->getKey()));
		$assign(name, $str({"gnome."_s, name}));
		setDesktopProperty(name, $(e->getValue()));
		$init($PlatformLogger$Level);
		if ($nc(XToolkit::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XToolkit::log)->fine($$str({"name = "_s, name, " value = "_s, $(e->getValue())}));
		}
	}
	$init($SunToolkit);
	setDesktopProperty($SunToolkit::DESKTOPFONTHINTS, $($SunToolkit::getDesktopFontHints()));
	$var($Integer, dragThreshold, nullptr);
	$synchronized(this) {
		$assign(dragThreshold, $cast($Integer, $nc(this->desktopProperties)->get("gnome.Net/DndDragThreshold"_s)));
	}
	if (dragThreshold != nullptr) {
		setDesktopProperty("DnD.gestureMotionThreshold"_s, dragThreshold);
	}
}

int32_t XToolkit::keysymToPrimaryKeycode(int64_t sym) {
	$init(XToolkit);
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t code = $XlibWrapper::XKeysymToKeycode(getDisplay(), sym);
			if (code == 0) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			int64_t primary = $XlibWrapper::XKeycodeToKeysym(getDisplay(), code, 0);
			if (sym != primary) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			var$2 = code;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool XToolkit::getModifierState(int32_t jkc) {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	int32_t iKeyMask = 0;
	int64_t ks = $XKeysym::javaKeycode2Keysym(jkc);
	int32_t kc = $XlibWrapper::XKeysymToKeycode(getDisplay(), ks);
	if (kc == 0) {
		return false;
	}
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$var($XModifierKeymap, modmap, $new($XModifierKeymap, $XlibWrapper::XGetModifierMapping(getDisplay())));
			int32_t nkeys = modmap->get_max_keypermod();
			int64_t map_ptr = modmap->get_modifiermap();
			for (int32_t k = 0; k < 8; ++k) {
				for (int32_t i = 0; i < nkeys; ++i) {
					int32_t keycode = $Native::getUByte(map_ptr, k * nkeys + i);
					if (keycode == 0) {
						continue;
					}
					if (kc == keycode) {
						iKeyMask = $sl(1, k);
						break;
					}
				}
				if (iKeyMask != 0) {
					break;
				}
			}
			$XlibWrapper::XFreeModifiermap(modmap->pData);
			if (iKeyMask == 0) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			int64_t window = 0;
			try {
				window = $nc(($cast($Long, $($nc(XToolkit::winMap)->firstKey()))))->longValue();
			} catch ($NoSuchElementException& nex) {
				window = getDefaultRootWindow();
			}
			bool res = $XlibWrapper::XQueryPointer(getDisplay(), window, $XlibWrapper::larg1, $XlibWrapper::larg2, $XlibWrapper::larg3, $XlibWrapper::larg4, $XlibWrapper::larg5, $XlibWrapper::larg6, $XlibWrapper::larg7);
			int32_t mask = $Native::getInt($XlibWrapper::larg7);
			var$2 = (((int32_t)(mask & (uint32_t)iKeyMask)) != 0);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void XToolkit::setupModifierMap() {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	int32_t metaL = keysymToPrimaryKeycode($XKeySymConstants::XK_Meta_L);
	int32_t metaR = keysymToPrimaryKeycode($XKeySymConstants::XK_Meta_R);
	int32_t altL = keysymToPrimaryKeycode($XKeySymConstants::XK_Alt_L);
	int32_t altR = keysymToPrimaryKeycode($XKeySymConstants::XK_Alt_R);
	int32_t numLock = keysymToPrimaryKeycode($XKeySymConstants::XK_Num_Lock);
	int32_t modeSwitch = keysymToPrimaryKeycode($XKeySymConstants::XK_Mode_switch);
	int32_t shiftLock = keysymToPrimaryKeycode($XKeySymConstants::XK_Shift_Lock);
	int32_t capsLock = keysymToPrimaryKeycode($XKeySymConstants::XK_Caps_Lock);
	$var($ints, modmask, $new($ints, {
		$XConstants::ShiftMask,
		$XConstants::LockMask,
		$XConstants::ControlMask,
		$XConstants::Mod1Mask,
		$XConstants::Mod2Mask,
		$XConstants::Mod3Mask,
		$XConstants::Mod4Mask,
		$XConstants::Mod5Mask
	}));
	$nc(XToolkit::log)->fine("In setupModifierMap"_s);
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($XModifierKeymap, modmap, $new($XModifierKeymap, $XlibWrapper::XGetModifierMapping(getDisplay())));
			int32_t nkeys = modmap->get_max_keypermod();
			int64_t map_ptr = modmap->get_modifiermap();
			for (int32_t modn = $XConstants::Mod1MapIndex; modn <= $XConstants::Mod5MapIndex; ++modn) {
				for (int32_t i = 0; i < nkeys; ++i) {
					int32_t keycode = $Native::getUByte(map_ptr, modn * nkeys + i);
					if (keycode == 0) {
						break;
					}
					if (XToolkit::metaMask == 0 && (keycode == metaL || keycode == metaR)) {
						XToolkit::metaMask = modmask->get(modn);
						break;
					}
					if (XToolkit::altMask == 0 && (keycode == altL || keycode == altR)) {
						XToolkit::altMask = modmask->get(modn);
						break;
					}
					if (XToolkit::numLockMask == 0 && keycode == numLock) {
						XToolkit::numLockMask = modmask->get(modn);
						break;
					}
					if (XToolkit::modeSwitchMask == 0 && keycode == modeSwitch) {
						XToolkit::modeSwitchMask = modmask->get(modn);
						break;
					}
					continue;
				}
			}
			XToolkit::modLockIsShiftLock = 0;
			for (int32_t j = 0; j < nkeys; ++j) {
				int32_t keycode = $Native::getUByte(map_ptr, $XConstants::LockMapIndex * nkeys + j);
				if (keycode == 0) {
					break;
				}
				if (keycode == shiftLock) {
					XToolkit::modLockIsShiftLock = 1;
					break;
				}
				if (keycode == capsLock) {
					break;
				}
			}
			$XlibWrapper::XFreeModifiermap(modmap->pData);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$init($PlatformLogger$Level);
	if ($nc(XToolkit::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XToolkit::log)->fine($$str({"metaMask = "_s, $$str(XToolkit::metaMask)}));
		$nc(XToolkit::log)->fine($$str({"altMask = "_s, $$str(XToolkit::altMask)}));
		$nc(XToolkit::log)->fine($$str({"numLockMask = "_s, $$str(XToolkit::numLockMask)}));
		$nc(XToolkit::log)->fine($$str({"modeSwitchMask = "_s, $$str(XToolkit::modeSwitchMask)}));
		$nc(XToolkit::log)->fine($$str({"modLockIsShiftLock = "_s, $$str(XToolkit::modLockIsShiftLock)}));
	}
}

void XToolkit::remove($Runnable* task) {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	if (task == nullptr) {
		$throwNew($NullPointerException, "task is null"_s);
	}
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			$init($PlatformLogger$Level);
			if ($nc(XToolkit::timeoutTaskLog)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(XToolkit::timeoutTaskLog)->finer($$str({"Removing task "_s, task}));
			}
			if (XToolkit::timeoutTasks == nullptr) {
				if ($nc(XToolkit::timeoutTaskLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(XToolkit::timeoutTaskLog)->finer("Task is not scheduled"_s);
				}
				return$1 = true;
				goto $finally;
			}
			$var($Collection, values, $nc(XToolkit::timeoutTasks)->values());
			$var($Iterator, iter, $nc(values)->iterator());
			while ($nc(iter)->hasNext()) {
				$var($List, list, $cast($List, iter->next()));
				bool removed = false;
				if ($nc(list)->contains(task)) {
					list->remove($of(task));
					if (list->isEmpty()) {
						iter->remove();
					}
					break;
				}
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void XToolkit::wakeup_poll() {
	$init(XToolkit);
	$prepareNativeStatic(XToolkit, wakeup_poll, void);
	$invokeNativeStatic(XToolkit, wakeup_poll);
	$finishNativeStatic();
}

void XToolkit::schedule($Runnable* task, int64_t interval) {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	if (task == nullptr) {
		$throwNew($NullPointerException, "task is null"_s);
	}
	if (interval <= 0) {
		$throwNew($IllegalArgumentException, $$str({"interval "_s, $$str(interval), " is not positive"_s}));
	}
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($PlatformLogger$Level);
			if ($nc(XToolkit::timeoutTaskLog)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(XToolkit::timeoutTaskLog)->finer("XToolkit.schedule(): current time={0};  interval={1};  task being added={2};  tasks before addition={3}"_s, $$new($ObjectArray, {
					$($of($Long::valueOf($System::currentTimeMillis()))),
					$($of($Long::valueOf(interval))),
					$of(task),
					$of(XToolkit::timeoutTasks)
				}));
			}
			if (XToolkit::timeoutTasks == nullptr) {
				$assignStatic(XToolkit::timeoutTasks, $new($TreeMap));
			}
			$var($Long, time, $Long::valueOf($System::currentTimeMillis() + interval));
			$var($List, tasks, $cast($List, $nc(XToolkit::timeoutTasks)->get(time)));
			if (tasks == nullptr) {
				$assign(tasks, $new($ArrayList, 1));
				$nc(XToolkit::timeoutTasks)->put(time, tasks);
			}
			$nc(tasks)->add(task);
			bool var$1 = $equals($nc(XToolkit::timeoutTasks)->get($($nc(XToolkit::timeoutTasks)->firstKey())), tasks);
			if (var$1 && tasks->size() == 1) {
				wakeup_poll();
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int64_t XToolkit::getNextTaskTime() {
	$useLocalCurrentObjectStackCache();
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (XToolkit::timeoutTasks == nullptr || $nc(XToolkit::timeoutTasks)->isEmpty()) {
				var$2 = -1;
				return$1 = true;
				goto $finally;
			}
			var$2 = $nc(($cast($Long, $($nc(XToolkit::timeoutTasks)->firstKey()))))->longValue();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void XToolkit::callTimeoutTasks() {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XToolkit::timeoutTaskLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XToolkit::timeoutTaskLog)->finer("XToolkit.callTimeoutTasks(): current time={0};  tasks={1}"_s, $$new($ObjectArray, {
			$($of($Long::valueOf($System::currentTimeMillis()))),
			$of(XToolkit::timeoutTasks)
		}));
	}
	if (XToolkit::timeoutTasks == nullptr || $nc(XToolkit::timeoutTasks)->isEmpty()) {
		return;
	}
	$var($Long, currentTime, $Long::valueOf($System::currentTimeMillis()));
	$var($Long, time, $cast($Long, $nc(XToolkit::timeoutTasks)->firstKey()));
	while ($nc(time)->compareTo(currentTime) <= 0) {
		$var($List, tasks, $cast($List, $nc(XToolkit::timeoutTasks)->remove(time)));
		{
			$var($Iterator, iter, $nc(tasks)->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($Runnable, task, $cast($Runnable, iter->next()));
				if ($nc(XToolkit::timeoutTaskLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(XToolkit::timeoutTaskLog)->finer("XToolkit.callTimeoutTasks(): current time={0};  about to run task={1}"_s, $$new($ObjectArray, {
						$($of($Long::valueOf($nc(currentTime)->longValue()))),
						$of(task)
					}));
				}
				try {
					$nc(task)->run();
				} catch ($ThreadDeath& td) {
					$throw(td);
				} catch ($Throwable& thr) {
					processException(thr);
				}
			}
		}
		if ($nc(XToolkit::timeoutTasks)->isEmpty()) {
			break;
		}
		$assign(time, $cast($Long, $nc(XToolkit::timeoutTasks)->firstKey()));
	}
}

bool XToolkit::isLeftMouseButton($MouseEvent* me) {
	$init(XToolkit);
	switch ($nc(me)->getID()) {
	case $MouseEvent::MOUSE_PRESSED:
		{}
	case $MouseEvent::MOUSE_RELEASED:
		{
			return (me->getButton() == $MouseEvent::BUTTON1);
		}
	case $MouseEvent::MOUSE_ENTERED:
		{}
	case $MouseEvent::MOUSE_EXITED:
		{}
	case $MouseEvent::MOUSE_CLICKED:
		{}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			return (((int32_t)(me->getModifiersEx() & (uint32_t)$InputEvent::BUTTON1_DOWN_MASK)) != 0);
		}
	}
	return false;
}

bool XToolkit::isRightMouseButton($MouseEvent* me) {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	int32_t numButtons = $nc(($cast($Integer, $($nc($(getDefaultToolkit()))->getDesktopProperty("awt.mouse.numButtons"_s)))))->intValue();
	switch ($nc(me)->getID()) {
	case $MouseEvent::MOUSE_PRESSED:
		{}
	case $MouseEvent::MOUSE_RELEASED:
		{
			bool var$0 = (numButtons == 2 && me->getButton() == $MouseEvent::BUTTON2);
			return (var$0 || (numButtons > 2 && me->getButton() == $MouseEvent::BUTTON3));
		}
	case $MouseEvent::MOUSE_ENTERED:
		{}
	case $MouseEvent::MOUSE_EXITED:
		{}
	case $MouseEvent::MOUSE_CLICKED:
		{}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			bool var$1 = (numButtons == 2 && ((int32_t)(me->getModifiersEx() & (uint32_t)$InputEvent::BUTTON2_DOWN_MASK)) != 0);
			return (var$1 || (numButtons > 2 && ((int32_t)(me->getModifiersEx() & (uint32_t)$InputEvent::BUTTON3_DOWN_MASK)) != 0));
		}
	}
	return false;
}

bool XToolkit::needsXEmbedImpl() {
	return true;
}

bool XToolkit::isModalityTypeSupported($Dialog$ModalityType* modalityType) {
	$init($Dialog$ModalityType);
	return (modalityType == nullptr) || (modalityType == $Dialog$ModalityType::MODELESS) || (modalityType == $Dialog$ModalityType::DOCUMENT_MODAL) || (modalityType == $Dialog$ModalityType::APPLICATION_MODAL) || (modalityType == $Dialog$ModalityType::TOOLKIT_MODAL);
}

bool XToolkit::isModalExclusionTypeSupported($Dialog$ModalExclusionType* exclusionType) {
	$init($Dialog$ModalExclusionType);
	return (exclusionType == nullptr) || (exclusionType == $Dialog$ModalExclusionType::NO_EXCLUDE) || (exclusionType == $Dialog$ModalExclusionType::APPLICATION_EXCLUDE) || (exclusionType == $Dialog$ModalExclusionType::TOOLKIT_EXCLUDE);
}

$EventQueue* XToolkit::getEventQueue(Object$* target) {
	$init(XToolkit);
	$var($AppContext, appContext, targetToAppContext(target));
	if (appContext != nullptr) {
		$init($AppContext);
		return $cast($EventQueue, appContext->get($AppContext::EVENT_QUEUE_KEY));
	}
	return nullptr;
}

void XToolkit::removeSourceEvents($EventQueue* queue, Object$* source, bool removeAllEvents) {
	$init(XToolkit);
	$nc($($AWTAccessor::getEventQueueAccessor()))->removeSourceEvents(queue, source, removeAllEvents);
}

bool XToolkit::isAlwaysOnTopSupported() {
	$useLocalCurrentObjectStackCache();
	{
		$load($XLayerProtocol);
		$var($Iterator, i$, $nc($($nc($($XWM::getWM()))->getProtocols($XLayerProtocol::class$)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XLayerProtocol, proto, $cast($XLayerProtocol, i$->next()));
			{
				if ($nc(proto)->supportsLayer($XLayerProtocol::LAYER_ALWAYS_ON_TOP)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool XToolkit::useBufferPerWindow() {
	return XToolkit::getBackingStoreType() == $XConstants::NotUseful;
}

int32_t XToolkit::getBackingStoreType() {
	$init(XToolkit);
	return XToolkit::backingStoreType;
}

void XToolkit::setBackingStoreType() {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, prop, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.awt.backingStore"_s)))));
	if (prop == nullptr) {
		XToolkit::backingStoreType = $XConstants::NotUseful;
		$init($PlatformLogger$Level);
		if ($nc(XToolkit::backingStoreLog)->isLoggable($PlatformLogger$Level::CONFIG)) {
			$nc(XToolkit::backingStoreLog)->config("The system property sun.awt.backingStore is not set, by default backingStore=NotUseful"_s);
		}
		return;
	}
	$init($PlatformLogger$Level);
	if ($nc(XToolkit::backingStoreLog)->isLoggable($PlatformLogger$Level::CONFIG)) {
		$nc(XToolkit::backingStoreLog)->config($$str({"The system property sun.awt.backingStore is "_s, prop}));
	}
	$assign(prop, $nc(prop)->toLowerCase());
	if (prop->equals("always"_s)) {
		XToolkit::backingStoreType = $XConstants::Always;
	} else if (prop->equals("whenmapped"_s)) {
		XToolkit::backingStoreType = $XConstants::WhenMapped;
	} else {
		XToolkit::backingStoreType = $XConstants::NotUseful;
	}
	if ($nc(XToolkit::backingStoreLog)->isLoggable($PlatformLogger$Level::CONFIG)) {
		$nc(XToolkit::backingStoreLog)->config($$str({"backingStore(as provided by the system property)="_s, (XToolkit::backingStoreType == $XConstants::NotUseful ? "NotUseful"_s : XToolkit::backingStoreType == $XConstants::WhenMapped ? "WhenMapped"_s : "Always"_s)}));
	}
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			int32_t screenCount = $XlibWrapper::ScreenCount(getDisplay());
			for (int32_t i = 0; i < screenCount; ++i) {
				if ($XlibWrapper::DoesBackingStore($XlibWrapper::ScreenOfDisplay(getDisplay(), i)) == $XConstants::NotUseful) {
					XToolkit::backingStoreType = $XConstants::NotUseful;
					if ($nc(XToolkit::backingStoreLog)->isLoggable($PlatformLogger$Level::CONFIG)) {
						$nc(XToolkit::backingStoreLog)->config($$str({"Backing store is not available on the screen "_s, $$str(i), ", backingStore=NotUseful"_s}));
					}
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

bool XToolkit::isXsunKPBehavior() {
	$init(XToolkit);
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (XToolkit::awt_IsXsunKPBehavior == 0) {
				if ($XlibWrapper::IsXsunKPBehavior(getDisplay())) {
					XToolkit::awt_IsXsunKPBehavior = XToolkit::XSUN_KP_BEHAVIOR;
				} else {
					XToolkit::awt_IsXsunKPBehavior = XToolkit::XORG_KP_BEHAVIOR;
				}
			}
			var$2 = XToolkit::awt_IsXsunKPBehavior == XToolkit::XSUN_KP_BEHAVIOR ? true : false;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void XToolkit::resetKeyboardSniffer() {
	$init(XToolkit);
	XToolkit::sunOrNotKeyboard = 0;
	XToolkit::kanaOrNotKeyboard = 0;
}

bool XToolkit::isSunKeyboard() {
	$init(XToolkit);
	if (XToolkit::sunOrNotKeyboard == 0) {
		if ($XlibWrapper::IsSunKeyboard(getDisplay())) {
			XToolkit::sunOrNotKeyboard = XToolkit::IS_SUN_KEYBOARD;
		} else {
			XToolkit::sunOrNotKeyboard = XToolkit::IS_NONSUN_KEYBOARD;
		}
	}
	return (XToolkit::sunOrNotKeyboard == XToolkit::IS_SUN_KEYBOARD);
}

bool XToolkit::isKanaKeyboard() {
	$init(XToolkit);
	if (XToolkit::kanaOrNotKeyboard == 0) {
		if ($XlibWrapper::IsKanaKeyboard(getDisplay())) {
			XToolkit::kanaOrNotKeyboard = XToolkit::IS_KANA_KEYBOARD;
		} else {
			XToolkit::kanaOrNotKeyboard = XToolkit::IS_NONKANA_KEYBOARD;
		}
	}
	return (XToolkit::kanaOrNotKeyboard == XToolkit::IS_KANA_KEYBOARD);
}

bool XToolkit::isXKBenabled() {
	$init(XToolkit);
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = XToolkit::awt_UseXKB;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool XToolkit::tryXKB() {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$var($String, name, "XKEYBOARD"_s);
			$init($XlibWrapper);
			XToolkit::awt_UseXKB = $XlibWrapper::XQueryExtension(getDisplay(), name, $XlibWrapper::larg1, $XlibWrapper::larg2, $XlibWrapper::larg3);
			if (XToolkit::awt_UseXKB) {
				XToolkit::awt_UseXKB_Calls = $XlibWrapper::XkbLibraryVersion($XlibWrapper::larg1, $XlibWrapper::larg2);
				if (XToolkit::awt_UseXKB_Calls) {
					XToolkit::awt_UseXKB_Calls = $XlibWrapper::XkbQueryExtension(getDisplay(), $XlibWrapper::larg1, $XlibWrapper::larg2, $XlibWrapper::larg3, $XlibWrapper::larg4, $XlibWrapper::larg5);
					if (XToolkit::awt_UseXKB_Calls) {
						XToolkit::awt_XKBBaseEventCode = $Native::getInt($XlibWrapper::larg2);
						$XlibWrapper::XkbSelectEvents(getDisplay(), $XConstants::XkbUseCoreKbd, $XConstants::XkbNewKeyboardNotifyMask | $XConstants::XkbMapNotifyMask, $XConstants::XkbNewKeyboardNotifyMask | $XConstants::XkbMapNotifyMask);
						$XlibWrapper::XkbSelectEventDetails(getDisplay(), $XConstants::XkbUseCoreKbd, $XConstants::XkbStateNotify, $XConstants::XkbGroupStateMask, $XConstants::XkbGroupStateMask);
						XToolkit::awt_XKBDescPtr = $XlibWrapper::XkbGetMap(getDisplay(), (($XConstants::XkbKeyTypesMask | $XConstants::XkbKeySymsMask) | $XConstants::XkbModifierMapMask) | $XConstants::XkbVirtualModsMask, $XConstants::XkbUseCoreKbd);
						$XlibWrapper::XkbSetDetectableAutoRepeat(getDisplay(), true);
					}
				}
			}
			var$2 = XToolkit::awt_UseXKB;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool XToolkit::canUseXKBCalls() {
	$init(XToolkit);
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = XToolkit::awt_UseXKB_Calls;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t XToolkit::getXKBEffectiveGroup() {
	$init(XToolkit);
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = XToolkit::awt_XKBEffectiveGroup;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t XToolkit::getXKBBaseEventCode() {
	$init(XToolkit);
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = XToolkit::awt_XKBBaseEventCode;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t XToolkit::getXKBKbdDesc() {
	$init(XToolkit);
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = XToolkit::awt_XKBDescPtr;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void XToolkit::freeXKB() {
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (XToolkit::awt_UseXKB_Calls && XToolkit::awt_XKBDescPtr != 0) {
				$XlibWrapper::XkbFreeKeyboard(XToolkit::awt_XKBDescPtr, 255, true);
				XToolkit::awt_XKBDescPtr = 0;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XToolkit::processXkbChanges($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($XkbEvent, xke, $new($XkbEvent, $nc(ev)->getPData()));
	int32_t xkb_type = $nc($(xke->get_any()))->get_xkb_type();
	switch (xkb_type) {
	case $XConstants::XkbNewKeyboardNotify:
		{
			if (XToolkit::awt_XKBDescPtr != 0) {
				freeXKB();
			}
			XToolkit::awt_XKBDescPtr = $XlibWrapper::XkbGetMap(getDisplay(), (($XConstants::XkbKeyTypesMask | $XConstants::XkbKeySymsMask) | $XConstants::XkbModifierMapMask) | $XConstants::XkbVirtualModsMask, $XConstants::XkbUseCoreKbd);
			break;
		}
	case $XConstants::XkbMapNotify:
		{
			if (XToolkit::awt_XKBDescPtr != 0) {
				$XlibWrapper::XkbGetUpdatedMap(getDisplay(), (($XConstants::XkbKeyTypesMask | $XConstants::XkbKeySymsMask) | $XConstants::XkbModifierMapMask) | $XConstants::XkbVirtualModsMask, XToolkit::awt_XKBDescPtr);
			}
			break;
		}
	case $XConstants::XkbStateNotify:
		{
			break;
		}
	default:
		{
			break;
		}
	}
}

int64_t XToolkit::getEventNumber() {
	$init(XToolkit);
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = XToolkit::eventNumber;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool XToolkit::syncNativeQueue(int64_t timeout) {
	$useLocalCurrentObjectStackCache();
	if (timeout <= 0) {
		return false;
	}
	$var($XBaseWindow, win, $XBaseWindow::getXAWTRootWindow());
	if (XToolkit::oops_waiter == nullptr) {
		$assignStatic(XToolkit::oops_waiter, $new($XToolkit$4, this));
	}
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			addEventDispatcher($nc(win)->getWindow(), XToolkit::oops_waiter);
			XToolkit::oops_updated = false;
			int64_t event_number = getEventNumber();
			XToolkit::oops_position += 5;
			if (XToolkit::oops_position > 50) {
				XToolkit::oops_position = 0;
			}
			int64_t var$3 = getDisplay();
			$XlibWrapper::XMoveWindow(var$3, $nc(win)->getWindow(), XToolkit::oops_position, 0);
			XSync();
			$nc(XToolkit::eventLog)->finer("Generated OOPS ConfigureNotify event"_s);
			$init($TimeUnit);
			int64_t end = $TimeUnit::NANOSECONDS->toMillis($System::nanoTime()) + timeout;
			while (!XToolkit::oops_updated) {
				timeout = this->timeout(end);
				if (timeout <= 0) {
					break;
				}
				try {
					awtLockWait(timeout);
				} catch ($InterruptedException& e) {
					$throwNew($RuntimeException, static_cast<$Throwable*>(e));
				}
			}
			var$2 = getEventNumber() - event_number > 1;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			removeEventDispatcher($nc(win)->getWindow(), XToolkit::oops_waiter);
			$nc(XToolkit::eventLog)->finer("Exiting syncNativeQueue"_s);
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void XToolkit::grab($Window* w) {
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w));
	if (peer != nullptr) {
		$nc(($cast($XWindowPeer, peer)))->setGrab(true);
	}
}

void XToolkit::ungrab($Window* w) {
	$useLocalCurrentObjectStackCache();
	$var($Object, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w));
	if (peer != nullptr) {
		$nc(($cast($XWindowPeer, peer)))->setGrab(false);
	}
}

bool XToolkit::isDesktopSupported() {
	return $XDesktopPeer::isDesktopSupported();
}

$DesktopPeer* XToolkit::createDesktopPeer($Desktop* target) {
	return $new($XDesktopPeer);
}

bool XToolkit::isTaskbarSupported() {
	return $XTaskbarPeer::isTaskbarSupported();
}

$TaskbarPeer* XToolkit::createTaskbarPeer($Taskbar* target) {
	return $new($XTaskbarPeer);
}

bool XToolkit::areExtraMouseButtonsEnabled() {
	return XToolkit::areExtraMouseButtonsEnabled$;
}

bool XToolkit::isWindowOpacitySupported() {
	$useLocalCurrentObjectStackCache();
	$var($XNETProtocol, net_protocol, $nc($($XWM::getWM()))->getNETProtocol());
	if (net_protocol == nullptr) {
		return false;
	}
	return $nc(net_protocol)->doOpacityProtocol();
}

bool XToolkit::isWindowShapingSupported() {
	return $XlibUtil::isShapingSupported();
}

bool XToolkit::isWindowTranslucencySupported() {
	return true;
}

bool XToolkit::isTranslucencyCapable($GraphicsConfiguration* gc) {
	if (!($instanceOf($X11GraphicsConfig, gc))) {
		return false;
	}
	return $nc(($cast($X11GraphicsConfig, gc)))->isTranslucencyCapable();
}

bool XToolkit::getSunAwtDisableGrab() {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "sun.awt.disablegrab"_s)))))))->booleanValue();
}

void XToolkit::lambda$initializeDesktopProperties$7($PropertyChangeEvent* evt) {
	$init(XToolkit);
	$nc(XToolkit::localEnv)->displayChanged();
}

void XToolkit::lambda$dumpPeers$6($Long* k, $Collection* v) {
	$init(XToolkit);
	$nc(XToolkit::log)->fine($$str({k, "->"_s, v}));
}

void XToolkit::lambda$dumpPeers$5(Object$* k, Object$* v) {
	$init(XToolkit);
	$nc(XToolkit::log)->fine($$str({k, "->"_s, v}));
}

void XToolkit::lambda$dumpPeers$4($Long* k, $XBaseWindow* v) {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	$nc(XToolkit::log)->fine($$str({k, "->"_s, v}));
	if ($instanceOf($XComponentPeer, v)) {
		$var($Component, target, $cast($Component, $nc(($cast($XComponentPeer, v)))->getTarget()));
		$nc(XToolkit::log)->fine($$str({"\ttarget: "_s, target}));
	}
}

$Thread* XToolkit::lambda$new$3() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, "AWT-XAWT"_s);
	$var($Thread, thread, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), this, name, 0, false));
	thread->setContextClassLoader(nullptr);
	thread->setPriority($Thread::NORM_PRIORITY + 1);
	thread->setDaemon(true);
	return thread;
}

$Void* XToolkit::lambda$init$2() {
	$useLocalCurrentObjectStackCache();
	$var($Runnable, r, static_cast<$Runnable*>($new(XToolkit$$Lambda$lambda$init$1$7, this)));
	$var($String, name, "XToolkt-Shutdown-Thread"_s);
	$var($Thread, shutdownThread, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), r, name, 0, false));
	shutdownThread->setContextClassLoader(nullptr);
	$nc($($Runtime::getRuntime()))->addShutdownHook(shutdownThread);
	return nullptr;
}

void XToolkit::lambda$init$1() {
	$var($XSystemTrayPeer, peer, $XSystemTrayPeer::getPeerInstance());
	if (peer != nullptr) {
		peer->dispose();
	}
	if (this->xs != nullptr) {
		$nc(($cast($XAWTXSettings, this->xs)))->dispose();
	}
	freeXKB();
	$init($PlatformLogger$Level);
	if ($nc(XToolkit::log)->isLoggable($PlatformLogger$Level::FINE)) {
		dumpPeers();
	}
}

$Void* XToolkit::lambda$init$0() {
	$init(XToolkit);
	$useLocalCurrentObjectStackCache();
	$var($String, extraButtons, "sun.awt.enableExtraMouseButtons"_s);
	XToolkit::areExtraMouseButtonsEnabled$ = $Boolean::parseBoolean($($System::getProperty(extraButtons, "true"_s)));
	$System::setProperty(extraButtons, $$str({""_s, $$str(XToolkit::areExtraMouseButtonsEnabled$)}));
	return nullptr;
}

void clinit$XToolkit($Class* class$) {
	$assignStatic(XToolkit::prefix, "DnD.Cursor."_s);
	$assignStatic(XToolkit::postfix, ".32x32"_s);
	$assignStatic(XToolkit::dndPrefix, "DnD."_s);
	$assignStatic(XToolkit::log, $PlatformLogger::getLogger("sun.awt.X11.XToolkit"_s));
	$assignStatic(XToolkit::eventLog, $PlatformLogger::getLogger("sun.awt.X11.event.XToolkit"_s));
	$assignStatic(XToolkit::timeoutTaskLog, $PlatformLogger::getLogger("sun.awt.X11.timeoutTask.XToolkit"_s));
	$assignStatic(XToolkit::keyEventLog, $PlatformLogger::getLogger("sun.awt.X11.kye.XToolkit"_s));
	$assignStatic(XToolkit::backingStoreLog, $PlatformLogger::getLogger("sun.awt.X11.backingStore.XToolkit"_s));
	$assignStatic(XToolkit::awtAppClassName, nullptr);
	XToolkit::dynamicLayoutSetting = false;
	XToolkit::areExtraMouseButtonsEnabled$ = true;
	$assignStatic(XToolkit::winMap, $new($TreeMap));
	$assignStatic(XToolkit::specialPeerMap, $new($HashMap));
	$assignStatic(XToolkit::winToDispatcher, $new($HashMap));
	XToolkit::maxWindowWidthInPixels = -1;
	XToolkit::maxWindowHeightInPixels = -1;
	{
		XToolkit::initSecurityWarning();
		if ($GraphicsEnvironment::isHeadless()) {
			$assignStatic(XToolkit::localEnv, nullptr);
			$assignStatic(XToolkit::device, nullptr);
			XToolkit::display = 0;
		} else {
			$assignStatic(XToolkit::localEnv, $cast($X11GraphicsEnvironment, $GraphicsEnvironment::getLocalGraphicsEnvironment()));
			$assignStatic(XToolkit::device, $cast($X11GraphicsDevice, $nc(XToolkit::localEnv)->getDefaultScreenDevice()));
			XToolkit::display = $nc(XToolkit::device)->getDisplay();
			XToolkit::setupModifierMap();
			XToolkit::initIDs();
			XToolkit::setBackingStoreType();
		}
	}
	$assignStatic(XToolkit::displayChangedHandler, $new($XToolkit$2));
	{
		$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
		if ($instanceOf($SunGraphicsEnvironment, ge)) {
			$nc(($cast($SunGraphicsEnvironment, ge)))->addDisplayChangedListener(XToolkit::displayChangedHandler);
		}
	}
	$assignStatic(XToolkit::sunAwtDisableGtkFileDialogs, nullptr);
	$assignStatic(XToolkit::timeFetcher, $new($XToolkit$3));
	XToolkit::awt_IsXsunKPBehavior = 0;
	XToolkit::awt_UseXKB = false;
	XToolkit::awt_UseXKB_Calls = false;
	XToolkit::awt_XKBBaseEventCode = 0;
	XToolkit::awt_XKBEffectiveGroup = 0;
	XToolkit::awt_XKBDescPtr = 0;
	XToolkit::sunOrNotKeyboard = 0;
	XToolkit::kanaOrNotKeyboard = 0;
	XToolkit::oops_position = 0;
}

XToolkit::XToolkit() {
}

$Class* XToolkit::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(XToolkit$$Lambda$lambda$init$0::classInfo$.name)) {
			return XToolkit$$Lambda$lambda$init$0::load$(name, initialize);
		}
		if (name->equals(XToolkit$$Lambda$lambda$init$2$1::classInfo$.name)) {
			return XToolkit$$Lambda$lambda$init$2$1::load$(name, initialize);
		}
		if (name->equals(XToolkit$$Lambda$lambda$new$3$2::classInfo$.name)) {
			return XToolkit$$Lambda$lambda$new$3$2::load$(name, initialize);
		}
		if (name->equals(XToolkit$$Lambda$lambda$dumpPeers$4$3::classInfo$.name)) {
			return XToolkit$$Lambda$lambda$dumpPeers$4$3::load$(name, initialize);
		}
		if (name->equals(XToolkit$$Lambda$lambda$dumpPeers$5$4::classInfo$.name)) {
			return XToolkit$$Lambda$lambda$dumpPeers$5$4::load$(name, initialize);
		}
		if (name->equals(XToolkit$$Lambda$lambda$dumpPeers$6$5::classInfo$.name)) {
			return XToolkit$$Lambda$lambda$dumpPeers$6$5::load$(name, initialize);
		}
		if (name->equals(XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6::classInfo$.name)) {
			return XToolkit$$Lambda$lambda$initializeDesktopProperties$7$6::load$(name, initialize);
		}
		if (name->equals(XToolkit$$Lambda$lambda$init$1$7::classInfo$.name)) {
			return XToolkit$$Lambda$lambda$init$1$7::load$(name, initialize);
		}
	}
	$loadClass(XToolkit, name, initialize, &_XToolkit_ClassInfo_, clinit$XToolkit, allocate$XToolkit);
	return class$;
}

$Class* XToolkit::class$ = nullptr;

		} // X11
	} // awt
} // sun