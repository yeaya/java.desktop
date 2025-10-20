#include <com/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI$ChangeHandler.h>

#include <com/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $MotifCheckBoxMenuItemUI = ::com::sun::java::swing::plaf::motif::MotifCheckBoxMenuItemUI;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifCheckBoxMenuItemUI$ChangeHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifCheckBoxMenuItemUI$ChangeHandler, this$0)},
	{}
};

$MethodInfo _MotifCheckBoxMenuItemUI$ChangeHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifCheckBoxMenuItemUI$ChangeHandler::*)($MotifCheckBoxMenuItemUI*)>(&MotifCheckBoxMenuItemUI$ChangeHandler::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifCheckBoxMenuItemUI$ChangeHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$ChangeHandler", "com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI", "ChangeHandler", $PROTECTED},
	{}
};

$ClassInfo _MotifCheckBoxMenuItemUI$ChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$ChangeHandler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_MotifCheckBoxMenuItemUI$ChangeHandler_FieldInfo_,
	_MotifCheckBoxMenuItemUI$ChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MotifCheckBoxMenuItemUI$ChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI"
};

$Object* allocate$MotifCheckBoxMenuItemUI$ChangeHandler($Class* clazz) {
	return $of($alloc(MotifCheckBoxMenuItemUI$ChangeHandler));
}

void MotifCheckBoxMenuItemUI$ChangeHandler::init$($MotifCheckBoxMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifCheckBoxMenuItemUI$ChangeHandler::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuItem, c, $cast($JMenuItem, $nc(e)->getSource()));
	$LookAndFeel::installProperty(c, "borderPainted"_s, $($Boolean::valueOf($nc(c)->isArmed())));
}

MotifCheckBoxMenuItemUI$ChangeHandler::MotifCheckBoxMenuItemUI$ChangeHandler() {
}

$Class* MotifCheckBoxMenuItemUI$ChangeHandler::load$($String* name, bool initialize) {
	$loadClass(MotifCheckBoxMenuItemUI$ChangeHandler, name, initialize, &_MotifCheckBoxMenuItemUI$ChangeHandler_ClassInfo_, allocate$MotifCheckBoxMenuItemUI$ChangeHandler);
	return class$;
}

$Class* MotifCheckBoxMenuItemUI$ChangeHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com