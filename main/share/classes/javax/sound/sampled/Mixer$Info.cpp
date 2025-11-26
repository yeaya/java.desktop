#include <javax/sound/sampled/Mixer$Info.h>

#include <javax/sound/sampled/Mixer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mixer = ::javax::sound::sampled::Mixer;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _Mixer$Info_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Mixer$Info, name)},
	{"vendor", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Mixer$Info, vendor)},
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Mixer$Info, description)},
	{"version", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Mixer$Info, version)},
	{}
};

$MethodInfo _Mixer$Info_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Mixer$Info::*)($String*,$String*,$String*,$String*)>(&Mixer$Info::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(Mixer$Info::*)()>(&Mixer$Info::getDescription))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(Mixer$Info::*)()>(&Mixer$Info::getName))},
	{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(Mixer$Info::*)()>(&Mixer$Info::getVendor))},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(Mixer$Info::*)()>(&Mixer$Info::getVersion))},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _Mixer$Info_InnerClassesInfo_[] = {
	{"javax.sound.sampled.Mixer$Info", "javax.sound.sampled.Mixer", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Mixer$Info_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.Mixer$Info",
	"java.lang.Object",
	nullptr,
	_Mixer$Info_FieldInfo_,
	_Mixer$Info_MethodInfo_,
	nullptr,
	nullptr,
	_Mixer$Info_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.sampled.Mixer"
};

$Object* allocate$Mixer$Info($Class* clazz) {
	return $of($alloc(Mixer$Info));
}

void Mixer$Info::init$($String* name, $String* vendor, $String* description, $String* version) {
	$set(this, name, name);
	$set(this, vendor, vendor);
	$set(this, description, description);
	$set(this, version, version);
}

bool Mixer$Info::equals(Object$* obj) {
	return $Object::equals(obj);
}

int32_t Mixer$Info::hashCode() {
	return $Object::hashCode();
}

$String* Mixer$Info::getName() {
	return this->name;
}

$String* Mixer$Info::getVendor() {
	return this->vendor;
}

$String* Mixer$Info::getDescription() {
	return this->description;
}

$String* Mixer$Info::getVersion() {
	return this->version;
}

$String* Mixer$Info::toString() {
	return $String::format("%s, version %s"_s, $$new($ObjectArray, {
		$of(this->name),
		$of(this->version)
	}));
}

Mixer$Info::Mixer$Info() {
}

$Class* Mixer$Info::load$($String* name, bool initialize) {
	$loadClass(Mixer$Info, name, initialize, &_Mixer$Info_ClassInfo_, allocate$Mixer$Info);
	return class$;
}

$Class* Mixer$Info::class$ = nullptr;

		} // sampled
	} // sound
} // javax