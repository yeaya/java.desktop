#ifndef _OrderOfGConfigNotify_h_
#define _OrderOfGConfigNotify_h_
//$ class OrderOfGConfigNotify
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
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
namespace javax {
	namespace swing {
		class JPanel;
	}
}

class $export OrderOfGConfigNotify : public ::java::lang::Object {
	$class(OrderOfGConfigNotify, 0, ::java::lang::Object)
public:
	OrderOfGConfigNotify();
	void init$();
	static void lambda$main$0(::java::util::concurrent::atomic::AtomicBoolean* childCalled, ::java::util::concurrent::atomic::AtomicBoolean* parentCalled, ::javax::swing::JPanel* parent, ::java::beans::PropertyChangeEvent* evt);
	static void lambda$main$1(::java::util::concurrent::atomic::AtomicBoolean* childCalled, ::javax::swing::JPanel* child, ::java::beans::PropertyChangeEvent* evt);
	static void lambda$main$2();
	static void main($StringArray* args);
	static $String* name;
};

#endif // _OrderOfGConfigNotify_h_