#include <javax/swing/plaf/multi/MultiListUI.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ListUI.h>
#include <javax/swing/plaf/multi/MultiLookAndFeel.h>
#include <jcpp.h>

using $ComponentUIArray = $Array<::javax::swing::plaf::ComponentUI>;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ListUI = ::javax::swing::plaf::ListUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$FieldInfo _MultiListUI_FieldInfo_[] = {
	{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiListUI, uis)},
	{}
};

$MethodInfo _MultiListUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiListUI::*)()>(&MultiListUI::init$))},
	{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MultiListUI::createUI))},
	{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"getCellBounds", "(Ljavax/swing/JList;II)Ljava/awt/Rectangle;", "(Ljavax/swing/JList<*>;II)Ljava/awt/Rectangle;", $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC},
	{"indexToLocation", "(Ljavax/swing/JList;I)Ljava/awt/Point;", "(Ljavax/swing/JList<*>;I)Ljava/awt/Point;", $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"locationToIndex", "(Ljavax/swing/JList;Ljava/awt/Point;)I", "(Ljavax/swing/JList<*>;Ljava/awt/Point;)I", $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultiListUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.multi.MultiListUI",
	"javax.swing.plaf.ListUI",
	nullptr,
	_MultiListUI_FieldInfo_,
	_MultiListUI_MethodInfo_
};

$Object* allocate$MultiListUI($Class* clazz) {
	return $of($alloc(MultiListUI));
}

void MultiListUI::init$() {
	$ListUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiListUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

int32_t MultiListUI::locationToIndex($JList* a, $Point* b) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc((($cast($ListUI, $($nc(this->uis)->elementAt(0))))))->locationToIndex(a, b);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($ListUI, $($nc(this->uis)->elementAt(i))))))->locationToIndex(a, b);
	}
	return returnValue;
}

$Point* MultiListUI::indexToLocation($JList* a, int32_t b) {
	$useLocalCurrentObjectStackCache();
	$var($Point, returnValue, $nc((($cast($ListUI, $($nc(this->uis)->elementAt(0))))))->indexToLocation(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($ListUI, $($nc(this->uis)->elementAt(i))))))->indexToLocation(a, b);
	}
	return returnValue;
}

$Rectangle* MultiListUI::getCellBounds($JList* a, int32_t b, int32_t c) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, returnValue, $nc((($cast($ListUI, $($nc(this->uis)->elementAt(0))))))->getCellBounds(a, b, c));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($ListUI, $($nc(this->uis)->elementAt(i))))))->getCellBounds(a, b, c);
	}
	return returnValue;
}

bool MultiListUI::contains($JComponent* a, int32_t b, int32_t c) {
	$useLocalCurrentObjectStackCache();
	bool returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->contains(a, b, c);
	}
	return returnValue;
}

void MultiListUI::update($Graphics* a, $JComponent* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->update(a, b);
	}
}

$ComponentUI* MultiListUI::createUI($JComponent* a) {
	$init(MultiListUI);
	$var(MultiListUI, mui, $new(MultiListUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiListUI::installUI($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->installUI(a);
	}
}

void MultiListUI::uninstallUI($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->uninstallUI(a);
	}
}

void MultiListUI::paint($Graphics* a, $JComponent* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->paint(a, b);
	}
}

$Dimension* MultiListUI::getPreferredSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiListUI::getMinimumSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiListUI::getMaximumSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiListUI::getAccessibleChildrenCount($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiListUI::getAccessibleChild($JComponent* a, int32_t b) {
	$useLocalCurrentObjectStackCache();
	$var($Accessible, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiListUI::MultiListUI() {
}

$Class* MultiListUI::load$($String* name, bool initialize) {
	$loadClass(MultiListUI, name, initialize, &_MultiListUI_ClassInfo_, allocate$MultiListUI);
	return class$;
}

$Class* MultiListUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax