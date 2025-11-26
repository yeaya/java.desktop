#ifndef _java_beans_XMLDecoder_h_
#define _java_beans_XMLDecoder_h_
//$ class java.beans.XMLDecoder
//$ extends java.lang.AutoCloseable

#include <java/lang/Array.h>
#include <java/lang/AutoCloseable.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {
				class DocumentHandler;
			}
		}
	}
}
namespace java {
	namespace beans {
		class ExceptionListener;
	}
}
namespace java {
	namespace io {
		class Closeable;
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class DefaultHandler;
			}
		}
	}
}

namespace java {
	namespace beans {

class $export XMLDecoder : public ::java::lang::AutoCloseable {
	$class(XMLDecoder, $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	XMLDecoder();
	void init$(::java::io::InputStream* in);
	void init$(::java::io::InputStream* in, Object$* owner);
	void init$(::java::io::InputStream* in, Object$* owner, ::java::beans::ExceptionListener* exceptionListener);
	void init$(::java::io::InputStream* in, Object$* owner, ::java::beans::ExceptionListener* exceptionListener, ::java::lang::ClassLoader* cl);
	void init$(::org::xml::sax::InputSource* is);
	void init$(::org::xml::sax::InputSource* is, Object$* owner, ::java::beans::ExceptionListener* el, ::java::lang::ClassLoader* cl);
	virtual void close() override;
	void close(::java::io::Closeable* in);
	static ::org::xml::sax::helpers::DefaultHandler* createHandler(Object$* owner, ::java::beans::ExceptionListener* el, ::java::lang::ClassLoader* cl);
	virtual ::java::beans::ExceptionListener* getExceptionListener();
	virtual $Object* getOwner();
	bool parsingComplete();
	virtual $Object* readObject();
	virtual void setExceptionListener(::java::beans::ExceptionListener* exceptionListener);
	virtual void setOwner(Object$* owner);
	::java::security::AccessControlContext* acc = nullptr;
	::com::sun::beans::decoder::DocumentHandler* handler = nullptr;
	::org::xml::sax::InputSource* input = nullptr;
	$Object* owner = nullptr;
	$ObjectArray* array = nullptr;
	int32_t index = 0;
};

	} // beans
} // java

#endif // _java_beans_XMLDecoder_h_