#include <java/awt/Component$AccessibleAWTComponent$AccessibleAWTComponentHandler.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef VISIBLE

using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;

namespace java {
	namespace awt {

$FieldInfo _Component$AccessibleAWTComponent$AccessibleAWTComponentHandler_FieldInfo_[] = {
	{"this$1", "Ljava/awt/Component$AccessibleAWTComponent;", nullptr, $FINAL | $SYNTHETIC, $field(Component$AccessibleAWTComponent$AccessibleAWTComponentHandler, this$1)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Component$AccessibleAWTComponent$AccessibleAWTComponentHandler, serialVersionUID)},
	{}
};

$MethodInfo _Component$AccessibleAWTComponent$AccessibleAWTComponentHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component$AccessibleAWTComponent;)V", nullptr, $PROTECTED, $method(static_cast<void(Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::*)($Component$AccessibleAWTComponent*)>(&Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::init$))},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Component$AccessibleAWTComponent$AccessibleAWTComponentHandler_InnerClassesInfo_[] = {
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{"java.awt.Component$AccessibleAWTComponent$AccessibleAWTComponentHandler", "java.awt.Component$AccessibleAWTComponent", "AccessibleAWTComponentHandler", $PROTECTED},
	{}
};

$ClassInfo _Component$AccessibleAWTComponent$AccessibleAWTComponentHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Component$AccessibleAWTComponent$AccessibleAWTComponentHandler",
	"java.lang.Object",
	"java.awt.event.ComponentListener,java.io.Serializable",
	_Component$AccessibleAWTComponent$AccessibleAWTComponentHandler_FieldInfo_,
	_Component$AccessibleAWTComponent$AccessibleAWTComponentHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Component$AccessibleAWTComponent$AccessibleAWTComponentHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$AccessibleAWTComponent$AccessibleAWTComponentHandler($Class* clazz) {
	return $of($alloc(Component$AccessibleAWTComponent$AccessibleAWTComponentHandler));
}

int32_t Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::hashCode() {
	 return this->$ComponentListener::hashCode();
}

bool Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::equals(Object$* arg0) {
	 return this->$ComponentListener::equals(arg0);
}

$Object* Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::clone() {
	 return this->$ComponentListener::clone();
}

$String* Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::toString() {
	 return this->$ComponentListener::toString();
}

void Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::finalize() {
	this->$ComponentListener::finalize();
}

void Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::init$($Component$AccessibleAWTComponent* this$1) {
	$set(this, this$1, this$1);
}

void Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::componentHidden($ComponentEvent* e) {
	if ($nc(this->this$1->this$0)->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc($nc(this->this$1->this$0)->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::VISIBLE, nullptr);
	}
}

void Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::componentShown($ComponentEvent* e) {
	if ($nc(this->this$1->this$0)->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc($nc(this->this$1->this$0)->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::VISIBLE);
	}
}

void Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::componentMoved($ComponentEvent* e) {
}

void Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::componentResized($ComponentEvent* e) {
}

Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::Component$AccessibleAWTComponent$AccessibleAWTComponentHandler() {
}

$Class* Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::load$($String* name, bool initialize) {
	$loadClass(Component$AccessibleAWTComponent$AccessibleAWTComponentHandler, name, initialize, &_Component$AccessibleAWTComponent$AccessibleAWTComponentHandler_ClassInfo_, allocate$Component$AccessibleAWTComponent$AccessibleAWTComponentHandler);
	return class$;
}

$Class* Component$AccessibleAWTComponent$AccessibleAWTComponentHandler::class$ = nullptr;

	} // awt
} // java