#include <javax/sound/midi/InvalidMidiDataException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _InvalidMidiDataException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidMidiDataException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidMidiDataException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidMidiDataException::*)()>(&InvalidMidiDataException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidMidiDataException::*)($String*)>(&InvalidMidiDataException::init$))},
	{}
};

$ClassInfo _InvalidMidiDataException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.InvalidMidiDataException",
	"java.lang.Exception",
	nullptr,
	_InvalidMidiDataException_FieldInfo_,
	_InvalidMidiDataException_MethodInfo_
};

$Object* allocate$InvalidMidiDataException($Class* clazz) {
	return $of($alloc(InvalidMidiDataException));
}

void InvalidMidiDataException::init$() {
	$Exception::init$();
}

void InvalidMidiDataException::init$($String* message) {
	$Exception::init$(message);
}

InvalidMidiDataException::InvalidMidiDataException() {
}

InvalidMidiDataException::InvalidMidiDataException(const InvalidMidiDataException& e) {
}

InvalidMidiDataException InvalidMidiDataException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidMidiDataException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidMidiDataException::load$($String* name, bool initialize) {
	$loadClass(InvalidMidiDataException, name, initialize, &_InvalidMidiDataException_ClassInfo_, allocate$InvalidMidiDataException);
	return class$;
}

$Class* InvalidMidiDataException::class$ = nullptr;

		} // midi
	} // sound
} // javax