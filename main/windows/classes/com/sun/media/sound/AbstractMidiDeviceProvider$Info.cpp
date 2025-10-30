#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>

#include <com/sun/media/sound/AbstractMidiDeviceProvider.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <jcpp.h>

using $AbstractMidiDeviceProvider = ::com::sun::media::sound::AbstractMidiDeviceProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AbstractMidiDeviceProvider$Info_FieldInfo_[] = {
	{"index", "I", nullptr, $PRIVATE, $field(AbstractMidiDeviceProvider$Info, index)},
	{}
};

$MethodInfo _AbstractMidiDeviceProvider$Info_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(AbstractMidiDeviceProvider$Info::*)($String*,$String*,$String*,$String*,int32_t)>(&AbstractMidiDeviceProvider$Info::init$))},
	{"equalStrings", "(Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)Z", nullptr, $FINAL, $method(static_cast<bool(AbstractMidiDeviceProvider$Info::*)(AbstractMidiDeviceProvider$Info*)>(&AbstractMidiDeviceProvider$Info::equalStrings))},
	{"getIndex", "()I", nullptr, $FINAL, $method(static_cast<int32_t(AbstractMidiDeviceProvider$Info::*)()>(&AbstractMidiDeviceProvider$Info::getIndex))},
	{"setIndex", "(I)V", nullptr, $FINAL, $method(static_cast<void(AbstractMidiDeviceProvider$Info::*)(int32_t)>(&AbstractMidiDeviceProvider$Info::setIndex))},
	{}
};

$InnerClassInfo _AbstractMidiDeviceProvider$Info_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AbstractMidiDeviceProvider$Info", "com.sun.media.sound.AbstractMidiDeviceProvider", "Info", $STATIC},
	{"javax.sound.midi.MidiDevice$Info", "javax.sound.midi.MidiDevice", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AbstractMidiDeviceProvider$Info_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AbstractMidiDeviceProvider$Info",
	"javax.sound.midi.MidiDevice$Info",
	nullptr,
	_AbstractMidiDeviceProvider$Info_FieldInfo_,
	_AbstractMidiDeviceProvider$Info_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractMidiDeviceProvider$Info_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AbstractMidiDeviceProvider"
};

$Object* allocate$AbstractMidiDeviceProvider$Info($Class* clazz) {
	return $of($alloc(AbstractMidiDeviceProvider$Info));
}

void AbstractMidiDeviceProvider$Info::init$($String* name, $String* vendor, $String* description, $String* version, int32_t index) {
	$MidiDevice$Info::init$(name, vendor, description, version);
	this->index = index;
}

bool AbstractMidiDeviceProvider$Info::equalStrings(AbstractMidiDeviceProvider$Info* info) {
	$useLocalCurrentObjectStackCache();
	bool var$2 = info != nullptr && $nc($(getName()))->equals($(info->getName()));
	bool var$1 = var$2 && $nc($(getVendor()))->equals($(info->getVendor()));
	bool var$0 = var$1 && $nc($(getDescription()))->equals($(info->getDescription()));
	return (var$0 && $nc($(getVersion()))->equals($(info->getVersion())));
}

int32_t AbstractMidiDeviceProvider$Info::getIndex() {
	return this->index;
}

void AbstractMidiDeviceProvider$Info::setIndex(int32_t index) {
	this->index = index;
}

AbstractMidiDeviceProvider$Info::AbstractMidiDeviceProvider$Info() {
}

$Class* AbstractMidiDeviceProvider$Info::load$($String* name, bool initialize) {
	$loadClass(AbstractMidiDeviceProvider$Info, name, initialize, &_AbstractMidiDeviceProvider$Info_ClassInfo_, allocate$AbstractMidiDeviceProvider$Info);
	return class$;
}

$Class* AbstractMidiDeviceProvider$Info::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com