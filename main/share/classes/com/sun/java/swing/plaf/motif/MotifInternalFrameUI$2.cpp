#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI$2.h>

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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifInternalFrameUI$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameUI$2, this$0)},
	{}
};

$MethodInfo _MotifInternalFrameUI$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameUI;)V", nullptr, 0, $method(static_cast<void(MotifInternalFrameUI$2::*)($MotifInternalFrameUI*)>(&MotifInternalFrameUI$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifInternalFrameUI$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifInternalFrameUI",
	"setupMenuCloseKey",
	"()V"
};

$InnerClassInfo _MotifInternalFrameUI$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifInternalFrameUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$2",
	"javax.swing.AbstractAction",
	nullptr,
	_MotifInternalFrameUI$2_FieldInfo_,
	_MotifInternalFrameUI$2_MethodInfo_,
	nullptr,
	&_MotifInternalFrameUI$2_EnclosingMethodInfo_,
	_MotifInternalFrameUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameUI"
};

$Object* allocate$MotifInternalFrameUI$2($Class* clazz) {
	return $of($alloc(MotifInternalFrameUI$2));
}

void MotifInternalFrameUI$2::init$($MotifInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void MotifInternalFrameUI$2::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->titlePane)->hideSystemMenu();
}

bool MotifInternalFrameUI$2::isEnabled() {
	return this->this$0->isKeyBindingActive();
}

MotifInternalFrameUI$2::MotifInternalFrameUI$2() {
}

$Class* MotifInternalFrameUI$2::load$($String* name, bool initialize) {
	$loadClass(MotifInternalFrameUI$2, name, initialize, &_MotifInternalFrameUI$2_ClassInfo_, allocate$MotifInternalFrameUI$2);
	return class$;
}

$Class* MotifInternalFrameUI$2::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com