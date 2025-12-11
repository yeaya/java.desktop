#include <com/sun/media/sound/MidiOutDeviceProvider.h>

#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider.h>
#include <com/sun/media/sound/MidiOutDevice.h>
#include <com/sun/media/sound/MidiOutDeviceProvider$MidiOutDeviceInfo.h>
#include <com/sun/media/sound/Platform.h>
#include <javax/sound/midi/MidiDevice.h>
#include <jcpp.h>

using $AbstractMidiDeviceProvider$InfoArray = $Array<::com::sun::media::sound::AbstractMidiDeviceProvider$Info>;
using $MidiDeviceArray = $Array<::javax::sound::midi::MidiDevice>;
using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $AbstractMidiDeviceProvider = ::com::sun::media::sound::AbstractMidiDeviceProvider;
using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $MidiOutDevice = ::com::sun::media::sound::MidiOutDevice;
using $MidiOutDeviceProvider$MidiOutDeviceInfo = ::com::sun::media::sound::MidiOutDeviceProvider$MidiOutDeviceInfo;
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

$FieldInfo _MidiOutDeviceProvider_FieldInfo_[] = {
	{"infos", "[Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, $PRIVATE | $STATIC, $staticField(MidiOutDeviceProvider, infos)},
	{"devices", "[Ljavax/sound/midi/MidiDevice;", nullptr, $PRIVATE | $STATIC, $staticField(MidiOutDeviceProvider, devices)},
	{"enabled", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MidiOutDeviceProvider, enabled)},
	{}
};

$MethodInfo _MidiOutDeviceProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MidiOutDeviceProvider::*)()>(&MidiOutDeviceProvider::init$))},
	{"createDevice", "(Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)Ljavax/sound/midi/MidiDevice;", nullptr, 0},
	{"createInfo", "(I)Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, 0},
	{"getDeviceCache", "()[Ljavax/sound/midi/MidiDevice;", nullptr, 0},
	{"getInfoCache", "()[Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, 0},
	{"getNumDevices", "()I", nullptr, 0},
	{"nGetDescription", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&MidiOutDeviceProvider::nGetDescription))},
	{"nGetName", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&MidiOutDeviceProvider::nGetName))},
	{"nGetNumDevices", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&MidiOutDeviceProvider::nGetNumDevices))},
	{"nGetVendor", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&MidiOutDeviceProvider::nGetVendor))},
	{"nGetVersion", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&MidiOutDeviceProvider::nGetVersion))},
	{"setDeviceCache", "([Ljavax/sound/midi/MidiDevice;)V", nullptr, 0},
	{"setInfoCache", "([Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)V", nullptr, 0},
	{}
};

#define _METHOD_INDEX_nGetDescription 6
#define _METHOD_INDEX_nGetName 7
#define _METHOD_INDEX_nGetNumDevices 8
#define _METHOD_INDEX_nGetVendor 9
#define _METHOD_INDEX_nGetVersion 10

$InnerClassInfo _MidiOutDeviceProvider_InnerClassesInfo_[] = {
	{"com.sun.media.sound.MidiOutDeviceProvider$MidiOutDeviceInfo", "com.sun.media.sound.MidiOutDeviceProvider", "MidiOutDeviceInfo", $STATIC | $FINAL},
	{}
};

$ClassInfo _MidiOutDeviceProvider_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.MidiOutDeviceProvider",
	"com.sun.media.sound.AbstractMidiDeviceProvider",
	nullptr,
	_MidiOutDeviceProvider_FieldInfo_,
	_MidiOutDeviceProvider_MethodInfo_,
	nullptr,
	nullptr,
	_MidiOutDeviceProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.MidiOutDeviceProvider$MidiOutDeviceInfo"
};

$Object* allocate$MidiOutDeviceProvider($Class* clazz) {
	return $of($alloc(MidiOutDeviceProvider));
}

$AbstractMidiDeviceProvider$InfoArray* MidiOutDeviceProvider::infos = nullptr;
$MidiDeviceArray* MidiOutDeviceProvider::devices = nullptr;
bool MidiOutDeviceProvider::enabled = false;

void MidiOutDeviceProvider::init$() {
	$AbstractMidiDeviceProvider::init$();
}

$AbstractMidiDeviceProvider$Info* MidiOutDeviceProvider::createInfo(int32_t index) {
	if (!MidiOutDeviceProvider::enabled) {
		return nullptr;
	}
	return $new($MidiOutDeviceProvider$MidiOutDeviceInfo, index, MidiOutDeviceProvider::class$);
}

$MidiDevice* MidiOutDeviceProvider::createDevice($AbstractMidiDeviceProvider$Info* info) {
	if (MidiOutDeviceProvider::enabled && ($instanceOf($MidiOutDeviceProvider$MidiOutDeviceInfo, info))) {
		return $new($MidiOutDevice, info);
	}
	return nullptr;
}

int32_t MidiOutDeviceProvider::getNumDevices() {
	if (!MidiOutDeviceProvider::enabled) {
		return 0;
	}
	return nGetNumDevices();
}

$MidiDeviceArray* MidiOutDeviceProvider::getDeviceCache() {
	return MidiOutDeviceProvider::devices;
}

void MidiOutDeviceProvider::setDeviceCache($MidiDeviceArray* devices) {
	$assignStatic(MidiOutDeviceProvider::devices, devices);
}

$AbstractMidiDeviceProvider$InfoArray* MidiOutDeviceProvider::getInfoCache() {
	return MidiOutDeviceProvider::infos;
}

void MidiOutDeviceProvider::setInfoCache($AbstractMidiDeviceProvider$InfoArray* infos) {
	$assignStatic(MidiOutDeviceProvider::infos, infos);
}

int32_t MidiOutDeviceProvider::nGetNumDevices() {
	$init(MidiOutDeviceProvider);
	int32_t $ret = 0;
	$prepareNativeStatic(MidiOutDeviceProvider, nGetNumDevices, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$String* MidiOutDeviceProvider::nGetName(int32_t index) {
	$init(MidiOutDeviceProvider);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(MidiOutDeviceProvider, nGetName, $String*, int32_t index);
	$assign($ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

$String* MidiOutDeviceProvider::nGetVendor(int32_t index) {
	$init(MidiOutDeviceProvider);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(MidiOutDeviceProvider, nGetVendor, $String*, int32_t index);
	$assign($ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

$String* MidiOutDeviceProvider::nGetDescription(int32_t index) {
	$init(MidiOutDeviceProvider);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(MidiOutDeviceProvider, nGetDescription, $String*, int32_t index);
	$assign($ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

$String* MidiOutDeviceProvider::nGetVersion(int32_t index) {
	$init(MidiOutDeviceProvider);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(MidiOutDeviceProvider, nGetVersion, $String*, int32_t index);
	$assign($ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

void clinit$MidiOutDeviceProvider($Class* class$) {
	$assignStatic(MidiOutDeviceProvider::infos, nullptr);
	$assignStatic(MidiOutDeviceProvider::devices, nullptr);
	{
		$Platform::initialize();
		MidiOutDeviceProvider::enabled = $Platform::isMidiIOEnabled();
	}
}

MidiOutDeviceProvider::MidiOutDeviceProvider() {
}

$Class* MidiOutDeviceProvider::load$($String* name, bool initialize) {
	$loadClass(MidiOutDeviceProvider, name, initialize, &_MidiOutDeviceProvider_ClassInfo_, clinit$MidiOutDeviceProvider, allocate$MidiOutDeviceProvider);
	return class$;
}

$Class* MidiOutDeviceProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com