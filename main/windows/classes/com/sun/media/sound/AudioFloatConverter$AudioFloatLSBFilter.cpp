#include <com/sun/media/sound/AudioFloatConverter$AudioFloatLSBFilter.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AudioFloatConverter$AudioFloatLSBFilter_FieldInfo_[] = {
	{"converter", "Lcom/sun/media/sound/AudioFloatConverter;", nullptr, $PRIVATE | $FINAL, $field(AudioFloatConverter$AudioFloatLSBFilter, converter)},
	{"offset", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatConverter$AudioFloatLSBFilter, offset)},
	{"stepsize", "I", nullptr, $PRIVATE | $FINAL, $field(AudioFloatConverter$AudioFloatLSBFilter, stepsize)},
	{"mask", "B", nullptr, $PRIVATE | $FINAL, $field(AudioFloatConverter$AudioFloatLSBFilter, mask)},
	{"mask_buffer", "[B", nullptr, $PRIVATE, $field(AudioFloatConverter$AudioFloatLSBFilter, mask_buffer)},
	{}
};

$MethodInfo _AudioFloatConverter$AudioFloatLSBFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/AudioFloatConverter;Ljavax/sound/sampled/AudioFormat;)V", nullptr, 0, $method(static_cast<void(AudioFloatConverter$AudioFloatLSBFilter::*)($AudioFloatConverter*,$AudioFormat*)>(&AudioFloatConverter$AudioFloatLSBFilter::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatLSBFilter_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatLSBFilter", "com.sun.media.sound.AudioFloatConverter", "AudioFloatLSBFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatLSBFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatLSBFilter",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	_AudioFloatConverter$AudioFloatLSBFilter_FieldInfo_,
	_AudioFloatConverter$AudioFloatLSBFilter_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatLSBFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatLSBFilter($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatLSBFilter));
}

void AudioFloatConverter$AudioFloatLSBFilter::init$($AudioFloatConverter* converter, $AudioFormat* format) {
	$AudioFloatConverter::init$();
	int32_t bits = $nc(format)->getSampleSizeInBits();
	bool bigEndian = format->isBigEndian();
	$set(this, converter, converter);
	this->stepsize = (bits + 7) / 8;
	this->offset = bigEndian ? (this->stepsize - 1) : 0;
	int32_t lsb_bits = bits % 8;
	if (lsb_bits == 0) {
		this->mask = (int8_t)0;
	} else if (lsb_bits == 1) {
		this->mask = (int8_t)128;
	} else if (lsb_bits == 2) {
		this->mask = (int8_t)192;
	} else if (lsb_bits == 3) {
		this->mask = (int8_t)224;
	} else if (lsb_bits == 4) {
		this->mask = (int8_t)240;
	} else if (lsb_bits == 5) {
		this->mask = (int8_t)248;
	} else if (lsb_bits == 6) {
		this->mask = (int8_t)252;
	} else if (lsb_bits == 7) {
		this->mask = (int8_t)254;
	} else {
		this->mask = (int8_t)255;
	}
}

$bytes* AudioFloatConverter$AudioFloatLSBFilter::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	$var($bytes, ret, $nc(this->converter)->toByteArray(in_buff, in_offset, in_len, out_buff, out_offset));
	int32_t out_offset_end = in_len * this->stepsize;
	for (int32_t i = out_offset + this->offset; i < out_offset_end; i += this->stepsize) {
		$nc(out_buff)->set(i, (int8_t)((int32_t)(out_buff->get(i) & (uint32_t)(int32_t)this->mask)));
	}
	return ret;
}

$floats* AudioFloatConverter$AudioFloatLSBFilter::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	if (this->mask_buffer == nullptr || $nc(this->mask_buffer)->length < $nc(in_buff)->length) {
		$set(this, mask_buffer, $new($bytes, in_buff->length));
	}
	$System::arraycopy(in_buff, 0, this->mask_buffer, 0, $nc(in_buff)->length);
	int32_t in_offset_end = out_len * this->stepsize;
	for (int32_t i = in_offset + this->offset; i < in_offset_end; i += this->stepsize) {
		$nc(this->mask_buffer)->set(i, (int8_t)((int32_t)($nc(this->mask_buffer)->get(i) & (uint32_t)(int32_t)this->mask)));
	}
	$var($floats, ret, $nc(this->converter)->toFloatArray(this->mask_buffer, in_offset, out_buff, out_offset, out_len));
	return ret;
}

AudioFloatConverter$AudioFloatLSBFilter::AudioFloatConverter$AudioFloatLSBFilter() {
}

$Class* AudioFloatConverter$AudioFloatLSBFilter::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatLSBFilter, name, initialize, &_AudioFloatConverter$AudioFloatLSBFilter_ClassInfo_, allocate$AudioFloatConverter$AudioFloatLSBFilter);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatLSBFilter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com