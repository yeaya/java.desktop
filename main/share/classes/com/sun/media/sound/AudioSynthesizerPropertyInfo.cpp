#include <com/sun/media/sound/AudioSynthesizerPropertyInfo.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AudioSynthesizerPropertyInfo_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AudioSynthesizerPropertyInfo, name)},
	{"description", "Ljava/lang/String;", nullptr, $PUBLIC, $field(AudioSynthesizerPropertyInfo, description)},
	{"value", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AudioSynthesizerPropertyInfo, value)},
	{"valueClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PUBLIC, $field(AudioSynthesizerPropertyInfo, valueClass)},
	{"choices", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(AudioSynthesizerPropertyInfo, choices)},
	{}
};

$MethodInfo _AudioSynthesizerPropertyInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(AudioSynthesizerPropertyInfo::*)($String*,Object$*)>(&AudioSynthesizerPropertyInfo::init$))},
	{}
};

$ClassInfo _AudioSynthesizerPropertyInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.AudioSynthesizerPropertyInfo",
	"java.lang.Object",
	nullptr,
	_AudioSynthesizerPropertyInfo_FieldInfo_,
	_AudioSynthesizerPropertyInfo_MethodInfo_
};

$Object* allocate$AudioSynthesizerPropertyInfo($Class* clazz) {
	return $of($alloc(AudioSynthesizerPropertyInfo));
}

void AudioSynthesizerPropertyInfo::init$($String* name, Object$* value) {
	$set(this, description, nullptr);
	$set(this, value, nullptr);
	$set(this, valueClass, nullptr);
	$set(this, choices, nullptr);
	$set(this, name, name);
	if ($instanceOf($Class, value)) {
		$set(this, valueClass, $cast($Class, value));
	} else {
		$set(this, value, value);
		if (value != nullptr) {
			$set(this, valueClass, $of(value)->getClass());
		}
	}
}

AudioSynthesizerPropertyInfo::AudioSynthesizerPropertyInfo() {
}

$Class* AudioSynthesizerPropertyInfo::load$($String* name, bool initialize) {
	$loadClass(AudioSynthesizerPropertyInfo, name, initialize, &_AudioSynthesizerPropertyInfo_ClassInfo_, allocate$AudioSynthesizerPropertyInfo);
	return class$;
}

$Class* AudioSynthesizerPropertyInfo::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com