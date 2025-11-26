#include <bug6493680$Test$TestSwingWorker.h>

#include <bug6493680$Test.h>
#include <java/util/concurrent/Exchanger.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $bug6493680$Test = ::bug6493680$Test;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Exchanger = ::java::util::concurrent::Exchanger;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $SwingWorker = ::javax::swing::SwingWorker;

$FieldInfo _bug6493680$Test$TestSwingWorker_FieldInfo_[] = {
	{"this$0", "Lbug6493680$Test;", nullptr, $FINAL | $SYNTHETIC, $field(bug6493680$Test$TestSwingWorker, this$0)},
	{}
};

$MethodInfo _bug6493680$Test$TestSwingWorker_MethodInfo_[] = {
	{"<init>", "(Lbug6493680$Test;)V", nullptr, $PRIVATE, $method(static_cast<void(bug6493680$Test$TestSwingWorker::*)($bug6493680$Test*)>(&bug6493680$Test$TestSwingWorker::init$))},
	{"doInBackground", "()Ljava/lang/Void;", nullptr, $PROTECTED, nullptr, "java.lang.Exception"},
	{"done", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _bug6493680$Test$TestSwingWorker_InnerClassesInfo_[] = {
	{"bug6493680$Test", "bug6493680", "Test", $PRIVATE | $STATIC},
	{"bug6493680$Test$TestSwingWorker", "bug6493680$Test", "TestSwingWorker", $PRIVATE},
	{}
};

$ClassInfo _bug6493680$Test$TestSwingWorker_ClassInfo_ = {
	$ACC_SUPER,
	"bug6493680$Test$TestSwingWorker",
	"javax.swing.SwingWorker",
	nullptr,
	_bug6493680$Test$TestSwingWorker_FieldInfo_,
	_bug6493680$Test$TestSwingWorker_MethodInfo_,
	"Ljavax/swing/SwingWorker<Ljava/lang/Void;Ljava/lang/Void;>;",
	nullptr,
	_bug6493680$Test$TestSwingWorker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6493680"
};

$Object* allocate$bug6493680$Test$TestSwingWorker($Class* clazz) {
	return $of($alloc(bug6493680$Test$TestSwingWorker));
}

void bug6493680$Test$TestSwingWorker::init$($bug6493680$Test* this$0) {
	$set(this, this$0, this$0);
	$SwingWorker::init$();
}

$Object* bug6493680$Test$TestSwingWorker::doInBackground() {
	for (int32_t i = 0; i <= 100; ++i) {
		$Thread::sleep(1);
		setProgress(i);
	}
	return $of(nullptr);
}

void bug6493680$Test$TestSwingWorker::done() {
	bool isPassed = ($nc(this->this$0->lastProgressValue)->get() == 100);
	try {
		$nc(this->this$0->exchanger)->exchange($($Boolean::valueOf(isPassed)));
	} catch ($Exception& ingore) {
	}
}

bug6493680$Test$TestSwingWorker::bug6493680$Test$TestSwingWorker() {
}

$Class* bug6493680$Test$TestSwingWorker::load$($String* name, bool initialize) {
	$loadClass(bug6493680$Test$TestSwingWorker, name, initialize, &_bug6493680$Test$TestSwingWorker_ClassInfo_, allocate$bug6493680$Test$TestSwingWorker);
	return class$;
}

$Class* bug6493680$Test$TestSwingWorker::class$ = nullptr;