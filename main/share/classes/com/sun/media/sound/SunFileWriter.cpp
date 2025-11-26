#include <com/sun/media/sound/SunFileWriter.h>

#include <java/io/DataInputStream.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/spi/AudioFileWriter.h>
#include <jcpp.h>

using $AudioFileFormat$TypeArray = $Array<::javax::sound::sampled::AudioFileFormat$Type>;
using $DataInputStream = ::java::io::DataInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFileWriter = ::javax::sound::sampled::spi::AudioFileWriter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SunFileWriter_FieldInfo_[] = {
	{"bufferSize", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunFileWriter, bufferSize)},
	{"bisBufferSize", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunFileWriter, bisBufferSize)},
	{"types", "[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $FINAL, $field(SunFileWriter, types)},
	{}
};

$MethodInfo _SunFileWriter_MethodInfo_[] = {
	{"<init>", "([Ljavax/sound/sampled/AudioFileFormat$Type;)V", nullptr, 0, $method(static_cast<void(SunFileWriter::*)($AudioFileFormat$TypeArray*)>(&SunFileWriter::init$))},
	{"big2little", "(I)I", nullptr, $FINAL, $method(static_cast<int32_t(SunFileWriter::*)(int32_t)>(&SunFileWriter::big2little))},
	{"big2littleShort", "(S)S", nullptr, $FINAL, $method(static_cast<int16_t(SunFileWriter::*)(int16_t)>(&SunFileWriter::big2littleShort))},
	{"getAudioFileTypes", "()[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC | $FINAL},
	{"rllong", "(Ljava/io/DataInputStream;)I", nullptr, $FINAL, $method(static_cast<int32_t(SunFileWriter::*)($DataInputStream*)>(&SunFileWriter::rllong)), "java.io.IOException"},
	{"rlshort", "(Ljava/io/DataInputStream;)S", nullptr, $FINAL, $method(static_cast<int16_t(SunFileWriter::*)($DataInputStream*)>(&SunFileWriter::rlshort)), "java.io.IOException"},
	{}
};

$InnerClassInfo _SunFileWriter_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SunFileWriter$NoCloseInputStream", "com.sun.media.sound.SunFileWriter", "NoCloseInputStream", $FINAL},
	{}
};

$ClassInfo _SunFileWriter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.SunFileWriter",
	"javax.sound.sampled.spi.AudioFileWriter",
	nullptr,
	_SunFileWriter_FieldInfo_,
	_SunFileWriter_MethodInfo_,
	nullptr,
	nullptr,
	_SunFileWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.SunFileWriter$NoCloseInputStream"
};

$Object* allocate$SunFileWriter($Class* clazz) {
	return $of($alloc(SunFileWriter));
}

void SunFileWriter::init$($AudioFileFormat$TypeArray* types) {
	$AudioFileWriter::init$();
	$set(this, types, types);
}

$AudioFileFormat$TypeArray* SunFileWriter::getAudioFileTypes() {
	$var($AudioFileFormat$TypeArray, localArray, $new($AudioFileFormat$TypeArray, $nc(this->types)->length));
	$System::arraycopy(this->types, 0, localArray, 0, $nc(this->types)->length);
	return localArray;
}

int32_t SunFileWriter::rllong($DataInputStream* dis) {
	int32_t b1 = 0;
	int32_t b2 = 0;
	int32_t b3 = 0;
	int32_t b4 = 0;
	int32_t i = 0;
	i = $nc(dis)->readInt();
	b1 = ((int32_t)(i & (uint32_t)255)) << 24;
	b2 = ((int32_t)(i & (uint32_t)0x0000FF00)) << 8;
	b3 = ((int32_t)(i & (uint32_t)0x00FF0000)) >> 8;
	b4 = (int32_t)((uint32_t)((int32_t)(i & (uint32_t)(int32_t)0xFF000000)) >> 24);
	i = (((b1 | b2) | b3) | b4);
	return i;
}

int32_t SunFileWriter::big2little(int32_t i) {
	int32_t b1 = 0;
	int32_t b2 = 0;
	int32_t b3 = 0;
	int32_t b4 = 0;
	b1 = ((int32_t)(i & (uint32_t)255)) << 24;
	b2 = ((int32_t)(i & (uint32_t)0x0000FF00)) << 8;
	b3 = ((int32_t)(i & (uint32_t)0x00FF0000)) >> 8;
	b4 = (int32_t)((uint32_t)((int32_t)(i & (uint32_t)(int32_t)0xFF000000)) >> 24);
	i = (((b1 | b2) | b3) | b4);
	return i;
}

int16_t SunFileWriter::rlshort($DataInputStream* dis) {
	int16_t s = (int16_t)0;
	int16_t high = 0;
	int16_t low = 0;
	s = $nc(dis)->readShort();
	high = (int16_t)(((int32_t)(s & (uint32_t)255)) << 8);
	low = (int16_t)((int32_t)((uint32_t)((int32_t)(s & (uint32_t)0x0000FF00)) >> 8));
	s = (int16_t)(high | low);
	return s;
}

int16_t SunFileWriter::big2littleShort(int16_t i) {
	int16_t high = 0;
	int16_t low = 0;
	high = (int16_t)(((int32_t)(i & (uint32_t)255)) << 8);
	low = (int16_t)((int32_t)((uint32_t)((int32_t)(i & (uint32_t)0x0000FF00)) >> 8));
	i = (int16_t)(high | low);
	return i;
}

SunFileWriter::SunFileWriter() {
}

$Class* SunFileWriter::load$($String* name, bool initialize) {
	$loadClass(SunFileWriter, name, initialize, &_SunFileWriter_ClassInfo_, allocate$SunFileWriter);
	return class$;
}

$Class* SunFileWriter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com