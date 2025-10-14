#include <com/sun/media/sound/RIFFInvalidDataException.h>

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

$FieldInfo _RIFFInvalidDataException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RIFFInvalidDataException, serialVersionUID)},
	{}
};

$MethodInfo _RIFFInvalidDataException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RIFFInvalidDataException::*)()>(&RIFFInvalidDataException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFInvalidDataException::*)($String*)>(&RIFFInvalidDataException::init$))},
	{}
};

$ClassInfo _RIFFInvalidDataException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.RIFFInvalidDataException",
	"com.sun.media.sound.InvalidDataException",
	nullptr,
	_RIFFInvalidDataException_FieldInfo_,
	_RIFFInvalidDataException_MethodInfo_
};

$Object* allocate$RIFFInvalidDataException($Class* clazz) {
	return $of($alloc(RIFFInvalidDataException));
}

void RIFFInvalidDataException::init$() {
	$InvalidDataException::init$("Invalid Data!"_s);
}

void RIFFInvalidDataException::init$($String* s) {
	$InvalidDataException::init$(s);
}

RIFFInvalidDataException::RIFFInvalidDataException() {
}

RIFFInvalidDataException::RIFFInvalidDataException(const RIFFInvalidDataException& e) {
}

RIFFInvalidDataException RIFFInvalidDataException::wrapper$() {
	$pendingException(this);
	return *this;
}

void RIFFInvalidDataException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* RIFFInvalidDataException::load$($String* name, bool initialize) {
	$loadClass(RIFFInvalidDataException, name, initialize, &_RIFFInvalidDataException_ClassInfo_, allocate$RIFFInvalidDataException);
	return class$;
}

$Class* RIFFInvalidDataException::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com