#include <bug6493680$Test.h>

#include <bug6493680$Test$1.h>
#include <bug6493680$Test$TestSwingWorker.h>
#include <bug6493680.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Exchanger.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $bug6493680 = ::bug6493680;
using $bug6493680$Test$1 = ::bug6493680$Test$1;
using $bug6493680$Test$TestSwingWorker = ::bug6493680$Test$TestSwingWorker;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Exchanger = ::java::util::concurrent::Exchanger;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $SwingWorker = ::javax::swing::SwingWorker;

$FieldInfo _bug6493680$Test_FieldInfo_[] = {
	{"lastProgressValue", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $FINAL, $field(bug6493680$Test, lastProgressValue)},
	{"exchanger", "Ljava/util/concurrent/Exchanger;", "Ljava/util/concurrent/Exchanger<Ljava/lang/Boolean;>;", $PRIVATE | $FINAL, $field(bug6493680$Test, exchanger)},
	{}
};

$MethodInfo _bug6493680$Test_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6493680$Test::*)()>(&bug6493680$Test::init$))},
	{"test", "()Z", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6493680$Test_InnerClassesInfo_[] = {
	{"bug6493680$Test", "bug6493680", "Test", $PRIVATE | $STATIC},
	{"bug6493680$Test$TestSwingWorker", "bug6493680$Test", "TestSwingWorker", $PRIVATE},
	{"bug6493680$Test$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6493680$Test_ClassInfo_ = {
	$ACC_SUPER,
	"bug6493680$Test",
	"java.lang.Object",
	nullptr,
	_bug6493680$Test_FieldInfo_,
	_bug6493680$Test_MethodInfo_,
	nullptr,
	nullptr,
	_bug6493680$Test_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6493680"
};

$Object* allocate$bug6493680$Test($Class* clazz) {
	return $of($alloc(bug6493680$Test));
}

void bug6493680$Test::init$() {
	$set(this, lastProgressValue, $new($AtomicInteger, -1));
	$set(this, exchanger, $new($Exchanger));
}

bool bug6493680$Test::test() {
	$useLocalCurrentObjectStackCache();
	$var($bug6493680$Test$TestSwingWorker, swingWorker, $new($bug6493680$Test$TestSwingWorker, this));
	swingWorker->addPropertyChangeListener($$new($bug6493680$Test$1, this));
	swingWorker->execute();
	return $nc(($cast($Boolean, $($nc(this->exchanger)->exchange($($Boolean::valueOf(true)))))))->booleanValue();
}

bug6493680$Test::bug6493680$Test() {
}

$Class* bug6493680$Test::load$($String* name, bool initialize) {
	$loadClass(bug6493680$Test, name, initialize, &_bug6493680$Test_ClassInfo_, allocate$bug6493680$Test);
	return class$;
}

$Class* bug6493680$Test::class$ = nullptr;