#include <OrderOfGConfigNotify.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;

class OrderOfGConfigNotify$$Lambda$lambda$main$2 : public $Runnable {
	$class(OrderOfGConfigNotify$$Lambda$lambda$main$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		OrderOfGConfigNotify::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<OrderOfGConfigNotify$$Lambda$lambda$main$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo OrderOfGConfigNotify$$Lambda$lambda$main$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OrderOfGConfigNotify$$Lambda$lambda$main$2::*)()>(&OrderOfGConfigNotify$$Lambda$lambda$main$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo OrderOfGConfigNotify$$Lambda$lambda$main$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"OrderOfGConfigNotify$$Lambda$lambda$main$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* OrderOfGConfigNotify$$Lambda$lambda$main$2::load$($String* name, bool initialize) {
	$loadClass(OrderOfGConfigNotify$$Lambda$lambda$main$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* OrderOfGConfigNotify$$Lambda$lambda$main$2::class$ = nullptr;

class OrderOfGConfigNotify$$Lambda$lambda$main$0$1 : public $PropertyChangeListener {
	$class(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$($AtomicBoolean* childCalled, $AtomicBoolean* parentCalled, $JPanel* parent) {
		$set(this, childCalled, childCalled);
		$set(this, parentCalled, parentCalled);
		$set(this, parent, parent);
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		OrderOfGConfigNotify::lambda$main$0(childCalled, parentCalled, parent, evt);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<OrderOfGConfigNotify$$Lambda$lambda$main$0$1>());
	}
	$AtomicBoolean* childCalled = nullptr;
	$AtomicBoolean* parentCalled = nullptr;
	$JPanel* parent = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo OrderOfGConfigNotify$$Lambda$lambda$main$0$1::fieldInfos[4] = {
	{"childCalled", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, childCalled)},
	{"parentCalled", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, parentCalled)},
	{"parent", "Ljavax/swing/JPanel;", nullptr, $PUBLIC, $field(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, parent)},
	{}
};
$MethodInfo OrderOfGConfigNotify$$Lambda$lambda$main$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicBoolean;Ljava/util/concurrent/atomic/AtomicBoolean;Ljavax/swing/JPanel;)V", nullptr, $PUBLIC, $method(static_cast<void(OrderOfGConfigNotify$$Lambda$lambda$main$0$1::*)($AtomicBoolean*,$AtomicBoolean*,$JPanel*)>(&OrderOfGConfigNotify$$Lambda$lambda$main$0$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo OrderOfGConfigNotify$$Lambda$lambda$main$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"OrderOfGConfigNotify$$Lambda$lambda$main$0$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	fieldInfos,
	methodInfos
};
$Class* OrderOfGConfigNotify$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$loadClass(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* OrderOfGConfigNotify$$Lambda$lambda$main$0$1::class$ = nullptr;

class OrderOfGConfigNotify$$Lambda$lambda$main$1$2 : public $PropertyChangeListener {
	$class(OrderOfGConfigNotify$$Lambda$lambda$main$1$2, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$($AtomicBoolean* childCalled, $JPanel* child) {
		$set(this, childCalled, childCalled);
		$set(this, child, child);
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		OrderOfGConfigNotify::lambda$main$1(childCalled, child, evt);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<OrderOfGConfigNotify$$Lambda$lambda$main$1$2>());
	}
	$AtomicBoolean* childCalled = nullptr;
	$JPanel* child = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo OrderOfGConfigNotify$$Lambda$lambda$main$1$2::fieldInfos[3] = {
	{"childCalled", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(OrderOfGConfigNotify$$Lambda$lambda$main$1$2, childCalled)},
	{"child", "Ljavax/swing/JPanel;", nullptr, $PUBLIC, $field(OrderOfGConfigNotify$$Lambda$lambda$main$1$2, child)},
	{}
};
$MethodInfo OrderOfGConfigNotify$$Lambda$lambda$main$1$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicBoolean;Ljavax/swing/JPanel;)V", nullptr, $PUBLIC, $method(static_cast<void(OrderOfGConfigNotify$$Lambda$lambda$main$1$2::*)($AtomicBoolean*,$JPanel*)>(&OrderOfGConfigNotify$$Lambda$lambda$main$1$2::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo OrderOfGConfigNotify$$Lambda$lambda$main$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"OrderOfGConfigNotify$$Lambda$lambda$main$1$2",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	fieldInfos,
	methodInfos
};
$Class* OrderOfGConfigNotify$$Lambda$lambda$main$1$2::load$($String* name, bool initialize) {
	$loadClass(OrderOfGConfigNotify$$Lambda$lambda$main$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* OrderOfGConfigNotify$$Lambda$lambda$main$1$2::class$ = nullptr;

$FieldInfo _OrderOfGConfigNotify_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(OrderOfGConfigNotify, name)},
	{}
};

$MethodInfo _OrderOfGConfigNotify_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OrderOfGConfigNotify::*)()>(&OrderOfGConfigNotify::init$))},
	{"lambda$main$0", "(Ljava/util/concurrent/atomic/AtomicBoolean;Ljava/util/concurrent/atomic/AtomicBoolean;Ljavax/swing/JPanel;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($AtomicBoolean*,$AtomicBoolean*,$JPanel*,$PropertyChangeEvent*)>(&OrderOfGConfigNotify::lambda$main$0))},
	{"lambda$main$1", "(Ljava/util/concurrent/atomic/AtomicBoolean;Ljavax/swing/JPanel;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($AtomicBoolean*,$JPanel*,$PropertyChangeEvent*)>(&OrderOfGConfigNotify::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&OrderOfGConfigNotify::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OrderOfGConfigNotify::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _OrderOfGConfigNotify_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"OrderOfGConfigNotify",
	"java.lang.Object",
	nullptr,
	_OrderOfGConfigNotify_FieldInfo_,
	_OrderOfGConfigNotify_MethodInfo_
};

$Object* allocate$OrderOfGConfigNotify($Class* clazz) {
	return $of($alloc(OrderOfGConfigNotify));
}

$String* OrderOfGConfigNotify::name = nullptr;

void OrderOfGConfigNotify::init$() {
}

void OrderOfGConfigNotify::main($StringArray* args) {
	$init(OrderOfGConfigNotify);
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(OrderOfGConfigNotify$$Lambda$lambda$main$2)));
}

void OrderOfGConfigNotify::lambda$main$2() {
	$init(OrderOfGConfigNotify);
	$var($AtomicBoolean, parentCalled, $new($AtomicBoolean, false));
	$var($AtomicBoolean, childCalled, $new($AtomicBoolean, false));
	$var($JFrame, frame, $new($JFrame));
	$var($JPanel, parent, $new($JPanel));
	parent->addPropertyChangeListener(static_cast<$PropertyChangeListener*>($$new(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, childCalled, parentCalled, parent)));
	$var($JPanel, child, $new($JPanel));
	child->addPropertyChangeListener(static_cast<$PropertyChangeListener*>($$new(OrderOfGConfigNotify$$Lambda$lambda$main$1$2, childCalled, child)));
	parent->add(static_cast<$Component*>(child));
	frame->add(static_cast<$Component*>(parent));
	bool var$0 = !parentCalled->get();
	if (var$0 || !childCalled->get()) {
		$throwNew($RuntimeException, "Property listener was not called"_s);
	}
}

void OrderOfGConfigNotify::lambda$main$1($AtomicBoolean* childCalled, $JPanel* child, $PropertyChangeEvent* evt) {
	$init(OrderOfGConfigNotify);
	if (!$nc($($nc(evt)->getPropertyName()))->equals(OrderOfGConfigNotify::name)) {
		return;
	}
	$nc(childCalled)->set(true);
	if ($nc(child)->getGraphicsConfiguration() == nullptr) {
		$throwNew($RuntimeException, "GraphicsConfiguration is null"_s);
	}
}

void OrderOfGConfigNotify::lambda$main$0($AtomicBoolean* childCalled, $AtomicBoolean* parentCalled, $JPanel* parent, $PropertyChangeEvent* evt) {
	$init(OrderOfGConfigNotify);
	if (!$nc($($nc(evt)->getPropertyName()))->equals(OrderOfGConfigNotify::name)) {
		return;
	}
	if (!$nc(childCalled)->get()) {
		$throwNew($RuntimeException, "Parent is called/child is not"_s);
	}
	$nc(parentCalled)->set(true);
	if ($nc(parent)->getGraphicsConfiguration() == nullptr) {
		$throwNew($RuntimeException, "GraphicsConfiguration is null"_s);
	}
}

void clinit$OrderOfGConfigNotify($Class* class$) {
	$assignStatic(OrderOfGConfigNotify::name, "graphicsConfiguration"_s);
}

OrderOfGConfigNotify::OrderOfGConfigNotify() {
}

$Class* OrderOfGConfigNotify::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(OrderOfGConfigNotify$$Lambda$lambda$main$2::classInfo$.name)) {
			return OrderOfGConfigNotify$$Lambda$lambda$main$2::load$(name, initialize);
		}
		if (name->equals(OrderOfGConfigNotify$$Lambda$lambda$main$0$1::classInfo$.name)) {
			return OrderOfGConfigNotify$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
		if (name->equals(OrderOfGConfigNotify$$Lambda$lambda$main$1$2::classInfo$.name)) {
			return OrderOfGConfigNotify$$Lambda$lambda$main$1$2::load$(name, initialize);
		}
	}
	$loadClass(OrderOfGConfigNotify, name, initialize, &_OrderOfGConfigNotify_ClassInfo_, clinit$OrderOfGConfigNotify, allocate$OrderOfGConfigNotify);
	return class$;
}

$Class* OrderOfGConfigNotify::class$ = nullptr;