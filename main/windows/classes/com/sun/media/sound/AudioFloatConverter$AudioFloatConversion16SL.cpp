#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion16SL.h>

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

$MethodInfo _AudioFloatConverter$AudioFloatConversion16SL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion16SL::*)()>(&AudioFloatConverter$AudioFloatConversion16SL::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion16SL_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16SL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion16SL", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion16SL_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16SL",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion16SL_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion16SL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion16SL($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion16SL));
}

void AudioFloatConverter$AudioFloatConversion16SL::init$() {
	$AudioFloatConverter::init$();
}

$floats* AudioFloatConverter$AudioFloatConversion16SL::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t len = out_offset + out_len;
	for (int32_t ox = out_offset; ox < len; ++ox) {
		int32_t var$0 = (int32_t)($nc(in_buff)->get(ix++) & (uint32_t)255);
		int16_t x = (int16_t)(var$0 | (in_buff->get(ix++) << 8));
		$nc(out_buff)->set(ox, x > 0 ? x / 32767.0f : x / 32768.0f);
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion16SL::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ox = out_offset;
	int32_t len = in_offset + in_len;
	for (int32_t ix = in_offset; ix < len; ++ix) {
		float f = $nc(in_buff)->get(ix);
		int16_t x = $cast(int16_t, (f > 0 ? f * 32767 : f * 32768));
		$nc(out_buff)->set(ox++, (int8_t)x);
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion16SL::AudioFloatConverter$AudioFloatConversion16SL() {
}

$Class* AudioFloatConverter$AudioFloatConversion16SL::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion16SL, name, initialize, &_AudioFloatConverter$AudioFloatConversion16SL_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion16SL);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion16SL::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com