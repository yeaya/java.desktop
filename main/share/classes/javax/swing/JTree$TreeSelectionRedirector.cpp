#include <javax/swing/JTree$TreeSelectionRedirector.h>

#include <java/io/Serializable.h>
#include <javax/swing/JTree.h>
#include <javax/swing/event/TreeSelectionEvent.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;

namespace javax {
	namespace swing {

$FieldInfo _JTree$TreeSelectionRedirector_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTree;", nullptr, $FINAL | $SYNTHETIC, $field(JTree$TreeSelectionRedirector, this$0)},
	{}
};

$MethodInfo _JTree$TreeSelectionRedirector_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JTree;)V", nullptr, $PROTECTED, $method(static_cast<void(JTree$TreeSelectionRedirector::*)($JTree*)>(&JTree$TreeSelectionRedirector::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTree$TreeSelectionRedirector_InnerClassesInfo_[] = {
	{"javax.swing.JTree$TreeSelectionRedirector", "javax.swing.JTree", "TreeSelectionRedirector", $PROTECTED},
	{}
};

$ClassInfo _JTree$TreeSelectionRedirector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTree$TreeSelectionRedirector",
	"java.lang.Object",
	"java.io.Serializable,javax.swing.event.TreeSelectionListener",
	_JTree$TreeSelectionRedirector_FieldInfo_,
	_JTree$TreeSelectionRedirector_MethodInfo_,
	nullptr,
	nullptr,
	_JTree$TreeSelectionRedirector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTree"
};

$Object* allocate$JTree$TreeSelectionRedirector($Class* clazz) {
	return $of($alloc(JTree$TreeSelectionRedirector));
}

int32_t JTree$TreeSelectionRedirector::hashCode() {
	 return this->$Serializable::hashCode();
}

bool JTree$TreeSelectionRedirector::equals(Object$* arg0) {
	 return this->$Serializable::equals(arg0);
}

$Object* JTree$TreeSelectionRedirector::clone() {
	 return this->$Serializable::clone();
}

$String* JTree$TreeSelectionRedirector::toString() {
	 return this->$Serializable::toString();
}

void JTree$TreeSelectionRedirector::finalize() {
	this->$Serializable::finalize();
}

void JTree$TreeSelectionRedirector::init$($JTree* this$0) {
	$set(this, this$0, this$0);
}

void JTree$TreeSelectionRedirector::valueChanged($TreeSelectionEvent* e) {
	$var($TreeSelectionEvent, newE, nullptr);
	$assign(newE, $cast($TreeSelectionEvent, $nc(e)->cloneWithSource(this->this$0)));
	this->this$0->fireValueChanged(newE);
}

JTree$TreeSelectionRedirector::JTree$TreeSelectionRedirector() {
}

$Class* JTree$TreeSelectionRedirector::load$($String* name, bool initialize) {
	$loadClass(JTree$TreeSelectionRedirector, name, initialize, &_JTree$TreeSelectionRedirector_ClassInfo_, allocate$JTree$TreeSelectionRedirector);
	return class$;
}

$Class* JTree$TreeSelectionRedirector::class$ = nullptr;

	} // swing
} // javax