#ifndef _java_awt_dnd_SerializationTester$1_h_
#define _java_awt_dnd_SerializationTester$1_h_
//$ class java.awt.dnd.SerializationTester$1
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>

namespace java {
	namespace awt {
		namespace dnd {

class SerializationTester$1 : public ::java::io::OutputStream {
	$class(SerializationTester$1, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	SerializationTester$1();
	void init$();
	using ::java::io::OutputStream::write;
	virtual void write(int32_t b) override;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_SerializationTester$1_h_