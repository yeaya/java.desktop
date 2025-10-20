#include <GetUpToDateData.h>

#include <GetUpToDateData$1.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/event/EventListenerList.h>
#include <jcpp.h>

#undef SECONDS

using $GetUpToDateData$1 = ::GetUpToDateData$1;
using $AWTEventListenerArray = $Array<::java::awt::event::AWTEventListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $EventListener = ::java::util::EventListener;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $EventListenerList = ::javax::swing::event::EventListenerList;

class GetUpToDateData$$Lambda$lambda$static$0 : public $AWTEventListener {
	$class(GetUpToDateData$$Lambda$lambda$static$0, $NO_CLASS_INIT, $AWTEventListener)
public:
	void init$() {
	}
	virtual void eventDispatched($AWTEvent* event) override {
		GetUpToDateData::lambda$static$0(event);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GetUpToDateData$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GetUpToDateData$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetUpToDateData$$Lambda$lambda$static$0::*)()>(&GetUpToDateData$$Lambda$lambda$static$0::init$))},
	{"eventDispatched", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GetUpToDateData$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"GetUpToDateData$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.awt.event.AWTEventListener",
	nullptr,
	methodInfos
};
$Class* GetUpToDateData$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(GetUpToDateData$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GetUpToDateData$$Lambda$lambda$static$0::class$ = nullptr;

class GetUpToDateData$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(GetUpToDateData$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		GetUpToDateData::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GetUpToDateData$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GetUpToDateData$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetUpToDateData$$Lambda$lambda$main$1$1::*)()>(&GetUpToDateData$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GetUpToDateData$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"GetUpToDateData$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* GetUpToDateData$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(GetUpToDateData$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GetUpToDateData$$Lambda$lambda$main$1$1::class$ = nullptr;

class GetUpToDateData$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(GetUpToDateData$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		GetUpToDateData::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GetUpToDateData$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GetUpToDateData$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetUpToDateData$$Lambda$lambda$main$2$2::*)()>(&GetUpToDateData$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GetUpToDateData$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"GetUpToDateData$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* GetUpToDateData$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(GetUpToDateData$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GetUpToDateData$$Lambda$lambda$main$2$2::class$ = nullptr;

class GetUpToDateData$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(GetUpToDateData$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$($CountDownLatch* go) {
		$set(this, go, go);
	}
	virtual void run() override {
		GetUpToDateData::lambda$main$3(go);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GetUpToDateData$$Lambda$lambda$main$3$3>());
	}
	$CountDownLatch* go = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GetUpToDateData$$Lambda$lambda$main$3$3::fieldInfos[2] = {
	{"go", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PUBLIC, $field(GetUpToDateData$$Lambda$lambda$main$3$3, go)},
	{}
};
$MethodInfo GetUpToDateData$$Lambda$lambda$main$3$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(GetUpToDateData$$Lambda$lambda$main$3$3::*)($CountDownLatch*)>(&GetUpToDateData$$Lambda$lambda$main$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GetUpToDateData$$Lambda$lambda$main$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"GetUpToDateData$$Lambda$lambda$main$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* GetUpToDateData$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$loadClass(GetUpToDateData$$Lambda$lambda$main$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GetUpToDateData$$Lambda$lambda$main$3$3::class$ = nullptr;

class GetUpToDateData$$Lambda$lambda$main$4$4 : public $Runnable {
	$class(GetUpToDateData$$Lambda$lambda$main$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$($CountDownLatch* go) {
		$set(this, go, go);
	}
	virtual void run() override {
		GetUpToDateData::lambda$main$4(go);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GetUpToDateData$$Lambda$lambda$main$4$4>());
	}
	$CountDownLatch* go = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GetUpToDateData$$Lambda$lambda$main$4$4::fieldInfos[2] = {
	{"go", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PUBLIC, $field(GetUpToDateData$$Lambda$lambda$main$4$4, go)},
	{}
};
$MethodInfo GetUpToDateData$$Lambda$lambda$main$4$4::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(GetUpToDateData$$Lambda$lambda$main$4$4::*)($CountDownLatch*)>(&GetUpToDateData$$Lambda$lambda$main$4$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GetUpToDateData$$Lambda$lambda$main$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"GetUpToDateData$$Lambda$lambda$main$4$4",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* GetUpToDateData$$Lambda$lambda$main$4$4::load$($String* name, bool initialize) {
	$loadClass(GetUpToDateData$$Lambda$lambda$main$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GetUpToDateData$$Lambda$lambda$main$4$4::class$ = nullptr;

class GetUpToDateData$$Lambda$lambda$main$5$5 : public $Runnable {
	$class(GetUpToDateData$$Lambda$lambda$main$5$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$($CountDownLatch* go) {
		$set(this, go, go);
	}
	virtual void run() override {
		GetUpToDateData::lambda$main$5(go);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GetUpToDateData$$Lambda$lambda$main$5$5>());
	}
	$CountDownLatch* go = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GetUpToDateData$$Lambda$lambda$main$5$5::fieldInfos[2] = {
	{"go", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PUBLIC, $field(GetUpToDateData$$Lambda$lambda$main$5$5, go)},
	{}
};
$MethodInfo GetUpToDateData$$Lambda$lambda$main$5$5::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(GetUpToDateData$$Lambda$lambda$main$5$5::*)($CountDownLatch*)>(&GetUpToDateData$$Lambda$lambda$main$5$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GetUpToDateData$$Lambda$lambda$main$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"GetUpToDateData$$Lambda$lambda$main$5$5",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* GetUpToDateData$$Lambda$lambda$main$5$5::load$($String* name, bool initialize) {
	$loadClass(GetUpToDateData$$Lambda$lambda$main$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GetUpToDateData$$Lambda$lambda$main$5$5::class$ = nullptr;

$FieldInfo _GetUpToDateData_FieldInfo_[] = {
	{"listeners", "Ljavax/swing/event/EventListenerList;", nullptr, $STATIC | $FINAL, $staticField(GetUpToDateData, listeners)},
	{"o1", "Ljava/util/EventListener;", nullptr, $STATIC | $FINAL, $staticField(GetUpToDateData, o1)},
	{"o2", "Ljava/awt/event/AWTEventListener;", nullptr, $STATIC | $FINAL, $staticField(GetUpToDateData, o2)},
	{}
};

$MethodInfo _GetUpToDateData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetUpToDateData::*)()>(&GetUpToDateData::init$))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&GetUpToDateData::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&GetUpToDateData::lambda$main$2))},
	{"lambda$main$3", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CountDownLatch*)>(&GetUpToDateData::lambda$main$3))},
	{"lambda$main$4", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CountDownLatch*)>(&GetUpToDateData::lambda$main$4))},
	{"lambda$main$5", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CountDownLatch*)>(&GetUpToDateData::lambda$main$5))},
	{"lambda$static$0", "(Ljava/awt/AWTEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($AWTEvent*)>(&GetUpToDateData::lambda$static$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetUpToDateData::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _GetUpToDateData_InnerClassesInfo_[] = {
	{"GetUpToDateData$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetUpToDateData_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"GetUpToDateData",
	"java.lang.Object",
	nullptr,
	_GetUpToDateData_FieldInfo_,
	_GetUpToDateData_MethodInfo_,
	nullptr,
	nullptr,
	_GetUpToDateData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GetUpToDateData$1"
};

$Object* allocate$GetUpToDateData($Class* clazz) {
	return $of($alloc(GetUpToDateData));
}

$EventListenerList* GetUpToDateData::listeners = nullptr;
$EventListener* GetUpToDateData::o1 = nullptr;
$AWTEventListener* GetUpToDateData::o2 = nullptr;

void GetUpToDateData::init$() {
}

void GetUpToDateData::main($StringArray* args) {
	$init(GetUpToDateData);
	$useLocalCurrentObjectStackCache();
	$var($CountDownLatch, go, $new($CountDownLatch, 3));
	$var($Thread, t1, $new($Thread, static_cast<$Runnable*>($$new(GetUpToDateData$$Lambda$lambda$main$1$1))));
	$var($Thread, t2, $new($Thread, static_cast<$Runnable*>($$new(GetUpToDateData$$Lambda$lambda$main$2$2))));
	$var($Thread, t3, $new($Thread, static_cast<$Runnable*>($$new(GetUpToDateData$$Lambda$lambda$main$3$3, go))));
	$var($Thread, t4, $new($Thread, static_cast<$Runnable*>($$new(GetUpToDateData$$Lambda$lambda$main$4$4, go))));
	$var($Thread, t5, $new($Thread, static_cast<$Runnable*>($$new(GetUpToDateData$$Lambda$lambda$main$5$5, go))));
	t1->setDaemon(true);
	t2->setDaemon(true);
	t3->setDaemon(true);
	t4->setDaemon(true);
	t5->setDaemon(true);
	t1->start();
	t2->start();
	t3->start();
	t4->start();
	t5->start();
	$init($TimeUnit);
	if (!go->await(10, $TimeUnit::SECONDS)) {
		$throwNew($RuntimeException, "The test hangs"_s);
	}
}

void GetUpToDateData::lambda$main$5($CountDownLatch* go) {
	$init(GetUpToDateData);
	$useLocalCurrentObjectStackCache();
	while (true) {
		$load($AWTEventListener);
		bool var$0 = $nc(($fcast($AWTEventListenerArray, $($nc(GetUpToDateData::listeners)->getListeners($AWTEventListener::class$)))))->length != 1;
		if (!(var$0 || $nc(($fcast($AWTEventListenerArray, $($nc(GetUpToDateData::listeners)->getListeners($AWTEventListener::class$)))))->get(0) != GetUpToDateData::o2)) {
			break;
		}
		{
		}
	}
	$nc(go)->countDown();
}

void GetUpToDateData::lambda$main$4($CountDownLatch* go) {
	$init(GetUpToDateData);
	$useLocalCurrentObjectStackCache();
	while (true) {
		$load($EventListener);
		bool var$0 = $nc($($nc(GetUpToDateData::listeners)->getListeners($EventListener::class$)))->length != 1;
		if (!(var$0 || $nc($($nc(GetUpToDateData::listeners)->getListeners($EventListener::class$)))->get(0) != GetUpToDateData::o1)) {
			break;
		}
		{
		}
	}
	$nc(go)->countDown();
}

void GetUpToDateData::lambda$main$3($CountDownLatch* go) {
	$init(GetUpToDateData);
	while ($nc(GetUpToDateData::listeners)->getListenerCount() != 2) {
	}
	$nc(go)->countDown();
}

void GetUpToDateData::lambda$main$2() {
	$init(GetUpToDateData);
	try {
		$Thread::sleep(2000);
	} catch ($InterruptedException&) {
		$catch();
	}
	$load($AWTEventListener);
	$nc(GetUpToDateData::listeners)->add($AWTEventListener::class$, GetUpToDateData::o2);
}

void GetUpToDateData::lambda$main$1() {
	$init(GetUpToDateData);
	try {
		$Thread::sleep(2000);
	} catch ($InterruptedException&) {
		$catch();
	}
	$load($EventListener);
	$nc(GetUpToDateData::listeners)->add($EventListener::class$, GetUpToDateData::o1);
}

void GetUpToDateData::lambda$static$0($AWTEvent* event) {
	$init(GetUpToDateData);
}

void clinit$GetUpToDateData($Class* class$) {
	$assignStatic(GetUpToDateData::listeners, $new($EventListenerList));
	$assignStatic(GetUpToDateData::o1, $new($GetUpToDateData$1));
	$assignStatic(GetUpToDateData::o2, static_cast<$AWTEventListener*>($new(GetUpToDateData$$Lambda$lambda$static$0)));
}

GetUpToDateData::GetUpToDateData() {
}

$Class* GetUpToDateData::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GetUpToDateData$$Lambda$lambda$static$0::classInfo$.name)) {
			return GetUpToDateData$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals(GetUpToDateData$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return GetUpToDateData$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(GetUpToDateData$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return GetUpToDateData$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals(GetUpToDateData$$Lambda$lambda$main$3$3::classInfo$.name)) {
			return GetUpToDateData$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals(GetUpToDateData$$Lambda$lambda$main$4$4::classInfo$.name)) {
			return GetUpToDateData$$Lambda$lambda$main$4$4::load$(name, initialize);
		}
		if (name->equals(GetUpToDateData$$Lambda$lambda$main$5$5::classInfo$.name)) {
			return GetUpToDateData$$Lambda$lambda$main$5$5::load$(name, initialize);
		}
	}
	$loadClass(GetUpToDateData, name, initialize, &_GetUpToDateData_ClassInfo_, clinit$GetUpToDateData, allocate$GetUpToDateData);
	return class$;
}

$Class* GetUpToDateData::class$ = nullptr;