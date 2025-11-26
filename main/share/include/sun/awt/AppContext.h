#ifndef _sun_awt_AppContext_h_
#define _sun_awt_AppContext_h_
//$ class sun.awt.AppContext
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DISPOSAL_TIMEOUT")
#undef DISPOSAL_TIMEOUT
#pragma push_macro("DISPOSED_PROPERTY_NAME")
#undef DISPOSED_PROPERTY_NAME
#pragma push_macro("EVENT_QUEUE_COND_KEY")
#undef EVENT_QUEUE_COND_KEY
#pragma push_macro("EVENT_QUEUE_KEY")
#undef EVENT_QUEUE_KEY
#pragma push_macro("EVENT_QUEUE_LOCK_KEY")
#undef EVENT_QUEUE_LOCK_KEY
#pragma push_macro("GUI_DISPOSED")
#undef GUI_DISPOSED
#pragma push_macro("THREAD_INTERRUPT_TIMEOUT")
#undef THREAD_INTERRUPT_TIMEOUT

namespace java {
	namespace beans {
		class PropertyChangeListener;
		class PropertyChangeSupport;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class ThreadGroup;
		class ThreadLocal;
		class Void;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}
namespace sun {
	namespace awt {
		class AppContext$State;
		class MostRecentKeyValue;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {

class $import AppContext : public ::java::lang::Object {
	$class(AppContext, 0, ::java::lang::Object)
public:
	AppContext();
	void init$(::java::lang::ThreadGroup* threadGroup);
	void addPropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	void dispose();
	$Object* get(Object$* key);
	static ::sun::awt::AppContext* getAppContext();
	static ::java::util::Set* getAppContexts();
	::java::lang::ClassLoader* getContextClassLoader();
	$Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners();
	$Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners($String* propertyName);
	static $Object* getSoftReferenceValue(Object$* key, ::java::util::function::Supplier* supplier);
	::java::lang::ThreadGroup* getThreadGroup();
	static void initMainAppContext();
	bool isDisposed();
	static bool isMainContext(::sun::awt::AppContext* ctx);
	::java::lang::Void* lambda$dispose$0();
	$Object* put(Object$* key, Object$* value);
	$Object* remove(Object$* key);
	void removePropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	static void stopEventDispatchThreads();
	virtual $String* toString() override;
	static ::sun::util::logging::PlatformLogger* log;
	static $Object* EVENT_QUEUE_KEY;
	static $Object* EVENT_QUEUE_LOCK_KEY;
	static $Object* EVENT_QUEUE_COND_KEY;
	static ::java::util::Map* threadGroup2appContext;
	static $volatile(::sun::awt::AppContext*) mainAppContext;
	static $Object* getAppContextLock;
	::java::util::Map* table = nullptr;
	::java::lang::ThreadGroup* threadGroup = nullptr;
	::java::beans::PropertyChangeSupport* changeSupport = nullptr;
	static $String* DISPOSED_PROPERTY_NAME;
	static $String* GUI_DISPOSED;
	$volatile(::sun::awt::AppContext$State*) state = nullptr;
	static ::java::util::concurrent::atomic::AtomicInteger* numAppContexts;
	::java::lang::ClassLoader* contextClassLoader = nullptr;
	static ::java::lang::ThreadLocal* threadAppContext;
	int64_t DISPOSAL_TIMEOUT = 0;
	int64_t THREAD_INTERRUPT_TIMEOUT = 0;
	::sun::awt::MostRecentKeyValue* mostRecentKeyValue = nullptr;
	::sun::awt::MostRecentKeyValue* shadowMostRecentKeyValue = nullptr;
};

	} // awt
} // sun

#pragma pop_macro("DISPOSAL_TIMEOUT")
#pragma pop_macro("DISPOSED_PROPERTY_NAME")
#pragma pop_macro("EVENT_QUEUE_COND_KEY")
#pragma pop_macro("EVENT_QUEUE_KEY")
#pragma pop_macro("EVENT_QUEUE_LOCK_KEY")
#pragma pop_macro("GUI_DISPOSED")
#pragma pop_macro("THREAD_INTERRUPT_TIMEOUT")

#endif // _sun_awt_AppContext_h_