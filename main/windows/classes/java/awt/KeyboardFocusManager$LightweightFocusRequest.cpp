#include <java/awt/KeyboardFocusManager$LightweightFocusRequest.h>

#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _KeyboardFocusManager$LightweightFocusRequest_FieldInfo_[] = {
	{"component", "Ljava/awt/Component;", nullptr, $FINAL, $field(KeyboardFocusManager$LightweightFocusRequest, component)},
	{"temporary", "Z", nullptr, $FINAL, $field(KeyboardFocusManager$LightweightFocusRequest, temporary)},
	{"cause", "Ljava/awt/event/FocusEvent$Cause;", nullptr, $FINAL, $field(KeyboardFocusManager$LightweightFocusRequest, cause)},
	{}
};

$MethodInfo _KeyboardFocusManager$LightweightFocusRequest_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;ZLjava/awt/event/FocusEvent$Cause;)V", nullptr, 0, $method(static_cast<void(KeyboardFocusManager$LightweightFocusRequest::*)($Component*,bool,$FocusEvent$Cause*)>(&KeyboardFocusManager$LightweightFocusRequest::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeyboardFocusManager$LightweightFocusRequest_InnerClassesInfo_[] = {
	{"java.awt.KeyboardFocusManager$LightweightFocusRequest", "java.awt.KeyboardFocusManager", "LightweightFocusRequest", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyboardFocusManager$LightweightFocusRequest_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.KeyboardFocusManager$LightweightFocusRequest",
	"java.lang.Object",
	nullptr,
	_KeyboardFocusManager$LightweightFocusRequest_FieldInfo_,
	_KeyboardFocusManager$LightweightFocusRequest_MethodInfo_,
	nullptr,
	nullptr,
	_KeyboardFocusManager$LightweightFocusRequest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.KeyboardFocusManager"
};

$Object* allocate$KeyboardFocusManager$LightweightFocusRequest($Class* clazz) {
	return $of($alloc(KeyboardFocusManager$LightweightFocusRequest));
}

void KeyboardFocusManager$LightweightFocusRequest::init$($Component* component, bool temporary, $FocusEvent$Cause* cause) {
	$set(this, component, component);
	this->temporary = temporary;
	$set(this, cause, cause);
}

$String* KeyboardFocusManager$LightweightFocusRequest::toString() {
	return $str({"LightweightFocusRequest[component="_s, this->component, ",temporary="_s, $$str(this->temporary), ", cause="_s, this->cause, "]"_s});
}

KeyboardFocusManager$LightweightFocusRequest::KeyboardFocusManager$LightweightFocusRequest() {
}

$Class* KeyboardFocusManager$LightweightFocusRequest::load$($String* name, bool initialize) {
	$loadClass(KeyboardFocusManager$LightweightFocusRequest, name, initialize, &_KeyboardFocusManager$LightweightFocusRequest_ClassInfo_, allocate$KeyboardFocusManager$LightweightFocusRequest);
	return class$;
}

$Class* KeyboardFocusManager$LightweightFocusRequest::class$ = nullptr;

	} // awt
} // java