#ifndef _sun_awt_datatransfer_ClassLoaderObjectInputStream_h_
#define _sun_awt_datatransfer_ClassLoaderObjectInputStream_h_
//$ class sun.awt.datatransfer.ClassLoaderObjectInputStream
//$ extends java.io.ObjectInputStream

#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
		class ObjectStreamClass;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace awt {
		namespace datatransfer {

class ClassLoaderObjectInputStream : public ::java::io::ObjectInputStream {
	$class(ClassLoaderObjectInputStream, $NO_CLASS_INIT, ::java::io::ObjectInputStream)
public:
	ClassLoaderObjectInputStream();
	void init$(::java::io::InputStream* is, ::java::util::Map* map);
	using ::java::io::ObjectInputStream::read;
	virtual $Class* resolveClass(::java::io::ObjectStreamClass* classDesc) override;
	virtual $Class* resolveProxyClass($StringArray* interfaces) override;
	::java::util::Map* map = nullptr;
};

		} // datatransfer
	} // awt
} // sun

#endif // _sun_awt_datatransfer_ClassLoaderObjectInputStream_h_