#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion8U.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
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

$MethodInfo _AudioFloatConverter$AudioFloatConversion8U_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion8U::*)()>(&AudioFloatConverter$AudioFloatConversion8U::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion8U_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion8U", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion8U", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion8U_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion8U",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion8U_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion8U_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion8U($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion8U));
}

void AudioFloatConverter$AudioFloatConversion8U::init$() {
	$AudioFloatConverter::init$();
}

$floats* AudioFloatConverter$AudioFloatConversion8U::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		int8_t x = (int8_t)($nc(in_buff)->get(ix++) - 128);
		$nc(out_buff)->set(ox++, x > 0 ? x / 127.0f : x / 128.0f);
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion8U::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		float x = $nc(in_buff)->get(ix++);
		$nc(out_buff)->set(ox++, $cast(int8_t, (128 + (x > 0 ? x * 127 : x * 128))));
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion8U::AudioFloatConverter$AudioFloatConversion8U() {
}

$Class* AudioFloatConverter$AudioFloatConversion8U::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion8U, name, initialize, &_AudioFloatConverter$AudioFloatConversion8U_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion8U);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion8U::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com