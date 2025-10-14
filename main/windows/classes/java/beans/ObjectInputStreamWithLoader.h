#ifndef _java_beans_ObjectInputStreamWithLoader_h_
#define _java_beans_ObjectInputStreamWithLoader_h_
//$ class java.beans.ObjectInputStreamWithLoader
//$ extends java.io.ObjectInputStream

#include <java/io/ObjectInputStream.h>

namespace java {
	namespace io {
		class InputStream;
		class ObjectStreamClass;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace java {
	namespace beans {

class ObjectInputStreamWithLoader : public ::java::io::ObjectInputStream {
	$class(ObjectInputStreamWithLoader, $NO_CLASS_INIT, ::java::io::ObjectInputStream)
public:
	ObjectInputStreamWithLoader();
	void init$(::java::io::InputStream* in, ::java::lang::ClassLoader* loader);
	using ::java::io::ObjectInputStream::read;
	virtual $Class* resolveClass(::java::io::ObjectStreamClass* classDesc) override;
	::java::lang::ClassLoader* loader = nullptr;
};

	} // beans
} // java

#endif // _java_beans_ObjectInputStreamWithLoader_h_