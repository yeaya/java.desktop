#include <javax/swing/SwingWorker$7$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ExecutorService.h>
#include <javax/swing/SwingWorker$7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $SwingWorker$7 = ::javax::swing::SwingWorker$7;

namespace javax {
	namespace swing {

$FieldInfo _SwingWorker$7$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/SwingWorker$7;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$7$1, this$0)},
	{"val$executorService", "Ljava/util/concurrent/ExecutorService;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$7$1, val$executorService)},
	{}
};

$MethodInfo _SwingWorker$7$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/SwingWorker$7;Ljava/util/concurrent/ExecutorService;)V", "()V", 0, $method(static_cast<void(SwingWorker$7$1::*)($SwingWorker$7*,$ExecutorService*)>(&SwingWorker$7$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SwingWorker$7$1_EnclosingMethodInfo_ = {
	"javax.swing.SwingWorker$7",
	"propertyChange",
	"(Ljava/beans/PropertyChangeEvent;)V"
};

$InnerClassInfo _SwingWorker$7$1_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$7", nullptr, nullptr, 0},
	{"javax.swing.SwingWorker$7$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingWorker$7$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingWorker$7$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SwingWorker$7$1_FieldInfo_,
	_SwingWorker$7$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SwingWorker$7$1_EnclosingMethodInfo_,
	_SwingWorker$7$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker"
};

$Object* allocate$SwingWorker$7$1($Class* clazz) {
	return $of($alloc(SwingWorker$7$1));
}

void SwingWorker$7$1::init$($SwingWorker$7* this$0, $ExecutorService* val$executorService) {
	$set(this, this$0, this$0);
	$set(this, val$executorService, val$executorService);
}

$Object* SwingWorker$7$1::run() {
	$nc(this->val$executorService)->shutdown();
	return $of(nullptr);
}

SwingWorker$7$1::SwingWorker$7$1() {
}

$Class* SwingWorker$7$1::load$($String* name, bool initialize) {
	$loadClass(SwingWorker$7$1, name, initialize, &_SwingWorker$7$1_ClassInfo_, allocate$SwingWorker$7$1);
	return class$;
}

$Class* SwingWorker$7$1::class$ = nullptr;

	} // swing
} // javax