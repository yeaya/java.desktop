#ifndef _Util$2_h_
#define _Util$2_h_
//$ class Util$2
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Exception;
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
			class Callable;
		}
	}
}

class Util$2 : public ::java::lang::Runnable {
	$class(Util$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Util$2();
	void init$(::java::util::List* val$result, ::java::util::concurrent::Callable* val$task, $Array<::java::lang::Exception>* val$exception);
	virtual void run() override;
	$Array<::java::lang::Exception>* val$exception = nullptr;
	::java::util::concurrent::Callable* val$task = nullptr;
	::java::util::List* val$result = nullptr;
};

#endif // _Util$2_h_