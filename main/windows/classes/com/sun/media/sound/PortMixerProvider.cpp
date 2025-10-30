#include <com/sun/media/sound/PortMixerProvider.h>

#include <com/sun/media/sound/AbstractMixer.h>
#include <com/sun/media/sound/Platform.h>
#include <com/sun/media/sound/PortMixer.h>
#include <com/sun/media/sound/PortMixerProvider$PortMixerInfo.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/Mixer.h>
#include <javax/sound/sampled/spi/MixerProvider.h>
#include <jcpp.h>

using $PortMixerArray = $Array<::com::sun::media::sound::PortMixer>;
using $PortMixerProvider$PortMixerInfoArray = $Array<::com::sun::media::sound::PortMixerProvider$PortMixerInfo>;
using $Mixer$InfoArray = $Array<::javax::sound::sampled::Mixer$Info>;
using $AbstractMixer = ::com::sun::media::sound::AbstractMixer;
using $Platform = ::com::sun::media::sound::Platform;
using $PortMixer = ::com::sun::media::sound::PortMixer;
using $PortMixerProvider$PortMixerInfo = ::com::sun::media::sound::PortMixerProvider$PortMixerInfo;
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

$FieldInfo _PortMixerProvider_FieldInfo_[] = {
	{"infos", "[Lcom/sun/media/sound/PortMixerProvider$PortMixerInfo;", nullptr, $PRIVATE | $STATIC, $staticField(PortMixerProvider, infos)},
	{"devices", "[Lcom/sun/media/sound/PortMixer;", nullptr, $PRIVATE | $STATIC, $staticField(PortMixerProvider, devices)},
	{}
};

$MethodInfo _PortMixerProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PortMixerProvider::*)()>(&PortMixerProvider::init$))},
	{"getDevice", "(Lcom/sun/media/sound/PortMixerProvider$PortMixerInfo;)Ljavax/sound/sampled/Mixer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Mixer*(*)($PortMixerProvider$PortMixerInfo*)>(&PortMixerProvider::getDevice))},
	{"getMixer", "(Ljavax/sound/sampled/Mixer$Info;)Ljavax/sound/sampled/Mixer;", nullptr, $PUBLIC},
	{"getMixerInfo", "()[Ljavax/sound/sampled/Mixer$Info;", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&PortMixerProvider::init))},
	{"nGetNumDevices", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&PortMixerProvider::nGetNumDevices))},
	{"nNewPortMixerInfo", "(I)Lcom/sun/media/sound/PortMixerProvider$PortMixerInfo;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$PortMixerProvider$PortMixerInfo*(*)(int32_t)>(&PortMixerProvider::nNewPortMixerInfo))},
	{}
};

#define _METHOD_INDEX_nGetNumDevices 5
#define _METHOD_INDEX_nNewPortMixerInfo 6

$InnerClassInfo _PortMixerProvider_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PortMixerProvider$PortMixerInfo", "com.sun.media.sound.PortMixerProvider", "PortMixerInfo", $STATIC | $FINAL},
	{}
};

$ClassInfo _PortMixerProvider_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.PortMixerProvider",
	"javax.sound.sampled.spi.MixerProvider",
	nullptr,
	_PortMixerProvider_FieldInfo_,
	_PortMixerProvider_MethodInfo_,
	nullptr,
	nullptr,
	_PortMixerProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.PortMixerProvider$PortMixerInfo"
};

$Object* allocate$PortMixerProvider($Class* clazz) {
	return $of($alloc(PortMixerProvider));
}

$PortMixerProvider$PortMixerInfoArray* PortMixerProvider::infos = nullptr;
$PortMixerArray* PortMixerProvider::devices = nullptr;

void PortMixerProvider::init$() {
	$MixerProvider::init$();
	$synchronized(PortMixerProvider::class$) {
		if ($Platform::isPortsEnabled()) {
			init();
		} else {
			$assignStatic(PortMixerProvider::infos, $new($PortMixerProvider$PortMixerInfoArray, 0));
			$assignStatic(PortMixerProvider::devices, $new($PortMixerArray, 0));
		}
	}
}

void PortMixerProvider::init() {
	$init(PortMixerProvider);
	$useLocalCurrentObjectStackCache();
	int32_t numDevices = nGetNumDevices();
	if (PortMixerProvider::infos == nullptr || $nc(PortMixerProvider::infos)->length != numDevices) {
		$assignStatic(PortMixerProvider::infos, $new($PortMixerProvider$PortMixerInfoArray, numDevices));
		$assignStatic(PortMixerProvider::devices, $new($PortMixerArray, numDevices));
		for (int32_t i = 0; i < $nc(PortMixerProvider::infos)->length; ++i) {
			$nc(PortMixerProvider::infos)->set(i, $(nNewPortMixerInfo(i)));
		}
	}
}

$Mixer$InfoArray* PortMixerProvider::getMixerInfo() {
	$synchronized(PortMixerProvider::class$) {
		$var($Mixer$InfoArray, localArray, $new($Mixer$InfoArray, $nc(PortMixerProvider::infos)->length));
		$System::arraycopy(PortMixerProvider::infos, 0, localArray, 0, $nc(PortMixerProvider::infos)->length);
		return localArray;
	}
}

$Mixer* PortMixerProvider::getMixer($Mixer$Info* info) {
	$useLocalCurrentObjectStackCache();
	$synchronized(PortMixerProvider::class$) {
		for (int32_t i = 0; i < $nc(PortMixerProvider::infos)->length; ++i) {
			if ($nc($nc(PortMixerProvider::infos)->get(i))->equals(info)) {
				return getDevice($nc(PortMixerProvider::infos)->get(i));
			}
		}
	}
	$throwNew($IllegalArgumentException, $($String::format("Mixer %s not supported by this provider"_s, $$new($ObjectArray, {$of(info)}))));
}

$Mixer* PortMixerProvider::getDevice($PortMixerProvider$PortMixerInfo* info) {
	$init(PortMixerProvider);
	int32_t index = $nc(info)->getIndex();
	if ($nc(PortMixerProvider::devices)->get(index) == nullptr) {
		$nc(PortMixerProvider::devices)->set(index, $$new($PortMixer, info));
	}
	return $nc(PortMixerProvider::devices)->get(index);
}

int32_t PortMixerProvider::nGetNumDevices() {
	$init(PortMixerProvider);
	int32_t $ret = 0;
	$prepareNativeStatic(PortMixerProvider, nGetNumDevices, int32_t);
	$ret = $invokeNativeStatic(PortMixerProvider, nGetNumDevices);
	$finishNativeStatic();
	return $ret;
}

$PortMixerProvider$PortMixerInfo* PortMixerProvider::nNewPortMixerInfo(int32_t mixerIndex) {
	$init(PortMixerProvider);
	$var($PortMixerProvider$PortMixerInfo, $ret, nullptr);
	$prepareNativeStatic(PortMixerProvider, nNewPortMixerInfo, $PortMixerProvider$PortMixerInfo*, int32_t mixerIndex);
	$assign($ret, $invokeNativeStatic(PortMixerProvider, nNewPortMixerInfo, mixerIndex));
	$finishNativeStatic();
	return $ret;
}

void clinit$PortMixerProvider($Class* class$) {
	{
		$Platform::initialize();
	}
}

PortMixerProvider::PortMixerProvider() {
}

$Class* PortMixerProvider::load$($String* name, bool initialize) {
	$loadClass(PortMixerProvider, name, initialize, &_PortMixerProvider_ClassInfo_, clinit$PortMixerProvider, allocate$PortMixerProvider);
	return class$;
}

$Class* PortMixerProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com