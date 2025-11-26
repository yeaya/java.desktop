#include <com/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI$ChangeHandler.h>

#include <com/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $MotifRadioButtonMenuItemUI = ::com::sun::java::swing::plaf::motif::MotifRadioButtonMenuItemUI;
using $Serializable = ::java::io::Serializable;
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

$FieldInfo _MotifRadioButtonMenuItemUI$ChangeHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifRadioButtonMenuItemUI$ChangeHandler, this$0)},
	{}
};

$MethodInfo _MotifRadioButtonMenuItemUI$ChangeHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifRadioButtonMenuItemUI$ChangeHandler::*)($MotifRadioButtonMenuItemUI*)>(&MotifRadioButtonMenuItemUI$ChangeHandler::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifRadioButtonMenuItemUI$ChangeHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI$ChangeHandler", "com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI", "ChangeHandler", $PROTECTED},
	{}
};

$ClassInfo _MotifRadioButtonMenuItemUI$ChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI$ChangeHandler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.io.Serializable",
	_MotifRadioButtonMenuItemUI$ChangeHandler_FieldInfo_,
	_MotifRadioButtonMenuItemUI$ChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MotifRadioButtonMenuItemUI$ChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI"
};

$Object* allocate$MotifRadioButtonMenuItemUI$ChangeHandler($Class* clazz) {
	return $of($alloc(MotifRadioButtonMenuItemUI$ChangeHandler));
}

int32_t MotifRadioButtonMenuItemUI$ChangeHandler::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool MotifRadioButtonMenuItemUI$ChangeHandler::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* MotifRadioButtonMenuItemUI$ChangeHandler::clone() {
	 return this->$ChangeListener::clone();
}

$String* MotifRadioButtonMenuItemUI$ChangeHandler::toString() {
	 return this->$ChangeListener::toString();
}

void MotifRadioButtonMenuItemUI$ChangeHandler::finalize() {
	this->$ChangeListener::finalize();
}

void MotifRadioButtonMenuItemUI$ChangeHandler::init$($MotifRadioButtonMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifRadioButtonMenuItemUI$ChangeHandler::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuItem, c, $cast($JMenuItem, $nc(e)->getSource()));
	$LookAndFeel::installProperty(c, "borderPainted"_s, $($Boolean::valueOf($nc(c)->isArmed())));
}

MotifRadioButtonMenuItemUI$ChangeHandler::MotifRadioButtonMenuItemUI$ChangeHandler() {
}

$Class* MotifRadioButtonMenuItemUI$ChangeHandler::load$($String* name, bool initialize) {
	$loadClass(MotifRadioButtonMenuItemUI$ChangeHandler, name, initialize, &_MotifRadioButtonMenuItemUI$ChangeHandler_ClassInfo_, allocate$MotifRadioButtonMenuItemUI$ChangeHandler);
	return class$;
}

$Class* MotifRadioButtonMenuItemUI$ChangeHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com