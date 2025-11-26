#include <com/sun/media/sound/DLSSampleOptions.h>

#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

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

$FieldInfo _DLSSampleOptions_FieldInfo_[] = {
	{"unitynote", "I", nullptr, 0, $field(DLSSampleOptions, unitynote)},
	{"finetune", "S", nullptr, 0, $field(DLSSampleOptions, finetune)},
	{"attenuation", "I", nullptr, 0, $field(DLSSampleOptions, attenuation)},
	{"options", "J", nullptr, 0, $field(DLSSampleOptions, options)},
	{"loops", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/DLSSampleLoop;>;", 0, $field(DLSSampleOptions, loops)},
	{}
};

$MethodInfo _DLSSampleOptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DLSSampleOptions::*)()>(&DLSSampleOptions::init$))},
	{"getAttenuation", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSSampleOptions::*)()>(&DLSSampleOptions::getAttenuation))},
	{"getFinetune", "()S", nullptr, $PUBLIC, $method(static_cast<int16_t(DLSSampleOptions::*)()>(&DLSSampleOptions::getFinetune))},
	{"getLoops", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/media/sound/DLSSampleLoop;>;", $PUBLIC, $method(static_cast<$List*(DLSSampleOptions::*)()>(&DLSSampleOptions::getLoops))},
	{"getOptions", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(DLSSampleOptions::*)()>(&DLSSampleOptions::getOptions))},
	{"getUnitynote", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DLSSampleOptions::*)()>(&DLSSampleOptions::getUnitynote))},
	{"setAttenuation", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSampleOptions::*)(int32_t)>(&DLSSampleOptions::setAttenuation))},
	{"setFinetune", "(S)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSampleOptions::*)(int16_t)>(&DLSSampleOptions::setFinetune))},
	{"setOptions", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSampleOptions::*)(int64_t)>(&DLSSampleOptions::setOptions))},
	{"setUnitynote", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSampleOptions::*)(int32_t)>(&DLSSampleOptions::setUnitynote))},
	{}
};

$ClassInfo _DLSSampleOptions_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DLSSampleOptions",
	"java.lang.Object",
	nullptr,
	_DLSSampleOptions_FieldInfo_,
	_DLSSampleOptions_MethodInfo_
};

$Object* allocate$DLSSampleOptions($Class* clazz) {
	return $of($alloc(DLSSampleOptions));
}

void DLSSampleOptions::init$() {
	$set(this, loops, $new($ArrayList));
}

int32_t DLSSampleOptions::getAttenuation() {
	return this->attenuation;
}

void DLSSampleOptions::setAttenuation(int32_t attenuation) {
	this->attenuation = attenuation;
}

int16_t DLSSampleOptions::getFinetune() {
	return this->finetune;
}

void DLSSampleOptions::setFinetune(int16_t finetune) {
	this->finetune = finetune;
}

$List* DLSSampleOptions::getLoops() {
	return this->loops;
}

int64_t DLSSampleOptions::getOptions() {
	return this->options;
}

void DLSSampleOptions::setOptions(int64_t options) {
	this->options = options;
}

int32_t DLSSampleOptions::getUnitynote() {
	return this->unitynote;
}

void DLSSampleOptions::setUnitynote(int32_t unitynote) {
	this->unitynote = unitynote;
}

DLSSampleOptions::DLSSampleOptions() {
}

$Class* DLSSampleOptions::load$($String* name, bool initialize) {
	$loadClass(DLSSampleOptions, name, initialize, &_DLSSampleOptions_ClassInfo_, allocate$DLSSampleOptions);
	return class$;
}

$Class* DLSSampleOptions::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com