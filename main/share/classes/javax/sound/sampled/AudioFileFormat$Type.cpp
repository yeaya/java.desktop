#include <javax/sound/sampled/AudioFileFormat$Type.h>

#include <java/util/Objects.h>
#include <javax/sound/sampled/AudioFileFormat.h>
#include <jcpp.h>

#undef AIFC
#undef AIFF
#undef AU
#undef SND
#undef WAVE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _AudioFileFormat$Type_FieldInfo_[] = {
	{"WAVE", "Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AudioFileFormat$Type, WAVE)},
	{"AU", "Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AudioFileFormat$Type, AU)},
	{"AIFF", "Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AudioFileFormat$Type, AIFF)},
	{"AIFC", "Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AudioFileFormat$Type, AIFC)},
	{"SND", "Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AudioFileFormat$Type, SND)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AudioFileFormat$Type, name)},
	{"extension", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AudioFileFormat$Type, extension)},
	{}
};

$MethodInfo _AudioFileFormat$Type_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AudioFileFormat$Type::*)($String*,$String*)>(&AudioFileFormat$Type::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"getExtension", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _AudioFileFormat$Type_InnerClassesInfo_[] = {
	{"javax.sound.sampled.AudioFileFormat$Type", "javax.sound.sampled.AudioFileFormat", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AudioFileFormat$Type_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.AudioFileFormat$Type",
	"java.lang.Object",
	nullptr,
	_AudioFileFormat$Type_FieldInfo_,
	_AudioFileFormat$Type_MethodInfo_,
	nullptr,
	nullptr,
	_AudioFileFormat$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.sampled.AudioFileFormat"
};

$Object* allocate$AudioFileFormat$Type($Class* clazz) {
	return $of($alloc(AudioFileFormat$Type));
}

AudioFileFormat$Type* AudioFileFormat$Type::WAVE = nullptr;
AudioFileFormat$Type* AudioFileFormat$Type::AU = nullptr;
AudioFileFormat$Type* AudioFileFormat$Type::AIFF = nullptr;
AudioFileFormat$Type* AudioFileFormat$Type::AIFC = nullptr;
AudioFileFormat$Type* AudioFileFormat$Type::SND = nullptr;

void AudioFileFormat$Type::init$($String* name, $String* extension) {
	$set(this, name, name);
	$set(this, extension, extension);
}

bool AudioFileFormat$Type::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(AudioFileFormat$Type, obj))) {
		return false;
	}
	return $Objects::equals(this->name, $nc(($cast(AudioFileFormat$Type, obj)))->name);
}

int32_t AudioFileFormat$Type::hashCode() {
	return this->name != nullptr ? $nc(this->name)->hashCode() : 0;
}

$String* AudioFileFormat$Type::toString() {
	return this->name;
}

$String* AudioFileFormat$Type::getExtension() {
	return this->extension;
}

void clinit$AudioFileFormat$Type($Class* class$) {
	$assignStatic(AudioFileFormat$Type::WAVE, $new(AudioFileFormat$Type, "WAVE"_s, "wav"_s));
	$assignStatic(AudioFileFormat$Type::AU, $new(AudioFileFormat$Type, "AU"_s, "au"_s));
	$assignStatic(AudioFileFormat$Type::AIFF, $new(AudioFileFormat$Type, "AIFF"_s, "aif"_s));
	$assignStatic(AudioFileFormat$Type::AIFC, $new(AudioFileFormat$Type, "AIFF-C"_s, "aifc"_s));
	$assignStatic(AudioFileFormat$Type::SND, $new(AudioFileFormat$Type, "SND"_s, "snd"_s));
}

AudioFileFormat$Type::AudioFileFormat$Type() {
}

$Class* AudioFileFormat$Type::load$($String* name, bool initialize) {
	$loadClass(AudioFileFormat$Type, name, initialize, &_AudioFileFormat$Type_ClassInfo_, clinit$AudioFileFormat$Type, allocate$AudioFileFormat$Type);
	return class$;
}

$Class* AudioFileFormat$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax