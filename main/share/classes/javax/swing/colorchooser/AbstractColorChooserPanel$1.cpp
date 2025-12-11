#include <javax/swing/colorchooser/AbstractColorChooserPanel$1.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _AbstractColorChooserPanel$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractColorChooserPanel$1, this$0)},
	{}
};

$MethodInfo _AbstractColorChooserPanel$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/colorchooser/AbstractColorChooserPanel;)V", nullptr, 0, $method(static_cast<void(AbstractColorChooserPanel$1::*)($AbstractColorChooserPanel*)>(&AbstractColorChooserPanel$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractColorChooserPanel$1_EnclosingMethodInfo_ = {
	"javax.swing.colorchooser.AbstractColorChooserPanel",
	nullptr,
	nullptr
};

$InnerClassInfo _AbstractColorChooserPanel$1_InnerClassesInfo_[] = {
	{"javax.swing.colorchooser.AbstractColorChooserPanel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractColorChooserPanel$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.AbstractColorChooserPanel$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_AbstractColorChooserPanel$1_FieldInfo_,
	_AbstractColorChooserPanel$1_MethodInfo_,
	nullptr,
	&_AbstractColorChooserPanel$1_EnclosingMethodInfo_,
	_AbstractColorChooserPanel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.colorchooser.AbstractColorChooserPanel"
};

$Object* allocate$AbstractColorChooserPanel$1($Class* clazz) {
	return $of($alloc(AbstractColorChooserPanel$1));
}

void AbstractColorChooserPanel$1::init$($AbstractColorChooserPanel* this$0) {
	$set(this, this$0, this$0);
}

void AbstractColorChooserPanel$1::propertyChange($PropertyChangeEvent* event) {
	$var($Object, value, $nc(event)->getNewValue());
	if ($instanceOf($Boolean, value)) {
		this->this$0->setEnabled($nc(($cast($Boolean, value)))->booleanValue());
	}
}

AbstractColorChooserPanel$1::AbstractColorChooserPanel$1() {
}

$Class* AbstractColorChooserPanel$1::load$($String* name, bool initialize) {
	$loadClass(AbstractColorChooserPanel$1, name, initialize, &_AbstractColorChooserPanel$1_ClassInfo_, allocate$AbstractColorChooserPanel$1);
	return class$;
}

$Class* AbstractColorChooserPanel$1::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax