#ifndef _bug6361367_h_
#define _bug6361367_h_
//$ class bug6361367
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicReference;
			}
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

class $export bug6361367 : public ::java::lang::Object {
	$class(bug6361367, 0, ::java::lang::Object)
public:
	bug6361367();
	void init$();
	static ::javax::swing::text::JTextComponent* initialize($Class* textComponentClass, ::java::util::concurrent::atomic::AtomicReference* ref);
	static $Object* invokeAndWait(::java::util::concurrent::Callable* callable);
	static void main($StringArray* args);
	static bool test($Class* textComponentClass);
	static void waitForFocus(::javax::swing::JComponent* component);
	static $String* testString;
	static $String* resultString;
	static ::java::util::List* textClasses;
};

#endif // _bug6361367_h_