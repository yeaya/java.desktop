#include <javax/swing/JOptionPane$5.h>

#include <java/awt/Container.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JOptionPane.h>
#include <sun/awt/AWTAccessor$ContainerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JOptionPane = ::javax::swing::JOptionPane;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ContainerAccessor = ::sun::awt::AWTAccessor$ContainerAccessor;

namespace javax {
	namespace swing {

$FieldInfo _JOptionPane$5_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$5, this$0)},
	{"val$iFrame", "Ljavax/swing/JInternalFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$5, val$iFrame)},
	{}
};

$MethodInfo _JOptionPane$5_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JOptionPane;Ljavax/swing/JInternalFrame;)V", "()V", 0, $method(static_cast<void(JOptionPane$5::*)($JOptionPane*,$JInternalFrame*)>(&JOptionPane$5::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JOptionPane$5_EnclosingMethodInfo_ = {
	"javax.swing.JOptionPane",
	"createInternalFrame",
	"(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JInternalFrame;"
};

$InnerClassInfo _JOptionPane$5_InnerClassesInfo_[] = {
	{"javax.swing.JOptionPane$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JOptionPane$5_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JOptionPane$5",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_JOptionPane$5_FieldInfo_,
	_JOptionPane$5_MethodInfo_,
	nullptr,
	&_JOptionPane$5_EnclosingMethodInfo_,
	_JOptionPane$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JOptionPane"
};

$Object* allocate$JOptionPane$5($Class* clazz) {
	return $of($alloc(JOptionPane$5));
}

void JOptionPane$5::init$($JOptionPane* this$0, $JInternalFrame* val$iFrame) {
	$set(this, this$0, this$0);
	$set(this, val$iFrame, val$iFrame);
}

void JOptionPane$5::propertyChange($PropertyChangeEvent* event) {
	bool var$1 = $nc(this->val$iFrame)->isVisible();
	bool var$0 = var$1 && $equals($nc(event)->getSource(), this->this$0);
	if (var$0 && $nc($(event->getPropertyName()))->equals("value"_s)) {
		$nc($($AWTAccessor::getContainerAccessor()))->stopLWModal(this->val$iFrame);
		try {
			$nc(this->val$iFrame)->setClosed(true);
		} catch ($PropertyVetoException&) {
			$catch();
		}
		$nc(this->val$iFrame)->setVisible(false);
	}
}

JOptionPane$5::JOptionPane$5() {
}

$Class* JOptionPane$5::load$($String* name, bool initialize) {
	$loadClass(JOptionPane$5, name, initialize, &_JOptionPane$5_ClassInfo_, allocate$JOptionPane$5);
	return class$;
}

$Class* JOptionPane$5::class$ = nullptr;

	} // swing
} // javax