#include <SpanTest.h>

#include <SpanTest$1.h>
#include <SpanTest$2.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $SpanTest$1 = ::SpanTest$1;
using $SpanTest$2 = ::SpanTest$2;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _SpanTest_FieldInfo_[] = {
	{"f", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(SpanTest, f)},
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $STATIC, $staticField(SpanTest, dialog)},
	{"testResult", "Z", nullptr, $PUBLIC, $field(SpanTest, testResult)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(SpanTest, latch)},
	{}
};

$MethodInfo _SpanTest_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(SpanTest::*)($CountDownLatch*)>(&SpanTest::init$)), "java.lang.Exception"},
	{"createUI", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(SpanTest::*)()>(&SpanTest::createUI)), "java.lang.Exception"},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"spanTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SpanTest::spanTest)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SpanTest_InnerClassesInfo_[] = {
	{"SpanTest$2", nullptr, nullptr, 0},
	{"SpanTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SpanTest_ClassInfo_ = {
	$ACC_SUPER,
	"SpanTest",
	"java.lang.Object",
	"java.lang.Runnable",
	_SpanTest_FieldInfo_,
	_SpanTest_MethodInfo_,
	nullptr,
	nullptr,
	_SpanTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SpanTest$2,SpanTest$1"
};

$Object* allocate$SpanTest($Class* clazz) {
	return $of($alloc(SpanTest));
}

$JFrame* SpanTest::f = nullptr;
$JDialog* SpanTest::dialog = nullptr;

void SpanTest::init$($CountDownLatch* latch) {
	this->testResult = false;
	$set(this, latch, latch);
}

void SpanTest::run() {
	$useLocalCurrentObjectStackCache();
	try {
		createUI();
		spanTest();
	} catch ($Exception& ex) {
		dispose();
		$nc(this->latch)->countDown();
		$throwNew($RuntimeException, $$str({"createUI Failed: "_s, $(ex->getMessage())}));
	}
}

void SpanTest::dispose() {
	if (SpanTest::dialog != nullptr) {
		$nc(SpanTest::dialog)->dispose();
	}
	if (SpanTest::f != nullptr) {
		$nc(SpanTest::f)->dispose();
	}
}

void SpanTest::spanTest() {
	$init(SpanTest);
	$SwingUtilities::invokeAndWait($$new($SpanTest$1));
}

void SpanTest::createUI() {
	$SwingUtilities::invokeAndWait($$new($SpanTest$2, this));
}

SpanTest::SpanTest() {
}

$Class* SpanTest::load$($String* name, bool initialize) {
	$loadClass(SpanTest, name, initialize, &_SpanTest_ClassInfo_, allocate$SpanTest);
	return class$;
}

$Class* SpanTest::class$ = nullptr;