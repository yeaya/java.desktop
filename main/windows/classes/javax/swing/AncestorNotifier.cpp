#include <javax/swing/AncestorNotifier.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/EventListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/event/AncestorEvent.h>
#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <jcpp.h>

#undef ANCESTOR_ADDED
#undef ANCESTOR_MOVED
#undef ANCESTOR_REMOVED

using $EventListenerArray = $Array<::java::util::EventListener>;
using $AncestorListenerArray = $Array<::javax::swing::event::AncestorListener>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $AncestorEvent = ::javax::swing::event::AncestorEvent;
using $AncestorListener = ::javax::swing::event::AncestorListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;

namespace javax {
	namespace swing {

$FieldInfo _AncestorNotifier_FieldInfo_[] = {
	{"firstInvisibleAncestor", "Ljava/awt/Component;", nullptr, $TRANSIENT, $field(AncestorNotifier, firstInvisibleAncestor)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, 0, $field(AncestorNotifier, listenerList)},
	{"root", "Ljavax/swing/JComponent;", nullptr, 0, $field(AncestorNotifier, root)},
	{}
};

$MethodInfo _AncestorNotifier_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, 0, $method(static_cast<void(AncestorNotifier::*)($JComponent*)>(&AncestorNotifier::init$))},
	{"addAncestorListener", "(Ljavax/swing/event/AncestorListener;)V", nullptr, 0},
	{"addListeners", "(Ljava/awt/Component;Z)V", nullptr, 0},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"fireAncestorAdded", "(Ljavax/swing/JComponent;ILjava/awt/Container;Ljava/awt/Container;)V", nullptr, $PROTECTED},
	{"fireAncestorMoved", "(Ljavax/swing/JComponent;ILjava/awt/Container;Ljava/awt/Container;)V", nullptr, $PROTECTED},
	{"fireAncestorRemoved", "(Ljavax/swing/JComponent;ILjava/awt/Container;Ljava/awt/Container;)V", nullptr, $PROTECTED},
	{"getAncestorListeners", "()[Ljavax/swing/event/AncestorListener;", nullptr, 0},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeAllListeners", "()V", nullptr, 0},
	{"removeAncestorListener", "(Ljavax/swing/event/AncestorListener;)V", nullptr, 0},
	{"removeListeners", "(Ljava/awt/Component;)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AncestorNotifier_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.AncestorNotifier",
	"java.lang.Object",
	"java.awt.event.ComponentListener,java.beans.PropertyChangeListener,java.io.Serializable",
	_AncestorNotifier_FieldInfo_,
	_AncestorNotifier_MethodInfo_
};

$Object* allocate$AncestorNotifier($Class* clazz) {
	return $of($alloc(AncestorNotifier));
}

int32_t AncestorNotifier::hashCode() {
	 return this->$ComponentListener::hashCode();
}

bool AncestorNotifier::equals(Object$* arg0) {
	 return this->$ComponentListener::equals(arg0);
}

$Object* AncestorNotifier::clone() {
	 return this->$ComponentListener::clone();
}

$String* AncestorNotifier::toString() {
	 return this->$ComponentListener::toString();
}

void AncestorNotifier::finalize() {
	this->$ComponentListener::finalize();
}

void AncestorNotifier::init$($JComponent* root) {
	$set(this, listenerList, $new($EventListenerList));
	$set(this, root, root);
	addListeners(root, true);
}

void AncestorNotifier::addAncestorListener($AncestorListener* l) {
	$load($AncestorListener);
	$nc(this->listenerList)->add($AncestorListener::class$, l);
}

void AncestorNotifier::removeAncestorListener($AncestorListener* l) {
	$load($AncestorListener);
	$nc(this->listenerList)->remove($AncestorListener::class$, l);
}

$AncestorListenerArray* AncestorNotifier::getAncestorListeners() {
	$load($AncestorListener);
	return $fcast($AncestorListenerArray, $nc(this->listenerList)->getListeners($AncestorListener::class$));
}

void AncestorNotifier::fireAncestorAdded($JComponent* source, int32_t id, $Container* ancestor, $Container* ancestorParent) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($AncestorListener);
		if ($equals(listeners->get(i), $AncestorListener::class$)) {
			$var($AncestorEvent, ancestorEvent, $new($AncestorEvent, source, id, ancestor, ancestorParent));
			$nc(($cast($AncestorListener, listeners->get(i + 1))))->ancestorAdded(ancestorEvent);
		}
	}
}

void AncestorNotifier::fireAncestorRemoved($JComponent* source, int32_t id, $Container* ancestor, $Container* ancestorParent) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($AncestorListener);
		if ($equals(listeners->get(i), $AncestorListener::class$)) {
			$var($AncestorEvent, ancestorEvent, $new($AncestorEvent, source, id, ancestor, ancestorParent));
			$nc(($cast($AncestorListener, listeners->get(i + 1))))->ancestorRemoved(ancestorEvent);
		}
	}
}

void AncestorNotifier::fireAncestorMoved($JComponent* source, int32_t id, $Container* ancestor, $Container* ancestorParent) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($AncestorListener);
		if ($equals(listeners->get(i), $AncestorListener::class$)) {
			$var($AncestorEvent, ancestorEvent, $new($AncestorEvent, source, id, ancestor, ancestorParent));
			$nc(($cast($AncestorListener, listeners->get(i + 1))))->ancestorMoved(ancestorEvent);
		}
	}
}

void AncestorNotifier::removeAllListeners() {
	removeListeners(this->root);
}

void AncestorNotifier::addListeners($Component* ancestor, bool addToFirst) {
	$useLocalCurrentObjectStackCache();
	$var($Component, a, nullptr);
	$set(this, firstInvisibleAncestor, nullptr);
	for ($assign(a, ancestor); this->firstInvisibleAncestor == nullptr; $assign(a, $nc(a)->getParent())) {
		if (addToFirst || a != ancestor) {
			a->addComponentListener(this);
			if ($instanceOf($JComponent, a)) {
				$var($JComponent, jAncestor, $cast($JComponent, a));
				jAncestor->addPropertyChangeListener(this);
			}
		}
		bool var$0 = !a->isVisible();
		if (var$0 || a->getParent() == nullptr || $instanceOf($Window, a)) {
			$set(this, firstInvisibleAncestor, a);
		}
	}
	if ($instanceOf($Window, this->firstInvisibleAncestor) && $nc(this->firstInvisibleAncestor)->isVisible()) {
		$set(this, firstInvisibleAncestor, nullptr);
	}
}

void AncestorNotifier::removeListeners($Component* ancestor) {
	$useLocalCurrentObjectStackCache();
	$var($Component, a, nullptr);
	for ($assign(a, ancestor); a != nullptr; $assign(a, $nc(a)->getParent())) {
		a->removeComponentListener(this);
		if ($instanceOf($JComponent, a)) {
			$var($JComponent, jAncestor, $cast($JComponent, a));
			jAncestor->removePropertyChangeListener(this);
		}
		if (a == this->firstInvisibleAncestor || $instanceOf($Window, a)) {
			break;
		}
	}
}

void AncestorNotifier::componentResized($ComponentEvent* e) {
}

void AncestorNotifier::componentMoved($ComponentEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, source, $nc(e)->getComponent());
	fireAncestorMoved(this->root, $AncestorEvent::ANCESTOR_MOVED, $cast($Container, source), $($nc(source)->getParent()));
}

void AncestorNotifier::componentShown($ComponentEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, ancestor, $nc(e)->getComponent());
	if (ancestor == this->firstInvisibleAncestor) {
		addListeners(ancestor, false);
		if (this->firstInvisibleAncestor == nullptr) {
			fireAncestorAdded(this->root, $AncestorEvent::ANCESTOR_ADDED, $cast($Container, ancestor), $($nc(ancestor)->getParent()));
		}
	}
}

void AncestorNotifier::componentHidden($ComponentEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, ancestor, $nc(e)->getComponent());
	bool needsNotify = this->firstInvisibleAncestor == nullptr;
	if (!($instanceOf($Window, ancestor))) {
		removeListeners($($nc(ancestor)->getParent()));
	}
	$set(this, firstInvisibleAncestor, ancestor);
	if (needsNotify) {
		fireAncestorRemoved(this->root, $AncestorEvent::ANCESTOR_REMOVED, $cast($Container, ancestor), $($nc(ancestor)->getParent()));
	}
}

void AncestorNotifier::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $nc(evt)->getPropertyName());
	bool var$0 = s != nullptr;
	if (var$0) {
		bool var$1 = s->equals("parent"_s);
		var$0 = (var$1 || s->equals("ancestor"_s));
	}
	if (var$0) {
		$var($JComponent, component, $cast($JComponent, evt->getSource()));
		if (evt->getNewValue() != nullptr) {
			if ($equals(component, this->firstInvisibleAncestor)) {
				addListeners(component, false);
				if (this->firstInvisibleAncestor == nullptr) {
					fireAncestorAdded(this->root, $AncestorEvent::ANCESTOR_ADDED, component, $($nc(component)->getParent()));
				}
			}
		} else {
			bool needsNotify = this->firstInvisibleAncestor == nullptr;
			$var($Container, oldParent, $cast($Container, evt->getOldValue()));
			removeListeners(oldParent);
			$set(this, firstInvisibleAncestor, component);
			if (needsNotify) {
				fireAncestorRemoved(this->root, $AncestorEvent::ANCESTOR_REMOVED, component, oldParent);
			}
		}
	}
}

AncestorNotifier::AncestorNotifier() {
}

$Class* AncestorNotifier::load$($String* name, bool initialize) {
	$loadClass(AncestorNotifier, name, initialize, &_AncestorNotifier_ClassInfo_, allocate$AncestorNotifier);
	return class$;
}

$Class* AncestorNotifier::class$ = nullptr;

	} // swing
} // javax