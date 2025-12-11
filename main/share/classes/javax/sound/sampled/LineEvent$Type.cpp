#include <javax/sound/sampled/LineEvent$Type.h>

#include <javax/sound/sampled/LineEvent.h>
#include <jcpp.h>

#undef CLOSE
#undef OPEN
#undef START
#undef STOP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _LineEvent$Type_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LineEvent$Type, name)},
	{"OPEN", "Ljavax/sound/sampled/LineEvent$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineEvent$Type, OPEN)},
	{"CLOSE", "Ljavax/sound/sampled/LineEvent$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineEvent$Type, CLOSE)},
	{"START", "Ljavax/sound/sampled/LineEvent$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineEvent$Type, START)},
	{"STOP", "Ljavax/sound/sampled/LineEvent$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineEvent$Type, STOP)},
	{}
};

$MethodInfo _LineEvent$Type_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(LineEvent$Type::*)($String*)>(&LineEvent$Type::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LineEvent$Type_InnerClassesInfo_[] = {
	{"javax.sound.sampled.LineEvent$Type", "javax.sound.sampled.LineEvent", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _LineEvent$Type_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.LineEvent$Type",
	"java.lang.Object",
	nullptr,
	_LineEvent$Type_FieldInfo_,
	_LineEvent$Type_MethodInfo_,
	nullptr,
	nullptr,
	_LineEvent$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.sampled.LineEvent"
};

$Object* allocate$LineEvent$Type($Class* clazz) {
	return $of($alloc(LineEvent$Type));
}

LineEvent$Type* LineEvent$Type::OPEN = nullptr;
LineEvent$Type* LineEvent$Type::CLOSE = nullptr;
LineEvent$Type* LineEvent$Type::START = nullptr;
LineEvent$Type* LineEvent$Type::STOP = nullptr;

void LineEvent$Type::init$($String* name) {
	$set(this, name, name);
}

bool LineEvent$Type::equals(Object$* obj) {
	return $Object::equals(obj);
}

int32_t LineEvent$Type::hashCode() {
	return $Object::hashCode();
}

$String* LineEvent$Type::toString() {
	return this->name;
}

void clinit$LineEvent$Type($Class* class$) {
	$assignStatic(LineEvent$Type::OPEN, $new(LineEvent$Type, "Open"_s));
	$assignStatic(LineEvent$Type::CLOSE, $new(LineEvent$Type, "Close"_s));
	$assignStatic(LineEvent$Type::START, $new(LineEvent$Type, "Start"_s));
	$assignStatic(LineEvent$Type::STOP, $new(LineEvent$Type, "Stop"_s));
}

LineEvent$Type::LineEvent$Type() {
}

$Class* LineEvent$Type::load$($String* name, bool initialize) {
	$loadClass(LineEvent$Type, name, initialize, &_LineEvent$Type_ClassInfo_, clinit$LineEvent$Type, allocate$LineEvent$Type);
	return class$;
}

$Class* LineEvent$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax