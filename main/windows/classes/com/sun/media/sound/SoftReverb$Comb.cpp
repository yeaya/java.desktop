#include <com/sun/media/sound/SoftReverb$Comb.h>

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

$FieldInfo _SoftReverb$Comb_FieldInfo_[] = {
	{"delaybuffer", "[F", nullptr, $PRIVATE | $FINAL, $field(SoftReverb$Comb, delaybuffer)},
	{"delaybuffersize", "I", nullptr, $PRIVATE | $FINAL, $field(SoftReverb$Comb, delaybuffersize)},
	{"rovepos", "I", nullptr, $PRIVATE, $field(SoftReverb$Comb, rovepos)},
	{"feedback", "F", nullptr, $PRIVATE, $field(SoftReverb$Comb, feedback)},
	{"filtertemp", "F", nullptr, $PRIVATE, $field(SoftReverb$Comb, filtertemp)},
	{"filtercoeff1", "F", nullptr, $PRIVATE, $field(SoftReverb$Comb, filtercoeff1)},
	{"filtercoeff2", "F", nullptr, $PRIVATE, $field(SoftReverb$Comb, filtercoeff2)},
	{}
};

$MethodInfo _SoftReverb$Comb_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(SoftReverb$Comb::*)(int32_t)>(&SoftReverb$Comb::init$))},
	{"processMix", "([F[F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb$Comb::*)($floats*,$floats*)>(&SoftReverb$Comb::processMix))},
	{"processReplace", "([F[F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb$Comb::*)($floats*,$floats*)>(&SoftReverb$Comb::processReplace))},
	{"setDamp", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb$Comb::*)(float)>(&SoftReverb$Comb::setDamp))},
	{"setFeedBack", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReverb$Comb::*)(float)>(&SoftReverb$Comb::setFeedBack))},
	{}
};

$InnerClassInfo _SoftReverb$Comb_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftReverb$Comb", "com.sun.media.sound.SoftReverb", "Comb", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SoftReverb$Comb_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftReverb$Comb",
	"java.lang.Object",
	nullptr,
	_SoftReverb$Comb_FieldInfo_,
	_SoftReverb$Comb_MethodInfo_,
	nullptr,
	nullptr,
	_SoftReverb$Comb_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftReverb"
};

$Object* allocate$SoftReverb$Comb($Class* clazz) {
	return $of($alloc(SoftReverb$Comb));
}

void SoftReverb$Comb::init$(int32_t size) {
	this->rovepos = 0;
	this->filtertemp = (float)0;
	this->filtercoeff1 = (float)0;
	this->filtercoeff2 = (float)1;
	$set(this, delaybuffer, $new($floats, size));
	this->delaybuffersize = size;
}

void SoftReverb$Comb::setFeedBack(float feedback) {
	this->feedback = feedback;
	this->filtercoeff2 = (1 - this->filtercoeff1) * feedback;
}

void SoftReverb$Comb::processMix($floats* in, $floats* out) {
	int32_t len = $nc(in)->length;
	int32_t delaybuffersize = this->delaybuffersize;
	int32_t rovepos = this->rovepos;
	float filtertemp = this->filtertemp;
	float filtercoeff1 = this->filtercoeff1;
	float filtercoeff2 = this->filtercoeff2;
	for (int32_t i = 0; i < len; ++i) {
		float delayout = $nc(this->delaybuffer)->get(rovepos);
		filtertemp = (delayout * filtercoeff2) + (filtertemp * filtercoeff1);
		(*$nc(out))[i] += delayout;
		$nc(this->delaybuffer)->set(rovepos, in->get(i) + filtertemp);
		if (++rovepos == delaybuffersize) {
			rovepos = 0;
		}
	}
	this->filtertemp = filtertemp;
	this->rovepos = rovepos;
}

void SoftReverb$Comb::processReplace($floats* in, $floats* out) {
	int32_t len = $nc(in)->length;
	int32_t delaybuffersize = this->delaybuffersize;
	int32_t rovepos = this->rovepos;
	float filtertemp = this->filtertemp;
	float filtercoeff1 = this->filtercoeff1;
	float filtercoeff2 = this->filtercoeff2;
	for (int32_t i = 0; i < len; ++i) {
		float delayout = $nc(this->delaybuffer)->get(rovepos);
		filtertemp = (delayout * filtercoeff2) + (filtertemp * filtercoeff1);
		$nc(out)->set(i, delayout);
		$nc(this->delaybuffer)->set(rovepos, in->get(i) + filtertemp);
		if (++rovepos == delaybuffersize) {
			rovepos = 0;
		}
	}
	this->filtertemp = filtertemp;
	this->rovepos = rovepos;
}

void SoftReverb$Comb::setDamp(float val) {
	this->filtercoeff1 = val;
	this->filtercoeff2 = (1 - this->filtercoeff1) * this->feedback;
}

SoftReverb$Comb::SoftReverb$Comb() {
}

$Class* SoftReverb$Comb::load$($String* name, bool initialize) {
	$loadClass(SoftReverb$Comb, name, initialize, &_SoftReverb$Comb_ClassInfo_, allocate$SoftReverb$Comb);
	return class$;
}

$Class* SoftReverb$Comb::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com