#include <com/sun/media/sound/SoftAudioBuffer.h>

#include <com/sun/media/sound/AudioFloatConverter.h>
#include <java/util/Arrays.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $AudioFloatConverter = ::com::sun::media::sound::AudioFloatConverter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftAudioBuffer_FieldInfo_[] = {
	{"size", "I", nullptr, $PRIVATE, $field(SoftAudioBuffer, size)},
	{"buffer", "[F", nullptr, $PRIVATE, $field(SoftAudioBuffer, buffer)},
	{"empty", "Z", nullptr, $PRIVATE, $field(SoftAudioBuffer, empty)},
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $field(SoftAudioBuffer, format)},
	{"converter", "Lcom/sun/media/sound/AudioFloatConverter;", nullptr, $PRIVATE, $field(SoftAudioBuffer, converter)},
	{"converter_buffer", "[B", nullptr, $PRIVATE, $field(SoftAudioBuffer, converter_buffer)},
	{}
};

$MethodInfo _SoftAudioBuffer_MethodInfo_[] = {
	{"<init>", "(ILjavax/sound/sampled/AudioFormat;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftAudioBuffer::*)(int32_t,$AudioFormat*)>(&SoftAudioBuffer::init$))},
	{"array", "()[F", nullptr, $PUBLIC, $method(static_cast<$floats*(SoftAudioBuffer::*)()>(&SoftAudioBuffer::array))},
	{"clear", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftAudioBuffer::*)()>(&SoftAudioBuffer::clear))},
	{"get", "([BI)V", nullptr, $PUBLIC, $method(static_cast<void(SoftAudioBuffer::*)($bytes*,int32_t)>(&SoftAudioBuffer::get))},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC, $method(static_cast<$AudioFormat*(SoftAudioBuffer::*)()>(&SoftAudioBuffer::getFormat))},
	{"getSize", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SoftAudioBuffer::*)()>(&SoftAudioBuffer::getSize))},
	{"isSilent", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(SoftAudioBuffer::*)()>(&SoftAudioBuffer::isSilent))},
	{"swap", "(Lcom/sun/media/sound/SoftAudioBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftAudioBuffer::*)(SoftAudioBuffer*)>(&SoftAudioBuffer::swap))},
	{}
};

$ClassInfo _SoftAudioBuffer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftAudioBuffer",
	"java.lang.Object",
	nullptr,
	_SoftAudioBuffer_FieldInfo_,
	_SoftAudioBuffer_MethodInfo_
};

$Object* allocate$SoftAudioBuffer($Class* clazz) {
	return $of($alloc(SoftAudioBuffer));
}

void SoftAudioBuffer::init$(int32_t size, $AudioFormat* format) {
	this->empty = true;
	this->size = size;
	$set(this, format, format);
	$set(this, converter, $AudioFloatConverter::getConverter(format));
}

void SoftAudioBuffer::swap(SoftAudioBuffer* swap) {
	$useLocalCurrentObjectStackCache();
	int32_t bak_size = this->size;
	$var($floats, bak_buffer, this->buffer);
	bool bak_empty = this->empty;
	$var($AudioFormat, bak_format, this->format);
	$var($AudioFloatConverter, bak_converter, this->converter);
	$var($bytes, bak_converter_buffer, this->converter_buffer);
	this->size = $nc(swap)->size;
	$set(this, buffer, swap->buffer);
	this->empty = swap->empty;
	$set(this, format, swap->format);
	$set(this, converter, swap->converter);
	$set(this, converter_buffer, swap->converter_buffer);
	swap->size = bak_size;
	$set(swap, buffer, bak_buffer);
	swap->empty = bak_empty;
	$set(swap, format, bak_format);
	$set(swap, converter, bak_converter);
	$set(swap, converter_buffer, bak_converter_buffer);
}

$AudioFormat* SoftAudioBuffer::getFormat() {
	return this->format;
}

int32_t SoftAudioBuffer::getSize() {
	return this->size;
}

void SoftAudioBuffer::clear() {
	if (!this->empty) {
		$Arrays::fill(this->buffer, (float)0);
		this->empty = true;
	}
}

bool SoftAudioBuffer::isSilent() {
	return this->empty;
}

$floats* SoftAudioBuffer::array() {
	this->empty = false;
	if (this->buffer == nullptr) {
		$set(this, buffer, $new($floats, this->size));
	}
	return this->buffer;
}

void SoftAudioBuffer::get($bytes* buffer, int32_t channel) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(this->format)->getFrameSize();
	int32_t framesize_pc = ($div(var$0, $nc(this->format)->getChannels()));
	int32_t c_len = this->size * framesize_pc;
	if (this->converter_buffer == nullptr || $nc(this->converter_buffer)->length < c_len) {
		$set(this, converter_buffer, $new($bytes, c_len));
	}
	if ($nc(this->format)->getChannels() == 1) {
		$nc(this->converter)->toByteArray($(array()), this->size, buffer);
	} else {
		$nc(this->converter)->toByteArray($(array()), this->size, this->converter_buffer);
		if (channel >= $nc(this->format)->getChannels()) {
			return;
		}
		int32_t z_stepover = $nc(this->format)->getChannels() * framesize_pc;
		int32_t k_stepover = framesize_pc;
		for (int32_t j = 0; j < framesize_pc; ++j) {
			int32_t k = j;
			int32_t z = channel * framesize_pc + j;
			for (int32_t i = 0; i < this->size; ++i) {
				$nc(buffer)->set(z, $nc(this->converter_buffer)->get(k));
				z += z_stepover;
				k += k_stepover;
			}
		}
	}
}

SoftAudioBuffer::SoftAudioBuffer() {
}

$Class* SoftAudioBuffer::load$($String* name, bool initialize) {
	$loadClass(SoftAudioBuffer, name, initialize, &_SoftAudioBuffer_ClassInfo_, allocate$SoftAudioBuffer);
	return class$;
}

$Class* SoftAudioBuffer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com