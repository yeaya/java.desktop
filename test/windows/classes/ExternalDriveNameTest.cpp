#include <ExternalDriveNameTest.h>

#include <TestUI.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef MINUTES

using $TestUI = ::TestUI;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
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
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class ExternalDriveNameTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(ExternalDriveNameTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($TestUI* test) {
		$set(this, test, test);
	}
	virtual void run() override {
		ExternalDriveNameTest::lambda$main$0(test);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ExternalDriveNameTest$$Lambda$lambda$main$0>());
	}
	$TestUI* test = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ExternalDriveNameTest$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"test", "LTestUI;", nullptr, $PUBLIC, $field(ExternalDriveNameTest$$Lambda$lambda$main$0, test)},
	{}
};
$MethodInfo ExternalDriveNameTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(LTestUI;)V", nullptr, $PUBLIC, $method(static_cast<void(ExternalDriveNameTest$$Lambda$lambda$main$0::*)($TestUI*)>(&ExternalDriveNameTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ExternalDriveNameTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ExternalDriveNameTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* ExternalDriveNameTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(ExternalDriveNameTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ExternalDriveNameTest$$Lambda$lambda$main$0::class$ = nullptr;

class ExternalDriveNameTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(ExternalDriveNameTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($TestUI* test) {
		$set(this, test, test);
	}
	virtual void run() override {
		ExternalDriveNameTest::lambda$main$1(test);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ExternalDriveNameTest$$Lambda$lambda$main$1$1>());
	}
	$TestUI* test = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ExternalDriveNameTest$$Lambda$lambda$main$1$1::fieldInfos[2] = {
	{"test", "LTestUI;", nullptr, $PUBLIC, $field(ExternalDriveNameTest$$Lambda$lambda$main$1$1, test)},
	{}
};
$MethodInfo ExternalDriveNameTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "(LTestUI;)V", nullptr, $PUBLIC, $method(static_cast<void(ExternalDriveNameTest$$Lambda$lambda$main$1$1::*)($TestUI*)>(&ExternalDriveNameTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ExternalDriveNameTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"ExternalDriveNameTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* ExternalDriveNameTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(ExternalDriveNameTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ExternalDriveNameTest$$Lambda$lambda$main$1$1::class$ = nullptr;

$MethodInfo _ExternalDriveNameTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExternalDriveNameTest::*)()>(&ExternalDriveNameTest::init$))},
	{"lambda$main$0", "(LTestUI;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($TestUI*)>(&ExternalDriveNameTest::lambda$main$0))},
	{"lambda$main$1", "(LTestUI;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($TestUI*)>(&ExternalDriveNameTest::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ExternalDriveNameTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ExternalDriveNameTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ExternalDriveNameTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExternalDriveNameTest_MethodInfo_
};

$Object* allocate$ExternalDriveNameTest($Class* clazz) {
	return $of($alloc(ExternalDriveNameTest));
}

void ExternalDriveNameTest::init$() {
}

void ExternalDriveNameTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($CountDownLatch, latch, $new($CountDownLatch, 1));
	$var($TestUI, test, $new($TestUI, latch));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ExternalDriveNameTest$$Lambda$lambda$main$0, test)));
	$init($TimeUnit);
	bool status = latch->await(5, $TimeUnit::MINUTES);
	if (!status) {
		$init($System);
		$nc($System::out)->println("Test timed out."_s);
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ExternalDriveNameTest$$Lambda$lambda$main$1$1, test)));
	if (test->testResult == false) {
		$throwNew($RuntimeException, "Test Failed."_s);
	}
}

void ExternalDriveNameTest::lambda$main$1($TestUI* test) {
	try {
		$nc(test)->disposeUI();
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($RuntimeException, "Exception while disposing UI"_s);
	}
}

void ExternalDriveNameTest::lambda$main$0($TestUI* test) {
	try {
		$nc(test)->createUI();
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($RuntimeException, "Exception while creating UI"_s);
	}
}

ExternalDriveNameTest::ExternalDriveNameTest() {
}

$Class* ExternalDriveNameTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ExternalDriveNameTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return ExternalDriveNameTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(ExternalDriveNameTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return ExternalDriveNameTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(ExternalDriveNameTest, name, initialize, &_ExternalDriveNameTest_ClassInfo_, allocate$ExternalDriveNameTest);
	return class$;
}

$Class* ExternalDriveNameTest::class$ = nullptr;