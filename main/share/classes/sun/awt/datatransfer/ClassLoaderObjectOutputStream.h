#ifndef _sun_awt_datatransfer_ClassLoaderObjectOutputStream_h_
#define _sun_awt_datatransfer_ClassLoaderObjectOutputStream_h_
//$ class sun.awt.datatransfer.ClassLoaderObjectOutputStream
//$ extends java.io.ObjectOutputStream

#include <java/io/ObjectOutputStream.h>

namespace java {
	namespace io {
		class OutputStream;
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

class ClassLoaderObjectOutputStream : public ::java::io::ObjectOutputStream {
	$class(ClassLoaderObjectOutputStream, $NO_CLASS_INIT, ::java::io::ObjectOutputStream)
public:
	ClassLoaderObjectOutputStream();
	void init$(::java::io::OutputStream* os);
	virtual void annotateClass($Class* cl) override;
	virtual void annotateProxyClass($Class* cl) override;
	::java::util::Map* getClassLoaderMap();
	::java::util::Map* map = nullptr;
};

		} // datatransfer
	} // awt
} // sun

#endif // _sun_awt_datatransfer_ClassLoaderObjectOutputStream_h_