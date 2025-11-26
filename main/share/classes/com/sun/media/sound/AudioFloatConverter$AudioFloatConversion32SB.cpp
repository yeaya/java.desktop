#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32SB.h>

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

$MethodInfo _AudioFloatConverter$AudioFloatConversion32SB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion32SB::*)()>(&AudioFloatConverter$AudioFloatConversion32SB::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion32SB_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32SB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32SB", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion32SB_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32SB",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion32SB_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion32SB_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion32SB($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion32SB));
}

void AudioFloatConverter$AudioFloatConversion32SB::init$() {
	$AudioFloatConverter::init$();
}

$floats* AudioFloatConverter$AudioFloatConversion32SB::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		int32_t var$2 = (((int32_t)($nc(in_buff)->get(ix++) & (uint32_t)255)) << 24);
		int32_t var$1 = var$2 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 16);
		int32_t var$0 = var$1 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 8);
		int32_t x = var$0 | ((int32_t)(in_buff->get(ix++) & (uint32_t)255));
		$nc(out_buff)->set(ox++, x * ($div(1.0f, (float)0x7FFFFFFF)));
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion32SB::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		int32_t x = $cast(int32_t, ($nc(in_buff)->get(ix++) * (float)0x7FFFFFFF));
		$nc(out_buff)->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 24)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 16)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
		out_buff->set(ox++, (int8_t)x);
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion32SB::AudioFloatConverter$AudioFloatConversion32SB() {
}

$Class* AudioFloatConverter$AudioFloatConversion32SB::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion32SB, name, initialize, &_AudioFloatConverter$AudioFloatConversion32SB_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion32SB);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion32SB::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com