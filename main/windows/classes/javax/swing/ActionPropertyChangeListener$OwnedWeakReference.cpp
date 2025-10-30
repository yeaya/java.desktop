#include <javax/swing/ActionPropertyChangeListener$OwnedWeakReference.h>

#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/ActionPropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ActionPropertyChangeListener = ::javax::swing::ActionPropertyChangeListener;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$FieldInfo _ActionPropertyChangeListener$OwnedWeakReference_FieldInfo_[] = {
	{"owner", "Ljavax/swing/ActionPropertyChangeListener;", "Ljavax/swing/ActionPropertyChangeListener<*>;", $PRIVATE, $field(ActionPropertyChangeListener$OwnedWeakReference, owner)},
	{}
};

$MethodInfo _ActionPropertyChangeListener$OwnedWeakReference_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComponent;Ljava/lang/ref/ReferenceQueue;Ljavax/swing/ActionPropertyChangeListener;)V", "(TU;Ljava/lang/ref/ReferenceQueue<-TU;>;Ljavax/swing/ActionPropertyChangeListener<*>;)V", 0, $method(static_cast<void(ActionPropertyChangeListener$OwnedWeakReference::*)($JComponent*,$ReferenceQueue*,$ActionPropertyChangeListener*)>(&ActionPropertyChangeListener$OwnedWeakReference::init$))},
	{"getOwner", "()Ljavax/swing/ActionPropertyChangeListener;", "()Ljavax/swing/ActionPropertyChangeListener<*>;", $PUBLIC},
	{}
};

$InnerClassInfo _ActionPropertyChangeListener$OwnedWeakReference_InnerClassesInfo_[] = {
	{"javax.swing.ActionPropertyChangeListener$OwnedWeakReference", "javax.swing.ActionPropertyChangeListener", "OwnedWeakReference", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ActionPropertyChangeListener$OwnedWeakReference_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ActionPropertyChangeListener$OwnedWeakReference",
	"java.lang.ref.WeakReference",
	nullptr,
	_ActionPropertyChangeListener$OwnedWeakReference_FieldInfo_,
	_ActionPropertyChangeListener$OwnedWeakReference_MethodInfo_,
	"<U:Ljavax/swing/JComponent;>Ljava/lang/ref/WeakReference<TU;>;",
	nullptr,
	_ActionPropertyChangeListener$OwnedWeakReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ActionPropertyChangeListener"
};

$Object* allocate$ActionPropertyChangeListener$OwnedWeakReference($Class* clazz) {
	return $of($alloc(ActionPropertyChangeListener$OwnedWeakReference));
}

void ActionPropertyChangeListener$OwnedWeakReference::init$($JComponent* target, $ReferenceQueue* queue, $ActionPropertyChangeListener* owner) {
	$WeakReference::init$(target, queue);
	$set(this, owner, owner);
}

$ActionPropertyChangeListener* ActionPropertyChangeListener$OwnedWeakReference::getOwner() {
	return this->owner;
}

ActionPropertyChangeListener$OwnedWeakReference::ActionPropertyChangeListener$OwnedWeakReference() {
}

$Class* ActionPropertyChangeListener$OwnedWeakReference::load$($String* name, bool initialize) {
	$loadClass(ActionPropertyChangeListener$OwnedWeakReference, name, initialize, &_ActionPropertyChangeListener$OwnedWeakReference_ClassInfo_, allocate$ActionPropertyChangeListener$OwnedWeakReference);
	return class$;
}

$Class* ActionPropertyChangeListener$OwnedWeakReference::class$ = nullptr;

	} // swing
} // javax