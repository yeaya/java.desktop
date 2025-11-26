#ifndef _DefaultRowSorterIOOBEtest$3_h_
#define _DefaultRowSorterIOOBEtest$3_h_
//$ class DefaultRowSorterIOOBEtest$3
//$ extends java.io.ByteArrayOutputStream

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}

class DefaultRowSorterIOOBEtest$3 : public ::java::io::ByteArrayOutputStream {
	$class(DefaultRowSorterIOOBEtest$3, $NO_CLASS_INIT, ::java::io::ByteArrayOutputStream)
public:
	DefaultRowSorterIOOBEtest$3();
	void init$(int32_t arg0, ::java::io::PrintStream* val$err);
	using ::java::io::ByteArrayOutputStream::write;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::java::io::PrintStream* val$err = nullptr;
};

#endif // _DefaultRowSorterIOOBEtest$3_h_