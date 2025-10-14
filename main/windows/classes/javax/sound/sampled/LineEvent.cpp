#include <javax/sound/sampled/LineEvent.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineEvent$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Line = ::javax::sound::sampled::Line;
using $LineEvent$Type = ::javax::sound::sampled::LineEvent$Type;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _LineEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LineEvent, serialVersionUID)},
	{"type", "Ljavax/sound/sampled/LineEvent$Type;", nullptr, $PRIVATE | $FINAL, $field(LineEvent, type)},
	{"position", "J", nullptr, $PRIVATE | $FINAL, $field(LineEvent, position)},
	{}
};

$MethodInfo _LineEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/Line;Ljavax/sound/sampled/LineEvent$Type;J)V", nullptr, $PUBLIC, $method(static_cast<void(LineEvent::*)($Line*,$LineEvent$Type*,int64_t)>(&LineEvent::init$))},
	{"getFramePosition", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(LineEvent::*)()>(&LineEvent::getFramePosition))},
	{"getLine", "()Ljavax/sound/sampled/Line;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Line*(LineEvent::*)()>(&LineEvent::getLine))},
	{"getType", "()Ljavax/sound/sampled/LineEvent$Type;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$LineEvent$Type*(LineEvent::*)()>(&LineEvent::getType))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LineEvent_InnerClassesInfo_[] = {
	{"javax.sound.sampled.LineEvent$Type", "javax.sound.sampled.LineEvent", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _LineEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.LineEvent",
	"java.util.EventObject",
	nullptr,
	_LineEvent_FieldInfo_,
	_LineEvent_MethodInfo_,
	nullptr,
	nullptr,
	_LineEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.sampled.LineEvent$Type"
};

$Object* allocate$LineEvent($Class* clazz) {
	return $of($alloc(LineEvent));
}

void LineEvent::init$($Line* line, $LineEvent$Type* type, int64_t position) {
	$EventObject::init$(line);
	$set(this, type, type);
	this->position = position;
}

$Line* LineEvent::getLine() {
	return $cast($Line, getSource());
}

$LineEvent$Type* LineEvent::getType() {
	return this->type;
}

int64_t LineEvent::getFramePosition() {
	return this->position;
}

$String* LineEvent::toString() {
	return $String::format("%s event from line %s"_s, $$new($ObjectArray, {
		$of(this->type),
		$($of(getLine()))
	}));
}

LineEvent::LineEvent() {
}

$Class* LineEvent::load$($String* name, bool initialize) {
	$loadClass(LineEvent, name, initialize, &_LineEvent_ClassInfo_, allocate$LineEvent);
	return class$;
}

$Class* LineEvent::class$ = nullptr;

		} // sampled
	} // sound
} // javax