#include <javax/swing/JOptionPane$3.h>

#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

#undef UNINITIALIZED_VALUE

using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;

namespace javax {
	namespace swing {

$FieldInfo _JOptionPane$3_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$3, this$0)},
	{}
};

$MethodInfo _JOptionPane$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JOptionPane;)V", nullptr, 0, $method(static_cast<void(JOptionPane$3::*)($JOptionPane*)>(&JOptionPane$3::init$))},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JOptionPane$3_EnclosingMethodInfo_ = {
	"javax.swing.JOptionPane",
	"initDialog",
	"(Ljavax/swing/JDialog;ILjava/awt/Component;)V"
};

$InnerClassInfo _JOptionPane$3_InnerClassesInfo_[] = {
	{"javax.swing.JOptionPane$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JOptionPane$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JOptionPane$3",
	"java.awt.event.ComponentAdapter",
	nullptr,
	_JOptionPane$3_FieldInfo_,
	_JOptionPane$3_MethodInfo_,
	nullptr,
	&_JOptionPane$3_EnclosingMethodInfo_,
	_JOptionPane$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JOptionPane"
};

$Object* allocate$JOptionPane$3($Class* clazz) {
	return $of($alloc(JOptionPane$3));
}

void JOptionPane$3::init$($JOptionPane* this$0) {
	$set(this, this$0, this$0);
	$ComponentAdapter::init$();
}

void JOptionPane$3::componentShown($ComponentEvent* ce) {
	$init($JOptionPane);
	this->this$0->setValue($JOptionPane::UNINITIALIZED_VALUE);
}

JOptionPane$3::JOptionPane$3() {
}

$Class* JOptionPane$3::load$($String* name, bool initialize) {
	$loadClass(JOptionPane$3, name, initialize, &_JOptionPane$3_ClassInfo_, allocate$JOptionPane$3);
	return class$;
}

$Class* JOptionPane$3::class$ = nullptr;

	} // swing
} // javax