#include <javax/swing/ProgressMonitor$ProgressOptionPane$2.h>

#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/ProgressMonitor$ProgressOptionPane.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;
using $ProgressMonitor$ProgressOptionPane = ::javax::swing::ProgressMonitor$ProgressOptionPane;

namespace javax {
	namespace swing {

$FieldInfo _ProgressMonitor$ProgressOptionPane$2_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/ProgressMonitor$ProgressOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(ProgressMonitor$ProgressOptionPane$2, this$1)},
	{"val$dialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ProgressMonitor$ProgressOptionPane$2, val$dialog)},
	{}
};

$MethodInfo _ProgressMonitor$ProgressOptionPane$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/ProgressMonitor$ProgressOptionPane;Ljavax/swing/JDialog;)V", "()V", 0, $method(static_cast<void(ProgressMonitor$ProgressOptionPane$2::*)($ProgressMonitor$ProgressOptionPane*,$JDialog*)>(&ProgressMonitor$ProgressOptionPane$2::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProgressMonitor$ProgressOptionPane$2_EnclosingMethodInfo_ = {
	"javax.swing.ProgressMonitor$ProgressOptionPane",
	"createDialog",
	"(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JDialog;"
};

$InnerClassInfo _ProgressMonitor$ProgressOptionPane$2_InnerClassesInfo_[] = {
	{"javax.swing.ProgressMonitor$ProgressOptionPane", "javax.swing.ProgressMonitor", "ProgressOptionPane", $PRIVATE},
	{"javax.swing.ProgressMonitor$ProgressOptionPane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProgressMonitor$ProgressOptionPane$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ProgressMonitor$ProgressOptionPane$2",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_ProgressMonitor$ProgressOptionPane$2_FieldInfo_,
	_ProgressMonitor$ProgressOptionPane$2_MethodInfo_,
	nullptr,
	&_ProgressMonitor$ProgressOptionPane$2_EnclosingMethodInfo_,
	_ProgressMonitor$ProgressOptionPane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ProgressMonitor"
};

$Object* allocate$ProgressMonitor$ProgressOptionPane$2($Class* clazz) {
	return $of($alloc(ProgressMonitor$ProgressOptionPane$2));
}

void ProgressMonitor$ProgressOptionPane$2::init$($ProgressMonitor$ProgressOptionPane* this$1, $JDialog* val$dialog) {
	$set(this, this$1, this$1);
	$set(this, val$dialog, val$dialog);
}

void ProgressMonitor$ProgressOptionPane$2::propertyChange($PropertyChangeEvent* event) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = $nc(this->val$dialog)->isVisible();
	bool var$0 = var$1 && $equals($nc(event)->getSource(), this->this$1);
	if (var$0) {
		bool var$2 = $nc($(event->getPropertyName()))->equals("value"_s);
		var$0 = (var$2 || $nc($(event->getPropertyName()))->equals("inputValue"_s));
	}
	if (var$0) {
		$nc(this->val$dialog)->setVisible(false);
		$nc(this->val$dialog)->dispose();
	}
}

ProgressMonitor$ProgressOptionPane$2::ProgressMonitor$ProgressOptionPane$2() {
}

$Class* ProgressMonitor$ProgressOptionPane$2::load$($String* name, bool initialize) {
	$loadClass(ProgressMonitor$ProgressOptionPane$2, name, initialize, &_ProgressMonitor$ProgressOptionPane$2_ClassInfo_, allocate$ProgressMonitor$ProgressOptionPane$2);
	return class$;
}

$Class* ProgressMonitor$ProgressOptionPane$2::class$ = nullptr;

	} // swing
} // javax