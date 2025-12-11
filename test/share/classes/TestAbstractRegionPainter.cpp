#include <TestAbstractRegionPainter.h>

#include <TestAbstractRegionPainter$UserAbstractRegionPainter.h>
#include <TestAbstractRegionPainter$UserJComponent.h>
#include <java/awt/Color.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef USER_COLOR

using $TestAbstractRegionPainter$UserAbstractRegionPainter = ::TestAbstractRegionPainter$UserAbstractRegionPainter;
using $TestAbstractRegionPainter$UserJComponent = ::TestAbstractRegionPainter$UserJComponent;
using $Color = ::java::awt::Color;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter : public $Runnable {
	$class(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestAbstractRegionPainter::testAbstractRegionPainter();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter::*)()>(&TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter::load$($String* name, bool initialize) {
	$loadClass(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter::class$ = nullptr;

$MethodInfo _TestAbstractRegionPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestAbstractRegionPainter::*)()>(&TestAbstractRegionPainter::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestAbstractRegionPainter::main)), "java.lang.Exception"},
	{"testAbstractRegionPainter", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestAbstractRegionPainter::testAbstractRegionPainter))},
	{}
};

$InnerClassInfo _TestAbstractRegionPainter_InnerClassesInfo_[] = {
	{"TestAbstractRegionPainter$UserAbstractRegionPainter", "TestAbstractRegionPainter", "UserAbstractRegionPainter", $PUBLIC | $STATIC},
	{"TestAbstractRegionPainter$UserJComponent", "TestAbstractRegionPainter", "UserJComponent", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestAbstractRegionPainter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestAbstractRegionPainter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestAbstractRegionPainter_MethodInfo_,
	nullptr,
	nullptr,
	_TestAbstractRegionPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestAbstractRegionPainter$UserAbstractRegionPainter,TestAbstractRegionPainter$UserJComponent"
};

$Object* allocate$TestAbstractRegionPainter($Class* clazz) {
	return $of($alloc(TestAbstractRegionPainter));
}

void TestAbstractRegionPainter::init$() {
}

void TestAbstractRegionPainter::main($StringArray* args) {
	$load(TestAbstractRegionPainter);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter)));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter)));
}

void TestAbstractRegionPainter::testAbstractRegionPainter() {
	$useLocalCurrentObjectStackCache();
	$var($TestAbstractRegionPainter$UserAbstractRegionPainter, painter, $new($TestAbstractRegionPainter$UserAbstractRegionPainter));
	$var($JComponent, userComponent, $new($TestAbstractRegionPainter$UserJComponent));
	$init($Color);
	$var($Color, color, painter->getUserComponentColor(userComponent, "UserColor"_s, $Color::yellow, (float)0, (float)0, 0));
	$init($TestAbstractRegionPainter$UserJComponent);
	if (!$nc($TestAbstractRegionPainter$UserJComponent::USER_COLOR)->equals(color)) {
		$throwNew($RuntimeException, $$str({"Wrong color: "_s, color}));
	}
}

TestAbstractRegionPainter::TestAbstractRegionPainter() {
}

$Class* TestAbstractRegionPainter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter::classInfo$.name)) {
			return TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter::load$(name, initialize);
		}
	}
	$loadClass(TestAbstractRegionPainter, name, initialize, &_TestAbstractRegionPainter_ClassInfo_, allocate$TestAbstractRegionPainter);
	return class$;
}

$Class* TestAbstractRegionPainter::class$ = nullptr;