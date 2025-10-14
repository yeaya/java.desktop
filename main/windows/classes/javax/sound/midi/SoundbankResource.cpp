#include <javax/sound/midi/SoundbankResource.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/Soundbank.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Soundbank = ::javax::sound::midi::Soundbank;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _SoundbankResource_FieldInfo_[] = {
	{"soundBank", "Ljavax/sound/midi/Soundbank;", nullptr, $PRIVATE | $FINAL, $field(SoundbankResource, soundBank)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SoundbankResource, name)},
	{"dataClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(SoundbankResource, dataClass)},
	{}
};

$MethodInfo _SoundbankResource_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/midi/Soundbank;Ljava/lang/String;Ljava/lang/Class;)V", "(Ljavax/sound/midi/Soundbank;Ljava/lang/String;Ljava/lang/Class<*>;)V", $PROTECTED, $method(static_cast<void(SoundbankResource::*)($Soundbank*,$String*,$Class*)>(&SoundbankResource::init$))},
	{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDataClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSoundbank", "()Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SoundbankResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.midi.SoundbankResource",
	"java.lang.Object",
	nullptr,
	_SoundbankResource_FieldInfo_,
	_SoundbankResource_MethodInfo_
};

$Object* allocate$SoundbankResource($Class* clazz) {
	return $of($alloc(SoundbankResource));
}

void SoundbankResource::init$($Soundbank* soundBank, $String* name, $Class* dataClass) {
	$set(this, soundBank, soundBank);
	$set(this, name, name);
	$set(this, dataClass, dataClass);
}

$Soundbank* SoundbankResource::getSoundbank() {
	return this->soundBank;
}

$String* SoundbankResource::getName() {
	return this->name;
}

$Class* SoundbankResource::getDataClass() {
	return this->dataClass;
}

SoundbankResource::SoundbankResource() {
}

$Class* SoundbankResource::load$($String* name, bool initialize) {
	$loadClass(SoundbankResource, name, initialize, &_SoundbankResource_ClassInfo_, allocate$SoundbankResource);
	return class$;
}

$Class* SoundbankResource::class$ = nullptr;

		} // midi
	} // sound
} // javax