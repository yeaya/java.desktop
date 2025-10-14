#include <java/awt/Window.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Composite.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Event.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FocusManager.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice$WindowTranslucency.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/SplashScreen.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window$1.h>
#include <java/awt/Window$1DisposeAction.h>
#include <java/awt/Window$AccessibleAWTWindow.h>
#include <java/awt/Window$Type.h>
#include <java/awt/Window$WindowDisposerRecord.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowFocusListener.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/event/WindowStateListener.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/im/InputContext.h>
#include <java/awt/image/BufferStrategy.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OptionalDataException.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/EventListener.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/RootPaneContainer.h>
#include <sun/awt/AWTAccessor$WindowAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/ComponentFactory.h>
#include <sun/awt/DebugSettings.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/util/IdentityArrayList.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTIVATION
#undef COMPONENT_RESIZED
#undef DEFAULT_CURSOR
#undef FINER
#undef KEY_PRESSED
#undef NORMAL
#undef NO_EXCLUDE
#undef OPENED
#undef PERPIXEL_TRANSPARENT
#undef RIGHT_ALIGNMENT
#undef SET_BOUNDS
#undef SET_CLIENT_SIZE
#undef SET_LOCATION
#undef SET_WINDOW_ALWAYS_ON_TOP_PERMISSION
#undef SRC
#undef TOOLKIT_EXCLUDE
#undef TOOLKIT_MODALITY_PERMISSION
#undef TOPLEVEL_WINDOW_PERMISSION
#undef TOP_ALIGNMENT
#undef TRANSLUCENT
#undef TRAVERSAL_KEY_LENGTH
#undef TYPE_RASTER_SCREEN
#undef VK_F1
#undef WINDOW_ACTIVATED
#undef WINDOW_CLOSED
#undef WINDOW_CLOSING
#undef WINDOW_DEACTIVATED
#undef WINDOW_DEICONIFIED
#undef WINDOW_EVENT_MASK
#undef WINDOW_FOCUS_EVENT_MASK
#undef WINDOW_GAINED_FOCUS
#undef WINDOW_ICONIFIED
#undef WINDOW_LOST_FOCUS
#undef WINDOW_OPENED
#undef WINDOW_STATE_CHANGED
#undef WINDOW_STATE_EVENT_MASK

using $WindowArray = $Array<::java::awt::Window>;
using $WindowFocusListenerArray = $Array<::java::awt::event::WindowFocusListener>;
using $WindowListenerArray = $Array<::java::awt::event::WindowListener>;
using $WindowStateListenerArray = $Array<::java::awt::event::WindowStateListener>;
using $WeakReferenceArray = $Array<::java::lang::ref::WeakReference>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $SetArray = $Array<::java::util::Set>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $AWTPermission = ::java::awt::AWTPermission;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $BorderLayout = ::java::awt::BorderLayout;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Composite = ::java::awt::Composite;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Cursor = ::java::awt::Cursor;
using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $Dimension = ::java::awt::Dimension;
using $Event = ::java::awt::Event;
using $EventQueue = ::java::awt::EventQueue;
using $FocusManager = ::java::awt::FocusManager;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsDevice$WindowTranslucency = ::java::awt::GraphicsDevice$WindowTranslucency;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $SplashScreen = ::java::awt::SplashScreen;
using $Toolkit = ::java::awt::Toolkit;
using $Window$1 = ::java::awt::Window$1;
using $Window$1DisposeAction = ::java::awt::Window$1DisposeAction;
using $Window$AccessibleAWTWindow = ::java::awt::Window$AccessibleAWTWindow;
using $Window$Type = ::java::awt::Window$Type;
using $Window$WindowDisposerRecord = ::java::awt::Window$WindowDisposerRecord;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowFocusListener = ::java::awt::event::WindowFocusListener;
using $WindowListener = ::java::awt::event::WindowListener;
using $WindowStateListener = ::java::awt::event::WindowStateListener;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $InputContext = ::java::awt::im::InputContext;
using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OptionalDataException = ::java::io::OptionalDataException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $Runnable = ::java::lang::Runnable;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $EventListener = ::java::util::EventListener;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JRootPane = ::javax::swing::JRootPane;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$WindowAccessor = ::sun::awt::AWTAccessor$WindowAccessor;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $AppContext = ::sun::awt::AppContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;
using $DebugSettings = ::sun::awt::DebugSettings;
using $SunToolkit = ::sun::awt::SunToolkit;
using $IdentityArrayList = ::sun::awt::util::IdentityArrayList;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;
using $Region = ::sun::java2d::pipe::Region;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$CompoundAttribute _Window_MethodAnnotations_applyResourceBundle17[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Window_MethodAnnotations_applyResourceBundle18[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Window_MethodAnnotations_hide70[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Window_MethodAnnotations_postEvent95[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Window_MethodAnnotations_reshape111[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Window_MethodAnnotations_show141[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Window_FieldInfo_[] = {
	{"warningString", "Ljava/lang/String;", nullptr, 0, $field(Window, warningString)},
	{"icons", "Ljava/util/List;", "Ljava/util/List<Ljava/awt/Image;>;", $TRANSIENT, $field(Window, icons)},
	{"temporaryLostComponent", "Ljava/awt/Component;", nullptr, $PRIVATE | $TRANSIENT, $field(Window, temporaryLostComponent)},
	{"systemSyncLWRequests", "Z", nullptr, $STATIC, $staticField(Window, systemSyncLWRequests)},
	{"syncLWRequests", "Z", nullptr, 0, $field(Window, syncLWRequests)},
	{"beforeFirstShow", "Z", nullptr, $TRANSIENT, $field(Window, beforeFirstShow)},
	{"disposing", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(Window, disposing)},
	{"disposerRecord", "Ljava/awt/Window$WindowDisposerRecord;", nullptr, $TRANSIENT, $field(Window, disposerRecord)},
	{"OPENED", "I", nullptr, $STATIC | $FINAL, $constField(Window, OPENED)},
	{"state", "I", nullptr, 0, $field(Window, state)},
	{"alwaysOnTop", "Z", nullptr, $PRIVATE, $field(Window, alwaysOnTop)},
	{"allWindows", "Lsun/awt/util/IdentityArrayList;", "Lsun/awt/util/IdentityArrayList<Ljava/awt/Window;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Window, allWindows)},
	{"ownedWindowList", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/ref/WeakReference<Ljava/awt/Window;>;>;", $TRANSIENT, $field(Window, ownedWindowList)},
	{"weakThis", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/Window;>;", $PRIVATE | $TRANSIENT, $field(Window, weakThis)},
	{"showWithParent", "Z", nullptr, $TRANSIENT, $field(Window, showWithParent)},
	{"modalBlocker", "Ljava/awt/Dialog;", nullptr, $TRANSIENT, $field(Window, modalBlocker)},
	{"modalExclusionType", "Ljava/awt/Dialog$ModalExclusionType;", nullptr, 0, $field(Window, modalExclusionType)},
	{"windowListener", "Ljava/awt/event/WindowListener;", nullptr, $TRANSIENT, $field(Window, windowListener)},
	{"windowStateListener", "Ljava/awt/event/WindowStateListener;", nullptr, $TRANSIENT, $field(Window, windowStateListener)},
	{"windowFocusListener", "Ljava/awt/event/WindowFocusListener;", nullptr, $TRANSIENT, $field(Window, windowFocusListener)},
	{"inputContext", "Ljava/awt/im/InputContext;", nullptr, $TRANSIENT, $field(Window, inputContext)},
	{"inputContextLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(Window, inputContextLock)},
	{"focusMgr", "Ljava/awt/FocusManager;", nullptr, $PRIVATE, $field(Window, focusMgr)},
	{"focusableWindowState", "Z", nullptr, $PRIVATE, $field(Window, focusableWindowState)},
	{"autoRequestFocus", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Window, autoRequestFocus)},
	{"isInShow", "Z", nullptr, $TRANSIENT, $field(Window, isInShow)},
	{"opacity", "F", nullptr, $PRIVATE | $VOLATILE, $field(Window, opacity)},
	{"shape", "Ljava/awt/Shape;", nullptr, $PRIVATE, $field(Window, shape)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Window, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(Window, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Window, serialVersionUID)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Window, log)},
	{"locationByPlatformProp", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Window, locationByPlatformProp)},
	{"isTrayIconWindow", "Z", nullptr, $TRANSIENT, $field(Window, isTrayIconWindow)},
	{"securityWarningWidth", "I", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(Window, securityWarningWidth)},
	{"securityWarningHeight", "I", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(Window, securityWarningHeight)},
	{"anchor", "Ljava/lang/Object;", nullptr, $TRANSIENT, $field(Window, anchor)},
	{"beforeFirstWindowShown", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Window, beforeFirstWindowShown)},
	{"type", "Ljava/awt/Window$Type;", nullptr, $PRIVATE, $field(Window, type)},
	{"windowSerializedDataVersion", "I", nullptr, $PRIVATE, $field(Window, windowSerializedDataVersion)},
	{"locationByPlatform", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Window, locationByPlatform)},
	{}
};

$MethodInfo _Window_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, 0, $method(static_cast<void(Window::*)($GraphicsConfiguration*)>(&Window::init$))},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Window::*)()>(&Window::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/awt/Frame;)V", nullptr, $PUBLIC, $method(static_cast<void(Window::*)($Frame*)>(&Window::init$))},
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(Window::*)(Window*)>(&Window::init$))},
	{"<init>", "(Ljava/awt/Window;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(Window::*)(Window*,$GraphicsConfiguration*)>(&Window::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"addOwnedWindow", "(Ljava/lang/ref/WeakReference;)V", "(Ljava/lang/ref/WeakReference<Ljava/awt/Window;>;)V", 0},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"addToWindowList", "()V", nullptr, $PRIVATE, $method(static_cast<void(Window::*)()>(&Window::addToWindowList))},
	{"addWindowFocusListener", "(Ljava/awt/event/WindowFocusListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addWindowListener", "(Ljava/awt/event/WindowListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addWindowStateListener", "(Ljava/awt/event/WindowStateListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"adjustDescendantsOnParent", "(I)V", nullptr, 0},
	{"adjustListeningChildrenOnParent", "(JI)V", nullptr, 0},
	{"applyCompoundShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $FINAL},
	{"applyCurrentShape", "()V", nullptr, $FINAL},
	{"applyResourceBundle", "(Ljava/util/ResourceBundle;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Window_MethodAnnotations_applyResourceBundle17},
	{"applyResourceBundle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Window_MethodAnnotations_applyResourceBundle18},
	{"calculateSecurityWarningPosition", "(DDDD)Ljava/awt/geom/Point2D;", nullptr, $PRIVATE, $method(static_cast<$Point2D*(Window::*)(double,double,double,double)>(&Window::calculateSecurityWarningPosition))},
	{"canContainFocusOwner", "(Ljava/awt/Component;)Z", nullptr, 0},
	{"clearMostRecentFocusOwnerOnHide", "()V", nullptr, $FINAL},
	{"closeSplashScreen", "()V", nullptr, $FINAL, $method(static_cast<void(Window::*)()>(&Window::closeSplashScreen))},
	{"connectOwnedWindow", "(Ljava/awt/Window;)V", nullptr, 0},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"createBufferStrategy", "(I)V", nullptr, $PUBLIC},
	{"createBufferStrategy", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"deliverMouseWheelToAncestor", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, 0},
	{"deserializeResources", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Window::*)($ObjectInputStream*)>(&Window::deserializeResources)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"dispatchEventImpl", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"dispatchMouseWheelToAncestor", "(Ljava/awt/event/MouseWheelEvent;)Z", nullptr, 0},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"disposeImpl", "()V", nullptr, 0},
	{"doDispose", "()V", nullptr, 0},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getAllUnblockedWindows", "()Lsun/awt/util/IdentityArrayList;", "()Lsun/awt/util/IdentityArrayList<Ljava/awt/Window;>;", $STATIC, $method(static_cast<$IdentityArrayList*(*)()>(&Window::getAllUnblockedWindows))},
	{"getAllWindows", "()Lsun/awt/util/IdentityArrayList;", "()Lsun/awt/util/IdentityArrayList<Ljava/awt/Window;>;", $STATIC, $method(static_cast<$IdentityArrayList*(*)()>(&Window::getAllWindows))},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBufferStrategy", "()Ljava/awt/image/BufferStrategy;", nullptr, $PUBLIC},
	{"getContainer", "()Ljava/awt/Container;", nullptr, $FINAL},
	{"getDocumentRoot", "()Ljava/awt/Window;", nullptr, 0},
	{"getFocusCycleRootAncestor", "()Ljava/awt/Container;", nullptr, $PUBLIC | $FINAL},
	{"getFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getFocusTraversalKeys", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $PUBLIC},
	{"getFocusableWindowState", "()Z", nullptr, $PUBLIC},
	{"getIconImages", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/Image;>;", $PUBLIC},
	{"getInputContext", "()Ljava/awt/im/InputContext;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getLocationOnWindow", "()Ljava/awt/Point;", nullptr, $FINAL},
	{"getModalBlocker", "()Ljava/awt/Dialog;", nullptr, 0},
	{"getModalExclusionType", "()Ljava/awt/Dialog$ModalExclusionType;", nullptr, $PUBLIC},
	{"getMostRecentFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getOpacity", "()F", nullptr, $PUBLIC},
	{"getOwnedWindows", "()[Ljava/awt/Window;", nullptr, $PUBLIC},
	{"getOwnedWindows_NoClientCode", "()[Ljava/awt/Window;", nullptr, $FINAL, $method(static_cast<$WindowArray*(Window::*)()>(&Window::getOwnedWindows_NoClientCode))},
	{"getOwner", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{"getOwner_NoClientCode", "()Ljava/awt/Window;", nullptr, $FINAL, $method(static_cast<Window*(Window::*)()>(&Window::getOwner_NoClientCode))},
	{"getOwnerlessWindows", "()[Ljava/awt/Window;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WindowArray*(*)()>(&Window::getOwnerlessWindows))},
	{"getShape", "()Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getTemporaryLostComponent", "()Ljava/awt/Component;", nullptr, 0},
	{"getToolkit", "()Ljava/awt/Toolkit;", nullptr, $PUBLIC},
	{"getType", "()Ljava/awt/Window$Type;", nullptr, $PUBLIC},
	{"getWarningString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(Window::*)()>(&Window::getWarningString))},
	{"getWindowFocusListeners", "()[Ljava/awt/event/WindowFocusListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getWindowListeners", "()[Ljava/awt/event/WindowListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getWindowStateListeners", "()[Ljava/awt/event/WindowStateListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getWindows", "(Lsun/awt/AppContext;)[Ljava/awt/Window;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$WindowArray*(*)($AppContext*)>(&Window::getWindows))},
	{"getWindows", "()[Ljava/awt/Window;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WindowArray*(*)()>(&Window::getWindows))},
	{"hide", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Window_MethodAnnotations_hide70},
	{"init", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, $PRIVATE, $method(static_cast<void(Window::*)($GraphicsConfiguration*)>(&Window::init))},
	{"initDeserializedWindow", "()V", nullptr, $PRIVATE, $method(static_cast<void(Window::*)()>(&Window::initDeserializedWindow))},
	{"initGC", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE, $method(static_cast<$GraphicsConfiguration*(Window::*)($GraphicsConfiguration*)>(&Window::initGC))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Window::initIDs))},
	{"isActive", "()Z", nullptr, $PUBLIC},
	{"isAlwaysOnTop", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Window::*)()>(&Window::isAlwaysOnTop))},
	{"isAlwaysOnTopSupported", "()Z", nullptr, $PUBLIC},
	{"isAutoRequestFocus", "()Z", nullptr, $PUBLIC},
	{"isDisposing", "()Z", nullptr, 0},
	{"isFocusCycleRoot", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isFocusableWindow", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Window::*)()>(&Window::isFocusableWindow))},
	{"isFocused", "()Z", nullptr, $PUBLIC},
	{"isLocationByPlatform", "()Z", nullptr, $PUBLIC},
	{"isModalBlocked", "()Z", nullptr, 0},
	{"isModalExcluded", "(Ljava/awt/Dialog$ModalExclusionType;)Z", nullptr, 0},
	{"isOpaque", "()Z", nullptr, $PUBLIC},
	{"isRecursivelyVisible", "()Z", nullptr, 0},
	{"isShowing", "()Z", nullptr, $PUBLIC},
	{"isValidateRoot", "()Z", nullptr, $PUBLIC},
	{"limit", "(DDD)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)(double,double,double)>(&Window::limit))},
	{"mixOnReshaping", "()V", nullptr, $FINAL},
	{"ownedInit", "(Ljava/awt/Window;)V", nullptr, $PRIVATE, $method(static_cast<void(Window::*)(Window*)>(&Window::ownedInit))},
	{"pack", "()V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"postEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Window_MethodAnnotations_postEvent95},
	{"postProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"postWindowEvent", "(I)V", nullptr, $SYNCHRONIZED},
	{"preProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"processWindowEvent", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PROTECTED},
	{"processWindowFocusEvent", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PROTECTED},
	{"processWindowStateEvent", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Window::*)($ObjectInputStream*)>(&Window::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"removeFromWindowList", "(Lsun/awt/AppContext;Ljava/lang/ref/WeakReference;)V", "(Lsun/awt/AppContext;Ljava/lang/ref/WeakReference<Ljava/awt/Window;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($AppContext*,$WeakReference*)>(&Window::removeFromWindowList))},
	{"removeFromWindowList", "()V", nullptr, $PRIVATE, $method(static_cast<void(Window::*)()>(&Window::removeFromWindowList))},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"removeOwnedWindow", "(Ljava/lang/ref/WeakReference;)V", "(Ljava/lang/ref/WeakReference<Ljava/awt/Window;>;)V", 0},
	{"removeWindowFocusListener", "(Ljava/awt/event/WindowFocusListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeWindowListener", "(Ljava/awt/event/WindowListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeWindowStateListener", "(Ljava/awt/event/WindowStateListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"reshape", "(IIII)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Window_MethodAnnotations_reshape111},
	{"setAlwaysOnTop", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Window::*)(bool)>(&Window::setAlwaysOnTop)), "java.lang.SecurityException"},
	{"setAutoRequestFocus", "(Z)V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setClientSize", "(II)V", nullptr, 0},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC},
	{"setFocusCycleRoot", "(Z)V", nullptr, $PUBLIC | $FINAL},
	{"setFocusableWindowState", "(Z)V", nullptr, $PUBLIC},
	{"setGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, 0},
	{"setIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setIconImages", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljava/awt/Image;>;)V", $PUBLIC | $SYNCHRONIZED},
	{"setLayersOpaque", "(Ljava/awt/Component;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*,bool)>(&Window::setLayersOpaque))},
	{"setLocation", "(II)V", nullptr, $PUBLIC},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"setLocationByPlatform", "(Z)V", nullptr, $PUBLIC},
	{"setLocationRelativeTo", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setMinimumSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setModalBlocked", "(Ljava/awt/Dialog;ZZ)V", nullptr, 0},
	{"setModalExclusionType", "(Ljava/awt/Dialog$ModalExclusionType;)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setOwnedWindowsAlwaysOnTop", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(Window::*)(bool)>(&Window::setOwnedWindowsAlwaysOnTop))},
	{"setShape", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setSize", "(II)V", nullptr, $PUBLIC},
	{"setTemporaryLostComponent", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, 0},
	{"setType", "(Ljava/awt/Window$Type;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setWarningString", "()V", nullptr, $PRIVATE, $method(static_cast<void(Window::*)()>(&Window::setWarningString))},
	{"show", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Window_MethodAnnotations_show141},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"toBack_NoClientCode", "()V", nullptr, $FINAL, $method(static_cast<void(Window::*)()>(&Window::toBack_NoClientCode))},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"toFront_NoClientCode", "()V", nullptr, $FINAL, $method(static_cast<void(Window::*)()>(&Window::toFront_NoClientCode))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateChildFocusableWindowState", "(Ljava/awt/Window;)V", nullptr, $STATIC, $method(static_cast<void(*)(Window*)>(&Window::updateChildFocusableWindowState))},
	{"updateChildrenBlocking", "()V", nullptr, 0},
	{"updateWindow", "()V", nullptr, $PRIVATE, $method(static_cast<void(Window::*)()>(&Window::updateWindow))},
	{"updateZOrder", "()V", nullptr, 0},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Window::*)($ObjectOutputStream*)>(&Window::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 78

$InnerClassInfo _Window_InnerClassesInfo_[] = {
	{"java.awt.Window$AccessibleAWTWindow", "java.awt.Window", "AccessibleAWTWindow", $PROTECTED},
	{"java.awt.Window$WindowDisposerRecord", "java.awt.Window", "WindowDisposerRecord", $STATIC},
	{"java.awt.Window$Type", "java.awt.Window", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.awt.Window$1", nullptr, nullptr, 0},
	{"java.awt.Window$1DisposeAction", nullptr, "DisposeAction", 0},
	{}
};

$ClassInfo _Window_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Window",
	"java.awt.Container",
	"javax.accessibility.Accessible",
	_Window_FieldInfo_,
	_Window_MethodInfo_,
	nullptr,
	nullptr,
	_Window_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Window$AccessibleAWTWindow,java.awt.Window$WindowDisposerRecord,java.awt.Window$Type,java.awt.Window$1,java.awt.Window$1DisposeAction"
};

$Object* allocate$Window($Class* clazz) {
	return $of($alloc(Window));
}

$String* Window::toString() {
	 return this->$Container::toString();
}

int32_t Window::hashCode() {
	 return this->$Container::hashCode();
}

bool Window::equals(Object$* arg0) {
	 return this->$Container::equals(arg0);
}

$Object* Window::clone() {
	 return this->$Container::clone();
}

void Window::finalize() {
	this->$Container::finalize();
}

bool Window::systemSyncLWRequests = false;

$IdentityArrayList* Window::allWindows = nullptr;
$String* Window::base = nullptr;
int32_t Window::nameCounter = 0;
$PlatformLogger* Window::log = nullptr;
bool Window::locationByPlatformProp = false;
$AtomicBoolean* Window::beforeFirstWindowShown = nullptr;

void Window::initIDs() {
	$init(Window);
	$prepareNativeStatic(Window, initIDs, void);
	$invokeNativeStatic(Window, initIDs);
	$finishNativeStatic();
}

void Window::init$($GraphicsConfiguration* gc) {
	$Container::init$();
	this->syncLWRequests = false;
	this->beforeFirstShow = true;
	this->disposing = false;
	$set(this, disposerRecord, nullptr);
	$set(this, ownedWindowList, $new($Vector));
	$set(this, inputContextLock, $new($Object));
	this->focusableWindowState = true;
	this->autoRequestFocus = true;
	this->isInShow = false;
	this->opacity = 1.0f;
	$set(this, shape, nullptr);
	this->isTrayIconWindow = false;
	this->securityWarningWidth = 0;
	this->securityWarningHeight = 0;
	$set(this, anchor, $new($Object));
	$init($Window$Type);
	$set(this, type, $Window$Type::NORMAL);
	this->windowSerializedDataVersion = 2;
	this->locationByPlatform = Window::locationByPlatformProp;
	init(gc);
}

$GraphicsConfiguration* Window::initGC($GraphicsConfiguration* gc$renamed) {
	$var($GraphicsConfiguration, gc, gc$renamed);
	$GraphicsEnvironment::checkHeadless();
	if (gc == nullptr) {
		$assign(gc, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	}
	setGraphicsConfiguration(gc);
	return gc;
}

void Window::init($GraphicsConfiguration* gc$renamed) {
	$var($GraphicsConfiguration, gc, gc$renamed);
	$GraphicsEnvironment::checkHeadless();
	this->syncLWRequests = Window::systemSyncLWRequests;
	$set(this, weakThis, $new($WeakReference, this));
	addToWindowList();
	setWarningString();
	$set(this, cursor, $Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR));
	this->visible = false;
	$assign(gc, initGC(gc));
	if ($nc($($nc(gc)->getDevice()))->getType() != $GraphicsDevice::TYPE_RASTER_SCREEN) {
		$throwNew($IllegalArgumentException, "not a screen device"_s);
	}
	setLayout($$new($BorderLayout));
	$var($Rectangle, screenBounds, $nc(gc)->getBounds());
	$var($Insets, screenInsets, $nc($(getToolkit()))->getScreenInsets(gc));
	int32_t x = getX() + $nc(screenBounds)->x + $nc(screenInsets)->left;
	int32_t y = getY() + screenBounds->y + screenInsets->top;
	if (x != this->x || y != this->y) {
		setLocation(x, y);
		setLocationByPlatform(Window::locationByPlatformProp);
	}
	$init($Dialog$ModalExclusionType);
	$set(this, modalExclusionType, $Dialog$ModalExclusionType::NO_EXCLUDE);
	$set(this, disposerRecord, $new($Window$WindowDisposerRecord, this->appContext, this));
	$Disposer::addRecord(this->anchor, this->disposerRecord);
	$SunToolkit::checkAndSetPolicy(this);
}

void Window::init$() {
	$Container::init$();
	this->syncLWRequests = false;
	this->beforeFirstShow = true;
	this->disposing = false;
	$set(this, disposerRecord, nullptr);
	$set(this, ownedWindowList, $new($Vector));
	$set(this, inputContextLock, $new($Object));
	this->focusableWindowState = true;
	this->autoRequestFocus = true;
	this->isInShow = false;
	this->opacity = 1.0f;
	$set(this, shape, nullptr);
	this->isTrayIconWindow = false;
	this->securityWarningWidth = 0;
	this->securityWarningHeight = 0;
	$set(this, anchor, $new($Object));
	$init($Window$Type);
	$set(this, type, $Window$Type::NORMAL);
	this->windowSerializedDataVersion = 2;
	this->locationByPlatform = Window::locationByPlatformProp;
	$GraphicsEnvironment::checkHeadless();
	init(($GraphicsConfiguration*)nullptr);
}

void Window::init$($Frame* owner) {
	Window::init$(owner == nullptr ? ($GraphicsConfiguration*)nullptr : $($nc(owner)->getGraphicsConfiguration()));
	ownedInit(owner);
}

void Window::init$(Window* owner) {
	Window::init$(owner == nullptr ? ($GraphicsConfiguration*)nullptr : $($nc(owner)->getGraphicsConfiguration()));
	ownedInit(owner);
}

void Window::init$(Window* owner, $GraphicsConfiguration* gc) {
	Window::init$(gc);
	ownedInit(owner);
}

void Window::ownedInit(Window* owner) {
	$set(this, parent, owner);
	if (owner != nullptr) {
		owner->addOwnedWindow(this->weakThis);
		if (owner->isAlwaysOnTop()) {
			try {
				setAlwaysOnTop(true);
			} catch ($SecurityException&) {
				$catch();
			}
		}
	}
	$nc(this->disposerRecord)->updateOwner();
}

$String* Window::constructComponentName() {
	$synchronized(Window::class$) {
		$var($String, var$0, Window::base);
		return $concat(var$0, $$str(Window::nameCounter++));
	}
}

$List* Window::getIconImages() {
	$var($List, icons, this->icons);
	if (icons == nullptr || $nc(icons)->size() == 0) {
		return $new($ArrayList);
	}
	return $new($ArrayList, static_cast<$Collection*>(icons));
}

void Window::setIconImages($List* icons) {
	$synchronized(this) {
		$set(this, icons, (icons == nullptr) ? static_cast<$List*>($new($ArrayList)) : static_cast<$List*>($new($ArrayList, static_cast<$Collection*>(icons))));
		$var($WindowPeer, peer, $cast($WindowPeer, this->peer));
		if (peer != nullptr) {
			peer->updateIconImages();
		}
		firePropertyChange("iconImage"_s, ($Object*)nullptr, ($Object*)nullptr);
	}
}

void Window::setIconImage($Image* image) {
	$var($ArrayList, imageList, $new($ArrayList));
	if (image != nullptr) {
		imageList->add(image);
	}
	setIconImages(imageList);
}

void Window::addNotify() {
	$synchronized(getTreeLock()) {
		$var($Container, parent, this->parent);
		if (parent != nullptr && parent->peer == nullptr) {
			parent->addNotify();
		}
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createWindow(this));
		}
		$synchronized(Window::allWindows) {
			$nc(Window::allWindows)->add(this);
		}
		$Container::addNotify();
	}
}

void Window::removeNotify() {
	$synchronized(getTreeLock()) {
		$synchronized(Window::allWindows) {
			$nc(Window::allWindows)->remove($of(this));
		}
		$Container::removeNotify();
	}
}

void Window::pack() {
	$var($Container, parent, this->parent);
	if (parent != nullptr && parent->peer == nullptr) {
		parent->addNotify();
	}
	if (this->peer == nullptr) {
		addNotify();
	}
	$var($Dimension, newSize, getPreferredSize());
	if (this->peer != nullptr) {
		setClientSize($nc(newSize)->width, newSize->height);
	}
	if (this->beforeFirstShow) {
		this->isPacked = true;
	}
	validateUnconditionally();
}

void Window::setMinimumSize($Dimension* minimumSize) {
	$synchronized(getTreeLock()) {
		$Container::setMinimumSize(minimumSize);
		$var($Dimension, size, getSize());
		if (isMinimumSizeSet()) {
			if ($nc(size)->width < $nc(minimumSize)->width || $nc(size)->height < $nc(minimumSize)->height) {
				int32_t nw = $Math::max(this->width, minimumSize->width);
				int32_t nh = $Math::max(this->height, minimumSize->height);
				setSize(nw, nh);
			}
		}
		if (this->peer != nullptr) {
			$nc(($cast($WindowPeer, this->peer)))->updateMinimumSize();
		}
	}
}

void Window::setSize($Dimension* d) {
	$Container::setSize(d);
}

void Window::setSize(int32_t width, int32_t height) {
	$Container::setSize(width, height);
}

void Window::setLocation(int32_t x, int32_t y) {
	$Container::setLocation(x, y);
}

void Window::setLocation($Point* p) {
	$Container::setLocation(p);
}

void Window::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	if (isMinimumSizeSet()) {
		$var($Dimension, minSize, getMinimumSize());
		if (width < $nc(minSize)->width) {
			width = minSize->width;
		}
		if (height < $nc(minSize)->height) {
			height = minSize->height;
		}
	}
	$Container::reshape(x, y, width, height);
}

void Window::setClientSize(int32_t w, int32_t h) {
	$synchronized(getTreeLock()) {
		setBoundsOp($ComponentPeer::SET_CLIENT_SIZE);
		setBounds(this->x, this->y, w, h);
	}
}

void Window::closeSplashScreen() {
	if (this->isTrayIconWindow) {
		return;
	}
	if ($nc(Window::beforeFirstWindowShown)->getAndSet(false)) {
		$SunToolkit::closeSplashScreen();
		$SplashScreen::markClosed();
	}
}

void Window::setVisible(bool b) {
	$Container::setVisible(b);
}

void Window::show() {
	if (this->peer == nullptr) {
		addNotify();
	}
	validateUnconditionally();
	this->isInShow = true;
	if (this->visible) {
		toFront();
	} else {
		this->beforeFirstShow = false;
		closeSplashScreen();
		$Dialog::checkShouldBeBlocked(this);
		$Container::show();
		this->locationByPlatform = false;
		for (int32_t i = 0; i < $nc(this->ownedWindowList)->size(); ++i) {
			$var(Window, child, $cast(Window, $nc(($cast($WeakReference, $($nc(this->ownedWindowList)->elementAt(i)))))->get()));
			if ((child != nullptr) && child->showWithParent) {
				child->show();
				child->showWithParent = false;
			}
		}
		if (!isModalBlocked()) {
			updateChildrenBlocking();
		} else {
			$nc(this->modalBlocker)->toFront_NoClientCode();
		}
		if ($instanceOf($Frame, this) || $instanceOf($Dialog, this)) {
			updateChildFocusableWindowState(this);
		}
	}
	this->isInShow = false;
	if (((int32_t)(this->state & (uint32_t)Window::OPENED)) == 0) {
		postWindowEvent($WindowEvent::WINDOW_OPENED);
		this->state |= Window::OPENED;
	}
}

void Window::updateChildFocusableWindowState(Window* w) {
	$init(Window);
	if ($nc(w)->peer != nullptr && w->isShowing()) {
		$nc(($cast($WindowPeer, w->peer)))->updateFocusableWindowState();
	}
	for (int32_t i = 0; i < $nc($nc(w)->ownedWindowList)->size(); ++i) {
		$var(Window, child, $cast(Window, $nc(($cast($WeakReference, $($nc(w->ownedWindowList)->elementAt(i)))))->get()));
		if (child != nullptr) {
			updateChildFocusableWindowState(child);
		}
	}
}

void Window::postWindowEvent(int32_t id) {
	$synchronized(this) {
		if (this->windowListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::WINDOW_EVENT_MASK)) != 0 || $Toolkit::enabledOnToolkit($AWTEvent::WINDOW_EVENT_MASK)) {
			$var($WindowEvent, e, $new($WindowEvent, this, id));
			$nc($($Toolkit::getEventQueue()))->postEvent(e);
		}
	}
}

void Window::hide() {
	$synchronized(this->ownedWindowList) {
		for (int32_t i = 0; i < $nc(this->ownedWindowList)->size(); ++i) {
			$var(Window, child, $cast(Window, $nc(($cast($WeakReference, $($nc(this->ownedWindowList)->elementAt(i)))))->get()));
			if ((child != nullptr) && child->visible) {
				child->hide();
				child->showWithParent = true;
			}
		}
	}
	if (isModalBlocked()) {
		$nc(this->modalBlocker)->unblockWindow(this);
	}
	$Container::hide();
	this->locationByPlatform = false;
}

void Window::clearMostRecentFocusOwnerOnHide() {
}

void Window::dispose() {
	doDispose();
}

void Window::disposeImpl() {
	dispose();
	if (this->peer != nullptr) {
		doDispose();
	}
}

void Window::doDispose() {
	{
	}
	bool fireWindowClosedEvent = isDisplayable();
	$var($Window$1DisposeAction, action, $new($Window$1DisposeAction, this));
	if ($EventQueue::isDispatchThread()) {
		action->run();
	} else {
		try {
			$EventQueue::invokeAndWait(this, action);
		} catch ($InterruptedException&) {
			$var($InterruptedException, e, $catch());
			$init($System);
			$nc($System::err)->println("Disposal was interrupted:"_s);
			e->printStackTrace();
		} catch ($InvocationTargetException&) {
			$var($InvocationTargetException, e, $catch());
			$init($System);
			$nc($System::err)->println("Exception during disposal:"_s);
			e->printStackTrace();
		}
	}
	if (fireWindowClosedEvent) {
		postWindowEvent($WindowEvent::WINDOW_CLOSED);
	}
}

void Window::adjustListeningChildrenOnParent(int64_t mask, int32_t num) {
}

void Window::adjustDescendantsOnParent(int32_t num) {
}

void Window::toFront() {
	toFront_NoClientCode();
}

void Window::toFront_NoClientCode() {
	if (this->visible) {
		$var($WindowPeer, peer, $cast($WindowPeer, this->peer));
		if (peer != nullptr) {
			peer->toFront();
		}
		if (isModalBlocked()) {
			$nc(this->modalBlocker)->toFront_NoClientCode();
		}
	}
}

void Window::toBack() {
	toBack_NoClientCode();
}

void Window::toBack_NoClientCode() {
	if (isAlwaysOnTop()) {
		try {
			setAlwaysOnTop(false);
		} catch ($SecurityException&) {
			$catch();
		}
	}
	if (this->visible) {
		$var($WindowPeer, peer, $cast($WindowPeer, this->peer));
		if (peer != nullptr) {
			peer->toBack();
		}
	}
}

$Toolkit* Window::getToolkit() {
	return $Toolkit::getDefaultToolkit();
}

$String* Window::getWarningString() {
	return this->warningString;
}

void Window::setWarningString() {
	$beforeCallerSensitive();
	$set(this, warningString, nullptr);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		try {
			$init($AWTPermissions);
			sm->checkPermission($AWTPermissions::TOPLEVEL_WINDOW_PERMISSION);
		} catch ($SecurityException&) {
			$var($SecurityException, se, $catch());
			$set(this, warningString, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "awt.appletWarning"_s, "Java Applet Window"_s)))));
		}
	}
}

$Locale* Window::getLocale() {
	if (this->locale == nullptr) {
		return $Locale::getDefault();
	}
	return this->locale;
}

$InputContext* Window::getInputContext() {
	$synchronized(this->inputContextLock) {
		if (this->inputContext == nullptr) {
			$set(this, inputContext, $InputContext::getInstance());
		}
	}
	return this->inputContext;
}

void Window::setCursor($Cursor* cursor$renamed) {
	$var($Cursor, cursor, cursor$renamed);
	if (cursor == nullptr) {
		$assign(cursor, $Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR));
	}
	$Container::setCursor(cursor);
}

Window* Window::getOwner() {
	return getOwner_NoClientCode();
}

Window* Window::getOwner_NoClientCode() {
	return $cast(Window, this->parent);
}

$WindowArray* Window::getOwnedWindows() {
	return getOwnedWindows_NoClientCode();
}

$WindowArray* Window::getOwnedWindows_NoClientCode() {
	$var($WindowArray, realCopy, nullptr);
	$synchronized(this->ownedWindowList) {
		int32_t fullSize = $nc(this->ownedWindowList)->size();
		int32_t realSize = 0;
		$var($WindowArray, fullCopy, $new($WindowArray, fullSize));
		for (int32_t i = 0; i < fullSize; ++i) {
			fullCopy->set(realSize, $cast(Window, $($nc(($cast($WeakReference, $($nc(this->ownedWindowList)->elementAt(i)))))->get())));
			if (fullCopy->get(realSize) != nullptr) {
				++realSize;
			}
		}
		if (fullSize != realSize) {
			$assign(realCopy, $fcast($WindowArray, $Arrays::copyOf(fullCopy, realSize)));
		} else {
			$assign(realCopy, fullCopy);
		}
	}
	return realCopy;
}

bool Window::isModalBlocked() {
	return this->modalBlocker != nullptr;
}

void Window::setModalBlocked($Dialog* blocker, bool blocked, bool peerCall) {
	$set(this, modalBlocker, blocked ? blocker : ($Dialog*)nullptr);
	if (peerCall) {
		$var($WindowPeer, peer, $cast($WindowPeer, this->peer));
		if (peer != nullptr) {
			peer->setModalBlocked(blocker, blocked);
		}
	}
}

$Dialog* Window::getModalBlocker() {
	return this->modalBlocker;
}

$IdentityArrayList* Window::getAllWindows() {
	$init(Window);
	$synchronized(Window::allWindows) {
		$var($IdentityArrayList, v, $new($IdentityArrayList));
		v->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(Window::allWindows))));
		return v;
	}
}

$IdentityArrayList* Window::getAllUnblockedWindows() {
	$init(Window);
	$synchronized(Window::allWindows) {
		$var($IdentityArrayList, unblocked, $new($IdentityArrayList));
		for (int32_t i = 0; i < $nc(Window::allWindows)->size(); ++i) {
			$var(Window, w, $cast(Window, $nc(Window::allWindows)->get(i)));
			if (!$nc(w)->isModalBlocked()) {
				unblocked->add(w);
			}
		}
		return unblocked;
	}
}

$WindowArray* Window::getWindows($AppContext* appContext) {
	$init(Window);
	$synchronized(Window::class$) {
		$var($WindowArray, realCopy, nullptr);
		$var($Vector, windowList, $cast($Vector, $nc(appContext)->get(Window::class$)));
		if (windowList != nullptr) {
			int32_t fullSize = windowList->size();
			int32_t realSize = 0;
			$var($WindowArray, fullCopy, $new($WindowArray, fullSize));
			for (int32_t i = 0; i < fullSize; ++i) {
				$var(Window, w, $cast(Window, $nc(($cast($WeakReference, $(windowList->get(i)))))->get()));
				if (w != nullptr) {
					fullCopy->set(realSize++, w);
				}
			}
			if (fullSize != realSize) {
				$assign(realCopy, $fcast($WindowArray, $Arrays::copyOf(fullCopy, realSize)));
			} else {
				$assign(realCopy, fullCopy);
			}
		} else {
			$assign(realCopy, $new($WindowArray, 0));
		}
		return realCopy;
	}
}

$WindowArray* Window::getWindows() {
	$init(Window);
	return getWindows($($AppContext::getAppContext()));
}

$WindowArray* Window::getOwnerlessWindows() {
	$init(Window);
	$var($WindowArray, allWindows, Window::getWindows());
	int32_t ownerlessCount = 0;
	{
		$var($WindowArray, arr$, allWindows);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var(Window, w, arr$->get(i$));
			{
				if ($nc(w)->getOwner() == nullptr) {
					++ownerlessCount;
				}
			}
		}
	}
	$var($WindowArray, ownerless, $new($WindowArray, ownerlessCount));
	int32_t c = 0;
	{
		$var($WindowArray, arr$, allWindows);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var(Window, w, arr$->get(i$));
			{
				if ($nc(w)->getOwner() == nullptr) {
					ownerless->set(c++, w);
				}
			}
		}
	}
	return ownerless;
}

Window* Window::getDocumentRoot() {
	$synchronized(getTreeLock()) {
		$var(Window, w, this);
		while ($nc(w)->getOwner() != nullptr) {
			$assign(w, w->getOwner());
		}
		return w;
	}
}

void Window::setModalExclusionType($Dialog$ModalExclusionType* exclusionType$renamed) {
	$var($Dialog$ModalExclusionType, exclusionType, exclusionType$renamed);
	if (exclusionType == nullptr) {
		$init($Dialog$ModalExclusionType);
		exclusionType = $Dialog$ModalExclusionType::NO_EXCLUDE;
	}
	if (!$nc($($Toolkit::getDefaultToolkit()))->isModalExclusionTypeSupported(exclusionType)) {
		$init($Dialog$ModalExclusionType);
		exclusionType = $Dialog$ModalExclusionType::NO_EXCLUDE;
	}
	if (this->modalExclusionType == exclusionType) {
		return;
	}
	$init($Dialog$ModalExclusionType);
	if (exclusionType == $Dialog$ModalExclusionType::TOOLKIT_EXCLUDE) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$init($AWTPermissions);
			sm->checkPermission($AWTPermissions::TOOLKIT_MODALITY_PERMISSION);
		}
	}
	$set(this, modalExclusionType, exclusionType);
}

$Dialog$ModalExclusionType* Window::getModalExclusionType() {
	return this->modalExclusionType;
}

bool Window::isModalExcluded($Dialog$ModalExclusionType* exclusionType) {
	if ((this->modalExclusionType != nullptr) && $nc(this->modalExclusionType)->compareTo(static_cast<$Enum*>(exclusionType)) >= 0) {
		return true;
	}
	$var(Window, owner, getOwner_NoClientCode());
	return (owner != nullptr) && owner->isModalExcluded(exclusionType);
}

void Window::updateChildrenBlocking() {
	$var($Vector, childHierarchy, $new($Vector));
	$var($WindowArray, ownedWindows, getOwnedWindows());
	for (int32_t i = 0; i < $nc(ownedWindows)->length; ++i) {
		childHierarchy->add(ownedWindows->get(i));
	}
	int32_t k = 0;
	while (k < childHierarchy->size()) {
		$var(Window, w, $cast(Window, childHierarchy->get(k)));
		if ($nc(w)->isVisible()) {
			if (w->isModalBlocked()) {
				$var($Dialog, blocker, w->getModalBlocker());
				$nc(blocker)->unblockWindow(w);
			}
			$Dialog::checkShouldBeBlocked(w);
			$var($WindowArray, wOwned, w->getOwnedWindows());
			for (int32_t j = 0; j < $nc(wOwned)->length; ++j) {
				childHierarchy->add(wOwned->get(j));
			}
		}
		++k;
	}
}

void Window::addWindowListener($WindowListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		this->newEventsOnly = true;
		$set(this, windowListener, $AWTEventMulticaster::add(this->windowListener, l));
	}
}

void Window::addWindowStateListener($WindowStateListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, windowStateListener, $AWTEventMulticaster::add(this->windowStateListener, l));
		this->newEventsOnly = true;
	}
}

void Window::addWindowFocusListener($WindowFocusListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, windowFocusListener, $AWTEventMulticaster::add(this->windowFocusListener, l));
		this->newEventsOnly = true;
	}
}

void Window::removeWindowListener($WindowListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, windowListener, $AWTEventMulticaster::remove(this->windowListener, l));
	}
}

void Window::removeWindowStateListener($WindowStateListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, windowStateListener, $AWTEventMulticaster::remove(this->windowStateListener, l));
	}
}

void Window::removeWindowFocusListener($WindowFocusListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, windowFocusListener, $AWTEventMulticaster::remove(this->windowFocusListener, l));
	}
}

$WindowListenerArray* Window::getWindowListeners() {
	$synchronized(this) {
		$load($WindowListener);
		return $fcast($WindowListenerArray, getListeners($WindowListener::class$));
	}
}

$WindowFocusListenerArray* Window::getWindowFocusListeners() {
	$synchronized(this) {
		$load($WindowFocusListener);
		return $fcast($WindowFocusListenerArray, getListeners($WindowFocusListener::class$));
	}
}

$WindowStateListenerArray* Window::getWindowStateListeners() {
	$synchronized(this) {
		$load($WindowStateListener);
		return $fcast($WindowStateListenerArray, getListeners($WindowStateListener::class$));
	}
}

$EventListenerArray* Window::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($WindowFocusListener);
	if (listenerType == $WindowFocusListener::class$) {
		$assign(l, this->windowFocusListener);
	} else {
		$load($WindowStateListener);
		if (listenerType == $WindowStateListener::class$) {
			$assign(l, this->windowStateListener);
		} else {
			$load($WindowListener);
			if (listenerType == $WindowListener::class$) {
				$assign(l, this->windowListener);
			} else {
				return $Container::getListeners(listenerType);
			}
		}
	}
	return $AWTEventMulticaster::getListeners(l, listenerType);
}

bool Window::eventEnabled($AWTEvent* e) {
	switch ($nc(e)->id) {
	case $WindowEvent::WINDOW_OPENED:
		{}
	case $WindowEvent::WINDOW_CLOSING:
		{}
	case $WindowEvent::WINDOW_CLOSED:
		{}
	case $WindowEvent::WINDOW_ICONIFIED:
		{}
	case $WindowEvent::WINDOW_DEICONIFIED:
		{}
	case $WindowEvent::WINDOW_ACTIVATED:
		{}
	case $WindowEvent::WINDOW_DEACTIVATED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::WINDOW_EVENT_MASK)) != 0 || this->windowListener != nullptr) {
				return true;
			}
			return false;
		}
	case $WindowEvent::WINDOW_GAINED_FOCUS:
		{}
	case $WindowEvent::WINDOW_LOST_FOCUS:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::WINDOW_FOCUS_EVENT_MASK)) != 0 || this->windowFocusListener != nullptr) {
				return true;
			}
			return false;
		}
	case $WindowEvent::WINDOW_STATE_CHANGED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::WINDOW_STATE_EVENT_MASK)) != 0 || this->windowStateListener != nullptr) {
				return true;
			}
			return false;
		}
	default:
		{
			break;
		}
	}
	return $Container::eventEnabled(e);
}

void Window::processEvent($AWTEvent* e) {
	if ($instanceOf($WindowEvent, e)) {
		switch ($nc(e)->getID()) {
		case $WindowEvent::WINDOW_OPENED:
			{}
		case $WindowEvent::WINDOW_CLOSING:
			{}
		case $WindowEvent::WINDOW_CLOSED:
			{}
		case $WindowEvent::WINDOW_ICONIFIED:
			{}
		case $WindowEvent::WINDOW_DEICONIFIED:
			{}
		case $WindowEvent::WINDOW_ACTIVATED:
			{}
		case $WindowEvent::WINDOW_DEACTIVATED:
			{
				processWindowEvent($cast($WindowEvent, e));
				break;
			}
		case $WindowEvent::WINDOW_GAINED_FOCUS:
			{}
		case $WindowEvent::WINDOW_LOST_FOCUS:
			{
				processWindowFocusEvent($cast($WindowEvent, e));
				break;
			}
		case $WindowEvent::WINDOW_STATE_CHANGED:
			{
				processWindowStateEvent($cast($WindowEvent, e));
				break;
			}
		}
		return;
	}
	$Container::processEvent(e);
}

void Window::processWindowEvent($WindowEvent* e) {
	$var($WindowListener, listener, this->windowListener);
	if (listener != nullptr) {
		switch ($nc(e)->getID()) {
		case $WindowEvent::WINDOW_OPENED:
			{
				listener->windowOpened(e);
				break;
			}
		case $WindowEvent::WINDOW_CLOSING:
			{
				listener->windowClosing(e);
				break;
			}
		case $WindowEvent::WINDOW_CLOSED:
			{
				listener->windowClosed(e);
				break;
			}
		case $WindowEvent::WINDOW_ICONIFIED:
			{
				listener->windowIconified(e);
				break;
			}
		case $WindowEvent::WINDOW_DEICONIFIED:
			{
				listener->windowDeiconified(e);
				break;
			}
		case $WindowEvent::WINDOW_ACTIVATED:
			{
				listener->windowActivated(e);
				break;
			}
		case $WindowEvent::WINDOW_DEACTIVATED:
			{
				listener->windowDeactivated(e);
				break;
			}
		default:
			{
				break;
			}
		}
	}
}

void Window::processWindowFocusEvent($WindowEvent* e) {
	$var($WindowFocusListener, listener, this->windowFocusListener);
	if (listener != nullptr) {
		switch ($nc(e)->getID()) {
		case $WindowEvent::WINDOW_GAINED_FOCUS:
			{
				listener->windowGainedFocus(e);
				break;
			}
		case $WindowEvent::WINDOW_LOST_FOCUS:
			{
				listener->windowLostFocus(e);
				break;
			}
		default:
			{
				break;
			}
		}
	}
}

void Window::processWindowStateEvent($WindowEvent* e) {
	$var($WindowStateListener, listener, this->windowStateListener);
	if (listener != nullptr) {
		switch ($nc(e)->getID()) {
		case $WindowEvent::WINDOW_STATE_CHANGED:
			{
				listener->windowStateChanged(e);
				break;
			}
		default:
			{
				break;
			}
		}
	}
}

void Window::preProcessKeyEvent($KeyEvent* e) {
	if ($nc($($DebugSettings::getInstance()))->getBoolean("on"_s, false)) {
		bool var$3 = $nc(e)->isActionKey();
		bool var$2 = var$3 && e->getKeyCode() == $KeyEvent::VK_F1;
		bool var$1 = var$2 && e->isControlDown();
		bool var$0 = var$1 && e->isShiftDown();
		if (var$0 && e->getID() == $KeyEvent::KEY_PRESSED) {
			$init($System);
			list($System::out, 0);
		}
	}
}

void Window::postProcessKeyEvent($KeyEvent* e) {
}

void Window::setAlwaysOnTop(bool alwaysOnTop) {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::SET_WINDOW_ALWAYS_ON_TOP_PERMISSION);
	}
	bool oldAlwaysOnTop = false;
	$synchronized(this) {
		oldAlwaysOnTop = this->alwaysOnTop;
		this->alwaysOnTop = alwaysOnTop;
	}
	if (oldAlwaysOnTop != alwaysOnTop) {
		if (isAlwaysOnTopSupported()) {
			$var($WindowPeer, peer, $cast($WindowPeer, this->peer));
			$synchronized(getTreeLock()) {
				if (peer != nullptr) {
					peer->updateAlwaysOnTopState();
				}
			}
		}
		firePropertyChange("alwaysOnTop"_s, oldAlwaysOnTop, alwaysOnTop);
	}
	setOwnedWindowsAlwaysOnTop(alwaysOnTop);
}

void Window::setOwnedWindowsAlwaysOnTop(bool alwaysOnTop) {
	$var($WeakReferenceArray, ownedWindowArray, nullptr);
	$synchronized(this->ownedWindowList) {
		$assign(ownedWindowArray, $new($WeakReferenceArray, $nc(this->ownedWindowList)->size()));
		$nc(this->ownedWindowList)->copyInto(ownedWindowArray);
	}
	{
		$var($WeakReferenceArray, arr$, ownedWindowArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($WeakReference, ref, arr$->get(i$));
			{
				$var(Window, window, $cast(Window, $nc(ref)->get()));
				if (window != nullptr) {
					try {
						window->setAlwaysOnTop(alwaysOnTop);
					} catch ($SecurityException&) {
						$catch();
					}
				}
			}
		}
	}
}

bool Window::isAlwaysOnTopSupported() {
	return $nc($($Toolkit::getDefaultToolkit()))->isAlwaysOnTopSupported();
}

bool Window::isAlwaysOnTop() {
	return this->alwaysOnTop;
}

$Component* Window::getFocusOwner() {
	return (isFocused()) ? $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner() : ($Component*)nullptr;
}

$Component* Window::getMostRecentFocusOwner() {
	if (isFocused()) {
		return getFocusOwner();
	} else {
		$var($Component, mostRecent, $KeyboardFocusManager::getMostRecentFocusOwner(this));
		if (mostRecent != nullptr) {
			return mostRecent;
		} else {
			return (isFocusableWindow()) ? $nc($(getFocusTraversalPolicy()))->getInitialComponent(this) : ($Component*)nullptr;
		}
	}
}

bool Window::isActive() {
	return ($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getActiveWindow() == this);
}

bool Window::isFocused() {
	return ($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getGlobalFocusedWindow() == this);
}

$Set* Window::getFocusTraversalKeys(int32_t id) {
	if (id < 0 || id >= $KeyboardFocusManager::TRAVERSAL_KEY_LENGTH) {
		$throwNew($IllegalArgumentException, "invalid focus traversal key identifier"_s);
	}
	$var($Set, keystrokes, (this->focusTraversalKeys != nullptr) ? $nc(this->focusTraversalKeys)->get(id) : ($Set*)nullptr);
	if (keystrokes != nullptr) {
		return keystrokes;
	} else {
		return $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getDefaultFocusTraversalKeys(id);
	}
}

void Window::setFocusCycleRoot(bool focusCycleRoot) {
}

bool Window::isFocusCycleRoot() {
	return true;
}

$Container* Window::getFocusCycleRootAncestor() {
	return nullptr;
}

bool Window::isFocusableWindow() {
	if (!getFocusableWindowState()) {
		return false;
	}
	if ($instanceOf($Frame, this) || $instanceOf($Dialog, this)) {
		return true;
	}
	if ($nc($(getFocusTraversalPolicy()))->getDefaultComponent(this) == nullptr) {
		return false;
	}
	{
		$var(Window, owner, getOwner());
		for (; owner != nullptr; $assign(owner, $nc(owner)->getOwner())) {
			if ($instanceOf($Frame, owner) || $instanceOf($Dialog, owner)) {
				return owner->isShowing();
			}
		}
	}
	return false;
}

bool Window::getFocusableWindowState() {
	return this->focusableWindowState;
}

void Window::setFocusableWindowState(bool focusableWindowState) {
	bool oldFocusableWindowState = false;
	$synchronized(this) {
		oldFocusableWindowState = this->focusableWindowState;
		this->focusableWindowState = focusableWindowState;
	}
	$var($WindowPeer, peer, $cast($WindowPeer, this->peer));
	if (peer != nullptr) {
		peer->updateFocusableWindowState();
	}
	firePropertyChange("focusableWindowState"_s, oldFocusableWindowState, focusableWindowState);
	if (oldFocusableWindowState && !focusableWindowState && isFocused()) {
		{
			$var(Window, owner, getOwner());
			for (; owner != nullptr; $assign(owner, $nc(owner)->getOwner())) {
				$var($Component, toFocus, $KeyboardFocusManager::getMostRecentFocusOwner(owner));
				$init($FocusEvent$Cause);
				if (toFocus != nullptr && toFocus->requestFocus(false, $FocusEvent$Cause::ACTIVATION)) {
					return;
				}
			}
		}
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->clearGlobalFocusOwnerPriv();
	}
}

void Window::setAutoRequestFocus(bool autoRequestFocus) {
	this->autoRequestFocus = autoRequestFocus;
}

bool Window::isAutoRequestFocus() {
	return this->autoRequestFocus;
}

void Window::addPropertyChangeListener($PropertyChangeListener* listener) {
	$Container::addPropertyChangeListener(listener);
}

void Window::addPropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$Container::addPropertyChangeListener(propertyName, listener);
}

bool Window::isValidateRoot() {
	return true;
}

void Window::dispatchEventImpl($AWTEvent* e) {
	if ($nc(e)->getID() == $ComponentEvent::COMPONENT_RESIZED) {
		invalidate();
		validate();
	}
	$Container::dispatchEventImpl(e);
}

bool Window::postEvent($Event* e) {
	if (handleEvent(e)) {
		$nc(e)->consume();
		return true;
	}
	return false;
}

bool Window::isShowing() {
	return this->visible;
}

bool Window::isDisposing() {
	return this->disposing;
}

void Window::applyResourceBundle($ResourceBundle* rb) {
	applyComponentOrientation($($ComponentOrientation::getOrientation(rb)));
}

void Window::applyResourceBundle($String* rbName) {
	$beforeCallerSensitive();
	$var($ClassLoader, cl, $($Thread::currentThread())->getContextClassLoader());
	if (cl == nullptr) {
		$assign(cl, $ClassLoader::getSystemClassLoader());
	}
	applyResourceBundle($($ResourceBundle::getBundle(rbName, $($nc(cl)->getUnnamedModule()))));
}

void Window::addOwnedWindow($WeakReference* weakWindow) {
	if (weakWindow != nullptr) {
		$synchronized(this->ownedWindowList) {
			if (!$nc(this->ownedWindowList)->contains(weakWindow)) {
				$nc(this->ownedWindowList)->addElement(weakWindow);
			}
		}
	}
}

void Window::removeOwnedWindow($WeakReference* weakWindow) {
	if (weakWindow != nullptr) {
		$nc(this->ownedWindowList)->removeElement(weakWindow);
	}
}

void Window::connectOwnedWindow(Window* child) {
	$set($nc(child), parent, this);
	addOwnedWindow(child->weakThis);
	$nc(child->disposerRecord)->updateOwner();
}

void Window::addToWindowList() {
	$synchronized(Window::class$) {
		$var($Vector, windowList, $cast($Vector, $nc(this->appContext)->get(Window::class$)));
		if (windowList == nullptr) {
			$assign(windowList, $new($Vector));
			$nc(this->appContext)->put(Window::class$, windowList);
		}
		$nc(windowList)->add(this->weakThis);
	}
}

void Window::removeFromWindowList($AppContext* context, $WeakReference* weakThis) {
	$init(Window);
	$synchronized(Window::class$) {
		$var($Vector, windowList, $cast($Vector, $nc(context)->get(Window::class$)));
		if (windowList != nullptr) {
			windowList->remove($of(weakThis));
		}
	}
}

void Window::removeFromWindowList() {
	removeFromWindowList(this->appContext, this->weakThis);
}

void Window::setType($Window$Type* type) {
	if (type == nullptr) {
		$throwNew($IllegalArgumentException, "type should not be null."_s);
	}
	$synchronized(getTreeLock()) {
		if (isDisplayable()) {
			$throwNew($IllegalComponentStateException, "The window is displayable."_s);
		}
		$synchronized(getObjectLock()) {
			$set(this, type, type);
		}
	}
}

$Window$Type* Window::getType() {
	$synchronized(getObjectLock()) {
		return this->type;
	}
}

void Window::writeObject($ObjectOutputStream* s) {
	$synchronized(this) {
		$set(this, focusMgr, $new($FocusManager));
		$set($nc(this->focusMgr), focusRoot, this);
		$set($nc(this->focusMgr), focusOwner, getMostRecentFocusOwner());
		$nc(s)->defaultWriteObject();
		$set(this, focusMgr, nullptr);
		$init($Component);
		$AWTEventMulticaster::save(s, $Component::windowListenerK, this->windowListener);
		$AWTEventMulticaster::save(s, $Component::windowFocusListenerK, this->windowFocusListener);
		$AWTEventMulticaster::save(s, $Component::windowStateListenerK, this->windowStateListener);
	}
	$nc(s)->writeObject(nullptr);
	$synchronized(this->ownedWindowList) {
		for (int32_t i = 0; i < $nc(this->ownedWindowList)->size(); ++i) {
			$var(Window, child, $cast(Window, $nc(($cast($WeakReference, $($nc(this->ownedWindowList)->elementAt(i)))))->get()));
			if (child != nullptr) {
				$init($Component);
				s->writeObject($Component::ownedWindowK);
				s->writeObject(child);
			}
		}
	}
	s->writeObject(nullptr);
	if (this->icons != nullptr) {
		{
			$var($Iterator, i$, $nc(this->icons)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Image, i, $cast($Image, i$->next()));
				{
					if ($instanceOf($Serializable, i)) {
						s->writeObject(i);
					}
				}
			}
		}
	}
	s->writeObject(nullptr);
}

void Window::initDeserializedWindow() {
	setWarningString();
	$set(this, inputContextLock, $new($Object));
	this->visible = false;
	$set(this, weakThis, $new($WeakReference, this));
	$set(this, anchor, $new($Object));
	$set(this, disposerRecord, $new($Window$WindowDisposerRecord, this->appContext, this));
	$Disposer::addRecord(this->anchor, this->disposerRecord);
	addToWindowList();
	initGC(nullptr);
	$set(this, ownedWindowList, $new($Vector));
}

void Window::deserializeResources($ObjectInputStream* s) {
	if (this->windowSerializedDataVersion < 2) {
		if (this->focusMgr != nullptr) {
			if ($nc(this->focusMgr)->focusOwner != nullptr) {
				$KeyboardFocusManager::setMostRecentFocusOwner(this, $nc(this->focusMgr)->focusOwner);
			}
		}
		this->focusableWindowState = true;
	}
	$var($Object, keyOrNull, nullptr);
	while (nullptr != ($assign(keyOrNull, $nc(s)->readObject()))) {
		$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
		$init($Component);
		if ($Component::windowListenerK == key) {
			addWindowListener(($cast($WindowListener, $(s->readObject()))));
		} else {
			if ($Component::windowFocusListenerK == key) {
				addWindowFocusListener(($cast($WindowFocusListener, $(s->readObject()))));
			} else {
				if ($Component::windowStateListenerK == key) {
					addWindowStateListener(($cast($WindowStateListener, $(s->readObject()))));
				} else {
					s->readObject();
				}
			}
		}
	}
	try {
		while (nullptr != ($assign(keyOrNull, $nc(s)->readObject()))) {
			$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
			$init($Component);
			if ($Component::ownedWindowK == key) {
				connectOwnedWindow($cast(Window, $(s->readObject())));
			} else {
				s->readObject();
			}
		}
		$var($Object, obj, $nc(s)->readObject());
		$set(this, icons, $new($ArrayList));
		while (obj != nullptr) {
			if ($instanceOf($Image, obj)) {
				$nc(this->icons)->add($cast($Image, obj));
			}
			$assign(obj, s->readObject());
		}
	} catch ($OptionalDataException&) {
		$catch();
	}
}

void Window::readObject($ObjectInputStream* s) {
	$GraphicsEnvironment::checkHeadless();
	initDeserializedWindow();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	this->syncLWRequests = $nc(f)->get("syncLWRequests"_s, Window::systemSyncLWRequests);
	this->state = f->get("state"_s, 0);
	this->focusableWindowState = f->get("focusableWindowState"_s, true);
	this->windowSerializedDataVersion = f->get("windowSerializedDataVersion"_s, 1);
	this->locationByPlatform = f->get("locationByPlatform"_s, Window::locationByPlatformProp);
	$set(this, focusMgr, $cast($FocusManager, f->get("focusMgr"_s, ($Object*)nullptr)));
	$init($Dialog$ModalExclusionType);
	$Dialog$ModalExclusionType* et = $cast($Dialog$ModalExclusionType, f->get("modalExclusionType"_s, $of($Dialog$ModalExclusionType::NO_EXCLUDE)));
	setModalExclusionType(et);
	bool aot = f->get("alwaysOnTop"_s, false);
	if (aot) {
		setAlwaysOnTop(aot);
	}
	$set(this, shape, $cast($Shape, f->get("shape"_s, ($Object*)nullptr)));
	this->opacity = $nc(($($Float::valueOf(f->get("opacity"_s, 1.0f)))))->floatValue();
	this->securityWarningWidth = 0;
	this->securityWarningHeight = 0;
	deserializeResources(s);
}

$AccessibleContext* Window::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Window$AccessibleAWTWindow, this));
	}
	return this->accessibleContext;
}

void Window::setGraphicsConfiguration($GraphicsConfiguration* gc$renamed) {
	$var($GraphicsConfiguration, gc, gc$renamed);
	if (gc == nullptr) {
		$assign(gc, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	}
	$synchronized(getTreeLock()) {
		$Container::setGraphicsConfiguration(gc);
		$init($PlatformLogger$Level);
		if ($nc(Window::log)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(Window::log)->finer($$str({"+ Window.setGraphicsConfiguration(): new GC is \n+ "_s, $(getGraphicsConfiguration_NoClientCode()), "\n+ this is "_s, this}));
		}
	}
}

void Window::setLocationRelativeTo($Component* c) {
	int32_t dx = 0;
	int32_t dy = 0;
	$var($GraphicsConfiguration, gc, getGraphicsConfiguration_NoClientCode());
	$var($Rectangle, gcBounds, $nc(gc)->getBounds());
	$var($Dimension, windowSize, getSize());
	$var(Window, componentWindow, $SunToolkit::getContainingWindow(c));
	if ((c == nullptr) || (componentWindow == nullptr)) {
		$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
		$assign(gc, $nc($($nc(ge)->getDefaultScreenDevice()))->getDefaultConfiguration());
		$assign(gcBounds, $nc(gc)->getBounds());
		$var($Point, centerPoint, ge->getCenterPoint());
		dx = $nc(centerPoint)->x - $nc(windowSize)->width / 2;
		dy = centerPoint->y - windowSize->height / 2;
	} else if (!$nc(c)->isShowing()) {
		$assign(gc, $nc(componentWindow)->getGraphicsConfiguration());
		$assign(gcBounds, $nc(gc)->getBounds());
		dx = $nc(gcBounds)->x + (gcBounds->width - $nc(windowSize)->width) / 2;
		dy = gcBounds->y + (gcBounds->height - windowSize->height) / 2;
	} else {
		$assign(gc, $nc(componentWindow)->getGraphicsConfiguration());
		$assign(gcBounds, $nc(gc)->getBounds());
		$var($Dimension, compSize, c->getSize());
		$var($Point, compLocation, c->getLocationOnScreen());
		dx = $nc(compLocation)->x + (($nc(compSize)->width - $nc(windowSize)->width) / 2);
		dy = compLocation->y + ((compSize->height - windowSize->height) / 2);
		if (dy + windowSize->height > $nc(gcBounds)->y + gcBounds->height) {
			dy = gcBounds->y + gcBounds->height - windowSize->height;
			if (compLocation->x - gcBounds->x + compSize->width / 2 < gcBounds->width / 2) {
				dx = compLocation->x + compSize->width;
			} else {
				dx = compLocation->x - windowSize->width;
			}
		}
	}
	if (dy + $nc(windowSize)->height > $nc(gcBounds)->y + gcBounds->height) {
		dy = gcBounds->y + gcBounds->height - windowSize->height;
	}
	if (dy < $nc(gcBounds)->y) {
		dy = gcBounds->y;
	}
	if (dx + $nc(windowSize)->width > $nc(gcBounds)->x + gcBounds->width) {
		dx = gcBounds->x + gcBounds->width - windowSize->width;
	}
	if (dx < $nc(gcBounds)->x) {
		dx = gcBounds->x;
	}
	setLocation(dx, dy);
}

void Window::deliverMouseWheelToAncestor($MouseWheelEvent* e) {
}

bool Window::dispatchMouseWheelToAncestor($MouseWheelEvent* e) {
	return false;
}

void Window::createBufferStrategy(int32_t numBuffers) {
	$Container::createBufferStrategy(numBuffers);
}

void Window::createBufferStrategy(int32_t numBuffers, $BufferCapabilities* caps) {
	$Container::createBufferStrategy(numBuffers, caps);
}

$BufferStrategy* Window::getBufferStrategy() {
	return $Container::getBufferStrategy();
}

$Component* Window::getTemporaryLostComponent() {
	return this->temporaryLostComponent;
}

$Component* Window::setTemporaryLostComponent($Component* component) {
	$var($Component, previousComp, this->temporaryLostComponent);
	if (component == nullptr || $nc(component)->canBeFocusOwner()) {
		$set(this, temporaryLostComponent, component);
	} else {
		$set(this, temporaryLostComponent, nullptr);
	}
	return previousComp;
}

bool Window::canContainFocusOwner($Component* focusOwnerCandidate) {
	bool var$0 = $Container::canContainFocusOwner(focusOwnerCandidate);
	return var$0 && isFocusableWindow();
}

void Window::setLocationByPlatform(bool locationByPlatform) {
	$synchronized(getTreeLock()) {
		if (locationByPlatform && isShowing()) {
			$throwNew($IllegalComponentStateException, "The window is showing on screen."_s);
		}
		this->locationByPlatform = locationByPlatform;
	}
}

bool Window::isLocationByPlatform() {
	return this->locationByPlatform;
}

void Window::setBounds(int32_t x, int32_t y, int32_t width, int32_t height) {
	$synchronized(getTreeLock()) {
		bool var$0 = getBoundsOp() == $ComponentPeer::SET_LOCATION;
		if (var$0 || getBoundsOp() == $ComponentPeer::SET_BOUNDS) {
			this->locationByPlatform = false;
		}
		$Container::setBounds(x, y, width, height);
	}
}

void Window::setBounds($Rectangle* r) {
	setBounds($nc(r)->x, r->y, r->width, r->height);
}

bool Window::isRecursivelyVisible() {
	return this->visible;
}

float Window::getOpacity() {
	return this->opacity;
}

void Window::setOpacity(float opacity) {
	$synchronized(getTreeLock()) {
		if (opacity < 0.0f || opacity > 1.0f) {
			$throwNew($IllegalArgumentException, "The value of opacity should be in the range [0.0f .. 1.0f]."_s);
		}
		if (opacity < 1.0f) {
			$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
			$var($GraphicsDevice, gd, $nc(gc)->getDevice());
			if ($nc($(gc->getDevice()))->getFullScreenWindow() == this) {
				$throwNew($IllegalComponentStateException, "Setting opacity for full-screen window is not supported."_s);
			}
			$init($GraphicsDevice$WindowTranslucency);
			if (!$nc(gd)->isWindowTranslucencySupported($GraphicsDevice$WindowTranslucency::TRANSLUCENT)) {
				$throwNew($UnsupportedOperationException, "TRANSLUCENT translucency is not supported."_s);
			}
		}
		this->opacity = opacity;
		$var($WindowPeer, peer, $cast($WindowPeer, this->peer));
		if (peer != nullptr) {
			peer->setOpacity(opacity);
		}
	}
}

$Shape* Window::getShape() {
	$synchronized(getTreeLock()) {
		return this->shape == nullptr ? ($Shape*)nullptr : static_cast<$Shape*>($new($Path2D$Float, this->shape));
	}
}

void Window::setShape($Shape* shape) {
	$synchronized(getTreeLock()) {
		if (shape != nullptr) {
			$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
			$var($GraphicsDevice, gd, $nc(gc)->getDevice());
			if ($nc($(gc->getDevice()))->getFullScreenWindow() == this) {
				$throwNew($IllegalComponentStateException, "Setting shape for full-screen window is not supported."_s);
			}
			$init($GraphicsDevice$WindowTranslucency);
			if (!$nc(gd)->isWindowTranslucencySupported($GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSPARENT)) {
				$throwNew($UnsupportedOperationException, "PERPIXEL_TRANSPARENT translucency is not supported."_s);
			}
		}
		$set(this, shape, (shape == nullptr) ? ($Shape*)nullptr : static_cast<$Shape*>($new($Path2D$Float, shape)));
		$var($WindowPeer, peer, $cast($WindowPeer, this->peer));
		if (peer != nullptr) {
			peer->applyShape(shape == nullptr ? ($Region*)nullptr : $($Region::getInstance(shape, ($AffineTransform*)nullptr)));
		}
	}
}

$Color* Window::getBackground() {
	return $Container::getBackground();
}

void Window::setBackground($Color* bgColor) {
	$var($Color, oldBg, getBackground());
	$Container::setBackground(bgColor);
	if (oldBg != nullptr && oldBg->equals(bgColor)) {
		return;
	}
	int32_t oldAlpha = oldBg != nullptr ? $nc(oldBg)->getAlpha() : 255;
	int32_t alpha = bgColor != nullptr ? $nc(bgColor)->getAlpha() : 255;
	if ((oldAlpha == 255) && (alpha < 255)) {
		$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
		$var($GraphicsDevice, gd, $nc(gc)->getDevice());
		if ($nc($(gc->getDevice()))->getFullScreenWindow() == this) {
			$throwNew($IllegalComponentStateException, "Making full-screen window non opaque is not supported."_s);
		}
		if (!gc->isTranslucencyCapable()) {
			$var($GraphicsConfiguration, capableGC, $nc(gd)->getTranslucencyCapableGC());
			if (capableGC == nullptr) {
				$throwNew($UnsupportedOperationException, "PERPIXEL_TRANSLUCENT translucency is not supported"_s);
			}
			setGraphicsConfiguration(capableGC);
		}
		setLayersOpaque(this, false);
	} else if ((oldAlpha < 255) && (alpha == 255)) {
		setLayersOpaque(this, true);
	}
	$var($WindowPeer, peer, $cast($WindowPeer, this->peer));
	if (peer != nullptr) {
		peer->setOpaque(alpha == 255);
	}
}

bool Window::isOpaque() {
	$var($Color, bg, getBackground());
	return bg != nullptr ? $nc(bg)->getAlpha() == 255 : true;
}

void Window::updateWindow() {
	$synchronized(getTreeLock()) {
		$var($WindowPeer, peer, $cast($WindowPeer, this->peer));
		if (peer != nullptr) {
			peer->updateWindow();
		}
	}
}

void Window::paint($Graphics* g) {
	if (!isOpaque()) {
		$var($Graphics, gg, $nc(g)->create());
		{
			$var($Throwable, var$0, nullptr);
			try {
				if ($instanceOf($Graphics2D, gg)) {
					$nc(gg)->setColor($(getBackground()));
					$nc(($cast($Graphics2D, gg)))->setComposite($($AlphaComposite::getInstance($AlphaComposite::SRC)));
					int32_t var$1 = getWidth();
					gg->fillRect(0, 0, var$1, getHeight());
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(gg)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$Container::paint(g);
}

void Window::setLayersOpaque($Component* component, bool isOpaque) {
	$init(Window);
	if ($SunToolkit::isInstanceOf($of(component), "javax.swing.RootPaneContainer"_s)) {
		$var($RootPaneContainer, rpc, $cast($RootPaneContainer, component));
		$var($JRootPane, root, $nc(rpc)->getRootPane());
		$var($JLayeredPane, lp, $nc(root)->getLayeredPane());
		$var($Container, c, root->getContentPane());
		$var($JComponent, content, ($instanceOf($JComponent, c)) ? $cast($JComponent, c) : ($JComponent*)nullptr);
		$nc(lp)->setOpaque(isOpaque);
		root->setOpaque(isOpaque);
		if (content != nullptr) {
			content->setOpaque(isOpaque);
			int32_t numChildren = content->getComponentCount();
			if (numChildren > 0) {
				$var($Component, child, content->getComponent(0));
				if ($instanceOf($RootPaneContainer, child)) {
					setLayersOpaque(child, isOpaque);
				}
			}
		}
	}
}

$Container* Window::getContainer() {
	return nullptr;
}

void Window::applyCompoundShape($Region* shape) {
}

void Window::applyCurrentShape() {
}

void Window::mixOnReshaping() {
}

$Point* Window::getLocationOnWindow() {
	return $new($Point, 0, 0);
}

double Window::limit(double value, double min, double max) {
	$init(Window);
	value = $Math::max(value, min);
	value = $Math::min(value, max);
	return value;
}

$Point2D* Window::calculateSecurityWarningPosition(double x, double y, double w, double h) {
	$init($Component);
	double wx = x + w * $Component::RIGHT_ALIGNMENT + 2.0;
	double wy = y + h * $Component::TOP_ALIGNMENT + 0.0;
	wx = Window::limit(wx, x - this->securityWarningWidth - 2, x + w + 2);
	wy = Window::limit(wy, y - this->securityWarningHeight - 2, y + h + 2);
	$var($GraphicsConfiguration, graphicsConfig, getGraphicsConfiguration_NoClientCode());
	$var($Rectangle, screenBounds, $nc(graphicsConfig)->getBounds());
	$var($Insets, screenInsets, $nc($($Toolkit::getDefaultToolkit()))->getScreenInsets(graphicsConfig));
	wx = Window::limit(wx, (double)($nc(screenBounds)->x + $nc(screenInsets)->left), (double)(screenBounds->x + screenBounds->width - screenInsets->right - this->securityWarningWidth));
	wy = Window::limit(wy, (double)($nc(screenBounds)->y + $nc(screenInsets)->top), (double)(screenBounds->y + screenBounds->height - screenInsets->bottom - this->securityWarningHeight));
	return $new($Point2D$Double, wx, wy);
}

void Window::updateZOrder() {
}

void clinit$Window($Class* class$) {
	$assignStatic(Window::base, "win"_s);
	$beforeCallerSensitive();
	Window::systemSyncLWRequests = false;
	$assignStatic(Window::allWindows, $new($IdentityArrayList));
	Window::nameCounter = 0;
	$assignStatic(Window::log, $PlatformLogger::getLogger("java.awt.Window"_s));
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Window::initIDs();
		}
		$var($String, s, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "java.awt.syncLWRequests"_s)))));
		Window::systemSyncLWRequests = (s != nullptr && s->equals("true"_s));
		$var($String, s2, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "java.awt.Window.locationByPlatform"_s)))));
		Window::locationByPlatformProp = (s2 != nullptr && s2->equals("true"_s));
	}
	$assignStatic(Window::beforeFirstWindowShown, $new($AtomicBoolean, true));
	{
		$AWTAccessor::setWindowAccessor($$new($Window$1));
	}
}

Window::Window() {
}

$Class* Window::load$($String* name, bool initialize) {
	$loadClass(Window, name, initialize, &_Window_ClassInfo_, clinit$Window, allocate$Window);
	return class$;
}

$Class* Window::class$ = nullptr;

	} // awt
} // java