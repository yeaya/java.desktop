#include <javax/swing/JOptionPane$1.h>

#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

#undef UNINITIALIZED_VALUE

using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JDialog = ::javax::swing::JDialog;
using $JOptionPane = ::javax::swing::JOptionPane;

namespace javax {
	namespace swing {

$FieldInfo _JOptionPane$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$1, this$0)},
	{"val$dialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$1, val$dialog)},
	{}
};

$MethodInfo _JOptionPane$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JOptionPane;Ljavax/swing/JDialog;)V", "()V", 0, $method(static_cast<void(JOptionPane$1::*)($JOptionPane*,$JDialog*)>(&JOptionPane$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JOptionPane$1_EnclosingMethodInfo_ = {
	"javax.swing.JOptionPane",
	"initDialog",
	"(Ljavax/swing/JDialog;ILjava/awt/Component;)V"
};

$InnerClassInfo _JOptionPane$1_InnerClassesInfo_[] = {
	{"javax.swing.JOptionPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JOptionPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JOptionPane$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_JOptionPane$1_FieldInfo_,
	_JOptionPane$1_MethodInfo_,
	nullptr,
	&_JOptionPane$1_EnclosingMethodInfo_,
	_JOptionPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JOptionPane"
};

$Object* allocate$JOptionPane$1($Class* clazz) {
	return $of($alloc(JOptionPane$1));
}

void JOptionPane$1::init$($JOptionPane* this$0, $JDialog* val$dialog) {
	$set(this, this$0, this$0);
	$set(this, val$dialog, val$dialog);
}

void JOptionPane$1::propertyChange($PropertyChangeEvent* event) {
	bool var$3 = $nc(this->val$dialog)->isVisible();
	bool var$2 = var$3 && $equals($nc(event)->getSource(), this->this$0);
	bool var$1 = var$2 && ($nc($(event->getPropertyName()))->equals("value"_s));
	bool var$0 = var$1 && event->getNewValue() != nullptr;
	$init($JOptionPane);
	if (var$0 && !$equals(event->getNewValue(), $JOptionPane::UNINITIALIZED_VALUE)) {
		$nc(this->val$dialog)->setVisible(false);
	}
}

JOptionPane$1::JOptionPane$1() {
}

$Class* JOptionPane$1::load$($String* name, bool initialize) {
	$loadClass(JOptionPane$1, name, initialize, &_JOptionPane$1_ClassInfo_, allocate$JOptionPane$1);
	return class$;
}

$Class* JOptionPane$1::class$ = nullptr;

	} // swing
} // javax