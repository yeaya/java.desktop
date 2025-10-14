#include <com/sun/media/sound/SoftAudioProcessor.h>

#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SoftAudioBuffer = ::com::sun::media::sound::SoftAudioBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftAudioProcessor_MethodInfo_[] = {
	{"globalParameterControlChange", "([IJJ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"init", "(FF)V", nullptr, $PUBLIC | $ABSTRACT},
	{"processAudio", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"processControlLogic", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setInput", "(ILcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMixMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOutput", "(ILcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SoftAudioProcessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.SoftAudioProcessor",
	nullptr,
	nullptr,
	nullptr,
	_SoftAudioProcessor_MethodInfo_
};

$Object* allocate$SoftAudioProcessor($Class* clazz) {
	return $of($alloc(SoftAudioProcessor));
}

$Class* SoftAudioProcessor::load$($String* name, bool initialize) {
	$loadClass(SoftAudioProcessor, name, initialize, &_SoftAudioProcessor_ClassInfo_, allocate$SoftAudioProcessor);
	return class$;
}

$Class* SoftAudioProcessor::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com