#include <javax/swing/SwingWorker$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingWorker$StateValue.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

#undef STARTED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $SwingWorker = ::javax::swing::SwingWorker;
using $SwingWorker$StateValue = ::javax::swing::SwingWorker$StateValue;

namespace javax {
	namespace swing {

$FieldInfo _SwingWorker$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/SwingWorker;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$1, this$0)},
	{}
};

$MethodInfo _SwingWorker$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/SwingWorker;)V", nullptr, 0, $method(static_cast<void(SwingWorker$1::*)($SwingWorker*)>(&SwingWorker$1::init$))},
	{"call", "()Ljava/lang/Object;", "()TT;", $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _SwingWorker$1_EnclosingMethodInfo_ = {
	"javax.swing.SwingWorker",
	"<init>",
	"()V"
};

$InnerClassInfo _SwingWorker$1_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingWorker$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingWorker$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_SwingWorker$1_FieldInfo_,
	_SwingWorker$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<TT;>;",
	&_SwingWorker$1_EnclosingMethodInfo_,
	_SwingWorker$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker"
};

$Object* allocate$SwingWorker$1($Class* clazz) {
	return $of($alloc(SwingWorker$1));
}

void SwingWorker$1::init$($SwingWorker* this$0) {
	$set(this, this$0, this$0);
}

$Object* SwingWorker$1::call() {
	$init($SwingWorker$StateValue);
	this->this$0->setState($SwingWorker$StateValue::STARTED);
	return $of(this->this$0->doInBackground());
}

SwingWorker$1::SwingWorker$1() {
}

$Class* SwingWorker$1::load$($String* name, bool initialize) {
	$loadClass(SwingWorker$1, name, initialize, &_SwingWorker$1_ClassInfo_, allocate$SwingWorker$1);
	return class$;
}

$Class* SwingWorker$1::class$ = nullptr;

	} // swing
} // javax