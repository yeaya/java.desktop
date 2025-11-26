#include <com/sun/media/sound/SoftReverb$AllPass.h>

#include <com/sun/media/sound/SoftReverb.h>
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

$FieldInfo _SoftReverb$AllPass_FieldInfo_[] = {
	{"delaybuffer", "[F", nullptr, $PRIVATE | $FINAL, $field(SoftReverb$AllPass, delaybuffer)},
	{"delaybuffersize", "I", nullptr, $PRIVATE | $FINAL, $field(SoftReverb$AllPass, delaybuffersize)},
	{"rovepos", "I", nullptr, $PRIVATE, $field(SoftReverb$AllPass, rovepos)},
	{"feedback", "F", nullptr, $PRIVATE, $field(SoftReverb$AllPass, feedback)},
	{}
};

$MethodInfo _SoftReverb$AllPass_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(SoftReverb$AllPass::*)(int32_t)>(&SoftReverb$AllPass::init$))},
	{"processReplace", "([F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb$AllPass::*)($floats*)>(&SoftReverb$AllPass::processReplace))},
	{"processReplace", "([F[F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb$AllPass::*)($floats*,$floats*)>(&SoftReverb$AllPass::processReplace))},
	{"setFeedBack", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb$AllPass::*)(float)>(&SoftReverb$AllPass::setFeedBack))},
	{}
};

$InnerClassInfo _SoftReverb$AllPass_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftReverb$AllPass", "com.sun.media.sound.SoftReverb", "AllPass", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SoftReverb$AllPass_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftReverb$AllPass",
	"java.lang.Object",
	nullptr,
	_SoftReverb$AllPass_FieldInfo_,
	_SoftReverb$AllPass_MethodInfo_,
	nullptr,
	nullptr,
	_SoftReverb$AllPass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftReverb"
};

$Object* allocate$SoftReverb$AllPass($Class* clazz) {
	return $of($alloc(SoftReverb$AllPass));
}

void SoftReverb$AllPass::init$(int32_t size) {
	this->rovepos = 0;
	$set(this, delaybuffer, $new($floats, size));
	this->delaybuffersize = size;
}

void SoftReverb$AllPass::setFeedBack(float feedback) {
	this->feedback = feedback;
}

void SoftReverb$AllPass::processReplace($floats* inout) {
	int32_t len = $nc(inout)->length;
	int32_t delaybuffersize = this->delaybuffersize;
	int32_t rovepos = this->rovepos;
	for (int32_t i = 0; i < len; ++i) {
		float delayout = $nc(this->delaybuffer)->get(rovepos);
		float input = inout->get(i);
		inout->set(i, delayout - input);
		$nc(this->delaybuffer)->set(rovepos, input + delayout * this->feedback);
		if (++rovepos == delaybuffersize) {
			rovepos = 0;
		}
	}
	this->rovepos = rovepos;
}

void SoftReverb$AllPass::processReplace($floats* in, $floats* out) {
	int32_t len = $nc(in)->length;
	int32_t delaybuffersize = this->delaybuffersize;
	int32_t rovepos = this->rovepos;
	for (int32_t i = 0; i < len; ++i) {
		float delayout = $nc(this->delaybuffer)->get(rovepos);
		float input = in->get(i);
		$nc(out)->set(i, delayout - input);
		$nc(this->delaybuffer)->set(rovepos, input + delayout * this->feedback);
		if (++rovepos == delaybuffersize) {
			rovepos = 0;
		}
	}
	this->rovepos = rovepos;
}

SoftReverb$AllPass::SoftReverb$AllPass() {
}

$Class* SoftReverb$AllPass::load$($String* name, bool initialize) {
	$loadClass(SoftReverb$AllPass, name, initialize, &_SoftReverb$AllPass_ClassInfo_, allocate$SoftReverb$AllPass);
	return class$;
}

$Class* SoftReverb$AllPass::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com