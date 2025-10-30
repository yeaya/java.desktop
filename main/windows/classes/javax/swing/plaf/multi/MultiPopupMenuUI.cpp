#include <javax/swing/plaf/multi/MultiPopupMenuUI.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/Popup.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PopupMenuUI.h>
#include <javax/swing/plaf/multi/MultiLookAndFeel.h>
#include <jcpp.h>

using $ComponentUIArray = $Array<::javax::swing::plaf::ComponentUI>;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $Popup = ::javax::swing::Popup;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $PopupMenuUI = ::javax::swing::plaf::PopupMenuUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$FieldInfo _MultiPopupMenuUI_FieldInfo_[] = {
	{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiPopupMenuUI, uis)},
	{}
};

$MethodInfo _MultiPopupMenuUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiPopupMenuUI::*)()>(&MultiPopupMenuUI::init$))},
	{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MultiPopupMenuUI::createUI))},
	{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPopup", "(Ljavax/swing/JPopupMenu;II)Ljavax/swing/Popup;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isPopupTrigger", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultiPopupMenuUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.multi.MultiPopupMenuUI",
	"javax.swing.plaf.PopupMenuUI",
	nullptr,
	_MultiPopupMenuUI_FieldInfo_,
	_MultiPopupMenuUI_MethodInfo_
};

$Object* allocate$MultiPopupMenuUI($Class* clazz) {
	return $of($alloc(MultiPopupMenuUI));
}

void MultiPopupMenuUI::init$() {
	$PopupMenuUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiPopupMenuUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

bool MultiPopupMenuUI::isPopupTrigger($MouseEvent* a) {
	$useLocalCurrentObjectStackCache();
	bool returnValue = $nc((($cast($PopupMenuUI, $($nc(this->uis)->elementAt(0))))))->isPopupTrigger(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($PopupMenuUI, $($nc(this->uis)->elementAt(i))))))->isPopupTrigger(a);
	}
	return returnValue;
}

$Popup* MultiPopupMenuUI::getPopup($JPopupMenu* a, int32_t b, int32_t c) {
	$useLocalCurrentObjectStackCache();
	$var($Popup, returnValue, $nc((($cast($PopupMenuUI, $($nc(this->uis)->elementAt(0))))))->getPopup(a, b, c));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($PopupMenuUI, $($nc(this->uis)->elementAt(i))))))->getPopup(a, b, c);
	}
	return returnValue;
}

bool MultiPopupMenuUI::contains($JComponent* a, int32_t b, int32_t c) {
	$useLocalCurrentObjectStackCache();
	bool returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->contains(a, b, c);
	}
	return returnValue;
}

void MultiPopupMenuUI::update($Graphics* a, $JComponent* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->update(a, b);
	}
}

$ComponentUI* MultiPopupMenuUI::createUI($JComponent* a) {
	$init(MultiPopupMenuUI);
	$var(MultiPopupMenuUI, mui, $new(MultiPopupMenuUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiPopupMenuUI::installUI($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->installUI(a);
	}
}

void MultiPopupMenuUI::uninstallUI($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->uninstallUI(a);
	}
}

void MultiPopupMenuUI::paint($Graphics* a, $JComponent* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->paint(a, b);
	}
}

$Dimension* MultiPopupMenuUI::getPreferredSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiPopupMenuUI::getMinimumSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiPopupMenuUI::getMaximumSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiPopupMenuUI::getAccessibleChildrenCount($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiPopupMenuUI::getAccessibleChild($JComponent* a, int32_t b) {
	$useLocalCurrentObjectStackCache();
	$var($Accessible, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiPopupMenuUI::MultiPopupMenuUI() {
}

$Class* MultiPopupMenuUI::load$($String* name, bool initialize) {
	$loadClass(MultiPopupMenuUI, name, initialize, &_MultiPopupMenuUI_ClassInfo_, allocate$MultiPopupMenuUI);
	return class$;
}

$Class* MultiPopupMenuUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax