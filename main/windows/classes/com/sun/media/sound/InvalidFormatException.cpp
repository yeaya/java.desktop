#include <com/sun/media/sound/InvalidFormatException.h>

#include <com/sun/media/sound/InvalidDataException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InvalidDataException = ::com::sun::media::sound::InvalidDataException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _InvalidFormatException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidFormatException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidFormatException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidFormatException::*)()>(&InvalidFormatException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidFormatException::*)($String*)>(&InvalidFormatException::init$))},
	{}
};

$ClassInfo _InvalidFormatException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.media.sound.InvalidFormatException",
	"com.sun.media.sound.InvalidDataException",
	nullptr,
	_InvalidFormatException_FieldInfo_,
	_InvalidFormatException_MethodInfo_
};

$Object* allocate$InvalidFormatException($Class* clazz) {
	return $of($alloc(InvalidFormatException));
}

void InvalidFormatException::init$() {
	$InvalidDataException::init$("Invalid format!"_s);
}

void InvalidFormatException::init$($String* s) {
	$InvalidDataException::init$(s);
}

InvalidFormatException::InvalidFormatException() {
}

InvalidFormatException::InvalidFormatException(const InvalidFormatException& e) {
}

InvalidFormatException InvalidFormatException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidFormatException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidFormatException::load$($String* name, bool initialize) {
	$loadClass(InvalidFormatException, name, initialize, &_InvalidFormatException_ClassInfo_, allocate$InvalidFormatException);
	return class$;
}

$Class* InvalidFormatException::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com