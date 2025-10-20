#include <com/sun/media/sound/MidiOutDeviceProvider$MidiOutDeviceInfo.h>

#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/MidiOutDeviceProvider.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $MidiOutDeviceProvider = ::com::sun::media::sound::MidiOutDeviceProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _MidiOutDeviceProvider$MidiOutDeviceInfo_FieldInfo_[] = {
	{"providerClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MidiOutDeviceProvider$MidiOutDeviceInfo, providerClass)},
	{}
};

$MethodInfo _MidiOutDeviceProvider$MidiOutDeviceInfo_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/Class;)V", "(ILjava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(MidiOutDeviceProvider$MidiOutDeviceInfo::*)(int32_t,$Class*)>(&MidiOutDeviceProvider$MidiOutDeviceInfo::init$))},
	{}
};

$InnerClassInfo _MidiOutDeviceProvider$MidiOutDeviceInfo_InnerClassesInfo_[] = {
	{"com.sun.media.sound.MidiOutDeviceProvider$MidiOutDeviceInfo", "com.sun.media.sound.MidiOutDeviceProvider", "MidiOutDeviceInfo", $STATIC | $FINAL},
	{"com.sun.media.sound.AbstractMidiDeviceProvider$Info", "com.sun.media.sound.AbstractMidiDeviceProvider", "Info", $STATIC},
	{}
};

$ClassInfo _MidiOutDeviceProvider$MidiOutDeviceInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.MidiOutDeviceProvider$MidiOutDeviceInfo",
	"com.sun.media.sound.AbstractMidiDeviceProvider$Info",
	nullptr,
	_MidiOutDeviceProvider$MidiOutDeviceInfo_FieldInfo_,
	_MidiOutDeviceProvider$MidiOutDeviceInfo_MethodInfo_,
	nullptr,
	nullptr,
	_MidiOutDeviceProvider$MidiOutDeviceInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.MidiOutDeviceProvider"
};

$Object* allocate$MidiOutDeviceProvider$MidiOutDeviceInfo($Class* clazz) {
	return $of($alloc(MidiOutDeviceProvider$MidiOutDeviceInfo));
}

void MidiOutDeviceProvider$MidiOutDeviceInfo::init$(int32_t index, $Class* providerClass) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $MidiOutDeviceProvider::nGetName(index));
	$var($String, var$1, $MidiOutDeviceProvider::nGetVendor(index));
	$var($String, var$2, $MidiOutDeviceProvider::nGetDescription(index));
	$AbstractMidiDeviceProvider$Info::init$(var$0, var$1, var$2, $($MidiOutDeviceProvider::nGetVersion(index)), index);
	$set(this, providerClass, providerClass);
}

MidiOutDeviceProvider$MidiOutDeviceInfo::MidiOutDeviceProvider$MidiOutDeviceInfo() {
}

$Class* MidiOutDeviceProvider$MidiOutDeviceInfo::load$($String* name, bool initialize) {
	$loadClass(MidiOutDeviceProvider$MidiOutDeviceInfo, name, initialize, &_MidiOutDeviceProvider$MidiOutDeviceInfo_ClassInfo_, allocate$MidiOutDeviceProvider$MidiOutDeviceInfo);
	return class$;
}

$Class* MidiOutDeviceProvider$MidiOutDeviceInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com