#include <com/sun/media/sound/InvalidDataException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _InvalidDataException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidDataException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidDataException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidDataException::*)()>(&InvalidDataException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidDataException::*)($String*)>(&InvalidDataException::init$))},
	{}
};

$ClassInfo _InvalidDataException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.media.sound.InvalidDataException",
	"java.io.IOException",
	nullptr,
	_InvalidDataException_FieldInfo_,
	_InvalidDataException_MethodInfo_
};

$Object* allocate$InvalidDataException($Class* clazz) {
	return $of($alloc(InvalidDataException));
}

void InvalidDataException::init$() {
	$IOException::init$("Invalid Data!"_s);
}

void InvalidDataException::init$($String* s) {
	$IOException::init$(s);
}

InvalidDataException::InvalidDataException() {
}

InvalidDataException::InvalidDataException(const InvalidDataException& e) : $IOException(e) {
}

void InvalidDataException::throw$() {
	throw *this;
}

$Class* InvalidDataException::load$($String* name, bool initialize) {
	$loadClass(InvalidDataException, name, initialize, &_InvalidDataException_ClassInfo_, allocate$InvalidDataException);
	return class$;
}

$Class* InvalidDataException::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com