#include <javax/swing/SwingWorker$7.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/concurrent/ExecutorService.h>
#include <javax/swing/SwingWorker$7$1.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $SwingWorker = ::javax::swing::SwingWorker;
using $SwingWorker$7$1 = ::javax::swing::SwingWorker$7$1;

namespace javax {
	namespace swing {

$FieldInfo _SwingWorker$7_FieldInfo_[] = {
	{"val$es", "Ljava/util/concurrent/ExecutorService;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$7, val$es)},
	{}
};

$MethodInfo _SwingWorker$7_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ExecutorService;)V", "()V", 0, $method(static_cast<void(SwingWorker$7::*)($ExecutorService*)>(&SwingWorker$7::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SwingWorker$7_EnclosingMethodInfo_ = {
	"javax.swing.SwingWorker",
	"getWorkersExecutorService",
	"()Ljava/util/concurrent/ExecutorService;"
};

$InnerClassInfo _SwingWorker$7_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$7", nullptr, nullptr, 0},
	{"javax.swing.SwingWorker$7$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingWorker$7_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingWorker$7",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_SwingWorker$7_FieldInfo_,
	_SwingWorker$7_MethodInfo_,
	nullptr,
	&_SwingWorker$7_EnclosingMethodInfo_,
	_SwingWorker$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker"
};

$Object* allocate$SwingWorker$7($Class* clazz) {
	return $of($alloc(SwingWorker$7));
}

void SwingWorker$7::init$($ExecutorService* val$es) {
	$set(this, val$es, val$es);
}

void SwingWorker$7::propertyChange($PropertyChangeEvent* pce) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	bool disposed = $nc(($cast($Boolean, $($nc(pce)->getNewValue()))))->booleanValue();
	if (disposed) {
		$var($WeakReference, executorServiceRef, $new($WeakReference, this->val$es));
		$var($ExecutorService, executorService, $cast($ExecutorService, executorServiceRef->get()));
		if (executorService != nullptr) {
			$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SwingWorker$7$1, this, executorService)));
		}
	}
}

SwingWorker$7::SwingWorker$7() {
}

$Class* SwingWorker$7::load$($String* name, bool initialize) {
	$loadClass(SwingWorker$7, name, initialize, &_SwingWorker$7_ClassInfo_, allocate$SwingWorker$7);
	return class$;
}

$Class* SwingWorker$7::class$ = nullptr;

	} // swing
} // javax