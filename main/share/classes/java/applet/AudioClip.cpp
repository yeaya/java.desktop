#include <java/applet/AudioClip.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace applet {

$NamedAttribute AudioClip_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _AudioClip_Annotations_[] = {
	{"Ljava/lang/Deprecated;", AudioClip_Attribute_var$0},
	{}
};

$MethodInfo _AudioClip_MethodInfo_[] = {
	{"loop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"play", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AudioClip_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.applet.AudioClip",
	nullptr,
	nullptr,
	nullptr,
	_AudioClip_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AudioClip_Annotations_
};

$Object* allocate$AudioClip($Class* clazz) {
	return $of($alloc(AudioClip));
}

$Class* AudioClip::load$($String* name, bool initialize) {
	$loadClass(AudioClip, name, initialize, &_AudioClip_ClassInfo_, allocate$AudioClip);
	return class$;
}

$Class* AudioClip::class$ = nullptr;

	} // applet
} // java