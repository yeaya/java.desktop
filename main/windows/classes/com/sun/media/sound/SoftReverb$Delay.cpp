#include <com/sun/media/sound/SoftReverb$Delay.h>

#include <com/sun/media/sound/SoftReverb.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SoftReverb = ::com::sun::media::sound::SoftReverb;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftReverb$Delay_FieldInfo_[] = {
	{"delaybuffer", "[F", nullptr, $PRIVATE, $field(SoftReverb$Delay, delaybuffer)},
	{"rovepos", "I", nullptr, $PRIVATE, $field(SoftReverb$Delay, rovepos)},
	{}
};

$MethodInfo _SoftReverb$Delay_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SoftReverb$Delay::*)()>(&SoftReverb$Delay::init$))},
	{"processReplace", "([F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb$Delay::*)($floats*)>(&SoftReverb$Delay::processReplace))},
	{"setDelay", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb$Delay::*)(int32_t)>(&SoftReverb$Delay::setDelay))},
	{}
};

$InnerClassInfo _SoftReverb$Delay_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftReverb$Delay", "com.sun.media.sound.SoftReverb", "Delay", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SoftReverb$Delay_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftReverb$Delay",
	"java.lang.Object",
	nullptr,
	_SoftReverb$Delay_FieldInfo_,
	_SoftReverb$Delay_MethodInfo_,
	nullptr,
	nullptr,
	_SoftReverb$Delay_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftReverb"
};

$Object* allocate$SoftReverb$Delay($Class* clazz) {
	return $of($alloc(SoftReverb$Delay));
}

void SoftReverb$Delay::init$() {
	this->rovepos = 0;
	$set(this, delaybuffer, nullptr);
}

void SoftReverb$Delay::setDelay(int32_t delay) {
	if (delay == 0) {
		$set(this, delaybuffer, nullptr);
	} else {
		$set(this, delaybuffer, $new($floats, delay));
	}
	this->rovepos = 0;
}

void SoftReverb$Delay::processReplace($floats* inout) {
	if (this->delaybuffer == nullptr) {
		return;
	}
	int32_t len = $nc(inout)->length;
	int32_t rnlen = $nc(this->delaybuffer)->length;
	int32_t rovepos = this->rovepos;
	for (int32_t i = 0; i < len; ++i) {
		float x = inout->get(i);
		inout->set(i, $nc(this->delaybuffer)->get(rovepos));
		$nc(this->delaybuffer)->set(rovepos, x);
		if (++rovepos == rnlen) {
			rovepos = 0;
		}
	}
	this->rovepos = rovepos;
}

SoftReverb$Delay::SoftReverb$Delay() {
}

$Class* SoftReverb$Delay::load$($String* name, bool initialize) {
	$loadClass(SoftReverb$Delay, name, initialize, &_SoftReverb$Delay_ClassInfo_, allocate$SoftReverb$Delay);
	return class$;
}

$Class* SoftReverb$Delay::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com