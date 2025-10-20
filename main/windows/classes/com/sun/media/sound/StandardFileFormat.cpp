#include <com/sun/media/sound/StandardFileFormat.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFileFormat.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef NOT_SPECIFIED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFileFormat = ::javax::sound::sampled::AudioFileFormat;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _StandardFileFormat_FieldInfo_[] = {
	{"byteLength", "J", nullptr, $PRIVATE | $FINAL, $field(StandardFileFormat, byteLength)},
	{"frameLength", "J", nullptr, $PRIVATE | $FINAL, $field(StandardFileFormat, frameLength)},
	{}
};

$MethodInfo _StandardFileFormat_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/AudioFileFormat$Type;Ljavax/sound/sampled/AudioFormat;J)V", nullptr, 0, $method(static_cast<void(StandardFileFormat::*)($AudioFileFormat$Type*,$AudioFormat*,int64_t)>(&StandardFileFormat::init$))},
	{"<init>", "(Ljavax/sound/sampled/AudioFileFormat$Type;JLjavax/sound/sampled/AudioFormat;J)V", nullptr, 0, $method(static_cast<void(StandardFileFormat::*)($AudioFileFormat$Type*,int64_t,$AudioFormat*,int64_t)>(&StandardFileFormat::init$))},
	{"clip", "(J)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int64_t)>(&StandardFileFormat::clip))},
	{"getLongByteLength", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(StandardFileFormat::*)()>(&StandardFileFormat::getLongByteLength))},
	{"getLongFrameLength", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(StandardFileFormat::*)()>(&StandardFileFormat::getLongFrameLength))},
	{}
};

$ClassInfo _StandardFileFormat_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.StandardFileFormat",
	"javax.sound.sampled.AudioFileFormat",
	nullptr,
	_StandardFileFormat_FieldInfo_,
	_StandardFileFormat_MethodInfo_
};

$Object* allocate$StandardFileFormat($Class* clazz) {
	return $of($alloc(StandardFileFormat));
}

void StandardFileFormat::init$($AudioFileFormat$Type* type, $AudioFormat* format, int64_t frameLength) {
	StandardFileFormat::init$(type, $AudioSystem::NOT_SPECIFIED, format, frameLength);
}

void StandardFileFormat::init$($AudioFileFormat$Type* type, int64_t byteLength, $AudioFormat* format, int64_t frameLength) {
	$useLocalCurrentObjectStackCache();
	$var($AudioFileFormat$Type, var$0, type);
	int32_t var$1 = clip(byteLength);
	$var($AudioFormat, var$2, format);
	$AudioFileFormat::init$(var$0, var$1, var$2, clip(frameLength));
	this->byteLength = byteLength;
	this->frameLength = frameLength;
}

int32_t StandardFileFormat::clip(int64_t value) {
	$init(StandardFileFormat);
	if (value > $Integer::MAX_VALUE) {
		return $AudioSystem::NOT_SPECIFIED;
	}
	return (int32_t)value;
}

int64_t StandardFileFormat::getLongFrameLength() {
	return this->frameLength;
}

int64_t StandardFileFormat::getLongByteLength() {
	return this->byteLength;
}

StandardFileFormat::StandardFileFormat() {
}

$Class* StandardFileFormat::load$($String* name, bool initialize) {
	$loadClass(StandardFileFormat, name, initialize, &_StandardFileFormat_ClassInfo_, allocate$StandardFileFormat);
	return class$;
}

$Class* StandardFileFormat::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com