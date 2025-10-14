#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion16SB.h>

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

$MethodInfo _AudioFloatConverter$AudioFloatConversion16SB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion16SB::*)()>(&AudioFloatConverter$AudioFloatConversion16SB::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion16SB_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16SB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion16SB", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion16SB_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16SB",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion16SB_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion16SB_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion16SB($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion16SB));
}

void AudioFloatConverter$AudioFloatConversion16SB::init$() {
	$AudioFloatConverter::init$();
}

$floats* AudioFloatConverter$AudioFloatConversion16SB::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		int32_t var$0 = ($nc(in_buff)->get(ix++) << 8);
		int16_t x = (int16_t)(var$0 | ((int32_t)(in_buff->get(ix++) & (uint32_t)255)));
		$nc(out_buff)->set(ox++, x > 0 ? x / 32767.0f : x / 32768.0f);
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion16SB::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		float f = $nc(in_buff)->get(ix++);
		int16_t x = $cast(int16_t, (f > 0 ? f * 32767.0f : f * 32768.0f));
		$nc(out_buff)->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
		out_buff->set(ox++, (int8_t)x);
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion16SB::AudioFloatConverter$AudioFloatConversion16SB() {
}

$Class* AudioFloatConverter$AudioFloatConversion16SB::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion16SB, name, initialize, &_AudioFloatConverter$AudioFloatConversion16SB_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion16SB);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion16SB::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com