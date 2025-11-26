#include <javax/swing/SwingWorker.h>

#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/lang/Runnable.h>
#include <java/util/List.h>
#include <java/util/concurrent/AbstractExecutorService.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/FutureTask.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <java/util/concurrent/RunnableFuture.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/SwingWorker$1.h>
#include <javax/swing/SwingWorker$2.h>
#include <javax/swing/SwingWorker$3.h>
#include <javax/swing/SwingWorker$4.h>
#include <javax/swing/SwingWorker$5.h>
#include <javax/swing/SwingWorker$6.h>
#include <javax/swing/SwingWorker$7.h>
#include <javax/swing/SwingWorker$DoSubmitAccumulativeRunnable.h>
#include <javax/swing/SwingWorker$StateValue.h>
#include <javax/swing/SwingWorker$SwingWorkerPropertyChangeSupport.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/AccumulativeRunnable.h>
#include <jcpp.h>

#undef DISPOSED_PROPERTY_NAME
#undef DONE
#undef DO_SUBMIT_KEY
#undef MAX_WORKER_THREADS
#undef MINUTES
#undef PENDING

using $IntegerArray = $Array<::java::lang::Integer>;
using $RunnableArray = $Array<::java::lang::Runnable>;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $List = ::java::util::List;
using $AbstractExecutorService = ::java::util::concurrent::AbstractExecutorService;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $Callable = ::java::util::concurrent::Callable;
using $Executor = ::java::util::concurrent::Executor;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $RunnableFuture = ::java::util::concurrent::RunnableFuture;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingWorker$1 = ::javax::swing::SwingWorker$1;
using $SwingWorker$2 = ::javax::swing::SwingWorker$2;
using $SwingWorker$3 = ::javax::swing::SwingWorker$3;
using $SwingWorker$4 = ::javax::swing::SwingWorker$4;
using $SwingWorker$5 = ::javax::swing::SwingWorker$5;
using $SwingWorker$6 = ::javax::swing::SwingWorker$6;
using $SwingWorker$7 = ::javax::swing::SwingWorker$7;
using $SwingWorker$DoSubmitAccumulativeRunnable = ::javax::swing::SwingWorker$DoSubmitAccumulativeRunnable;
using $SwingWorker$StateValue = ::javax::swing::SwingWorker$StateValue;
using $SwingWorker$SwingWorkerPropertyChangeSupport = ::javax::swing::SwingWorker$SwingWorkerPropertyChangeSupport;
using $AppContext = ::sun::awt::AppContext;
using $AccumulativeRunnable = ::sun::swing::AccumulativeRunnable;

namespace javax {
	namespace swing {

$CompoundAttribute _SwingWorker_MethodAnnotations_publish18[] = {
	{"Ljava/lang/SafeVarargs;", nullptr},
	{}
};

$FieldInfo _SwingWorker_FieldInfo_[] = {
	{"MAX_WORKER_THREADS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingWorker, MAX_WORKER_THREADS)},
	{"progress", "I", nullptr, $PRIVATE | $VOLATILE, $field(SwingWorker, progress)},
	{"state", "Ljavax/swing/SwingWorker$StateValue;", nullptr, $PRIVATE | $VOLATILE, $field(SwingWorker, state)},
	{"future", "Ljava/util/concurrent/FutureTask;", "Ljava/util/concurrent/FutureTask<TT;>;", $PRIVATE | $FINAL, $field(SwingWorker, future)},
	{"propertyChangeSupport", "Ljava/beans/PropertyChangeSupport;", nullptr, $PRIVATE | $FINAL, $field(SwingWorker, propertyChangeSupport)},
	{"doProcess", "Lsun/swing/AccumulativeRunnable;", "Lsun/swing/AccumulativeRunnable<TV;>;", $PRIVATE, $field(SwingWorker, doProcess)},
	{"doNotifyProgressChange", "Lsun/swing/AccumulativeRunnable;", "Lsun/swing/AccumulativeRunnable<Ljava/lang/Integer;>;", $PRIVATE, $field(SwingWorker, doNotifyProgressChange)},
	{"doSubmit", "Lsun/swing/AccumulativeRunnable;", "Lsun/swing/AccumulativeRunnable<Ljava/lang/Runnable;>;", $PRIVATE | $FINAL, $field(SwingWorker, doSubmit)},
	{"DO_SUBMIT_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingWorker, DO_SUBMIT_KEY)},
	{}
};

$MethodInfo _SwingWorker_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SwingWorker::*)()>(&SwingWorker::init$))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(SwingWorker::*)($PropertyChangeListener*)>(&SwingWorker::addPropertyChangeListener))},
	{"cancel", "(Z)Z", nullptr, $PUBLIC | $FINAL},
	{"doInBackground", "()Ljava/lang/Object;", "()TT;", $PROTECTED | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"done", "()V", nullptr, $PROTECTED},
	{"doneEDT", "()V", nullptr, $PRIVATE, $method(static_cast<void(SwingWorker::*)()>(&SwingWorker::doneEDT))},
	{"execute", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(SwingWorker::*)()>(&SwingWorker::execute))},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(SwingWorker::*)($String*,Object$*,Object$*)>(&SwingWorker::firePropertyChange))},
	{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $FINAL, nullptr, "java.lang.InterruptedException,java.util.concurrent.ExecutionException"},
	{"get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "(JLjava/util/concurrent/TimeUnit;)TT;", $PUBLIC | $FINAL, nullptr, "java.lang.InterruptedException,java.util.concurrent.ExecutionException,java.util.concurrent.TimeoutException"},
	{"getDoSubmit", "()Lsun/swing/AccumulativeRunnable;", "()Lsun/swing/AccumulativeRunnable<Ljava/lang/Runnable;>;", $PRIVATE | $STATIC, $method(static_cast<$AccumulativeRunnable*(*)()>(&SwingWorker::getDoSubmit))},
	{"getProgress", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(SwingWorker::*)()>(&SwingWorker::getProgress))},
	{"getPropertyChangeSupport", "()Ljava/beans/PropertyChangeSupport;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$PropertyChangeSupport*(SwingWorker::*)()>(&SwingWorker::getPropertyChangeSupport))},
	{"getState", "()Ljavax/swing/SwingWorker$StateValue;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SwingWorker$StateValue*(SwingWorker::*)()>(&SwingWorker::getState))},
	{"getWorkersExecutorService", "()Ljava/util/concurrent/ExecutorService;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$ExecutorService*(*)()>(&SwingWorker::getWorkersExecutorService))},
	{"isCancelled", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isDone", "()Z", nullptr, $PUBLIC | $FINAL},
	{"process", "(Ljava/util/List;)V", "(Ljava/util/List<TV;>;)V", $PROTECTED},
	{"publish", "([Ljava/lang/Object;)V", "([TV;)V", $PROTECTED | $FINAL | $TRANSIENT, $method(static_cast<void(SwingWorker::*)($ObjectArray*)>(&SwingWorker::publish)), nullptr, nullptr, _SwingWorker_MethodAnnotations_publish18},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(SwingWorker::*)($PropertyChangeListener*)>(&SwingWorker::removePropertyChangeListener))},
	{"run", "()V", nullptr, $PUBLIC | $FINAL},
	{"setProgress", "(I)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(SwingWorker::*)(int32_t)>(&SwingWorker::setProgress))},
	{"setState", "(Ljavax/swing/SwingWorker$StateValue;)V", nullptr, $PRIVATE, $method(static_cast<void(SwingWorker::*)($SwingWorker$StateValue*)>(&SwingWorker::setState))},
	{}
};

$InnerClassInfo _SwingWorker_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport", "javax.swing.SwingWorker", "SwingWorkerPropertyChangeSupport", $PRIVATE},
	{"javax.swing.SwingWorker$DoSubmitAccumulativeRunnable", "javax.swing.SwingWorker", "DoSubmitAccumulativeRunnable", $PRIVATE | $STATIC},
	{"javax.swing.SwingWorker$StateValue", "javax.swing.SwingWorker", "StateValue", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"javax.swing.SwingWorker$7", nullptr, nullptr, 0},
	{"javax.swing.SwingWorker$6", nullptr, nullptr, 0},
	{"javax.swing.SwingWorker$5", nullptr, nullptr, 0},
	{"javax.swing.SwingWorker$4", nullptr, nullptr, 0},
	{"javax.swing.SwingWorker$3", nullptr, nullptr, 0},
	{"javax.swing.SwingWorker$2", nullptr, nullptr, 0},
	{"javax.swing.SwingWorker$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingWorker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.SwingWorker",
	"java.lang.Object",
	"java.util.concurrent.RunnableFuture",
	_SwingWorker_FieldInfo_,
	_SwingWorker_MethodInfo_,
	"<T:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/RunnableFuture<TT;>;",
	nullptr,
	_SwingWorker_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport,javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport$1,javax.swing.SwingWorker$DoSubmitAccumulativeRunnable,javax.swing.SwingWorker$StateValue,javax.swing.SwingWorker$7,javax.swing.SwingWorker$7$1,javax.swing.SwingWorker$6,javax.swing.SwingWorker$5,javax.swing.SwingWorker$4,javax.swing.SwingWorker$3,javax.swing.SwingWorker$2,javax.swing.SwingWorker$1"
};

$Object* allocate$SwingWorker($Class* clazz) {
	return $of($alloc(SwingWorker));
}

$Object* SwingWorker::DO_SUBMIT_KEY = nullptr;

void SwingWorker::init$() {
	$set(this, doSubmit, getDoSubmit());
	$var($Callable, callable, $new($SwingWorker$1, this));
	$set(this, future, $new($SwingWorker$2, this, callable));
	$init($SwingWorker$StateValue);
	$set(this, state, $SwingWorker$StateValue::PENDING);
	$set(this, propertyChangeSupport, $new($SwingWorker$SwingWorkerPropertyChangeSupport, this, this));
	$set(this, doProcess, nullptr);
	$set(this, doNotifyProgressChange, nullptr);
}

void SwingWorker::run() {
	$nc(this->future)->run();
}

void SwingWorker::publish($ObjectArray* chunks) {
	$synchronized(this) {
		if (this->doProcess == nullptr) {
			$set(this, doProcess, $new($SwingWorker$3, this));
		}
	}
	$nc(this->doProcess)->add(chunks);
}

void SwingWorker::process($List* chunks) {
}

void SwingWorker::done() {
}

void SwingWorker::setProgress(int32_t progress) {
	$useLocalCurrentObjectStackCache();
	if (progress < 0 || progress > 100) {
		$throwNew($IllegalArgumentException, "the value should be from 0 to 100"_s);
	}
	if (this->progress == progress) {
		return;
	}
	int32_t oldProgress = this->progress;
	this->progress = progress;
	if (!$nc($(getPropertyChangeSupport()))->hasListeners("progress"_s)) {
		return;
	}
	$synchronized(this) {
		if (this->doNotifyProgressChange == nullptr) {
			$set(this, doNotifyProgressChange, $new($SwingWorker$4, this));
		}
	}
	$nc(this->doNotifyProgressChange)->add($$new($IntegerArray, {
		$($Integer::valueOf(oldProgress)),
		$($Integer::valueOf(progress))
	}));
}

int32_t SwingWorker::getProgress() {
	return this->progress;
}

void SwingWorker::execute() {
	$nc($(getWorkersExecutorService()))->execute(this);
}

bool SwingWorker::cancel(bool mayInterruptIfRunning) {
	return $nc(this->future)->cancel(mayInterruptIfRunning);
}

bool SwingWorker::isCancelled() {
	return $nc(this->future)->isCancelled();
}

bool SwingWorker::isDone() {
	return $nc(this->future)->isDone();
}

$Object* SwingWorker::get() {
	return $of($nc(this->future)->get());
}

$Object* SwingWorker::get(int64_t timeout, $TimeUnit* unit) {
	return $of($nc(this->future)->get(timeout, unit));
}

void SwingWorker::addPropertyChangeListener($PropertyChangeListener* listener) {
	$nc($(getPropertyChangeSupport()))->addPropertyChangeListener(listener);
}

void SwingWorker::removePropertyChangeListener($PropertyChangeListener* listener) {
	$nc($(getPropertyChangeSupport()))->removePropertyChangeListener(listener);
}

void SwingWorker::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	$nc($(getPropertyChangeSupport()))->firePropertyChange(propertyName, oldValue, newValue);
}

$PropertyChangeSupport* SwingWorker::getPropertyChangeSupport() {
	return this->propertyChangeSupport;
}

$SwingWorker$StateValue* SwingWorker::getState() {
	if (isDone()) {
		$init($SwingWorker$StateValue);
		return $SwingWorker$StateValue::DONE;
	} else {
		return this->state;
	}
}

void SwingWorker::setState($SwingWorker$StateValue* state) {
	$SwingWorker$StateValue* old = this->state;
	$set(this, state, state);
	firePropertyChange("state"_s, old, state);
}

void SwingWorker::doneEDT() {
	$useLocalCurrentObjectStackCache();
	$var($Runnable, doDone, $new($SwingWorker$5, this));
	if ($SwingUtilities::isEventDispatchThread()) {
		doDone->run();
	} else {
		$nc(this->doSubmit)->add($$new($RunnableArray, {doDone}));
	}
}

$ExecutorService* SwingWorker::getWorkersExecutorService() {
	$load(SwingWorker);
	$synchronized(class$) {
		$init(SwingWorker);
		$useLocalCurrentObjectStackCache();
		$var($AppContext, appContext, $AppContext::getAppContext());
		$var($ExecutorService, executorService, $cast($ExecutorService, $nc(appContext)->get(SwingWorker::class$)));
		if (executorService == nullptr) {
			$var($ThreadFactory, threadFactory, $new($SwingWorker$6));
			$init($TimeUnit);
			$assign(executorService, $new($ThreadPoolExecutor, SwingWorker::MAX_WORKER_THREADS, SwingWorker::MAX_WORKER_THREADS, (int64_t)10, $TimeUnit::MINUTES, static_cast<$BlockingQueue*>($$new($LinkedBlockingQueue)), threadFactory));
			appContext->put(SwingWorker::class$, executorService);
			$var($ExecutorService, es, executorService);
			appContext->addPropertyChangeListener($AppContext::DISPOSED_PROPERTY_NAME, $$new($SwingWorker$7, es));
		}
		return executorService;
	}
}

$AccumulativeRunnable* SwingWorker::getDoSubmit() {
	$init(SwingWorker);
	$useLocalCurrentObjectStackCache();
	$synchronized(SwingWorker::DO_SUBMIT_KEY) {
		$var($AppContext, appContext, $AppContext::getAppContext());
		$var($Object, doSubmit, $nc(appContext)->get(SwingWorker::DO_SUBMIT_KEY));
		if (doSubmit == nullptr) {
			$assign(doSubmit, $new($SwingWorker$DoSubmitAccumulativeRunnable));
			appContext->put(SwingWorker::DO_SUBMIT_KEY, doSubmit);
		}
		$var($AccumulativeRunnable, tmp, $cast($AccumulativeRunnable, doSubmit));
		return tmp;
	}
}

void clinit$SwingWorker($Class* class$) {
	$assignStatic(SwingWorker::DO_SUBMIT_KEY, $new($StringBuilder, "doSubmit"_s));
}

SwingWorker::SwingWorker() {
}

$Class* SwingWorker::load$($String* name, bool initialize) {
	$loadClass(SwingWorker, name, initialize, &_SwingWorker_ClassInfo_, clinit$SwingWorker, allocate$SwingWorker);
	return class$;
}

$Class* SwingWorker::class$ = nullptr;

	} // swing
} // javax