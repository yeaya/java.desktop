#include <javax/swing/plaf/multi/MultiTreeUI.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TreeUI.h>
#include <javax/swing/plaf/multi/MultiLookAndFeel.h>
#include <javax/swing/tree/TreePath.h>
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
using $JTree = ::javax::swing::JTree;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$FieldInfo _MultiTreeUI_FieldInfo_[] = {
	{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiTreeUI, uis)},
	{}
};

$MethodInfo _MultiTreeUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiTreeUI::*)()>(&MultiTreeUI::init$))},
	{"cancelEditing", "(Ljavax/swing/JTree;)V", nullptr, $PUBLIC},
	{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MultiTreeUI::createUI))},
	{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"getClosestPathForLocation", "(Ljavax/swing/JTree;II)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getEditingPath", "(Ljavax/swing/JTree;)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPathBounds", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getPathForRow", "(Ljavax/swing/JTree;I)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getRowCount", "(Ljavax/swing/JTree;)I", nullptr, $PUBLIC},
	{"getRowForPath", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)I", nullptr, $PUBLIC},
	{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isEditing", "(Ljavax/swing/JTree;)Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"startEditingAtPath", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"stopEditing", "(Ljavax/swing/JTree;)Z", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultiTreeUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.multi.MultiTreeUI",
	"javax.swing.plaf.TreeUI",
	nullptr,
	_MultiTreeUI_FieldInfo_,
	_MultiTreeUI_MethodInfo_
};

$Object* allocate$MultiTreeUI($Class* clazz) {
	return $of($alloc(MultiTreeUI));
}

void MultiTreeUI::init$() {
	$TreeUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiTreeUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

$Rectangle* MultiTreeUI::getPathBounds($JTree* a, $TreePath* b) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, returnValue, $nc((($cast($TreeUI, $($nc(this->uis)->elementAt(0))))))->getPathBounds(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TreeUI, $($nc(this->uis)->elementAt(i))))))->getPathBounds(a, b);
	}
	return returnValue;
}

$TreePath* MultiTreeUI::getPathForRow($JTree* a, int32_t b) {
	$useLocalCurrentObjectStackCache();
	$var($TreePath, returnValue, $nc((($cast($TreeUI, $($nc(this->uis)->elementAt(0))))))->getPathForRow(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TreeUI, $($nc(this->uis)->elementAt(i))))))->getPathForRow(a, b);
	}
	return returnValue;
}

int32_t MultiTreeUI::getRowForPath($JTree* a, $TreePath* b) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc((($cast($TreeUI, $($nc(this->uis)->elementAt(0))))))->getRowForPath(a, b);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TreeUI, $($nc(this->uis)->elementAt(i))))))->getRowForPath(a, b);
	}
	return returnValue;
}

int32_t MultiTreeUI::getRowCount($JTree* a) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc((($cast($TreeUI, $($nc(this->uis)->elementAt(0))))))->getRowCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TreeUI, $($nc(this->uis)->elementAt(i))))))->getRowCount(a);
	}
	return returnValue;
}

$TreePath* MultiTreeUI::getClosestPathForLocation($JTree* a, int32_t b, int32_t c) {
	$useLocalCurrentObjectStackCache();
	$var($TreePath, returnValue, $nc((($cast($TreeUI, $($nc(this->uis)->elementAt(0))))))->getClosestPathForLocation(a, b, c));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TreeUI, $($nc(this->uis)->elementAt(i))))))->getClosestPathForLocation(a, b, c);
	}
	return returnValue;
}

bool MultiTreeUI::isEditing($JTree* a) {
	$useLocalCurrentObjectStackCache();
	bool returnValue = $nc((($cast($TreeUI, $($nc(this->uis)->elementAt(0))))))->isEditing(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TreeUI, $($nc(this->uis)->elementAt(i))))))->isEditing(a);
	}
	return returnValue;
}

bool MultiTreeUI::stopEditing($JTree* a) {
	$useLocalCurrentObjectStackCache();
	bool returnValue = $nc((($cast($TreeUI, $($nc(this->uis)->elementAt(0))))))->stopEditing(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TreeUI, $($nc(this->uis)->elementAt(i))))))->stopEditing(a);
	}
	return returnValue;
}

void MultiTreeUI::cancelEditing($JTree* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TreeUI, $($nc(this->uis)->elementAt(i))))))->cancelEditing(a);
	}
}

void MultiTreeUI::startEditingAtPath($JTree* a, $TreePath* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TreeUI, $($nc(this->uis)->elementAt(i))))))->startEditingAtPath(a, b);
	}
}

$TreePath* MultiTreeUI::getEditingPath($JTree* a) {
	$useLocalCurrentObjectStackCache();
	$var($TreePath, returnValue, $nc((($cast($TreeUI, $($nc(this->uis)->elementAt(0))))))->getEditingPath(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TreeUI, $($nc(this->uis)->elementAt(i))))))->getEditingPath(a);
	}
	return returnValue;
}

bool MultiTreeUI::contains($JComponent* a, int32_t b, int32_t c) {
	$useLocalCurrentObjectStackCache();
	bool returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->contains(a, b, c);
	}
	return returnValue;
}

void MultiTreeUI::update($Graphics* a, $JComponent* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->update(a, b);
	}
}

$ComponentUI* MultiTreeUI::createUI($JComponent* a) {
	$init(MultiTreeUI);
	$var(MultiTreeUI, mui, $new(MultiTreeUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiTreeUI::installUI($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->installUI(a);
	}
}

void MultiTreeUI::uninstallUI($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->uninstallUI(a);
	}
}

void MultiTreeUI::paint($Graphics* a, $JComponent* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->paint(a, b);
	}
}

$Dimension* MultiTreeUI::getPreferredSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiTreeUI::getMinimumSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiTreeUI::getMaximumSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiTreeUI::getAccessibleChildrenCount($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiTreeUI::getAccessibleChild($JComponent* a, int32_t b) {
	$useLocalCurrentObjectStackCache();
	$var($Accessible, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiTreeUI::MultiTreeUI() {
}

$Class* MultiTreeUI::load$($String* name, bool initialize) {
	$loadClass(MultiTreeUI, name, initialize, &_MultiTreeUI_ClassInfo_, allocate$MultiTreeUI);
	return class$;
}

$Class* MultiTreeUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax