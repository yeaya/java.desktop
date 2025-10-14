#include <javax/swing/plaf/multi/MultiLabelUI.h>

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
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
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
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LabelUI = ::javax::swing::plaf::LabelUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$FieldInfo _MultiLabelUI_FieldInfo_[] = {
	{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiLabelUI, uis)},
	{}
};

$MethodInfo _MultiLabelUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiLabelUI::*)()>(&MultiLabelUI::init$))},
	{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MultiLabelUI::createUI))},
	{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultiLabelUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.multi.MultiLabelUI",
	"javax.swing.plaf.LabelUI",
	nullptr,
	_MultiLabelUI_FieldInfo_,
	_MultiLabelUI_MethodInfo_
};

$Object* allocate$MultiLabelUI($Class* clazz) {
	return $of($alloc(MultiLabelUI));
}

void MultiLabelUI::init$() {
	$LabelUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiLabelUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

bool MultiLabelUI::contains($JComponent* a, int32_t b, int32_t c) {
	bool returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->contains(a, b, c);
	}
	return returnValue;
}

void MultiLabelUI::update($Graphics* a, $JComponent* b) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->update(a, b);
	}
}

$ComponentUI* MultiLabelUI::createUI($JComponent* a) {
	$init(MultiLabelUI);
	$var(MultiLabelUI, mui, $new(MultiLabelUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiLabelUI::installUI($JComponent* a) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->installUI(a);
	}
}

void MultiLabelUI::uninstallUI($JComponent* a) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->uninstallUI(a);
	}
}

void MultiLabelUI::paint($Graphics* a, $JComponent* b) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->paint(a, b);
	}
}

$Dimension* MultiLabelUI::getPreferredSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiLabelUI::getMinimumSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiLabelUI::getMaximumSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiLabelUI::getAccessibleChildrenCount($JComponent* a) {
	int32_t returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiLabelUI::getAccessibleChild($JComponent* a, int32_t b) {
	$var($Accessible, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiLabelUI::MultiLabelUI() {
}

$Class* MultiLabelUI::load$($String* name, bool initialize) {
	$loadClass(MultiLabelUI, name, initialize, &_MultiLabelUI_ClassInfo_, allocate$MultiLabelUI);
	return class$;
}

$Class* MultiLabelUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax