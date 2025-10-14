#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion8S.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _AudioFloatConverter$AudioFloatConversion8S_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion8S::*)()>(&AudioFloatConverter$AudioFloatConversion8S::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion8S_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion8S", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion8S", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion8S_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion8S",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion8S_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion8S_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion8S($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion8S));
}

void AudioFloatConverter$AudioFloatConversion8S::init$() {
	$AudioFloatConverter::init$();
}

$floats* AudioFloatConverter$AudioFloatConversion8S::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		int8_t x = $nc(in_buff)->get(ix++);
		$nc(out_buff)->set(ox++, x > 0 ? x / 127.0f : x / 128.0f);
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion8S::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		float x = $nc(in_buff)->get(ix++);
		$nc(out_buff)->set(ox++, $cast(int8_t, (x > 0 ? x * 127 : x * 128)));
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion8S::AudioFloatConverter$AudioFloatConversion8S() {
}

$Class* AudioFloatConverter$AudioFloatConversion8S::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion8S, name, initialize, &_AudioFloatConverter$AudioFloatConversion8S_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion8S);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion8S::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com