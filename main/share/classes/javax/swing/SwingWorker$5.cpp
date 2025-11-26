#include <javax/swing/SwingWorker$5.h>

#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingWorker = ::javax::swing::SwingWorker;

namespace javax {
	namespace swing {

$FieldInfo _SwingWorker$5_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/SwingWorker;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$5, this$0)},
	{}
};

$MethodInfo _SwingWorker$5_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/SwingWorker;)V", nullptr, 0, $method(static_cast<void(SwingWorker$5::*)($SwingWorker*)>(&SwingWorker$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SwingWorker$5_EnclosingMethodInfo_ = {
	"javax.swing.SwingWorker",
	"doneEDT",
	"()V"
};

$InnerClassInfo _SwingWorker$5_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingWorker$5_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingWorker$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_SwingWorker$5_FieldInfo_,
	_SwingWorker$5_MethodInfo_,
	nullptr,
	&_SwingWorker$5_EnclosingMethodInfo_,
	_SwingWorker$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker"
};

$Object* allocate$SwingWorker$5($Class* clazz) {
	return $of($alloc(SwingWorker$5));
}

void SwingWorker$5::init$($SwingWorker* this$0) {
	$set(this, this$0, this$0);
}

void SwingWorker$5::run() {
	this->this$0->done();
}

SwingWorker$5::SwingWorker$5() {
}

$Class* SwingWorker$5::load$($String* name, bool initialize) {
	$loadClass(SwingWorker$5, name, initialize, &_SwingWorker$5_ClassInfo_, allocate$SwingWorker$5);
	return class$;
}

$Class* SwingWorker$5::class$ = nullptr;

	} // swing
} // javax