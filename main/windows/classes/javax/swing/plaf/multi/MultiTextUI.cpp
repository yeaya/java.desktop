#include <javax/swing/plaf/multi/MultiTextUI.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/multi/MultiLookAndFeel.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $ComponentUIArray = $Array<::javax::swing::plaf::ComponentUI>;
using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $MultiLookAndFeel = ::javax::swing::plaf::multi::MultiLookAndFeel;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$NamedAttribute MultiTextUI_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _MultiTextUI_MethodAnnotations_modelToView16[] = {
	{"Ljava/lang/Deprecated;", MultiTextUI_Attribute_var$0},
	{}
};

$NamedAttribute MultiTextUI_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _MultiTextUI_MethodAnnotations_modelToView17[] = {
	{"Ljava/lang/Deprecated;", MultiTextUI_Attribute_var$1},
	{}
};

$NamedAttribute MultiTextUI_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _MultiTextUI_MethodAnnotations_viewToModel22[] = {
	{"Ljava/lang/Deprecated;", MultiTextUI_Attribute_var$2},
	{}
};

$NamedAttribute MultiTextUI_Attribute_var$3[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _MultiTextUI_MethodAnnotations_viewToModel23[] = {
	{"Ljava/lang/Deprecated;", MultiTextUI_Attribute_var$3},
	{}
};

$FieldInfo _MultiTextUI_FieldInfo_[] = {
	{"uis", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/ComponentUI;>;", $PROTECTED, $field(MultiTextUI, uis)},
	{}
};

$MethodInfo _MultiTextUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiTextUI::*)()>(&MultiTextUI::init$))},
	{"contains", "(Ljavax/swing/JComponent;II)Z", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MultiTextUI::createUI))},
	{"damageRange", "(Ljavax/swing/text/JTextComponent;II)V", nullptr, $PUBLIC},
	{"damageRange", "(Ljavax/swing/text/JTextComponent;IILjavax/swing/text/Position$Bias;Ljavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC},
	{"getAccessibleChild", "(Ljavax/swing/JComponent;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"getEditorKit", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/EditorKit;", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getNextVisualPositionFrom", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getRootView", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"getToolTipText", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUIs", "()[Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"modelToView", "(Ljavax/swing/text/JTextComponent;I)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _MultiTextUI_MethodAnnotations_modelToView16},
	{"modelToView", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _MultiTextUI_MethodAnnotations_modelToView17},
	{"modelToView2D", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"viewToModel", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;)I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _MultiTextUI_MethodAnnotations_viewToModel22},
	{"viewToModel", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _MultiTextUI_MethodAnnotations_viewToModel23},
	{"viewToModel2D", "(Ljavax/swing/text/JTextComponent;Ljava/awt/geom/Point2D;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MultiTextUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.multi.MultiTextUI",
	"javax.swing.plaf.TextUI",
	nullptr,
	_MultiTextUI_FieldInfo_,
	_MultiTextUI_MethodInfo_
};

$Object* allocate$MultiTextUI($Class* clazz) {
	return $of($alloc(MultiTextUI));
}

void MultiTextUI::init$() {
	$TextUI::init$();
	$set(this, uis, $new($Vector));
}

$ComponentUIArray* MultiTextUI::getUIs() {
	return $MultiLookAndFeel::uisToArray(this->uis);
}

$String* MultiTextUI::getToolTipText($JTextComponent* a, $Point* b) {
	$var($String, returnValue, $nc((($cast($TextUI, $($nc(this->uis)->elementAt(0))))))->getToolTipText(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TextUI, $($nc(this->uis)->elementAt(i))))))->getToolTipText(a, b);
	}
	return returnValue;
}

$Rectangle* MultiTextUI::modelToView($JTextComponent* a, int32_t b) {
	$var($Rectangle, returnValue, $nc((($cast($TextUI, $($nc(this->uis)->elementAt(0))))))->modelToView(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TextUI, $($nc(this->uis)->elementAt(i))))))->modelToView(a, b);
	}
	return returnValue;
}

$Rectangle* MultiTextUI::modelToView($JTextComponent* a, int32_t b, $Position$Bias* c) {
	$var($Rectangle, returnValue, $nc((($cast($TextUI, $($nc(this->uis)->elementAt(0))))))->modelToView(a, b, c));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TextUI, $($nc(this->uis)->elementAt(i))))))->modelToView(a, b, c);
	}
	return returnValue;
}

$Rectangle2D* MultiTextUI::modelToView2D($JTextComponent* a, int32_t b, $Position$Bias* c) {
	$var($Rectangle2D, returnValue, $nc((($cast($TextUI, $($nc(this->uis)->elementAt(0))))))->modelToView2D(a, b, c));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TextUI, $($nc(this->uis)->elementAt(i))))))->modelToView2D(a, b, c);
	}
	return returnValue;
}

int32_t MultiTextUI::viewToModel($JTextComponent* a, $Point* b) {
	int32_t returnValue = $nc((($cast($TextUI, $($nc(this->uis)->elementAt(0))))))->viewToModel(a, b);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TextUI, $($nc(this->uis)->elementAt(i))))))->viewToModel(a, b);
	}
	return returnValue;
}

int32_t MultiTextUI::viewToModel($JTextComponent* a, $Point* b, $Position$BiasArray* c) {
	int32_t returnValue = $nc((($cast($TextUI, $($nc(this->uis)->elementAt(0))))))->viewToModel(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TextUI, $($nc(this->uis)->elementAt(i))))))->viewToModel(a, b, c);
	}
	return returnValue;
}

int32_t MultiTextUI::viewToModel2D($JTextComponent* a, $Point2D* b, $Position$BiasArray* c) {
	int32_t returnValue = $nc((($cast($TextUI, $($nc(this->uis)->elementAt(0))))))->viewToModel2D(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TextUI, $($nc(this->uis)->elementAt(i))))))->viewToModel2D(a, b, c);
	}
	return returnValue;
}

int32_t MultiTextUI::getNextVisualPositionFrom($JTextComponent* a, int32_t b, $Position$Bias* c, int32_t d, $Position$BiasArray* e) {
	int32_t returnValue = $nc((($cast($TextUI, $($nc(this->uis)->elementAt(0))))))->getNextVisualPositionFrom(a, b, c, d, e);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TextUI, $($nc(this->uis)->elementAt(i))))))->getNextVisualPositionFrom(a, b, c, d, e);
	}
	return returnValue;
}

void MultiTextUI::damageRange($JTextComponent* a, int32_t b, int32_t c) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TextUI, $($nc(this->uis)->elementAt(i))))))->damageRange(a, b, c);
	}
}

void MultiTextUI::damageRange($JTextComponent* a, int32_t b, int32_t c, $Position$Bias* d, $Position$Bias* e) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TextUI, $($nc(this->uis)->elementAt(i))))))->damageRange(a, b, c, d, e);
	}
}

$EditorKit* MultiTextUI::getEditorKit($JTextComponent* a) {
	$var($EditorKit, returnValue, $nc((($cast($TextUI, $($nc(this->uis)->elementAt(0))))))->getEditorKit(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TextUI, $($nc(this->uis)->elementAt(i))))))->getEditorKit(a);
	}
	return returnValue;
}

$View* MultiTextUI::getRootView($JTextComponent* a) {
	$var($View, returnValue, $nc((($cast($TextUI, $($nc(this->uis)->elementAt(0))))))->getRootView(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc((($cast($TextUI, $($nc(this->uis)->elementAt(i))))))->getRootView(a);
	}
	return returnValue;
}

bool MultiTextUI::contains($JComponent* a, int32_t b, int32_t c) {
	bool returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->contains(a, b, c);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->contains(a, b, c);
	}
	return returnValue;
}

void MultiTextUI::update($Graphics* a, $JComponent* b) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->update(a, b);
	}
}

$ComponentUI* MultiTextUI::createUI($JComponent* a) {
	$init(MultiTextUI);
	$var(MultiTextUI, mui, $new(MultiTextUI));
	return $MultiLookAndFeel::createUIs(mui, mui->uis, a);
}

void MultiTextUI::installUI($JComponent* a) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->installUI(a);
	}
}

void MultiTextUI::uninstallUI($JComponent* a) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->uninstallUI(a);
	}
}

void MultiTextUI::paint($Graphics* a, $JComponent* b) {
	for (int32_t i = 0; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->paint(a, b);
	}
}

$Dimension* MultiTextUI::getPreferredSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getPreferredSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getPreferredSize(a);
	}
	return returnValue;
}

$Dimension* MultiTextUI::getMinimumSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMinimumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMinimumSize(a);
	}
	return returnValue;
}

$Dimension* MultiTextUI::getMaximumSize($JComponent* a) {
	$var($Dimension, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getMaximumSize(a));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getMaximumSize(a);
	}
	return returnValue;
}

int32_t MultiTextUI::getAccessibleChildrenCount($JComponent* a) {
	int32_t returnValue = $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChildrenCount(a);
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChildrenCount(a);
	}
	return returnValue;
}

$Accessible* MultiTextUI::getAccessibleChild($JComponent* a, int32_t b) {
	$var($Accessible, returnValue, $nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(0)))))->getAccessibleChild(a, b));
	for (int32_t i = 1; i < $nc(this->uis)->size(); ++i) {
		$nc(($cast($ComponentUI, $($nc(this->uis)->elementAt(i)))))->getAccessibleChild(a, b);
	}
	return returnValue;
}

MultiTextUI::MultiTextUI() {
}

$Class* MultiTextUI::load$($String* name, bool initialize) {
	$loadClass(MultiTextUI, name, initialize, &_MultiTextUI_ClassInfo_, allocate$MultiTextUI);
	return class$;
}

$Class* MultiTextUI::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax