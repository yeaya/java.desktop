#include <com/sun/media/sound/ModelIdentifier.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelIdentifier_FieldInfo_[] = {
	{"object", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ModelIdentifier, object)},
	{"variable", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ModelIdentifier, variable)},
	{"instance", "I", nullptr, $PRIVATE, $field(ModelIdentifier, instance)},
	{}
};

$MethodInfo _ModelIdentifier_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelIdentifier::*)($String*)>(&ModelIdentifier::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(ModelIdentifier::*)($String*,int32_t)>(&ModelIdentifier::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelIdentifier::*)($String*,$String*)>(&ModelIdentifier::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(ModelIdentifier::*)($String*,$String*,int32_t)>(&ModelIdentifier::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getInstance", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ModelIdentifier::*)()>(&ModelIdentifier::getInstance))},
	{"getObject", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ModelIdentifier::*)()>(&ModelIdentifier::getObject))},
	{"getVariable", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ModelIdentifier::*)()>(&ModelIdentifier::getVariable))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setInstance", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ModelIdentifier::*)(int32_t)>(&ModelIdentifier::setInstance))},
	{"setObject", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelIdentifier::*)($String*)>(&ModelIdentifier::setObject))},
	{"setVariable", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ModelIdentifier::*)($String*)>(&ModelIdentifier::setVariable))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModelIdentifier_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.ModelIdentifier",
	"java.lang.Object",
	nullptr,
	_ModelIdentifier_FieldInfo_,
	_ModelIdentifier_MethodInfo_
};

$Object* allocate$ModelIdentifier($Class* clazz) {
	return $of($alloc(ModelIdentifier));
}

void ModelIdentifier::init$($String* object) {
	$set(this, object, nullptr);
	$set(this, variable, nullptr);
	this->instance = 0;
	$set(this, object, object);
}

void ModelIdentifier::init$($String* object, int32_t instance) {
	$set(this, object, nullptr);
	$set(this, variable, nullptr);
	this->instance = 0;
	$set(this, object, object);
	this->instance = instance;
}

void ModelIdentifier::init$($String* object, $String* variable) {
	$set(this, object, nullptr);
	$set(this, variable, nullptr);
	this->instance = 0;
	$set(this, object, object);
	$set(this, variable, variable);
}

void ModelIdentifier::init$($String* object, $String* variable, int32_t instance) {
	$set(this, object, nullptr);
	$set(this, variable, nullptr);
	this->instance = 0;
	$set(this, object, object);
	$set(this, variable, variable);
	this->instance = instance;
}

int32_t ModelIdentifier::getInstance() {
	return this->instance;
}

void ModelIdentifier::setInstance(int32_t instance) {
	this->instance = instance;
}

$String* ModelIdentifier::getObject() {
	return this->object;
}

void ModelIdentifier::setObject($String* object) {
	$set(this, object, object);
}

$String* ModelIdentifier::getVariable() {
	return this->variable;
}

void ModelIdentifier::setVariable($String* variable) {
	$set(this, variable, variable);
}

int32_t ModelIdentifier::hashCode() {
	int32_t hashcode = this->instance;
	if (this->object != nullptr) {
		hashcode |= $nc(this->object)->hashCode();
	}
	if (this->variable != nullptr) {
		hashcode |= $nc(this->variable)->hashCode();
	}
	return hashcode;
}

bool ModelIdentifier::equals(Object$* obj) {
	if (!($instanceOf(ModelIdentifier, obj))) {
		return false;
	}
	$var(ModelIdentifier, mobj, $cast(ModelIdentifier, obj));
	if ((this->object == nullptr) != ($nc(mobj)->object == nullptr)) {
		return false;
	}
	if ((this->variable == nullptr) != ($nc(mobj)->variable == nullptr)) {
		return false;
	}
	int32_t var$0 = $nc(mobj)->getInstance();
	if (var$0 != getInstance()) {
		return false;
	}
	if (!(this->object == nullptr || $nc(this->object)->equals($nc(mobj)->object))) {
		return false;
	}
	if (!(this->variable == nullptr || $nc(this->variable)->equals($nc(mobj)->variable))) {
		return false;
	}
	return true;
}

$String* ModelIdentifier::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->variable == nullptr) {
		return $str({this->object, "["_s, $$str(this->instance), "]"_s});
	} else {
		return $str({this->object, "["_s, $$str(this->instance), "]."_s, this->variable});
	}
}

ModelIdentifier::ModelIdentifier() {
}

$Class* ModelIdentifier::load$($String* name, bool initialize) {
	$loadClass(ModelIdentifier, name, initialize, &_ModelIdentifier_ClassInfo_, allocate$ModelIdentifier);
	return class$;
}

$Class* ModelIdentifier::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com