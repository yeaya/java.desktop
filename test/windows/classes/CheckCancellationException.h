#ifndef _CheckCancellationException_h_
#define _CheckCancellationException_h_
//$ class CheckCancellationException
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class $export CheckCancellationException : public ::java::lang::Object {
	$class(CheckCancellationException, 0, ::java::lang::Object)
public:
	CheckCancellationException();
	void init$();
	static void main($StringArray* args);
	static ::java::util::concurrent::CountDownLatch* go;
};

#endif // _CheckCancellationException_h_