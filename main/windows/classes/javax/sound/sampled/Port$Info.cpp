#include <javax/sound/sampled/Port$Info.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Port.h>
#include <jcpp.h>

#undef COMPACT_DISC
#undef HEADPHONE
#undef LINE_IN
#undef LINE_OUT
#undef MICROPHONE
#undef SPEAKER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $Port = ::javax::sound::sampled::Port;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _Port$Info_FieldInfo_[] = {
	{"MICROPHONE", "Ljavax/sound/sampled/Port$Info;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Port$Info, MICROPHONE)},
	{"LINE_IN", "Ljavax/sound/sampled/Port$Info;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Port$Info, LINE_IN)},
	{"COMPACT_DISC", "Ljavax/sound/sampled/Port$Info;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Port$Info, COMPACT_DISC)},
	{"SPEAKER", "Ljavax/sound/sampled/Port$Info;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Port$Info, SPEAKER)},
	{"HEADPHONE", "Ljavax/sound/sampled/Port$Info;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Port$Info, HEADPHONE)},
	{"LINE_OUT", "Ljavax/sound/sampled/Port$Info;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Port$Info, LINE_OUT)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Port$Info, name)},
	{"isSource", "Z", nullptr, $PRIVATE | $FINAL, $field(Port$Info, isSource$)},
	{}
};

$MethodInfo _Port$Info_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Z)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Z)V", $PUBLIC, $method(static_cast<void(Port$Info::*)($Class*,$String*,bool)>(&Port$Info::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"isSource", "()Z", nullptr, $PUBLIC},
	{"matches", "(Ljavax/sound/sampled/Line$Info;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _Port$Info_InnerClassesInfo_[] = {
	{"javax.sound.sampled.Port$Info", "javax.sound.sampled.Port", "Info", $PUBLIC | $STATIC},
	{"javax.sound.sampled.Line$Info", "javax.sound.sampled.Line", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Port$Info_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.Port$Info",
	"javax.sound.sampled.Line$Info",
	nullptr,
	_Port$Info_FieldInfo_,
	_Port$Info_MethodInfo_,
	nullptr,
	nullptr,
	_Port$Info_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.sampled.Port"
};

$Object* allocate$Port$Info($Class* clazz) {
	return $of($alloc(Port$Info));
}


Port$Info* Port$Info::MICROPHONE = nullptr;

Port$Info* Port$Info::LINE_IN = nullptr;

Port$Info* Port$Info::COMPACT_DISC = nullptr;

Port$Info* Port$Info::SPEAKER = nullptr;

Port$Info* Port$Info::HEADPHONE = nullptr;

Port$Info* Port$Info::LINE_OUT = nullptr;

void Port$Info::init$($Class* lineClass, $String* name, bool isSource) {
	$Line$Info::init$(lineClass);
	$set(this, name, name);
	this->isSource$ = isSource;
}

$String* Port$Info::getName() {
	return this->name;
}

bool Port$Info::isSource() {
	return this->isSource$;
}

bool Port$Info::matches($Line$Info* info) {
	if (!($Line$Info::matches(info))) {
		return false;
	}
	if (!($nc(this->name)->equals($($nc(($cast(Port$Info, info)))->getName())))) {
		return false;
	}
	if (!(this->isSource$ == $nc(($cast(Port$Info, info)))->isSource())) {
		return false;
	}
	return true;
}

bool Port$Info::equals(Object$* obj) {
	return $Line$Info::equals(obj);
}

int32_t Port$Info::hashCode() {
	return $Line$Info::hashCode();
}

$String* Port$Info::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s %s port"_s, $$new($ObjectArray, {
		$($of(getName())),
		isSource() ? $of("source"_s) : $of("target"_s)
	}));
}

void clinit$Port$Info($Class* class$) {
	$load($Port);
	$assignStatic(Port$Info::MICROPHONE, $new(Port$Info, $Port::class$, "MICROPHONE"_s, true));
	$assignStatic(Port$Info::LINE_IN, $new(Port$Info, $Port::class$, "LINE_IN"_s, true));
	$assignStatic(Port$Info::COMPACT_DISC, $new(Port$Info, $Port::class$, "COMPACT_DISC"_s, true));
	$assignStatic(Port$Info::SPEAKER, $new(Port$Info, $Port::class$, "SPEAKER"_s, false));
	$assignStatic(Port$Info::HEADPHONE, $new(Port$Info, $Port::class$, "HEADPHONE"_s, false));
	$assignStatic(Port$Info::LINE_OUT, $new(Port$Info, $Port::class$, "LINE_OUT"_s, false));
}

Port$Info::Port$Info() {
}

$Class* Port$Info::load$($String* name, bool initialize) {
	$loadClass(Port$Info, name, initialize, &_Port$Info_ClassInfo_, clinit$Port$Info, allocate$Port$Info);
	return class$;
}

$Class* Port$Info::class$ = nullptr;

		} // sampled
	} // sound
} // javax