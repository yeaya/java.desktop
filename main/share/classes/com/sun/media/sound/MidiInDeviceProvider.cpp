#include <com/sun/media/sound/MidiInDeviceProvider.h>

#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider.h>
#include <com/sun/media/sound/MidiInDevice.h>
#include <com/sun/media/sound/MidiInDeviceProvider$MidiInDeviceInfo.h>
#include <com/sun/media/sound/Platform.h>
#include <javax/sound/midi/MidiDevice.h>
#include <jcpp.h>

using $AbstractMidiDeviceProvider$InfoArray = $Array<::com::sun::media::sound::AbstractMidiDeviceProvider$Info>;
using $MidiDeviceArray = $Array<::javax::sound::midi::MidiDevice>;
using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $AbstractMidiDeviceProvider = ::com::sun::media::sound::AbstractMidiDeviceProvider;
using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $MidiInDevice = ::com::sun::media::sound::MidiInDevice;
using $MidiInDeviceProvider$MidiInDeviceInfo = ::com::sun::media::sound::MidiInDeviceProvider$MidiInDeviceInfo;
using $Platform = ::com::sun::media::sound::Platform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice = ::javax::sound::midi::MidiDevice;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _MidiInDeviceProvider_FieldInfo_[] = {
	{"infos", "[Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, $PRIVATE | $STATIC, $staticField(MidiInDeviceProvider, infos)},
	{"devices", "[Ljavax/sound/midi/MidiDevice;", nullptr, $PRIVATE | $STATIC, $staticField(MidiInDeviceProvider, devices)},
	{"enabled", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MidiInDeviceProvider, enabled)},
	{}
};

$MethodInfo _MidiInDeviceProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MidiInDeviceProvider::*)()>(&MidiInDeviceProvider::init$))},
	{"createDevice", "(Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)Ljavax/sound/midi/MidiDevice;", nullptr, 0},
	{"createInfo", "(I)Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, 0},
	{"getDeviceCache", "()[Ljavax/sound/midi/MidiDevice;", nullptr, 0},
	{"getInfoCache", "()[Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, 0},
	{"getNumDevices", "()I", nullptr, 0},
	{"nGetDescription", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&MidiInDeviceProvider::nGetDescription))},
	{"nGetName", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&MidiInDeviceProvider::nGetName))},
	{"nGetNumDevices", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&MidiInDeviceProvider::nGetNumDevices))},
	{"nGetVendor", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&MidiInDeviceProvider::nGetVendor))},
	{"nGetVersion", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&MidiInDeviceProvider::nGetVersion))},
	{"setDeviceCache", "([Ljavax/sound/midi/MidiDevice;)V", nullptr, 0},
	{"setInfoCache", "([Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)V", nullptr, 0},
	{}
};

#define _METHOD_INDEX_nGetDescription 6
#define _METHOD_INDEX_nGetName 7
#define _METHOD_INDEX_nGetNumDevices 8
#define _METHOD_INDEX_nGetVendor 9
#define _METHOD_INDEX_nGetVersion 10

$InnerClassInfo _MidiInDeviceProvider_InnerClassesInfo_[] = {
	{"com.sun.media.sound.MidiInDeviceProvider$MidiInDeviceInfo", "com.sun.media.sound.MidiInDeviceProvider", "MidiInDeviceInfo", $STATIC | $FINAL},
	{}
};

$ClassInfo _MidiInDeviceProvider_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.MidiInDeviceProvider",
	"com.sun.media.sound.AbstractMidiDeviceProvider",
	nullptr,
	_MidiInDeviceProvider_FieldInfo_,
	_MidiInDeviceProvider_MethodInfo_,
	nullptr,
	nullptr,
	_MidiInDeviceProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.MidiInDeviceProvider$MidiInDeviceInfo"
};

$Object* allocate$MidiInDeviceProvider($Class* clazz) {
	return $of($alloc(MidiInDeviceProvider));
}

$AbstractMidiDeviceProvider$InfoArray* MidiInDeviceProvider::infos = nullptr;
$MidiDeviceArray* MidiInDeviceProvider::devices = nullptr;
bool MidiInDeviceProvider::enabled = false;

void MidiInDeviceProvider::init$() {
	$AbstractMidiDeviceProvider::init$();
}

$AbstractMidiDeviceProvider$Info* MidiInDeviceProvider::createInfo(int32_t index) {
	if (!MidiInDeviceProvider::enabled) {
		return nullptr;
	}
	return $new($MidiInDeviceProvider$MidiInDeviceInfo, index, MidiInDeviceProvider::class$);
}

$MidiDevice* MidiInDeviceProvider::createDevice($AbstractMidiDeviceProvider$Info* info) {
	if (MidiInDeviceProvider::enabled && ($instanceOf($MidiInDeviceProvider$MidiInDeviceInfo, info))) {
		return $new($MidiInDevice, info);
	}
	return nullptr;
}

int32_t MidiInDeviceProvider::getNumDevices() {
	if (!MidiInDeviceProvider::enabled) {
		return 0;
	}
	int32_t numDevices = nGetNumDevices();
	return numDevices;
}

$MidiDeviceArray* MidiInDeviceProvider::getDeviceCache() {
	return MidiInDeviceProvider::devices;
}

void MidiInDeviceProvider::setDeviceCache($MidiDeviceArray* devices) {
	$assignStatic(MidiInDeviceProvider::devices, devices);
}

$AbstractMidiDeviceProvider$InfoArray* MidiInDeviceProvider::getInfoCache() {
	return MidiInDeviceProvider::infos;
}

void MidiInDeviceProvider::setInfoCache($AbstractMidiDeviceProvider$InfoArray* infos) {
	$assignStatic(MidiInDeviceProvider::infos, infos);
}

int32_t MidiInDeviceProvider::nGetNumDevices() {
	$init(MidiInDeviceProvider);
	int32_t $ret = 0;
	$prepareNativeStatic(MidiInDeviceProvider, nGetNumDevices, int32_t);
	$ret = $invokeNativeStatic(MidiInDeviceProvider, nGetNumDevices);
	$finishNativeStatic();
	return $ret;
}

$String* MidiInDeviceProvider::nGetName(int32_t index) {
	$init(MidiInDeviceProvider);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(MidiInDeviceProvider, nGetName, $String*, int32_t index);
	$assign($ret, $invokeNativeStatic(MidiInDeviceProvider, nGetName, index));
	$finishNativeStatic();
	return $ret;
}

$String* MidiInDeviceProvider::nGetVendor(int32_t index) {
	$init(MidiInDeviceProvider);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(MidiInDeviceProvider, nGetVendor, $String*, int32_t index);
	$assign($ret, $invokeNativeStatic(MidiInDeviceProvider, nGetVendor, index));
	$finishNativeStatic();
	return $ret;
}

$String* MidiInDeviceProvider::nGetDescription(int32_t index) {
	$init(MidiInDeviceProvider);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(MidiInDeviceProvider, nGetDescription, $String*, int32_t index);
	$assign($ret, $invokeNativeStatic(MidiInDeviceProvider, nGetDescription, index));
	$finishNativeStatic();
	return $ret;
}

$String* MidiInDeviceProvider::nGetVersion(int32_t index) {
	$init(MidiInDeviceProvider);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(MidiInDeviceProvider, nGetVersion, $String*, int32_t index);
	$assign($ret, $invokeNativeStatic(MidiInDeviceProvider, nGetVersion, index));
	$finishNativeStatic();
	return $ret;
}

void clinit$MidiInDeviceProvider($Class* class$) {
	$assignStatic(MidiInDeviceProvider::infos, nullptr);
	$assignStatic(MidiInDeviceProvider::devices, nullptr);
	{
		$Platform::initialize();
		MidiInDeviceProvider::enabled = $Platform::isMidiIOEnabled();
	}
}

MidiInDeviceProvider::MidiInDeviceProvider() {
}

$Class* MidiInDeviceProvider::load$($String* name, bool initialize) {
	$loadClass(MidiInDeviceProvider, name, initialize, &_MidiInDeviceProvider_ClassInfo_, clinit$MidiInDeviceProvider, allocate$MidiInDeviceProvider);
	return class$;
}

$Class* MidiInDeviceProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com