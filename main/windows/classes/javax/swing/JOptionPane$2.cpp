#include <javax/swing/JOptionPane$2.h>

#include <java/awt/Container.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/beans/PropertyChangeListener.h>
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

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;
using $JOptionPane = ::javax::swing::JOptionPane;

namespace javax {
	namespace swing {

$FieldInfo _JOptionPane$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$2, this$0)},
	{"val$dialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$2, val$dialog)},
	{"val$listener", "Ljava/beans/PropertyChangeListener;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$2, val$listener)},
	{"gotFocus", "Z", nullptr, $PRIVATE, $field(JOptionPane$2, gotFocus)},
	{}
};

$MethodInfo _JOptionPane$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JOptionPane;Ljava/beans/PropertyChangeListener;Ljavax/swing/JDialog;)V", nullptr, 0, $method(static_cast<void(JOptionPane$2::*)($JOptionPane*,$PropertyChangeListener*,$JDialog*)>(&JOptionPane$2::init$))},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowGainedFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JOptionPane$2_EnclosingMethodInfo_ = {
	"javax.swing.JOptionPane",
	"initDialog",
	"(Ljavax/swing/JDialog;ILjava/awt/Component;)V"
};

$InnerClassInfo _JOptionPane$2_InnerClassesInfo_[] = {
	{"javax.swing.JOptionPane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JOptionPane$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JOptionPane$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_JOptionPane$2_FieldInfo_,
	_JOptionPane$2_MethodInfo_,
	nullptr,
	&_JOptionPane$2_EnclosingMethodInfo_,
	_JOptionPane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JOptionPane"
};

$Object* allocate$JOptionPane$2($Class* clazz) {
	return $of($alloc(JOptionPane$2));
}

void JOptionPane$2::init$($JOptionPane* this$0, $PropertyChangeListener* val$listener, $JDialog* val$dialog) {
	$set(this, this$0, this$0);
	$set(this, val$listener, val$listener);
	$set(this, val$dialog, val$dialog);
	$WindowAdapter::init$();
	this->gotFocus = false;
}

void JOptionPane$2::windowClosing($WindowEvent* we) {
	this->this$0->setValue(nullptr);
}

void JOptionPane$2::windowClosed($WindowEvent* e) {
	this->this$0->removePropertyChangeListener(this->val$listener);
	$nc($($nc(this->val$dialog)->getContentPane()))->removeAll();
}

void JOptionPane$2::windowGainedFocus($WindowEvent* we) {
	if (!this->gotFocus) {
		this->this$0->selectInitialValue();
		this->gotFocus = true;
	}
}

JOptionPane$2::JOptionPane$2() {
}

$Class* JOptionPane$2::load$($String* name, bool initialize) {
	$loadClass(JOptionPane$2, name, initialize, &_JOptionPane$2_ClassInfo_, allocate$JOptionPane$2);
	return class$;
}

$Class* JOptionPane$2::class$ = nullptr;

	} // swing
} // javax