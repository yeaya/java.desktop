#ifndef _javax_swing_Timer_h_
#define _javax_swing_Timer_h_
//$ class javax.swing.Timer
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ActionListener;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Lock;
			}
		}
	}
}
namespace javax {
	namespace swing {
		class TimerQueue;
		class TimerQueue$DelayedTimer;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class EventListenerList;
		}
	}
}

namespace javax {
	namespace swing {

class $export Timer : public ::java::io::Serializable {
	$class(Timer, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	Timer();
	void init$(int32_t delay, ::java::awt::event::ActionListener* listener);
	virtual void addActionListener(::java::awt::event::ActionListener* listener);
	virtual void cancelEvent();
	static void checkDelay(int32_t delay, $String* message);
	virtual void fireActionPerformed(::java::awt::event::ActionEvent* e);
	::java::security::AccessControlContext* getAccessControlContext();
	virtual $String* getActionCommand();
	virtual $Array<::java::awt::event::ActionListener>* getActionListeners();
	virtual int32_t getDelay();
	virtual int32_t getInitialDelay();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual ::java::util::concurrent::locks::Lock* getLock();
	static bool getLogTimers();
	virtual bool isCoalesce();
	virtual bool isRepeats();
	virtual bool isRunning();
	virtual void post();
	void readObject(::java::io::ObjectInputStream* in);
	$Object* readResolve();
	virtual void removeActionListener(::java::awt::event::ActionListener* listener);
	virtual void restart();
	virtual void setActionCommand($String* command);
	virtual void setCoalesce(bool flag);
	virtual void setDelay(int32_t delay);
	virtual void setInitialDelay(int32_t initialDelay);
	static void setLogTimers(bool flag);
	virtual void setRepeats(bool flag);
	virtual void start();
	virtual void stop();
	::javax::swing::TimerQueue* timerQueue();
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* notify$ = nullptr;
	$volatile(int32_t) initialDelay = 0;
	$volatile(int32_t) delay = 0;
	$volatile(bool) repeats = false;
	$volatile(bool) coalesce = false;
	::java::lang::Runnable* doPostEvent = nullptr;
	static $volatile(bool) logTimers;
	::java::util::concurrent::locks::Lock* lock = nullptr;
	::javax::swing::TimerQueue$DelayedTimer* delayedTimer = nullptr;
	$volatile($String*) actionCommand = nullptr;
	$volatile(::java::security::AccessControlContext*) acc = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_Timer_h_