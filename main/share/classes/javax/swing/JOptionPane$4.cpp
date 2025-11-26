#include <javax/swing/JOptionPane$4.h>

#include <javax/swing/JOptionPane.h>
#include <javax/swing/event/InternalFrameAdapter.h>
#include <javax/swing/event/InternalFrameEvent.h>
#include <jcpp.h>

#undef UNINITIALIZED_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;
using $InternalFrameAdapter = ::javax::swing::event::InternalFrameAdapter;
using $InternalFrameEvent = ::javax::swing::event::InternalFrameEvent;

namespace javax {
	namespace swing {

$FieldInfo _JOptionPane$4_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$4, this$0)},
	{}
};

$MethodInfo _JOptionPane$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JOptionPane;)V", nullptr, 0, $method(static_cast<void(JOptionPane$4::*)($JOptionPane*)>(&JOptionPane$4::init$))},
	{"internalFrameClosing", "(Ljavax/swing/event/InternalFrameEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JOptionPane$4_EnclosingMethodInfo_ = {
	"javax.swing.JOptionPane",
	"createInternalFrame",
	"(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JInternalFrame;"
};

$InnerClassInfo _JOptionPane$4_InnerClassesInfo_[] = {
	{"javax.swing.JOptionPane$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JOptionPane$4_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JOptionPane$4",
	"javax.swing.event.InternalFrameAdapter",
	nullptr,
	_JOptionPane$4_FieldInfo_,
	_JOptionPane$4_MethodInfo_,
	nullptr,
	&_JOptionPane$4_EnclosingMethodInfo_,
	_JOptionPane$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JOptionPane"
};

$Object* allocate$JOptionPane$4($Class* clazz) {
	return $of($alloc(JOptionPane$4));
}

void JOptionPane$4::init$($JOptionPane* this$0) {
	$set(this, this$0, this$0);
	$InternalFrameAdapter::init$();
}

void JOptionPane$4::internalFrameClosing($InternalFrameEvent* e) {
	$init($JOptionPane);
	if ($equals(this->this$0->getValue(), $JOptionPane::UNINITIALIZED_VALUE)) {
		this->this$0->setValue(nullptr);
	}
}

JOptionPane$4::JOptionPane$4() {
}

$Class* JOptionPane$4::load$($String* name, bool initialize) {
	$loadClass(JOptionPane$4, name, initialize, &_JOptionPane$4_ClassInfo_, allocate$JOptionPane$4);
	return class$;
}

$Class* JOptionPane$4::class$ = nullptr;

	} // swing
} // javax