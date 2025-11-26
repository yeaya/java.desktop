#include <com/sun/media/sound/MidiInDeviceProvider$MidiInDeviceInfo.h>

#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/MidiInDeviceProvider.h>
#include <jcpp.h>

using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $MidiInDeviceProvider = ::com::sun::media::sound::MidiInDeviceProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _MidiInDeviceProvider$MidiInDeviceInfo_FieldInfo_[] = {
	{"providerClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MidiInDeviceProvider$MidiInDeviceInfo, providerClass)},
	{}
};

$MethodInfo _MidiInDeviceProvider$MidiInDeviceInfo_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/Class;)V", "(ILjava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(MidiInDeviceProvider$MidiInDeviceInfo::*)(int32_t,$Class*)>(&MidiInDeviceProvider$MidiInDeviceInfo::init$))},
	{}
};

$InnerClassInfo _MidiInDeviceProvider$MidiInDeviceInfo_InnerClassesInfo_[] = {
	{"com.sun.media.sound.MidiInDeviceProvider$MidiInDeviceInfo", "com.sun.media.sound.MidiInDeviceProvider", "MidiInDeviceInfo", $STATIC | $FINAL},
	{"com.sun.media.sound.AbstractMidiDeviceProvider$Info", "com.sun.media.sound.AbstractMidiDeviceProvider", "Info", $STATIC},
	{}
};

$ClassInfo _MidiInDeviceProvider$MidiInDeviceInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.MidiInDeviceProvider$MidiInDeviceInfo",
	"com.sun.media.sound.AbstractMidiDeviceProvider$Info",
	nullptr,
	_MidiInDeviceProvider$MidiInDeviceInfo_FieldInfo_,
	_MidiInDeviceProvider$MidiInDeviceInfo_MethodInfo_,
	nullptr,
	nullptr,
	_MidiInDeviceProvider$MidiInDeviceInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.MidiInDeviceProvider"
};

$Object* allocate$MidiInDeviceProvider$MidiInDeviceInfo($Class* clazz) {
	return $of($alloc(MidiInDeviceProvider$MidiInDeviceInfo));
}

void MidiInDeviceProvider$MidiInDeviceInfo::init$(int32_t index, $Class* providerClass) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $MidiInDeviceProvider::nGetName(index));
	$var($String, var$1, $MidiInDeviceProvider::nGetVendor(index));
	$var($String, var$2, $MidiInDeviceProvider::nGetDescription(index));
	$AbstractMidiDeviceProvider$Info::init$(var$0, var$1, var$2, $($MidiInDeviceProvider::nGetVersion(index)), index);
	$set(this, providerClass, providerClass);
}

MidiInDeviceProvider$MidiInDeviceInfo::MidiInDeviceProvider$MidiInDeviceInfo() {
}

$Class* MidiInDeviceProvider$MidiInDeviceInfo::load$($String* name, bool initialize) {
	$loadClass(MidiInDeviceProvider$MidiInDeviceInfo, name, initialize, &_MidiInDeviceProvider$MidiInDeviceInfo_ClassInfo_, allocate$MidiInDeviceProvider$MidiInDeviceInfo);
	return class$;
}

$Class* MidiInDeviceProvider$MidiInDeviceInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com