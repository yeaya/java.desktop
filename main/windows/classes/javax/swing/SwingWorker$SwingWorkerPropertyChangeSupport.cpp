#include <javax/swing/SwingWorker$SwingWorkerPropertyChangeSupport.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/SwingWorker$SwingWorkerPropertyChangeSupport$1.h>
#include <javax/swing/SwingWorker.h>
#include <sun/swing/AccumulativeRunnable.h>
#include <jcpp.h>

using $RunnableArray = $Array<::java::lang::Runnable>;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingWorker = ::javax::swing::SwingWorker;
using $SwingWorker$SwingWorkerPropertyChangeSupport$1 = ::javax::swing::SwingWorker$SwingWorkerPropertyChangeSupport$1;
using $AccumulativeRunnable = ::sun::swing::AccumulativeRunnable;

namespace javax {
	namespace swing {

$FieldInfo _SwingWorker$SwingWorkerPropertyChangeSupport_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/SwingWorker;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$SwingWorkerPropertyChangeSupport, this$0)},
	{}
};

$MethodInfo _SwingWorker$SwingWorkerPropertyChangeSupport_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/SwingWorker;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(SwingWorker$SwingWorkerPropertyChangeSupport::*)($SwingWorker*,Object$*)>(&SwingWorker$SwingWorkerPropertyChangeSupport::init$))},
	{"firePropertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SwingWorker$SwingWorkerPropertyChangeSupport_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport", "javax.swing.SwingWorker", "SwingWorkerPropertyChangeSupport", $PRIVATE},
	{"javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingWorker$SwingWorkerPropertyChangeSupport_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport",
	"java.beans.PropertyChangeSupport",
	nullptr,
	_SwingWorker$SwingWorkerPropertyChangeSupport_FieldInfo_,
	_SwingWorker$SwingWorkerPropertyChangeSupport_MethodInfo_,
	nullptr,
	nullptr,
	_SwingWorker$SwingWorkerPropertyChangeSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker"
};

$Object* allocate$SwingWorker$SwingWorkerPropertyChangeSupport($Class* clazz) {
	return $of($alloc(SwingWorker$SwingWorkerPropertyChangeSupport));
}

void SwingWorker$SwingWorkerPropertyChangeSupport::init$($SwingWorker* this$0, Object$* source) {
	$set(this, this$0, this$0);
	$PropertyChangeSupport::init$(source);
}

void SwingWorker$SwingWorkerPropertyChangeSupport::firePropertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if ($SwingUtilities::isEventDispatchThread()) {
		$PropertyChangeSupport::firePropertyChange(evt);
	} else {
		$nc(this->this$0->doSubmit)->add($$new($RunnableArray, {static_cast<$Runnable*>($$new($SwingWorker$SwingWorkerPropertyChangeSupport$1, this, evt))}));
	}
}

SwingWorker$SwingWorkerPropertyChangeSupport::SwingWorker$SwingWorkerPropertyChangeSupport() {
}

$Class* SwingWorker$SwingWorkerPropertyChangeSupport::load$($String* name, bool initialize) {
	$loadClass(SwingWorker$SwingWorkerPropertyChangeSupport, name, initialize, &_SwingWorker$SwingWorkerPropertyChangeSupport_ClassInfo_, allocate$SwingWorker$SwingWorkerPropertyChangeSupport);
	return class$;
}

$Class* SwingWorker$SwingWorkerPropertyChangeSupport::class$ = nullptr;

	} // swing
} // javax