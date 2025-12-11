#include <ProgressMonitorEscapeKeyPress.h>

#include <ProgressMonitorEscapeKeyPress$1.h>
#include <ProgressMonitorEscapeKeyPress$2.h>
#include <TestThread.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/ProgressMonitor.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $ProgressMonitorEscapeKeyPress$1 = ::ProgressMonitorEscapeKeyPress$1;
using $ProgressMonitorEscapeKeyPress$2 = ::ProgressMonitorEscapeKeyPress$2;
using $TestThread = ::TestThread;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $ProgressMonitor = ::javax::swing::ProgressMonitor;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0 : public $Runnable {
	$class(ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ProgressMonitorEscapeKeyPress::lambda$disposeTestUI$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0::*)()>(&ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0::load$($String* name, bool initialize) {
	$loadClass(ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0::class$ = nullptr;

$FieldInfo _ProgressMonitorEscapeKeyPress_FieldInfo_[] = {
	{"monitor", "Ljavax/swing/ProgressMonitor;", nullptr, $STATIC, $staticField(ProgressMonitorEscapeKeyPress, monitor)},
	{"counter", "I", nullptr, $STATIC, $staticField(ProgressMonitorEscapeKeyPress, counter)},
	{"robotThread", "LTestThread;", nullptr, $STATIC, $staticField(ProgressMonitorEscapeKeyPress, robotThread)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(ProgressMonitorEscapeKeyPress, frame)},
	{}
};

$MethodInfo _ProgressMonitorEscapeKeyPress_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProgressMonitorEscapeKeyPress::*)()>(&ProgressMonitorEscapeKeyPress::init$))},
	{"createTestUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ProgressMonitorEscapeKeyPress::createTestUI)), "java.lang.Exception"},
	{"disposeTestUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ProgressMonitorEscapeKeyPress::disposeTestUI)), "java.lang.Exception"},
	{"lambda$disposeTestUI$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ProgressMonitorEscapeKeyPress::lambda$disposeTestUI$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ProgressMonitorEscapeKeyPress::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ProgressMonitorEscapeKeyPress_InnerClassesInfo_[] = {
	{"ProgressMonitorEscapeKeyPress$2", nullptr, nullptr, 0},
	{"ProgressMonitorEscapeKeyPress$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProgressMonitorEscapeKeyPress_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ProgressMonitorEscapeKeyPress",
	"java.lang.Object",
	nullptr,
	_ProgressMonitorEscapeKeyPress_FieldInfo_,
	_ProgressMonitorEscapeKeyPress_MethodInfo_,
	nullptr,
	nullptr,
	_ProgressMonitorEscapeKeyPress_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ProgressMonitorEscapeKeyPress$2,ProgressMonitorEscapeKeyPress$1"
};

$Object* allocate$ProgressMonitorEscapeKeyPress($Class* clazz) {
	return $of($alloc(ProgressMonitorEscapeKeyPress));
}

$ProgressMonitor* ProgressMonitorEscapeKeyPress::monitor = nullptr;
int32_t ProgressMonitorEscapeKeyPress::counter = 0;
$TestThread* ProgressMonitorEscapeKeyPress::robotThread = nullptr;
$JFrame* ProgressMonitorEscapeKeyPress::frame = nullptr;

void ProgressMonitorEscapeKeyPress::init$() {
}

void ProgressMonitorEscapeKeyPress::main($StringArray* args) {
	$init(ProgressMonitorEscapeKeyPress);
	$useLocalCurrentObjectStackCache();
	createTestUI();
	$assignStatic(ProgressMonitorEscapeKeyPress::monitor, $new($ProgressMonitor, ProgressMonitorEscapeKeyPress::frame, "Progress"_s, nullptr, 0, 100));
	$assignStatic(ProgressMonitorEscapeKeyPress::robotThread, $new($TestThread));
	$nc(ProgressMonitorEscapeKeyPress::robotThread)->start();
	for (ProgressMonitorEscapeKeyPress::counter = 0; ProgressMonitorEscapeKeyPress::counter <= 100; ProgressMonitorEscapeKeyPress::counter += 10) {
		$Thread::sleep(1000);
		$EventQueue::invokeAndWait($$new($ProgressMonitorEscapeKeyPress$1));
		if ($nc(ProgressMonitorEscapeKeyPress::monitor)->isCanceled()) {
			break;
		}
	}
	disposeTestUI();
	if (ProgressMonitorEscapeKeyPress::counter >= $nc(ProgressMonitorEscapeKeyPress::monitor)->getMaximum()) {
		$throwNew($RuntimeException, "Escape key did not cancel the ProgressMonitor"_s);
	}
}

void ProgressMonitorEscapeKeyPress::createTestUI() {
	$init(ProgressMonitorEscapeKeyPress);
	$SwingUtilities::invokeAndWait($$new($ProgressMonitorEscapeKeyPress$2));
}

void ProgressMonitorEscapeKeyPress::disposeTestUI() {
	$init(ProgressMonitorEscapeKeyPress);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0)));
}

void ProgressMonitorEscapeKeyPress::lambda$disposeTestUI$0() {
	$init(ProgressMonitorEscapeKeyPress);
	$nc(ProgressMonitorEscapeKeyPress::frame)->dispose();
}

void clinit$ProgressMonitorEscapeKeyPress($Class* class$) {
	ProgressMonitorEscapeKeyPress::counter = 0;
}

ProgressMonitorEscapeKeyPress::ProgressMonitorEscapeKeyPress() {
}

$Class* ProgressMonitorEscapeKeyPress::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0::classInfo$.name)) {
			return ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0::load$(name, initialize);
		}
	}
	$loadClass(ProgressMonitorEscapeKeyPress, name, initialize, &_ProgressMonitorEscapeKeyPress_ClassInfo_, clinit$ProgressMonitorEscapeKeyPress, allocate$ProgressMonitorEscapeKeyPress);
	return class$;
}

$Class* ProgressMonitorEscapeKeyPress::class$ = nullptr;