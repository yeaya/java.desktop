#include <javax/sound/sampled/AudioPermission.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _AudioPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AudioPermission, serialVersionUID)},
	{}
};

$MethodInfo _AudioPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AudioPermission::*)($String*)>(&AudioPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AudioPermission::*)($String*,$String*)>(&AudioPermission::init$))},
	{}
};

$ClassInfo _AudioPermission_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.AudioPermission",
	"java.security.BasicPermission",
	nullptr,
	_AudioPermission_FieldInfo_,
	_AudioPermission_MethodInfo_
};

$Object* allocate$AudioPermission($Class* clazz) {
	return $of($alloc(AudioPermission));
}

void AudioPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void AudioPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

AudioPermission::AudioPermission() {
}

$Class* AudioPermission::load$($String* name, bool initialize) {
	$loadClass(AudioPermission, name, initialize, &_AudioPermission_ClassInfo_, allocate$AudioPermission);
	return class$;
}

$Class* AudioPermission::class$ = nullptr;

		} // sampled
	} // sound
} // javax