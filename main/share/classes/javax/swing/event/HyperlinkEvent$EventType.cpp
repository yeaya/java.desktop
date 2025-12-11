#include <javax/swing/event/HyperlinkEvent$EventType.h>

#include <javax/swing/event/HyperlinkEvent.h>
#include <jcpp.h>

#undef ACTIVATED
#undef ENTERED
#undef EXITED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _HyperlinkEvent$EventType_FieldInfo_[] = {
	{"ENTERED", "Ljavax/swing/event/HyperlinkEvent$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HyperlinkEvent$EventType, ENTERED)},
	{"EXITED", "Ljavax/swing/event/HyperlinkEvent$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HyperlinkEvent$EventType, EXITED)},
	{"ACTIVATED", "Ljavax/swing/event/HyperlinkEvent$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HyperlinkEvent$EventType, ACTIVATED)},
	{"typeString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HyperlinkEvent$EventType, typeString)},
	{}
};

$MethodInfo _HyperlinkEvent$EventType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(HyperlinkEvent$EventType::*)($String*)>(&HyperlinkEvent$EventType::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HyperlinkEvent$EventType_InnerClassesInfo_[] = {
	{"javax.swing.event.HyperlinkEvent$EventType", "javax.swing.event.HyperlinkEvent", "EventType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HyperlinkEvent$EventType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.event.HyperlinkEvent$EventType",
	"java.lang.Object",
	nullptr,
	_HyperlinkEvent$EventType_FieldInfo_,
	_HyperlinkEvent$EventType_MethodInfo_,
	nullptr,
	nullptr,
	_HyperlinkEvent$EventType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.event.HyperlinkEvent"
};

$Object* allocate$HyperlinkEvent$EventType($Class* clazz) {
	return $of($alloc(HyperlinkEvent$EventType));
}

HyperlinkEvent$EventType* HyperlinkEvent$EventType::ENTERED = nullptr;
HyperlinkEvent$EventType* HyperlinkEvent$EventType::EXITED = nullptr;
HyperlinkEvent$EventType* HyperlinkEvent$EventType::ACTIVATED = nullptr;

void HyperlinkEvent$EventType::init$($String* s) {
	$set(this, typeString, s);
}

$String* HyperlinkEvent$EventType::toString() {
	return this->typeString;
}

void clinit$HyperlinkEvent$EventType($Class* class$) {
	$assignStatic(HyperlinkEvent$EventType::ENTERED, $new(HyperlinkEvent$EventType, "ENTERED"_s));
	$assignStatic(HyperlinkEvent$EventType::EXITED, $new(HyperlinkEvent$EventType, "EXITED"_s));
	$assignStatic(HyperlinkEvent$EventType::ACTIVATED, $new(HyperlinkEvent$EventType, "ACTIVATED"_s));
}

HyperlinkEvent$EventType::HyperlinkEvent$EventType() {
}

$Class* HyperlinkEvent$EventType::load$($String* name, bool initialize) {
	$loadClass(HyperlinkEvent$EventType, name, initialize, &_HyperlinkEvent$EventType_ClassInfo_, clinit$HyperlinkEvent$EventType, allocate$HyperlinkEvent$EventType);
	return class$;
}

$Class* HyperlinkEvent$EventType::class$ = nullptr;

		} // event
	} // swing
} // javax