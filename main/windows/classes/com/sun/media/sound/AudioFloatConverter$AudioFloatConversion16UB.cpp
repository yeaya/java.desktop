#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion16UB.h>

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

$MethodInfo _AudioFloatConverter$AudioFloatConversion16UB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion16UB::*)()>(&AudioFloatConverter$AudioFloatConversion16UB::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion16UB_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16UB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion16UB", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion16UB_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16UB",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion16UB_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion16UB_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion16UB($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion16UB));
}

void AudioFloatConverter$AudioFloatConversion16UB::init$() {
	$AudioFloatConverter::init$();
}

$floats* AudioFloatConverter$AudioFloatConversion16UB::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		int32_t var$0 = (((int32_t)($nc(in_buff)->get(ix++) & (uint32_t)255)) << 8);
		int32_t x = var$0 | ((int32_t)(in_buff->get(ix++) & (uint32_t)255));
		x -= 32768;
		$nc(out_buff)->set(ox++, x > 0 ? x / 32767.0f : x / 32768.0f);
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion16UB::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		float f = $nc(in_buff)->get(ix++);
		int32_t x = 32768 + $cast(int32_t, (f > 0 ? f * 32767 : f * 32768));
		$nc(out_buff)->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
		out_buff->set(ox++, (int8_t)x);
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion16UB::AudioFloatConverter$AudioFloatConversion16UB() {
}

$Class* AudioFloatConverter$AudioFloatConversion16UB::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion16UB, name, initialize, &_AudioFloatConverter$AudioFloatConversion16UB_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion16UB);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion16UB::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com