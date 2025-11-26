#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion64B.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DoubleBuffer.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $DoubleBuffer = ::java::nio::DoubleBuffer;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AudioFloatConverter$AudioFloatConversion64B_FieldInfo_[] = {
	{"bytebuffer", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(AudioFloatConverter$AudioFloatConversion64B, bytebuffer)},
	{"floatbuffer", "Ljava/nio/DoubleBuffer;", nullptr, 0, $field(AudioFloatConverter$AudioFloatConversion64B, floatbuffer)},
	{"double_buff", "[D", nullptr, 0, $field(AudioFloatConverter$AudioFloatConversion64B, double_buff)},
	{}
};

$MethodInfo _AudioFloatConverter$AudioFloatConversion64B_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion64B::*)()>(&AudioFloatConverter$AudioFloatConversion64B::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion64B_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion64B", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion64B", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion64B_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion64B",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	_AudioFloatConverter$AudioFloatConversion64B_FieldInfo_,
	_AudioFloatConverter$AudioFloatConversion64B_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion64B_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion64B($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion64B));
}

void AudioFloatConverter$AudioFloatConversion64B::init$() {
	$AudioFloatConverter::init$();
	$set(this, bytebuffer, nullptr);
	$set(this, floatbuffer, nullptr);
	$set(this, double_buff, nullptr);
}

$floats* AudioFloatConverter$AudioFloatConversion64B::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t in_len = out_len * 8;
	if (this->bytebuffer == nullptr || $nc(this->bytebuffer)->capacity() < in_len) {
		$init($ByteOrder);
		$set(this, bytebuffer, $nc($($ByteBuffer::allocate(in_len)))->order($ByteOrder::BIG_ENDIAN));
		$set(this, floatbuffer, $nc(this->bytebuffer)->asDoubleBuffer());
	}
	$nc(this->bytebuffer)->position(0);
	$nc(this->floatbuffer)->position(0);
	$nc(this->bytebuffer)->put(in_buff, in_offset, in_len);
	if (this->double_buff == nullptr || $nc(this->double_buff)->length < out_len + out_offset) {
		$set(this, double_buff, $new($doubles, out_len + out_offset));
	}
	$nc(this->floatbuffer)->get(this->double_buff, out_offset, out_len);
	int32_t out_offset_end = out_offset + out_len;
	for (int32_t i = out_offset; i < out_offset_end; ++i) {
		$nc(out_buff)->set(i, (float)$nc(this->double_buff)->get(i));
	}
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion64B::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t out_len = in_len * 8;
	if (this->bytebuffer == nullptr || $nc(this->bytebuffer)->capacity() < out_len) {
		$init($ByteOrder);
		$set(this, bytebuffer, $nc($($ByteBuffer::allocate(out_len)))->order($ByteOrder::BIG_ENDIAN));
		$set(this, floatbuffer, $nc(this->bytebuffer)->asDoubleBuffer());
	}
	$nc(this->floatbuffer)->position(0);
	$nc(this->bytebuffer)->position(0);
	if (this->double_buff == nullptr || $nc(this->double_buff)->length < in_offset + in_len) {
		$set(this, double_buff, $new($doubles, in_offset + in_len));
	}
	int32_t in_offset_end = in_offset + in_len;
	for (int32_t i = in_offset; i < in_offset_end; ++i) {
		$nc(this->double_buff)->set(i, $nc(in_buff)->get(i));
	}
	$nc(this->floatbuffer)->put(this->double_buff, in_offset, in_len);
	$nc(this->bytebuffer)->get(out_buff, out_offset, out_len);
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion64B::AudioFloatConverter$AudioFloatConversion64B() {
}

$Class* AudioFloatConverter$AudioFloatConversion64B::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion64B, name, initialize, &_AudioFloatConverter$AudioFloatConversion64B_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion64B);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion64B::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com