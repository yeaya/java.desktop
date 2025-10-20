#include <javax/swing/plaf/multi/MultiTabbedPaneUI.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
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
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <javax/swing/plaf/multi/MultiLookAndFeel.h>
#include <jcpp.h>

using $ComponentUIArray = $Array<::javax::swing::plaf::ComponentUI>;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$FieldInfo _MultiTabbedPaneUI_FieldInfo_[] = {
	{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiTabbedPaneUI, uis)},
	{}
};

$MethodInfo _MultiTabbedPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiTabbedPaneUI::*)()>(&MultiTabbedPaneUI::init$))},
	{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MultiTabbedPaneUI::createUI))},
	{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getTabBounds", "(Ljavax/swing/JTabbedPane;I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getTabRunCount", "(Ljavax/swing/JTabbedPane;)I", nullptr, $PUBLIC},
	{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"tabForCoordinate", "(Ljavax/swing/JTabbedPane;II)I", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultiTabbedPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.multi.MultiTabbedPaneUI",
	"javax.swing.plaf.TabbedPaneUI",
	nullptr,
	_MultiTabbedPaneUI_FieldInfo_,
	_MultiTabbedPaneUI_MethodInfo_
};

$Object* allocate$MultiTabbedPaneUI($Class* clazz) {
	return $of($alloc(MultiTabbedPaneUI));
}

void MultiTabbedPaneUI::init$() {
	$TabbedPaneUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiTabbedPaneUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

int32_t MultiTabbedPaneUI::tabForCoordinate($JTabbedPane* a, int32_t b, int32_t c) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc((($cast($TabbedPaneUI, $($nc(this->uis)->elementAt(0))))))->tabForCoordinate(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TabbedPaneUI, $($nc(this->uis)->elementAt(i))))))->tabForCoordinate(a, b, c);
	}
	return returnValue;
}

$Rectangle* MultiTabbedPaneUI::getTabBounds($JTabbedPane* a, int32_t b) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, returnValue, $nc((($cast($TabbedPaneUI, $($nc(this->uis)->elementAt(0))))))->getTabBounds(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TabbedPaneUI, $($nc(this->uis)->elementAt(i))))))->getTabBounds(a, b);
	}
	return returnValue;
}

int32_t MultiTabbedPaneUI::getTabRunCount($JTabbedPane* a) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc((($cast($TabbedPaneUI, $($nc(this->uis)->elementAt(0))))))->getTabRunCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TabbedPaneUI, $($nc(this->uis)->elementAt(i))))))->getTabRunCount(a);
	}
	return returnValue;
}

bool MultiTabbedPaneUI::contains($JComponent* a, int32_t b, int32_t c) {
	$useLocalCurrentObjectStackCache();
	bool returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->contains(a, b, c);
	}
	return returnValue;
}

void MultiTabbedPaneUI::update($Graphics* a, $JComponent* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->update(a, b);
	}
}

$ComponentUI* MultiTabbedPaneUI::createUI($JComponent* a) {
	$init(MultiTabbedPaneUI);
	$var(MultiTabbedPaneUI, mui, $new(MultiTabbedPaneUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiTabbedPaneUI::installUI($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->installUI(a);
	}
}

void MultiTabbedPaneUI::uninstallUI($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->uninstallUI(a);
	}
}

void MultiTabbedPaneUI::paint($Graphics* a, $JComponent* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->paint(a, b);
	}
}

$Dimension* MultiTabbedPaneUI::getPreferredSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiTabbedPaneUI::getMinimumSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiTabbedPaneUI::getMaximumSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiTabbedPaneUI::getAccessibleChildrenCount($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiTabbedPaneUI::getAccessibleChild($JComponent* a, int32_t b) {
	$useLocalCurrentObjectStackCache();
	$var($Accessible, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiTabbedPaneUI::MultiTabbedPaneUI() {
}

$Class* MultiTabbedPaneUI::load$($String* name, bool initialize) {
	$loadClass(MultiTabbedPaneUI, name, initialize, &_MultiTabbedPaneUI_ClassInfo_, allocate$MultiTabbedPaneUI);
	return class$;
}

$Class* MultiTabbedPaneUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax