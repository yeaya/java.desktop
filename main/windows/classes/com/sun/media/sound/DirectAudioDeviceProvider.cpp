#include <com/sun/media/sound/DirectAudioDeviceProvider.h>

#include <com/sun/media/sound/AbstractMixer.h>
#include <com/sun/media/sound/DirectAudioDevice.h>
#include <com/sun/media/sound/DirectAudioDeviceProvider$DirectAudioDeviceInfo.h>
#include <com/sun/media/sound/Platform.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/Mixer.h>
#include <javax/sound/sampled/spi/MixerProvider.h>
#include <jcpp.h>

using $DirectAudioDeviceArray = $Array<::com::sun::media::sound::DirectAudioDevice>;
using $DirectAudioDeviceProvider$DirectAudioDeviceInfoArray = $Array<::com::sun::media::sound::DirectAudioDeviceProvider$DirectAudioDeviceInfo>;
using $Line$InfoArray = $Array<::javax::sound::sampled::Line$Info>;
using $Mixer$InfoArray = $Array<::javax::sound::sampled::Mixer$Info>;
using $AbstractMixer = ::com::sun::media::sound::AbstractMixer;
using $DirectAudioDevice = ::com::sun::media::sound::DirectAudioDevice;
using $DirectAudioDeviceProvider$DirectAudioDeviceInfo = ::com::sun::media::sound::DirectAudioDeviceProvider$DirectAudioDeviceInfo;
using $Platform = ::com::sun::media::sound::Platform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mixer = ::javax::sound::sampled::Mixer;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;
using $MixerProvider = ::javax::sound::sampled::spi::MixerProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DirectAudioDeviceProvider_FieldInfo_[] = {
	{"infos", "[Lcom/sun/media/sound/DirectAudioDeviceProvider$DirectAudioDeviceInfo;", nullptr, $PRIVATE | $STATIC, $staticField(DirectAudioDeviceProvider, infos)},
	{"devices", "[Lcom/sun/media/sound/DirectAudioDevice;", nullptr, $PRIVATE | $STATIC, $staticField(DirectAudioDeviceProvider, devices)},
	{}
};

$MethodInfo _DirectAudioDeviceProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DirectAudioDeviceProvider::*)()>(&DirectAudioDeviceProvider::init$))},
	{"getDevice", "(Lcom/sun/media/sound/DirectAudioDeviceProvider$DirectAudioDeviceInfo;)Ljavax/sound/sampled/Mixer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Mixer*(*)($DirectAudioDeviceProvider$DirectAudioDeviceInfo*)>(&DirectAudioDeviceProvider::getDevice))},
	{"getMixer", "(Ljavax/sound/sampled/Mixer$Info;)Ljavax/sound/sampled/Mixer;", nullptr, $PUBLIC},
	{"getMixerInfo", "()[Ljavax/sound/sampled/Mixer$Info;", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&DirectAudioDeviceProvider::init))},
	{"nGetNumDevices", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&DirectAudioDeviceProvider::nGetNumDevices))},
	{"nNewDirectAudioDeviceInfo", "(I)Lcom/sun/media/sound/DirectAudioDeviceProvider$DirectAudioDeviceInfo;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$DirectAudioDeviceProvider$DirectAudioDeviceInfo*(*)(int32_t)>(&DirectAudioDeviceProvider::nNewDirectAudioDeviceInfo))},
	{}
};

#define _METHOD_INDEX_nGetNumDevices 5
#define _METHOD_INDEX_nNewDirectAudioDeviceInfo 6

$InnerClassInfo _DirectAudioDeviceProvider_InnerClassesInfo_[] = {
	{"com.sun.media.sound.DirectAudioDeviceProvider$DirectAudioDeviceInfo", "com.sun.media.sound.DirectAudioDeviceProvider", "DirectAudioDeviceInfo", $STATIC | $FINAL},
	{}
};

$ClassInfo _DirectAudioDeviceProvider_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DirectAudioDeviceProvider",
	"javax.sound.sampled.spi.MixerProvider",
	nullptr,
	_DirectAudioDeviceProvider_FieldInfo_,
	_DirectAudioDeviceProvider_MethodInfo_,
	nullptr,
	nullptr,
	_DirectAudioDeviceProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.DirectAudioDeviceProvider$DirectAudioDeviceInfo"
};

$Object* allocate$DirectAudioDeviceProvider($Class* clazz) {
	return $of($alloc(DirectAudioDeviceProvider));
}


$DirectAudioDeviceProvider$DirectAudioDeviceInfoArray* DirectAudioDeviceProvider::infos = nullptr;

$DirectAudioDeviceArray* DirectAudioDeviceProvider::devices = nullptr;

void DirectAudioDeviceProvider::init$() {
	$MixerProvider::init$();
	$synchronized(DirectAudioDeviceProvider::class$) {
		if ($Platform::isDirectAudioEnabled()) {
			init();
		} else {
			$assignStatic(DirectAudioDeviceProvider::infos, $new($DirectAudioDeviceProvider$DirectAudioDeviceInfoArray, 0));
			$assignStatic(DirectAudioDeviceProvider::devices, $new($DirectAudioDeviceArray, 0));
		}
	}
}

void DirectAudioDeviceProvider::init() {
	$init(DirectAudioDeviceProvider);
	$useLocalCurrentObjectStackCache();
	int32_t numDevices = nGetNumDevices();
	if (DirectAudioDeviceProvider::infos == nullptr || $nc(DirectAudioDeviceProvider::infos)->length != numDevices) {
		$assignStatic(DirectAudioDeviceProvider::infos, $new($DirectAudioDeviceProvider$DirectAudioDeviceInfoArray, numDevices));
		$assignStatic(DirectAudioDeviceProvider::devices, $new($DirectAudioDeviceArray, numDevices));
		for (int32_t i = 0; i < $nc(DirectAudioDeviceProvider::infos)->length; ++i) {
			$nc(DirectAudioDeviceProvider::infos)->set(i, $(nNewDirectAudioDeviceInfo(i)));
		}
	}
}

$Mixer$InfoArray* DirectAudioDeviceProvider::getMixerInfo() {
	$synchronized(DirectAudioDeviceProvider::class$) {
		$var($Mixer$InfoArray, localArray, $new($Mixer$InfoArray, $nc(DirectAudioDeviceProvider::infos)->length));
		$System::arraycopy(DirectAudioDeviceProvider::infos, 0, localArray, 0, $nc(DirectAudioDeviceProvider::infos)->length);
		return localArray;
	}
}

$Mixer* DirectAudioDeviceProvider::getMixer($Mixer$Info* info) {
	$useLocalCurrentObjectStackCache();
	$synchronized(DirectAudioDeviceProvider::class$) {
		if (info == nullptr) {
			for (int32_t i = 0; i < $nc(DirectAudioDeviceProvider::infos)->length; ++i) {
				$var($Mixer, mixer, getDevice($nc(DirectAudioDeviceProvider::infos)->get(i)));
				if ($nc($($nc(mixer)->getSourceLineInfo()))->length > 0) {
					return mixer;
				}
			}
		}
		for (int32_t i = 0; i < $nc(DirectAudioDeviceProvider::infos)->length; ++i) {
			if ($nc($nc(DirectAudioDeviceProvider::infos)->get(i))->equals(info)) {
				return getDevice($nc(DirectAudioDeviceProvider::infos)->get(i));
			}
		}
	}
	$throwNew($IllegalArgumentException, $($String::format("Mixer %s not supported by this provider"_s, $$new($ObjectArray, {$of(info)}))));
}

$Mixer* DirectAudioDeviceProvider::getDevice($DirectAudioDeviceProvider$DirectAudioDeviceInfo* info) {
	$init(DirectAudioDeviceProvider);
	int32_t index = $nc(info)->getIndex();
	if ($nc(DirectAudioDeviceProvider::devices)->get(index) == nullptr) {
		$nc(DirectAudioDeviceProvider::devices)->set(index, $$new($DirectAudioDevice, info));
	}
	return $nc(DirectAudioDeviceProvider::devices)->get(index);
}

int32_t DirectAudioDeviceProvider::nGetNumDevices() {
	$init(DirectAudioDeviceProvider);
	int32_t $ret = 0;
	$prepareNativeStatic(DirectAudioDeviceProvider, nGetNumDevices, int32_t);
	$ret = $invokeNativeStatic(DirectAudioDeviceProvider, nGetNumDevices);
	$finishNativeStatic();
	return $ret;
}

$DirectAudioDeviceProvider$DirectAudioDeviceInfo* DirectAudioDeviceProvider::nNewDirectAudioDeviceInfo(int32_t deviceIndex) {
	$init(DirectAudioDeviceProvider);
	$var($DirectAudioDeviceProvider$DirectAudioDeviceInfo, $ret, nullptr);
	$prepareNativeStatic(DirectAudioDeviceProvider, nNewDirectAudioDeviceInfo, $DirectAudioDeviceProvider$DirectAudioDeviceInfo*, int32_t deviceIndex);
	$assign($ret, $invokeNativeStatic(DirectAudioDeviceProvider, nNewDirectAudioDeviceInfo, deviceIndex));
	$finishNativeStatic();
	return $ret;
}

void clinit$DirectAudioDeviceProvider($Class* class$) {
	{
		$Platform::initialize();
	}
}

DirectAudioDeviceProvider::DirectAudioDeviceProvider() {
}

$Class* DirectAudioDeviceProvider::load$($String* name, bool initialize) {
	$loadClass(DirectAudioDeviceProvider, name, initialize, &_DirectAudioDeviceProvider_ClassInfo_, clinit$DirectAudioDeviceProvider, allocate$DirectAudioDeviceProvider);
	return class$;
}

$Class* DirectAudioDeviceProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com