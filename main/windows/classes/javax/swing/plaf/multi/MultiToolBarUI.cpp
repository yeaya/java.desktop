#include <javax/swing/plaf/multi/MultiToolBarUI.h>

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
#include <javax/swing/plaf/ToolBarUI.h>
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
using $ToolBarUI = ::javax::swing::plaf::ToolBarUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$FieldInfo _MultiToolBarUI_FieldInfo_[] = {
	{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiToolBarUI, uis)},
	{}
};

$MethodInfo _MultiToolBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiToolBarUI::*)()>(&MultiToolBarUI::init$))},
	{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MultiToolBarUI::createUI))},
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

$ClassInfo _MultiToolBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.multi.MultiToolBarUI",
	"javax.swing.plaf.ToolBarUI",
	nullptr,
	_MultiToolBarUI_FieldInfo_,
	_MultiToolBarUI_MethodInfo_
};

$Object* allocate$MultiToolBarUI($Class* clazz) {
	return $of($alloc(MultiToolBarUI));
}

void MultiToolBarUI::init$() {
	$ToolBarUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiToolBarUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

bool MultiToolBarUI::contains($JComponent* a, int32_t b, int32_t c) {
	bool returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->contains(a, b, c);
	}
	return returnValue;
}

void MultiToolBarUI::update($Graphics* a, $JComponent* b) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->update(a, b);
	}
}

$ComponentUI* MultiToolBarUI::createUI($JComponent* a) {
	$init(MultiToolBarUI);
	$var(MultiToolBarUI, mui, $new(MultiToolBarUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiToolBarUI::installUI($JComponent* a) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->installUI(a);
	}
}

void MultiToolBarUI::uninstallUI($JComponent* a) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->uninstallUI(a);
	}
}

void MultiToolBarUI::paint($Graphics* a, $JComponent* b) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->paint(a, b);
	}
}

$Dimension* MultiToolBarUI::getPreferredSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiToolBarUI::getMinimumSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiToolBarUI::getMaximumSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiToolBarUI::getAccessibleChildrenCount($JComponent* a) {
	int32_t returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiToolBarUI::getAccessibleChild($JComponent* a, int32_t b) {
	$var($Accessible, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiToolBarUI::MultiToolBarUI() {
}

$Class* MultiToolBarUI::load$($String* name, bool initialize) {
	$loadClass(MultiToolBarUI, name, initialize, &_MultiToolBarUI_ClassInfo_, allocate$MultiToolBarUI);
	return class$;
}

$Class* MultiToolBarUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax