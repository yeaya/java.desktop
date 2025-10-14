#include <java/awt/Container.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Conditional.h>
#include <java/awt/Container$1.h>
#include <java/awt/Container$2.h>
#include <java/awt/Container$DropTargetEventTargetFilter.h>
#include <java/awt/Container$EventTargetFilter.h>
#include <java/awt/Container$MouseEventTargetFilter.h>
#include <java/awt/Container$WakingRunnable.h>
#include <java/awt/DefaultFocusTraversalPolicy.h>
#include <java/awt/Dimension.h>
#include <java/awt/Event.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsCallback$PaintAllCallback.h>
#include <java/awt/GraphicsCallback$PaintCallback.h>
#include <java/awt/GraphicsCallback$PaintHeavyweightComponentsCallback.h>
#include <java/awt/GraphicsCallback$PrintAllCallback.h>
#include <java/awt/GraphicsCallback$PrintCallback.h>
#include <java/awt/GraphicsCallback$PrintHeavyweightComponentsCallback.h>
#include <java/awt/GraphicsCallback.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/LightweightDispatcher.h>
#include <java/awt/Point.h>
#include <java/awt/PointerInfo.h>
#include <java/awt/SequencedEvent.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/HierarchyEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/OptionalDataException.h>
#include <java/io/PrintStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/EventListener.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JInternalFrame.h>
#include <sun/awt/AWTAccessor$ContainerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/security/action/GetBooleanAction.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ANCESTOR_MOVED
#undef ANCESTOR_RESIZED
#undef COMPONENT_ADDED
#undef COMPONENT_MOVED
#undef COMPONENT_REMOVED
#undef COMPONENT_RESIZED
#undef CONTAINER_EVENT_MASK
#undef EMPTY_ARRAY
#undef EMPTY_REGION
#undef FILTER
#undef FINE
#undef HEAVYWEIGHTS
#undef HIERARCHY_BOUNDS_EVENT_MASK
#undef HIERARCHY_CHANGED
#undef HIERARCHY_EVENT_MASK
#undef INCLUDE_SELF
#undef LIGHTWEIGHTS
#undef PARENT_CHANGED
#undef PRIORITY_EVENT
#undef SEARCH_HEAVYWEIGHTS
#undef SET_LOCATION
#undef TRAVERSAL_DOWN
#undef TRAVERSAL_KEY_LENGTH
#undef TWO_PASSES
#undef TYPE

using $ComponentArray = $Array<::java::awt::Component>;
using $ContainerListenerArray = $Array<::java::awt::event::ContainerListener>;
using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $SetArray = $Array<::java::util::Set>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Conditional = ::java::awt::Conditional;
using $Container$1 = ::java::awt::Container$1;
using $Container$2 = ::java::awt::Container$2;
using $Container$DropTargetEventTargetFilter = ::java::awt::Container$DropTargetEventTargetFilter;
using $Container$EventTargetFilter = ::java::awt::Container$EventTargetFilter;
using $Container$MouseEventTargetFilter = ::java::awt::Container$MouseEventTargetFilter;
using $Container$WakingRunnable = ::java::awt::Container$WakingRunnable;
using $DefaultFocusTraversalPolicy = ::java::awt::DefaultFocusTraversalPolicy;
using $Dimension = ::java::awt::Dimension;
using $Event = ::java::awt::Event;
using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $EventQueue = ::java::awt::EventQueue;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $GraphicsCallback = ::java::awt::GraphicsCallback;
using $GraphicsCallback$PaintAllCallback = ::java::awt::GraphicsCallback$PaintAllCallback;
using $GraphicsCallback$PaintCallback = ::java::awt::GraphicsCallback$PaintCallback;
using $GraphicsCallback$PaintHeavyweightComponentsCallback = ::java::awt::GraphicsCallback$PaintHeavyweightComponentsCallback;
using $GraphicsCallback$PrintAllCallback = ::java::awt::GraphicsCallback$PrintAllCallback;
using $GraphicsCallback$PrintCallback = ::java::awt::GraphicsCallback$PrintCallback;
using $GraphicsCallback$PrintHeavyweightComponentsCallback = ::java::awt::GraphicsCallback$PrintHeavyweightComponentsCallback;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $LightweightDispatcher = ::java::awt::LightweightDispatcher;
using $Point = ::java::awt::Point;
using $PointerInfo = ::java::awt::PointerInfo;
using $SequencedEvent = ::java::awt::SequencedEvent;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $OptionalDataException = ::java::io::OptionalDataException;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $EventListener = ::java::util::EventListener;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ContainerAccessor = ::sun::awt::AWTAccessor$ContainerAccessor;
using $AppContext = ::sun::awt::AppContext;
using $PeerEvent = ::sun::awt::PeerEvent;
using $SunGraphicsCallback = ::sun::awt::SunGraphicsCallback;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Region = ::sun::java2d::pipe::Region;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

class Container$$Lambda$lambda$startLWModal$1 : public $Runnable {
	$class(Container$$Lambda$lambda$startLWModal$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Container* inst, Container* nativeContainer) {
		$set(this, inst$, inst);
		$set(this, nativeContainer, nativeContainer);
	}
	virtual void run() override {
		$nc(inst$)->lambda$startLWModal$1(nativeContainer);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Container$$Lambda$lambda$startLWModal$1>());
	}
	Container* inst$ = nullptr;
	Container* nativeContainer = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Container$$Lambda$lambda$startLWModal$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Container$$Lambda$lambda$startLWModal$1, inst$)},
	{"nativeContainer", "Ljava/awt/Container;", nullptr, $PUBLIC, $field(Container$$Lambda$lambda$startLWModal$1, nativeContainer)},
	{}
};
$MethodInfo Container$$Lambda$lambda$startLWModal$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Container;Ljava/awt/Container;)V", nullptr, $PUBLIC, $method(static_cast<void(Container$$Lambda$lambda$startLWModal$1::*)(Container*,Container*)>(&Container$$Lambda$lambda$startLWModal$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Container$$Lambda$lambda$startLWModal$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.Container$$Lambda$lambda$startLWModal$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Container$$Lambda$lambda$startLWModal$1::load$($String* name, bool initialize) {
	$loadClass(Container$$Lambda$lambda$startLWModal$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Container$$Lambda$lambda$startLWModal$1::class$ = nullptr;

class Container$$Lambda$lambda$startLWModal$0$1 : public $Conditional {
	$class(Container$$Lambda$lambda$startLWModal$0$1, $NO_CLASS_INIT, $Conditional)
public:
	void init$(Container* nativeContainer) {
		$set(this, nativeContainer, nativeContainer);
	}
	virtual bool evaluate() override {
		 return Container::lambda$startLWModal$0(nativeContainer);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Container$$Lambda$lambda$startLWModal$0$1>());
	}
	Container* nativeContainer = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Container$$Lambda$lambda$startLWModal$0$1::fieldInfos[2] = {
	{"nativeContainer", "Ljava/awt/Container;", nullptr, $PUBLIC, $field(Container$$Lambda$lambda$startLWModal$0$1, nativeContainer)},
	{}
};
$MethodInfo Container$$Lambda$lambda$startLWModal$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $method(static_cast<void(Container$$Lambda$lambda$startLWModal$0$1::*)(Container*)>(&Container$$Lambda$lambda$startLWModal$0$1::init$))},
	{"evaluate", "()Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Container$$Lambda$lambda$startLWModal$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.Container$$Lambda$lambda$startLWModal$0$1",
	"java.lang.Object",
	"java.awt.Conditional",
	fieldInfos,
	methodInfos
};
$Class* Container$$Lambda$lambda$startLWModal$0$1::load$($String* name, bool initialize) {
	$loadClass(Container$$Lambda$lambda$startLWModal$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Container$$Lambda$lambda$startLWModal$0$1::class$ = nullptr;

$CompoundAttribute _Container_MethodAnnotations_countComponents25[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Container_MethodAnnotations_deliverEvent30[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Container_MethodAnnotations_insets79[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Container_MethodAnnotations_layout95[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Container_MethodAnnotations_locate100[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Container_MethodAnnotations_minimumSize101[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Container_MethodAnnotations_preferredSize115[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Container_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Container, log)},
	{"eventLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Container, eventLog)},
	{"EMPTY_ARRAY", "[Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Container, EMPTY_ARRAY)},
	{"component", "Ljava/util/List;", "Ljava/util/List<Ljava/awt/Component;>;", $PRIVATE, $field(Container, component)},
	{"layoutMgr", "Ljava/awt/LayoutManager;", nullptr, 0, $field(Container, layoutMgr)},
	{"dispatcher", "Ljava/awt/LightweightDispatcher;", nullptr, $PRIVATE, $field(Container, dispatcher)},
	{"focusTraversalPolicy", "Ljava/awt/FocusTraversalPolicy;", nullptr, $PRIVATE | $TRANSIENT, $field(Container, focusTraversalPolicy)},
	{"focusCycleRoot", "Z", nullptr, $PRIVATE, $field(Container, focusCycleRoot)},
	{"focusTraversalPolicyProvider", "Z", nullptr, $PRIVATE, $field(Container, focusTraversalPolicyProvider)},
	{"printingThreads", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Thread;>;", $PRIVATE | $TRANSIENT, $field(Container, printingThreads)},
	{"printing", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(Container, printing)},
	{"containerListener", "Ljava/awt/event/ContainerListener;", nullptr, $TRANSIENT, $field(Container, containerListener)},
	{"listeningChildren", "I", nullptr, $TRANSIENT, $field(Container, listeningChildren)},
	{"listeningBoundsChildren", "I", nullptr, $TRANSIENT, $field(Container, listeningBoundsChildren)},
	{"descendantsCount", "I", nullptr, $TRANSIENT, $field(Container, descendantsCount)},
	{"preserveBackgroundColor", "Ljava/awt/Color;", nullptr, $TRANSIENT, $field(Container, preserveBackgroundColor)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Container, serialVersionUID)},
	{"INCLUDE_SELF", "Z", nullptr, $STATIC | $FINAL, $constField(Container, INCLUDE_SELF)},
	{"SEARCH_HEAVYWEIGHTS", "Z", nullptr, $STATIC | $FINAL, $constField(Container, SEARCH_HEAVYWEIGHTS)},
	{"numOfHWComponents", "I", nullptr, $PRIVATE | $TRANSIENT, $field(Container, numOfHWComponents)},
	{"numOfLWComponents", "I", nullptr, $PRIVATE | $TRANSIENT, $field(Container, numOfLWComponents)},
	{"mixingLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Container, mixingLog)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Container, serialPersistentFields)},
	{"isJavaAwtSmartInvalidate", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Container, isJavaAwtSmartInvalidate)},
	{"descendUnconditionallyWhenValidating", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Container, descendUnconditionallyWhenValidating)},
	{"modalComp", "Ljava/awt/Component;", nullptr, $TRANSIENT, $field(Container, modalComp)},
	{"modalAppContext", "Lsun/awt/AppContext;", nullptr, $TRANSIENT, $field(Container, modalAppContext)},
	{"containerSerializedDataVersion", "I", nullptr, $PRIVATE, $field(Container, containerSerializedDataVersion)},
	{}
};

$MethodInfo _Container_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Container::*)()>(&Container::init$))},
	{"add", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"add", "(Ljava/lang/String;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/Component;I)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{"addContainerListener", "(Ljava/awt/event/ContainerListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addDelicately", "(Ljava/awt/Component;Ljava/awt/Container;I)V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)($Component*,Container*,int32_t)>(&Container::addDelicately))},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"adjustDescendants", "(I)V", nullptr, 0},
	{"adjustDescendantsOnParent", "(I)V", nullptr, 0},
	{"adjustListeningChildren", "(JI)V", nullptr, 0},
	{"applyComponentOrientation", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PUBLIC},
	{"areFocusTraversalKeysSet", "(I)Z", nullptr, $PUBLIC},
	{"canContainFocusOwner", "(Ljava/awt/Component;)Z", nullptr, 0},
	{"checkAddToSelf", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)($Component*)>(&Container::checkAddToSelf))},
	{"checkAdding", "(Ljava/awt/Component;I)V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)($Component*,int32_t)>(&Container::checkAdding))},
	{"checkGD", "(Ljava/lang/String;)V", nullptr, 0},
	{"checkNotAWindow", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)($Component*)>(&Container::checkNotAWindow))},
	{"clearCurrentFocusCycleRootOnHide", "()V", nullptr, 0},
	{"clearMostRecentFocusOwnerOnHide", "()V", nullptr, 0},
	{"containsFocus", "()Z", nullptr, $FINAL},
	{"countComponents", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Container_MethodAnnotations_countComponents25},
	{"countHierarchyMembers", "()I", nullptr, 0},
	{"createChildHierarchyEvents", "(IJZ)V", nullptr, $FINAL, $method(static_cast<void(Container::*)(int32_t,int64_t,bool)>(&Container::createChildHierarchyEvents))},
	{"createHierarchyEvents", "(ILjava/awt/Component;Ljava/awt/Container;JZ)I", nullptr, $FINAL},
	{"decreaseComponentCount", "(Ljava/awt/Component;)V", nullptr, $FINAL, $method(static_cast<void(Container::*)($Component*)>(&Container::decreaseComponentCount))},
	{"deliverEvent", "(Ljava/awt/Event;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Container_MethodAnnotations_deliverEvent30},
	{"dispatchEventImpl", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"dispatchEventToSelf", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"doLayout", "()V", nullptr, $PUBLIC},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"findComponentAt", "(II)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"findComponentAt", "(IIZ)Ljava/awt/Component;", nullptr, $FINAL, $method(static_cast<$Component*(Container::*)(int32_t,int32_t,bool)>(&Container::findComponentAt))},
	{"findComponentAt", "(Ljava/awt/Point;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"findComponentAtImpl", "(IIZ)Ljava/awt/Component;", nullptr, $FINAL, $method(static_cast<$Component*(Container::*)(int32_t,int32_t,bool)>(&Container::findComponentAtImpl))},
	{"findTraversalRoot", "()Ljava/awt/Container;", nullptr, $PRIVATE, $method(static_cast<Container*(Container::*)()>(&Container::findTraversalRoot))},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, 0},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, 0},
	{"getAccessibleChildrenCount", "()I", nullptr, 0},
	{"getAlignmentX", "()F", nullptr, $PUBLIC},
	{"getAlignmentY", "()F", nullptr, $PUBLIC},
	{"getBottommostComponentIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(Container::*)()>(&Container::getBottommostComponentIndex))},
	{"getChildAt", "(Ljava/awt/Component;IIZ)Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Component*(*)($Component*,int32_t,int32_t,bool)>(&Container::getChildAt))},
	{"getComponent", "(I)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentAt", "(II)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentAt", "(Ljava/awt/Point;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentCount", "()I", nullptr, $PUBLIC},
	{"getComponentZOrder", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"getComponents", "()[Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentsSync", "()[Ljava/awt/Component;", nullptr, 0},
	{"getComponents_NoClientCode", "()[Ljava/awt/Component;", nullptr, $FINAL, $method(static_cast<$ComponentArray*(Container::*)()>(&Container::getComponents_NoClientCode))},
	{"getContainerListeners", "()[Ljava/awt/event/ContainerListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getDropTargetEventTarget", "(IIZ)Ljava/awt/Component;", nullptr, 0},
	{"getFocusTraversalKeys", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $PUBLIC},
	{"getFocusTraversalPolicy", "()Ljava/awt/FocusTraversalPolicy;", nullptr, $PUBLIC},
	{"getHeavyweightContainer", "()Ljava/awt/Container;", nullptr, 0},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLayout", "()Ljava/awt/LayoutManager;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getListenersCount", "(IZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Container::*)(int32_t,bool)>(&Container::getListenersCount))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMouseEventTarget", "(IIZ)Ljava/awt/Component;", nullptr, 0},
	{"getMouseEventTarget", "(IIZLjava/awt/Container$EventTargetFilter;Z)Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(Container::*)(int32_t,int32_t,bool,$Container$EventTargetFilter*,bool)>(&Container::getMouseEventTarget))},
	{"getMouseEventTargetImpl", "(IIZLjava/awt/Container$EventTargetFilter;ZZ)Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(Container::*)(int32_t,int32_t,bool,$Container$EventTargetFilter*,bool,bool)>(&Container::getMouseEventTargetImpl))},
	{"getMousePosition", "(Z)Ljava/awt/Point;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getOpaqueShape", "()Lsun/java2d/pipe/Region;", nullptr, $FINAL},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getTopmostComponentIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(Container::*)()>(&Container::getTopmostComponentIndex))},
	{"getTraversalRoot", "()Ljava/awt/Container;", nullptr, $FINAL},
	{"hasHeavyweightDescendants", "()Z", nullptr, $FINAL, $method(static_cast<bool(Container::*)()>(&Container::hasHeavyweightDescendants))},
	{"hasLightweightDescendants", "()Z", nullptr, $FINAL, $method(static_cast<bool(Container::*)()>(&Container::hasLightweightDescendants))},
	{"increaseComponentCount", "(Ljava/awt/Component;)V", nullptr, $FINAL, $method(static_cast<void(Container::*)($Component*)>(&Container::increaseComponentCount))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Container::initIDs))},
	{"initializeFocusTraversalKeys", "()V", nullptr, 0},
	{"insets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Container_MethodAnnotations_insets79},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"invalidateParent", "()V", nullptr, 0},
	{"invalidateTree", "()V", nullptr, 0},
	{"isAncestorOf", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"isFocusCycleRoot", "(Ljava/awt/Container;)Z", nullptr, $PUBLIC},
	{"isFocusCycleRoot", "()Z", nullptr, $PUBLIC},
	{"isFocusTraversalPolicyProvider", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Container::*)()>(&Container::isFocusTraversalPolicyProvider))},
	{"isFocusTraversalPolicySet", "()Z", nullptr, $PUBLIC},
	{"isParentOf", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Container::*)($Component*)>(&Container::isParentOf))},
	{"isRecursivelyVisibleUpToHeavyweightContainer", "()Z", nullptr, $FINAL, $method(static_cast<bool(Container::*)()>(&Container::isRecursivelyVisibleUpToHeavyweightContainer))},
	{"isRemoveNotifyNeeded", "(Ljava/awt/Component;Ljava/awt/Container;Ljava/awt/Container;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Component*,Container*,Container*)>(&Container::isRemoveNotifyNeeded))},
	{"isSameOrAncestorOf", "(Ljava/awt/Component;Z)Z", nullptr, 0},
	{"isValidateRoot", "()Z", nullptr, $PUBLIC},
	{"lambda$startLWModal$0", "(Ljava/awt/Container;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(Container*)>(&Container::lambda$startLWModal$0))},
	{"lambda$startLWModal$1", "(Ljava/awt/Container;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(Container::*)(Container*)>(&Container::lambda$startLWModal$1))},
	{"layout", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Container_MethodAnnotations_layout95},
	{"lightweightPaint", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"lightweightPrint", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"list", "(Ljava/io/PrintStream;I)V", nullptr, $PUBLIC},
	{"list", "(Ljava/io/PrintWriter;I)V", nullptr, $PUBLIC},
	{"locate", "(II)Ljava/awt/Component;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Container_MethodAnnotations_locate100},
	{"minimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Container_MethodAnnotations_minimumSize101},
	{"mixOnHiding", "(Z)V", nullptr, 0},
	{"mixOnReshaping", "()V", nullptr, 0},
	{"mixOnShowing", "()V", nullptr, 0},
	{"mixOnValidating", "()V", nullptr, 0},
	{"mixOnZOrderChanging", "(II)V", nullptr, 0},
	{"numListening", "(J)I", nullptr, 0},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintComponents", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintHeavyweightComponents", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"postProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"postsOldMouseEvents", "()Z", nullptr, 0},
	{"preProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"preferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Container_MethodAnnotations_preferredSize115},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"printComponents", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"printHeavyweightComponents", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"processContainerEvent", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PROTECTED},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"proxyEnableEvents", "(J)V", nullptr, 0},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)($ObjectInputStream*)>(&Container::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"recursiveApplyCurrentShape", "()V", nullptr, $FINAL, $method(static_cast<void(Container::*)()>(&Container::recursiveApplyCurrentShape))},
	{"recursiveApplyCurrentShape", "(I)V", nullptr, $FINAL, $method(static_cast<void(Container::*)(int32_t)>(&Container::recursiveApplyCurrentShape))},
	{"recursiveApplyCurrentShape", "(II)V", nullptr, $FINAL, $method(static_cast<void(Container::*)(int32_t,int32_t)>(&Container::recursiveApplyCurrentShape))},
	{"recursiveHideHeavyweightChildren", "()V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)()>(&Container::recursiveHideHeavyweightChildren))},
	{"recursiveRelocateHeavyweightChildren", "(Ljava/awt/Point;)V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)($Point*)>(&Container::recursiveRelocateHeavyweightChildren))},
	{"recursiveShowHeavyweightChildren", "()V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)()>(&Container::recursiveShowHeavyweightChildren))},
	{"recursiveSubtractAndApplyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $FINAL, $method(static_cast<void(Container::*)($Region*)>(&Container::recursiveSubtractAndApplyShape))},
	{"recursiveSubtractAndApplyShape", "(Lsun/java2d/pipe/Region;I)V", nullptr, $FINAL, $method(static_cast<void(Container::*)($Region*,int32_t)>(&Container::recursiveSubtractAndApplyShape))},
	{"recursiveSubtractAndApplyShape", "(Lsun/java2d/pipe/Region;II)V", nullptr, $FINAL, $method(static_cast<void(Container::*)($Region*,int32_t,int32_t)>(&Container::recursiveSubtractAndApplyShape))},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"removeContainerListener", "(Ljava/awt/event/ContainerListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeDelicately", "(Ljava/awt/Component;Ljava/awt/Container;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(Container::*)($Component*,Container*,int32_t)>(&Container::removeDelicately))},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"reparentChild", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)($Component*)>(&Container::reparentChild))},
	{"reparentTraverse", "(Ljava/awt/peer/ContainerPeer;Ljava/awt/Container;)V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)($ContainerPeer*,Container*)>(&Container::reparentTraverse))},
	{"setComponentZOrder", "(Ljava/awt/Component;I)V", nullptr, $PUBLIC},
	{"setFocusCycleRoot", "(Z)V", nullptr, $PUBLIC},
	{"setFocusTraversalKeys", "(ILjava/util/Set;)V", "(ILjava/util/Set<+Ljava/awt/AWTKeyStroke;>;)V", $PUBLIC},
	{"setFocusTraversalPolicy", "(Ljava/awt/FocusTraversalPolicy;)V", nullptr, $PUBLIC},
	{"setFocusTraversalPolicyProvider", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Container::*)(bool)>(&Container::setFocusTraversalPolicyProvider))},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC},
	{"startLWModal", "()V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)()>(&Container::startLWModal))},
	{"stopLWModal", "()V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)()>(&Container::stopLWModal))},
	{"transferFocusDownCycle", "()V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"updateChildGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $FINAL},
	{"validate", "()V", nullptr, $PUBLIC},
	{"validateTree", "()V", nullptr, $PROTECTED},
	{"validateUnconditionally", "()V", nullptr, $FINAL, $method(static_cast<void(Container::*)()>(&Container::validateUnconditionally))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Container::*)($ObjectOutputStream*)>(&Container::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 77

$InnerClassInfo _Container_InnerClassesInfo_[] = {
	{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
	{"java.awt.Container$WakingRunnable", "java.awt.Container", "WakingRunnable", $STATIC | $FINAL},
	{"java.awt.Container$DropTargetEventTargetFilter", "java.awt.Container", "DropTargetEventTargetFilter", $STATIC},
	{"java.awt.Container$MouseEventTargetFilter", "java.awt.Container", "MouseEventTargetFilter", $STATIC},
	{"java.awt.Container$EventTargetFilter", "java.awt.Container", "EventTargetFilter", $STATIC | $INTERFACE | $ABSTRACT},
	{"java.awt.Container$2", nullptr, nullptr, 0},
	{"java.awt.Container$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Container_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Container",
	"java.awt.Component",
	nullptr,
	_Container_FieldInfo_,
	_Container_MethodInfo_,
	nullptr,
	nullptr,
	_Container_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Container$AccessibleAWTContainer,java.awt.Container$AccessibleAWTContainer$AccessibleContainerHandler,java.awt.Container$WakingRunnable,java.awt.Container$DropTargetEventTargetFilter,java.awt.Container$MouseEventTargetFilter,java.awt.Container$EventTargetFilter,java.awt.Container$2,java.awt.Container$1"
};

$Object* allocate$Container($Class* clazz) {
	return $of($alloc(Container));
}

$PlatformLogger* Container::log = nullptr;
$PlatformLogger* Container::eventLog = nullptr;
$ComponentArray* Container::EMPTY_ARRAY = nullptr;
$PlatformLogger* Container::mixingLog = nullptr;

$ObjectStreamFieldArray* Container::serialPersistentFields = nullptr;
bool Container::isJavaAwtSmartInvalidate = false;

bool Container::descendUnconditionallyWhenValidating = false;

void Container::initIDs() {
	$init(Container);
	$prepareNativeStatic(Container, initIDs, void);
	$invokeNativeStatic(Container, initIDs);
	$finishNativeStatic();
}

void Container::init$() {
	$Component::init$();
	$set(this, component, $new($ArrayList));
	this->focusCycleRoot = false;
	this->printing = false;
	$set(this, preserveBackgroundColor, nullptr);
	this->numOfHWComponents = 0;
	this->numOfLWComponents = 0;
	this->containerSerializedDataVersion = 1;
}

void Container::initializeFocusTraversalKeys() {
	$set(this, focusTraversalKeys, $new($SetArray, 4));
}

int32_t Container::getComponentCount() {
	return countComponents();
}

int32_t Container::countComponents() {
	return $nc(this->component)->size();
}

$Component* Container::getComponent(int32_t n) {
	try {
		return $cast($Component, $nc(this->component)->get(n));
	} catch ($IndexOutOfBoundsException&) {
		$var($IndexOutOfBoundsException, z, $catch());
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"No such child: "_s, $$str(n)}));
	}
	$shouldNotReachHere();
}

$ComponentArray* Container::getComponents() {
	return getComponents_NoClientCode();
}

$ComponentArray* Container::getComponents_NoClientCode() {
	return $fcast($ComponentArray, $nc(this->component)->toArray(Container::EMPTY_ARRAY));
}

$ComponentArray* Container::getComponentsSync() {
	$synchronized(getTreeLock()) {
		return getComponents();
	}
}

$Insets* Container::getInsets() {
	return insets();
}

$Insets* Container::insets() {
	$var($ComponentPeer, peer, this->peer);
	if ($instanceOf($ContainerPeer, peer)) {
		$var($ContainerPeer, cpeer, $cast($ContainerPeer, peer));
		return $cast($Insets, $nc($($nc(cpeer)->getInsets()))->clone());
	}
	return $new($Insets, 0, 0, 0, 0);
}

$Component* Container::add($Component* comp) {
	addImpl(comp, nullptr, -1);
	return comp;
}

$Component* Container::add($String* name, $Component* comp) {
	addImpl(comp, name, -1);
	return comp;
}

$Component* Container::add($Component* comp, int32_t index) {
	addImpl(comp, nullptr, index);
	return comp;
}

void Container::checkAddToSelf($Component* comp) {
	if ($instanceOf(Container, comp)) {
		{
			$var(Container, cn, this);
			for (; cn != nullptr; $assign(cn, cn->parent)) {
				if ($equals(cn, comp)) {
					$throwNew($IllegalArgumentException, "adding container\'s parent to itself"_s);
				}
			}
		}
	}
}

void Container::checkNotAWindow($Component* comp) {
	if ($instanceOf($Window, comp)) {
		$throwNew($IllegalArgumentException, "adding a window to a container"_s);
	}
}

void Container::checkAdding($Component* comp, int32_t index) {
	checkTreeLock();
	$var($GraphicsConfiguration, thisGC, getGraphicsConfiguration());
	if (index > $nc(this->component)->size() || index < 0) {
		$throwNew($IllegalArgumentException, "illegal component position"_s);
	}
	if ($nc(comp)->parent == this) {
		if (index == $nc(this->component)->size()) {
			$throwNew($IllegalArgumentException, $$str({"illegal component position "_s, $$str(index), " should be less than "_s, $$str($nc(this->component)->size())}));
		}
	}
	checkAddToSelf(comp);
	checkNotAWindow(comp);
	$var($Window, thisTopLevel, getContainingWindow());
	$var($Window, compTopLevel, $nc(comp)->getContainingWindow());
	if (thisTopLevel != compTopLevel) {
		$throwNew($IllegalArgumentException, "component and container should be in the same top-level window"_s);
	}
	if (thisGC != nullptr) {
		comp->checkGD($($nc($(thisGC->getDevice()))->getIDstring()));
	}
}

bool Container::removeDelicately($Component* comp, Container* newParent, int32_t newIndex) {
	checkTreeLock();
	int32_t index = getComponentZOrder(comp);
	bool needRemoveNotify = isRemoveNotifyNeeded(comp, this, newParent);
	if (needRemoveNotify) {
		$nc(comp)->removeNotify();
	}
	if (newParent != this) {
		if (this->layoutMgr != nullptr) {
			$nc(this->layoutMgr)->removeLayoutComponent(comp);
		}
		adjustListeningChildren($AWTEvent::HIERARCHY_EVENT_MASK, -$nc(comp)->numListening($AWTEvent::HIERARCHY_EVENT_MASK));
		adjustListeningChildren($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK, -$nc(comp)->numListening($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK));
		adjustDescendants(-($nc(comp)->countHierarchyMembers()));
		$set($nc(comp), parent, nullptr);
		if (needRemoveNotify) {
			comp->setGraphicsConfiguration(nullptr);
		}
		$nc(this->component)->remove(index);
		invalidateIfValid();
	} else {
		$nc(this->component)->remove(index);
		$nc(this->component)->add(newIndex, comp);
	}
	if ($nc(comp)->parent == nullptr) {
		if (this->containerListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::CONTAINER_EVENT_MASK)) != 0 || $Toolkit::enabledOnToolkit($AWTEvent::CONTAINER_EVENT_MASK)) {
			$var($ContainerEvent, e, $new($ContainerEvent, this, $ContainerEvent::COMPONENT_REMOVED, comp));
			dispatchEvent(e);
		}
		comp->createHierarchyEvents($HierarchyEvent::HIERARCHY_CHANGED, comp, this, $HierarchyEvent::PARENT_CHANGED, $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_EVENT_MASK));
		if (this->peer != nullptr && this->layoutMgr == nullptr && isVisible()) {
			updateCursorImmediately();
		}
	}
	return needRemoveNotify;
}

bool Container::canContainFocusOwner($Component* focusOwnerCandidate) {
	bool var$2 = isEnabled();
	bool var$1 = var$2 && isDisplayable();
	bool var$0 = var$1 && isVisible();
	if (!(var$0 && isFocusable())) {
		return false;
	}
	if (isFocusCycleRoot()) {
		$var($FocusTraversalPolicy, policy, getFocusTraversalPolicy());
		if ($instanceOf($DefaultFocusTraversalPolicy, policy)) {
			if (!$nc(($cast($DefaultFocusTraversalPolicy, policy)))->accept(focusOwnerCandidate)) {
				return false;
			}
		}
	}
	$synchronized(getTreeLock()) {
		if (this->parent != nullptr) {
			return $nc(this->parent)->canContainFocusOwner(focusOwnerCandidate);
		}
	}
	return true;
}

bool Container::hasHeavyweightDescendants() {
	checkTreeLock();
	return this->numOfHWComponents > 0;
}

bool Container::hasLightweightDescendants() {
	checkTreeLock();
	return this->numOfLWComponents > 0;
}

Container* Container::getHeavyweightContainer() {
	checkTreeLock();
	if (this->peer != nullptr && !($instanceOf($LightweightPeer, this->peer))) {
		return this;
	} else {
		return getNativeContainer();
	}
}

bool Container::isRemoveNotifyNeeded($Component* comp, Container* oldContainer, Container* newContainer) {
	$init(Container);
	if (oldContainer == nullptr) {
		return false;
	}
	if ($nc(comp)->peer == nullptr) {
		return false;
	}
	if ($nc(newContainer)->peer == nullptr) {
		return true;
	}
	if ($nc(comp)->isLightweight()) {
		bool isContainer = $instanceOf(Container, comp);
		if (!isContainer || (isContainer && !$nc(($cast(Container, comp)))->hasHeavyweightDescendants())) {
			return false;
		}
	}
	$var(Container, newNativeContainer, $nc(oldContainer)->getHeavyweightContainer());
	$var(Container, oldNativeContainer, $nc(newContainer)->getHeavyweightContainer());
	if (newNativeContainer != oldNativeContainer) {
		return !$nc($nc(comp)->peer)->isReparentSupported();
	} else {
		return false;
	}
}

void Container::setComponentZOrder($Component* comp, int32_t index) {
	$synchronized(getTreeLock()) {
		$var(Container, curParent, $nc(comp)->parent);
		int32_t oldZindex = getComponentZOrder(comp);
		if (curParent == this && index == oldZindex) {
			return;
		}
		checkAdding(comp, index);
		bool peerRecreated = (curParent != nullptr) ? $nc(curParent)->removeDelicately(comp, this, index) : false;
		addDelicately(comp, curParent, index);
		if (!peerRecreated && oldZindex != -1) {
			comp->mixOnZOrderChanging(oldZindex, index);
		}
	}
}

void Container::reparentTraverse($ContainerPeer* parentPeer, Container* child) {
	checkTreeLock();
	for (int32_t i = 0; i < $nc(child)->getComponentCount(); ++i) {
		$var($Component, comp, child->getComponent(i));
		if ($nc(comp)->isLightweight()) {
			if ($instanceOf(Container, comp)) {
				reparentTraverse(parentPeer, $cast(Container, comp));
			}
		} else {
			$nc(comp->peer)->reparent(parentPeer);
		}
	}
}

void Container::reparentChild($Component* comp) {
	checkTreeLock();
	if (comp == nullptr) {
		return;
	}
	if ($nc(comp)->isLightweight()) {
		if ($instanceOf(Container, comp)) {
			reparentTraverse($cast($ContainerPeer, this->peer), $cast(Container, comp));
		}
	} else {
		$nc(comp->peer)->reparent($cast($ContainerPeer, this->peer));
	}
}

void Container::addDelicately($Component* comp, Container* curParent, int32_t index) {
	checkTreeLock();
	if (curParent != this) {
		if (index == -1) {
			$nc(this->component)->add(comp);
		} else {
			$nc(this->component)->add(index, comp);
		}
		$set($nc(comp), parent, this);
		comp->setGraphicsConfiguration($(getGraphicsConfiguration()));
		adjustListeningChildren($AWTEvent::HIERARCHY_EVENT_MASK, comp->numListening($AWTEvent::HIERARCHY_EVENT_MASK));
		adjustListeningChildren($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK, comp->numListening($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK));
		adjustDescendants(comp->countHierarchyMembers());
	} else if (index < $nc(this->component)->size()) {
		$nc(this->component)->set(index, comp);
	}
	invalidateIfValid();
	if (this->peer != nullptr) {
		if ($nc(comp)->peer == nullptr) {
			comp->addNotify();
		} else {
			$var(Container, newNativeContainer, getHeavyweightContainer());
			$var(Container, oldNativeContainer, $nc(curParent)->getHeavyweightContainer());
			if (oldNativeContainer != newNativeContainer) {
				$nc(newNativeContainer)->reparentChild(comp);
			}
			comp->updateZOrder();
			bool var$0 = !comp->isLightweight();
			if (var$0 && isLightweight()) {
				comp->relocateComponent();
			}
		}
	}
	if (curParent != this) {
		if (this->layoutMgr != nullptr) {
			if ($instanceOf($LayoutManager2, this->layoutMgr)) {
				$nc(($cast($LayoutManager2, this->layoutMgr)))->addLayoutComponent(comp, ($Object*)nullptr);
			} else {
				$nc(this->layoutMgr)->addLayoutComponent(nullptr, comp);
			}
		}
		if (this->containerListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::CONTAINER_EVENT_MASK)) != 0 || $Toolkit::enabledOnToolkit($AWTEvent::CONTAINER_EVENT_MASK)) {
			$var($ContainerEvent, e, $new($ContainerEvent, this, $ContainerEvent::COMPONENT_ADDED, comp));
			dispatchEvent(e);
		}
		$nc(comp)->createHierarchyEvents($HierarchyEvent::HIERARCHY_CHANGED, comp, this, $HierarchyEvent::PARENT_CHANGED, $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_EVENT_MASK));
		bool var$1 = comp->isFocusOwner();
		if (var$1 && !comp->canBeFocusOwnerRecursively()) {
			comp->transferFocus();
		} else if ($instanceOf(Container, comp)) {
			$var($Component, focusOwner, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
			bool var$2 = focusOwner != nullptr && isParentOf(focusOwner);
			if (var$2 && !focusOwner->canBeFocusOwnerRecursively()) {
				focusOwner->transferFocus();
			}
		}
	} else {
		$nc(comp)->createHierarchyEvents($HierarchyEvent::HIERARCHY_CHANGED, comp, this, $HierarchyEvent::HIERARCHY_CHANGED, $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_EVENT_MASK));
	}
	if (this->peer != nullptr && this->layoutMgr == nullptr && isVisible()) {
		updateCursorImmediately();
	}
}

int32_t Container::getComponentZOrder($Component* comp) {
	if (comp == nullptr) {
		return -1;
	}
	$synchronized(getTreeLock()) {
		if ($nc(comp)->parent != this) {
			return -1;
		}
		return $nc(this->component)->indexOf(comp);
	}
}

void Container::add($Component* comp, Object$* constraints) {
	addImpl(comp, constraints, -1);
}

void Container::add($Component* comp, Object$* constraints, int32_t index) {
	addImpl(comp, constraints, index);
}

void Container::addImpl($Component* comp, Object$* constraints, int32_t index) {
	$synchronized(getTreeLock()) {
		$var($GraphicsConfiguration, thisGC, this->getGraphicsConfiguration());
		if (index > $nc(this->component)->size() || (index < 0 && index != -1)) {
			$throwNew($IllegalArgumentException, "illegal component position"_s);
		}
		checkAddToSelf(comp);
		checkNotAWindow(comp);
		if ($nc(comp)->parent != nullptr) {
			$nc(comp->parent)->remove(comp);
			if (index > $nc(this->component)->size()) {
				$throwNew($IllegalArgumentException, "illegal component position"_s);
			}
		}
		if (thisGC != nullptr) {
			$nc(comp)->checkGD($($nc($(thisGC->getDevice()))->getIDstring()));
		}
		if (index == -1) {
			$nc(this->component)->add(comp);
		} else {
			$nc(this->component)->add(index, comp);
		}
		$set($nc(comp), parent, this);
		comp->setGraphicsConfiguration(thisGC);
		adjustListeningChildren($AWTEvent::HIERARCHY_EVENT_MASK, comp->numListening($AWTEvent::HIERARCHY_EVENT_MASK));
		adjustListeningChildren($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK, comp->numListening($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK));
		adjustDescendants(comp->countHierarchyMembers());
		invalidateIfValid();
		if (this->peer != nullptr) {
			comp->addNotify();
		}
		if (this->layoutMgr != nullptr) {
			if ($instanceOf($LayoutManager2, this->layoutMgr)) {
				$nc(($cast($LayoutManager2, this->layoutMgr)))->addLayoutComponent(comp, constraints);
			} else if ($instanceOf($String, constraints)) {
				$nc(this->layoutMgr)->addLayoutComponent($cast($String, constraints), comp);
			}
		}
		if (this->containerListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::CONTAINER_EVENT_MASK)) != 0 || $Toolkit::enabledOnToolkit($AWTEvent::CONTAINER_EVENT_MASK)) {
			$var($ContainerEvent, e, $new($ContainerEvent, this, $ContainerEvent::COMPONENT_ADDED, comp));
			dispatchEvent(e);
		}
		comp->createHierarchyEvents($HierarchyEvent::HIERARCHY_CHANGED, comp, this, $HierarchyEvent::PARENT_CHANGED, $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_EVENT_MASK));
		if (this->peer != nullptr && this->layoutMgr == nullptr && isVisible()) {
			updateCursorImmediately();
		}
	}
}

bool Container::updateChildGraphicsData($GraphicsConfiguration* gc) {
	checkTreeLock();
	bool ret = false;
	{
		$var($Iterator, i$, $nc(this->component)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Component, comp, $cast($Component, i$->next()));
			{
				if (comp != nullptr) {
					ret |= comp->updateGraphicsData(gc);
				}
			}
		}
	}
	return ret;
}

void Container::checkGD($String* stringID) {
	{
		$var($Iterator, i$, $nc(this->component)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Component, comp, $cast($Component, i$->next()));
			{
				if (comp != nullptr) {
					comp->checkGD(stringID);
				}
			}
		}
	}
}

void Container::remove(int32_t index) {
	$synchronized(getTreeLock()) {
		if (index < 0 || index >= $nc(this->component)->size()) {
			$throwNew($ArrayIndexOutOfBoundsException, index);
		}
		$var($Component, comp, $cast($Component, $nc(this->component)->get(index)));
		if (this->peer != nullptr) {
			$nc(comp)->removeNotify();
		}
		if (this->layoutMgr != nullptr) {
			$nc(this->layoutMgr)->removeLayoutComponent(comp);
		}
		adjustListeningChildren($AWTEvent::HIERARCHY_EVENT_MASK, -$nc(comp)->numListening($AWTEvent::HIERARCHY_EVENT_MASK));
		adjustListeningChildren($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK, -$nc(comp)->numListening($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK));
		adjustDescendants(-($nc(comp)->countHierarchyMembers()));
		$set($nc(comp), parent, nullptr);
		$nc(this->component)->remove(index);
		comp->setGraphicsConfiguration(nullptr);
		invalidateIfValid();
		if (this->containerListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::CONTAINER_EVENT_MASK)) != 0 || $Toolkit::enabledOnToolkit($AWTEvent::CONTAINER_EVENT_MASK)) {
			$var($ContainerEvent, e, $new($ContainerEvent, this, $ContainerEvent::COMPONENT_REMOVED, comp));
			dispatchEvent(e);
		}
		comp->createHierarchyEvents($HierarchyEvent::HIERARCHY_CHANGED, comp, this, $HierarchyEvent::PARENT_CHANGED, $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_EVENT_MASK));
		if (this->peer != nullptr && this->layoutMgr == nullptr && isVisible()) {
			updateCursorImmediately();
		}
	}
}

void Container::remove($Component* comp) {
	$synchronized(getTreeLock()) {
		if ($nc(comp)->parent == this) {
			int32_t index = $nc(this->component)->indexOf(comp);
			if (index >= 0) {
				remove(index);
			}
		}
	}
}

void Container::removeAll() {
	$synchronized(getTreeLock()) {
		adjustListeningChildren($AWTEvent::HIERARCHY_EVENT_MASK, -this->listeningChildren);
		adjustListeningChildren($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK, -this->listeningBoundsChildren);
		adjustDescendants(-this->descendantsCount);
		while (!$nc(this->component)->isEmpty()) {
			$var($Component, comp, $cast($Component, $nc(this->component)->remove($nc(this->component)->size() - 1)));
			if (this->peer != nullptr) {
				$nc(comp)->removeNotify();
			}
			if (this->layoutMgr != nullptr) {
				$nc(this->layoutMgr)->removeLayoutComponent(comp);
			}
			$set($nc(comp), parent, nullptr);
			comp->setGraphicsConfiguration(nullptr);
			if (this->containerListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::CONTAINER_EVENT_MASK)) != 0 || $Toolkit::enabledOnToolkit($AWTEvent::CONTAINER_EVENT_MASK)) {
				$var($ContainerEvent, e, $new($ContainerEvent, this, $ContainerEvent::COMPONENT_REMOVED, comp));
				dispatchEvent(e);
			}
			comp->createHierarchyEvents($HierarchyEvent::HIERARCHY_CHANGED, comp, this, $HierarchyEvent::PARENT_CHANGED, $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_EVENT_MASK));
		}
		if (this->peer != nullptr && this->layoutMgr == nullptr && isVisible()) {
			updateCursorImmediately();
		}
		invalidateIfValid();
	}
}

int32_t Container::numListening(int64_t mask) {
	int32_t superListening = $Component::numListening(mask);
	if (mask == $AWTEvent::HIERARCHY_EVENT_MASK) {
		$init($PlatformLogger$Level);
		if ($nc(Container::eventLog)->isLoggable($PlatformLogger$Level::FINE)) {
			int32_t sum = 0;
			{
				$var($Iterator, i$, $nc(this->component)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Component, comp, $cast($Component, i$->next()));
					{
						sum += $nc(comp)->numListening(mask);
					}
				}
			}
			if (this->listeningChildren != sum) {
				$nc(Container::eventLog)->fine("Assertion (listeningChildren == sum) failed"_s);
			}
		}
		return this->listeningChildren + superListening;
	} else if (mask == $AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK) {
		$init($PlatformLogger$Level);
		if ($nc(Container::eventLog)->isLoggable($PlatformLogger$Level::FINE)) {
			int32_t sum = 0;
			{
				$var($Iterator, i$, $nc(this->component)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Component, comp, $cast($Component, i$->next()));
					{
						sum += $nc(comp)->numListening(mask);
					}
				}
			}
			if (this->listeningBoundsChildren != sum) {
				$nc(Container::eventLog)->fine("Assertion (listeningBoundsChildren == sum) failed"_s);
			}
		}
		return this->listeningBoundsChildren + superListening;
	} else {
		$init($PlatformLogger$Level);
		if ($nc(Container::eventLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(Container::eventLog)->fine("This code must never be reached"_s);
		}
		return superListening;
	}
}

void Container::adjustListeningChildren(int64_t mask, int32_t num) {
	$init($PlatformLogger$Level);
	if ($nc(Container::eventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		bool toAssert = (mask == $AWTEvent::HIERARCHY_EVENT_MASK || mask == $AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK || mask == ($AWTEvent::HIERARCHY_EVENT_MASK | $AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK));
		if (!toAssert) {
			$nc(Container::eventLog)->fine("Assertion failed"_s);
		}
	}
	if (num == 0) {
		return;
	}
	if (((int64_t)(mask & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) != 0) {
		this->listeningChildren += num;
	}
	if (((int64_t)(mask & (uint64_t)$AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) != 0) {
		this->listeningBoundsChildren += num;
	}
	adjustListeningChildrenOnParent(mask, num);
}

void Container::adjustDescendants(int32_t num) {
	if (num == 0) {
		return;
	}
	this->descendantsCount += num;
	adjustDescendantsOnParent(num);
}

void Container::adjustDescendantsOnParent(int32_t num) {
	if (this->parent != nullptr) {
		$nc(this->parent)->adjustDescendants(num);
	}
}

int32_t Container::countHierarchyMembers() {
	$init($PlatformLogger$Level);
	if ($nc(Container::log)->isLoggable($PlatformLogger$Level::FINE)) {
		int32_t sum = 0;
		{
			$var($Iterator, i$, $nc(this->component)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Component, comp, $cast($Component, i$->next()));
				{
					sum += $nc(comp)->countHierarchyMembers();
				}
			}
		}
		if (this->descendantsCount != sum) {
			$nc(Container::log)->fine("Assertion (descendantsCount == sum) failed"_s);
		}
	}
	return this->descendantsCount + 1;
}

int32_t Container::getListenersCount(int32_t id, bool enabledOnToolkit) {
	checkTreeLock();
	if (enabledOnToolkit) {
		return this->descendantsCount;
	}
	switch (id) {
	case $HierarchyEvent::HIERARCHY_CHANGED:
		{
			return this->listeningChildren;
		}
	case $HierarchyEvent::ANCESTOR_MOVED:
		{}
	case $HierarchyEvent::ANCESTOR_RESIZED:
		{
			return this->listeningBoundsChildren;
		}
	default:
		{
			return 0;
		}
	}
}

int32_t Container::createHierarchyEvents(int32_t id, $Component* changed, Container* changedParent, int64_t changeFlags, bool enabledOnToolkit) {
	checkTreeLock();
	int32_t listeners = getListenersCount(id, enabledOnToolkit);
	{
		int32_t count = listeners;
		int32_t i = 0;
		for (; count > 0; ++i) {
			count -= $nc(($cast($Component, $($nc(this->component)->get(i)))))->createHierarchyEvents(id, changed, changedParent, changeFlags, enabledOnToolkit);
		}
	}
	return listeners + $Component::createHierarchyEvents(id, changed, changedParent, changeFlags, enabledOnToolkit);
}

void Container::createChildHierarchyEvents(int32_t id, int64_t changeFlags, bool enabledOnToolkit) {
	checkTreeLock();
	if ($nc(this->component)->isEmpty()) {
		return;
	}
	int32_t listeners = getListenersCount(id, enabledOnToolkit);
	{
		int32_t count = listeners;
		int32_t i = 0;
		for (; count > 0; ++i) {
			count -= $nc(($cast($Component, $($nc(this->component)->get(i)))))->createHierarchyEvents(id, this, this->parent, changeFlags, enabledOnToolkit);
		}
	}
}

$LayoutManager* Container::getLayout() {
	return this->layoutMgr;
}

void Container::setLayout($LayoutManager* mgr) {
	$set(this, layoutMgr, mgr);
	invalidateIfValid();
}

void Container::doLayout() {
	layout();
}

void Container::layout() {
	$var($LayoutManager, layoutMgr, this->layoutMgr);
	if (layoutMgr != nullptr) {
		layoutMgr->layoutContainer(this);
	}
}

bool Container::isValidateRoot() {
	return false;
}

void Container::invalidateParent() {
	if (!Container::isJavaAwtSmartInvalidate || !isValidateRoot()) {
		$Component::invalidateParent();
	}
}

void Container::invalidate() {
	$var($LayoutManager, layoutMgr, this->layoutMgr);
	if ($instanceOf($LayoutManager2, layoutMgr)) {
		$var($LayoutManager2, lm, $cast($LayoutManager2, layoutMgr));
		$nc(lm)->invalidateLayout(this);
	}
	$Component::invalidate();
}

void Container::validate() {
	bool updateCur = false;
	$synchronized(getTreeLock()) {
		if ((!isValid() || Container::descendUnconditionallyWhenValidating) && this->peer != nullptr) {
			$var($ContainerPeer, p, nullptr);
			if ($instanceOf($ContainerPeer, this->peer)) {
				$assign(p, $cast($ContainerPeer, this->peer));
			}
			if (p != nullptr) {
				p->beginValidate();
			}
			validateTree();
			if (p != nullptr) {
				p->endValidate();
				if (!Container::descendUnconditionallyWhenValidating) {
					updateCur = isVisible();
				}
			}
		}
	}
	if (updateCur) {
		updateCursorImmediately();
	}
}

void Container::validateUnconditionally() {
	bool updateCur = false;
	$synchronized(getTreeLock()) {
		Container::descendUnconditionallyWhenValidating = true;
		validate();
		if ($instanceOf($ContainerPeer, this->peer)) {
			updateCur = isVisible();
		}
		Container::descendUnconditionallyWhenValidating = false;
	}
	if (updateCur) {
		updateCursorImmediately();
	}
}

void Container::validateTree() {
	checkTreeLock();
	if (!isValid() || Container::descendUnconditionallyWhenValidating) {
		if ($instanceOf($ContainerPeer, this->peer)) {
			$nc(($cast($ContainerPeer, this->peer)))->beginLayout();
		}
		if (!isValid()) {
			doLayout();
		}
		for (int32_t i = 0; i < $nc(this->component)->size(); ++i) {
			$var($Component, comp, $cast($Component, $nc(this->component)->get(i)));
			if (($instanceOf(Container, comp)) && !($instanceOf($Window, comp)) && (!$nc(comp)->isValid() || Container::descendUnconditionallyWhenValidating)) {
				$nc(($cast(Container, comp)))->validateTree();
			} else {
				$nc(comp)->validate();
			}
		}
		if ($instanceOf($ContainerPeer, this->peer)) {
			$nc(($cast($ContainerPeer, this->peer)))->endLayout();
		}
	}
	$Component::validate();
}

void Container::invalidateTree() {
	$synchronized(getTreeLock()) {
		for (int32_t i = 0; i < $nc(this->component)->size(); ++i) {
			$var($Component, comp, $cast($Component, $nc(this->component)->get(i)));
			if ($instanceOf(Container, comp)) {
				$nc(($cast(Container, comp)))->invalidateTree();
			} else {
				$nc(comp)->invalidateIfValid();
			}
		}
		invalidateIfValid();
	}
}

void Container::setFont($Font* f) {
	bool shouldinvalidate = false;
	$var($Font, oldfont, getFont());
	$Component::setFont(f);
	$var($Font, newfont, getFont());
	if (newfont != oldfont && (oldfont == nullptr || !$nc(oldfont)->equals(newfont))) {
		invalidateTree();
	}
}

$Dimension* Container::getPreferredSize() {
	return preferredSize();
}

$Dimension* Container::preferredSize() {
	$var($Dimension, dim, this->prefSize);
	bool var$0 = dim == nullptr;
	if (!var$0) {
		bool var$1 = isPreferredSizeSet();
		var$0 = !(var$1 || isValid());
	}
	if (var$0) {
		$synchronized(getTreeLock()) {
			$set(this, prefSize, (this->layoutMgr != nullptr) ? $nc(this->layoutMgr)->preferredLayoutSize(this) : $Component::preferredSize());
			$assign(dim, this->prefSize);
		}
	}
	if (dim != nullptr) {
		return $new($Dimension, dim);
	} else {
		return dim;
	}
}

$Dimension* Container::getMinimumSize() {
	return minimumSize();
}

$Dimension* Container::minimumSize() {
	$var($Dimension, dim, this->minSize);
	bool var$0 = dim == nullptr;
	if (!var$0) {
		bool var$1 = isMinimumSizeSet();
		var$0 = !(var$1 || isValid());
	}
	if (var$0) {
		$synchronized(getTreeLock()) {
			$set(this, minSize, (this->layoutMgr != nullptr) ? $nc(this->layoutMgr)->minimumLayoutSize(this) : $Component::minimumSize());
			$assign(dim, this->minSize);
		}
	}
	if (dim != nullptr) {
		return $new($Dimension, dim);
	} else {
		return dim;
	}
}

$Dimension* Container::getMaximumSize() {
	$var($Dimension, dim, this->maxSize);
	bool var$0 = dim == nullptr;
	if (!var$0) {
		bool var$1 = isMaximumSizeSet();
		var$0 = !(var$1 || isValid());
	}
	if (var$0) {
		$synchronized(getTreeLock()) {
			if ($instanceOf($LayoutManager2, this->layoutMgr)) {
				$var($LayoutManager2, lm, $cast($LayoutManager2, this->layoutMgr));
				$set(this, maxSize, $nc(lm)->maximumLayoutSize(this));
			} else {
				$set(this, maxSize, $Component::getMaximumSize());
			}
			$assign(dim, this->maxSize);
		}
	}
	if (dim != nullptr) {
		return $new($Dimension, dim);
	} else {
		return dim;
	}
}

float Container::getAlignmentX() {
	float xAlign = 0.0;
	if ($instanceOf($LayoutManager2, this->layoutMgr)) {
		$synchronized(getTreeLock()) {
			$var($LayoutManager2, lm, $cast($LayoutManager2, this->layoutMgr));
			xAlign = $nc(lm)->getLayoutAlignmentX(this);
		}
	} else {
		xAlign = $Component::getAlignmentX();
	}
	return xAlign;
}

float Container::getAlignmentY() {
	float yAlign = 0.0;
	if ($instanceOf($LayoutManager2, this->layoutMgr)) {
		$synchronized(getTreeLock()) {
			$var($LayoutManager2, lm, $cast($LayoutManager2, this->layoutMgr));
			yAlign = $nc(lm)->getLayoutAlignmentY(this);
		}
	} else {
		yAlign = $Component::getAlignmentY();
	}
	return yAlign;
}

void Container::paint($Graphics* g) {
	if (isShowing()) {
		$synchronized(getObjectLock()) {
			if (this->printing) {
				if ($nc(this->printingThreads)->contains($($Thread::currentThread()))) {
					return;
				}
			}
		}
		$nc($($GraphicsCallback$PaintCallback::getInstance()))->runComponents($(getComponentsSync()), g, $GraphicsCallback::LIGHTWEIGHTS);
	}
}

void Container::update($Graphics* g) {
	if (isShowing()) {
		if (!($instanceOf($LightweightPeer, this->peer))) {
			$nc(g)->clearRect(0, 0, this->width, this->height);
		}
		paint(g);
	}
}

void Container::print($Graphics* g) {
	if (isShowing()) {
		$var($Thread, t, $Thread::currentThread());
		{
			$var($Throwable, var$0, nullptr);
			try {
				$synchronized(getObjectLock()) {
					if (this->printingThreads == nullptr) {
						$set(this, printingThreads, $new($HashSet));
					}
					$nc(this->printingThreads)->add(t);
					this->printing = true;
				}
				$Component::print(g);
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$synchronized(getObjectLock()) {
					$nc(this->printingThreads)->remove(t);
					this->printing = !$nc(this->printingThreads)->isEmpty();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		$nc($($GraphicsCallback$PrintCallback::getInstance()))->runComponents($(getComponentsSync()), g, $GraphicsCallback::LIGHTWEIGHTS);
	}
}

void Container::paintComponents($Graphics* g) {
	if (isShowing()) {
		$nc($($GraphicsCallback$PaintAllCallback::getInstance()))->runComponents($(getComponentsSync()), g, $GraphicsCallback::TWO_PASSES);
	}
}

void Container::lightweightPaint($Graphics* g) {
	$Component::lightweightPaint(g);
	paintHeavyweightComponents(g);
}

void Container::paintHeavyweightComponents($Graphics* g) {
	if (isShowing()) {
		$nc($($GraphicsCallback$PaintHeavyweightComponentsCallback::getInstance()))->runComponents($(getComponentsSync()), g, $GraphicsCallback::LIGHTWEIGHTS | $GraphicsCallback::HEAVYWEIGHTS);
	}
}

void Container::printComponents($Graphics* g) {
	if (isShowing()) {
		$nc($($GraphicsCallback$PrintAllCallback::getInstance()))->runComponents($(getComponentsSync()), g, $GraphicsCallback::TWO_PASSES);
	}
}

void Container::lightweightPrint($Graphics* g) {
	$Component::lightweightPrint(g);
	printHeavyweightComponents(g);
}

void Container::printHeavyweightComponents($Graphics* g) {
	if (isShowing()) {
		$nc($($GraphicsCallback$PrintHeavyweightComponentsCallback::getInstance()))->runComponents($(getComponentsSync()), g, $GraphicsCallback::LIGHTWEIGHTS | $GraphicsCallback::HEAVYWEIGHTS);
	}
}

void Container::addContainerListener($ContainerListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, containerListener, $AWTEventMulticaster::add(this->containerListener, l));
		this->newEventsOnly = true;
	}
}

void Container::removeContainerListener($ContainerListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, containerListener, $AWTEventMulticaster::remove(this->containerListener, l));
	}
}

$ContainerListenerArray* Container::getContainerListeners() {
	$synchronized(this) {
		$load($ContainerListener);
		return $fcast($ContainerListenerArray, getListeners($ContainerListener::class$));
	}
}

$EventListenerArray* Container::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($ContainerListener);
	if (listenerType == $ContainerListener::class$) {
		$assign(l, this->containerListener);
	} else {
		return $Component::getListeners(listenerType);
	}
	return $AWTEventMulticaster::getListeners(l, listenerType);
}

bool Container::eventEnabled($AWTEvent* e) {
	int32_t id = $nc(e)->getID();
	if (id == $ContainerEvent::COMPONENT_ADDED || id == $ContainerEvent::COMPONENT_REMOVED) {
		if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::CONTAINER_EVENT_MASK)) != 0 || this->containerListener != nullptr) {
			return true;
		}
		return false;
	}
	return $Component::eventEnabled(e);
}

void Container::processEvent($AWTEvent* e) {
	if ($instanceOf($ContainerEvent, e)) {
		processContainerEvent($cast($ContainerEvent, e));
		return;
	}
	$Component::processEvent(e);
}

void Container::processContainerEvent($ContainerEvent* e) {
	$var($ContainerListener, listener, this->containerListener);
	if (listener != nullptr) {
		switch ($nc(e)->getID()) {
		case $ContainerEvent::COMPONENT_ADDED:
			{
				listener->componentAdded(e);
				break;
			}
		case $ContainerEvent::COMPONENT_REMOVED:
			{
				listener->componentRemoved(e);
				break;
			}
		}
	}
}

void Container::dispatchEventImpl($AWTEvent* e) {
	if ((this->dispatcher != nullptr) && $nc(this->dispatcher)->dispatchEvent(e)) {
		$nc(e)->consume();
		if (this->peer != nullptr) {
			$nc(this->peer)->handleEvent(e);
		}
		return;
	}
	$Component::dispatchEventImpl(e);
	$synchronized(getTreeLock()) {
		switch ($nc(e)->getID()) {
		case $ComponentEvent::COMPONENT_RESIZED:
			{
				createChildHierarchyEvents($HierarchyEvent::ANCESTOR_RESIZED, 0, $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK));
				break;
			}
		case $ComponentEvent::COMPONENT_MOVED:
			{
				createChildHierarchyEvents($HierarchyEvent::ANCESTOR_MOVED, 0, $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK));
				break;
			}
		default:
			{
				break;
			}
		}
	}
}

void Container::dispatchEventToSelf($AWTEvent* e) {
	$Component::dispatchEventImpl(e);
}

$Component* Container::getMouseEventTarget(int32_t x, int32_t y, bool includeSelf) {
	$init($Container$MouseEventTargetFilter);
	return getMouseEventTarget(x, y, includeSelf, $Container$MouseEventTargetFilter::FILTER, !Container::SEARCH_HEAVYWEIGHTS);
}

$Component* Container::getDropTargetEventTarget(int32_t x, int32_t y, bool includeSelf) {
	$init($Container$DropTargetEventTargetFilter);
	return getMouseEventTarget(x, y, includeSelf, $Container$DropTargetEventTargetFilter::FILTER, Container::SEARCH_HEAVYWEIGHTS);
}

$Component* Container::getMouseEventTarget(int32_t x, int32_t y, bool includeSelf, $Container$EventTargetFilter* filter, bool searchHeavyweights) {
	$var($Component, comp, nullptr);
	if (searchHeavyweights) {
		$assign(comp, getMouseEventTargetImpl(x, y, includeSelf, filter, Container::SEARCH_HEAVYWEIGHTS, searchHeavyweights));
	}
	if (comp == nullptr || $equals(comp, this)) {
		$assign(comp, getMouseEventTargetImpl(x, y, includeSelf, filter, !Container::SEARCH_HEAVYWEIGHTS, searchHeavyweights));
	}
	return comp;
}

$Component* Container::getMouseEventTargetImpl(int32_t x, int32_t y, bool includeSelf, $Container$EventTargetFilter* filter, bool searchHeavyweightChildren, bool searchHeavyweightDescendants) {
	$synchronized(getTreeLock()) {
		for (int32_t i = 0; i < $nc(this->component)->size(); ++i) {
			$var($Component, comp, $cast($Component, $nc(this->component)->get(i)));
			if (comp != nullptr && comp->visible && ((!searchHeavyweightChildren && $instanceOf($LightweightPeer, comp->peer)) || (searchHeavyweightChildren && !($instanceOf($LightweightPeer, $nc(comp)->peer)))) && comp->contains(x - comp->x, y - comp->y)) {
				if ($instanceOf(Container, comp)) {
					$var(Container, child, $cast(Container, comp));
					$var($Component, deeper, child->getMouseEventTarget(x - child->x, y - child->y, includeSelf, filter, searchHeavyweightDescendants));
					if (deeper != nullptr) {
						return deeper;
					}
				} else if ($nc(filter)->accept(comp)) {
					return comp;
				}
			}
		}
		bool isPeerOK = false;
		bool isMouseOverMe = false;
		isPeerOK = ($instanceOf($LightweightPeer, this->peer)) || includeSelf;
		isMouseOverMe = contains(x, y);
		if (isMouseOverMe && isPeerOK && $nc(filter)->accept(this)) {
			return this;
		}
		return nullptr;
	}
}

void Container::proxyEnableEvents(int64_t events) {
	if ($instanceOf($LightweightPeer, this->peer)) {
		if (this->parent != nullptr) {
			$nc(this->parent)->proxyEnableEvents(events);
		}
	} else if (this->dispatcher != nullptr) {
		$nc(this->dispatcher)->enableEvents(events);
	}
}

void Container::deliverEvent($Event* e) {
	$var($Component, comp, getComponentAt($nc(e)->x, e->y));
	if ((comp != nullptr) && (!$equals(comp, this))) {
		$nc(e)->translate(-comp->x, -comp->y);
		comp->deliverEvent(e);
	} else {
		postEvent(e);
	}
}

$Component* Container::getComponentAt(int32_t x, int32_t y) {
	return locate(x, y);
}

$Component* Container::locate(int32_t x, int32_t y) {
	if (!contains(x, y)) {
		return nullptr;
	}
	$var($Component, lightweight, nullptr);
	$synchronized(getTreeLock()) {
		{
			$var($Iterator, i$, $nc(this->component)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Component, comp, $cast($Component, i$->next()));
				{
					if ($nc(comp)->contains(x - comp->x, y - comp->y)) {
						if (!comp->isLightweight()) {
							return comp;
						}
						if (lightweight == nullptr) {
							$assign(lightweight, comp);
						}
					}
				}
			}
		}
	}
	return lightweight != nullptr ? lightweight : static_cast<$Component*>(this);
}

$Component* Container::getComponentAt($Point* p) {
	return getComponentAt($nc(p)->x, p->y);
}

$Point* Container::getMousePosition(bool allowChildren) {
	$beforeCallerSensitive();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	$var($PointerInfo, pi, $cast($PointerInfo, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Container$2, this)))));
	$synchronized(getTreeLock()) {
		$var($Component, inTheSameWindow, findUnderMouseInWindow(pi));
		if (isSameOrAncestorOf(inTheSameWindow, allowChildren)) {
			return pointRelativeToComponent($($nc(pi)->getLocation()));
		}
		return nullptr;
	}
}

bool Container::isSameOrAncestorOf($Component* comp, bool allowChildren) {
	return $equals(this, comp) || (allowChildren && isParentOf(comp));
}

$Component* Container::findComponentAt(int32_t x, int32_t y) {
	return findComponentAt(x, y, true);
}

$Component* Container::findComponentAt(int32_t x, int32_t y, bool ignoreEnabled) {
	$synchronized(getTreeLock()) {
		if (isRecursivelyVisible()) {
			return findComponentAtImpl(x, y, ignoreEnabled);
		}
	}
	return nullptr;
}

$Component* Container::findComponentAtImpl(int32_t x, int32_t y, bool ignoreEnabled) {
	if (!(contains(x, y) && this->visible && (ignoreEnabled || this->enabled))) {
		return nullptr;
	}
	$var($Component, lightweight, nullptr);
	{
		$var($Iterator, i$, $nc(this->component)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Component, comp, $cast($Component, i$->next()));
			{
				int32_t x1 = x - $nc(comp)->x;
				int32_t y1 = y - comp->y;
				if (!comp->contains(x1, y1)) {
					continue;
				}
				if (!comp->isLightweight()) {
					$var($Component, child, getChildAt(comp, x1, y1, ignoreEnabled));
					if (child != nullptr) {
						return child;
					}
				} else if (lightweight == nullptr) {
					$assign(lightweight, getChildAt(comp, x1, y1, ignoreEnabled));
				}
			}
		}
	}
	return lightweight != nullptr ? lightweight : static_cast<$Component*>(this);
}

$Component* Container::getChildAt($Component* comp$renamed, int32_t x, int32_t y, bool ignoreEnabled) {
	$init(Container);
	$var($Component, comp, comp$renamed);
	if ($instanceOf(Container, comp)) {
		$assign(comp, $nc(($cast(Container, comp)))->findComponentAtImpl(x, y, ignoreEnabled));
	} else {
		$assign(comp, $nc(comp)->getComponentAt(x, y));
	}
	if (comp != nullptr && comp->visible && (ignoreEnabled || $nc(comp)->enabled)) {
		return comp;
	}
	return nullptr;
}

$Component* Container::findComponentAt($Point* p) {
	return findComponentAt($nc(p)->x, p->y);
}

void Container::addNotify() {
	$synchronized(getTreeLock()) {
		$Component::addNotify();
		if (!($instanceOf($LightweightPeer, this->peer))) {
			$set(this, dispatcher, $new($LightweightDispatcher, this));
		}
		for (int32_t i = 0; i < $nc(this->component)->size(); ++i) {
			$nc(($cast($Component, $($nc(this->component)->get(i)))))->addNotify();
		}
	}
}

void Container::removeNotify() {
	$synchronized(getTreeLock()) {
		for (int32_t i = $nc(this->component)->size() - 1; i >= 0; --i) {
			$var($Component, comp, $cast($Component, $nc(this->component)->get(i)));
			if (comp != nullptr) {
				comp->setAutoFocusTransferOnDisposal(false);
				comp->removeNotify();
				comp->setAutoFocusTransferOnDisposal(true);
			}
		}
		bool var$0 = containsFocus();
		if (var$0 && $KeyboardFocusManager::isAutoFocusTransferEnabledFor(this)) {
			if (!transferFocus(false)) {
				transferFocusBackward(true);
			}
		}
		if (this->dispatcher != nullptr) {
			$nc(this->dispatcher)->dispose();
			$set(this, dispatcher, nullptr);
		}
		$Component::removeNotify();
	}
}

bool Container::isAncestorOf($Component* c) {
	$var(Container, p, nullptr);
	if (c == nullptr || (($assign(p, $nc(c)->getParent())) == nullptr)) {
		return false;
	}
	while (p != nullptr) {
		if (p == this) {
			return true;
		}
		$assign(p, p->getParent());
	}
	return false;
}

void Container::startLWModal() {
	$set(this, modalAppContext, $AppContext::getAppContext());
	int64_t time = $nc($($Toolkit::getEventQueue()))->getMostRecentKeyEventTime();
	$var($Component, predictedFocusOwner, ($Component::isInstanceOf(this, "javax.swing.JInternalFrame"_s)) ? $nc((($cast($JInternalFrame, this))))->getMostRecentFocusOwner() : ($Component*)nullptr);
	if (predictedFocusOwner != nullptr) {
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->enqueueKeyEvents(time, predictedFocusOwner);
	}
	$var(Container, nativeContainer, nullptr);
	$synchronized(getTreeLock()) {
		$assign(nativeContainer, getHeavyweightContainer());
		if ($nc(nativeContainer)->modalComp != nullptr) {
			$set(this, modalComp, nativeContainer->modalComp);
			$set(nativeContainer, modalComp, this);
			return;
		} else {
			$set(nativeContainer, modalComp, this);
		}
	}
	$var($Runnable, pumpEventsForHierarchy, static_cast<$Runnable*>($new(Container$$Lambda$lambda$startLWModal$1, this, nativeContainer)));
	if ($EventQueue::isDispatchThread()) {
		$var($SequencedEvent, currentSequencedEvent, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getCurrentSequencedEvent());
		if (currentSequencedEvent != nullptr) {
			currentSequencedEvent->dispose();
		}
		$nc(pumpEventsForHierarchy)->run();
	} else {
		$synchronized(getTreeLock()) {
			$nc($($Toolkit::getEventQueue()))->postEvent($$new($PeerEvent, this, pumpEventsForHierarchy, $PeerEvent::PRIORITY_EVENT));
			while ($nc(nativeContainer)->modalComp != nullptr) {
				try {
					$nc($of($(getTreeLock())))->wait();
				} catch ($InterruptedException&) {
					$var($InterruptedException, e, $catch());
					break;
				}
			}
		}
	}
	if (predictedFocusOwner != nullptr) {
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->dequeueKeyEvents(time, predictedFocusOwner);
	}
}

void Container::stopLWModal() {
	$synchronized(getTreeLock()) {
		if (this->modalAppContext != nullptr) {
			$var(Container, nativeContainer, getHeavyweightContainer());
			if (nativeContainer != nullptr) {
				if (this->modalComp != nullptr) {
					$set(nativeContainer, modalComp, this->modalComp);
					$set(this, modalComp, nullptr);
					return;
				} else {
					$set(nativeContainer, modalComp, nullptr);
				}
			}
			$SunToolkit::postEvent(this->modalAppContext, $$new($PeerEvent, this, $$new($Container$WakingRunnable), $PeerEvent::PRIORITY_EVENT));
		}
		$EventQueue::invokeLater($$new($Container$WakingRunnable));
		$nc($of($(getTreeLock())))->notifyAll();
	}
}

$String* Container::paramString() {
	$var($String, str, $Component::paramString());
	$var($LayoutManager, layoutMgr, this->layoutMgr);
	if (layoutMgr != nullptr) {
		$plusAssign(str, $$str({",layout="_s, $($of(layoutMgr)->getClass()->getName())}));
	}
	return str;
}

void Container::list($PrintStream* out, int32_t indent) {
	$Component::list(out, indent);
	$synchronized(getTreeLock()) {
		for (int32_t i = 0; i < $nc(this->component)->size(); ++i) {
			$var($Component, comp, $cast($Component, $nc(this->component)->get(i)));
			if (comp != nullptr) {
				comp->list(out, indent + 1);
			}
		}
	}
}

void Container::list($PrintWriter* out, int32_t indent) {
	$Component::list(out, indent);
	$synchronized(getTreeLock()) {
		for (int32_t i = 0; i < $nc(this->component)->size(); ++i) {
			$var($Component, comp, $cast($Component, $nc(this->component)->get(i)));
			if (comp != nullptr) {
				comp->list(out, indent + 1);
			}
		}
	}
}

void Container::setFocusTraversalKeys(int32_t id, $Set* keystrokes) {
	if (id < 0 || id >= $KeyboardFocusManager::TRAVERSAL_KEY_LENGTH) {
		$throwNew($IllegalArgumentException, "invalid focus traversal key identifier"_s);
	}
	setFocusTraversalKeys_NoIDCheck(id, keystrokes);
}

$Set* Container::getFocusTraversalKeys(int32_t id) {
	if (id < 0 || id >= $KeyboardFocusManager::TRAVERSAL_KEY_LENGTH) {
		$throwNew($IllegalArgumentException, "invalid focus traversal key identifier"_s);
	}
	return getFocusTraversalKeys_NoIDCheck(id);
}

bool Container::areFocusTraversalKeysSet(int32_t id) {
	if (id < 0 || id >= $KeyboardFocusManager::TRAVERSAL_KEY_LENGTH) {
		$throwNew($IllegalArgumentException, "invalid focus traversal key identifier"_s);
	}
	return (this->focusTraversalKeys != nullptr && $nc(this->focusTraversalKeys)->get(id) != nullptr);
}

bool Container::isFocusCycleRoot(Container* container) {
	if (isFocusCycleRoot() && container == this) {
		return true;
	} else {
		return $Component::isFocusCycleRoot(container);
	}
}

Container* Container::findTraversalRoot() {
	$var(Container, currentFocusCycleRoot, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getCurrentFocusCycleRoot());
	$var(Container, root, nullptr);
	if (currentFocusCycleRoot == this) {
		$assign(root, this);
	} else {
		$assign(root, getFocusCycleRootAncestor());
		if (root == nullptr) {
			$assign(root, this);
		}
	}
	if (root != currentFocusCycleRoot) {
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->setGlobalCurrentFocusCycleRootPriv(root);
	}
	return root;
}

bool Container::containsFocus() {
	$var($Component, focusOwner, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
	return isParentOf(focusOwner);
}

bool Container::isParentOf($Component* comp$renamed) {
	$var($Component, comp, comp$renamed);
	$synchronized(getTreeLock()) {
		while (comp != nullptr && !$equals(comp, this) && !($instanceOf($Window, comp))) {
			$assign(comp, comp->getParent());
		}
		return ($equals(comp, this));
	}
}

void Container::clearMostRecentFocusOwnerOnHide() {
	bool reset = false;
	$var($Window, window, nullptr);
	$synchronized(getTreeLock()) {
		$assign(window, getContainingWindow());
		if (window != nullptr) {
			$var($Component, comp, $KeyboardFocusManager::getMostRecentFocusOwner(window));
			reset = (($equals(comp, this)) || isParentOf(comp));
			$synchronized($KeyboardFocusManager::class$) {
				$var($Component, storedComp, window->getTemporaryLostComponent());
				if (isParentOf(storedComp) || $equals(storedComp, this)) {
					window->setTemporaryLostComponent(nullptr);
				}
			}
		}
	}
	if (reset) {
		$KeyboardFocusManager::setMostRecentFocusOwner(window, nullptr);
	}
}

void Container::clearCurrentFocusCycleRootOnHide() {
	$var($KeyboardFocusManager, kfm, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
	$var(Container, cont, $nc(kfm)->getCurrentFocusCycleRoot());
	if (cont == this || isParentOf(cont)) {
		kfm->setGlobalCurrentFocusCycleRootPriv(nullptr);
	}
}

Container* Container::getTraversalRoot() {
	if (isFocusCycleRoot()) {
		return findTraversalRoot();
	}
	return $Component::getTraversalRoot();
}

void Container::setFocusTraversalPolicy($FocusTraversalPolicy* policy) {
	$var($FocusTraversalPolicy, oldPolicy, nullptr);
	$synchronized(this) {
		$assign(oldPolicy, this->focusTraversalPolicy);
		$set(this, focusTraversalPolicy, policy);
	}
	firePropertyChange("focusTraversalPolicy"_s, $of(oldPolicy), $of(policy));
}

$FocusTraversalPolicy* Container::getFocusTraversalPolicy() {
	bool var$0 = !isFocusTraversalPolicyProvider();
	if (var$0 && !isFocusCycleRoot()) {
		return nullptr;
	}
	$var($FocusTraversalPolicy, policy, this->focusTraversalPolicy);
	if (policy != nullptr) {
		return policy;
	}
	$var(Container, rootAncestor, getFocusCycleRootAncestor());
	if (rootAncestor != nullptr) {
		return rootAncestor->getFocusTraversalPolicy();
	} else {
		return $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getDefaultFocusTraversalPolicy();
	}
}

bool Container::isFocusTraversalPolicySet() {
	return (this->focusTraversalPolicy != nullptr);
}

void Container::setFocusCycleRoot(bool focusCycleRoot) {
	bool oldFocusCycleRoot = false;
	$synchronized(this) {
		oldFocusCycleRoot = this->focusCycleRoot;
		this->focusCycleRoot = focusCycleRoot;
	}
	firePropertyChange("focusCycleRoot"_s, oldFocusCycleRoot, focusCycleRoot);
}

bool Container::isFocusCycleRoot() {
	return this->focusCycleRoot;
}

void Container::setFocusTraversalPolicyProvider(bool provider) {
	bool oldProvider = false;
	$synchronized(this) {
		oldProvider = this->focusTraversalPolicyProvider;
		this->focusTraversalPolicyProvider = provider;
	}
	firePropertyChange("focusTraversalPolicyProvider"_s, oldProvider, provider);
}

bool Container::isFocusTraversalPolicyProvider() {
	return this->focusTraversalPolicyProvider;
}

void Container::transferFocusDownCycle() {
	if (isFocusCycleRoot()) {
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->setGlobalCurrentFocusCycleRootPriv(this);
		$var($Component, toFocus, $nc($(getFocusTraversalPolicy()))->getDefaultComponent(this));
		if (toFocus != nullptr) {
			$init($FocusEvent$Cause);
			toFocus->requestFocus($FocusEvent$Cause::TRAVERSAL_DOWN);
		}
	}
}

void Container::preProcessKeyEvent($KeyEvent* e) {
	$var(Container, parent, this->parent);
	if (parent != nullptr) {
		parent->preProcessKeyEvent(e);
	}
}

void Container::postProcessKeyEvent($KeyEvent* e) {
	$var(Container, parent, this->parent);
	if (parent != nullptr) {
		parent->postProcessKeyEvent(e);
	}
}

bool Container::postsOldMouseEvents() {
	return true;
}

void Container::applyComponentOrientation($ComponentOrientation* o) {
	$Component::applyComponentOrientation(o);
	$synchronized(getTreeLock()) {
		for (int32_t i = 0; i < $nc(this->component)->size(); ++i) {
			$var($Component, comp, $cast($Component, $nc(this->component)->get(i)));
			$nc(comp)->applyComponentOrientation(o);
		}
	}
}

void Container::addPropertyChangeListener($PropertyChangeListener* listener) {
	$Component::addPropertyChangeListener(listener);
}

void Container::addPropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$Component::addPropertyChangeListener(propertyName, listener);
}

void Container::writeObject($ObjectOutputStream* s) {
	$var($ObjectOutputStream$PutField, f, $nc(s)->putFields());
	$nc(f)->put("ncomponents"_s, $nc(this->component)->size());
	f->put("component"_s, $($of($nc(this->component)->toArray(Container::EMPTY_ARRAY))));
	f->put("layoutMgr"_s, $of(this->layoutMgr));
	f->put("dispatcher"_s, $of(this->dispatcher));
	f->put("maxSize"_s, $of(this->maxSize));
	f->put("focusCycleRoot"_s, this->focusCycleRoot);
	f->put("containerSerializedDataVersion"_s, this->containerSerializedDataVersion);
	f->put("focusTraversalPolicyProvider"_s, this->focusTraversalPolicyProvider);
	s->writeFields();
	$init($Component);
	$AWTEventMulticaster::save(s, $Component::containerListenerK, this->containerListener);
	s->writeObject(nullptr);
	if ($instanceOf($Serializable, this->focusTraversalPolicy)) {
		s->writeObject(this->focusTraversalPolicy);
	} else {
		s->writeObject(nullptr);
	}
}

void Container::readObject($ObjectInputStream* s) {
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$var($ComponentArray, tmpComponent, $cast($ComponentArray, $nc(f)->get("component"_s, ($Object*)nullptr)));
	if (tmpComponent == nullptr) {
		$assign(tmpComponent, Container::EMPTY_ARRAY);
	}
	int32_t ncomponents = $nc(($($Integer::valueOf(f->get("ncomponents"_s, 0)))))->intValue();
	if (ncomponents < 0 || ncomponents > $nc(tmpComponent)->length) {
		$throwNew($InvalidObjectException, "Incorrect number of components"_s);
	}
	$set(this, component, $new($ArrayList, ncomponents));
	for (int32_t i = 0; i < ncomponents; ++i) {
		$nc(this->component)->add($nc(tmpComponent)->get(i));
	}
	$set(this, layoutMgr, $cast($LayoutManager, f->get("layoutMgr"_s, ($Object*)nullptr)));
	$set(this, dispatcher, $cast($LightweightDispatcher, f->get("dispatcher"_s, ($Object*)nullptr)));
	if (this->maxSize == nullptr) {
		$set(this, maxSize, $cast($Dimension, f->get("maxSize"_s, ($Object*)nullptr)));
	}
	this->focusCycleRoot = f->get("focusCycleRoot"_s, false);
	this->containerSerializedDataVersion = f->get("containerSerializedDataVersion"_s, 1);
	this->focusTraversalPolicyProvider = f->get("focusTraversalPolicyProvider"_s, false);
	$var($List, component, this->component);
	{
		$var($Iterator, i$, $nc(component)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Component, comp, $cast($Component, i$->next()));
			{
				$set($nc(comp), parent, this);
				adjustListeningChildren($AWTEvent::HIERARCHY_EVENT_MASK, comp->numListening($AWTEvent::HIERARCHY_EVENT_MASK));
				adjustListeningChildren($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK, comp->numListening($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK));
				adjustDescendants(comp->countHierarchyMembers());
			}
		}
	}
	$var($Object, keyOrNull, nullptr);
	while (nullptr != ($assign(keyOrNull, s->readObject()))) {
		$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
		$init($Component);
		if ($Component::containerListenerK == key) {
			addContainerListener(($cast($ContainerListener, $(s->readObject()))));
		} else {
			s->readObject();
		}
	}
	try {
		$var($Object, policy, s->readObject());
		if ($instanceOf($FocusTraversalPolicy, policy)) {
			$set(this, focusTraversalPolicy, $cast($FocusTraversalPolicy, policy));
		}
	} catch ($OptionalDataException&) {
		$var($OptionalDataException, e, $catch());
		if (!e->eof) {
			$throw(e);
		}
	}
}

$Accessible* Container::getAccessibleAt($Point* p) {
	$synchronized(getTreeLock()) {
		if ($instanceOf($Accessible, this)) {
			$var($Accessible, a, $cast($Accessible, this));
			$var($AccessibleContext, ac, a->getAccessibleContext());
			if (ac != nullptr) {
				$var($AccessibleComponent, acmp, nullptr);
				$var($Point, location, nullptr);
				int32_t nchildren = ac->getAccessibleChildrenCount();
				for (int32_t i = 0; i < nchildren; ++i) {
					$assign(a, $nc(ac)->getAccessibleChild(i));
					if (a != nullptr) {
						$assign(ac, a->getAccessibleContext());
						if (ac != nullptr) {
							$assign(acmp, ac->getAccessibleComponent());
							if ((acmp != nullptr) && (acmp->isShowing())) {
								$assign(location, acmp->getLocation());
								$var($Point, np, $new($Point, $nc(p)->x - $nc(location)->x, p->y - location->y));
								if (acmp->contains(np)) {
									return a;
								}
							}
						}
					}
				}
			}
			return $cast($Accessible, this);
		} else {
			$var($Component, ret, this);
			if (!this->contains($nc(p)->x, p->y)) {
				$assign(ret, nullptr);
			} else {
				int32_t ncomponents = this->getComponentCount();
				for (int32_t i = 0; i < ncomponents; ++i) {
					$var($Component, comp, this->getComponent(i));
					if ((comp != nullptr) && comp->isShowing()) {
						$var($Point, location, comp->getLocation());
						if (comp->contains($nc(p)->x - $nc(location)->x, p->y - location->y)) {
							$assign(ret, comp);
						}
					}
				}
			}
			if ($instanceOf($Accessible, ret)) {
				return $cast($Accessible, ret);
			}
		}
		return nullptr;
	}
}

int32_t Container::getAccessibleChildrenCount() {
	$synchronized(getTreeLock()) {
		int32_t count = 0;
		$var($ComponentArray, children, this->getComponents());
		for (int32_t i = 0; i < $nc(children)->length; ++i) {
			if ($instanceOf($Accessible, children->get(i))) {
				++count;
			}
		}
		return count;
	}
}

$Accessible* Container::getAccessibleChild(int32_t i) {
	$synchronized(getTreeLock()) {
		$var($ComponentArray, children, this->getComponents());
		int32_t count = 0;
		for (int32_t j = 0; j < $nc(children)->length; ++j) {
			if ($instanceOf($Accessible, children->get(j))) {
				if (count == i) {
					return $cast($Accessible, children->get(j));
				} else {
					++count;
				}
			}
		}
		return nullptr;
	}
}

void Container::increaseComponentCount($Component* c) {
	$synchronized(getTreeLock()) {
		if (!$nc(c)->isDisplayable()) {
			$throwNew($IllegalStateException, "Peer does not exist while invoking the increaseComponentCount() method"_s);
		}
		int32_t addHW = 0;
		int32_t addLW = 0;
		if ($instanceOf(Container, c)) {
			addLW = $nc(($cast(Container, c)))->numOfLWComponents;
			addHW = ($cast(Container, c))->numOfHWComponents;
		}
		if ($nc(c)->isLightweight()) {
			++addLW;
		} else {
			++addHW;
		}
		{
			$var(Container, cont, this);
			for (; cont != nullptr; $assign(cont, cont->getContainer())) {
				$nc(cont)->numOfLWComponents += addLW;
				cont->numOfHWComponents += addHW;
			}
		}
	}
}

void Container::decreaseComponentCount($Component* c) {
	$synchronized(getTreeLock()) {
		if (!$nc(c)->isDisplayable()) {
			$throwNew($IllegalStateException, "Peer does not exist while invoking the decreaseComponentCount() method"_s);
		}
		int32_t subHW = 0;
		int32_t subLW = 0;
		if ($instanceOf(Container, c)) {
			subLW = $nc(($cast(Container, c)))->numOfLWComponents;
			subHW = ($cast(Container, c))->numOfHWComponents;
		}
		if ($nc(c)->isLightweight()) {
			++subLW;
		} else {
			++subHW;
		}
		{
			$var(Container, cont, this);
			for (; cont != nullptr; $assign(cont, cont->getContainer())) {
				$nc(cont)->numOfLWComponents -= subLW;
				cont->numOfHWComponents -= subHW;
			}
		}
	}
}

int32_t Container::getTopmostComponentIndex() {
	checkTreeLock();
	if (getComponentCount() > 0) {
		return 0;
	}
	return -1;
}

int32_t Container::getBottommostComponentIndex() {
	checkTreeLock();
	if (getComponentCount() > 0) {
		return getComponentCount() - 1;
	}
	return -1;
}

$Region* Container::getOpaqueShape() {
	checkTreeLock();
	bool var$1 = isLightweight();
	bool var$0 = var$1 && isNonOpaqueForMixing();
	if (var$0 && hasLightweightDescendants()) {
		$init($Region);
		$var($Region, s, $Region::EMPTY_REGION);
		for (int32_t index = 0; index < getComponentCount(); ++index) {
			$var($Component, c, getComponent(index));
			bool var$2 = $nc(c)->isLightweight();
			if (var$2 && c->isShowing()) {
				$assign(s, $nc(s)->getUnion($(c->getOpaqueShape())));
			}
		}
		return $nc(s)->getIntersection($(getNormalShape()));
	}
	return $Component::getOpaqueShape();
}

void Container::recursiveSubtractAndApplyShape($Region* shape) {
	$var($Region, var$0, shape);
	int32_t var$1 = getTopmostComponentIndex();
	recursiveSubtractAndApplyShape(var$0, var$1, getBottommostComponentIndex());
}

void Container::recursiveSubtractAndApplyShape($Region* shape, int32_t fromZorder) {
	recursiveSubtractAndApplyShape(shape, fromZorder, getBottommostComponentIndex());
}

void Container::recursiveSubtractAndApplyShape($Region* shape, int32_t fromZorder, int32_t toZorder) {
	checkTreeLock();
	$init($PlatformLogger$Level);
	if ($nc(Container::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(Container::mixingLog)->fine($$str({"this = "_s, this, "; shape="_s, shape, "; fromZ="_s, $$str(fromZorder), "; toZ="_s, $$str(toZorder)}));
	}
	if (fromZorder == -1) {
		return;
	}
	if ($nc(shape)->isEmpty()) {
		return;
	}
	bool var$0 = getLayout() != nullptr;
	if (var$0 && !isValid()) {
		return;
	}
	for (int32_t index = fromZorder; index <= toZorder; ++index) {
		$var($Component, comp, getComponent(index));
		if (!$nc(comp)->isLightweight()) {
			comp->subtractAndApplyShape(shape);
		} else {
			bool var$2 = $instanceOf(Container, comp) && $nc(($cast(Container, comp)))->hasHeavyweightDescendants();
			if (var$2 && comp->isShowing()) {
				$nc(($cast(Container, comp)))->recursiveSubtractAndApplyShape(shape);
			}
		}
	}
}

void Container::recursiveApplyCurrentShape() {
	int32_t var$0 = getTopmostComponentIndex();
	recursiveApplyCurrentShape(var$0, getBottommostComponentIndex());
}

void Container::recursiveApplyCurrentShape(int32_t fromZorder) {
	recursiveApplyCurrentShape(fromZorder, getBottommostComponentIndex());
}

void Container::recursiveApplyCurrentShape(int32_t fromZorder, int32_t toZorder) {
	checkTreeLock();
	$init($PlatformLogger$Level);
	if ($nc(Container::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(Container::mixingLog)->fine($$str({"this = "_s, this, "; fromZ="_s, $$str(fromZorder), "; toZ="_s, $$str(toZorder)}));
	}
	if (fromZorder == -1) {
		return;
	}
	bool var$0 = getLayout() != nullptr;
	if (var$0 && !isValid()) {
		return;
	}
	for (int32_t index = fromZorder; index <= toZorder; ++index) {
		$var($Component, comp, getComponent(index));
		if (!$nc(comp)->isLightweight()) {
			comp->applyCurrentShape();
		}
		if ($instanceOf(Container, comp) && $nc(($cast(Container, comp)))->hasHeavyweightDescendants()) {
			$nc(($cast(Container, comp)))->recursiveApplyCurrentShape();
		}
	}
}

void Container::recursiveShowHeavyweightChildren() {
	bool var$0 = !hasHeavyweightDescendants();
	if (var$0 || !isVisible()) {
		return;
	}
	for (int32_t index = 0; index < getComponentCount(); ++index) {
		$var($Component, comp, getComponent(index));
		if ($nc(comp)->isLightweight()) {
			if ($instanceOf(Container, comp)) {
				$nc(($cast(Container, comp)))->recursiveShowHeavyweightChildren();
			}
		} else if (comp->isVisible()) {
			$var($ComponentPeer, peer, comp->peer);
			if (peer != nullptr) {
				peer->setVisible(true);
			}
		}
	}
}

void Container::recursiveHideHeavyweightChildren() {
	if (!hasHeavyweightDescendants()) {
		return;
	}
	for (int32_t index = 0; index < getComponentCount(); ++index) {
		$var($Component, comp, getComponent(index));
		if ($nc(comp)->isLightweight()) {
			if ($instanceOf(Container, comp)) {
				$nc(($cast(Container, comp)))->recursiveHideHeavyweightChildren();
			}
		} else if (comp->isVisible()) {
			$var($ComponentPeer, peer, comp->peer);
			if (peer != nullptr) {
				peer->setVisible(false);
			}
		}
	}
}

void Container::recursiveRelocateHeavyweightChildren($Point* origin) {
	for (int32_t index = 0; index < getComponentCount(); ++index) {
		$var($Component, comp, getComponent(index));
		if ($nc(comp)->isLightweight()) {
			if ($instanceOf(Container, comp) && $nc(($cast(Container, comp)))->hasHeavyweightDescendants()) {
				$var($Point, newOrigin, $new($Point, origin));
				int32_t var$0 = comp->getX();
				newOrigin->translate(var$0, comp->getY());
				$nc(($cast(Container, comp)))->recursiveRelocateHeavyweightChildren(newOrigin);
			}
		} else {
			$var($ComponentPeer, peer, comp->peer);
			if (peer != nullptr) {
				int32_t var$1 = $nc(origin)->x + comp->getX();
				int32_t var$2 = origin->y + comp->getY();
				int32_t var$3 = comp->getWidth();
				peer->setBounds(var$1, var$2, var$3, comp->getHeight(), $ComponentPeer::SET_LOCATION);
			}
		}
	}
}

bool Container::isRecursivelyVisibleUpToHeavyweightContainer() {
	if (!isLightweight()) {
		return true;
	}
	{
		$var(Container, cont, this);
		for (; cont != nullptr && cont->isLightweight(); $assign(cont, cont->getContainer())) {
			if (!$nc(cont)->isVisible()) {
				return false;
			}
		}
	}
	return true;
}

void Container::mixOnShowing() {
	$synchronized(getTreeLock()) {
		$init($PlatformLogger$Level);
		if ($nc(Container::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(Container::mixingLog)->fine($$str({"this = "_s, this}));
		}
		bool isLightweight = this->isLightweight();
		if (isLightweight && isRecursivelyVisibleUpToHeavyweightContainer()) {
			recursiveShowHeavyweightChildren();
		}
		if (!isMixingNeeded()) {
			return;
		}
		if (!isLightweight || (isLightweight && hasHeavyweightDescendants())) {
			recursiveApplyCurrentShape();
		}
		$Component::mixOnShowing();
	}
}

void Container::mixOnHiding(bool isLightweight) {
	$synchronized(getTreeLock()) {
		$init($PlatformLogger$Level);
		if ($nc(Container::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(Container::mixingLog)->fine($$str({"this = "_s, this, "; isLightweight="_s, $$str(isLightweight)}));
		}
		if (isLightweight) {
			recursiveHideHeavyweightChildren();
		}
		$Component::mixOnHiding(isLightweight);
	}
}

void Container::mixOnReshaping() {
	$synchronized(getTreeLock()) {
		$init($PlatformLogger$Level);
		if ($nc(Container::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(Container::mixingLog)->fine($$str({"this = "_s, this}));
		}
		bool isMixingNeeded = this->isMixingNeeded();
		bool var$0 = isLightweight();
		if (var$0 && hasHeavyweightDescendants()) {
			int32_t var$1 = getX();
			$var($Point, origin, $new($Point, var$1, getY()));
			{
				$var(Container, cont, getContainer());
				for (; cont != nullptr && cont->isLightweight(); $assign(cont, $nc(cont)->getContainer())) {
					int32_t var$2 = cont->getX();
					origin->translate(var$2, cont->getY());
				}
			}
			recursiveRelocateHeavyweightChildren(origin);
			if (!isMixingNeeded) {
				return;
			}
			recursiveApplyCurrentShape();
		}
		if (!isMixingNeeded) {
			return;
		}
		$Component::mixOnReshaping();
	}
}

void Container::mixOnZOrderChanging(int32_t oldZorder, int32_t newZorder) {
	$synchronized(getTreeLock()) {
		$init($PlatformLogger$Level);
		if ($nc(Container::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(Container::mixingLog)->fine($$str({"this = "_s, this, "; oldZ="_s, $$str(oldZorder), "; newZ="_s, $$str(newZorder)}));
		}
		if (!isMixingNeeded()) {
			return;
		}
		bool becameHigher = newZorder < oldZorder;
		bool var$0 = becameHigher && isLightweight();
		if (var$0 && hasHeavyweightDescendants()) {
			recursiveApplyCurrentShape();
		}
		$Component::mixOnZOrderChanging(oldZorder, newZorder);
	}
}

void Container::mixOnValidating() {
	$synchronized(getTreeLock()) {
		$init($PlatformLogger$Level);
		if ($nc(Container::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(Container::mixingLog)->fine($$str({"this = "_s, this}));
		}
		if (!isMixingNeeded()) {
			return;
		}
		if (hasHeavyweightDescendants()) {
			recursiveApplyCurrentShape();
		}
		bool var$0 = isLightweight();
		if (var$0 && isNonOpaqueForMixing()) {
			subtractAndApplyShapeBelowMe();
		}
		$Component::mixOnValidating();
	}
}

void Container::lambda$startLWModal$1(Container* nativeContainer) {
	$var($EventDispatchThread, dispatchThread, $cast($EventDispatchThread, $Thread::currentThread()));
	dispatchThread->pumpEventsForHierarchy(static_cast<$Conditional*>($$new(Container$$Lambda$lambda$startLWModal$0$1, nativeContainer)), this);
}

bool Container::lambda$startLWModal$0(Container* nativeContainer) {
	$init(Container);
	return $nc(nativeContainer)->modalComp != nullptr;
}

void clinit$Container($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(Container::log, $PlatformLogger::getLogger("java.awt.Container"_s));
	$assignStatic(Container::eventLog, $PlatformLogger::getLogger("java.awt.event.Container"_s));
	$assignStatic(Container::EMPTY_ARRAY, $new($ComponentArray, 0));
	$assignStatic(Container::mixingLog, $PlatformLogger::getLogger("java.awt.mixing.Container"_s));
		$init($Integer);
		$load($ComponentArray);
		$load($LayoutManager);
		$load($LightweightDispatcher);
		$load($Dimension);
		$init($Boolean);
	$assignStatic(Container::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "ncomponents"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "component"_s, $getClass($ComponentArray)),
		$$new($ObjectStreamField, "layoutMgr"_s, $LayoutManager::class$),
		$$new($ObjectStreamField, "dispatcher"_s, $LightweightDispatcher::class$),
		$$new($ObjectStreamField, "maxSize"_s, $Dimension::class$),
		$$new($ObjectStreamField, "focusCycleRoot"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "containerSerializedDataVersion"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "focusTraversalPolicyProvider"_s, $Boolean::TYPE)
	}));
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Container::initIDs();
		}
		$AWTAccessor::setContainerAccessor($$new($Container$1));
	}
	Container::isJavaAwtSmartInvalidate = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "java.awt.smartInvalidate"_s)))))))->booleanValue();
	Container::descendUnconditionallyWhenValidating = false;
}

Container::Container() {
}

$Class* Container::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Container$$Lambda$lambda$startLWModal$1::classInfo$.name)) {
			return Container$$Lambda$lambda$startLWModal$1::load$(name, initialize);
		}
		if (name->equals(Container$$Lambda$lambda$startLWModal$0$1::classInfo$.name)) {
			return Container$$Lambda$lambda$startLWModal$0$1::load$(name, initialize);
		}
	}
	$loadClass(Container, name, initialize, &_Container_ClassInfo_, clinit$Container, allocate$Container);
	return class$;
}

$Class* Container::class$ = nullptr;

	} // awt
} // java