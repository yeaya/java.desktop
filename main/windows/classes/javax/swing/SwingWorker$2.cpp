#include <javax/swing/SwingWorker$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/FutureTask.h>
#include <javax/swing/SwingWorker$StateValue.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

#undef DONE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $SwingWorker = ::javax::swing::SwingWorker;
using $SwingWorker$StateValue = ::javax::swing::SwingWorker$StateValue;

namespace javax {
	namespace swing {

$FieldInfo _SwingWorker$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/SwingWorker;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$2, this$0)},
	{}
};

$MethodInfo _SwingWorker$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/SwingWorker;Ljava/util/concurrent/Callable;)V", nullptr, 0, $method(static_cast<void(SwingWorker$2::*)($SwingWorker*,$Callable*)>(&SwingWorker$2::init$))},
	{"done", "()V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _SwingWorker$2_EnclosingMethodInfo_ = {
	"javax.swing.SwingWorker",
	"<init>",
	"()V"
};

$InnerClassInfo _SwingWorker$2_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingWorker$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingWorker$2",
	"java.util.concurrent.FutureTask",
	nullptr,
	_SwingWorker$2_FieldInfo_,
	_SwingWorker$2_MethodInfo_,
	"Ljava/util/concurrent/FutureTask<TT;>;",
	&_SwingWorker$2_EnclosingMethodInfo_,
	_SwingWorker$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker"
};

$Object* allocate$SwingWorker$2($Class* clazz) {
	return $of($alloc(SwingWorker$2));
}

void SwingWorker$2::init$($SwingWorker* this$0, $Callable* arg0) {
	$set(this, this$0, this$0);
	$FutureTask::init$(arg0);
}

void SwingWorker$2::done() {
	this->this$0->doneEDT();
	$init($SwingWorker$StateValue);
	this->this$0->setState($SwingWorker$StateValue::DONE);
}

SwingWorker$2::SwingWorker$2() {
}

$Class* SwingWorker$2::load$($String* name, bool initialize) {
	$loadClass(SwingWorker$2, name, initialize, &_SwingWorker$2_ClassInfo_, allocate$SwingWorker$2);
	return class$;
}

$Class* SwingWorker$2::class$ = nullptr;

	} // swing
} // javax