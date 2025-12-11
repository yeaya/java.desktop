#include <javax/swing/JMenu$MenuChangeListener.h>

#include <javax/swing/ButtonModel.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JMenu = ::javax::swing::JMenu;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$FieldInfo _JMenu$MenuChangeListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JMenu;", nullptr, $FINAL | $SYNTHETIC, $field(JMenu$MenuChangeListener, this$0)},
	{"isSelected", "Z", nullptr, 0, $field(JMenu$MenuChangeListener, isSelected)},
	{}
};

$MethodInfo _JMenu$MenuChangeListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JMenu;)V", nullptr, 0, $method(static_cast<void(JMenu$MenuChangeListener::*)($JMenu*)>(&JMenu$MenuChangeListener::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JMenu$MenuChangeListener_InnerClassesInfo_[] = {
	{"javax.swing.JMenu$MenuChangeListener", "javax.swing.JMenu", "MenuChangeListener", 0},
	{}
};

$ClassInfo _JMenu$MenuChangeListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JMenu$MenuChangeListener",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.io.Serializable",
	_JMenu$MenuChangeListener_FieldInfo_,
	_JMenu$MenuChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_JMenu$MenuChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JMenu"
};

$Object* allocate$JMenu$MenuChangeListener($Class* clazz) {
	return $of($alloc(JMenu$MenuChangeListener));
}

int32_t JMenu$MenuChangeListener::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool JMenu$MenuChangeListener::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* JMenu$MenuChangeListener::clone() {
	 return this->$ChangeListener::clone();
}

$String* JMenu$MenuChangeListener::toString() {
	 return this->$ChangeListener::toString();
}

void JMenu$MenuChangeListener::finalize() {
	this->$ChangeListener::finalize();
}

void JMenu$MenuChangeListener::init$($JMenu* this$0) {
	$set(this, this$0, this$0);
	this->isSelected = false;
}

void JMenu$MenuChangeListener::stateChanged($ChangeEvent* e) {
	$var($ButtonModel, model, $cast($ButtonModel, $nc(e)->getSource()));
	bool modelSelected = $nc(model)->isSelected();
	if (modelSelected != this->isSelected) {
		if (modelSelected == true) {
			this->this$0->fireMenuSelected();
		} else {
			this->this$0->fireMenuDeselected();
		}
		this->isSelected = modelSelected;
	}
}

JMenu$MenuChangeListener::JMenu$MenuChangeListener() {
}

$Class* JMenu$MenuChangeListener::load$($String* name, bool initialize) {
	$loadClass(JMenu$MenuChangeListener, name, initialize, &_JMenu$MenuChangeListener_ClassInfo_, allocate$JMenu$MenuChangeListener);
	return class$;
}

$Class* JMenu$MenuChangeListener::class$ = nullptr;

	} // swing
} // javax