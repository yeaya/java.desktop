#include <com/sun/java/swing/plaf/motif/MotifMenuItemUI$ChangeHandler.h>

#include <com/sun/java/swing/plaf/motif/MotifMenuItemUI.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $MotifMenuItemUI = ::com::sun::java::swing::plaf::motif::MotifMenuItemUI;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifMenuItemUI$ChangeHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifMenuItemUI$ChangeHandler, this$0)},
	{}
};

$MethodInfo _MotifMenuItemUI$ChangeHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifMenuItemUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifMenuItemUI$ChangeHandler::*)($MotifMenuItemUI*)>(&MotifMenuItemUI$ChangeHandler::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifMenuItemUI$ChangeHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifMenuItemUI$ChangeHandler", "com.sun.java.swing.plaf.motif.MotifMenuItemUI", "ChangeHandler", $PROTECTED},
	{}
};

$ClassInfo _MotifMenuItemUI$ChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifMenuItemUI$ChangeHandler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_MotifMenuItemUI$ChangeHandler_FieldInfo_,
	_MotifMenuItemUI$ChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MotifMenuItemUI$ChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifMenuItemUI"
};

$Object* allocate$MotifMenuItemUI$ChangeHandler($Class* clazz) {
	return $of($alloc(MotifMenuItemUI$ChangeHandler));
}

void MotifMenuItemUI$ChangeHandler::init$($MotifMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifMenuItemUI$ChangeHandler::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuItem, c, $cast($JMenuItem, $nc(e)->getSource()));
	bool var$0 = $nc(c)->isArmed();
	$LookAndFeel::installProperty(c, "borderPainted"_s, $($Boolean::valueOf(var$0 || $nc(c)->isSelected())));
}

MotifMenuItemUI$ChangeHandler::MotifMenuItemUI$ChangeHandler() {
}

$Class* MotifMenuItemUI$ChangeHandler::load$($String* name, bool initialize) {
	$loadClass(MotifMenuItemUI$ChangeHandler, name, initialize, &_MotifMenuItemUI$ChangeHandler_ClassInfo_, allocate$MotifMenuItemUI$ChangeHandler);
	return class$;
}

$Class* MotifMenuItemUI$ChangeHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com