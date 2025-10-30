#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32xUB.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <jcpp.h>

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AudioFloatConverter$AudioFloatConversion32xUB_FieldInfo_[] = {
	{"xbytes", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatConverter$AudioFloatConversion32xUB, xbytes)},
	{}
};

$MethodInfo _AudioFloatConverter$AudioFloatConversion32xUB_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion32xUB::*)(int32_t)>(&AudioFloatConverter$AudioFloatConversion32xUB::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion32xUB_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xUB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32xUB", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion32xUB_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xUB",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	_AudioFloatConverter$AudioFloatConversion32xUB_FieldInfo_,
	_AudioFloatConverter$AudioFloatConversion32xUB_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion32xUB_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion32xUB($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion32xUB));
}

void AudioFloatConverter$AudioFloatConversion32xUB::init$(int32_t xbytes) {
	$AudioFloatConverter::init$();
	this->xbytes = xbytes;
}

$floats* AudioFloatConverter$AudioFloatConversion32xUB::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		int32_t var$2 = (((int32_t)($nc(in_buff)->get(ix++) & (uint32_t)255)) << 24);
		int32_t var$1 = var$2 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 16);
		int32_t var$0 = var$1 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 8);
		int32_t x = var$0 | ((int32_t)(in_buff->get(ix++) & (uint32_t)255));
		ix += this->xbytes;
		x -= (int32_t)0x80000000;
		$nc(out_buff)->set(ox++, x * (1.0f / 2.14748365E9f));
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion32xUB::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		int32_t x = $cast(int32_t, ($nc(in_buff)->get(ix++) * 2.14748365E9f));
		x += (int32_t)0x80000000;
		$nc(out_buff)->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 24)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 16)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
		out_buff->set(ox++, (int8_t)x);
		for (int32_t j = 0; j < this->xbytes; ++j) {
			out_buff->set(ox++, (int8_t)0);
		}
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion32xUB::AudioFloatConverter$AudioFloatConversion32xUB() {
}

$Class* AudioFloatConverter$AudioFloatConversion32xUB::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion32xUB, name, initialize, &_AudioFloatConverter$AudioFloatConversion32xUB_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion32xUB);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion32xUB::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com