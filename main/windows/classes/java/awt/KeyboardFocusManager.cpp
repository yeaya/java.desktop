#include <java/awt/KeyboardFocusManager.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/ContainerOrderFocusTraversalPolicy.h>
#include <java/awt/DefaultFocusTraversalPolicy.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/Dialog.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/KeyEventDispatcher.h>
#include <java/awt/KeyEventPostProcessor.h>
#include <java/awt/KeyboardFocusManager$1.h>
#include <java/awt/KeyboardFocusManager$2.h>
#include <java/awt/KeyboardFocusManager$3.h>
#include <java/awt/KeyboardFocusManager$4.h>
#include <java/awt/KeyboardFocusManager$HeavyweightFocusRequest.h>
#include <java/awt/KeyboardFocusManager$LightweightFocusRequest.h>
#include <java/awt/SequencedEvent.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/KeyboardFocusManagerPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/beans/PropertyVetoException.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/VetoableChangeSupport.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/WeakHashMap.h>
#include <sun/awt/AWTAccessor$KeyEventAccessor.h>
#include <sun/awt/AWTAccessor$KeyboardFocusManagerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/KeyboardFocusManagerPeerProvider.h>
#include <sun/awt/SunToolkit.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTIVATION
#undef BACKWARD_TRAVERSAL_KEYS
#undef CHAR_UNDEFINED
#undef CLEAR_GLOBAL_FOCUS_OWNER
#undef CTRL_DOWN_MASK
#undef CTRL_MASK
#undef DOWN_CYCLE_TRAVERSAL_KEYS
#undef FALSE
#undef FINE
#undef FINER
#undef FINEST
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef FORWARD_TRAVERSAL_KEYS
#undef LOCK
#undef SHIFT_DOWN_MASK
#undef SHIFT_MASK
#undef SNFH_FAILURE
#undef SNFH_SUCCESS_HANDLED
#undef SNFH_SUCCESS_PROCEED
#undef TRAVERSAL_KEY_LENGTH
#undef TRUE
#undef UNEXPECTED
#undef UNKNOWN
#undef UP_CYCLE_TRAVERSAL_KEYS
#undef VK_TAB

using $AWTKeyStrokeArray = $Array<::java::awt::AWTKeyStroke>;
using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $VetoableChangeListenerArray = $Array<::java::beans::VetoableChangeListener>;
using $SetArray = $Array<::java::util::Set>;
using $AWTKeyStrokeArray2 = $Array<::java::awt::AWTKeyStroke, 2>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $AWTPermission = ::java::awt::AWTPermission;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ContainerOrderFocusTraversalPolicy = ::java::awt::ContainerOrderFocusTraversalPolicy;
using $DefaultFocusTraversalPolicy = ::java::awt::DefaultFocusTraversalPolicy;
using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $Dialog = ::java::awt::Dialog;
using $EventQueue = ::java::awt::EventQueue;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Frame = ::java::awt::Frame;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $KeyEventDispatcher = ::java::awt::KeyEventDispatcher;
using $KeyEventPostProcessor = ::java::awt::KeyEventPostProcessor;
using $KeyboardFocusManager$1 = ::java::awt::KeyboardFocusManager$1;
using $KeyboardFocusManager$2 = ::java::awt::KeyboardFocusManager$2;
using $KeyboardFocusManager$3 = ::java::awt::KeyboardFocusManager$3;
using $KeyboardFocusManager$4 = ::java::awt::KeyboardFocusManager$4;
using $KeyboardFocusManager$HeavyweightFocusRequest = ::java::awt::KeyboardFocusManager$HeavyweightFocusRequest;
using $KeyboardFocusManager$LightweightFocusRequest = ::java::awt::KeyboardFocusManager$LightweightFocusRequest;
using $SequencedEvent = ::java::awt::SequencedEvent;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $KeyboardFocusManagerPeer = ::java::awt::peer::KeyboardFocusManagerPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $VetoableChangeSupport = ::java::beans::VetoableChangeSupport;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $WeakHashMap = ::java::util::WeakHashMap;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$KeyEventAccessor = ::sun::awt::AWTAccessor$KeyEventAccessor;
using $AWTAccessor$KeyboardFocusManagerAccessor = ::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor;
using $AppContext = ::sun::awt::AppContext;
using $KeyboardFocusManagerPeerProvider = ::sun::awt::KeyboardFocusManagerPeerProvider;
using $SunToolkit = ::sun::awt::SunToolkit;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$FieldInfo _KeyboardFocusManager_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(KeyboardFocusManager, $assertionsDisabled)},
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyboardFocusManager, focusLog)},
	{"peer", "Ljava/awt/peer/KeyboardFocusManagerPeer;", nullptr, $TRANSIENT, $field(KeyboardFocusManager, peer)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyboardFocusManager, log)},
	{"FORWARD_TRAVERSAL_KEYS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyboardFocusManager, FORWARD_TRAVERSAL_KEYS)},
	{"BACKWARD_TRAVERSAL_KEYS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyboardFocusManager, BACKWARD_TRAVERSAL_KEYS)},
	{"UP_CYCLE_TRAVERSAL_KEYS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyboardFocusManager, UP_CYCLE_TRAVERSAL_KEYS)},
	{"DOWN_CYCLE_TRAVERSAL_KEYS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyboardFocusManager, DOWN_CYCLE_TRAVERSAL_KEYS)},
	{"TRAVERSAL_KEY_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(KeyboardFocusManager, TRAVERSAL_KEY_LENGTH)},
	{"focusOwner", "Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $staticField(KeyboardFocusManager, focusOwner)},
	{"permanentFocusOwner", "Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $staticField(KeyboardFocusManager, permanentFocusOwner)},
	{"focusedWindow", "Ljava/awt/Window;", nullptr, $PRIVATE | $STATIC, $staticField(KeyboardFocusManager, focusedWindow)},
	{"activeWindow", "Ljava/awt/Window;", nullptr, $PRIVATE | $STATIC, $staticField(KeyboardFocusManager, activeWindow)},
	{"defaultPolicy", "Ljava/awt/FocusTraversalPolicy;", nullptr, $PRIVATE, $field(KeyboardFocusManager, defaultPolicy)},
	{"defaultFocusTraversalKeyPropertyNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyboardFocusManager, defaultFocusTraversalKeyPropertyNames)},
	{"defaultFocusTraversalKeys", "[Ljava/util/Set;", "[Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $PRIVATE, $field(KeyboardFocusManager, defaultFocusTraversalKeys)},
	{"currentFocusCycleRoot", "Ljava/awt/Container;", nullptr, $PRIVATE | $STATIC, $staticField(KeyboardFocusManager, currentFocusCycleRoot)},
	{"vetoableSupport", "Ljava/beans/VetoableChangeSupport;", nullptr, $PRIVATE, $field(KeyboardFocusManager, vetoableSupport)},
	{"changeSupport", "Ljava/beans/PropertyChangeSupport;", nullptr, $PRIVATE, $field(KeyboardFocusManager, changeSupport)},
	{"keyEventDispatchers", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/KeyEventDispatcher;>;", $PRIVATE, $field(KeyboardFocusManager, keyEventDispatchers)},
	{"keyEventPostProcessors", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/KeyEventPostProcessor;>;", $PRIVATE, $field(KeyboardFocusManager, keyEventPostProcessors)},
	{"mostRecentFocusOwners", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/Window;Ljava/lang/ref/WeakReference<Ljava/awt/Component;>;>;", $PRIVATE | $STATIC, $staticField(KeyboardFocusManager, mostRecentFocusOwners)},
	{"replaceKeyboardFocusManagerPermission", "Ljava/awt/AWTPermission;", nullptr, $PRIVATE | $STATIC, $staticField(KeyboardFocusManager, replaceKeyboardFocusManagerPermission)},
	{"currentSequencedEvent", "Ljava/awt/SequencedEvent;", nullptr, $TRANSIENT, $field(KeyboardFocusManager, currentSequencedEvent)},
	{"heavyweightRequests", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/KeyboardFocusManager$HeavyweightFocusRequest;>;", $PRIVATE | $STATIC, $staticField(KeyboardFocusManager, heavyweightRequests)},
	{"currentLightweightRequests", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/KeyboardFocusManager$LightweightFocusRequest;>;", $PRIVATE | $STATIC, $staticField(KeyboardFocusManager, currentLightweightRequests)},
	{"clearingCurrentLightweightRequests", "Z", nullptr, $PRIVATE | $STATIC, $staticField(KeyboardFocusManager, clearingCurrentLightweightRequests)},
	{"allowSyncFocusRequests", "Z", nullptr, $PRIVATE | $STATIC, $staticField(KeyboardFocusManager, allowSyncFocusRequests)},
	{"newFocusOwner", "Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $staticField(KeyboardFocusManager, newFocusOwner)},
	{"disableRestoreFocus", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(KeyboardFocusManager, disableRestoreFocus)},
	{"SNFH_FAILURE", "I", nullptr, $STATIC | $FINAL, $constField(KeyboardFocusManager, SNFH_FAILURE)},
	{"SNFH_SUCCESS_HANDLED", "I", nullptr, $STATIC | $FINAL, $constField(KeyboardFocusManager, SNFH_SUCCESS_HANDLED)},
	{"SNFH_SUCCESS_PROCEED", "I", nullptr, $STATIC | $FINAL, $constField(KeyboardFocusManager, SNFH_SUCCESS_PROCEED)},
	{}
};

$MethodInfo _KeyboardFocusManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"dispatchKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyboardFocusManager::*)()>(&KeyboardFocusManager::init$))},
	{"_clearGlobalFocusOwner", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyboardFocusManager::*)()>(&KeyboardFocusManager::_clearGlobalFocusOwner))},
	{"addKeyEventDispatcher", "(Ljava/awt/KeyEventDispatcher;)V", nullptr, $PUBLIC},
	{"addKeyEventPostProcessor", "(Ljava/awt/KeyEventPostProcessor;)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"addVetoableChangeListener", "(Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"addVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"checkKFMSecurity", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyboardFocusManager::*)()>(&KeyboardFocusManager::checkKFMSecurity)), "java.lang.SecurityException"},
	{"checkReplaceKFMPermission", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&KeyboardFocusManager::checkReplaceKFMPermission)), "java.lang.SecurityException"},
	{"clearFocusOwner", "()V", nullptr, $PUBLIC},
	{"clearGlobalFocusOwner", "()V", nullptr, $PUBLIC, nullptr, "java.lang.SecurityException"},
	{"clearGlobalFocusOwnerPriv", "()V", nullptr, 0},
	{"clearMarkers", "()V", nullptr, 0},
	{"clearMostRecentFocusOwner", "(Ljava/awt/Component;)V", nullptr, $STATIC, $method(static_cast<void(*)($Component*)>(&KeyboardFocusManager::clearMostRecentFocusOwner))},
	{"dequeueKeyEvents", "(JLjava/awt/Component;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"discardKeyEvents", "(Ljava/awt/Component;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"dispatchAndCatchException", "(Ljava/lang/Throwable;Ljava/awt/Component;Ljava/awt/event/FocusEvent;)Ljava/lang/Throwable;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Throwable*(*)($Throwable*,$Component*,$FocusEvent*)>(&KeyboardFocusManager::dispatchAndCatchException))},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"downFocusCycle", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"downFocusCycle", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyboardFocusManager::*)()>(&KeyboardFocusManager::downFocusCycle))},
	{"dumpRequests", "()V", nullptr, 0},
	{"enqueueKeyEvents", "(JLjava/awt/Component;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"fireVetoableChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED, nullptr, "java.beans.PropertyVetoException"},
	{"focusNextComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"focusNextComponent", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyboardFocusManager::*)()>(&KeyboardFocusManager::focusNextComponent))},
	{"focusPreviousComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"focusPreviousComponent", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyboardFocusManager::*)()>(&KeyboardFocusManager::focusPreviousComponent))},
	{"focusedWindowChanged", "(Ljava/awt/Component;Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Component*,$Component*)>(&KeyboardFocusManager::focusedWindowChanged))},
	{"getActiveWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{"getCurrentFocusCycleRoot", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getCurrentKeyboardFocusManager", "()Ljava/awt/KeyboardFocusManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyboardFocusManager*(*)()>(&KeyboardFocusManager::getCurrentKeyboardFocusManager))},
	{"getCurrentKeyboardFocusManager", "(Lsun/awt/AppContext;)Ljava/awt/KeyboardFocusManager;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<KeyboardFocusManager*(*)($AppContext*)>(&KeyboardFocusManager::getCurrentKeyboardFocusManager))},
	{"getCurrentSequencedEvent", "()Ljava/awt/SequencedEvent;", nullptr, $FINAL, $method(static_cast<$SequencedEvent*(KeyboardFocusManager::*)()>(&KeyboardFocusManager::getCurrentSequencedEvent))},
	{"getCurrentWaitingRequest", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, 0},
	{"getDefaultFocusTraversalKeys", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $PUBLIC},
	{"getDefaultFocusTraversalPolicy", "()Ljava/awt/FocusTraversalPolicy;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getFirstHWRequest", "()Ljava/awt/KeyboardFocusManager$HeavyweightFocusRequest;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$KeyboardFocusManager$HeavyweightFocusRequest*(*)()>(&KeyboardFocusManager::getFirstHWRequest))},
	{"getFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getFocusedWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{"getGlobalActiveWindow", "()Ljava/awt/Window;", nullptr, $PROTECTED, nullptr, "java.lang.SecurityException"},
	{"getGlobalCurrentFocusCycleRoot", "()Ljava/awt/Container;", nullptr, $PROTECTED, nullptr, "java.lang.SecurityException"},
	{"getGlobalFocusOwner", "()Ljava/awt/Component;", nullptr, $PROTECTED, nullptr, "java.lang.SecurityException"},
	{"getGlobalFocusedWindow", "()Ljava/awt/Window;", nullptr, $PROTECTED, nullptr, "java.lang.SecurityException"},
	{"getGlobalPermanentFocusOwner", "()Ljava/awt/Component;", nullptr, $PROTECTED, nullptr, "java.lang.SecurityException"},
	{"getHeavyweight", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $STATIC, $method(static_cast<$Component*(*)($Component*)>(&KeyboardFocusManager::getHeavyweight))},
	{"getKeyEventDispatchers", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/KeyEventDispatcher;>;", $PROTECTED | $SYNCHRONIZED},
	{"getKeyEventPostProcessors", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/KeyEventPostProcessor;>;", $PROTECTED},
	{"getLastHWRequest", "()Ljava/awt/KeyboardFocusManager$HeavyweightFocusRequest;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$KeyboardFocusManager$HeavyweightFocusRequest*(*)()>(&KeyboardFocusManager::getLastHWRequest))},
	{"getMostRecentFocusOwner", "(Ljava/awt/Window;)Ljava/awt/Component;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<$Component*(*)($Window*)>(&KeyboardFocusManager::getMostRecentFocusOwner))},
	{"getNativeFocusOwner", "()Ljava/awt/Component;", nullptr, 0},
	{"getNativeFocusedWindow", "()Ljava/awt/Window;", nullptr, 0},
	{"getPermanentFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getPropertyChangeListeners", "(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getVetoableChangeListeners", "()[Ljava/beans/VetoableChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getVetoableChangeListeners", "(Ljava/lang/String;)[Ljava/beans/VetoableChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"handleException", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Throwable*)>(&KeyboardFocusManager::handleException))},
	{"initFocusTraversalKeysSet", "(Ljava/lang/String;Ljava/util/Set;)Ljava/util/Set;", "(Ljava/lang/String;Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;)Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $STATIC, $method(static_cast<$Set*(*)($String*,$Set*)>(&KeyboardFocusManager::initFocusTraversalKeysSet))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&KeyboardFocusManager::initIDs))},
	{"initPeer", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyboardFocusManager::*)()>(&KeyboardFocusManager::initPeer))},
	{"isAutoFocusTransferEnabled", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&KeyboardFocusManager::isAutoFocusTransferEnabled))},
	{"isAutoFocusTransferEnabledFor", "(Ljava/awt/Component;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*)>(&KeyboardFocusManager::isAutoFocusTransferEnabledFor))},
	{"isProxyActive", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($KeyEvent*)>(&KeyboardFocusManager::isProxyActive))},
	{"isProxyActiveImpl", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($KeyEvent*)>(&KeyboardFocusManager::isProxyActiveImpl))},
	{"isTemporary", "(Ljava/awt/Component;Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Component*,$Component*)>(&KeyboardFocusManager::isTemporary))},
	{"markClearGlobalFocusOwner", "()Ljava/awt/Window;", nullptr, $STATIC, $method(static_cast<$Window*(*)()>(&KeyboardFocusManager::markClearGlobalFocusOwner))},
	{"postProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"processCurrentLightweightRequests", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&KeyboardFocusManager::processCurrentLightweightRequests))},
	{"processKeyEvent", "(Ljava/awt/Component;Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"processSynchronousLightweightTransfer", "(Ljava/awt/Component;Ljava/awt/Component;ZZJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*,$Component*,bool,bool,int64_t)>(&KeyboardFocusManager::processSynchronousLightweightTransfer))},
	{"redispatchEvent", "(Ljava/awt/Component;Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyboardFocusManager::*)($Component*,$AWTEvent*)>(&KeyboardFocusManager::redispatchEvent))},
	{"removeFirstRequest", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&KeyboardFocusManager::removeFirstRequest))},
	{"removeKeyEventDispatcher", "(Ljava/awt/KeyEventDispatcher;)V", nullptr, $PUBLIC},
	{"removeKeyEventPostProcessor", "(Ljava/awt/KeyEventPostProcessor;)V", nullptr, $PUBLIC},
	{"removeLastFocusRequest", "(Ljava/awt/Component;)V", nullptr, $STATIC, $method(static_cast<void(*)($Component*)>(&KeyboardFocusManager::removeLastFocusRequest))},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"removeVetoableChangeListener", "(Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"removeVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC},
	{"retargetFocusEvent", "(Ljava/awt/AWTEvent;)Ljava/awt/AWTEvent;", nullptr, $STATIC, $method(static_cast<$AWTEvent*(*)($AWTEvent*)>(&KeyboardFocusManager::retargetFocusEvent))},
	{"retargetFocusGained", "(Ljava/awt/event/FocusEvent;)Ljava/awt/event/FocusEvent;", nullptr, $STATIC, $method(static_cast<$FocusEvent*(*)($FocusEvent*)>(&KeyboardFocusManager::retargetFocusGained))},
	{"retargetFocusLost", "(Ljava/awt/event/FocusEvent;)Ljava/awt/event/FocusEvent;", nullptr, $STATIC, $method(static_cast<$FocusEvent*(*)($FocusEvent*)>(&KeyboardFocusManager::retargetFocusLost))},
	{"retargetUnexpectedFocusEvent", "(Ljava/awt/event/FocusEvent;)Ljava/awt/event/FocusEvent;", nullptr, $STATIC, $method(static_cast<$FocusEvent*(*)($FocusEvent*)>(&KeyboardFocusManager::retargetUnexpectedFocusEvent))},
	{"setCurrentKeyboardFocusManager", "(Ljava/awt/KeyboardFocusManager;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(KeyboardFocusManager*)>(&KeyboardFocusManager::setCurrentKeyboardFocusManager)), "java.lang.SecurityException"},
	{"setCurrentSequencedEvent", "(Ljava/awt/SequencedEvent;)V", nullptr, $FINAL, $method(static_cast<void(KeyboardFocusManager::*)($SequencedEvent*)>(&KeyboardFocusManager::setCurrentSequencedEvent))},
	{"setDefaultFocusTraversalKeys", "(ILjava/util/Set;)V", "(ILjava/util/Set<+Ljava/awt/AWTKeyStroke;>;)V", $PUBLIC},
	{"setDefaultFocusTraversalPolicy", "(Ljava/awt/FocusTraversalPolicy;)V", nullptr, $PUBLIC},
	{"setGlobalActiveWindow", "(Ljava/awt/Window;)V", nullptr, $PROTECTED, nullptr, "java.lang.SecurityException"},
	{"setGlobalCurrentFocusCycleRoot", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, nullptr, "java.lang.SecurityException"},
	{"setGlobalCurrentFocusCycleRootPriv", "(Ljava/awt/Container;)V", nullptr, 0},
	{"setGlobalFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PROTECTED, nullptr, "java.lang.SecurityException"},
	{"setGlobalFocusedWindow", "(Ljava/awt/Window;)V", nullptr, $PROTECTED, nullptr, "java.lang.SecurityException"},
	{"setGlobalPermanentFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PROTECTED, nullptr, "java.lang.SecurityException"},
	{"setMostRecentFocusOwner", "(Ljava/awt/Component;)V", nullptr, $STATIC, $method(static_cast<void(*)($Component*)>(&KeyboardFocusManager::setMostRecentFocusOwner))},
	{"setMostRecentFocusOwner", "(Ljava/awt/Window;Ljava/awt/Component;)V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($Window*,$Component*)>(&KeyboardFocusManager::setMostRecentFocusOwner))},
	{"setNativeFocusOwner", "(Ljava/awt/Component;)V", nullptr, 0},
	{"shouldNativelyFocusHeavyweight", "(Ljava/awt/Component;Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Component*,$Component*,bool,bool,int64_t,$FocusEvent$Cause*)>(&KeyboardFocusManager::shouldNativelyFocusHeavyweight))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"upFocusCycle", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"upFocusCycle", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(KeyboardFocusManager::*)()>(&KeyboardFocusManager::upFocusCycle))},
	{}
};

#define _METHOD_INDEX_initIDs 65

$InnerClassInfo _KeyboardFocusManager_InnerClassesInfo_[] = {
	{"java.awt.KeyboardFocusManager$HeavyweightFocusRequest", "java.awt.KeyboardFocusManager", "HeavyweightFocusRequest", $PRIVATE | $STATIC | $FINAL},
	{"java.awt.KeyboardFocusManager$LightweightFocusRequest", "java.awt.KeyboardFocusManager", "LightweightFocusRequest", $PRIVATE | $STATIC | $FINAL},
	{"java.awt.KeyboardFocusManager$4", nullptr, nullptr, 0},
	{"java.awt.KeyboardFocusManager$3", nullptr, nullptr, 0},
	{"java.awt.KeyboardFocusManager$2", nullptr, nullptr, 0},
	{"java.awt.KeyboardFocusManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyboardFocusManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.KeyboardFocusManager",
	"java.lang.Object",
	"java.awt.KeyEventDispatcher,java.awt.KeyEventPostProcessor",
	_KeyboardFocusManager_FieldInfo_,
	_KeyboardFocusManager_MethodInfo_,
	nullptr,
	nullptr,
	_KeyboardFocusManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.KeyboardFocusManager$HeavyweightFocusRequest,java.awt.KeyboardFocusManager$LightweightFocusRequest,java.awt.KeyboardFocusManager$4,java.awt.KeyboardFocusManager$3,java.awt.KeyboardFocusManager$2,java.awt.KeyboardFocusManager$1"
};

$Object* allocate$KeyboardFocusManager($Class* clazz) {
	return $of($alloc(KeyboardFocusManager));
}

int32_t KeyboardFocusManager::hashCode() {
	 return this->$KeyEventDispatcher::hashCode();
}

bool KeyboardFocusManager::equals(Object$* arg0) {
	 return this->$KeyEventDispatcher::equals(arg0);
}

$Object* KeyboardFocusManager::clone() {
	 return this->$KeyEventDispatcher::clone();
}

$String* KeyboardFocusManager::toString() {
	 return this->$KeyEventDispatcher::toString();
}

void KeyboardFocusManager::finalize() {
	this->$KeyEventDispatcher::finalize();
}

bool KeyboardFocusManager::$assertionsDisabled = false;
$PlatformLogger* KeyboardFocusManager::focusLog = nullptr;
$PlatformLogger* KeyboardFocusManager::log = nullptr;

$Component* KeyboardFocusManager::focusOwner = nullptr;

$Component* KeyboardFocusManager::permanentFocusOwner = nullptr;

$Window* KeyboardFocusManager::focusedWindow = nullptr;

$Window* KeyboardFocusManager::activeWindow = nullptr;

$StringArray* KeyboardFocusManager::defaultFocusTraversalKeyPropertyNames = nullptr;

$Container* KeyboardFocusManager::currentFocusCycleRoot = nullptr;

$Map* KeyboardFocusManager::mostRecentFocusOwners = nullptr;

$AWTPermission* KeyboardFocusManager::replaceKeyboardFocusManagerPermission = nullptr;
$LinkedList* KeyboardFocusManager::heavyweightRequests = nullptr;
$LinkedList* KeyboardFocusManager::currentLightweightRequests = nullptr;
bool KeyboardFocusManager::clearingCurrentLightweightRequests = false;
bool KeyboardFocusManager::allowSyncFocusRequests = false;
$Component* KeyboardFocusManager::newFocusOwner = nullptr;
$volatile(bool) KeyboardFocusManager::disableRestoreFocus = false;

void KeyboardFocusManager::initIDs() {
	$init(KeyboardFocusManager);
	$prepareNativeStatic(KeyboardFocusManager, initIDs, void);
	$invokeNativeStatic(KeyboardFocusManager, initIDs);
	$finishNativeStatic();
}

KeyboardFocusManager* KeyboardFocusManager::getCurrentKeyboardFocusManager() {
	$init(KeyboardFocusManager);
	return getCurrentKeyboardFocusManager($($AppContext::getAppContext()));
}

KeyboardFocusManager* KeyboardFocusManager::getCurrentKeyboardFocusManager($AppContext* appcontext) {
	$load(KeyboardFocusManager);
	$synchronized(class$) {
		$init(KeyboardFocusManager);
		$var(KeyboardFocusManager, manager, $cast(KeyboardFocusManager, $nc(appcontext)->get(KeyboardFocusManager::class$)));
		if (manager == nullptr) {
			$assign(manager, $new($DefaultKeyboardFocusManager));
			appcontext->put(KeyboardFocusManager::class$, manager);
		}
		return manager;
	}
}

void KeyboardFocusManager::setCurrentKeyboardFocusManager(KeyboardFocusManager* newManager) {
	$init(KeyboardFocusManager);
	checkReplaceKFMPermission();
	$var(KeyboardFocusManager, oldManager, nullptr);
	$synchronized(KeyboardFocusManager::class$) {
		$var($AppContext, appcontext, $AppContext::getAppContext());
		if (newManager != nullptr) {
			$assign(oldManager, getCurrentKeyboardFocusManager(appcontext));
			$nc(appcontext)->put(KeyboardFocusManager::class$, newManager);
		} else {
			$assign(oldManager, getCurrentKeyboardFocusManager(appcontext));
			$nc(appcontext)->remove(KeyboardFocusManager::class$);
		}
	}
	if (oldManager != nullptr) {
		$init($Boolean);
		oldManager->firePropertyChange("managingFocus"_s, $Boolean::TRUE, $Boolean::FALSE);
	}
	if (newManager != nullptr) {
		$init($Boolean);
		newManager->firePropertyChange("managingFocus"_s, $Boolean::FALSE, $Boolean::TRUE);
	}
}

void KeyboardFocusManager::setCurrentSequencedEvent($SequencedEvent* current) {
	$load($SequencedEvent);
	$synchronized($SequencedEvent::class$) {
		if (!KeyboardFocusManager::$assertionsDisabled && !(current == nullptr || this->currentSequencedEvent == nullptr)) {
			$throwNew($AssertionError);
		}
		$set(this, currentSequencedEvent, current);
	}
}

$SequencedEvent* KeyboardFocusManager::getCurrentSequencedEvent() {
	$load($SequencedEvent);
	$synchronized($SequencedEvent::class$) {
		return this->currentSequencedEvent;
	}
}

$Set* KeyboardFocusManager::initFocusTraversalKeysSet($String* value, $Set* targetSet) {
	$init(KeyboardFocusManager);
	$var($StringTokenizer, tokens, $new($StringTokenizer, value, ","_s));
	while (tokens->hasMoreTokens()) {
		$nc(targetSet)->add($($AWTKeyStroke::getAWTKeyStroke($(tokens->nextToken()))));
	}
	return ($nc(targetSet)->isEmpty()) ? $Collections::emptySet() : $Collections::unmodifiableSet(targetSet);
}

void KeyboardFocusManager::init$() {
	$set(this, defaultPolicy, $new($DefaultFocusTraversalPolicy));
	$set(this, defaultFocusTraversalKeys, $new($SetArray, 4));
	$set(this, currentSequencedEvent, nullptr);
	$var($AWTKeyStrokeArray2, defaultFocusTraversalKeyStrokes, $new($AWTKeyStrokeArray2, {
		$$new($AWTKeyStrokeArray, {
			$($AWTKeyStroke::getAWTKeyStroke($KeyEvent::VK_TAB, 0, false)),
			$($AWTKeyStroke::getAWTKeyStroke($KeyEvent::VK_TAB, $InputEvent::CTRL_DOWN_MASK | $InputEvent::CTRL_MASK, false))
		}),
		$$new($AWTKeyStrokeArray, {
			$($AWTKeyStroke::getAWTKeyStroke($KeyEvent::VK_TAB, $InputEvent::SHIFT_DOWN_MASK | $InputEvent::SHIFT_MASK, false)),
			$($AWTKeyStroke::getAWTKeyStroke($KeyEvent::VK_TAB, (($InputEvent::SHIFT_DOWN_MASK | $InputEvent::SHIFT_MASK) | $InputEvent::CTRL_DOWN_MASK) | $InputEvent::CTRL_MASK, false))
		}),
		$$new($AWTKeyStrokeArray, 0),
		$$new($AWTKeyStrokeArray, 0)
	}));
	for (int32_t i = 0; i < KeyboardFocusManager::TRAVERSAL_KEY_LENGTH; ++i) {
		$var($Set, work_set, $new($HashSet));
		for (int32_t j = 0; j < $nc(defaultFocusTraversalKeyStrokes->get(i))->length; ++j) {
			work_set->add($nc(defaultFocusTraversalKeyStrokes->get(i))->get(j));
		}
		$nc(this->defaultFocusTraversalKeys)->set(i, (work_set->isEmpty()) ? $($Collections::emptySet()) : $($Collections::unmodifiableSet(work_set)));
	}
	initPeer();
}

void KeyboardFocusManager::initPeer() {
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$var($KeyboardFocusManagerPeerProvider, peerProvider, $cast($KeyboardFocusManagerPeerProvider, tk));
	$set(this, peer, $nc(peerProvider)->getKeyboardFocusManagerPeer());
}

$Component* KeyboardFocusManager::getFocusOwner() {
	$synchronized(KeyboardFocusManager::class$) {
		if (KeyboardFocusManager::focusOwner == nullptr) {
			return nullptr;
		}
		return ($nc(KeyboardFocusManager::focusOwner)->appContext == $AppContext::getAppContext()) ? KeyboardFocusManager::focusOwner : ($Component*)nullptr;
	}
}

$Component* KeyboardFocusManager::getGlobalFocusOwner() {
	$synchronized(KeyboardFocusManager::class$) {
		checkKFMSecurity();
		return KeyboardFocusManager::focusOwner;
	}
}

void KeyboardFocusManager::setGlobalFocusOwner($Component* focusOwner) {
	$var($Component, oldFocusOwner, nullptr);
	bool shouldFire = false;
	if (focusOwner == nullptr || $nc(focusOwner)->isFocusable()) {
		$synchronized(KeyboardFocusManager::class$) {
			checkKFMSecurity();
			$assign(oldFocusOwner, getFocusOwner());
			try {
				fireVetoableChange("focusOwner"_s, oldFocusOwner, focusOwner);
			} catch ($PropertyVetoException&) {
				$var($PropertyVetoException, e, $catch());
				return;
			}
			$assignStatic(KeyboardFocusManager::focusOwner, focusOwner);
			bool var$0 = focusOwner != nullptr;
			if (var$0) {
				bool var$1 = getCurrentFocusCycleRoot() == nullptr;
				var$0 = (var$1 || !focusOwner->isFocusCycleRoot($(getCurrentFocusCycleRoot())));
			}
			if (var$0) {
				$var($Container, rootAncestor, focusOwner->getFocusCycleRootAncestor());
				if (rootAncestor == nullptr && ($instanceOf($Window, focusOwner))) {
					$assign(rootAncestor, $cast($Container, focusOwner));
				}
				if (rootAncestor != nullptr) {
					setGlobalCurrentFocusCycleRootPriv(rootAncestor);
				}
			}
			shouldFire = true;
		}
	}
	if (shouldFire) {
		firePropertyChange("focusOwner"_s, oldFocusOwner, focusOwner);
	}
}

void KeyboardFocusManager::clearFocusOwner() {
	if (getFocusOwner() != nullptr) {
		clearGlobalFocusOwner();
	}
}

void KeyboardFocusManager::clearGlobalFocusOwner() {
	checkReplaceKFMPermission();
	if (!$GraphicsEnvironment::isHeadless()) {
		$Toolkit::getDefaultToolkit();
		_clearGlobalFocusOwner();
	}
}

void KeyboardFocusManager::_clearGlobalFocusOwner() {
	$var($Window, activeWindow, markClearGlobalFocusOwner());
	$nc(this->peer)->clearGlobalFocusOwner(activeWindow);
}

void KeyboardFocusManager::clearGlobalFocusOwnerPriv() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($KeyboardFocusManager$2, this)));
}

$Component* KeyboardFocusManager::getNativeFocusOwner() {
	return $nc(this->peer)->getCurrentFocusOwner();
}

void KeyboardFocusManager::setNativeFocusOwner($Component* comp) {
	$init($PlatformLogger$Level);
	if ($nc(KeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(KeyboardFocusManager::focusLog)->finest("Calling peer {0} setCurrentFocusOwner for {1}"_s, $$new($ObjectArray, {
			$($of($String::valueOf($of(this->peer)))),
			$($of($String::valueOf($of(comp))))
		}));
	}
	$nc(this->peer)->setCurrentFocusOwner(comp);
}

$Window* KeyboardFocusManager::getNativeFocusedWindow() {
	return $nc(this->peer)->getCurrentFocusedWindow();
}

$Component* KeyboardFocusManager::getPermanentFocusOwner() {
	$synchronized(KeyboardFocusManager::class$) {
		if (KeyboardFocusManager::permanentFocusOwner == nullptr) {
			return nullptr;
		}
		return ($nc(KeyboardFocusManager::permanentFocusOwner)->appContext == $AppContext::getAppContext()) ? KeyboardFocusManager::permanentFocusOwner : ($Component*)nullptr;
	}
}

$Component* KeyboardFocusManager::getGlobalPermanentFocusOwner() {
	$synchronized(KeyboardFocusManager::class$) {
		checkKFMSecurity();
		return KeyboardFocusManager::permanentFocusOwner;
	}
}

void KeyboardFocusManager::setGlobalPermanentFocusOwner($Component* permanentFocusOwner) {
	$var($Component, oldPermanentFocusOwner, nullptr);
	bool shouldFire = false;
	if (permanentFocusOwner == nullptr || $nc(permanentFocusOwner)->isFocusable()) {
		$synchronized(KeyboardFocusManager::class$) {
			checkKFMSecurity();
			$assign(oldPermanentFocusOwner, getPermanentFocusOwner());
			try {
				fireVetoableChange("permanentFocusOwner"_s, oldPermanentFocusOwner, permanentFocusOwner);
			} catch ($PropertyVetoException&) {
				$var($PropertyVetoException, e, $catch());
				return;
			}
			$assignStatic(KeyboardFocusManager::permanentFocusOwner, permanentFocusOwner);
			KeyboardFocusManager::setMostRecentFocusOwner(permanentFocusOwner);
			shouldFire = true;
		}
	}
	if (shouldFire) {
		firePropertyChange("permanentFocusOwner"_s, oldPermanentFocusOwner, permanentFocusOwner);
	}
}

$Window* KeyboardFocusManager::getFocusedWindow() {
	$synchronized(KeyboardFocusManager::class$) {
		if (KeyboardFocusManager::focusedWindow == nullptr) {
			return nullptr;
		}
		return ($nc(KeyboardFocusManager::focusedWindow)->appContext == $AppContext::getAppContext()) ? KeyboardFocusManager::focusedWindow : ($Window*)nullptr;
	}
}

$Window* KeyboardFocusManager::getGlobalFocusedWindow() {
	$synchronized(KeyboardFocusManager::class$) {
		checkKFMSecurity();
		return KeyboardFocusManager::focusedWindow;
	}
}

void KeyboardFocusManager::setGlobalFocusedWindow($Window* focusedWindow) {
	$var($Window, oldFocusedWindow, nullptr);
	bool shouldFire = false;
	if (focusedWindow == nullptr || $nc(focusedWindow)->isFocusableWindow()) {
		$synchronized(KeyboardFocusManager::class$) {
			checkKFMSecurity();
			$assign(oldFocusedWindow, getFocusedWindow());
			try {
				fireVetoableChange("focusedWindow"_s, oldFocusedWindow, focusedWindow);
			} catch ($PropertyVetoException&) {
				$var($PropertyVetoException, e, $catch());
				return;
			}
			$assignStatic(KeyboardFocusManager::focusedWindow, focusedWindow);
			shouldFire = true;
		}
	}
	if (shouldFire) {
		firePropertyChange("focusedWindow"_s, oldFocusedWindow, focusedWindow);
	}
}

$Window* KeyboardFocusManager::getActiveWindow() {
	$synchronized(KeyboardFocusManager::class$) {
		if (KeyboardFocusManager::activeWindow == nullptr) {
			return nullptr;
		}
		return ($nc(KeyboardFocusManager::activeWindow)->appContext == $AppContext::getAppContext()) ? KeyboardFocusManager::activeWindow : ($Window*)nullptr;
	}
}

$Window* KeyboardFocusManager::getGlobalActiveWindow() {
	$synchronized(KeyboardFocusManager::class$) {
		checkKFMSecurity();
		return KeyboardFocusManager::activeWindow;
	}
}

void KeyboardFocusManager::setGlobalActiveWindow($Window* activeWindow) {
	$var($Window, oldActiveWindow, nullptr);
	$synchronized(KeyboardFocusManager::class$) {
		checkKFMSecurity();
		$assign(oldActiveWindow, getActiveWindow());
		$init($PlatformLogger$Level);
		if ($nc(KeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(KeyboardFocusManager::focusLog)->finer($$str({"Setting global active window to "_s, activeWindow, ", old active "_s, oldActiveWindow}));
		}
		try {
			fireVetoableChange("activeWindow"_s, oldActiveWindow, activeWindow);
		} catch ($PropertyVetoException&) {
			$var($PropertyVetoException, e, $catch());
			return;
		}
		$assignStatic(KeyboardFocusManager::activeWindow, activeWindow);
	}
	firePropertyChange("activeWindow"_s, oldActiveWindow, activeWindow);
}

$FocusTraversalPolicy* KeyboardFocusManager::getDefaultFocusTraversalPolicy() {
	$synchronized(this) {
		return this->defaultPolicy;
	}
}

void KeyboardFocusManager::setDefaultFocusTraversalPolicy($FocusTraversalPolicy* defaultPolicy) {
	if (defaultPolicy == nullptr) {
		$throwNew($IllegalArgumentException, "default focus traversal policy cannot be null"_s);
	}
	$var($FocusTraversalPolicy, oldPolicy, nullptr);
	$synchronized(this) {
		$assign(oldPolicy, this->defaultPolicy);
		$set(this, defaultPolicy, defaultPolicy);
	}
	firePropertyChange("defaultFocusTraversalPolicy"_s, oldPolicy, defaultPolicy);
}

void KeyboardFocusManager::setDefaultFocusTraversalKeys(int32_t id, $Set* keystrokes) {
	if (id < 0 || id >= KeyboardFocusManager::TRAVERSAL_KEY_LENGTH) {
		$throwNew($IllegalArgumentException, "invalid focus traversal key identifier"_s);
	}
	if (keystrokes == nullptr) {
		$throwNew($IllegalArgumentException, "cannot set null Set of default focus traversal keys"_s);
	}
	$var($Set, oldKeys, nullptr);
	$synchronized(this) {
		{
			$var($Iterator, i$, $nc(keystrokes)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($AWTKeyStroke, keystroke, $cast($AWTKeyStroke, i$->next()));
				{
					if (keystroke == nullptr) {
						$throwNew($IllegalArgumentException, "cannot set null focus traversal key"_s);
					}
					if ($nc(keystroke)->getKeyChar() != $KeyEvent::CHAR_UNDEFINED) {
						$throwNew($IllegalArgumentException, "focus traversal keys cannot map to KEY_TYPED events"_s);
					}
					for (int32_t i = 0; i < KeyboardFocusManager::TRAVERSAL_KEY_LENGTH; ++i) {
						if (i == id) {
							continue;
						}
						if ($nc($nc(this->defaultFocusTraversalKeys)->get(i))->contains(keystroke)) {
							$throwNew($IllegalArgumentException, "focus traversal keys must be unique for a Component"_s);
						}
					}
				}
			}
		}
		$assign(oldKeys, $nc(this->defaultFocusTraversalKeys)->get(id));
		$nc(this->defaultFocusTraversalKeys)->set(id, $($Collections::unmodifiableSet($$new($HashSet, static_cast<$Collection*>(keystrokes)))));
	}
	firePropertyChange($nc(KeyboardFocusManager::defaultFocusTraversalKeyPropertyNames)->get(id), oldKeys, keystrokes);
}

$Set* KeyboardFocusManager::getDefaultFocusTraversalKeys(int32_t id) {
	if (id < 0 || id >= KeyboardFocusManager::TRAVERSAL_KEY_LENGTH) {
		$throwNew($IllegalArgumentException, "invalid focus traversal key identifier"_s);
	}
	return $nc(this->defaultFocusTraversalKeys)->get(id);
}

$Container* KeyboardFocusManager::getCurrentFocusCycleRoot() {
	$synchronized(KeyboardFocusManager::class$) {
		if (KeyboardFocusManager::currentFocusCycleRoot == nullptr) {
			return nullptr;
		}
		return ($nc(KeyboardFocusManager::currentFocusCycleRoot)->appContext == $AppContext::getAppContext()) ? KeyboardFocusManager::currentFocusCycleRoot : ($Container*)nullptr;
	}
}

$Container* KeyboardFocusManager::getGlobalCurrentFocusCycleRoot() {
	$synchronized(KeyboardFocusManager::class$) {
		checkKFMSecurity();
		return KeyboardFocusManager::currentFocusCycleRoot;
	}
}

void KeyboardFocusManager::setGlobalCurrentFocusCycleRoot($Container* newFocusCycleRoot) {
	checkReplaceKFMPermission();
	$var($Container, oldFocusCycleRoot, nullptr);
	$synchronized(KeyboardFocusManager::class$) {
		$assign(oldFocusCycleRoot, getCurrentFocusCycleRoot());
		$assignStatic(KeyboardFocusManager::currentFocusCycleRoot, newFocusCycleRoot);
	}
	firePropertyChange("currentFocusCycleRoot"_s, oldFocusCycleRoot, newFocusCycleRoot);
}

void KeyboardFocusManager::setGlobalCurrentFocusCycleRootPriv($Container* newFocusCycleRoot) {
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($KeyboardFocusManager$3, this, newFocusCycleRoot)));
}

void KeyboardFocusManager::addPropertyChangeListener($PropertyChangeListener* listener) {
	if (listener != nullptr) {
		$synchronized(this) {
			if (this->changeSupport == nullptr) {
				$set(this, changeSupport, $new($PropertyChangeSupport, this));
			}
			$nc(this->changeSupport)->addPropertyChangeListener(listener);
		}
	}
}

void KeyboardFocusManager::removePropertyChangeListener($PropertyChangeListener* listener) {
	if (listener != nullptr) {
		$synchronized(this) {
			if (this->changeSupport != nullptr) {
				$nc(this->changeSupport)->removePropertyChangeListener(listener);
			}
		}
	}
}

$PropertyChangeListenerArray* KeyboardFocusManager::getPropertyChangeListeners() {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			$set(this, changeSupport, $new($PropertyChangeSupport, this));
		}
		return $nc(this->changeSupport)->getPropertyChangeListeners();
	}
}

void KeyboardFocusManager::addPropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	if (listener != nullptr) {
		$synchronized(this) {
			if (this->changeSupport == nullptr) {
				$set(this, changeSupport, $new($PropertyChangeSupport, this));
			}
			$nc(this->changeSupport)->addPropertyChangeListener(propertyName, listener);
		}
	}
}

void KeyboardFocusManager::removePropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	if (listener != nullptr) {
		$synchronized(this) {
			if (this->changeSupport != nullptr) {
				$nc(this->changeSupport)->removePropertyChangeListener(propertyName, listener);
			}
		}
	}
}

$PropertyChangeListenerArray* KeyboardFocusManager::getPropertyChangeListeners($String* propertyName) {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			$set(this, changeSupport, $new($PropertyChangeSupport, this));
		}
		return $nc(this->changeSupport)->getPropertyChangeListeners(propertyName);
	}
}

void KeyboardFocusManager::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if ($equals(oldValue, newValue)) {
		return;
	}
	$var($PropertyChangeSupport, changeSupport, this->changeSupport);
	if (changeSupport != nullptr) {
		changeSupport->firePropertyChange(propertyName, oldValue, newValue);
	}
}

void KeyboardFocusManager::addVetoableChangeListener($VetoableChangeListener* listener) {
	if (listener != nullptr) {
		$synchronized(this) {
			if (this->vetoableSupport == nullptr) {
				$set(this, vetoableSupport, $new($VetoableChangeSupport, this));
			}
			$nc(this->vetoableSupport)->addVetoableChangeListener(listener);
		}
	}
}

void KeyboardFocusManager::removeVetoableChangeListener($VetoableChangeListener* listener) {
	if (listener != nullptr) {
		$synchronized(this) {
			if (this->vetoableSupport != nullptr) {
				$nc(this->vetoableSupport)->removeVetoableChangeListener(listener);
			}
		}
	}
}

$VetoableChangeListenerArray* KeyboardFocusManager::getVetoableChangeListeners() {
	$synchronized(this) {
		if (this->vetoableSupport == nullptr) {
			$set(this, vetoableSupport, $new($VetoableChangeSupport, this));
		}
		return $nc(this->vetoableSupport)->getVetoableChangeListeners();
	}
}

void KeyboardFocusManager::addVetoableChangeListener($String* propertyName, $VetoableChangeListener* listener) {
	if (listener != nullptr) {
		$synchronized(this) {
			if (this->vetoableSupport == nullptr) {
				$set(this, vetoableSupport, $new($VetoableChangeSupport, this));
			}
			$nc(this->vetoableSupport)->addVetoableChangeListener(propertyName, listener);
		}
	}
}

void KeyboardFocusManager::removeVetoableChangeListener($String* propertyName, $VetoableChangeListener* listener) {
	if (listener != nullptr) {
		$synchronized(this) {
			if (this->vetoableSupport != nullptr) {
				$nc(this->vetoableSupport)->removeVetoableChangeListener(propertyName, listener);
			}
		}
	}
}

$VetoableChangeListenerArray* KeyboardFocusManager::getVetoableChangeListeners($String* propertyName) {
	$synchronized(this) {
		if (this->vetoableSupport == nullptr) {
			$set(this, vetoableSupport, $new($VetoableChangeSupport, this));
		}
		return $nc(this->vetoableSupport)->getVetoableChangeListeners(propertyName);
	}
}

void KeyboardFocusManager::fireVetoableChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if ($equals(oldValue, newValue)) {
		return;
	}
	$var($VetoableChangeSupport, vetoableSupport, this->vetoableSupport);
	if (vetoableSupport != nullptr) {
		vetoableSupport->fireVetoableChange(propertyName, oldValue, newValue);
	}
}

void KeyboardFocusManager::addKeyEventDispatcher($KeyEventDispatcher* dispatcher) {
	if (dispatcher != nullptr) {
		$synchronized(this) {
			if (this->keyEventDispatchers == nullptr) {
				$set(this, keyEventDispatchers, $new($LinkedList));
			}
			$nc(this->keyEventDispatchers)->add(dispatcher);
		}
	}
}

void KeyboardFocusManager::removeKeyEventDispatcher($KeyEventDispatcher* dispatcher) {
	if (dispatcher != nullptr) {
		$synchronized(this) {
			if (this->keyEventDispatchers != nullptr) {
				$nc(this->keyEventDispatchers)->remove($of(dispatcher));
			}
		}
	}
}

$List* KeyboardFocusManager::getKeyEventDispatchers() {
	$synchronized(this) {
		return (this->keyEventDispatchers != nullptr) ? $cast($List, $nc(this->keyEventDispatchers)->clone()) : ($List*)nullptr;
	}
}

void KeyboardFocusManager::addKeyEventPostProcessor($KeyEventPostProcessor* processor) {
	if (processor != nullptr) {
		$synchronized(this) {
			if (this->keyEventPostProcessors == nullptr) {
				$set(this, keyEventPostProcessors, $new($LinkedList));
			}
			$nc(this->keyEventPostProcessors)->add(processor);
		}
	}
}

void KeyboardFocusManager::removeKeyEventPostProcessor($KeyEventPostProcessor* processor) {
	if (processor != nullptr) {
		$synchronized(this) {
			if (this->keyEventPostProcessors != nullptr) {
				$nc(this->keyEventPostProcessors)->remove($of(processor));
			}
		}
	}
}

$List* KeyboardFocusManager::getKeyEventPostProcessors() {
	return (this->keyEventPostProcessors != nullptr) ? $cast($List, $nc(this->keyEventPostProcessors)->clone()) : ($List*)nullptr;
}

void KeyboardFocusManager::setMostRecentFocusOwner($Component* component) {
	$init(KeyboardFocusManager);
	$var($Component, window, component);
	while (window != nullptr && !($instanceOf($Window, window))) {
		$assign(window, window->parent);
	}
	if (window != nullptr) {
		setMostRecentFocusOwner($cast($Window, window), component);
	}
}

void KeyboardFocusManager::setMostRecentFocusOwner($Window* window, $Component* component) {
	$load(KeyboardFocusManager);
	$synchronized(class$) {
		$init(KeyboardFocusManager);
		$var($WeakReference, weakValue, nullptr);
		if (component != nullptr) {
			$assign(weakValue, $new($WeakReference, component));
		}
		$nc(KeyboardFocusManager::mostRecentFocusOwners)->put(window, weakValue);
	}
}

void KeyboardFocusManager::clearMostRecentFocusOwner($Component* comp) {
	$init(KeyboardFocusManager);
	$var($Container, window, nullptr);
	if (comp == nullptr) {
		return;
	}
	$synchronized($nc(comp)->getTreeLock()) {
		$assign(window, comp->getParent());
		while (window != nullptr && !($instanceOf($Window, window))) {
			$assign(window, window->getParent());
		}
	}
	$synchronized(KeyboardFocusManager::class$) {
		if ((window != nullptr) && (getMostRecentFocusOwner($cast($Window, window)) == comp)) {
			setMostRecentFocusOwner($cast($Window, window), nullptr);
		}
		if (window != nullptr) {
			$var($Window, realWindow, $cast($Window, window));
			if (realWindow->getTemporaryLostComponent() == comp) {
				realWindow->setTemporaryLostComponent(nullptr);
			}
		}
	}
}

$Component* KeyboardFocusManager::getMostRecentFocusOwner($Window* window) {
	$load(KeyboardFocusManager);
	$synchronized(class$) {
		$init(KeyboardFocusManager);
		$var($WeakReference, weakValue, $cast($WeakReference, $nc(KeyboardFocusManager::mostRecentFocusOwners)->get(window)));
		return weakValue == nullptr ? ($Component*)nullptr : $cast($Component, $nc(weakValue)->get());
	}
}

void KeyboardFocusManager::redispatchEvent($Component* target, $AWTEvent* e) {
	$nc(e)->focusManagerIsDispatching = true;
	$nc(target)->dispatchEvent(e);
	e->focusManagerIsDispatching = false;
}

void KeyboardFocusManager::focusNextComponent() {
	$var($Component, focusOwner, getFocusOwner());
	if (focusOwner != nullptr) {
		focusNextComponent(focusOwner);
	}
}

void KeyboardFocusManager::focusPreviousComponent() {
	$var($Component, focusOwner, getFocusOwner());
	if (focusOwner != nullptr) {
		focusPreviousComponent(focusOwner);
	}
}

void KeyboardFocusManager::upFocusCycle() {
	$var($Component, focusOwner, getFocusOwner());
	if (focusOwner != nullptr) {
		upFocusCycle(focusOwner);
	}
}

void KeyboardFocusManager::downFocusCycle() {
	$var($Component, focusOwner, getFocusOwner());
	if ($instanceOf($Container, focusOwner)) {
		downFocusCycle($cast($Container, focusOwner));
	}
}

void KeyboardFocusManager::dumpRequests() {
	$init($System);
	$nc($System::err)->println($$str({">>> Requests dump, time: "_s, $$str($System::currentTimeMillis())}));
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		{
			$var($Iterator, i$, $nc(KeyboardFocusManager::heavyweightRequests)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($KeyboardFocusManager$HeavyweightFocusRequest, req, $cast($KeyboardFocusManager$HeavyweightFocusRequest, i$->next()));
				{
					$nc($System::err)->println($$str({">>> Req: "_s, req}));
				}
			}
		}
	}
	$nc($System::err)->println(""_s);
}

bool KeyboardFocusManager::processSynchronousLightweightTransfer($Component* heavyweight, $Component* descendant$renamed, bool temporary, bool focusedWindowChangeAllowed, int64_t time) {
	$init(KeyboardFocusManager);
	$var($Component, descendant, descendant$renamed);
	$var($Window, parentWindow, $SunToolkit::getContainingWindow(heavyweight));
	if (parentWindow == nullptr || !$nc(parentWindow)->syncLWRequests) {
		return false;
	}
	if (descendant == nullptr) {
		$assign(descendant, heavyweight);
	}
	$var(KeyboardFocusManager, manager, getCurrentKeyboardFocusManager($($SunToolkit::targetToAppContext(descendant))));
	$var($FocusEvent, currentFocusOwnerEvent, nullptr);
	$var($FocusEvent, newFocusOwnerEvent, nullptr);
	$var($Component, currentFocusOwner, $nc(manager)->getGlobalFocusOwner());
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		$var($KeyboardFocusManager$HeavyweightFocusRequest, hwFocusRequest, getLastHWRequest());
		if (hwFocusRequest == nullptr && heavyweight == manager->getNativeFocusOwner() && KeyboardFocusManager::allowSyncFocusRequests) {
			if (descendant == currentFocusOwner) {
				return true;
			}
			manager->enqueueKeyEvents(time, descendant);
			$init($FocusEvent$Cause);
			$assign(hwFocusRequest, $new($KeyboardFocusManager$HeavyweightFocusRequest, heavyweight, descendant, temporary, $FocusEvent$Cause::UNKNOWN));
			$nc(KeyboardFocusManager::heavyweightRequests)->add(hwFocusRequest);
			if (currentFocusOwner != nullptr) {
				$assign(currentFocusOwnerEvent, $new($FocusEvent, currentFocusOwner, $FocusEvent::FOCUS_LOST, temporary, descendant));
			}
			$assign(newFocusOwnerEvent, $new($FocusEvent, descendant, $FocusEvent::FOCUS_GAINED, temporary, currentFocusOwner));
		}
	}
	bool result = false;
	bool clearing = KeyboardFocusManager::clearingCurrentLightweightRequests;
	$var($Throwable, caughtEx, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			KeyboardFocusManager::clearingCurrentLightweightRequests = false;
			$init($Component);
			$synchronized($Component::LOCK) {
				if (currentFocusOwnerEvent != nullptr && currentFocusOwner != nullptr) {
					$nc((static_cast<$AWTEvent*>(currentFocusOwnerEvent)))->isPosted = true;
					$assign(caughtEx, dispatchAndCatchException(caughtEx, currentFocusOwner, currentFocusOwnerEvent));
					result = true;
				}
				if (newFocusOwnerEvent != nullptr && descendant != nullptr) {
					$nc((static_cast<$AWTEvent*>(newFocusOwnerEvent)))->isPosted = true;
					$assign(caughtEx, dispatchAndCatchException(caughtEx, descendant, newFocusOwnerEvent));
					result = true;
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			KeyboardFocusManager::clearingCurrentLightweightRequests = clearing;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if ($instanceOf($RuntimeException, caughtEx)) {
		$throw($cast($RuntimeException, caughtEx));
	} else if ($instanceOf($Error, caughtEx)) {
		$throw($cast($Error, caughtEx));
	}
	return result;
}

int32_t KeyboardFocusManager::shouldNativelyFocusHeavyweight($Component* heavyweight, $Component* descendant$renamed, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	$init(KeyboardFocusManager);
	$var($Component, descendant, descendant$renamed);
	$init($PlatformLogger$Level);
	if ($nc(KeyboardFocusManager::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (heavyweight == nullptr) {
			$nc(KeyboardFocusManager::log)->fine("Assertion (heavyweight != null) failed"_s);
		}
		if (time == 0) {
			$nc(KeyboardFocusManager::log)->fine("Assertion (time != 0) failed"_s);
		}
	}
	if (descendant == nullptr) {
		$assign(descendant, heavyweight);
	}
	$var(KeyboardFocusManager, manager, getCurrentKeyboardFocusManager($($SunToolkit::targetToAppContext(descendant))));
	$var(KeyboardFocusManager, thisManager, getCurrentKeyboardFocusManager());
	$var($Component, currentFocusOwner, $nc(thisManager)->getGlobalFocusOwner());
	$var($Component, nativeFocusOwner, thisManager->getNativeFocusOwner());
	$var($Window, nativeFocusedWindow, thisManager->getNativeFocusedWindow());
	if ($nc(KeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(KeyboardFocusManager::focusLog)->finer("SNFH for {0} in {1}"_s, $$new($ObjectArray, {
			$($of($String::valueOf($of(descendant)))),
			$($of($String::valueOf($of(heavyweight))))
		}));
	}
	if ($nc(KeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(KeyboardFocusManager::focusLog)->finest("0. Current focus owner {0}"_s, $$new($ObjectArray, {$($of($String::valueOf($of(currentFocusOwner))))}));
		$nc(KeyboardFocusManager::focusLog)->finest("0. Native focus owner {0}"_s, $$new($ObjectArray, {$($of($String::valueOf($of(nativeFocusOwner))))}));
		$nc(KeyboardFocusManager::focusLog)->finest("0. Native focused window {0}"_s, $$new($ObjectArray, {$($of($String::valueOf($of(nativeFocusedWindow))))}));
	}
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		$var($KeyboardFocusManager$HeavyweightFocusRequest, hwFocusRequest, getLastHWRequest());
		if ($nc(KeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(KeyboardFocusManager::focusLog)->finest("Request {0}"_s, $$new($ObjectArray, {$($of($String::valueOf($of(hwFocusRequest))))}));
		}
		if (hwFocusRequest == nullptr && heavyweight == nativeFocusOwner && $nc(heavyweight)->getContainingWindow() == nativeFocusedWindow) {
			if (descendant == currentFocusOwner) {
				if ($nc(KeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
					$nc(KeyboardFocusManager::focusLog)->finest("1. SNFH_FAILURE for {0}"_s, $$new($ObjectArray, {$($of($String::valueOf($of(descendant))))}));
				}
				return KeyboardFocusManager::SNFH_FAILURE;
			}
			$nc(manager)->enqueueKeyEvents(time, descendant);
			$assign(hwFocusRequest, $new($KeyboardFocusManager$HeavyweightFocusRequest, heavyweight, descendant, temporary, cause));
			$nc(KeyboardFocusManager::heavyweightRequests)->add(hwFocusRequest);
			if (currentFocusOwner != nullptr) {
				$var($FocusEvent, currentFocusOwnerEvent, $new($FocusEvent, currentFocusOwner, $FocusEvent::FOCUS_LOST, temporary, descendant, cause));
				$SunToolkit::postEvent(currentFocusOwner->appContext, currentFocusOwnerEvent);
			}
			$var($FocusEvent, newFocusOwnerEvent, $new($FocusEvent, descendant, $FocusEvent::FOCUS_GAINED, temporary, currentFocusOwner, cause));
			$SunToolkit::postEvent($nc(descendant)->appContext, newFocusOwnerEvent);
			if ($nc(KeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
				$nc(KeyboardFocusManager::focusLog)->finest("2. SNFH_HANDLED for {0}"_s, $$new($ObjectArray, {$($of($String::valueOf($of(descendant))))}));
			}
			return KeyboardFocusManager::SNFH_SUCCESS_HANDLED;
		} else if (hwFocusRequest != nullptr && hwFocusRequest->heavyweight == heavyweight) {
			if (hwFocusRequest->addLightweightRequest(descendant, temporary, cause)) {
				$nc(manager)->enqueueKeyEvents(time, descendant);
			}
			if ($nc(KeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
				$nc(KeyboardFocusManager::focusLog)->finest($$str({"3. SNFH_HANDLED for lightweight"_s, descendant, " in "_s, heavyweight}));
			}
			return KeyboardFocusManager::SNFH_SUCCESS_HANDLED;
		} else {
			if (!focusedWindowChangeAllowed) {
				$init($KeyboardFocusManager$HeavyweightFocusRequest);
				if (hwFocusRequest == $KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER) {
					int32_t size = $nc(KeyboardFocusManager::heavyweightRequests)->size();
					$assign(hwFocusRequest, (size >= 2) ? $cast($KeyboardFocusManager$HeavyweightFocusRequest, $nc(KeyboardFocusManager::heavyweightRequests)->get(size - 2)) : ($KeyboardFocusManager$HeavyweightFocusRequest*)nullptr);
				}
				if (focusedWindowChanged(heavyweight, (hwFocusRequest != nullptr) ? hwFocusRequest->heavyweight : static_cast<$Component*>(nativeFocusedWindow))) {
					if ($nc(KeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
						$nc(KeyboardFocusManager::focusLog)->finest($$str({"4. SNFH_FAILURE for "_s, descendant}));
					}
					return KeyboardFocusManager::SNFH_FAILURE;
				}
			}
			$nc(manager)->enqueueKeyEvents(time, descendant);
			$nc(KeyboardFocusManager::heavyweightRequests)->add($$new($KeyboardFocusManager$HeavyweightFocusRequest, heavyweight, descendant, temporary, cause));
			if ($nc(KeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
				$nc(KeyboardFocusManager::focusLog)->finest($$str({"5. SNFH_PROCEED for "_s, descendant}));
			}
			return KeyboardFocusManager::SNFH_SUCCESS_PROCEED;
		}
	}
}

$Window* KeyboardFocusManager::markClearGlobalFocusOwner() {
	$init(KeyboardFocusManager);
	$var($Component, nativeFocusedWindow, $nc($(getCurrentKeyboardFocusManager()))->getNativeFocusedWindow());
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		$var($KeyboardFocusManager$HeavyweightFocusRequest, hwFocusRequest, getLastHWRequest());
		$init($KeyboardFocusManager$HeavyweightFocusRequest);
		if (hwFocusRequest == $KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER) {
			return nullptr;
		}
		$nc(KeyboardFocusManager::heavyweightRequests)->add($KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER);
		$var($Component, activeWindow, (hwFocusRequest != nullptr) ? static_cast<$Component*>($SunToolkit::getContainingWindow($nc(hwFocusRequest)->heavyweight)) : nativeFocusedWindow);
		while (activeWindow != nullptr && !(($instanceOf($Frame, activeWindow)) || ($instanceOf($Dialog, activeWindow)))) {
			$assign(activeWindow, $nc(activeWindow)->getParent_NoClientCode());
		}
		return $cast($Window, activeWindow);
	}
}

$Component* KeyboardFocusManager::getCurrentWaitingRequest($Component* parent) {
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		$var($KeyboardFocusManager$HeavyweightFocusRequest, hwFocusRequest, getFirstHWRequest());
		if (hwFocusRequest != nullptr) {
			if (hwFocusRequest->heavyweight == parent) {
				$var($KeyboardFocusManager$LightweightFocusRequest, lwFocusRequest, $cast($KeyboardFocusManager$LightweightFocusRequest, $nc(hwFocusRequest->lightweightRequests)->getFirst()));
				if (lwFocusRequest != nullptr) {
					return lwFocusRequest->component;
				}
			}
		}
	}
	return nullptr;
}

bool KeyboardFocusManager::isAutoFocusTransferEnabled() {
	$init(KeyboardFocusManager);
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		return ($nc(KeyboardFocusManager::heavyweightRequests)->size() == 0) && !KeyboardFocusManager::disableRestoreFocus && (nullptr == KeyboardFocusManager::currentLightweightRequests);
	}
}

bool KeyboardFocusManager::isAutoFocusTransferEnabledFor($Component* comp) {
	$init(KeyboardFocusManager);
	bool var$0 = isAutoFocusTransferEnabled();
	return var$0 && $nc(comp)->isAutoFocusTransferOnDisposal();
}

$Throwable* KeyboardFocusManager::dispatchAndCatchException($Throwable* ex, $Component* comp, $FocusEvent* event) {
	$init(KeyboardFocusManager);
	$var($Throwable, retEx, nullptr);
	try {
		$nc(comp)->dispatchEvent(event);
	} catch ($RuntimeException&) {
		$var($RuntimeException, re, $catch());
		$assign(retEx, re);
	} catch ($Error&) {
		$var($Error, er, $catch());
		$assign(retEx, er);
	}
	if (retEx != nullptr) {
		if (ex != nullptr) {
			handleException(ex);
		}
		return retEx;
	}
	return ex;
}

void KeyboardFocusManager::handleException($Throwable* ex) {
	$init(KeyboardFocusManager);
	$nc(ex)->printStackTrace();
}

void KeyboardFocusManager::processCurrentLightweightRequests() {
	$init(KeyboardFocusManager);
	$var(KeyboardFocusManager, manager, getCurrentKeyboardFocusManager());
	$var($LinkedList, localLightweightRequests, nullptr);
	$var($Component, globalFocusOwner, $nc(manager)->getGlobalFocusOwner());
	if ((globalFocusOwner != nullptr) && (globalFocusOwner->appContext != $AppContext::getAppContext())) {
		return;
	}
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		if (KeyboardFocusManager::currentLightweightRequests != nullptr) {
			KeyboardFocusManager::clearingCurrentLightweightRequests = true;
			KeyboardFocusManager::disableRestoreFocus = true;
			$assign(localLightweightRequests, KeyboardFocusManager::currentLightweightRequests);
			KeyboardFocusManager::allowSyncFocusRequests = ($nc(localLightweightRequests)->size() < 2);
			$assignStatic(KeyboardFocusManager::currentLightweightRequests, nullptr);
		} else {
			return;
		}
	}
	$var($Throwable, caughtEx, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (localLightweightRequests != nullptr) {
				$var($Component, lastFocusOwner, nullptr);
				$var($Component, currentFocusOwner, nullptr);
				{
					$var($Iterator, iter, localLightweightRequests->iterator());
					for (; $nc(iter)->hasNext();) {
						$assign(currentFocusOwner, manager->getGlobalFocusOwner());
						$var($KeyboardFocusManager$LightweightFocusRequest, lwFocusRequest, $cast($KeyboardFocusManager$LightweightFocusRequest, iter->next()));
						if (!iter->hasNext()) {
							KeyboardFocusManager::disableRestoreFocus = false;
						}
						$var($FocusEvent, currentFocusOwnerEvent, nullptr);
						if (currentFocusOwner != nullptr) {
							$assign(currentFocusOwnerEvent, $new($FocusEvent, currentFocusOwner, $FocusEvent::FOCUS_LOST, $nc(lwFocusRequest)->temporary, lwFocusRequest->component, lwFocusRequest->cause));
						}
						$var($FocusEvent, newFocusOwnerEvent, $new($FocusEvent, $nc(lwFocusRequest)->component, $FocusEvent::FOCUS_GAINED, lwFocusRequest->temporary, currentFocusOwner == nullptr ? lastFocusOwner : currentFocusOwner, lwFocusRequest->cause));
						if (currentFocusOwner != nullptr) {
							$nc((static_cast<$AWTEvent*>(currentFocusOwnerEvent)))->isPosted = true;
							$assign(caughtEx, dispatchAndCatchException(caughtEx, currentFocusOwner, currentFocusOwnerEvent));
						}
						$nc((static_cast<$AWTEvent*>(newFocusOwnerEvent)))->isPosted = true;
						$assign(caughtEx, dispatchAndCatchException(caughtEx, $nc(lwFocusRequest)->component, newFocusOwnerEvent));
						if (manager->getGlobalFocusOwner() == $nc(lwFocusRequest)->component) {
							$assign(lastFocusOwner, lwFocusRequest->component);
						}
					}
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			KeyboardFocusManager::clearingCurrentLightweightRequests = false;
			KeyboardFocusManager::disableRestoreFocus = false;
			$assign(localLightweightRequests, nullptr);
			KeyboardFocusManager::allowSyncFocusRequests = true;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if ($instanceOf($RuntimeException, caughtEx)) {
		$throw($cast($RuntimeException, caughtEx));
	} else if ($instanceOf($Error, caughtEx)) {
		$throw($cast($Error, caughtEx));
	}
}

$FocusEvent* KeyboardFocusManager::retargetUnexpectedFocusEvent($FocusEvent* fe) {
	$init(KeyboardFocusManager);
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		if (removeFirstRequest()) {
			return $cast($FocusEvent, retargetFocusEvent(fe));
		}
		$var($Component, source, $nc(fe)->getComponent());
		$var($Component, opposite, fe->getOppositeComponent());
		bool temporary = false;
		bool var$0 = fe->getID() == $FocusEvent::FOCUS_LOST;
		if (var$0 && (opposite == nullptr || isTemporary(opposite, source))) {
			temporary = true;
		}
		$init($FocusEvent$Cause);
		return $new($FocusEvent, source, fe->getID(), temporary, opposite, $FocusEvent$Cause::UNEXPECTED);
	}
}

$FocusEvent* KeyboardFocusManager::retargetFocusGained($FocusEvent* fe) {
	$init(KeyboardFocusManager);
	if (!KeyboardFocusManager::$assertionsDisabled && !($nc(fe)->getID() == $FocusEvent::FOCUS_GAINED)) {
		$throwNew($AssertionError);
	}
	$var($Component, currentFocusOwner, $nc($(getCurrentKeyboardFocusManager()))->getGlobalFocusOwner());
	$var($Component, source, $nc(fe)->getComponent());
	$var($Component, opposite, fe->getOppositeComponent());
	$var($Component, nativeSource, getHeavyweight(source));
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		$var($KeyboardFocusManager$HeavyweightFocusRequest, hwFocusRequest, getFirstHWRequest());
		$init($KeyboardFocusManager$HeavyweightFocusRequest);
		if (hwFocusRequest == $KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER) {
			return retargetUnexpectedFocusEvent(fe);
		}
		if (source != nullptr && nativeSource == nullptr && hwFocusRequest != nullptr) {
			if (source == $nc($(hwFocusRequest->getFirstLightweightRequest()))->component) {
				$assign(source, hwFocusRequest->heavyweight);
				$assign(nativeSource, source);
			}
		}
		if (hwFocusRequest != nullptr && nativeSource == hwFocusRequest->heavyweight) {
			$nc(KeyboardFocusManager::heavyweightRequests)->removeFirst();
			$var($KeyboardFocusManager$LightweightFocusRequest, lwFocusRequest, $cast($KeyboardFocusManager$LightweightFocusRequest, $nc(hwFocusRequest->lightweightRequests)->removeFirst()));
			$var($Component, newSource, $nc(lwFocusRequest)->component);
			if (currentFocusOwner != nullptr) {
				$assignStatic(KeyboardFocusManager::newFocusOwner, newSource);
			}
			bool temporary = (opposite == nullptr || isTemporary(newSource, opposite)) ? false : lwFocusRequest->temporary;
			if ($nc(hwFocusRequest->lightweightRequests)->size() > 0) {
				$assignStatic(KeyboardFocusManager::currentLightweightRequests, hwFocusRequest->lightweightRequests);
				$EventQueue::invokeLater($$new($KeyboardFocusManager$4));
			}
			return $new($FocusEvent, newSource, $FocusEvent::FOCUS_GAINED, temporary, opposite, lwFocusRequest->cause);
		}
		if (currentFocusOwner != nullptr && $equals(currentFocusOwner->getContainingWindow(), source) && (hwFocusRequest == nullptr || source != $nc(hwFocusRequest)->heavyweight)) {
			$init($FocusEvent$Cause);
			return $new($FocusEvent, currentFocusOwner, $FocusEvent::FOCUS_GAINED, false, nullptr, $FocusEvent$Cause::ACTIVATION);
		}
		return retargetUnexpectedFocusEvent(fe);
	}
}

$FocusEvent* KeyboardFocusManager::retargetFocusLost($FocusEvent* fe$renamed) {
	$init(KeyboardFocusManager);
	$var($FocusEvent, fe, fe$renamed);
	if (!KeyboardFocusManager::$assertionsDisabled && !($nc(fe)->getID() == $FocusEvent::FOCUS_LOST)) {
		$throwNew($AssertionError);
	}
	$var($Component, currentFocusOwner, $nc($(getCurrentKeyboardFocusManager()))->getGlobalFocusOwner());
	$var($Component, opposite, $nc(fe)->getOppositeComponent());
	$var($Component, nativeOpposite, getHeavyweight(opposite));
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		$var($KeyboardFocusManager$HeavyweightFocusRequest, hwFocusRequest, getFirstHWRequest());
		$init($KeyboardFocusManager$HeavyweightFocusRequest);
		if (hwFocusRequest == $KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER) {
			if (currentFocusOwner != nullptr) {
				$nc(KeyboardFocusManager::heavyweightRequests)->removeFirst();
				$init($FocusEvent$Cause);
				return $new($FocusEvent, currentFocusOwner, $FocusEvent::FOCUS_LOST, false, nullptr, $FocusEvent$Cause::CLEAR_GLOBAL_FOCUS_OWNER);
			}
		} else if (opposite == nullptr) {
			if (currentFocusOwner != nullptr) {
				$init($FocusEvent$Cause);
				return $new($FocusEvent, currentFocusOwner, $FocusEvent::FOCUS_LOST, true, nullptr, $FocusEvent$Cause::ACTIVATION);
			} else {
				return fe;
			}
		} else if (hwFocusRequest != nullptr && (nativeOpposite == hwFocusRequest->heavyweight || nativeOpposite == nullptr && opposite == $nc($(hwFocusRequest->getFirstLightweightRequest()))->component)) {
			if (currentFocusOwner == nullptr) {
				return fe;
			}
			$var($KeyboardFocusManager$LightweightFocusRequest, lwFocusRequest, $cast($KeyboardFocusManager$LightweightFocusRequest, $nc(hwFocusRequest->lightweightRequests)->getFirst()));
			bool temporary = isTemporary(opposite, currentFocusOwner) ? true : $nc(lwFocusRequest)->temporary;
			return $new($FocusEvent, currentFocusOwner, $FocusEvent::FOCUS_LOST, temporary, lwFocusRequest->component, lwFocusRequest->cause);
		} else if (focusedWindowChanged(opposite, currentFocusOwner)) {
			if (!fe->isTemporary() && currentFocusOwner != nullptr) {
				$init($FocusEvent$Cause);
				$assign(fe, $new($FocusEvent, currentFocusOwner, $FocusEvent::FOCUS_LOST, true, opposite, $FocusEvent$Cause::ACTIVATION));
			}
			return fe;
		}
		return retargetUnexpectedFocusEvent(fe);
	}
}

$AWTEvent* KeyboardFocusManager::retargetFocusEvent($AWTEvent* event$renamed) {
	$init(KeyboardFocusManager);
	$var($AWTEvent, event, event$renamed);
	if (KeyboardFocusManager::clearingCurrentLightweightRequests) {
		return event;
	}
	$var(KeyboardFocusManager, manager, getCurrentKeyboardFocusManager());
	$init($PlatformLogger$Level);
	if ($nc(KeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		if ($instanceOf($FocusEvent, event) || $instanceOf($WindowEvent, event)) {
			$nc(KeyboardFocusManager::focusLog)->finer(">>> {0}"_s, $$new($ObjectArray, {$($of($String::valueOf($of(event))))}));
		}
		if ($nc(KeyboardFocusManager::focusLog)->isLoggable($PlatformLogger$Level::FINER) && $instanceOf($KeyEvent, event)) {
			$nc(KeyboardFocusManager::focusLog)->finer("    focus owner is {0}"_s, $$new($ObjectArray, {$($of($String::valueOf($($of($nc(manager)->getGlobalFocusOwner())))))}));
			$nc(KeyboardFocusManager::focusLog)->finer(">>> {0}"_s, $$new($ObjectArray, {$($of($String::valueOf($of(event))))}));
		}
	}
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		if (KeyboardFocusManager::newFocusOwner != nullptr && $nc(event)->getID() == $FocusEvent::FOCUS_LOST) {
			$var($FocusEvent, fe, $cast($FocusEvent, event));
			bool var$0 = $nc(manager)->getGlobalFocusOwner() == fe->getComponent();
			if (var$0 && fe->getOppositeComponent() == KeyboardFocusManager::newFocusOwner) {
				$assignStatic(KeyboardFocusManager::newFocusOwner, nullptr);
				return event;
			}
		}
	}
	processCurrentLightweightRequests();
	switch ($nc(event)->getID()) {
	case $FocusEvent::FOCUS_GAINED:
		{
			{
				$assign(event, retargetFocusGained($cast($FocusEvent, event)));
				break;
			}
		}
	case $FocusEvent::FOCUS_LOST:
		{
			{
				$assign(event, retargetFocusLost($cast($FocusEvent, event)));
				break;
			}
		}
	default:
		{}
	}
	return event;
}

void KeyboardFocusManager::clearMarkers() {
}

bool KeyboardFocusManager::removeFirstRequest() {
	$init(KeyboardFocusManager);
	$var(KeyboardFocusManager, manager, KeyboardFocusManager::getCurrentKeyboardFocusManager());
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		$var($KeyboardFocusManager$HeavyweightFocusRequest, hwFocusRequest, getFirstHWRequest());
		if (hwFocusRequest != nullptr) {
			$nc(KeyboardFocusManager::heavyweightRequests)->removeFirst();
			if (hwFocusRequest->lightweightRequests != nullptr) {
				{
					$var($Iterator, lwIter, $nc(hwFocusRequest->lightweightRequests)->iterator());
					for (; $nc(lwIter)->hasNext();) {
						$nc(manager)->dequeueKeyEvents(-1, $nc(($cast($KeyboardFocusManager$LightweightFocusRequest, $(lwIter->next()))))->component);
					}
				}
			}
		}
		if ($nc(KeyboardFocusManager::heavyweightRequests)->size() == 0) {
			$nc(manager)->clearMarkers();
		}
		return ($nc(KeyboardFocusManager::heavyweightRequests)->size() > 0);
	}
}

void KeyboardFocusManager::removeLastFocusRequest($Component* heavyweight) {
	$init(KeyboardFocusManager);
	$init($PlatformLogger$Level);
	if ($nc(KeyboardFocusManager::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (heavyweight == nullptr) {
			$nc(KeyboardFocusManager::log)->fine("Assertion (heavyweight != null) failed"_s);
		}
	}
	$var(KeyboardFocusManager, manager, KeyboardFocusManager::getCurrentKeyboardFocusManager());
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		$var($KeyboardFocusManager$HeavyweightFocusRequest, hwFocusRequest, getLastHWRequest());
		if (hwFocusRequest != nullptr && hwFocusRequest->heavyweight == heavyweight) {
			$nc(KeyboardFocusManager::heavyweightRequests)->removeLast();
		}
		if ($nc(KeyboardFocusManager::heavyweightRequests)->size() == 0) {
			$nc(manager)->clearMarkers();
		}
	}
}

bool KeyboardFocusManager::focusedWindowChanged($Component* to, $Component* from) {
	$init(KeyboardFocusManager);
	$var($Window, wto, $SunToolkit::getContainingWindow(to));
	$var($Window, wfrom, $SunToolkit::getContainingWindow(from));
	if (wto == nullptr && wfrom == nullptr) {
		return true;
	}
	if (wto == nullptr) {
		return true;
	}
	if (wfrom == nullptr) {
		return true;
	}
	return (wto != wfrom);
}

bool KeyboardFocusManager::isTemporary($Component* to, $Component* from) {
	$init(KeyboardFocusManager);
	$var($Window, wto, $SunToolkit::getContainingWindow(to));
	$var($Window, wfrom, $SunToolkit::getContainingWindow(from));
	if (wto == nullptr && wfrom == nullptr) {
		return false;
	}
	if (wto == nullptr) {
		return true;
	}
	if (wfrom == nullptr) {
		return false;
	}
	return (wto != wfrom);
}

$Component* KeyboardFocusManager::getHeavyweight($Component* comp) {
	$init(KeyboardFocusManager);
	if (comp == nullptr || $nc(comp)->peer == nullptr) {
		return nullptr;
	} else if ($instanceOf($LightweightPeer, comp->peer)) {
		return comp->getNativeContainer();
	} else {
		return comp;
	}
}

bool KeyboardFocusManager::isProxyActiveImpl($KeyEvent* e) {
	$init(KeyboardFocusManager);
	return $nc($($AWTAccessor::getKeyEventAccessor()))->isProxyActive(e);
}

bool KeyboardFocusManager::isProxyActive($KeyEvent* e) {
	$init(KeyboardFocusManager);
	if (!$GraphicsEnvironment::isHeadless()) {
		return isProxyActiveImpl(e);
	} else {
		return false;
	}
}

$KeyboardFocusManager$HeavyweightFocusRequest* KeyboardFocusManager::getLastHWRequest() {
	$init(KeyboardFocusManager);
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		return ($nc(KeyboardFocusManager::heavyweightRequests)->size() > 0) ? $cast($KeyboardFocusManager$HeavyweightFocusRequest, $nc(KeyboardFocusManager::heavyweightRequests)->getLast()) : ($KeyboardFocusManager$HeavyweightFocusRequest*)nullptr;
	}
}

$KeyboardFocusManager$HeavyweightFocusRequest* KeyboardFocusManager::getFirstHWRequest() {
	$init(KeyboardFocusManager);
	$synchronized(KeyboardFocusManager::heavyweightRequests) {
		return ($nc(KeyboardFocusManager::heavyweightRequests)->size() > 0) ? $cast($KeyboardFocusManager$HeavyweightFocusRequest, $nc(KeyboardFocusManager::heavyweightRequests)->getFirst()) : ($KeyboardFocusManager$HeavyweightFocusRequest*)nullptr;
	}
}

void KeyboardFocusManager::checkReplaceKFMPermission() {
	$init(KeyboardFocusManager);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		if (KeyboardFocusManager::replaceKeyboardFocusManagerPermission == nullptr) {
			$assignStatic(KeyboardFocusManager::replaceKeyboardFocusManagerPermission, $new($AWTPermission, "replaceKeyboardFocusManager"_s));
		}
		security->checkPermission(KeyboardFocusManager::replaceKeyboardFocusManagerPermission);
	}
}

void KeyboardFocusManager::checkKFMSecurity() {
	if (this != getCurrentKeyboardFocusManager()) {
		checkReplaceKFMPermission();
	}
}

void clinit$KeyboardFocusManager($Class* class$) {
	KeyboardFocusManager::$assertionsDisabled = !KeyboardFocusManager::class$->desiredAssertionStatus();
	$assignStatic(KeyboardFocusManager::focusLog, $PlatformLogger::getLogger("java.awt.focus.KeyboardFocusManager"_s));
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			KeyboardFocusManager::initIDs();
		}
		$AWTAccessor::setKeyboardFocusManagerAccessor($$new($KeyboardFocusManager$1));
	}
	$assignStatic(KeyboardFocusManager::log, $PlatformLogger::getLogger("java.awt.KeyboardFocusManager"_s));
	$assignStatic(KeyboardFocusManager::defaultFocusTraversalKeyPropertyNames, $new($StringArray, {
		"forwardDefaultFocusTraversalKeys"_s,
		"backwardDefaultFocusTraversalKeys"_s,
		"upCycleDefaultFocusTraversalKeys"_s,
		"downCycleDefaultFocusTraversalKeys"_s
	}));
	$assignStatic(KeyboardFocusManager::mostRecentFocusOwners, $new($WeakHashMap));
	$assignStatic(KeyboardFocusManager::heavyweightRequests, $new($LinkedList));
	KeyboardFocusManager::allowSyncFocusRequests = true;
	$assignStatic(KeyboardFocusManager::newFocusOwner, nullptr);
}

KeyboardFocusManager::KeyboardFocusManager() {
}

$Class* KeyboardFocusManager::load$($String* name, bool initialize) {
	$loadClass(KeyboardFocusManager, name, initialize, &_KeyboardFocusManager_ClassInfo_, clinit$KeyboardFocusManager, allocate$KeyboardFocusManager);
	return class$;
}

$Class* KeyboardFocusManager::class$ = nullptr;

	} // awt
} // java