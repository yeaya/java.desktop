#include <javax/sound/midi/MidiUnavailableException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _MidiUnavailableException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MidiUnavailableException, serialVersionUID)},
	{}
};

$MethodInfo _MidiUnavailableException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MidiUnavailableException::*)()>(&MidiUnavailableException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MidiUnavailableException::*)($String*)>(&MidiUnavailableException::init$))},
	{}
};

$ClassInfo _MidiUnavailableException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.MidiUnavailableException",
	"java.lang.Exception",
	nullptr,
	_MidiUnavailableException_FieldInfo_,
	_MidiUnavailableException_MethodInfo_
};

$Object* allocate$MidiUnavailableException($Class* clazz) {
	return $of($alloc(MidiUnavailableException));
}

void MidiUnavailableException::init$() {
	$Exception::init$();
}

void MidiUnavailableException::init$($String* message) {
	$Exception::init$(message);
}

MidiUnavailableException::MidiUnavailableException() {
}

MidiUnavailableException::MidiUnavailableException(const MidiUnavailableException& e) : $Exception(e) {
}

void MidiUnavailableException::throw$() {
	throw *this;
}

$Class* MidiUnavailableException::load$($String* name, bool initialize) {
	$loadClass(MidiUnavailableException, name, initialize, &_MidiUnavailableException_ClassInfo_, allocate$MidiUnavailableException);
	return class$;
}

$Class* MidiUnavailableException::class$ = nullptr;

		} // midi
	} // sound
} // javax