#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI$1.h>

#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <jcpp.h>

using $MotifInternalFrameTitlePane = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane;
using $MotifInternalFrameUI = ::com::sun::java::swing::plaf::motif::MotifInternalFrameUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifInternalFrameUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameUI$1, this$0)},
	{}
};

$MethodInfo _MotifInternalFrameUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameUI;)V", nullptr, 0, $method(static_cast<void(MotifInternalFrameUI$1::*)($MotifInternalFrameUI*)>(&MotifInternalFrameUI$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifInternalFrameUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifInternalFrameUI",
	"setupMenuOpenKey",
	"()V"
};

$InnerClassInfo _MotifInternalFrameUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifInternalFrameUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$1",
	"javax.swing.AbstractAction",
	nullptr,
	_MotifInternalFrameUI$1_FieldInfo_,
	_MotifInternalFrameUI$1_MethodInfo_,
	nullptr,
	&_MotifInternalFrameUI$1_EnclosingMethodInfo_,
	_MotifInternalFrameUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameUI"
};

$Object* allocate$MotifInternalFrameUI$1($Class* clazz) {
	return $of($alloc(MotifInternalFrameUI$1));
}

void MotifInternalFrameUI$1::init$($MotifInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void MotifInternalFrameUI$1::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->titlePane)->showSystemMenu();
}

bool MotifInternalFrameUI$1::isEnabled() {
	return this->this$0->isKeyBindingActive();
}

MotifInternalFrameUI$1::MotifInternalFrameUI$1() {
}

$Class* MotifInternalFrameUI$1::load$($String* name, bool initialize) {
	$loadClass(MotifInternalFrameUI$1, name, initialize, &_MotifInternalFrameUI$1_ClassInfo_, allocate$MotifInternalFrameUI$1);
	return class$;
}

$Class* MotifInternalFrameUI$1::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com