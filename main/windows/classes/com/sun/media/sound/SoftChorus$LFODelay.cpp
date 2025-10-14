#include <com/sun/media/sound/SoftChorus$LFODelay.h>

#include <com/sun/media/sound/SoftChorus$VariableDelay.h>
#include <com/sun/media/sound/SoftChorus.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef PI

using $SoftChorus = ::com::sun::media::sound::SoftChorus;
using $SoftChorus$VariableDelay = ::com::sun::media::sound::SoftChorus$VariableDelay;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftChorus$LFODelay_FieldInfo_[] = {
	{"phase", "D", nullptr, $PRIVATE, $field(SoftChorus$LFODelay, phase)},
	{"phase_step", "D", nullptr, $PRIVATE, $field(SoftChorus$LFODelay, phase_step)},
	{"depth", "D", nullptr, $PRIVATE, $field(SoftChorus$LFODelay, depth)},
	{"vdelay", "Lcom/sun/media/sound/SoftChorus$VariableDelay;", nullptr, $PRIVATE, $field(SoftChorus$LFODelay, vdelay)},
	{"samplerate", "D", nullptr, $PRIVATE | $FINAL, $field(SoftChorus$LFODelay, samplerate)},
	{"controlrate", "D", nullptr, $PRIVATE | $FINAL, $field(SoftChorus$LFODelay, controlrate)},
	{}
};

$MethodInfo _SoftChorus$LFODelay_MethodInfo_[] = {
	{"<init>", "(DD)V", nullptr, 0, $method(static_cast<void(SoftChorus$LFODelay::*)(double,double)>(&SoftChorus$LFODelay::init$))},
	{"processMix", "([F[F[F)V", nullptr, $PUBLIC},
	{"processReplace", "([F[F[F)V", nullptr, $PUBLIC},
	{"setDepth", "(D)V", nullptr, $PUBLIC},
	{"setFeedBack", "(F)V", nullptr, $PUBLIC},
	{"setGain", "(F)V", nullptr, $PUBLIC},
	{"setPhase", "(D)V", nullptr, $PUBLIC},
	{"setRate", "(D)V", nullptr, $PUBLIC},
	{"setReverbSendGain", "(F)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftChorus$LFODelay_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftChorus$LFODelay", "com.sun.media.sound.SoftChorus", "LFODelay", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SoftChorus$LFODelay_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftChorus$LFODelay",
	"java.lang.Object",
	nullptr,
	_SoftChorus$LFODelay_FieldInfo_,
	_SoftChorus$LFODelay_MethodInfo_,
	nullptr,
	nullptr,
	_SoftChorus$LFODelay_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftChorus"
};

$Object* allocate$SoftChorus$LFODelay($Class* clazz) {
	return $of($alloc(SoftChorus$LFODelay));
}

void SoftChorus$LFODelay::init$(double samplerate, double controlrate) {
	this->phase = (double)1;
	this->phase_step = (double)0;
	this->depth = (double)0;
	this->samplerate = samplerate;
	this->controlrate = controlrate;
	$set(this, vdelay, $new($SoftChorus$VariableDelay, $cast(int32_t, ((this->depth + 10) * 2))));
}

void SoftChorus$LFODelay::setDepth(double depth) {
	this->depth = depth * this->samplerate;
	$set(this, vdelay, $new($SoftChorus$VariableDelay, $cast(int32_t, ((this->depth + 10) * 2))));
}

void SoftChorus$LFODelay::setRate(double rate) {
	$init($Math);
	double g = ($Math::PI * 2) * (rate / this->controlrate);
	this->phase_step = g;
}

void SoftChorus$LFODelay::setPhase(double phase) {
	this->phase = phase;
}

void SoftChorus$LFODelay::setFeedBack(float feedback) {
	$nc(this->vdelay)->setFeedBack(feedback);
}

void SoftChorus$LFODelay::setGain(float gain) {
	$nc(this->vdelay)->setGain(gain);
}

void SoftChorus$LFODelay::setReverbSendGain(float rgain) {
	$nc(this->vdelay)->setReverbSendGain(rgain);
}

void SoftChorus$LFODelay::processMix($floats* in, $floats* out, $floats* rout) {
	this->phase += this->phase_step;
	$init($Math);
	while (this->phase > ($Math::PI * 2)) {
		this->phase -= ($Math::PI * 2);
	}
	$nc(this->vdelay)->setDelay((float)(this->depth * 0.5 * ($Math::cos(this->phase) + 2)));
	$nc(this->vdelay)->processMix(in, out, rout);
}

void SoftChorus$LFODelay::processReplace($floats* in, $floats* out, $floats* rout) {
	this->phase += this->phase_step;
	$init($Math);
	while (this->phase > ($Math::PI * 2)) {
		this->phase -= ($Math::PI * 2);
	}
	$nc(this->vdelay)->setDelay((float)(this->depth * 0.5 * ($Math::cos(this->phase) + 2)));
	$nc(this->vdelay)->processReplace(in, out, rout);
}

SoftChorus$LFODelay::SoftChorus$LFODelay() {
}

$Class* SoftChorus$LFODelay::load$($String* name, bool initialize) {
	$loadClass(SoftChorus$LFODelay, name, initialize, &_SoftChorus$LFODelay_ClassInfo_, allocate$SoftChorus$LFODelay);
	return class$;
}

$Class* SoftChorus$LFODelay::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com