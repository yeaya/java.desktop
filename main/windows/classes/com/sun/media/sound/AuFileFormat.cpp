#include <com/sun/media/sound/AuFileFormat.h>

#include <com/sun/media/sound/StandardFileFormat.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

#undef ALAW
#undef AU_ALAW_8
#undef AU_DOUBLE
#undef AU_FLOAT
#undef AU_HEADERSIZE
#undef AU_LINEAR_16
#undef AU_LINEAR_24
#undef AU_LINEAR_32
#undef AU_LINEAR_8
#undef AU_SUN_MAGIC
#undef AU_ULAW_8
#undef PCM_FLOAT
#undef PCM_SIGNED
#undef ULAW
#undef UNKNOWN_SIZE

using $StandardFileFormat = ::com::sun::media::sound::StandardFileFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AuFileFormat_FieldInfo_[] = {
	{"AU_SUN_MAGIC", "I", nullptr, $STATIC | $FINAL, $constField(AuFileFormat, AU_SUN_MAGIC)},
	{"AU_ULAW_8", "I", nullptr, $STATIC | $FINAL, $constField(AuFileFormat, AU_ULAW_8)},
	{"AU_LINEAR_8", "I", nullptr, $STATIC | $FINAL, $constField(AuFileFormat, AU_LINEAR_8)},
	{"AU_LINEAR_16", "I", nullptr, $STATIC | $FINAL, $constField(AuFileFormat, AU_LINEAR_16)},
	{"AU_LINEAR_24", "I", nullptr, $STATIC | $FINAL, $constField(AuFileFormat, AU_LINEAR_24)},
	{"AU_LINEAR_32", "I", nullptr, $STATIC | $FINAL, $constField(AuFileFormat, AU_LINEAR_32)},
	{"AU_FLOAT", "I", nullptr, $STATIC | $FINAL, $constField(AuFileFormat, AU_FLOAT)},
	{"AU_DOUBLE", "I", nullptr, $STATIC | $FINAL, $constField(AuFileFormat, AU_DOUBLE)},
	{"AU_ALAW_8", "I", nullptr, $STATIC | $FINAL, $constField(AuFileFormat, AU_ALAW_8)},
	{"AU_HEADERSIZE", "I", nullptr, $STATIC | $FINAL, $constField(AuFileFormat, AU_HEADERSIZE)},
	{"UNKNOWN_SIZE", "J", nullptr, $STATIC | $FINAL, $constField(AuFileFormat, UNKNOWN_SIZE)},
	{"auType", "I", nullptr, $PRIVATE, $field(AuFileFormat, auType)},
	{}
};

$MethodInfo _AuFileFormat_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/AudioFileFormat$Type;JLjavax/sound/sampled/AudioFormat;J)V", nullptr, 0, $method(static_cast<void(AuFileFormat::*)($AudioFileFormat$Type*,int64_t,$AudioFormat*,int64_t)>(&AuFileFormat::init$))},
	{"getAuType", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(AuFileFormat::*)()>(&AuFileFormat::getAuType))},
	{}
};

$ClassInfo _AuFileFormat_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.AuFileFormat",
	"com.sun.media.sound.StandardFileFormat",
	nullptr,
	_AuFileFormat_FieldInfo_,
	_AuFileFormat_MethodInfo_
};

$Object* allocate$AuFileFormat($Class* clazz) {
	return $of($alloc(AuFileFormat));
}

void AuFileFormat::init$($AudioFileFormat$Type* type, int64_t byteLength, $AudioFormat* format, int64_t frameLength) {
	$StandardFileFormat::init$(type, byteLength, format, frameLength);
	$var($AudioFormat$Encoding, encoding, $nc(format)->getEncoding());
	this->auType = -1;
	$init($AudioFormat$Encoding);
	if ($nc($AudioFormat$Encoding::ALAW)->equals(encoding)) {
		if (format->getSampleSizeInBits() == 8) {
			this->auType = AuFileFormat::AU_ALAW_8;
		}
	} else {
		if ($nc($AudioFormat$Encoding::ULAW)->equals(encoding)) {
			if (format->getSampleSizeInBits() == 8) {
				this->auType = AuFileFormat::AU_ULAW_8;
			}
		} else {
			if ($nc($AudioFormat$Encoding::PCM_SIGNED)->equals(encoding)) {
				if (format->getSampleSizeInBits() == 8) {
					this->auType = AuFileFormat::AU_LINEAR_8;
				} else if (format->getSampleSizeInBits() == 16) {
					this->auType = AuFileFormat::AU_LINEAR_16;
				} else if (format->getSampleSizeInBits() == 24) {
					this->auType = AuFileFormat::AU_LINEAR_24;
				} else if (format->getSampleSizeInBits() == 32) {
					this->auType = AuFileFormat::AU_LINEAR_32;
				}
			} else {
				if ($nc($AudioFormat$Encoding::PCM_FLOAT)->equals(encoding)) {
					if (format->getSampleSizeInBits() == 32) {
						this->auType = AuFileFormat::AU_FLOAT;
					} else if (format->getSampleSizeInBits() == 64) {
						this->auType = AuFileFormat::AU_DOUBLE;
					}
				}
			}
		}
	}
}

int32_t AuFileFormat::getAuType() {
	return this->auType;
}

AuFileFormat::AuFileFormat() {
}

$Class* AuFileFormat::load$($String* name, bool initialize) {
	$loadClass(AuFileFormat, name, initialize, &_AuFileFormat_ClassInfo_, allocate$AuFileFormat);
	return class$;
}

$Class* AuFileFormat::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com