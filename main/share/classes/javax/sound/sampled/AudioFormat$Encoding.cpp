#include <javax/sound/sampled/AudioFormat$Encoding.h>

#include <java/util/Objects.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

#undef ALAW
#undef PCM_FLOAT
#undef PCM_SIGNED
#undef PCM_UNSIGNED
#undef ULAW

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _AudioFormat$Encoding_FieldInfo_[] = {
	{"PCM_SIGNED", "Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AudioFormat$Encoding, PCM_SIGNED)},
	{"PCM_UNSIGNED", "Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AudioFormat$Encoding, PCM_UNSIGNED)},
	{"PCM_FLOAT", "Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AudioFormat$Encoding, PCM_FLOAT)},
	{"ULAW", "Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AudioFormat$Encoding, ULAW)},
	{"ALAW", "Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AudioFormat$Encoding, ALAW)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AudioFormat$Encoding, name)},
	{}
};

$MethodInfo _AudioFormat$Encoding_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AudioFormat$Encoding::*)($String*)>(&AudioFormat$Encoding::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _AudioFormat$Encoding_InnerClassesInfo_[] = {
	{"javax.sound.sampled.AudioFormat$Encoding", "javax.sound.sampled.AudioFormat", "Encoding", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AudioFormat$Encoding_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.AudioFormat$Encoding",
	"java.lang.Object",
	nullptr,
	_AudioFormat$Encoding_FieldInfo_,
	_AudioFormat$Encoding_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFormat$Encoding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.sampled.AudioFormat"
};

$Object* allocate$AudioFormat$Encoding($Class* clazz) {
	return $of($alloc(AudioFormat$Encoding));
}

AudioFormat$Encoding* AudioFormat$Encoding::PCM_SIGNED = nullptr;
AudioFormat$Encoding* AudioFormat$Encoding::PCM_UNSIGNED = nullptr;
AudioFormat$Encoding* AudioFormat$Encoding::PCM_FLOAT = nullptr;
AudioFormat$Encoding* AudioFormat$Encoding::ULAW = nullptr;
AudioFormat$Encoding* AudioFormat$Encoding::ALAW = nullptr;

void AudioFormat$Encoding::init$($String* name) {
	$set(this, name, name);
}

bool AudioFormat$Encoding::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(AudioFormat$Encoding, obj))) {
		return false;
	}
	return $Objects::equals(this->name, $nc(($cast(AudioFormat$Encoding, obj)))->name);
}

int32_t AudioFormat$Encoding::hashCode() {
	return this->name != nullptr ? $nc(this->name)->hashCode() : 0;
}

$String* AudioFormat$Encoding::toString() {
	return this->name;
}

void clinit$AudioFormat$Encoding($Class* class$) {
	$assignStatic(AudioFormat$Encoding::PCM_SIGNED, $new(AudioFormat$Encoding, "PCM_SIGNED"_s));
	$assignStatic(AudioFormat$Encoding::PCM_UNSIGNED, $new(AudioFormat$Encoding, "PCM_UNSIGNED"_s));
	$assignStatic(AudioFormat$Encoding::PCM_FLOAT, $new(AudioFormat$Encoding, "PCM_FLOAT"_s));
	$assignStatic(AudioFormat$Encoding::ULAW, $new(AudioFormat$Encoding, "ULAW"_s));
	$assignStatic(AudioFormat$Encoding::ALAW, $new(AudioFormat$Encoding, "ALAW"_s));
}

AudioFormat$Encoding::AudioFormat$Encoding() {
}

$Class* AudioFormat$Encoding::load$($String* name, bool initialize) {
	$loadClass(AudioFormat$Encoding, name, initialize, &_AudioFormat$Encoding_ClassInfo_, clinit$AudioFormat$Encoding, allocate$AudioFormat$Encoding);
	return class$;
}

$Class* AudioFormat$Encoding::class$ = nullptr;

		} // sampled
	} // sound
} // javax