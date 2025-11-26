#include <javax/sound/sampled/ReverbType.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _ReverbType_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ReverbType, name)},
	{"earlyReflectionDelay", "I", nullptr, $PRIVATE | $FINAL, $field(ReverbType, earlyReflectionDelay)},
	{"earlyReflectionIntensity", "F", nullptr, $PRIVATE | $FINAL, $field(ReverbType, earlyReflectionIntensity)},
	{"lateReflectionDelay", "I", nullptr, $PRIVATE | $FINAL, $field(ReverbType, lateReflectionDelay)},
	{"lateReflectionIntensity", "F", nullptr, $PRIVATE | $FINAL, $field(ReverbType, lateReflectionIntensity)},
	{"decayTime", "I", nullptr, $PRIVATE | $FINAL, $field(ReverbType, decayTime)},
	{}
};

$MethodInfo _ReverbType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IFIFI)V", nullptr, $PROTECTED, $method(static_cast<void(ReverbType::*)($String*,int32_t,float,int32_t,float,int32_t)>(&ReverbType::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"getDecayTime", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ReverbType::*)()>(&ReverbType::getDecayTime))},
	{"getEarlyReflectionDelay", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ReverbType::*)()>(&ReverbType::getEarlyReflectionDelay))},
	{"getEarlyReflectionIntensity", "()F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(ReverbType::*)()>(&ReverbType::getEarlyReflectionIntensity))},
	{"getLateReflectionDelay", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ReverbType::*)()>(&ReverbType::getLateReflectionDelay))},
	{"getLateReflectionIntensity", "()F", nullptr, $PUBLIC | $FINAL, $method(static_cast<float(ReverbType::*)()>(&ReverbType::getLateReflectionIntensity))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _ReverbType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.ReverbType",
	"java.lang.Object",
	nullptr,
	_ReverbType_FieldInfo_,
	_ReverbType_MethodInfo_
};

$Object* allocate$ReverbType($Class* clazz) {
	return $of($alloc(ReverbType));
}

void ReverbType::init$($String* name, int32_t earlyReflectionDelay, float earlyReflectionIntensity, int32_t lateReflectionDelay, float lateReflectionIntensity, int32_t decayTime) {
	$set(this, name, name);
	this->earlyReflectionDelay = earlyReflectionDelay;
	this->earlyReflectionIntensity = earlyReflectionIntensity;
	this->lateReflectionDelay = lateReflectionDelay;
	this->lateReflectionIntensity = lateReflectionIntensity;
	this->decayTime = decayTime;
}

$String* ReverbType::getName() {
	return this->name;
}

int32_t ReverbType::getEarlyReflectionDelay() {
	return this->earlyReflectionDelay;
}

float ReverbType::getEarlyReflectionIntensity() {
	return this->earlyReflectionIntensity;
}

int32_t ReverbType::getLateReflectionDelay() {
	return this->lateReflectionDelay;
}

float ReverbType::getLateReflectionIntensity() {
	return this->lateReflectionIntensity;
}

int32_t ReverbType::getDecayTime() {
	return this->decayTime;
}

bool ReverbType::equals(Object$* obj) {
	return $Object::equals(obj);
}

int32_t ReverbType::hashCode() {
	return $Object::hashCode();
}

$String* ReverbType::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s, early reflection delay %d ns, early reflection intensity %s dB, late deflection delay %d ns, late reflection intensity %s dB, decay time %d"_s, $$new($ObjectArray, {
		$($of(getName())),
		$($of($Integer::valueOf(this->earlyReflectionDelay))),
		$($of($Float::valueOf(this->earlyReflectionIntensity))),
		$($of($Integer::valueOf(this->lateReflectionDelay))),
		$($of($Float::valueOf(this->lateReflectionIntensity))),
		$($of($Integer::valueOf(this->decayTime)))
	}));
}

ReverbType::ReverbType() {
}

$Class* ReverbType::load$($String* name, bool initialize) {
	$loadClass(ReverbType, name, initialize, &_ReverbType_ClassInfo_, allocate$ReverbType);
	return class$;
}

$Class* ReverbType::class$ = nullptr;

		} // sampled
	} // sound
} // javax