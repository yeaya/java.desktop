#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32UB.h>

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

$MethodInfo _AudioFloatConverter$AudioFloatConversion32UB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion32UB::*)()>(&AudioFloatConverter$AudioFloatConversion32UB::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion32UB_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32UB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32UB", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion32UB_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32UB",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion32UB_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion32UB_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion32UB($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion32UB));
}

void AudioFloatConverter$AudioFloatConversion32UB::init$() {
	$AudioFloatConverter::init$();
}

$floats* AudioFloatConverter$AudioFloatConversion32UB::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		int32_t var$2 = (((int32_t)($nc(in_buff)->get(ix++) & (uint32_t)255)) << 24);
		int32_t var$1 = var$2 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 16);
		int32_t var$0 = var$1 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 8);
		int32_t x = var$0 | ((int32_t)(in_buff->get(ix++) & (uint32_t)255));
		x -= (int32_t)0x80000000;
		$nc(out_buff)->set(ox++, x * ($div(1.0f, (float)0x7FFFFFFF)));
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion32UB::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		int32_t x = $cast(int32_t, ($nc(in_buff)->get(ix++) * (float)0x7FFFFFFF));
		x += (int32_t)0x80000000;
		$nc(out_buff)->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 24)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 16)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
		out_buff->set(ox++, (int8_t)x);
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion32UB::AudioFloatConverter$AudioFloatConversion32UB() {
}

$Class* AudioFloatConverter$AudioFloatConversion32UB::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion32UB, name, initialize, &_AudioFloatConverter$AudioFloatConversion32UB_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion32UB);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion32UB::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com