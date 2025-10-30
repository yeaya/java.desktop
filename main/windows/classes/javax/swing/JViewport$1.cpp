#include <javax/swing/JViewport$1.h>

#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JViewport.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JViewport = ::javax::swing::JViewport;

namespace javax {
	namespace swing {

$FieldInfo _JViewport$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JViewport;", nullptr, $FINAL | $SYNTHETIC, $field(JViewport$1, this$0)},
	{}
};

$MethodInfo _JViewport$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JViewport;)V", nullptr, 0, $method(static_cast<void(JViewport$1::*)($JViewport*)>(&JViewport$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JViewport$1_EnclosingMethodInfo_ = {
	"javax.swing.JViewport",
	"createRepaintTimer",
	"()Ljavax/swing/Timer;"
};

$InnerClassInfo _JViewport$1_InnerClassesInfo_[] = {
	{"javax.swing.JViewport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JViewport$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JViewport$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_JViewport$1_FieldInfo_,
	_JViewport$1_MethodInfo_,
	nullptr,
	&_JViewport$1_EnclosingMethodInfo_,
	_JViewport$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JViewport"
};

$Object* allocate$JViewport$1($Class* clazz) {
	return $of($alloc(JViewport$1));
}

void JViewport$1::init$($JViewport* this$0) {
	$set(this, this$0, this$0);
}

void JViewport$1::actionPerformed($ActionEvent* ae) {
	if (this->this$0->waitingForRepaint) {
		this->this$0->repaint();
	}
}

JViewport$1::JViewport$1() {
}

$Class* JViewport$1::load$($String* name, bool initialize) {
	$loadClass(JViewport$1, name, initialize, &_JViewport$1_ClassInfo_, allocate$JViewport$1);
	return class$;
}

$Class* JViewport$1::class$ = nullptr;

	} // swing
} // javax