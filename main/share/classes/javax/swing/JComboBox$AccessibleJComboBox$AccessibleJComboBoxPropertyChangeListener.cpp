#include <javax/swing/JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComboBox$AccessibleJComboBox.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox$AccessibleJComboBox = ::javax::swing::JComboBox$AccessibleJComboBox;

namespace javax {
	namespace swing {

$FieldInfo _JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JComboBox$AccessibleJComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener, this$1)},
	{}
};

$MethodInfo _JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComboBox$AccessibleJComboBox;)V", nullptr, $PRIVATE, $method(static_cast<void(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener::*)($JComboBox$AccessibleJComboBox*)>(&JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener_InnerClassesInfo_[] = {
	{"javax.swing.JComboBox$AccessibleJComboBox", "javax.swing.JComboBox", "AccessibleJComboBox", $PROTECTED},
	{"javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener", "javax.swing.JComboBox$AccessibleJComboBox", "AccessibleJComboBoxPropertyChangeListener", $PRIVATE},
	{}
};

$ClassInfo _JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener_FieldInfo_,
	_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComboBox"
};

$Object* allocate$JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener($Class* clazz) {
	return $of($alloc(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener));
}

void JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener::init$($JComboBox$AccessibleJComboBox* this$1) {
	$set(this, this$1, this$1);
}

void JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener::propertyChange($PropertyChangeEvent* e) {
	if ($nc(e)->getPropertyName() == "editor"_s) {
		this->this$1->setEditorNameAndDescription();
	}
}

JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener::JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener() {
}

$Class* JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener::load$($String* name, bool initialize) {
	$loadClass(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener, name, initialize, &_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener_ClassInfo_, allocate$JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener);
	return class$;
}

$Class* JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener::class$ = nullptr;

	} // swing
} // javax