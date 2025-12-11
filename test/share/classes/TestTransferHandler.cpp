#include <TestTransferHandler.h>

#include <TestTransferHandler$1.h>
#include <TestTransferHandler$UserJComponent.h>
#include <java/awt/Color.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
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
#include <javax/swing/TransferHandler.h>
#include <jcpp.h>

#undef TEST_COLOR

using $TestTransferHandler$1 = ::TestTransferHandler$1;
using $TestTransferHandler$UserJComponent = ::TestTransferHandler$UserJComponent;
using $Color = ::java::awt::Color;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;

class TestTransferHandler$$Lambda$testTransferHandler : public $Runnable {
	$class(TestTransferHandler$$Lambda$testTransferHandler, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestTransferHandler::testTransferHandler();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestTransferHandler$$Lambda$testTransferHandler>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestTransferHandler$$Lambda$testTransferHandler::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestTransferHandler$$Lambda$testTransferHandler::*)()>(&TestTransferHandler$$Lambda$testTransferHandler::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestTransferHandler$$Lambda$testTransferHandler::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestTransferHandler$$Lambda$testTransferHandler",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestTransferHandler$$Lambda$testTransferHandler::load$($String* name, bool initialize) {
	$loadClass(TestTransferHandler$$Lambda$testTransferHandler, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestTransferHandler$$Lambda$testTransferHandler::class$ = nullptr;

$MethodInfo _TestTransferHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestTransferHandler::*)()>(&TestTransferHandler::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestTransferHandler::main)), "java.lang.Exception"},
	{"testTransferHandler", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestTransferHandler::testTransferHandler))},
	{}
};

$InnerClassInfo _TestTransferHandler_InnerClassesInfo_[] = {
	{"TestTransferHandler$UserJComponent", "TestTransferHandler", "UserJComponent", $PUBLIC | $STATIC},
	{"TestTransferHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestTransferHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestTransferHandler",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestTransferHandler_MethodInfo_,
	nullptr,
	nullptr,
	_TestTransferHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestTransferHandler$UserJComponent,TestTransferHandler$1"
};

$Object* allocate$TestTransferHandler($Class* clazz) {
	return $of($alloc(TestTransferHandler));
}

void TestTransferHandler::init$() {
}

void TestTransferHandler::main($StringArray* args) {
	$load(TestTransferHandler);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestTransferHandler$$Lambda$testTransferHandler)));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestTransferHandler$$Lambda$testTransferHandler)));
}

void TestTransferHandler::testTransferHandler() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($TransferHandler, transferHandler, $new($TransferHandler, "userColor"_s));
		$var($TestTransferHandler$UserJComponent, comp, $new($TestTransferHandler$UserJComponent));
		$init($DataFlavor);
		$var($String, colorType, $str({$DataFlavor::javaJVMLocalObjectMimeType, ";class=java.awt.Color"_s}));
		$var($DataFlavor, colorFlavor, $new($DataFlavor, colorType));
		$var($Transferable, transferable, $new($TestTransferHandler$1, colorFlavor));
		transferHandler->importData(comp, transferable);
		$init($TestTransferHandler$UserJComponent);
		if (!$nc($TestTransferHandler$UserJComponent::TEST_COLOR)->equals(comp->color)) {
			$throwNew($RuntimeException, "Wrong color!"_s);
		}
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

TestTransferHandler::TestTransferHandler() {
}

$Class* TestTransferHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestTransferHandler$$Lambda$testTransferHandler::classInfo$.name)) {
			return TestTransferHandler$$Lambda$testTransferHandler::load$(name, initialize);
		}
	}
	$loadClass(TestTransferHandler, name, initialize, &_TestTransferHandler_ClassInfo_, allocate$TestTransferHandler);
	return class$;
}

$Class* TestTransferHandler::class$ = nullptr;