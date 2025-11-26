#include <java/awt/Dialog.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Conditional.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog$1.h>
#include <java/awt/Dialog$AccessibleAWTDialog.h>
#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventFilter.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/ModalEventFilter.h>
#include <java/awt/SecondaryLoop.h>
#include <java/awt/Shape.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window$AccessibleAWTWindow.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/HierarchyEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/DialogPeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Enum.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessControlException.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/ComponentFactory.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/util/IdentityArrayList.h>
#include <sun/awt/util/IdentityLinkedList.h>
#include <jcpp.h>

#undef APPLICATION_EXCLUDE
#undef APPLICATION_MODAL
#undef COMPONENT_EVENT_MASK
#undef COMPONENT_SHOWN
#undef DEFAULT_MODALITY_TYPE
#undef EVENT_QUEUE_KEY
#undef HIERARCHY_CHANGED
#undef HIERARCHY_EVENT_MASK
#undef MODELESS
#undef OPENED
#undef SHOWING_CHANGED
#undef TOOLKIT_EXCLUDE
#undef TOOLKIT_MODAL
#undef TOOLKIT_MODALITY_PERMISSION
#undef WINDOW_OPENED

using $WindowArray = $Array<::java::awt::Window>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTPermission = ::java::awt::AWTPermission;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Conditional = ::java::awt::Conditional;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dialog$1 = ::java::awt::Dialog$1;
using $Dialog$AccessibleAWTDialog = ::java::awt::Dialog$AccessibleAWTDialog;
using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $EventFilter = ::java::awt::EventFilter;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ModalEventFilter = ::java::awt::ModalEventFilter;
using $SecondaryLoop = ::java::awt::SecondaryLoop;
using $Shape = ::java::awt::Shape;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $Window$AccessibleAWTWindow = ::java::awt::Window$AccessibleAWTWindow;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $DialogPeer = ::java::awt::peer::DialogPeer;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessControlException = ::java::security::AccessControlException;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $AppContext = ::sun::awt::AppContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;
using $SunToolkit = ::sun::awt::SunToolkit;
using $IdentityArrayList = ::sun::awt::util::IdentityArrayList;
using $IdentityLinkedList = ::sun::awt::util::IdentityLinkedList;

namespace java {
	namespace awt {

class Dialog$$Lambda$lambda$show$0 : public $Runnable {
	$class(Dialog$$Lambda$lambda$show$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Dialog::lambda$show$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Dialog$$Lambda$lambda$show$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Dialog$$Lambda$lambda$show$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Dialog$$Lambda$lambda$show$0::*)()>(&Dialog$$Lambda$lambda$show$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Dialog$$Lambda$lambda$show$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.Dialog$$Lambda$lambda$show$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Dialog$$Lambda$lambda$show$0::load$($String* name, bool initialize) {
	$loadClass(Dialog$$Lambda$lambda$show$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Dialog$$Lambda$lambda$show$0::class$ = nullptr;

class Dialog$$Lambda$getSystemEventQueue$1 : public $PrivilegedAction {
	$class(Dialog$$Lambda$getSystemEventQueue$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Toolkit* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->getSystemEventQueue());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Dialog$$Lambda$getSystemEventQueue$1>());
	}
	$Toolkit* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Dialog$$Lambda$getSystemEventQueue$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Dialog$$Lambda$getSystemEventQueue$1, inst$)},
	{}
};
$MethodInfo Dialog$$Lambda$getSystemEventQueue$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Toolkit;)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog$$Lambda$getSystemEventQueue$1::*)($Toolkit*)>(&Dialog$$Lambda$getSystemEventQueue$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Dialog$$Lambda$getSystemEventQueue$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.Dialog$$Lambda$getSystemEventQueue$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* Dialog$$Lambda$getSystemEventQueue$1::load$($String* name, bool initialize) {
	$loadClass(Dialog$$Lambda$getSystemEventQueue$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Dialog$$Lambda$getSystemEventQueue$1::class$ = nullptr;

class Dialog$$Lambda$lambda$show$1$2 : public $Conditional {
	$class(Dialog$$Lambda$lambda$show$1$2, $NO_CLASS_INIT, $Conditional)
public:
	void init$() {
	}
	virtual bool evaluate() override {
		 return Dialog::lambda$show$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Dialog$$Lambda$lambda$show$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Dialog$$Lambda$lambda$show$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Dialog$$Lambda$lambda$show$1$2::*)()>(&Dialog$$Lambda$lambda$show$1$2::init$))},
	{"evaluate", "()Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Dialog$$Lambda$lambda$show$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.Dialog$$Lambda$lambda$show$1$2",
	"java.lang.Object",
	"java.awt.Conditional",
	nullptr,
	methodInfos
};
$Class* Dialog$$Lambda$lambda$show$1$2::load$($String* name, bool initialize) {
	$loadClass(Dialog$$Lambda$lambda$show$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Dialog$$Lambda$lambda$show$1$2::class$ = nullptr;

$CompoundAttribute _Dialog_MethodAnnotations_hide25[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Dialog_MethodAnnotations_show51[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Dialog_FieldInfo_[] = {
	{"resizable", "Z", nullptr, 0, $field(Dialog, resizable)},
	{"undecorated", "Z", nullptr, 0, $field(Dialog, undecorated)},
	{"initialized", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(Dialog, initialized)},
	{"DEFAULT_MODALITY_TYPE", "Ljava/awt/Dialog$ModalityType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Dialog, DEFAULT_MODALITY_TYPE)},
	{"modal", "Z", nullptr, 0, $field(Dialog, modal)},
	{"modalityType", "Ljava/awt/Dialog$ModalityType;", nullptr, 0, $field(Dialog, modalityType)},
	{"modalDialogs", "Lsun/awt/util/IdentityArrayList;", "Lsun/awt/util/IdentityArrayList<Ljava/awt/Dialog;>;", $STATIC | $TRANSIENT, $staticField(Dialog, modalDialogs)},
	{"blockedWindows", "Lsun/awt/util/IdentityArrayList;", "Lsun/awt/util/IdentityArrayList<Ljava/awt/Window;>;", $TRANSIENT, $field(Dialog, blockedWindows)},
	{"title", "Ljava/lang/String;", nullptr, 0, $field(Dialog, title)},
	{"modalFilter", "Ljava/awt/ModalEventFilter;", nullptr, $PRIVATE | $TRANSIENT, $field(Dialog, modalFilter)},
	{"secondaryLoop", "Ljava/awt/SecondaryLoop;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(Dialog, secondaryLoop)},
	{"isInHide", "Z", nullptr, $VOLATILE | $TRANSIENT, $field(Dialog, isInHide)},
	{"isInDispose", "Z", nullptr, $VOLATILE | $TRANSIENT, $field(Dialog, isInDispose)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Dialog, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(Dialog, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Dialog, serialVersionUID)},
	{}
};

$MethodInfo _Dialog_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Frame;)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)($Frame*)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Frame;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)($Frame*,bool)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)($Frame*,$String*)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)($Frame*,$String*,bool)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Frame;Ljava/lang/String;ZLjava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)($Frame*,$String*,bool,$GraphicsConfiguration*)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)(Dialog*)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)(Dialog*,$String*)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)(Dialog*,$String*,bool)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Dialog;Ljava/lang/String;ZLjava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)(Dialog*,$String*,bool,$GraphicsConfiguration*)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)($Window*)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Window;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)($Window*,$String*)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Window;Ljava/awt/Dialog$ModalityType;)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)($Window*,$Dialog$ModalityType*)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Window;Ljava/lang/String;Ljava/awt/Dialog$ModalityType;)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)($Window*,$String*,$Dialog$ModalityType*)>(&Dialog::init$))},
	{"<init>", "(Ljava/awt/Window;Ljava/lang/String;Ljava/awt/Dialog$ModalityType;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(Dialog::*)($Window*,$String*,$Dialog$ModalityType*,$GraphicsConfiguration*)>(&Dialog::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"blockWindow", "(Ljava/awt/Window;)V", nullptr, 0},
	{"blockWindows", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/awt/Window;>;)V", 0},
	{"checkModalityPermission", "(Ljava/awt/Dialog$ModalityType;)V", nullptr, $PRIVATE, $method(static_cast<void(Dialog::*)($Dialog$ModalityType*)>(&Dialog::checkModalityPermission))},
	{"checkShouldBeBlocked", "(Ljava/awt/Window;)V", nullptr, $STATIC, $method(static_cast<void(*)($Window*)>(&Dialog::checkShouldBeBlocked))},
	{"conditionalShow", "(Ljava/awt/Component;Ljava/util/concurrent/atomic/AtomicLong;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Dialog::*)($Component*,$AtomicLong*)>(&Dialog::conditionalShow))},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"doDispose", "()V", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getModalityType", "()Ljava/awt/Dialog$ModalityType;", nullptr, $PUBLIC},
	{"getTitle", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hide", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Dialog_MethodAnnotations_hide25},
	{"hideAndDisposeHandler", "()V", nullptr, $PRIVATE, $method(static_cast<void(Dialog::*)()>(&Dialog::hideAndDisposeHandler))},
	{"hideAndDisposePreHandler", "()V", nullptr, $PRIVATE, $method(static_cast<void(Dialog::*)()>(&Dialog::hideAndDisposePreHandler))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Dialog::initIDs))},
	{"isModal", "()Z", nullptr, $PUBLIC},
	{"isModal_NoClientCode", "()Z", nullptr, $FINAL, $method(static_cast<bool(Dialog::*)()>(&Dialog::isModal_NoClientCode))},
	{"isResizable", "()Z", nullptr, $PUBLIC},
	{"isUndecorated", "()Z", nullptr, $PUBLIC},
	{"lambda$show$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Dialog::lambda$show$0))},
	{"lambda$show$1", "()Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)()>(&Dialog::lambda$show$1))},
	{"modalHide", "()V", nullptr, 0},
	{"modalShow", "()V", nullptr, 0},
	{"modalityPopped", "()V", nullptr, $FINAL, $method(static_cast<void(Dialog::*)()>(&Dialog::modalityPopped))},
	{"modalityPushed", "()V", nullptr, $FINAL, $method(static_cast<void(Dialog::*)()>(&Dialog::modalityPushed))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Dialog::*)($ObjectInputStream*)>(&Dialog::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setModal", "(Z)V", nullptr, $PUBLIC},
	{"setModalityType", "(Ljava/awt/Dialog$ModalityType;)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setShape", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setUndecorated", "(Z)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"shouldBlock", "(Ljava/awt/Window;)Z", nullptr, 0},
	{"show", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Dialog_MethodAnnotations_show51},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"unblockWindow", "(Ljava/awt/Window;)V", nullptr, 0},
	{}
};

#define _METHOD_INDEX_initIDs 28

$InnerClassInfo _Dialog_InnerClassesInfo_[] = {
	{"java.awt.Dialog$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"java.awt.Dialog$AccessibleAWTDialog", "java.awt.Dialog", "AccessibleAWTDialog", $PROTECTED},
	{"java.awt.Dialog$ModalExclusionType", "java.awt.Dialog", "ModalExclusionType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.awt.Dialog$ModalityType", "java.awt.Dialog", "ModalityType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Dialog_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Dialog",
	"java.awt.Window",
	nullptr,
	_Dialog_FieldInfo_,
	_Dialog_MethodInfo_,
	nullptr,
	nullptr,
	_Dialog_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Dialog$1,java.awt.Dialog$AccessibleAWTDialog,java.awt.Dialog$ModalExclusionType,java.awt.Dialog$ModalityType"
};

$Object* allocate$Dialog($Class* clazz) {
	return $of($alloc(Dialog));
}

$Dialog$ModalityType* Dialog::DEFAULT_MODALITY_TYPE = nullptr;
$IdentityArrayList* Dialog::modalDialogs = nullptr;
$String* Dialog::base = nullptr;
int32_t Dialog::nameCounter = 0;

void Dialog::init$($Frame* owner) {
	Dialog::init$(owner, ""_s, false);
}

void Dialog::init$($Frame* owner, bool modal) {
	Dialog::init$(owner, ""_s, modal);
}

void Dialog::init$($Frame* owner, $String* title) {
	Dialog::init$(owner, title, false);
}

void Dialog::init$($Frame* owner, $String* title, bool modal) {
	$init($Dialog$ModalityType);
	Dialog::init$(static_cast<$Window*>(owner), title, modal ? Dialog::DEFAULT_MODALITY_TYPE : $Dialog$ModalityType::MODELESS);
}

void Dialog::init$($Frame* owner, $String* title, bool modal, $GraphicsConfiguration* gc) {
	$init($Dialog$ModalityType);
	Dialog::init$(static_cast<$Window*>(owner), title, modal ? Dialog::DEFAULT_MODALITY_TYPE : $Dialog$ModalityType::MODELESS, gc);
}

void Dialog::init$(Dialog* owner) {
	Dialog::init$(owner, ""_s, false);
}

void Dialog::init$(Dialog* owner, $String* title) {
	Dialog::init$(owner, title, false);
}

void Dialog::init$(Dialog* owner, $String* title, bool modal) {
	$init($Dialog$ModalityType);
	Dialog::init$(static_cast<$Window*>(owner), title, modal ? Dialog::DEFAULT_MODALITY_TYPE : $Dialog$ModalityType::MODELESS);
}

void Dialog::init$(Dialog* owner, $String* title, bool modal, $GraphicsConfiguration* gc) {
	$init($Dialog$ModalityType);
	Dialog::init$(static_cast<$Window*>(owner), title, modal ? Dialog::DEFAULT_MODALITY_TYPE : $Dialog$ModalityType::MODELESS, gc);
}

void Dialog::init$($Window* owner) {
	$init($Dialog$ModalityType);
	Dialog::init$(owner, ""_s, $Dialog$ModalityType::MODELESS);
}

void Dialog::init$($Window* owner, $String* title) {
	$init($Dialog$ModalityType);
	Dialog::init$(owner, title, $Dialog$ModalityType::MODELESS);
}

void Dialog::init$($Window* owner, $Dialog$ModalityType* modalityType) {
	Dialog::init$(owner, ""_s, modalityType);
}

void Dialog::init$($Window* owner, $String* title, $Dialog$ModalityType* modalityType) {
	$Window::init$(owner);
	this->resizable = true;
	this->undecorated = false;
	this->initialized = false;
	$set(this, blockedWindows, $new($IdentityArrayList));
	this->isInHide = false;
	this->isInDispose = false;
	if ((owner != nullptr) && !($instanceOf($Frame, owner)) && !($instanceOf(Dialog, owner))) {
		$throwNew($IllegalArgumentException, "Wrong parent window"_s);
	}
	$set(this, title, title);
	setModalityType(modalityType);
	$SunToolkit::checkAndSetPolicy(this);
	this->initialized = true;
}

void Dialog::init$($Window* owner, $String* title, $Dialog$ModalityType* modalityType, $GraphicsConfiguration* gc) {
	$Window::init$(owner, gc);
	this->resizable = true;
	this->undecorated = false;
	this->initialized = false;
	$set(this, blockedWindows, $new($IdentityArrayList));
	this->isInHide = false;
	this->isInDispose = false;
	if ((owner != nullptr) && !($instanceOf($Frame, owner)) && !($instanceOf(Dialog, owner))) {
		$throwNew($IllegalArgumentException, "wrong owner window"_s);
	}
	$set(this, title, title);
	setModalityType(modalityType);
	$SunToolkit::checkAndSetPolicy(this);
	this->initialized = true;
}

$String* Dialog::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(Dialog::class$) {
		$var($String, var$0, Dialog::base);
		return $concat(var$0, $$str(Dialog::nameCounter++));
	}
}

void Dialog::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->parent != nullptr && $nc(this->parent)->peer == nullptr) {
			$nc(this->parent)->addNotify();
		}
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createDialog(this));
		}
		$Window::addNotify();
	}
}

bool Dialog::isModal() {
	return isModal_NoClientCode();
}

bool Dialog::isModal_NoClientCode() {
	$init($Dialog$ModalityType);
	return this->modalityType != $Dialog$ModalityType::MODELESS;
}

void Dialog::setModal(bool modal) {
	this->modal = modal;
	$init($Dialog$ModalityType);
	setModalityType(modal ? Dialog::DEFAULT_MODALITY_TYPE : $Dialog$ModalityType::MODELESS);
}

$Dialog$ModalityType* Dialog::getModalityType() {
	return this->modalityType;
}

void Dialog::setModalityType($Dialog$ModalityType* type$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Dialog$ModalityType, type, type$renamed);
	if (type == nullptr) {
		$init($Dialog$ModalityType);
		type = $Dialog$ModalityType::MODELESS;
	}
	if (!$nc($($Toolkit::getDefaultToolkit()))->isModalityTypeSupported(type)) {
		$init($Dialog$ModalityType);
		type = $Dialog$ModalityType::MODELESS;
	}
	if (this->modalityType == type) {
		return;
	}
	checkModalityPermission(type);
	$set(this, modalityType, type);
	$init($Dialog$ModalityType);
	this->modal = (this->modalityType != $Dialog$ModalityType::MODELESS);
}

$String* Dialog::getTitle() {
	return this->title;
}

void Dialog::setTitle($String* title) {
	$useLocalCurrentObjectStackCache();
	$var($String, oldTitle, this->title);
	$synchronized(this) {
		$set(this, title, title);
		$var($DialogPeer, peer, $cast($DialogPeer, this->peer));
		if (peer != nullptr) {
			peer->setTitle(title);
		}
	}
	firePropertyChange("title"_s, $of(oldTitle), $of(title));
}

bool Dialog::conditionalShow($Component* toFocus, $AtomicLong* time) {
	$useLocalCurrentObjectStackCache();
	bool retval = false;
	closeSplashScreen();
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			addNotify();
		}
		validateUnconditionally();
		if (this->visible) {
			toFront();
			retval = false;
		} else {
			this->visible = (retval = true);
			if (!isModal()) {
				checkShouldBeBlocked(this);
			} else {
				$nc(Dialog::modalDialogs)->add(this);
				modalShow();
			}
			bool var$1 = toFocus != nullptr && time != nullptr && isFocusable();
			bool var$0 = var$1 && isEnabled();
			if (var$0 && !isModalBlocked()) {
				time->set($nc($($Toolkit::getEventQueue()))->getMostRecentKeyEventTime());
				$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->enqueueKeyEvents(time->get(), toFocus);
			}
			mixOnShowing();
			$nc(this->peer)->setVisible(true);
			if (isModalBlocked()) {
				$nc(this->modalBlocker)->toFront();
			}
			setLocationByPlatform(false);
			for (int32_t i = 0; i < $nc(this->ownedWindowList)->size(); ++i) {
				$var($Window, child, $cast($Window, $nc(($cast($WeakReference, $($nc(this->ownedWindowList)->elementAt(i)))))->get()));
				if ((child != nullptr) && child->showWithParent) {
					child->show();
					child->showWithParent = false;
				}
			}
			$Window::updateChildFocusableWindowState(this);
			createHierarchyEvents($HierarchyEvent::HIERARCHY_CHANGED, this, this->parent, $HierarchyEvent::SHOWING_CHANGED, $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_EVENT_MASK));
			if (this->componentListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::COMPONENT_EVENT_MASK)) != 0 || $Toolkit::enabledOnToolkit($AWTEvent::COMPONENT_EVENT_MASK)) {
				$var($ComponentEvent, e, $new($ComponentEvent, this, $ComponentEvent::COMPONENT_SHOWN));
				$nc($($Toolkit::getEventQueue()))->postEvent(e);
			}
		}
	}
	if (retval && ((int32_t)(this->state & (uint32_t)$Window::OPENED)) == 0) {
		postWindowEvent($WindowEvent::WINDOW_OPENED);
		this->state |= $Window::OPENED;
	}
	return retval;
}

void Dialog::setVisible(bool b) {
	$Window::setVisible(b);
}

void Dialog::show() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!this->initialized) {
		$throwNew($IllegalStateException, "The dialog component has not been initialized properly"_s);
	}
	this->beforeFirstShow = false;
	if (!isModal()) {
		conditionalShow(nullptr, nullptr);
	} else {
		$var($AppContext, showAppContext, $AppContext::getAppContext());
		$var($AtomicLong, time, $new($AtomicLong));
		$var($Component, predictedFocusOwner, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			try {
				$assign(predictedFocusOwner, getMostRecentFocusOwner());
				if (conditionalShow(predictedFocusOwner, time)) {
					$set(this, modalFilter, $ModalEventFilter::createFilterForDialog(this));
					$init($Dialog$ModalityType);
					if (this->modalityType == $Dialog$ModalityType::TOOLKIT_MODAL) {
						{
							$var($Iterator, i$, $nc($($AppContext::getAppContexts()))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($AppContext, appContext, $cast($AppContext, i$->next()));
								{
									if (appContext == showAppContext) {
										continue;
									}
									$var($EventQueue, eventQueue, $cast($EventQueue, $nc(appContext)->get($AppContext::EVENT_QUEUE_KEY)));
									$nc(eventQueue)->postEvent($$new($InvocationEvent, this, static_cast<$Runnable*>($$new(Dialog$$Lambda$lambda$show$0))));
									$var($EventDispatchThread, edt, eventQueue->getDispatchThread());
									$nc(edt)->addEventFilter(this->modalFilter);
								}
							}
						}
					}
					modalityPushed();
					{
						$var($Throwable, var$1, nullptr);
						try {
							$var($EventQueue, eventQueue, $cast($EventQueue, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Dialog$$Lambda$getSystemEventQueue$1, static_cast<$Toolkit*>($nc($($Toolkit::getDefaultToolkit()))))))));
							$set(this, secondaryLoop, $nc(eventQueue)->createSecondaryLoop(static_cast<$Conditional*>($$new(Dialog$$Lambda$lambda$show$1$2)), this->modalFilter, 0));
							if (!$nc(this->secondaryLoop)->enter()) {
								$set(this, secondaryLoop, nullptr);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							modalityPopped();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
					if (this->modalityType == $Dialog$ModalityType::TOOLKIT_MODAL) {
						{
							$var($Iterator, i$, $nc($($AppContext::getAppContexts()))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($AppContext, appContext, $cast($AppContext, i$->next()));
								{
									if (appContext == showAppContext) {
										continue;
									}
									$var($EventQueue, eventQueue, $cast($EventQueue, $nc(appContext)->get($AppContext::EVENT_QUEUE_KEY)));
									$var($EventDispatchThread, edt, $nc(eventQueue)->getDispatchThread());
									$nc(edt)->removeEventFilter(this->modalFilter);
								}
							}
						}
					}
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				if (predictedFocusOwner != nullptr) {
					$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->dequeueKeyEvents(time->get(), predictedFocusOwner);
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void Dialog::modalityPushed() {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, tk)) {
		$var($SunToolkit, stk, $cast($SunToolkit, tk));
		$nc(stk)->notifyModalityPushed(this);
	}
}

void Dialog::modalityPopped() {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, tk)) {
		$var($SunToolkit, stk, $cast($SunToolkit, tk));
		$nc(stk)->notifyModalityPopped(this);
	}
}

void Dialog::hideAndDisposePreHandler() {
	this->isInHide = true;
	$synchronized(getTreeLock()) {
		if (this->secondaryLoop != nullptr) {
			modalHide();
			if (this->modalFilter != nullptr) {
				$nc(this->modalFilter)->disable();
			}
			$nc(Dialog::modalDialogs)->remove($of(this));
		}
	}
}

void Dialog::hideAndDisposeHandler() {
	if (this->secondaryLoop != nullptr) {
		$nc(this->secondaryLoop)->exit();
		$set(this, secondaryLoop, nullptr);
	}
	this->isInHide = false;
}

void Dialog::hide() {
	hideAndDisposePreHandler();
	$Window::hide();
	if (!this->isInDispose) {
		hideAndDisposeHandler();
	}
}

void Dialog::doDispose() {
	this->isInDispose = true;
	$Window::doDispose();
	hideAndDisposeHandler();
	this->isInDispose = false;
}

void Dialog::toBack() {
	$useLocalCurrentObjectStackCache();
	$Window::toBack();
	if (this->visible) {
		$synchronized(getTreeLock()) {
			{
				$var($Iterator, i$, $nc(this->blockedWindows)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Window, w, $cast($Window, i$->next()));
					{
						$nc(w)->toBack_NoClientCode();
					}
				}
			}
		}
	}
}

bool Dialog::isResizable() {
	return this->resizable;
}

void Dialog::setResizable(bool resizable) {
	bool testvalid = false;
	$synchronized(this) {
		this->resizable = resizable;
		$var($DialogPeer, peer, $cast($DialogPeer, this->peer));
		if (peer != nullptr) {
			peer->setResizable(resizable);
			testvalid = true;
		}
	}
	if (testvalid) {
		invalidateIfValid();
	}
}

void Dialog::setUndecorated(bool undecorated) {
	$synchronized(getTreeLock()) {
		if (isDisplayable()) {
			$throwNew($IllegalComponentStateException, "The dialog is displayable."_s);
		}
		if (!undecorated) {
			if (getOpacity() < 1.0f) {
				$throwNew($IllegalComponentStateException, "The dialog is not opaque"_s);
			}
			if (getShape() != nullptr) {
				$throwNew($IllegalComponentStateException, "The dialog does not have a default shape"_s);
			}
			$var($Color, bg, getBackground());
			if ((bg != nullptr) && (bg->getAlpha() < 255)) {
				$throwNew($IllegalComponentStateException, "The dialog background color is not opaque"_s);
			}
		}
		this->undecorated = undecorated;
	}
}

bool Dialog::isUndecorated() {
	return this->undecorated;
}

void Dialog::setOpacity(float opacity) {
	$synchronized(getTreeLock()) {
		if ((opacity < 1.0f) && !isUndecorated()) {
			$throwNew($IllegalComponentStateException, "The dialog is decorated"_s);
		}
		$Window::setOpacity(opacity);
	}
}

void Dialog::setShape($Shape* shape) {
	$synchronized(getTreeLock()) {
		if ((shape != nullptr) && !isUndecorated()) {
			$throwNew($IllegalComponentStateException, "The dialog is decorated"_s);
		}
		$Window::setShape(shape);
	}
}

void Dialog::setBackground($Color* bgColor) {
	$synchronized(getTreeLock()) {
		bool var$0 = (bgColor != nullptr) && (bgColor->getAlpha() < 255);
		if (var$0 && !isUndecorated()) {
			$throwNew($IllegalComponentStateException, "The dialog is decorated"_s);
		}
		$Window::setBackground(bgColor);
	}
}

$String* Dialog::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $str({$($Window::paramString()), ","_s, this->modalityType}));
	if (this->title != nullptr) {
		$plusAssign(str, $$str({",title="_s, this->title}));
	}
	return str;
}

void Dialog::initIDs() {
	$init(Dialog);
	$prepareNativeStatic(Dialog, initIDs, void);
	$invokeNativeStatic(Dialog, initIDs);
	$finishNativeStatic();
}

void Dialog::modalShow() {
	$useLocalCurrentObjectStackCache();
	$var($IdentityArrayList, blockers, $new($IdentityArrayList));
	{
		$var($Iterator, i$, $nc(Dialog::modalDialogs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(Dialog, d, $cast(Dialog, i$->next()));
			{
				if ($nc(d)->shouldBlock(this)) {
					$var($Window, w, d);
					while ((w != nullptr) && (!$equals(w, this))) {
						$assign(w, w->getOwner_NoClientCode());
					}
					bool var$0 = ($equals(w, this)) || !shouldBlock(d);
					if (var$0 || ($nc(this->modalityType)->compareTo($(static_cast<$Enum*>(d->getModalityType()))) < 0)) {
						blockers->add(d);
					}
				}
			}
		}
	}
	for (int32_t i = 0; i < blockers->size(); ++i) {
		$var(Dialog, blocker, $cast(Dialog, blockers->get(i)));
		if ($nc(blocker)->isModalBlocked()) {
			$var(Dialog, blockerBlocker, blocker->getModalBlocker());
			if (!blockers->contains(blockerBlocker)) {
				blockers->add(i + 1, blockerBlocker);
			}
		}
	}
	if (blockers->size() > 0) {
		$nc(($cast(Dialog, $(blockers->get(0)))))->blockWindow(this);
	}
	$var($IdentityArrayList, blockersHierarchies, $new($IdentityArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(blockers)))));
	int32_t k = 0;
	while (k < blockersHierarchies->size()) {
		$var($Window, w, $cast($Window, blockersHierarchies->get(k)));
		$var($WindowArray, ownedWindows, $nc(w)->getOwnedWindows_NoClientCode());
		{
			$var($WindowArray, arr$, ownedWindows);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Window, win, arr$->get(i$));
				{
					blockersHierarchies->add(win);
				}
			}
		}
		++k;
	}
	$var($List, toBlock, $new($IdentityLinkedList));
	$var($IdentityArrayList, unblockedWindows, $Window::getAllUnblockedWindows());
	{
		$var($Iterator, i$, $nc(unblockedWindows)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Window, w, $cast($Window, i$->next()));
			{
				bool var$1 = shouldBlock(w);
				if (var$1 && !blockersHierarchies->contains(w)) {
					if (($instanceOf(Dialog, w)) && $nc(($cast(Dialog, w)))->isModal_NoClientCode()) {
						$var(Dialog, wd, $cast(Dialog, w));
						bool var$2 = $nc(wd)->shouldBlock(this);
						if (var$2) {
							int32_t var$3 = $nc(Dialog::modalDialogs)->indexOf(wd);
							var$2 = (var$3 > $nc(Dialog::modalDialogs)->indexOf(this));
						}
						if (var$2) {
							continue;
						}
					}
					toBlock->add(w);
				}
			}
		}
	}
	blockWindows(toBlock);
	if (!isModalBlocked()) {
		updateChildrenBlocking();
	}
}

void Dialog::modalHide() {
	$useLocalCurrentObjectStackCache();
	$var($IdentityArrayList, save, $new($IdentityArrayList));
	int32_t blockedWindowsCount = $nc(this->blockedWindows)->size();
	for (int32_t i = 0; i < blockedWindowsCount; ++i) {
		$var($Window, w, $cast($Window, $nc(this->blockedWindows)->get(0)));
		save->add(w);
		unblockWindow(w);
	}
	for (int32_t i = 0; i < blockedWindowsCount; ++i) {
		$var($Window, w, $cast($Window, save->get(i)));
		if (($instanceOf(Dialog, w)) && $nc(($cast(Dialog, w)))->isModal_NoClientCode()) {
			$var(Dialog, d, $cast(Dialog, w));
			$nc(d)->modalShow();
		} else {
			checkShouldBeBlocked(w);
		}
	}
}

bool Dialog::shouldBlock($Window* w) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = !isVisible_NoClientCode();
	bool var$0 = var$1 || (!$nc(w)->isVisible_NoClientCode() && !w->isInShow) || this->isInHide || ($equals(w, this));
	if (var$0 || !isModal_NoClientCode()) {
		return false;
	}
	if (($instanceOf(Dialog, w)) && $nc(($cast(Dialog, w)))->isInHide) {
		return false;
	}
	$var($Window, blockerToCheck, this);
	while (blockerToCheck != nullptr) {
		$var($Component, c, w);
		while ((c != nullptr) && (!$equals(c, blockerToCheck))) {
			$assign(c, c->getParent_NoClientCode());
		}
		if ($equals(c, blockerToCheck)) {
			return false;
		}
		$assign(blockerToCheck, blockerToCheck->getModalBlocker());
	}
	$init($Dialog$1);
	switch ($nc($Dialog$1::$SwitchMap$java$awt$Dialog$ModalityType)->get($nc((this->modalityType))->ordinal())) {
	case 1:
		{
			return false;
		}
	case 2:
		{
			$init($Dialog$ModalExclusionType);
			if ($nc(w)->isModalExcluded($Dialog$ModalExclusionType::APPLICATION_EXCLUDE)) {
				$var($Component, c, this);
				while ((c != nullptr) && (!$equals(c, w))) {
					$assign(c, c->getParent_NoClientCode());
				}
				return $equals(c, w);
			} else {
				return getDocumentRoot() == w->getDocumentRoot();
			}
		}
	case 3:
		{
			$init($Dialog$ModalExclusionType);
			return !$nc(w)->isModalExcluded($Dialog$ModalExclusionType::APPLICATION_EXCLUDE) && (this->appContext == w->appContext);
		}
	case 4:
		{
			$init($Dialog$ModalExclusionType);
			return !$nc(w)->isModalExcluded($Dialog$ModalExclusionType::TOOLKIT_EXCLUDE);
		}
	}
	return false;
}

void Dialog::blockWindow($Window* w) {
	if (!$nc(w)->isModalBlocked()) {
		w->setModalBlocked(this, true, true);
		$nc(this->blockedWindows)->add(w);
	}
}

void Dialog::blockWindows($List* toBlock) {
	$useLocalCurrentObjectStackCache();
	$var($DialogPeer, dpeer, $cast($DialogPeer, this->peer));
	if (dpeer == nullptr) {
		return;
	}
	$var($Iterator, it, $nc(toBlock)->iterator());
	while ($nc(it)->hasNext()) {
		$var($Window, w, $cast($Window, it->next()));
		if (!$nc(w)->isModalBlocked()) {
			w->setModalBlocked(this, true, false);
		} else {
			it->remove();
		}
	}
	$nc(dpeer)->blockWindows(toBlock);
	$nc(this->blockedWindows)->addAll(toBlock);
}

void Dialog::unblockWindow($Window* w) {
	bool var$0 = $nc(w)->isModalBlocked();
	if (var$0 && $nc(this->blockedWindows)->contains(w)) {
		$nc(this->blockedWindows)->remove($of(w));
		w->setModalBlocked(this, false, true);
	}
}

void Dialog::checkShouldBeBlocked($Window* w) {
	$init(Dialog);
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(w)->getTreeLock()) {
		for (int32_t i = 0; i < $nc(Dialog::modalDialogs)->size(); ++i) {
			$var(Dialog, modalDialog, $cast(Dialog, $nc(Dialog::modalDialogs)->get(i)));
			if ($nc(modalDialog)->shouldBlock(w)) {
				modalDialog->blockWindow(w);
				break;
			}
		}
	}
}

void Dialog::checkModalityPermission($Dialog$ModalityType* mt) {
	$init($Dialog$ModalityType);
	if (mt == $Dialog$ModalityType::TOOLKIT_MODAL) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$init($AWTPermissions);
			sm->checkPermission($AWTPermissions::TOOLKIT_MODALITY_PERMISSION);
		}
	}
}

void Dialog::readObject($ObjectInputStream* s) {
	$GraphicsEnvironment::checkHeadless();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$Dialog$ModalityType* localModalityType = $cast($Dialog$ModalityType, $nc(fields)->get("modalityType"_s, ($Object*)nullptr));
	try {
		checkModalityPermission(localModalityType);
	} catch ($AccessControlException& ace) {
		localModalityType = Dialog::DEFAULT_MODALITY_TYPE;
	}
	if (localModalityType == nullptr) {
		this->modal = fields->get("modal"_s, false);
		setModal(this->modal);
	} else {
		$set(this, modalityType, localModalityType);
	}
	this->resizable = fields->get("resizable"_s, true);
	this->undecorated = fields->get("undecorated"_s, false);
	$set(this, title, $cast($String, fields->get("title"_s, $of(""_s))));
	$set(this, blockedWindows, $new($IdentityArrayList));
	$SunToolkit::checkAndSetPolicy(this);
	this->initialized = true;
}

$AccessibleContext* Dialog::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Dialog$AccessibleAWTDialog, this));
	}
	return this->accessibleContext;
}

bool Dialog::lambda$show$1() {
	$init(Dialog);
	return true;
}

void Dialog::lambda$show$0() {
	$init(Dialog);
}

void clinit$Dialog($Class* class$) {
	$assignStatic(Dialog::base, "dialog"_s);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Dialog::initIDs();
		}
	}
	$init($Dialog$ModalityType);
	$assignStatic(Dialog::DEFAULT_MODALITY_TYPE, $Dialog$ModalityType::APPLICATION_MODAL);
	$assignStatic(Dialog::modalDialogs, $new($IdentityArrayList));
	Dialog::nameCounter = 0;
}

Dialog::Dialog() {
}

$Class* Dialog::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Dialog$$Lambda$lambda$show$0::classInfo$.name)) {
			return Dialog$$Lambda$lambda$show$0::load$(name, initialize);
		}
		if (name->equals(Dialog$$Lambda$getSystemEventQueue$1::classInfo$.name)) {
			return Dialog$$Lambda$getSystemEventQueue$1::load$(name, initialize);
		}
		if (name->equals(Dialog$$Lambda$lambda$show$1$2::classInfo$.name)) {
			return Dialog$$Lambda$lambda$show$1$2::load$(name, initialize);
		}
	}
	$loadClass(Dialog, name, initialize, &_Dialog_ClassInfo_, clinit$Dialog, allocate$Dialog);
	return class$;
}

$Class* Dialog::class$ = nullptr;

	} // awt
} // java