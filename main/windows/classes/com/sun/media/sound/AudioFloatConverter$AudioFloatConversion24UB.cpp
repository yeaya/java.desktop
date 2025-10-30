#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion24UB.h>

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

$MethodInfo _AudioFloatConverter$AudioFloatConversion24UB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion24UB::*)()>(&AudioFloatConverter$AudioFloatConversion24UB::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion24UB_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion24UB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion24UB", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion24UB_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion24UB",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion24UB_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion24UB_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion24UB($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion24UB));
}

void AudioFloatConverter$AudioFloatConversion24UB::init$() {
	$AudioFloatConverter::init$();
}

$floats* AudioFloatConverter$AudioFloatConversion24UB::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		int32_t var$1 = (((int32_t)($nc(in_buff)->get(ix++) & (uint32_t)255)) << 16);
		int32_t var$0 = var$1 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 8);
		int32_t x = var$0 | ((int32_t)(in_buff->get(ix++) & (uint32_t)255));
		x -= 0x00800000;
		$nc(out_buff)->set(ox++, x > 0 ? x / 8388607.0f : x / 8388608.0f);
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion24UB::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		float f = $nc(in_buff)->get(ix++);
		int32_t x = $cast(int32_t, (f > 0 ? f * 8388607.0f : f * 8388608.0f));
		x += 0x00800000;
		$nc(out_buff)->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 16)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
		out_buff->set(ox++, (int8_t)x);
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion24UB::AudioFloatConverter$AudioFloatConversion24UB() {
}

$Class* AudioFloatConverter$AudioFloatConversion24UB::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion24UB, name, initialize, &_AudioFloatConverter$AudioFloatConversion24UB_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion24UB);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion24UB::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com