#include <javax/swing/SwingWorker$4.h>

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

$FieldInfo _SwingWorker$4_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/SwingWorker;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$4, this$0)},
	{}
};

$MethodInfo _SwingWorker$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/SwingWorker;)V", nullptr, 0, $method(static_cast<void(SwingWorker$4::*)($SwingWorker*)>(&SwingWorker$4::init$))},
	{"run", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/Integer;>;)V", $PUBLIC},
	{"submit", "()V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _SwingWorker$4_EnclosingMethodInfo_ = {
	"javax.swing.SwingWorker",
	"setProgress",
	"(I)V"
};

$InnerClassInfo _SwingWorker$4_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingWorker$4_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingWorker$4",
	"sun.swing.AccumulativeRunnable",
	nullptr,
	_SwingWorker$4_FieldInfo_,
	_SwingWorker$4_MethodInfo_,
	"Lsun/swing/AccumulativeRunnable<Ljava/lang/Integer;>;",
	&_SwingWorker$4_EnclosingMethodInfo_,
	_SwingWorker$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker"
};

$Object* allocate$SwingWorker$4($Class* clazz) {
	return $of($alloc(SwingWorker$4));
}

void SwingWorker$4::init$($SwingWorker* this$0) {
	$set(this, this$0, this$0);
	$AccumulativeRunnable::init$();
}

void SwingWorker$4::run($List* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, "progress"_s);
	$var($Object, var$1, $nc(args)->get(0));
	this->this$0->firePropertyChange(var$0, var$1, $(args->get(args->size() - 1)));
}

void SwingWorker$4::submit() {
	$nc(this->this$0->doSubmit)->add($$new($RunnableArray, {static_cast<$Runnable*>(this)}));
}

SwingWorker$4::SwingWorker$4() {
}

$Class* SwingWorker$4::load$($String* name, bool initialize) {
	$loadClass(SwingWorker$4, name, initialize, &_SwingWorker$4_ClassInfo_, allocate$SwingWorker$4);
	return class$;
}

$Class* SwingWorker$4::class$ = nullptr;

	} // swing
} // javax