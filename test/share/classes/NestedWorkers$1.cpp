#include <NestedWorkers$1.h>

#include <NestedWorkers.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $NestedWorkers = ::NestedWorkers;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingWorker = ::javax::swing::SwingWorker;

$MethodInfo _NestedWorkers$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NestedWorkers$1::*)()>(&NestedWorkers$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NestedWorkers$1_EnclosingMethodInfo_ = {
	"NestedWorkers",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _NestedWorkers$1_InnerClassesInfo_[] = {
	{"NestedWorkers$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NestedWorkers$1_ClassInfo_ = {
	$ACC_SUPER,
	"NestedWorkers$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NestedWorkers$1_MethodInfo_,
	nullptr,
	&_NestedWorkers$1_EnclosingMethodInfo_,
	_NestedWorkers$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NestedWorkers"
};

$Object* allocate$NestedWorkers$1($Class* clazz) {
	return $of($alloc(NestedWorkers$1));
}

void NestedWorkers$1::init$() {
}

void NestedWorkers$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($SwingWorker, sw, $new($NestedWorkers, 0));
	sw->execute();
	try {
		$nc($System::err)->println($cast($String, $(sw->get())));
	} catch ($Exception& z) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(z));
	}
}

NestedWorkers$1::NestedWorkers$1() {
}

$Class* NestedWorkers$1::load$($String* name, bool initialize) {
	$loadClass(NestedWorkers$1, name, initialize, &_NestedWorkers$1_ClassInfo_, allocate$NestedWorkers$1);
	return class$;
}

$Class* NestedWorkers$1::class$ = nullptr;