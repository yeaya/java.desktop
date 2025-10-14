#ifndef _bug6608456_h_
#define _bug6608456_h_
//$ class bug6608456
//$ extends java.lang.Object

#include <java/lang/Array.h>

class bug6608456$TestFuture;
namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class RepaintManager;
	}
}

class $export bug6608456 : public ::java::lang::Object {
	$class(bug6608456, 0, ::java::lang::Object)
public:
	bug6608456();
	void init$();
	static void blockTillDisplayed(::java::awt::Component* comp);
	static $Object* invokeAndWait(::java::util::concurrent::Callable* callable);
	static void main($StringArray* args);
	static bool registerDelegate(::javax::swing::JComponent* c, ::javax::swing::RepaintManager* repaintManager);
	static ::bug6608456$TestFuture* testFuture;
};

#endif // _bug6608456_h_