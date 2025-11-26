#include <javax/swing/text/AsyncBoxView$FlushTask.h>

#include <javax/swing/text/AsyncBoxView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AsyncBoxView = ::javax::swing::text::AsyncBoxView;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AsyncBoxView$FlushTask_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AsyncBoxView;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncBoxView$FlushTask, this$0)},
	{}
};

$MethodInfo _AsyncBoxView$FlushTask_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AsyncBoxView;)V", nullptr, 0, $method(static_cast<void(AsyncBoxView$FlushTask::*)($AsyncBoxView*)>(&AsyncBoxView$FlushTask::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AsyncBoxView$FlushTask_InnerClassesInfo_[] = {
	{"javax.swing.text.AsyncBoxView$FlushTask", "javax.swing.text.AsyncBoxView", "FlushTask", 0},
	{}
};

$ClassInfo _AsyncBoxView$FlushTask_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.AsyncBoxView$FlushTask",
	"java.lang.Object",
	"java.lang.Runnable",
	_AsyncBoxView$FlushTask_FieldInfo_,
	_AsyncBoxView$FlushTask_MethodInfo_,
	nullptr,
	nullptr,
	_AsyncBoxView$FlushTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AsyncBoxView"
};

$Object* allocate$AsyncBoxView$FlushTask($Class* clazz) {
	return $of($alloc(AsyncBoxView$FlushTask));
}

void AsyncBoxView$FlushTask::init$($AsyncBoxView* this$0) {
	$set(this, this$0, this$0);
}

void AsyncBoxView$FlushTask::run() {
	this->this$0->flushRequirementChanges();
}

AsyncBoxView$FlushTask::AsyncBoxView$FlushTask() {
}

$Class* AsyncBoxView$FlushTask::load$($String* name, bool initialize) {
	$loadClass(AsyncBoxView$FlushTask, name, initialize, &_AsyncBoxView$FlushTask_ClassInfo_, allocate$AsyncBoxView$FlushTask);
	return class$;
}

$Class* AsyncBoxView$FlushTask::class$ = nullptr;

		} // text
	} // swing
} // javax