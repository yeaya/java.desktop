#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32xSL.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _AudioFloatConverter$AudioFloatConversion32xSL_FieldInfo_[] = {
	{"xbytes", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatConverter$AudioFloatConversion32xSL, xbytes)},
	{}
};

$MethodInfo _AudioFloatConverter$AudioFloatConversion32xSL_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion32xSL::*)(int32_t)>(&AudioFloatConverter$AudioFloatConversion32xSL::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion32xSL_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xSL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32xSL", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion32xSL_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xSL",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	_AudioFloatConverter$AudioFloatConversion32xSL_FieldInfo_,
	_AudioFloatConverter$AudioFloatConversion32xSL_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion32xSL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion32xSL($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion32xSL));
}

void AudioFloatConverter$AudioFloatConversion32xSL::init$(int32_t xbytes) {
	$AudioFloatConverter::init$();
	this->xbytes = xbytes;
}

$floats* AudioFloatConverter$AudioFloatConversion32xSL::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < out_len; ++i) {
		ix += this->xbytes;
		int32_t var$2 = ((int32_t)($nc(in_buff)->get(ix++) & (uint32_t)255));
		int32_t var$1 = var$2 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 8);
		int32_t var$0 = var$1 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 16);
		int32_t x = var$0 | (((int32_t)(in_buff->get(ix++) & (uint32_t)255)) << 24);
		$nc(out_buff)->set(ox++, x * ($div(1.0f, (float)0x7FFFFFFF)));
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion32xSL::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t ix = in_offset;
	int32_t ox = out_offset;
	for (int32_t i = 0; i < in_len; ++i) {
		int32_t x = $cast(int32_t, ($nc(in_buff)->get(ix++) * (float)0x7FFFFFFF));
		for (int32_t j = 0; j < this->xbytes; ++j) {
			$nc(out_buff)->set(ox++, (int8_t)0);
		}
		$nc(out_buff)->set(ox++, (int8_t)x);
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 8)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 16)));
		out_buff->set(ox++, (int8_t)((int32_t)((uint32_t)x >> 24)));
	}
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion32xSL::AudioFloatConverter$AudioFloatConversion32xSL() {
}

$Class* AudioFloatConverter$AudioFloatConversion32xSL::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion32xSL, name, initialize, &_AudioFloatConverter$AudioFloatConversion32xSL_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion32xSL);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion32xSL::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com