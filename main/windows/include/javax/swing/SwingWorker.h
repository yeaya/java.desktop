#ifndef _javax_swing_SwingWorker_h_
#define _javax_swing_SwingWorker_h_
//$ class javax.swing.SwingWorker
//$ extends java.util.concurrent.RunnableFuture

#include <java/lang/Array.h>
#include <java/util/concurrent/RunnableFuture.h>

#pragma push_macro("DO_SUBMIT_KEY")
#undef DO_SUBMIT_KEY
#pragma push_macro("MAX_WORKER_THREADS")
#undef MAX_WORKER_THREADS

namespace java {
	namespace beans {
		class PropertyChangeListener;
		class PropertyChangeSupport;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
			class FutureTask;
			class TimeUnit;
		}
	}
}
namespace javax {
	namespace swing {
		class SwingWorker$StateValue;
	}
}
namespace sun {
	namespace swing {
		class AccumulativeRunnable;
	}
}

namespace javax {
	namespace swing {

class $import SwingWorker : public ::java::util::concurrent::RunnableFuture {
	$class(SwingWorker, 0, ::java::util::concurrent::RunnableFuture)
public:
	SwingWorker();
	void init$();
	void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual bool cancel(bool mayInterruptIfRunning) override;
	virtual $Object* doInBackground() {return nullptr;}
	virtual void done();
	void doneEDT();
	void execute();
	void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue);
	virtual $Object* get() override;
	virtual $Object* get(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	static ::sun::swing::AccumulativeRunnable* getDoSubmit();
	int32_t getProgress();
	::java::beans::PropertyChangeSupport* getPropertyChangeSupport();
	::javax::swing::SwingWorker$StateValue* getState();
	static ::java::util::concurrent::ExecutorService* getWorkersExecutorService();
	virtual bool isCancelled() override;
	virtual bool isDone() override;
	virtual void process(::java::util::List* chunks);
	void publish($ObjectArray* chunks);
	void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void run() override;
	void setProgress(int32_t progress);
	void setState(::javax::swing::SwingWorker$StateValue* state);
	static const int32_t MAX_WORKER_THREADS = 10;
	$volatile(int32_t) progress = 0;
	$volatile(::javax::swing::SwingWorker$StateValue*) state = nullptr;
	::java::util::concurrent::FutureTask* future = nullptr;
	::java::beans::PropertyChangeSupport* propertyChangeSupport = nullptr;
	::sun::swing::AccumulativeRunnable* doProcess = nullptr;
	::sun::swing::AccumulativeRunnable* doNotifyProgressChange = nullptr;
	::sun::swing::AccumulativeRunnable* doSubmit = nullptr;
	static $Object* DO_SUBMIT_KEY;
};

	} // swing
} // javax

#pragma pop_macro("DO_SUBMIT_KEY")
#pragma pop_macro("MAX_WORKER_THREADS")

#endif // _javax_swing_SwingWorker_h_