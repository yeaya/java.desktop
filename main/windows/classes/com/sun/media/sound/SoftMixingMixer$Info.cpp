#include <com/sun/media/sound/SoftMixingMixer$Info.h>

#include <com/sun/media/sound/SoftMixingMixer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <jcpp.h>

using $SoftMixingMixer = ::com::sun::media::sound::SoftMixingMixer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftMixingMixer$Info_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SoftMixingMixer$Info::*)()>(&SoftMixingMixer$Info::init$))},
	{}
};

$InnerClassInfo _SoftMixingMixer$Info_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingMixer$Info", "com.sun.media.sound.SoftMixingMixer", "Info", $PRIVATE | $STATIC},
	{"javax.sound.sampled.Mixer$Info", "javax.sound.sampled.Mixer", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SoftMixingMixer$Info_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftMixingMixer$Info",
	"javax.sound.sampled.Mixer$Info",
	nullptr,
	nullptr,
	_SoftMixingMixer$Info_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingMixer$Info_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingMixer"
};

$Object* allocate$SoftMixingMixer$Info($Class* clazz) {
	return $of($alloc(SoftMixingMixer$Info));
}

void SoftMixingMixer$Info::init$() {
	$Mixer$Info::init$("Gervill Sound Mixer"_s, "OpenJDK Proposal"_s, "Software Sound Mixer"_s, "1.0"_s);
}

SoftMixingMixer$Info::SoftMixingMixer$Info() {
}

$Class* SoftMixingMixer$Info::load$($String* name, bool initialize) {
	$loadClass(SoftMixingMixer$Info, name, initialize, &_SoftMixingMixer$Info_ClassInfo_, allocate$SoftMixingMixer$Info);
	return class$;
}

$Class* SoftMixingMixer$Info::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com