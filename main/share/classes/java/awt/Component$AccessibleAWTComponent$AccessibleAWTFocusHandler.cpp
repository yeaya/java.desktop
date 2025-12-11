#include <java/awt/Component$AccessibleAWTComponent$AccessibleAWTFocusHandler.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef FOCUSED

using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;

namespace java {
	namespace awt {

$FieldInfo _Component$AccessibleAWTComponent$AccessibleAWTFocusHandler_FieldInfo_[] = {
	{"this$1", "Ljava/awt/Component$AccessibleAWTComponent;", nullptr, $FINAL | $SYNTHETIC, $field(Component$AccessibleAWTComponent$AccessibleAWTFocusHandler, this$1)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Component$AccessibleAWTComponent$AccessibleAWTFocusHandler, serialVersionUID)},
	{}
};

$MethodInfo _Component$AccessibleAWTComponent$AccessibleAWTFocusHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component$AccessibleAWTComponent;)V", nullptr, $PROTECTED, $method(static_cast<void(Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::*)($Component$AccessibleAWTComponent*)>(&Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Component$AccessibleAWTComponent$AccessibleAWTFocusHandler_InnerClassesInfo_[] = {
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{"java.awt.Component$AccessibleAWTComponent$AccessibleAWTFocusHandler", "java.awt.Component$AccessibleAWTComponent", "AccessibleAWTFocusHandler", $PROTECTED},
	{}
};

$ClassInfo _Component$AccessibleAWTComponent$AccessibleAWTFocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Component$AccessibleAWTComponent$AccessibleAWTFocusHandler",
	"java.lang.Object",
	"java.awt.event.FocusListener,java.io.Serializable",
	_Component$AccessibleAWTComponent$AccessibleAWTFocusHandler_FieldInfo_,
	_Component$AccessibleAWTComponent$AccessibleAWTFocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Component$AccessibleAWTComponent$AccessibleAWTFocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$AccessibleAWTComponent$AccessibleAWTFocusHandler($Class* clazz) {
	return $of($alloc(Component$AccessibleAWTComponent$AccessibleAWTFocusHandler));
}

int32_t Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::hashCode() {
	 return this->$FocusListener::hashCode();
}

bool Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::equals(Object$* arg0) {
	 return this->$FocusListener::equals(arg0);
}

$Object* Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::clone() {
	 return this->$FocusListener::clone();
}

$String* Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::toString() {
	 return this->$FocusListener::toString();
}

void Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::finalize() {
	this->$FocusListener::finalize();
}

void Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::init$($Component$AccessibleAWTComponent* this$1) {
	$set(this, this$1, this$1);
}

void Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::focusGained($FocusEvent* event) {
	if ($nc(this->this$1->this$0)->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc($nc(this->this$1->this$0)->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::FOCUSED);
	}
}

void Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::focusLost($FocusEvent* event) {
	if ($nc(this->this$1->this$0)->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc($nc(this->this$1->this$0)->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::FOCUSED, nullptr);
	}
}

Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::Component$AccessibleAWTComponent$AccessibleAWTFocusHandler() {
}

$Class* Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::load$($String* name, bool initialize) {
	$loadClass(Component$AccessibleAWTComponent$AccessibleAWTFocusHandler, name, initialize, &_Component$AccessibleAWTComponent$AccessibleAWTFocusHandler_ClassInfo_, allocate$Component$AccessibleAWTComponent$AccessibleAWTFocusHandler);
	return class$;
}

$Class* Component$AccessibleAWTComponent$AccessibleAWTFocusHandler::class$ = nullptr;

	} // awt
} // java