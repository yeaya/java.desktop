#include <javax/swing/plaf/multi/MultiComboBoxUI.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/multi/MultiLookAndFeel.h>
#include <jcpp.h>

using $ComponentUIArray = $Array<::javax::swing::plaf::ComponentUI>;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$FieldInfo _MultiComboBoxUI_FieldInfo_[] = {
	{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiComboBoxUI, uis)},
	{}
};

$MethodInfo _MultiComboBoxUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiComboBoxUI::*)()>(&MultiComboBoxUI::init$))},
	{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MultiComboBoxUI::createUI))},
	{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isFocusTraversable", "(Ljavax/swing/JComboBox;)Z", "(Ljavax/swing/JComboBox<*>;)Z", $PUBLIC},
	{"isPopupVisible", "(Ljavax/swing/JComboBox;)Z", "(Ljavax/swing/JComboBox<*>;)Z", $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"setPopupVisible", "(Ljavax/swing/JComboBox;Z)V", "(Ljavax/swing/JComboBox<*>;Z)V", $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultiComboBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.multi.MultiComboBoxUI",
	"javax.swing.plaf.ComboBoxUI",
	nullptr,
	_MultiComboBoxUI_FieldInfo_,
	_MultiComboBoxUI_MethodInfo_
};

$Object* allocate$MultiComboBoxUI($Class* clazz) {
	return $of($alloc(MultiComboBoxUI));
}

void MultiComboBoxUI::init$() {
	$ComboBoxUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiComboBoxUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

bool MultiComboBoxUI::isFocusTraversable($JComboBox* a) {
	bool returnValue = $nc((($cast($ComboBoxUI, $($nc(this->uis)->elementAt(0))))))->isFocusTraversable(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($ComboBoxUI, $($nc(this->uis)->elementAt(i))))))->isFocusTraversable(a);
	}
	return returnValue;
}

void MultiComboBoxUI::setPopupVisible($JComboBox* a, bool b) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($ComboBoxUI, $($nc(this->uis)->elementAt(i))))))->setPopupVisible(a, b);
	}
}

bool MultiComboBoxUI::isPopupVisible($JComboBox* a) {
	bool returnValue = $nc((($cast($ComboBoxUI, $($nc(this->uis)->elementAt(0))))))->isPopupVisible(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($ComboBoxUI, $($nc(this->uis)->elementAt(i))))))->isPopupVisible(a);
	}
	return returnValue;
}

bool MultiComboBoxUI::contains($JComponent* a, int32_t b, int32_t c) {
	bool returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->contains(a, b, c);
	}
	return returnValue;
}

void MultiComboBoxUI::update($Graphics* a, $JComponent* b) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->update(a, b);
	}
}

$ComponentUI* MultiComboBoxUI::createUI($JComponent* a) {
	$init(MultiComboBoxUI);
	$var(MultiComboBoxUI, mui, $new(MultiComboBoxUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiComboBoxUI::installUI($JComponent* a) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->installUI(a);
	}
}

void MultiComboBoxUI::uninstallUI($JComponent* a) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->uninstallUI(a);
	}
}

void MultiComboBoxUI::paint($Graphics* a, $JComponent* b) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->paint(a, b);
	}
}

$Dimension* MultiComboBoxUI::getPreferredSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiComboBoxUI::getMinimumSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiComboBoxUI::getMaximumSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiComboBoxUI::getAccessibleChildrenCount($JComponent* a) {
	int32_t returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiComboBoxUI::getAccessibleChild($JComponent* a, int32_t b) {
	$var($Accessible, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiComboBoxUI::MultiComboBoxUI() {
}

$Class* MultiComboBoxUI::load$($String* name, bool initialize) {
	$loadClass(MultiComboBoxUI, name, initialize, &_MultiComboBoxUI_ClassInfo_, allocate$MultiComboBoxUI);
	return class$;
}

$Class* MultiComboBoxUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax