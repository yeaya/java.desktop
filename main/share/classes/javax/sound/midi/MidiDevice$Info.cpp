#include <javax/sound/midi/MidiDevice$Info.h>

#include <javax/sound/midi/MidiDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice = ::javax::sound::midi::MidiDevice;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _MidiDevice$Info_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MidiDevice$Info, name)},
	{"vendor", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MidiDevice$Info, vendor)},
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MidiDevice$Info, description)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MidiDevice$Info, version)},
	{}
};

$MethodInfo _MidiDevice$Info_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(MidiDevice$Info::*)($String*,$String*,$String*,$String*)>(&MidiDevice$Info::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(MidiDevice$Info::*)()>(&MidiDevice$Info::getDescription))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(MidiDevice$Info::*)()>(&MidiDevice$Info::getName))},
	{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(MidiDevice$Info::*)()>(&MidiDevice$Info::getVendor))},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(MidiDevice$Info::*)()>(&MidiDevice$Info::getVersion))},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MidiDevice$Info_InnerClassesInfo_[] = {
	{"javax.sound.midi.MidiDevice$Info", "javax.sound.midi.MidiDevice", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MidiDevice$Info_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.MidiDevice$Info",
	"java.lang.Object",
	nullptr,
	_MidiDevice$Info_FieldInfo_,
	_MidiDevice$Info_MethodInfo_,
	nullptr,
	nullptr,
	_MidiDevice$Info_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.midi.MidiDevice"
};

$Object* allocate$MidiDevice$Info($Class* clazz) {
	return $of($alloc(MidiDevice$Info));
}

void MidiDevice$Info::init$($String* name, $String* vendor, $String* description, $String* version) {
	$set(this, name, name);
	$set(this, vendor, vendor);
	$set(this, description, description);
	$set(this, version, version);
}

bool MidiDevice$Info::equals(Object$* obj) {
	return $Object::equals(obj);
}

int32_t MidiDevice$Info::hashCode() {
	return $Object::hashCode();
}

$String* MidiDevice$Info::getName() {
	return this->name;
}

$String* MidiDevice$Info::getVendor() {
	return this->vendor;
}

$String* MidiDevice$Info::getDescription() {
	return this->description;
}

$String* MidiDevice$Info::getVersion() {
	return this->version;
}

$String* MidiDevice$Info::toString() {
	return this->name;
}

MidiDevice$Info::MidiDevice$Info() {
}

$Class* MidiDevice$Info::load$($String* name, bool initialize) {
	$loadClass(MidiDevice$Info, name, initialize, &_MidiDevice$Info_ClassInfo_, allocate$MidiDevice$Info);
	return class$;
}

$Class* MidiDevice$Info::class$ = nullptr;

		} // midi
	} // sound
} // javax