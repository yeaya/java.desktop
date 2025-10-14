#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI$3.h>

#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopIconUI.h>
#include <jcpp.h>

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $MotifInternalFrameUI = ::com::sun::java::swing::plaf::motif::MotifInternalFrameUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $DesktopIconUI = ::javax::swing::plaf::DesktopIconUI;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifInternalFrameUI$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameUI$3, this$0)},
	{}
};

$MethodInfo _MotifInternalFrameUI$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameUI;)V", nullptr, 0, $method(static_cast<void(MotifInternalFrameUI$3::*)($MotifInternalFrameUI*)>(&MotifInternalFrameUI$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifInternalFrameUI$3_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifInternalFrameUI",
	"setupMenuCloseKey",
	"()V"
};

$InnerClassInfo _MotifInternalFrameUI$3_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifInternalFrameUI$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$3",
	"javax.swing.AbstractAction",
	nullptr,
	_MotifInternalFrameUI$3_FieldInfo_,
	_MotifInternalFrameUI$3_MethodInfo_,
	nullptr,
	&_MotifInternalFrameUI$3_EnclosingMethodInfo_,
	_MotifInternalFrameUI$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameUI"
};

$Object* allocate$MotifInternalFrameUI$3($Class* clazz) {
	return $of($alloc(MotifInternalFrameUI$3));
}

void MotifInternalFrameUI$3::init$($MotifInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void MotifInternalFrameUI$3::actionPerformed($ActionEvent* e) {
	$var($JInternalFrame$JDesktopIcon, icon, $nc($(this->this$0->getFrame()))->getDesktopIcon());
	$var($MotifDesktopIconUI, micon, $cast($MotifDesktopIconUI, $cast($DesktopIconUI, $nc(icon)->getUI())));
	$nc(micon)->hideSystemMenu();
}

bool MotifInternalFrameUI$3::isEnabled() {
	return this->this$0->isKeyBindingActive();
}

MotifInternalFrameUI$3::MotifInternalFrameUI$3() {
}

$Class* MotifInternalFrameUI$3::load$($String* name, bool initialize) {
	$loadClass(MotifInternalFrameUI$3, name, initialize, &_MotifInternalFrameUI$3_ClassInfo_, allocate$MotifInternalFrameUI$3);
	return class$;
}

$Class* MotifInternalFrameUI$3::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com