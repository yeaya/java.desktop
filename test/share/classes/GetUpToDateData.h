#ifndef _GetUpToDateData_h_
#define _GetUpToDateData_h_
//$ class GetUpToDateData
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class AWTEventListener;
		}
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
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class EventListenerList;
		}
	}
}

class $export GetUpToDateData : public ::java::lang::Object {
	$class(GetUpToDateData, 0, ::java::lang::Object)
public:
	GetUpToDateData();
	void init$();
	static void lambda$main$1();
	static void lambda$main$2();
	static void lambda$main$3(::java::util::concurrent::CountDownLatch* go);
	static void lambda$main$4(::java::util::concurrent::CountDownLatch* go);
	static void lambda$main$5(::java::util::concurrent::CountDownLatch* go);
	static void lambda$static$0(::java::awt::AWTEvent* event);
	static void main($StringArray* args);
	static ::javax::swing::event::EventListenerList* listeners;
	static ::java::util::EventListener* o1;
	static ::java::awt::event::AWTEventListener* o2;
};

#endif // _GetUpToDateData_h_