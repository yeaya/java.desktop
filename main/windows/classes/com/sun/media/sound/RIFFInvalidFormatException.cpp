#include <com/sun/media/sound/RIFFInvalidFormatException.h>

#include <com/sun/media/sound/InvalidFormatException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InvalidFormatException = ::com::sun::media::sound::InvalidFormatException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _RIFFInvalidFormatException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RIFFInvalidFormatException, serialVersionUID)},
	{}
};

$MethodInfo _RIFFInvalidFormatException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RIFFInvalidFormatException::*)()>(&RIFFInvalidFormatException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFInvalidFormatException::*)($String*)>(&RIFFInvalidFormatException::init$))},
	{}
};

$ClassInfo _RIFFInvalidFormatException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.RIFFInvalidFormatException",
	"com.sun.media.sound.InvalidFormatException",
	nullptr,
	_RIFFInvalidFormatException_FieldInfo_,
	_RIFFInvalidFormatException_MethodInfo_
};

$Object* allocate$RIFFInvalidFormatException($Class* clazz) {
	return $of($alloc(RIFFInvalidFormatException));
}

void RIFFInvalidFormatException::init$() {
	$InvalidFormatException::init$("Invalid format!"_s);
}

void RIFFInvalidFormatException::init$($String* s) {
	$InvalidFormatException::init$(s);
}

RIFFInvalidFormatException::RIFFInvalidFormatException() {
}

RIFFInvalidFormatException::RIFFInvalidFormatException(const RIFFInvalidFormatException& e) {
}

RIFFInvalidFormatException RIFFInvalidFormatException::wrapper$() {
	$pendingException(this);
	return *this;
}

void RIFFInvalidFormatException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* RIFFInvalidFormatException::load$($String* name, bool initialize) {
	$loadClass(RIFFInvalidFormatException, name, initialize, &_RIFFInvalidFormatException_ClassInfo_, allocate$RIFFInvalidFormatException);
	return class$;
}

$Class* RIFFInvalidFormatException::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com