#include <javax/swing/SwingWorker$6.h>

#include <java/lang/Runnable.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Executors = ::java::util::concurrent::Executors;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $SwingWorker = ::javax::swing::SwingWorker;

namespace javax {
	namespace swing {

$FieldInfo _SwingWorker$6_FieldInfo_[] = {
	{"defaultFactory", "Ljava/util/concurrent/ThreadFactory;", nullptr, $FINAL, $field(SwingWorker$6, defaultFactory)},
	{}
};

$MethodInfo _SwingWorker$6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SwingWorker$6::*)()>(&SwingWorker$6::init$))},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SwingWorker$6_EnclosingMethodInfo_ = {
	"javax.swing.SwingWorker",
	"getWorkersExecutorService",
	"()Ljava/util/concurrent/ExecutorService;"
};

$InnerClassInfo _SwingWorker$6_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingWorker$6_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingWorker$6",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	_SwingWorker$6_FieldInfo_,
	_SwingWorker$6_MethodInfo_,
	nullptr,
	&_SwingWorker$6_EnclosingMethodInfo_,
	_SwingWorker$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker"
};

$Object* allocate$SwingWorker$6($Class* clazz) {
	return $of($alloc(SwingWorker$6));
}

void SwingWorker$6::init$() {
	$set(this, defaultFactory, $Executors::defaultThreadFactory());
}

$Thread* SwingWorker$6::newThread($Runnable* r) {
	$useLocalCurrentObjectStackCache();
	$var($Thread, thread, $nc(this->defaultFactory)->newThread(r));
	$nc(thread)->setName($$str({"SwingWorker-"_s, $(thread->getName())}));
	thread->setDaemon(true);
	return thread;
}

SwingWorker$6::SwingWorker$6() {
}

$Class* SwingWorker$6::load$($String* name, bool initialize) {
	$loadClass(SwingWorker$6, name, initialize, &_SwingWorker$6_ClassInfo_, allocate$SwingWorker$6);
	return class$;
}

$Class* SwingWorker$6::class$ = nullptr;

	} // swing
} // javax