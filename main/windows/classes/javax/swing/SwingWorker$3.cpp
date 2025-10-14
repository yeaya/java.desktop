#include <javax/swing/SwingWorker$3.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/swing/SwingWorker.h>
#include <sun/swing/AccumulativeRunnable.h>
#include <jcpp.h>

using $RunnableArray = $Array<::java::lang::Runnable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $List = ::java::util::List;
using $SwingWorker = ::javax::swing::SwingWorker;
using $AccumulativeRunnable = ::sun::swing::AccumulativeRunnable;

namespace javax {
	namespace swing {

$FieldInfo _SwingWorker$3_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/SwingWorker;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$3, this$0)},
	{}
};

$MethodInfo _SwingWorker$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/SwingWorker;)V", nullptr, 0, $method(static_cast<void(SwingWorker$3::*)($SwingWorker*)>(&SwingWorker$3::init$))},
	{"run", "(Ljava/util/List;)V", "(Ljava/util/List<TV;>;)V", $PUBLIC},
	{"submit", "()V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _SwingWorker$3_EnclosingMethodInfo_ = {
	"javax.swing.SwingWorker",
	"publish",
	"([Ljava/lang/Object;)V"
};

$InnerClassInfo _SwingWorker$3_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingWorker$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingWorker$3",
	"sun.swing.AccumulativeRunnable",
	nullptr,
	_SwingWorker$3_FieldInfo_,
	_SwingWorker$3_MethodInfo_,
	"Lsun/swing/AccumulativeRunnable<TV;>;",
	&_SwingWorker$3_EnclosingMethodInfo_,
	_SwingWorker$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker"
};

$Object* allocate$SwingWorker$3($Class* clazz) {
	return $of($alloc(SwingWorker$3));
}

void SwingWorker$3::init$($SwingWorker* this$0) {
	$set(this, this$0, this$0);
	$AccumulativeRunnable::init$();
}

void SwingWorker$3::run($List* args) {
	this->this$0->process(args);
}

void SwingWorker$3::submit() {
	$nc(this->this$0->doSubmit)->add($$new($RunnableArray, {static_cast<$Runnable*>(this)}));
}

SwingWorker$3::SwingWorker$3() {
}

$Class* SwingWorker$3::load$($String* name, bool initialize) {
	$loadClass(SwingWorker$3, name, initialize, &_SwingWorker$3_ClassInfo_, allocate$SwingWorker$3);
	return class$;
}

$Class* SwingWorker$3::class$ = nullptr;

	} // swing
} // javax