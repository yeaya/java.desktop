#ifndef _javax_imageio_IIOException_h_
#define _javax_imageio_IIOException_h_
//$ class javax.imageio.IIOException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace imageio {

class $export IIOException : public ::java::io::IOException {
	$class(IIOException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	IIOException();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xD35DB96440B82FDD;
	IIOException(const IIOException& e);
	virtual void throw$() override;
	inline IIOException* operator ->() {
		return (IIOException*)throwing$;
	}
};

	} // imageio
} // javax

#endif // _javax_imageio_IIOException_h_