#include <com/sun/media/sound/AiffFileFormat.h>

#include <com/sun/media/sound/StandardFileFormat.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

#undef AIFC_ACE2
#undef AIFC_ACE8
#undef AIFC_IMA4
#undef AIFC_MAC3
#undef AIFC_MAC6
#undef AIFC_MAGIC
#undef AIFC_PCM
#undef AIFC_ULAW
#undef AIFF_HEADERSIZE
#undef AIFF_MAGIC
#undef AIFF_MAGIC2
#undef COMM_MAGIC
#undef FVER_MAGIC
#undef FVER_TIMESTAMP
#undef SSND_MAGIC

using $StandardFileFormat = ::com::sun::media::sound::StandardFileFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AiffFileFormat_FieldInfo_[] = {
	{"AIFF_MAGIC", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, AIFF_MAGIC)},
	{"AIFC_MAGIC", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, AIFC_MAGIC)},
	{"AIFF_MAGIC2", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, AIFF_MAGIC2)},
	{"FVER_MAGIC", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, FVER_MAGIC)},
	{"FVER_TIMESTAMP", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, FVER_TIMESTAMP)},
	{"COMM_MAGIC", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, COMM_MAGIC)},
	{"SSND_MAGIC", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, SSND_MAGIC)},
	{"AIFC_PCM", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, AIFC_PCM)},
	{"AIFC_ACE2", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, AIFC_ACE2)},
	{"AIFC_ACE8", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, AIFC_ACE8)},
	{"AIFC_MAC3", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, AIFC_MAC3)},
	{"AIFC_MAC6", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, AIFC_MAC6)},
	{"AIFC_ULAW", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, AIFC_ULAW)},
	{"AIFC_IMA4", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, AIFC_IMA4)},
	{"AIFF_HEADERSIZE", "I", nullptr, $STATIC | $FINAL, $constField(AiffFileFormat, AIFF_HEADERSIZE)},
	{"headerSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileFormat, headerSize)},
	{"commChunkSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileFormat, commChunkSize)},
	{"fverChunkSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AiffFileFormat, fverChunkSize)},
	{}
};

$MethodInfo _AiffFileFormat_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/AudioFileFormat$Type;JLjavax/sound/sampled/AudioFormat;J)V", nullptr, 0, $method(static_cast<void(AiffFileFormat::*)($AudioFileFormat$Type*,int64_t,$AudioFormat*,int64_t)>(&AiffFileFormat::init$))},
	{"getCommChunkSize", "()I", nullptr, 0, $method(static_cast<int32_t(AiffFileFormat::*)()>(&AiffFileFormat::getCommChunkSize))},
	{"getFverChunkSize", "()I", nullptr, 0, $method(static_cast<int32_t(AiffFileFormat::*)()>(&AiffFileFormat::getFverChunkSize))},
	{"getHeaderSize", "()I", nullptr, 0, $method(static_cast<int32_t(AiffFileFormat::*)()>(&AiffFileFormat::getHeaderSize))},
	{"getSsndChunkOffset", "()I", nullptr, 0, $method(static_cast<int32_t(AiffFileFormat::*)()>(&AiffFileFormat::getSsndChunkOffset))},
	{}
};

$ClassInfo _AiffFileFormat_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.AiffFileFormat",
	"com.sun.media.sound.StandardFileFormat",
	nullptr,
	_AiffFileFormat_FieldInfo_,
	_AiffFileFormat_MethodInfo_
};

$Object* allocate$AiffFileFormat($Class* clazz) {
	return $of($alloc(AiffFileFormat));
}

void AiffFileFormat::init$($AudioFileFormat$Type* type, int64_t byteLength, $AudioFormat* format, int64_t frameLength) {
	$StandardFileFormat::init$(type, byteLength, format, frameLength);
}

int32_t AiffFileFormat::getHeaderSize() {
	return this->headerSize;
}

int32_t AiffFileFormat::getCommChunkSize() {
	return this->commChunkSize;
}

int32_t AiffFileFormat::getFverChunkSize() {
	return this->fverChunkSize;
}

int32_t AiffFileFormat::getSsndChunkOffset() {
	return getHeaderSize() - 16;
}

AiffFileFormat::AiffFileFormat() {
}

$Class* AiffFileFormat::load$($String* name, bool initialize) {
	$loadClass(AiffFileFormat, name, initialize, &_AiffFileFormat_ClassInfo_, allocate$AiffFileFormat);
	return class$;
}

$Class* AiffFileFormat::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com