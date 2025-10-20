#include <javax/swing/plaf/metal/MetalComboBoxUI$MetalPropertyChangeListener.h>

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
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/metal/MetalComboBoxButton.h>
#include <javax/swing/plaf/metal/MetalComboBoxUI.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicComboBoxUI$PropertyChangeHandler;
using $MetalComboBoxButton = ::javax::swing::plaf::metal::MetalComboBoxButton;
using $MetalComboBoxUI = ::javax::swing::plaf::metal::MetalComboBoxUI;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalComboBoxUI$MetalPropertyChangeListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalComboBoxUI$MetalPropertyChangeListener, this$0)},
	{}
};

$MethodInfo _MetalComboBoxUI$MetalPropertyChangeListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalComboBoxUI$MetalPropertyChangeListener::*)($MetalComboBoxUI*)>(&MetalComboBoxUI$MetalPropertyChangeListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalComboBoxUI$MetalPropertyChangeListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalComboBoxUI$MetalPropertyChangeListener", "javax.swing.plaf.metal.MetalComboBoxUI", "MetalPropertyChangeListener", $PUBLIC},
	{"javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _MetalComboBoxUI$MetalPropertyChangeListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalComboBoxUI$MetalPropertyChangeListener",
	"javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler",
	nullptr,
	_MetalComboBoxUI$MetalPropertyChangeListener_FieldInfo_,
	_MetalComboBoxUI$MetalPropertyChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_MetalComboBoxUI$MetalPropertyChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalComboBoxUI"
};

$Object* allocate$MetalComboBoxUI$MetalPropertyChangeListener($Class* clazz) {
	return $of($alloc(MetalComboBoxUI$MetalPropertyChangeListener));
}

void MetalComboBoxUI$MetalPropertyChangeListener::init$($MetalComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI$PropertyChangeHandler::init$(this$0);
}

void MetalComboBoxUI$MetalPropertyChangeListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$BasicComboBoxUI$PropertyChangeHandler::propertyChange(e);
	$var($String, propertyName, $nc(e)->getPropertyName());
	if (propertyName == "editable"_s) {
		if ($instanceOf($MetalComboBoxButton, $($MetalComboBoxUI::access$000(this->this$0)))) {
			$var($MetalComboBoxButton, button, $cast($MetalComboBoxButton, $MetalComboBoxUI::access$100(this->this$0)));
			bool var$0 = $nc($($MetalComboBoxUI::access$200(this->this$0)))->isEditable();
			$nc(button)->setIconOnly(var$0 || $MetalLookAndFeel::usingOcean());
		}
		$nc($($MetalComboBoxUI::access$300(this->this$0)))->repaint();
		this->this$0->updateButtonForOcean($($MetalComboBoxUI::access$400(this->this$0)));
	} else if (propertyName == "background"_s) {
		$var($Color, color, $cast($Color, e->getNewValue()));
		$nc($($MetalComboBoxUI::access$500(this->this$0)))->setBackground(color);
		$nc($($MetalComboBoxUI::access$600(this->this$0)))->setBackground(color);
	} else if (propertyName == "foreground"_s) {
		$var($Color, color, $cast($Color, e->getNewValue()));
		$nc($($MetalComboBoxUI::access$700(this->this$0)))->setForeground(color);
		$nc($($MetalComboBoxUI::access$800(this->this$0)))->setForeground(color);
	}
}

MetalComboBoxUI$MetalPropertyChangeListener::MetalComboBoxUI$MetalPropertyChangeListener() {
}

$Class* MetalComboBoxUI$MetalPropertyChangeListener::load$($String* name, bool initialize) {
	$loadClass(MetalComboBoxUI$MetalPropertyChangeListener, name, initialize, &_MetalComboBoxUI$MetalPropertyChangeListener_ClassInfo_, allocate$MetalComboBoxUI$MetalPropertyChangeListener);
	return class$;
}

$Class* MetalComboBoxUI$MetalPropertyChangeListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax