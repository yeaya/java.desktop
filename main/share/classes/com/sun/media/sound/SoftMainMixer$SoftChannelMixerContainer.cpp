#include <com/sun/media/sound/SoftMainMixer$SoftChannelMixerContainer.h>

#include <com/sun/media/sound/ModelChannelMixer.h>
#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftMainMixer.h>
#include <jcpp.h>

using $SoftMainMixer = ::com::sun::media::sound::SoftMainMixer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMainMixer$SoftChannelMixerContainer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMainMixer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMainMixer$SoftChannelMixerContainer, this$0)},
	{"mixer", "Lcom/sun/media/sound/ModelChannelMixer;", nullptr, 0, $field(SoftMainMixer$SoftChannelMixerContainer, mixer)},
	{"buffers", "[Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, 0, $field(SoftMainMixer$SoftChannelMixerContainer, buffers)},
	{}
};

$MethodInfo _SoftMainMixer$SoftChannelMixerContainer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMainMixer;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftMainMixer$SoftChannelMixerContainer::*)($SoftMainMixer*)>(&SoftMainMixer$SoftChannelMixerContainer::init$))},
	{}
};

$InnerClassInfo _SoftMainMixer$SoftChannelMixerContainer_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMainMixer$SoftChannelMixerContainer", "com.sun.media.sound.SoftMainMixer", "SoftChannelMixerContainer", $PRIVATE},
	{}
};

$ClassInfo _SoftMainMixer$SoftChannelMixerContainer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftMainMixer$SoftChannelMixerContainer",
	"java.lang.Object",
	nullptr,
	_SoftMainMixer$SoftChannelMixerContainer_FieldInfo_,
	_SoftMainMixer$SoftChannelMixerContainer_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMainMixer$SoftChannelMixerContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMainMixer"
};

$Object* allocate$SoftMainMixer$SoftChannelMixerContainer($Class* clazz) {
	return $of($alloc(SoftMainMixer$SoftChannelMixerContainer));
}

void SoftMainMixer$SoftChannelMixerContainer::init$($SoftMainMixer* this$0) {
	$set(this, this$0, this$0);
}

SoftMainMixer$SoftChannelMixerContainer::SoftMainMixer$SoftChannelMixerContainer() {
}

$Class* SoftMainMixer$SoftChannelMixerContainer::load$($String* name, bool initialize) {
	$loadClass(SoftMainMixer$SoftChannelMixerContainer, name, initialize, &_SoftMainMixer$SoftChannelMixerContainer_ClassInfo_, allocate$SoftMainMixer$SoftChannelMixerContainer);
	return class$;
}

$Class* SoftMainMixer$SoftChannelMixerContainer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com