#include <javax/swing/plaf/multi/MultiSplitPaneUI.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
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
using $JSplitPane = ::javax::swing::JSplitPane;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$FieldInfo _MultiSplitPaneUI_FieldInfo_[] = {
	{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiSplitPaneUI, uis)},
	{}
};

$MethodInfo _MultiSplitPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiSplitPaneUI::*)()>(&MultiSplitPaneUI::init$))},
	{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MultiSplitPaneUI::createUI))},
	{"finishedPaintingChildren", "(Ljavax/swing/JSplitPane;Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"getDividerLocation", "(Ljavax/swing/JSplitPane;)I", nullptr, $PUBLIC},
	{"getMaximumDividerLocation", "(Ljavax/swing/JSplitPane;)I", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumDividerLocation", "(Ljavax/swing/JSplitPane;)I", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"resetToPreferredSizes", "(Ljavax/swing/JSplitPane;)V", nullptr, $PUBLIC},
	{"setDividerLocation", "(Ljavax/swing/JSplitPane;I)V", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultiSplitPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.multi.MultiSplitPaneUI",
	"javax.swing.plaf.SplitPaneUI",
	nullptr,
	_MultiSplitPaneUI_FieldInfo_,
	_MultiSplitPaneUI_MethodInfo_
};

$Object* allocate$MultiSplitPaneUI($Class* clazz) {
	return $of($alloc(MultiSplitPaneUI));
}

void MultiSplitPaneUI::init$() {
	$SplitPaneUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiSplitPaneUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

void MultiSplitPaneUI::resetToPreferredSizes($JSplitPane* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($SplitPaneUI, $($nc(this->uis)->elementAt(i))))))->resetToPreferredSizes(a);
	}
}

void MultiSplitPaneUI::setDividerLocation($JSplitPane* a, int32_t b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($SplitPaneUI, $($nc(this->uis)->elementAt(i))))))->setDividerLocation(a, b);
	}
}

int32_t MultiSplitPaneUI::getDividerLocation($JSplitPane* a) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc((($cast($SplitPaneUI, $($nc(this->uis)->elementAt(0))))))->getDividerLocation(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($SplitPaneUI, $($nc(this->uis)->elementAt(i))))))->getDividerLocation(a);
	}
	return returnValue;
}

int32_t MultiSplitPaneUI::getMinimumDividerLocation($JSplitPane* a) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc((($cast($SplitPaneUI, $($nc(this->uis)->elementAt(0))))))->getMinimumDividerLocation(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($SplitPaneUI, $($nc(this->uis)->elementAt(i))))))->getMinimumDividerLocation(a);
	}
	return returnValue;
}

int32_t MultiSplitPaneUI::getMaximumDividerLocation($JSplitPane* a) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc((($cast($SplitPaneUI, $($nc(this->uis)->elementAt(0))))))->getMaximumDividerLocation(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($SplitPaneUI, $($nc(this->uis)->elementAt(i))))))->getMaximumDividerLocation(a);
	}
	return returnValue;
}

void MultiSplitPaneUI::finishedPaintingChildren($JSplitPane* a, $Graphics* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($SplitPaneUI, $($nc(this->uis)->elementAt(i))))))->finishedPaintingChildren(a, b);
	}
}

bool MultiSplitPaneUI::contains($JComponent* a, int32_t b, int32_t c) {
	$useLocalCurrentObjectStackCache();
	bool returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->contains(a, b, c);
	}
	return returnValue;
}

void MultiSplitPaneUI::update($Graphics* a, $JComponent* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->update(a, b);
	}
}

$ComponentUI* MultiSplitPaneUI::createUI($JComponent* a) {
	$init(MultiSplitPaneUI);
	$var(MultiSplitPaneUI, mui, $new(MultiSplitPaneUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiSplitPaneUI::installUI($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->installUI(a);
	}
}

void MultiSplitPaneUI::uninstallUI($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->uninstallUI(a);
	}
}

void MultiSplitPaneUI::paint($Graphics* a, $JComponent* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->paint(a, b);
	}
}

$Dimension* MultiSplitPaneUI::getPreferredSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiSplitPaneUI::getMinimumSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiSplitPaneUI::getMaximumSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiSplitPaneUI::getAccessibleChildrenCount($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiSplitPaneUI::getAccessibleChild($JComponent* a, int32_t b) {
	$useLocalCurrentObjectStackCache();
	$var($Accessible, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiSplitPaneUI::MultiSplitPaneUI() {
}

$Class* MultiSplitPaneUI::load$($String* name, bool initialize) {
	$loadClass(MultiSplitPaneUI, name, initialize, &_MultiSplitPaneUI_ClassInfo_, allocate$MultiSplitPaneUI);
	return class$;
}

$Class* MultiSplitPaneUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax