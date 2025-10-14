#include <com/sun/media/sound/SoftShortMessage.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/ShortMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $ShortMessage = ::javax::sound::midi::ShortMessage;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftShortMessage_FieldInfo_[] = {
	{"channel", "I", nullptr, 0, $field(SoftShortMessage, channel)},
	{}
};

$MethodInfo _SoftShortMessage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftShortMessage::*)()>(&SoftShortMessage::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getChannel", "()I", nullptr, $PUBLIC},
	{"setMessage", "(IIII)V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{}
};

$ClassInfo _SoftShortMessage_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftShortMessage",
	"javax.sound.midi.ShortMessage",
	nullptr,
	_SoftShortMessage_FieldInfo_,
	_SoftShortMessage_MethodInfo_
};

$Object* allocate$SoftShortMessage($Class* clazz) {
	return $of($alloc(SoftShortMessage));
}

void SoftShortMessage::init$() {
	$ShortMessage::init$();
	this->channel = 0;
}

int32_t SoftShortMessage::getChannel() {
	return this->channel;
}

void SoftShortMessage::setMessage(int32_t command, int32_t channel, int32_t data1, int32_t data2) {
	this->channel = channel;
	$ShortMessage::setMessage(command, (int32_t)(channel & (uint32_t)15), data1, data2);
}

$Object* SoftShortMessage::clone() {
	$var(SoftShortMessage, clone, $new(SoftShortMessage));
	try {
		int32_t var$0 = getCommand();
		int32_t var$1 = getChannel();
		int32_t var$2 = getData1();
		clone->setMessage(var$0, var$1, var$2, getData2());
	} catch ($InvalidMidiDataException&) {
		$var($InvalidMidiDataException, e, $catch());
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
	return $of(clone);
}

SoftShortMessage::SoftShortMessage() {
}

$Class* SoftShortMessage::load$($String* name, bool initialize) {
	$loadClass(SoftShortMessage, name, initialize, &_SoftShortMessage_ClassInfo_, allocate$SoftShortMessage);
	return class$;
}

$Class* SoftShortMessage::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com