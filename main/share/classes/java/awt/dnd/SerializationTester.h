#ifndef _java_awt_dnd_SerializationTester_h_
#define _java_awt_dnd_SerializationTester_h_
//$ class java.awt.dnd.SerializationTester
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class SerializationTester : public ::java::lang::Object {
	$class(SerializationTester, 0, ::java::lang::Object)
public:
	SerializationTester();
	void init$();
	static bool test(Object$* obj);
	static ::java::io::ObjectOutputStream* stream;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_SerializationTester_h_