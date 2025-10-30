#include <com/sun/media/sound/DLSRegion.h>

#include <com/sun/media/sound/DLSSample.h>
#include <com/sun/media/sound/DLSSampleOptions.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef OPTION_SELFNONEXCLUSIVE

using $DLSSample = ::com::sun::media::sound::DLSSample;
using $DLSSampleOptions = ::com::sun::media::sound::DLSSampleOptions;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DLSRegion_FieldInfo_[] = {
	{"OPTION_SELFNONEXCLUSIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSRegion, OPTION_SELFNONEXCLUSIVE)},
	{"modulators", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/DLSModulator;>;", 0, $field(DLSRegion, modulators)},
	{"keyfrom", "I", nullptr, 0, $field(DLSRegion, keyfrom)},
	{"keyto", "I", nullptr, 0, $field(DLSRegion, keyto)},
	{"velfrom", "I", nullptr, 0, $field(DLSRegion, velfrom)},
	{"velto", "I", nullptr, 0, $field(DLSRegion, velto)},
	{"options", "I", nullptr, 0, $field(DLSRegion, options)},
	{"exclusiveClass", "I", nullptr, 0, $field(DLSRegion, exclusiveClass)},
	{"fusoptions", "I", nullptr, 0, $field(DLSRegion, fusoptions)},
	{"phasegroup", "I", nullptr, 0, $field(DLSRegion, phasegroup)},
	{"channel", "J", nullptr, 0, $field(DLSRegion, channel)},
	{"sample", "Lcom/sun/media/sound/DLSSample;", nullptr, 0, $field(DLSRegion, sample)},
	{"sampleoptions", "Lcom/sun/media/sound/DLSSampleOptions;", nullptr, 0, $field(DLSRegion, sampleoptions)},
	{}
};

$MethodInfo _DLSRegion_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DLSRegion::*)()>(&DLSRegion::init$))},
	{"getChannel", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(DLSRegion::*)()>(&DLSRegion::getChannel))},
	{"getExclusiveClass", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSRegion::*)()>(&DLSRegion::getExclusiveClass))},
	{"getFusoptions", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSRegion::*)()>(&DLSRegion::getFusoptions))},
	{"getKeyfrom", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSRegion::*)()>(&DLSRegion::getKeyfrom))},
	{"getKeyto", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSRegion::*)()>(&DLSRegion::getKeyto))},
	{"getModulators", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/media/sound/DLSModulator;>;", $PUBLIC, $method(static_cast<$List*(DLSRegion::*)()>(&DLSRegion::getModulators))},
	{"getOptions", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSRegion::*)()>(&DLSRegion::getOptions))},
	{"getPhasegroup", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSRegion::*)()>(&DLSRegion::getPhasegroup))},
	{"getSample", "()Lcom/sun/media/sound/DLSSample;", nullptr, $PUBLIC, $method(static_cast<$DLSSample*(DLSRegion::*)()>(&DLSRegion::getSample))},
	{"getSampleoptions", "()Lcom/sun/media/sound/DLSSampleOptions;", nullptr, $PUBLIC, $method(static_cast<$DLSSampleOptions*(DLSRegion::*)()>(&DLSRegion::getSampleoptions))},
	{"getVelfrom", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSRegion::*)()>(&DLSRegion::getVelfrom))},
	{"getVelto", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSRegion::*)()>(&DLSRegion::getVelto))},
	{"setChannel", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(DLSRegion::*)(int64_t)>(&DLSRegion::setChannel))},
	{"setExclusiveClass", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSRegion::*)(int32_t)>(&DLSRegion::setExclusiveClass))},
	{"setFusoptions", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSRegion::*)(int32_t)>(&DLSRegion::setFusoptions))},
	{"setKeyfrom", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSRegion::*)(int32_t)>(&DLSRegion::setKeyfrom))},
	{"setKeyto", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSRegion::*)(int32_t)>(&DLSRegion::setKeyto))},
	{"setModulators", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/media/sound/DLSModulator;>;)V", $PUBLIC, $method(static_cast<void(DLSRegion::*)($List*)>(&DLSRegion::setModulators))},
	{"setOptions", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSRegion::*)(int32_t)>(&DLSRegion::setOptions))},
	{"setPhasegroup", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSRegion::*)(int32_t)>(&DLSRegion::setPhasegroup))},
	{"setSample", "(Lcom/sun/media/sound/DLSSample;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSRegion::*)($DLSSample*)>(&DLSRegion::setSample))},
	{"setSampleoptions", "(Lcom/sun/media/sound/DLSSampleOptions;)V", nullptr, $PUBLIC, $method(static_cast<void(DLSRegion::*)($DLSSampleOptions*)>(&DLSRegion::setSampleoptions))},
	{"setVelfrom", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSRegion::*)(int32_t)>(&DLSRegion::setVelfrom))},
	{"setVelto", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSRegion::*)(int32_t)>(&DLSRegion::setVelto))},
	{}
};

$ClassInfo _DLSRegion_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DLSRegion",
	"java.lang.Object",
	nullptr,
	_DLSRegion_FieldInfo_,
	_DLSRegion_MethodInfo_
};

$Object* allocate$DLSRegion($Class* clazz) {
	return $of($alloc(DLSRegion));
}

void DLSRegion::init$() {
	$set(this, modulators, $new($ArrayList));
	$set(this, sample, nullptr);
}

$List* DLSRegion::getModulators() {
	return this->modulators;
}

int64_t DLSRegion::getChannel() {
	return this->channel;
}

void DLSRegion::setChannel(int64_t channel) {
	this->channel = channel;
}

int32_t DLSRegion::getExclusiveClass() {
	return this->exclusiveClass;
}

void DLSRegion::setExclusiveClass(int32_t exclusiveClass) {
	this->exclusiveClass = exclusiveClass;
}

int32_t DLSRegion::getFusoptions() {
	return this->fusoptions;
}

void DLSRegion::setFusoptions(int32_t fusoptions) {
	this->fusoptions = fusoptions;
}

int32_t DLSRegion::getKeyfrom() {
	return this->keyfrom;
}

void DLSRegion::setKeyfrom(int32_t keyfrom) {
	this->keyfrom = keyfrom;
}

int32_t DLSRegion::getKeyto() {
	return this->keyto;
}

void DLSRegion::setKeyto(int32_t keyto) {
	this->keyto = keyto;
}

int32_t DLSRegion::getOptions() {
	return this->options;
}

void DLSRegion::setOptions(int32_t options) {
	this->options = options;
}

int32_t DLSRegion::getPhasegroup() {
	return this->phasegroup;
}

void DLSRegion::setPhasegroup(int32_t phasegroup) {
	this->phasegroup = phasegroup;
}

$DLSSample* DLSRegion::getSample() {
	return this->sample;
}

void DLSRegion::setSample($DLSSample* sample) {
	$set(this, sample, sample);
}

int32_t DLSRegion::getVelfrom() {
	return this->velfrom;
}

void DLSRegion::setVelfrom(int32_t velfrom) {
	this->velfrom = velfrom;
}

int32_t DLSRegion::getVelto() {
	return this->velto;
}

void DLSRegion::setVelto(int32_t velto) {
	this->velto = velto;
}

void DLSRegion::setModulators($List* modulators) {
	$set(this, modulators, modulators);
}

$DLSSampleOptions* DLSRegion::getSampleoptions() {
	return this->sampleoptions;
}

void DLSRegion::setSampleoptions($DLSSampleOptions* sampleOptions) {
	$set(this, sampleoptions, sampleOptions);
}

DLSRegion::DLSRegion() {
}

$Class* DLSRegion::load$($String* name, bool initialize) {
	$loadClass(DLSRegion, name, initialize, &_DLSRegion_ClassInfo_, allocate$DLSRegion);
	return class$;
}

$Class* DLSRegion::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com