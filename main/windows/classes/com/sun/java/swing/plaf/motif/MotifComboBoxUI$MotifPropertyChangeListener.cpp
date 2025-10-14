#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifPropertyChangeListener.h>

#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $MotifComboBoxUI = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $UIManager = ::javax::swing::UIManager;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicComboBoxUI$PropertyChangeHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifComboBoxUI$MotifPropertyChangeListener_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifComboBoxUI$MotifPropertyChangeListener, this$0)},
	{}
};

$MethodInfo _MotifComboBoxUI$MotifPropertyChangeListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI;)V", nullptr, $PRIVATE, $method(static_cast<void(MotifComboBoxUI$MotifPropertyChangeListener::*)($MotifComboBoxUI*)>(&MotifComboBoxUI$MotifPropertyChangeListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifComboBoxUI$MotifPropertyChangeListener_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifPropertyChangeListener", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "MotifPropertyChangeListener", $PRIVATE},
	{"javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _MotifComboBoxUI$MotifPropertyChangeListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifPropertyChangeListener",
	"javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler",
	nullptr,
	_MotifComboBoxUI$MotifPropertyChangeListener_FieldInfo_,
	_MotifComboBoxUI$MotifPropertyChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_MotifComboBoxUI$MotifPropertyChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifComboBoxUI"
};

$Object* allocate$MotifComboBoxUI$MotifPropertyChangeListener($Class* clazz) {
	return $of($alloc(MotifComboBoxUI$MotifPropertyChangeListener));
}

void MotifComboBoxUI$MotifPropertyChangeListener::init$($MotifComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI$PropertyChangeHandler::init$(this$0);
}

void MotifComboBoxUI$MotifPropertyChangeListener::propertyChange($PropertyChangeEvent* e) {
	$BasicComboBoxUI$PropertyChangeHandler::propertyChange(e);
	$var($String, propertyName, $nc(e)->getPropertyName());
	if (propertyName == "enabled"_s) {
		if ($nc($($MotifComboBoxUI::access$000(this->this$0)))->isEnabled()) {
			$var($Component, editor, this->this$0->motifGetEditor());
			if (editor != nullptr) {
				editor->setBackground($($UIManager::getColor("text"_s)));
			}
		}
	}
}

MotifComboBoxUI$MotifPropertyChangeListener::MotifComboBoxUI$MotifPropertyChangeListener() {
}

$Class* MotifComboBoxUI$MotifPropertyChangeListener::load$($String* name, bool initialize) {
	$loadClass(MotifComboBoxUI$MotifPropertyChangeListener, name, initialize, &_MotifComboBoxUI$MotifPropertyChangeListener_ClassInfo_, allocate$MotifComboBoxUI$MotifPropertyChangeListener);
	return class$;
}

$Class* MotifComboBoxUI$MotifPropertyChangeListener::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com