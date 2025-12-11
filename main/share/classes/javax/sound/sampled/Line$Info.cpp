#include <javax/sound/sampled/Line$Info.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Package.h>
#include <javax/sound/sampled/Line.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Line = ::javax::sound::sampled::Line;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _Line$Info_FieldInfo_[] = {
	{"lineClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(Line$Info, lineClass)},
	{}
};

$MethodInfo _Line$Info_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(Line$Info::*)($Class*)>(&Line$Info::init$))},
	{"getLineClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"matches", "(Ljavax/sound/sampled/Line$Info;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Line$Info_InnerClassesInfo_[] = {
	{"javax.sound.sampled.Line$Info", "javax.sound.sampled.Line", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Line$Info_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.Line$Info",
	"java.lang.Object",
	nullptr,
	_Line$Info_FieldInfo_,
	_Line$Info_MethodInfo_,
	nullptr,
	nullptr,
	_Line$Info_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.sampled.Line"
};

$Object* allocate$Line$Info($Class* clazz) {
	return $of($alloc(Line$Info));
}

void Line$Info::init$($Class* lineClass) {
	if (lineClass == nullptr) {
		$load($Line);
		$set(this, lineClass, $Line::class$);
	} else {
		$set(this, lineClass, lineClass);
	}
}

$Class* Line$Info::getLineClass() {
	return this->lineClass;
}

bool Line$Info::matches(Line$Info* info) {
	if (!($of(this)->getClass()->isInstance(info))) {
		return false;
	}
	if (!($nc(getLineClass())->isAssignableFrom($nc(info)->getLineClass()))) {
		return false;
	}
	return true;
}

$String* Line$Info::toString() {
	$var($String, str, $nc(getLineClass())->toString());
	$load($Line);
	if ($nc(getLineClass())->getPackage() == $Line::class$->getPackage()) {
		return $nc(str)->replace(static_cast<$CharSequence*>("javax.sound.sampled."_s), static_cast<$CharSequence*>(""_s));
	}
	return str;
}

Line$Info::Line$Info() {
}

$Class* Line$Info::load$($String* name, bool initialize) {
	$loadClass(Line$Info, name, initialize, &_Line$Info_ClassInfo_, allocate$Line$Info);
	return class$;
}

$Class* Line$Info::class$ = nullptr;

		} // sampled
	} // sound
} // javax