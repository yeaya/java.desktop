#include <com/sun/media/sound/AudioFloatConverter.h>

#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion16SB.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion16SL.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion16UB.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion16UL.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion24SB.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion24SL.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion24UB.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion24UL.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32B.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32L.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32SB.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32SL.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32UB.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32UL.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32xSB.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32xSL.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32xUB.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion32xUL.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion64B.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion64L.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion8S.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatConversion8U.h>
#include <com/sun/media/sound/AudioFloatConverter$AudioFloatLSBFilter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

#undef PCM_FLOAT
#undef PCM_SIGNED
#undef PCM_UNSIGNED

using $AudioFloatConverter$AudioFloatConversion16SB = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion16SB;
using $AudioFloatConverter$AudioFloatConversion16SL = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion16SL;
using $AudioFloatConverter$AudioFloatConversion16UB = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion16UB;
using $AudioFloatConverter$AudioFloatConversion16UL = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion16UL;
using $AudioFloatConverter$AudioFloatConversion24SB = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion24SB;
using $AudioFloatConverter$AudioFloatConversion24SL = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion24SL;
using $AudioFloatConverter$AudioFloatConversion24UB = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion24UB;
using $AudioFloatConverter$AudioFloatConversion24UL = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion24UL;
using $AudioFloatConverter$AudioFloatConversion32B = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion32B;
using $AudioFloatConverter$AudioFloatConversion32L = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion32L;
using $AudioFloatConverter$AudioFloatConversion32SB = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion32SB;
using $AudioFloatConverter$AudioFloatConversion32SL = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion32SL;
using $AudioFloatConverter$AudioFloatConversion32UB = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion32UB;
using $AudioFloatConverter$AudioFloatConversion32UL = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion32UL;
using $AudioFloatConverter$AudioFloatConversion32xSB = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion32xSB;
using $AudioFloatConverter$AudioFloatConversion32xSL = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion32xSL;
using $AudioFloatConverter$AudioFloatConversion32xUB = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion32xUB;
using $AudioFloatConverter$AudioFloatConversion32xUL = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion32xUL;
using $AudioFloatConverter$AudioFloatConversion64B = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion64B;
using $AudioFloatConverter$AudioFloatConversion64L = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion64L;
using $AudioFloatConverter$AudioFloatConversion8S = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion8S;
using $AudioFloatConverter$AudioFloatConversion8U = ::com::sun::media::sound::AudioFloatConverter$AudioFloatConversion8U;
using $AudioFloatConverter$AudioFloatLSBFilter = ::com::sun::media::sound::AudioFloatConverter$AudioFloatLSBFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AudioFloatConverter_FieldInfo_[] = {
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $field(AudioFloatConverter, format)},
	{}
};

$MethodInfo _AudioFloatConverter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AudioFloatConverter::*)()>(&AudioFloatConverter::init$))},
	{"getConverter", "(Ljavax/sound/sampled/AudioFormat;)Lcom/sun/media/sound/AudioFloatConverter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AudioFloatConverter*(*)($AudioFormat*)>(&AudioFloatConverter::getConverter))},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$AudioFormat*(AudioFloatConverter::*)()>(&AudioFloatConverter::getFormat))},
	{"toByteArray", "([FII[BI)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"toByteArray", "([FI[BI)[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(AudioFloatConverter::*)($floats*,int32_t,$bytes*,int32_t)>(&AudioFloatConverter::toByteArray))},
	{"toByteArray", "([FII[B)[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(AudioFloatConverter::*)($floats*,int32_t,int32_t,$bytes*)>(&AudioFloatConverter::toByteArray))},
	{"toByteArray", "([FI[B)[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(AudioFloatConverter::*)($floats*,int32_t,$bytes*)>(&AudioFloatConverter::toByteArray))},
	{"toByteArray", "([F[B)[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(AudioFloatConverter::*)($floats*,$bytes*)>(&AudioFloatConverter::toByteArray))},
	{"toFloatArray", "([BI[FII)[F", nullptr, $PUBLIC | $ABSTRACT},
	{"toFloatArray", "([B[FII)[F", nullptr, $PUBLIC | $FINAL, $method(static_cast<$floats*(AudioFloatConverter::*)($bytes*,$floats*,int32_t,int32_t)>(&AudioFloatConverter::toFloatArray))},
	{"toFloatArray", "([BI[FI)[F", nullptr, $PUBLIC | $FINAL, $method(static_cast<$floats*(AudioFloatConverter::*)($bytes*,int32_t,$floats*,int32_t)>(&AudioFloatConverter::toFloatArray))},
	{"toFloatArray", "([B[FI)[F", nullptr, $PUBLIC | $FINAL, $method(static_cast<$floats*(AudioFloatConverter::*)($bytes*,$floats*,int32_t)>(&AudioFloatConverter::toFloatArray))},
	{"toFloatArray", "([B[F)[F", nullptr, $PUBLIC | $FINAL, $method(static_cast<$floats*(AudioFloatConverter::*)($bytes*,$floats*)>(&AudioFloatConverter::toFloatArray))},
	{}
};

$InnerClassInfo _AudioFloatConverter_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xUB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32xUB", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xUL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32xUL", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xSB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32xSB", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xSL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32xSL", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32UB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32UB", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32UL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32UL", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32SB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32SB", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32SL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32SL", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion24UB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion24UB", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion24UL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion24UL", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion24SB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion24SB", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion24SL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion24SL", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16UB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion16UB", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16UL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion16UL", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16SB", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion16SB", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16SL", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion16SL", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion8U", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion8U", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion8S", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion8S", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32B", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32B", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32L", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion32L", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion64B", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion64B", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion64L", "com.sun.media.sound.AudioFloatConverter", "AudioFloatConversion64L", $PRIVATE | $STATIC},
	{"com.sun.media.sound.AudioFloatConverter$AudioFloatLSBFilter", "com.sun.media.sound.AudioFloatConverter", "AudioFloatLSBFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AudioFloatConverter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.AudioFloatConverter",
	"java.lang.Object",
	nullptr,
	_AudioFloatConverter_FieldInfo_,
	_AudioFloatConverter_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFloatConverter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xUB,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xUL,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xSB,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32xSL,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32UB,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32UL,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32SB,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32SL,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion24UB,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion24UL,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion24SB,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion24SL,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16UB,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16UL,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16SB,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion16SL,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion8U,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion8S,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32B,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion32L,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion64B,com.sun.media.sound.AudioFloatConverter$AudioFloatConversion64L,com.sun.media.sound.AudioFloatConverter$AudioFloatLSBFilter"
};

$Object* allocate$AudioFloatConverter($Class* clazz) {
	return $of($alloc(AudioFloatConverter));
}

void AudioFloatConverter::init$() {
}

AudioFloatConverter* AudioFloatConverter::getConverter($AudioFormat* format) {
	$useLocalCurrentObjectStackCache();
	$var(AudioFloatConverter, conv, nullptr);
	if ($nc(format)->getFrameSize() == 0) {
		return nullptr;
	}
	int32_t var$0 = $nc(format)->getFrameSize();
	int32_t var$2 = ((format->getSampleSizeInBits() + 7) / 8);
	int32_t var$1 = var$2 * format->getChannels();
	if (var$0 != var$1) {
		return nullptr;
	}
	$init($AudioFormat$Encoding);
	if ($nc($($nc(format)->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED)) {
		if (format->isBigEndian()) {
			if (format->getSampleSizeInBits() <= 8) {
				$assign(conv, $new($AudioFloatConverter$AudioFloatConversion8S));
			} else {
				bool var$4 = format->getSampleSizeInBits() > 8;
				if (var$4 && format->getSampleSizeInBits() <= 16) {
					$assign(conv, $new($AudioFloatConverter$AudioFloatConversion16SB));
				} else {
					bool var$6 = format->getSampleSizeInBits() > 16;
					if (var$6 && format->getSampleSizeInBits() <= 24) {
						$assign(conv, $new($AudioFloatConverter$AudioFloatConversion24SB));
					} else {
						bool var$8 = format->getSampleSizeInBits() > 24;
						if (var$8 && format->getSampleSizeInBits() <= 32) {
							$assign(conv, $new($AudioFloatConverter$AudioFloatConversion32SB));
						} else if (format->getSampleSizeInBits() > 32) {
							$assign(conv, $new($AudioFloatConverter$AudioFloatConversion32xSB, ((format->getSampleSizeInBits() + 7) / 8) - 4));
						}
					}
				}
			}
		} else if (format->getSampleSizeInBits() <= 8) {
			$assign(conv, $new($AudioFloatConverter$AudioFloatConversion8S));
		} else {
			bool var$10 = format->getSampleSizeInBits() > 8;
			if (var$10 && format->getSampleSizeInBits() <= 16) {
				$assign(conv, $new($AudioFloatConverter$AudioFloatConversion16SL));
			} else {
				bool var$12 = format->getSampleSizeInBits() > 16;
				if (var$12 && format->getSampleSizeInBits() <= 24) {
					$assign(conv, $new($AudioFloatConverter$AudioFloatConversion24SL));
				} else {
					bool var$14 = format->getSampleSizeInBits() > 24;
					if (var$14 && format->getSampleSizeInBits() <= 32) {
						$assign(conv, $new($AudioFloatConverter$AudioFloatConversion32SL));
					} else if (format->getSampleSizeInBits() > 32) {
						$assign(conv, $new($AudioFloatConverter$AudioFloatConversion32xSL, ((format->getSampleSizeInBits() + 7) / 8) - 4));
					}
				}
			}
		}
	} else {
		if ($nc($(format->getEncoding()))->equals($AudioFormat$Encoding::PCM_UNSIGNED)) {
			if (format->isBigEndian()) {
				if (format->getSampleSizeInBits() <= 8) {
					$assign(conv, $new($AudioFloatConverter$AudioFloatConversion8U));
				} else {
					bool var$16 = format->getSampleSizeInBits() > 8;
					if (var$16 && format->getSampleSizeInBits() <= 16) {
						$assign(conv, $new($AudioFloatConverter$AudioFloatConversion16UB));
					} else {
						bool var$18 = format->getSampleSizeInBits() > 16;
						if (var$18 && format->getSampleSizeInBits() <= 24) {
							$assign(conv, $new($AudioFloatConverter$AudioFloatConversion24UB));
						} else {
							bool var$20 = format->getSampleSizeInBits() > 24;
							if (var$20 && format->getSampleSizeInBits() <= 32) {
								$assign(conv, $new($AudioFloatConverter$AudioFloatConversion32UB));
							} else if (format->getSampleSizeInBits() > 32) {
								$assign(conv, $new($AudioFloatConverter$AudioFloatConversion32xUB, ((format->getSampleSizeInBits() + 7) / 8) - 4));
							}
						}
					}
				}
			} else if (format->getSampleSizeInBits() <= 8) {
				$assign(conv, $new($AudioFloatConverter$AudioFloatConversion8U));
			} else {
				bool var$22 = format->getSampleSizeInBits() > 8;
				if (var$22 && format->getSampleSizeInBits() <= 16) {
					$assign(conv, $new($AudioFloatConverter$AudioFloatConversion16UL));
				} else {
					bool var$24 = format->getSampleSizeInBits() > 16;
					if (var$24 && format->getSampleSizeInBits() <= 24) {
						$assign(conv, $new($AudioFloatConverter$AudioFloatConversion24UL));
					} else {
						bool var$26 = format->getSampleSizeInBits() > 24;
						if (var$26 && format->getSampleSizeInBits() <= 32) {
							$assign(conv, $new($AudioFloatConverter$AudioFloatConversion32UL));
						} else if (format->getSampleSizeInBits() > 32) {
							$assign(conv, $new($AudioFloatConverter$AudioFloatConversion32xUL, ((format->getSampleSizeInBits() + 7) / 8) - 4));
						}
					}
				}
			}
		} else {
			if ($nc($(format->getEncoding()))->equals($AudioFormat$Encoding::PCM_FLOAT)) {
				if (format->getSampleSizeInBits() == 32) {
					if (format->isBigEndian()) {
						$assign(conv, $new($AudioFloatConverter$AudioFloatConversion32B));
					} else {
						$assign(conv, $new($AudioFloatConverter$AudioFloatConversion32L));
					}
				} else if (format->getSampleSizeInBits() == 64) {
					if (format->isBigEndian()) {
						$assign(conv, $new($AudioFloatConverter$AudioFloatConversion64B));
					} else {
						$assign(conv, $new($AudioFloatConverter$AudioFloatConversion64L));
					}
				}
			}
		}
	}
	bool var$28 = $nc($($nc(format)->getEncoding()))->equals($AudioFormat$Encoding::PCM_SIGNED);
	bool var$27 = (var$28 || $nc($($nc(format)->getEncoding()))->equals($AudioFormat$Encoding::PCM_UNSIGNED));
	if (var$27 && (format->getSampleSizeInBits() % 8 != 0)) {
		$assign(conv, $new($AudioFloatConverter$AudioFloatLSBFilter, conv, format));
	}
	if (conv != nullptr) {
		$set(conv, format, format);
	}
	return conv;
}

$AudioFormat* AudioFloatConverter::getFormat() {
	return this->format;
}

$floats* AudioFloatConverter::toFloatArray($bytes* in_buff, $floats* out_buff, int32_t out_offset, int32_t out_len) {
	return toFloatArray(in_buff, 0, out_buff, out_offset, out_len);
}

$floats* AudioFloatConverter::toFloatArray($bytes* in_buff, int32_t in_offset, $floats* out_buff, int32_t out_len) {
	return toFloatArray(in_buff, in_offset, out_buff, 0, out_len);
}

$floats* AudioFloatConverter::toFloatArray($bytes* in_buff, $floats* out_buff, int32_t out_len) {
	return toFloatArray(in_buff, 0, out_buff, 0, out_len);
}

$floats* AudioFloatConverter::toFloatArray($bytes* in_buff, $floats* out_buff) {
	return toFloatArray(in_buff, 0, out_buff, 0, $nc(out_buff)->length);
}

$bytes* AudioFloatConverter::toByteArray($floats* in_buff, int32_t in_len, $bytes* out_buff, int32_t out_offset) {
	return toByteArray(in_buff, 0, in_len, out_buff, out_offset);
}

$bytes* AudioFloatConverter::toByteArray($floats* in_buff, int32_t in_offset, int32_t in_len, $bytes* out_buff) {
	return toByteArray(in_buff, in_offset, in_len, out_buff, 0);
}

$bytes* AudioFloatConverter::toByteArray($floats* in_buff, int32_t in_len, $bytes* out_buff) {
	return toByteArray(in_buff, 0, in_len, out_buff, 0);
}

$bytes* AudioFloatConverter::toByteArray($floats* in_buff, $bytes* out_buff) {
	return toByteArray(in_buff, 0, $nc(in_buff)->length, out_buff, 0);
}

AudioFloatConverter::AudioFloatConverter() {
}

$Class* AudioFloatConverter::load$($String* name, bool initialize) {
	$loadClass(AudioFloatConverter, name, initialize, &_AudioFloatConverter_ClassInfo_, allocate$AudioFloatConverter);
	return class$;
}

$Class* AudioFloatConverter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com