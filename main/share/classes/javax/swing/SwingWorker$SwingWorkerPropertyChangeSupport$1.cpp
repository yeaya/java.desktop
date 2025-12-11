#include <javax/swing/SwingWorker$SwingWorkerPropertyChangeSupport$1.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/SwingWorker$SwingWorkerPropertyChangeSupport.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingWorker$SwingWorkerPropertyChangeSupport = ::javax::swing::SwingWorker$SwingWorkerPropertyChangeSupport;

namespace javax {
	namespace swing {

$FieldInfo _SwingWorker$SwingWorkerPropertyChangeSupport$1_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/SwingWorker$SwingWorkerPropertyChangeSupport;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$SwingWorkerPropertyChangeSupport$1, this$1)},
	{"val$evt", "Ljava/beans/PropertyChangeEvent;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$SwingWorkerPropertyChangeSupport$1, val$evt)},
	{}
};

$MethodInfo _SwingWorker$SwingWorkerPropertyChangeSupport$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/SwingWorker$SwingWorkerPropertyChangeSupport;Ljava/beans/PropertyChangeEvent;)V", "()V", 0, $method(static_cast<void(SwingWorker$SwingWorkerPropertyChangeSupport$1::*)($SwingWorker$SwingWorkerPropertyChangeSupport*,$PropertyChangeEvent*)>(&SwingWorker$SwingWorkerPropertyChangeSupport$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SwingWorker$SwingWorkerPropertyChangeSupport$1_EnclosingMethodInfo_ = {
	"javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport",
	"firePropertyChange",
	"(Ljava/beans/PropertyChangeEvent;)V"
};

$InnerClassInfo _SwingWorker$SwingWorkerPropertyChangeSupport$1_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport", "javax.swing.SwingWorker", "SwingWorkerPropertyChangeSupport", $PRIVATE},
	{"javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingWorker$SwingWorkerPropertyChangeSupport$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_SwingWorker$SwingWorkerPropertyChangeSupport$1_FieldInfo_,
	_SwingWorker$SwingWorkerPropertyChangeSupport$1_MethodInfo_,
	nullptr,
	&_SwingWorker$SwingWorkerPropertyChangeSupport$1_EnclosingMethodInfo_,
	_SwingWorker$SwingWorkerPropertyChangeSupport$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker"
};

$Object* allocate$SwingWorker$SwingWorkerPropertyChangeSupport$1($Class* clazz) {
	return $of($alloc(SwingWorker$SwingWorkerPropertyChangeSupport$1));
}

void SwingWorker$SwingWorkerPropertyChangeSupport$1::init$($SwingWorker$SwingWorkerPropertyChangeSupport* this$1, $PropertyChangeEvent* val$evt) {
	$set(this, this$1, this$1);
	$set(this, val$evt, val$evt);
}

void SwingWorker$SwingWorkerPropertyChangeSupport$1::run() {
	this->this$1->firePropertyChange(this->val$evt);
}

SwingWorker$SwingWorkerPropertyChangeSupport$1::SwingWorker$SwingWorkerPropertyChangeSupport$1() {
}

$Class* SwingWorker$SwingWorkerPropertyChangeSupport$1::load$($String* name, bool initialize) {
	$loadClass(SwingWorker$SwingWorkerPropertyChangeSupport$1, name, initialize, &_SwingWorker$SwingWorkerPropertyChangeSupport$1_ClassInfo_, allocate$SwingWorker$SwingWorkerPropertyChangeSupport$1);
	return class$;
}

$Class* SwingWorker$SwingWorkerPropertyChangeSupport$1::class$ = nullptr;

	} // swing
} // javax