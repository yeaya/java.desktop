#include <javax/swing/plaf/multi/MultiViewportUI.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ViewportUI.h>
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
using $ViewportUI = ::javax::swing::plaf::ViewportUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$FieldInfo _MultiViewportUI_FieldInfo_[] = {
	{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiViewportUI, uis)},
	{}
};

$MethodInfo _MultiViewportUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiViewportUI::*)()>(&MultiViewportUI::init$))},
	{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MultiViewportUI::createUI))},
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

$ClassInfo _MultiViewportUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.multi.MultiViewportUI",
	"javax.swing.plaf.ViewportUI",
	nullptr,
	_MultiViewportUI_FieldInfo_,
	_MultiViewportUI_MethodInfo_
};

$Object* allocate$MultiViewportUI($Class* clazz) {
	return $of($alloc(MultiViewportUI));
}

void MultiViewportUI::init$() {
	$ViewportUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiViewportUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

bool MultiViewportUI::contains($JComponent* a, int32_t b, int32_t c) {
	$useLocalCurrentObjectStackCache();
	bool returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->contains(a, b, c);
	}
	return returnValue;
}

void MultiViewportUI::update($Graphics* a, $JComponent* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->update(a, b);
	}
}

$ComponentUI* MultiViewportUI::createUI($JComponent* a) {
	$init(MultiViewportUI);
	$var(MultiViewportUI, mui, $new(MultiViewportUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiViewportUI::installUI($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->installUI(a);
	}
}

void MultiViewportUI::uninstallUI($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->uninstallUI(a);
	}
}

void MultiViewportUI::paint($Graphics* a, $JComponent* b) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->paint(a, b);
	}
}

$Dimension* MultiViewportUI::getPreferredSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiViewportUI::getMinimumSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiViewportUI::getMaximumSize($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiViewportUI::getAccessibleChildrenCount($JComponent* a) {
	$useLocalCurrentObjectStackCache();
	int32_t returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiViewportUI::getAccessibleChild($JComponent* a, int32_t b) {
	$useLocalCurrentObjectStackCache();
	$var($Accessible, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiViewportUI::MultiViewportUI() {
}

$Class* MultiViewportUI::load$($String* name, bool initialize) {
	$loadClass(MultiViewportUI, name, initialize, &_MultiViewportUI_ClassInfo_, allocate$MultiViewportUI);
	return class$;
}

$Class* MultiViewportUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax