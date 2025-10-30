#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32L.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/FloatBuffer.h>
#include <jcpp.h>

#undef LITTLE_ENDIAN

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $FloatBuffer = ::java::nio::FloatBuffer;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AudioFloatConverter$AudioFloatConversion32L_FieldInfo_[] = {
	{"bytebuffer", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(AudioFloatConverter$AudioFloatConversion32L, bytebuffer)},
	{"floatbuffer", "Ljava/nio/FloatBuffer;", nullptr, 0, $field(AudioFloatConverter$AudioFloatConversion32L, floatbuffer)},
	{}
};

$MethodInfo _AudioFloatConverter$AudioFloatConversion32L_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioFloatConverter$AudioFloatConversion32L::*)()>(&AudioFloatConverter$AudioFloatConversion32L::init$))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AudioFloatConverter$AudioFloatConversion32L_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32L", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32L", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter$AudioFloatConversion32L_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32L",
	"com.sun.media.sound.AudioFloatConverter",
	nullptr,
	_AudioFloatConverter$AudioFloatConversion32L_FieldInfo_,
	_AudioFloatConverter$AudioFloatConversion32L_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter$AudioFloatConversion32L_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter"
};

$Object* allocate$AudioFloatConverter$AudioFloatConversion32L($Class* clazz) {
	return $of($alloc(AudioFloatConverter$AudioFloatConversion32L));
}

void AudioFloatConverter$AudioFloatConversion32L::init$() {
	$AudioFloatConverter::init$();
	$set(this, bytebuffer, nullptr);
	$set(this, floatbuffer, nullptr);
}

$floats* AudioFloatConverter$AudioFloatConversion32L::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	int32_t in_len = out_len * 4;
	if (this->bytebuffer == nullptr || $nc(this->bytebuffer)->capacity() < in_len) {
		$init($ByteOrder);
		$set(this, bytebuffer, $nc($($ByteBuffer::allocate(in_len)))->order($ByteOrder::LITTLE_ENDIAN));
		$set(this, floatbuffer, $nc(this->bytebuffer)->asFloatBuffer());
	}
	$nc(this->bytebuffer)->position(0);
	$nc(this->floatbuffer)->position(0);
	$nc(this->bytebuffer)->put(in_buff, in_offset, in_len);
	$nc(this->floatbuffer)->get(out_buff, out_offset, out_len);
	return out_buff;
}

$bytes* AudioFloatConverter$AudioFloatConversion32L::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	int32_t out_len = in_len * 4;
	if (this->bytebuffer == nullptr || $nc(this->bytebuffer)->capacity() < out_len) {
		$init($ByteOrder);
		$set(this, bytebuffer, $nc($($ByteBuffer::allocate(out_len)))->order($ByteOrder::LITTLE_ENDIAN));
		$set(this, floatbuffer, $nc(this->bytebuffer)->asFloatBuffer());
	}
	$nc(this->floatbuffer)->position(0);
	$nc(this->bytebuffer)->position(0);
	$nc(this->floatbuffer)->put(in_buff, in_offset, in_len);
	$nc(this->bytebuffer)->get(out_buff, out_offset, out_len);
	return out_buff;
}

AudioFloatConverter$AudioFloatConversion32L::AudioFloatConverter$AudioFloatConversion32L() {
}

$Class* AudioFloatConverter$AudioFloatConversion32L::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter$AudioFloatConversion32L, name, initialize, &_AudioFloatConverter$AudioFloatConversion32L_ClassInfo_, allocate$AudioFloatConverter$AudioFloatConversion32L);
	return class$;
}

$Class* AudioFloatConverter$AudioFloatConversion32L::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com