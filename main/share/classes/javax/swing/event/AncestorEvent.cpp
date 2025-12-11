#include <javax/swing/event/AncestorEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Container.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef ANCESTOR_ADDED
#undef ANCESTOR_MOVED
#undef ANCESTOR_REMOVED

using $AWTEvent = ::java::awt::AWTEvent;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _AncestorEvent_FieldInfo_[] = {
	{"ANCESTOR_ADDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AncestorEvent, ANCESTOR_ADDED)},
	{"ANCESTOR_REMOVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AncestorEvent, ANCESTOR_REMOVED)},
	{"ANCESTOR_MOVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AncestorEvent, ANCESTOR_MOVED)},
	{"ancestor", "Ljava/awt/Container;", nullptr, 0, $field(AncestorEvent, ancestor)},
	{"ancestorParent", "Ljava/awt/Container;", nullptr, 0, $field(AncestorEvent, ancestorParent)},
	{}
};

$MethodInfo _AncestorEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComponent;ILjava/awt/Container;Ljava/awt/Container;)V", nullptr, $PUBLIC, $method(static_cast<void(AncestorEvent::*)($JComponent*,int32_t,$Container*,$Container*)>(&AncestorEvent::init$))},
	{"getAncestor", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getAncestorParent", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getComponent", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AncestorEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.AncestorEvent",
	"java.awt.AWTEvent",
	nullptr,
	_AncestorEvent_FieldInfo_,
	_AncestorEvent_MethodInfo_
};

$Object* allocate$AncestorEvent($Class* clazz) {
	return $of($alloc(AncestorEvent));
}

void AncestorEvent::init$($JComponent* source, int32_t id, $Container* ancestor, $Container* ancestorParent) {
	$AWTEvent::init$(source, id);
	$set(this, ancestor, ancestor);
	$set(this, ancestorParent, ancestorParent);
}

$Container* AncestorEvent::getAncestor() {
	return this->ancestor;
}

$Container* AncestorEvent::getAncestorParent() {
	return this->ancestorParent;
}

$JComponent* AncestorEvent::getComponent() {
	return $cast($JComponent, getSource());
}

AncestorEvent::AncestorEvent() {
}

$Class* AncestorEvent::load$($String* name, bool initialize) {
	$loadClass(AncestorEvent, name, initialize, &_AncestorEvent_ClassInfo_, allocate$AncestorEvent);
	return class$;
}

$Class* AncestorEvent::class$ = nullptr;

		} // event
	} // swing
} // javax