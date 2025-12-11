#include <com/sun/java/swing/plaf/motif/MotifMenuUI$MotifChangeHandler.h>

#include <com/sun/java/swing/plaf/motif/MotifMenuUI.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicMenuUI$ChangeHandler.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <jcpp.h>

using $MotifMenuUI = ::com::sun::java::swing::plaf::motif::MotifMenuUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;
using $BasicMenuUI$ChangeHandler = ::javax::swing::plaf::basic::BasicMenuUI$ChangeHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifMenuUI$MotifChangeHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifMenuUI$MotifChangeHandler, this$0)},
	{}
};

$MethodInfo _MotifMenuUI$MotifChangeHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifMenuUI;Ljavax/swing/JMenu;Lcom/sun/java/swing/plaf/motif/MotifMenuUI;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifMenuUI$MotifChangeHandler::*)($MotifMenuUI*,$JMenu*,$MotifMenuUI*)>(&MotifMenuUI$MotifChangeHandler::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifMenuUI$MotifChangeHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifMenuUI$MotifChangeHandler", "com.sun.java.swing.plaf.motif.MotifMenuUI", "MotifChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicMenuUI$ChangeHandler", "javax.swing.plaf.basic.BasicMenuUI", "ChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _MotifMenuUI$MotifChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifMenuUI$MotifChangeHandler",
	"javax.swing.plaf.basic.BasicMenuUI$ChangeHandler",
	nullptr,
	_MotifMenuUI$MotifChangeHandler_FieldInfo_,
	_MotifMenuUI$MotifChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MotifMenuUI$MotifChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifMenuUI"
};

$Object* allocate$MotifMenuUI$MotifChangeHandler($Class* clazz) {
	return $of($alloc(MotifMenuUI$MotifChangeHandler));
}

void MotifMenuUI$MotifChangeHandler::init$($MotifMenuUI* this$0, $JMenu* m, $MotifMenuUI* ui) {
	$set(this, this$0, this$0);
	$BasicMenuUI$ChangeHandler::init$(this$0, m, ui);
}

void MotifMenuUI$MotifChangeHandler::stateChanged($ChangeEvent* e) {
	$var($JMenuItem, c, $cast($JMenuItem, $nc(e)->getSource()));
	bool var$0 = $nc(c)->isArmed();
	if (var$0 || $nc(c)->isSelected()) {
		c->setBorderPainted(true);
	} else {
		c->setBorderPainted(false);
	}
	$BasicMenuUI$ChangeHandler::stateChanged(e);
}

MotifMenuUI$MotifChangeHandler::MotifMenuUI$MotifChangeHandler() {
}

$Class* MotifMenuUI$MotifChangeHandler::load$($String* name, bool initialize) {
	$loadClass(MotifMenuUI$MotifChangeHandler, name, initialize, &_MotifMenuUI$MotifChangeHandler_ClassInfo_, allocate$MotifMenuUI$MotifChangeHandler);
	return class$;
}

$Class* MotifMenuUI$MotifChangeHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com