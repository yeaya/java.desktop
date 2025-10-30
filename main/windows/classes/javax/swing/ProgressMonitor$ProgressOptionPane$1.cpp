#include <javax/swing/ProgressMonitor$ProgressOptionPane$1.h>

#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/ProgressMonitor$ProgressOptionPane.h>
#include <javax/swing/ProgressMonitor.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;
using $ProgressMonitor = ::javax::swing::ProgressMonitor;
using $ProgressMonitor$ProgressOptionPane = ::javax::swing::ProgressMonitor$ProgressOptionPane;

namespace javax {
	namespace swing {

$FieldInfo _ProgressMonitor$ProgressOptionPane$1_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/ProgressMonitor$ProgressOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(ProgressMonitor$ProgressOptionPane$1, this$1)},
	{"gotFocus", "Z", nullptr, 0, $field(ProgressMonitor$ProgressOptionPane$1, gotFocus)},
	{}
};

$MethodInfo _ProgressMonitor$ProgressOptionPane$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/ProgressMonitor$ProgressOptionPane;)V", nullptr, 0, $method(static_cast<void(ProgressMonitor$ProgressOptionPane$1::*)($ProgressMonitor$ProgressOptionPane*)>(&ProgressMonitor$ProgressOptionPane$1::init$))},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProgressMonitor$ProgressOptionPane$1_EnclosingMethodInfo_ = {
	"javax.swing.ProgressMonitor$ProgressOptionPane",
	"createDialog",
	"(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JDialog;"
};

$InnerClassInfo _ProgressMonitor$ProgressOptionPane$1_InnerClassesInfo_[] = {
	{"javax.swing.ProgressMonitor$ProgressOptionPane", "javax.swing.ProgressMonitor", "ProgressOptionPane", $PRIVATE},
	{"javax.swing.ProgressMonitor$ProgressOptionPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProgressMonitor$ProgressOptionPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ProgressMonitor$ProgressOptionPane$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	_ProgressMonitor$ProgressOptionPane$1_FieldInfo_,
	_ProgressMonitor$ProgressOptionPane$1_MethodInfo_,
	nullptr,
	&_ProgressMonitor$ProgressOptionPane$1_EnclosingMethodInfo_,
	_ProgressMonitor$ProgressOptionPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ProgressMonitor"
};

$Object* allocate$ProgressMonitor$ProgressOptionPane$1($Class* clazz) {
	return $of($alloc(ProgressMonitor$ProgressOptionPane$1));
}

void ProgressMonitor$ProgressOptionPane$1::init$($ProgressMonitor$ProgressOptionPane* this$1) {
	$set(this, this$1, this$1);
	$WindowAdapter::init$();
	this->gotFocus = false;
}

void ProgressMonitor$ProgressOptionPane$1::windowClosing($WindowEvent* we) {
	this->this$1->setValue($nc($nc(this->this$1->this$0)->cancelOption)->get(0));
}

void ProgressMonitor$ProgressOptionPane$1::windowActivated($WindowEvent* we) {
	if (!this->gotFocus) {
		this->this$1->selectInitialValue();
		this->gotFocus = true;
	}
}

ProgressMonitor$ProgressOptionPane$1::ProgressMonitor$ProgressOptionPane$1() {
}

$Class* ProgressMonitor$ProgressOptionPane$1::load$($String* name, bool initialize) {
	$loadClass(ProgressMonitor$ProgressOptionPane$1, name, initialize, &_ProgressMonitor$ProgressOptionPane$1_ClassInfo_, allocate$ProgressMonitor$ProgressOptionPane$1);
	return class$;
}

$Class* ProgressMonitor$ProgressOptionPane$1::class$ = nullptr;

	} // swing
} // javax