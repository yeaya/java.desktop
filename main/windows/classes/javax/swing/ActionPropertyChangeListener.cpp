#include <javax/swing/ActionPropertyChangeListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionPropertyChangeListener$OwnedWeakReference.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Action = ::javax::swing::Action;
using $ActionPropertyChangeListener$OwnedWeakReference = ::javax::swing::ActionPropertyChangeListener$OwnedWeakReference;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$FieldInfo _ActionPropertyChangeListener_FieldInfo_[] = {
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljavax/swing/JComponent;>;", $PRIVATE | $STATIC, $staticField(ActionPropertyChangeListener, queue)},
	{"target", "Ljavax/swing/ActionPropertyChangeListener$OwnedWeakReference;", "Ljavax/swing/ActionPropertyChangeListener$OwnedWeakReference<TT;>;", $PRIVATE | $TRANSIENT, $field(ActionPropertyChangeListener, target)},
	{"action", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(ActionPropertyChangeListener, action)},
	{}
};

$MethodInfo _ActionPropertyChangeListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JComponent;Ljavax/swing/Action;)V", "(TT;Ljavax/swing/Action;)V", $PUBLIC, $method(static_cast<void(ActionPropertyChangeListener::*)($JComponent*,$Action*)>(&ActionPropertyChangeListener::init$))},
	{"actionPropertyChanged", "(Ljavax/swing/JComponent;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", "(TT;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", $PROTECTED | $ABSTRACT},
	{"getAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getQueue", "()Ljava/lang/ref/ReferenceQueue;", "()Ljava/lang/ref/ReferenceQueue<Ljavax/swing/JComponent;>;", $PRIVATE | $STATIC, $method(static_cast<$ReferenceQueue*(*)()>(&ActionPropertyChangeListener::getQueue))},
	{"getTarget", "()Ljavax/swing/JComponent;", "()TT;", $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ActionPropertyChangeListener::*)($ObjectInputStream*)>(&ActionPropertyChangeListener::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setTarget", "(Ljavax/swing/JComponent;)V", "(TT;)V", $PRIVATE, $method(static_cast<void(ActionPropertyChangeListener::*)($JComponent*)>(&ActionPropertyChangeListener::setTarget))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ActionPropertyChangeListener::*)($ObjectOutputStream*)>(&ActionPropertyChangeListener::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ActionPropertyChangeListener_InnerClassesInfo_[] = {
	{"javax.swing.ActionPropertyChangeListener$OwnedWeakReference", "javax.swing.ActionPropertyChangeListener", "OwnedWeakReference", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ActionPropertyChangeListener_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.ActionPropertyChangeListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener,java.io.Serializable",
	_ActionPropertyChangeListener_FieldInfo_,
	_ActionPropertyChangeListener_MethodInfo_,
	"<T:Ljavax/swing/JComponent;>Ljava/lang/Object;Ljava/beans/PropertyChangeListener;Ljava/io/Serializable;",
	nullptr,
	_ActionPropertyChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.ActionPropertyChangeListener$OwnedWeakReference"
};

$Object* allocate$ActionPropertyChangeListener($Class* clazz) {
	return $of($alloc(ActionPropertyChangeListener));
}

int32_t ActionPropertyChangeListener::hashCode() {
	 return this->$PropertyChangeListener::hashCode();
}

bool ActionPropertyChangeListener::equals(Object$* arg0) {
	 return this->$PropertyChangeListener::equals(arg0);
}

$Object* ActionPropertyChangeListener::clone() {
	 return this->$PropertyChangeListener::clone();
}

$String* ActionPropertyChangeListener::toString() {
	 return this->$PropertyChangeListener::toString();
}

void ActionPropertyChangeListener::finalize() {
	this->$PropertyChangeListener::finalize();
}

$ReferenceQueue* ActionPropertyChangeListener::queue = nullptr;

$ReferenceQueue* ActionPropertyChangeListener::getQueue() {
	$init(ActionPropertyChangeListener);
	$synchronized(ActionPropertyChangeListener::class$) {
		if (ActionPropertyChangeListener::queue == nullptr) {
			$assignStatic(ActionPropertyChangeListener::queue, $new($ReferenceQueue));
		}
	}
	return ActionPropertyChangeListener::queue;
}

void ActionPropertyChangeListener::init$($JComponent* c, $Action* a) {
	setTarget(c);
	$set(this, action, a);
}

void ActionPropertyChangeListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, target, getTarget());
	if (target == nullptr) {
		$nc($(getAction()))->removePropertyChangeListener(this);
	} else {
		actionPropertyChanged(target, $(getAction()), e);
	}
}

void ActionPropertyChangeListener::setTarget($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($ReferenceQueue, queue, getQueue());
	$var($ActionPropertyChangeListener$OwnedWeakReference, r, nullptr);
	while (($assign(r, $cast($ActionPropertyChangeListener$OwnedWeakReference, $nc(queue)->poll()))) != nullptr) {
		$var(ActionPropertyChangeListener, oldPCL, $nc(r)->getOwner());
		$var($Action, oldAction, $nc(oldPCL)->getAction());
		if (oldAction != nullptr) {
			oldAction->removePropertyChangeListener(oldPCL);
		}
	}
	$set(this, target, $new($ActionPropertyChangeListener$OwnedWeakReference, c, queue, this));
}

$JComponent* ActionPropertyChangeListener::getTarget() {
	if (this->target == nullptr) {
		return nullptr;
	}
	return $cast($JComponent, $nc(this->target)->get());
}

$Action* ActionPropertyChangeListener::getAction() {
	return this->action;
}

void ActionPropertyChangeListener::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeObject($(getTarget()));
}

void ActionPropertyChangeListener::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$var($JComponent, target, $cast($JComponent, s->readObject()));
	if (target != nullptr) {
		setTarget(target);
	}
}

ActionPropertyChangeListener::ActionPropertyChangeListener() {
}

$Class* ActionPropertyChangeListener::load$($String* name, bool initialize) {
	$loadClass(ActionPropertyChangeListener, name, initialize, &_ActionPropertyChangeListener_ClassInfo_, allocate$ActionPropertyChangeListener);
	return class$;
}

$Class* ActionPropertyChangeListener::class$ = nullptr;

	} // swing
} // javax