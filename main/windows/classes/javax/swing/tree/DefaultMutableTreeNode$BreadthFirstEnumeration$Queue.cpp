#include <javax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue.h>

#include <java/util/NoSuchElementException.h>
#include <javax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode.h>
#include <javax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $DefaultMutableTreeNode$BreadthFirstEnumeration = ::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration;
using $DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode = ::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _DefaultMutableTreeNode$BreadthFirstEnumeration$Queue_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, this$1)},
	{"head", "Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode;", nullptr, 0, $field(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, head)},
	{"tail", "Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode;", nullptr, 0, $field(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, tail)},
	{}
};

$MethodInfo _DefaultMutableTreeNode$BreadthFirstEnumeration$Queue_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration;)V", nullptr, 0, $method(static_cast<void(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::*)($DefaultMutableTreeNode$BreadthFirstEnumeration*)>(&DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::init$))},
	{"dequeue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::*)()>(&DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::dequeue))},
	{"enqueue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::*)(Object$*)>(&DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::enqueue))},
	{"firstObject", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::*)()>(&DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::firstObject))},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::*)()>(&DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::isEmpty))},
	{}
};

$InnerClassInfo _DefaultMutableTreeNode$BreadthFirstEnumeration$Queue_InnerClassesInfo_[] = {
	{"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "BreadthFirstEnumeration", $FINAL},
	{"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue", "javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration", "Queue", $FINAL},
	{"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode", "javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue", "QNode", $FINAL},
	{}
};

$ClassInfo _DefaultMutableTreeNode$BreadthFirstEnumeration$Queue_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue",
	"java.lang.Object",
	nullptr,
	_DefaultMutableTreeNode$BreadthFirstEnumeration$Queue_FieldInfo_,
	_DefaultMutableTreeNode$BreadthFirstEnumeration$Queue_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMutableTreeNode$BreadthFirstEnumeration$Queue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.DefaultMutableTreeNode"
};

$Object* allocate$DefaultMutableTreeNode$BreadthFirstEnumeration$Queue($Class* clazz) {
	return $of($alloc(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue));
}

void DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::init$($DefaultMutableTreeNode$BreadthFirstEnumeration* this$1) {
	$set(this, this$1, this$1);
}

void DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::enqueue(Object$* anObject) {
	if (this->head == nullptr) {
		$set(this, head, ($set(this, tail, $new($DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode, this, anObject, nullptr))));
	} else {
		$set($nc(this->tail), next, $new($DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode, this, anObject, nullptr));
		$set(this, tail, $nc(this->tail)->next);
	}
}

$Object* DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::dequeue() {
	$useLocalCurrentObjectStackCache();
	if (this->head == nullptr) {
		$throwNew($NoSuchElementException, "No more elements"_s);
	}
	$var($Object, retval, $nc(this->head)->object);
	$var($DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode, oldHead, this->head);
	$set(this, head, $nc(this->head)->next);
	if (this->head == nullptr) {
		$set(this, tail, nullptr);
	} else {
		$set($nc(oldHead), next, nullptr);
	}
	return $of(retval);
}

$Object* DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::firstObject() {
	if (this->head == nullptr) {
		$throwNew($NoSuchElementException, "No more elements"_s);
	}
	return $of($nc(this->head)->object);
}

bool DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::isEmpty() {
	return this->head == nullptr;
}

DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue() {
}

$Class* DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::load$($String* name, bool initialize) {
	$loadClass(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, name, initialize, &_DefaultMutableTreeNode$BreadthFirstEnumeration$Queue_ClassInfo_, allocate$DefaultMutableTreeNode$BreadthFirstEnumeration$Queue);
	return class$;
}

$Class* DefaultMutableTreeNode$BreadthFirstEnumeration$Queue::class$ = nullptr;

		} // tree
	} // swing
} // javax