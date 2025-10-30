#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32UL.h>

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

$MethodInfo _AudioFloatConverter$AudioFloatConversion32UL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion32UL::*)()>(&AudioFloatConverter$AudioFloatConversion32UL::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion32UL_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32UL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32UL", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion32UL_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32UL",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion32UL_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion32UL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion32UL($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion32UL));
}

void AudioFloatConverter$AudioFloatConversion32UL::init$() {
	$AudioFloatConverter::init$();
}

$floats* AudioFloatConverter$AudioFloatConversion32UL::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		int32_t var$2 = ((int32_t)($nc(in_buff)->get(ix++) & (uint32_t)255));
		int32_t var$1 = var$2 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 8);
		int32_t var$0 = var$1 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 16);
		int32_t x = var$0 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 24);
		x -= (int32_t)0x80000000;
		$nc(out_buff)->set(ox++, x * ($div(1.0f, (float)0x7FFFFFFF)));
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion32UL::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		int32_t x = $cast(int32_t, ($nc(in_buff)->get(ix++) * (float)0x7FFFFFFF));
		x += (int32_t)0x80000000;
		$nc(out_buff)->set(ox++, (int8_t)x);
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 16)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 24)));
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion32UL::AudioFloatConverter$AudioFloatConversion32UL() {
}

$Class* AudioFloatConverter$AudioFloatConversion32UL::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion32UL, name, initialize, &_AudioFloatConverter$AudioFloatConversion32UL_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion32UL);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion32UL::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com