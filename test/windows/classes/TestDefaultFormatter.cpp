#include <TestDefaultFormatter.h>

#include <TestDefaultFormatter$1.h>
#include <TestDefaultFormatter$UserValueClass.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParseException.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <jcpp.h>

using $TestDefaultFormatter$1 = ::TestDefaultFormatter$1;
using $TestDefaultFormatter$UserValueClass = ::TestDefaultFormatter$UserValueClass;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ParseException = ::java::text::ParseException;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;

class TestDefaultFormatter$$Lambda$testDefaultFormatter : public $Runnable {
	$class(TestDefaultFormatter$$Lambda$testDefaultFormatter, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestDefaultFormatter::testDefaultFormatter();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestDefaultFormatter$$Lambda$testDefaultFormatter>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestDefaultFormatter$$Lambda$testDefaultFormatter::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestDefaultFormatter$$Lambda$testDefaultFormatter::*)()>(&TestDefaultFormatter$$Lambda$testDefaultFormatter::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestDefaultFormatter$$Lambda$testDefaultFormatter::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestDefaultFormatter$$Lambda$testDefaultFormatter",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestDefaultFormatter$$Lambda$testDefaultFormatter::load$($String* name, bool initialize) {
	$loadClass(TestDefaultFormatter$$Lambda$testDefaultFormatter, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestDefaultFormatter$$Lambda$testDefaultFormatter::class$ = nullptr;

$MethodInfo _TestDefaultFormatter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestDefaultFormatter::*)()>(&TestDefaultFormatter::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestDefaultFormatter::main)), "java.lang.Exception"},
	{"testDefaultFormatter", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestDefaultFormatter::testDefaultFormatter))},
	{"testDefaultFormatter", "(Ljavax/swing/text/DefaultFormatter;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DefaultFormatter*)>(&TestDefaultFormatter::testDefaultFormatter))},
	{}
};

$InnerClassInfo _TestDefaultFormatter_InnerClassesInfo_[] = {
	{"TestDefaultFormatter$UserValueClass", "TestDefaultFormatter", "UserValueClass", $PUBLIC | $STATIC},
	{"TestDefaultFormatter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestDefaultFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestDefaultFormatter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestDefaultFormatter_MethodInfo_,
	nullptr,
	nullptr,
	_TestDefaultFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestDefaultFormatter$UserValueClass,TestDefaultFormatter$1"
};

$Object* allocate$TestDefaultFormatter($Class* clazz) {
	return $of($alloc(TestDefaultFormatter));
}

void TestDefaultFormatter::init$() {
}

void TestDefaultFormatter::main($StringArray* args) {
	$load(TestDefaultFormatter);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestDefaultFormatter$$Lambda$testDefaultFormatter)));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestDefaultFormatter$$Lambda$testDefaultFormatter)));
}

void TestDefaultFormatter::testDefaultFormatter() {
	$useLocalCurrentObjectStackCache();
	testDefaultFormatter($$new($TestDefaultFormatter$1));
	testDefaultFormatter($$new($DefaultFormatter));
}

void TestDefaultFormatter::testDefaultFormatter($DefaultFormatter* formatter) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($System);
		$nc($System::out)->println($$str({"formatter: "_s, $nc($of(formatter))->getClass()}));
		$load($TestDefaultFormatter$UserValueClass);
		$nc(formatter)->setValueClass($TestDefaultFormatter$UserValueClass::class$);
		$var($TestDefaultFormatter$UserValueClass, userValue, $cast($TestDefaultFormatter$UserValueClass, formatter->stringToValue("test"_s)));
		if (!$nc($nc(userValue)->str)->equals("test"_s)) {
			$throwNew($RuntimeException, "String value is wrong!"_s);
		}
	} catch ($ParseException&) {
		$var($ParseException, ex, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
}

TestDefaultFormatter::TestDefaultFormatter() {
}

$Class* TestDefaultFormatter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestDefaultFormatter$$Lambda$testDefaultFormatter::classInfo$.name)) {
			return TestDefaultFormatter$$Lambda$testDefaultFormatter::load$(name, initialize);
		}
	}
	$loadClass(TestDefaultFormatter, name, initialize, &_TestDefaultFormatter_ClassInfo_, allocate$TestDefaultFormatter);
	return class$;
}

$Class* TestDefaultFormatter::class$ = nullptr;