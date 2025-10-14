#include <javax/sound/midi/Instrument.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _Instrument_FieldInfo_[] = {
	{"patch", "Ljavax/sound/midi/Patch;", nullptr, $PRIVATE | $FINAL, $field(Instrument, patch)},
	{}
};

$MethodInfo _Instrument_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/midi/Soundbank;Ljavax/sound/midi/Patch;Ljava/lang/String;Ljava/lang/Class;)V", "(Ljavax/sound/midi/Soundbank;Ljavax/sound/midi/Patch;Ljava/lang/String;Ljava/lang/Class<*>;)V", $PROTECTED, $method(static_cast<void(Instrument::*)($Soundbank*,$Patch*,$String*,$Class*)>(&Instrument::init$))},
	{"getPatch", "()Ljavax/sound/midi/Patch;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Instrument_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.midi.Instrument",
	"javax.sound.midi.SoundbankResource",
	nullptr,
	_Instrument_FieldInfo_,
	_Instrument_MethodInfo_
};

$Object* allocate$Instrument($Class* clazz) {
	return $of($alloc(Instrument));
}

void Instrument::init$($Soundbank* soundbank, $Patch* patch, $String* name, $Class* dataClass) {
	$SoundbankResource::init$(soundbank, name, dataClass);
	$set(this, patch, patch);
}

$Patch* Instrument::getPatch() {
	return this->patch;
}

Instrument::Instrument() {
}

$Class* Instrument::load$($String* name, bool initialize) {
	$loadClass(Instrument, name, initialize, &_Instrument_ClassInfo_, allocate$Instrument);
	return class$;
}

$Class* Instrument::class$ = nullptr;

		} // midi
	} // sound
} // javax