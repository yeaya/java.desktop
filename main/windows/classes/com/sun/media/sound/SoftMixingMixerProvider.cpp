#include <com/sun/media/sound/SoftMixingMixerProvider.h>

#include <com/sun/media/sound/SoftMixingMixer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/Mixer.h>
#include <javax/sound/sampled/spi/MixerProvider.h>
#include <jcpp.h>

using $Mixer$InfoArray = $Array<::javax::sound::sampled::Mixer$Info>;
using $SoftMixingMixer = ::com::sun::media::sound::SoftMixingMixer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mixer = ::javax::sound::sampled::Mixer;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;
using $MixerProvider = ::javax::sound::sampled::spi::MixerProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMixingMixerProvider_FieldInfo_[] = {
	{"globalmixer", "Lcom/sun/media/sound/SoftMixingMixer;", nullptr, $STATIC, $staticField(SoftMixingMixerProvider, globalmixer)},
	{"lockthread", "Ljava/lang/Thread;", nullptr, $STATIC, $staticField(SoftMixingMixerProvider, lockthread)},
	{"mutex", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(SoftMixingMixerProvider, mutex)},
	{}
};

$MethodInfo _SoftMixingMixerProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftMixingMixerProvider::*)()>(&SoftMixingMixerProvider::init$))},
	{"getMixer", "(Ljavax/sound/sampled/Mixer$Info;)Ljavax/sound/sampled/Mixer;", nullptr, $PUBLIC},
	{"getMixerInfo", "()[Ljavax/sound/sampled/Mixer$Info;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SoftMixingMixerProvider_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMixingMixerProvider",
	"javax.sound.sampled.spi.MixerProvider",
	nullptr,
	_SoftMixingMixerProvider_FieldInfo_,
	_SoftMixingMixerProvider_MethodInfo_
};

$Object* allocate$SoftMixingMixerProvider($Class* clazz) {
	return $of($alloc(SoftMixingMixerProvider));
}

$SoftMixingMixer* SoftMixingMixerProvider::globalmixer = nullptr;
$Thread* SoftMixingMixerProvider::lockthread = nullptr;
$Object* SoftMixingMixerProvider::mutex = nullptr;

void SoftMixingMixerProvider::init$() {
	$MixerProvider::init$();
}

$Mixer* SoftMixingMixerProvider::getMixer($Mixer$Info* info) {
	$init($SoftMixingMixer);
	if (!(info == nullptr || info == $SoftMixingMixer::info)) {
		$throwNew($IllegalArgumentException, $$str({"Mixer "_s, $($nc(info)->toString()), " not supported by this provider."_s}));
	}
	$synchronized(SoftMixingMixerProvider::mutex) {
		if (SoftMixingMixerProvider::lockthread != nullptr) {
			if ($Thread::currentThread() == SoftMixingMixerProvider::lockthread) {
				$throwNew($IllegalArgumentException, $$str({"Mixer "_s, $($nc(info)->toString()), " not supported by this provider."_s}));
			}
		}
		if (SoftMixingMixerProvider::globalmixer == nullptr) {
			$assignStatic(SoftMixingMixerProvider::globalmixer, $new($SoftMixingMixer));
		}
		return SoftMixingMixerProvider::globalmixer;
	}
}

$Mixer$InfoArray* SoftMixingMixerProvider::getMixerInfo() {
	$init($SoftMixingMixer);
	return $new($Mixer$InfoArray, {$SoftMixingMixer::info});
}

void clinit$SoftMixingMixerProvider($Class* class$) {
	$assignStatic(SoftMixingMixerProvider::globalmixer, nullptr);
	$assignStatic(SoftMixingMixerProvider::lockthread, nullptr);
	$assignStatic(SoftMixingMixerProvider::mutex, $new($Object));
}

SoftMixingMixerProvider::SoftMixingMixerProvider() {
}

$Class* SoftMixingMixerProvider::load$($String* name, bool initialize) {
	$loadClass(SoftMixingMixerProvider, name, initialize, &_SoftMixingMixerProvider_ClassInfo_, clinit$SoftMixingMixerProvider, allocate$SoftMixingMixerProvider);
	return class$;
}

$Class* SoftMixingMixerProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com