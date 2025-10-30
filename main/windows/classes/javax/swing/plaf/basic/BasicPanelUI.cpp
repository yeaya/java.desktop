#include <javax/swing/plaf/basic/BasicPanelUI.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PanelUI.h>
#include <jcpp.h>

#undef OTHER
#undef TRUE

using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $PanelUI = ::javax::swing::plaf::PanelUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicPanelUI_FieldInfo_[] = {
	{"panelUI", "Ljavax/swing/plaf/PanelUI;", nullptr, $PRIVATE | $STATIC, $staticField(BasicPanelUI, panelUI)},
	{}
};

$MethodInfo _BasicPanelUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicPanelUI::*)()>(&BasicPanelUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicPanelUI::createUI))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/JPanel;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JPanel;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicPanelUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicPanelUI",
	"javax.swing.plaf.PanelUI",
	nullptr,
	_BasicPanelUI_FieldInfo_,
	_BasicPanelUI_MethodInfo_
};

$Object* allocate$BasicPanelUI($Class* clazz) {
	return $of($alloc(BasicPanelUI));
}

$PanelUI* BasicPanelUI::panelUI = nullptr;

void BasicPanelUI::init$() {
	$PanelUI::init$();
}

$ComponentUI* BasicPanelUI::createUI($JComponent* c) {
	$init(BasicPanelUI);
	if (BasicPanelUI::panelUI == nullptr) {
		$assignStatic(BasicPanelUI::panelUI, $new(BasicPanelUI));
	}
	return BasicPanelUI::panelUI;
}

void BasicPanelUI::installUI($JComponent* c) {
	$var($JPanel, p, $cast($JPanel, c));
	$PanelUI::installUI(p);
	installDefaults(p);
}

void BasicPanelUI::uninstallUI($JComponent* c) {
	$var($JPanel, p, $cast($JPanel, c));
	uninstallDefaults(p);
	$PanelUI::uninstallUI(c);
}

void BasicPanelUI::installDefaults($JPanel* p) {
	$LookAndFeel::installColorsAndFont(p, "Panel.background"_s, "Panel.foreground"_s, "Panel.font"_s);
	$LookAndFeel::installBorder(p, "Panel.border"_s);
	$init($Boolean);
	$LookAndFeel::installProperty(p, "opaque"_s, $Boolean::TRUE);
}

void BasicPanelUI::uninstallDefaults($JPanel* p) {
	$LookAndFeel::uninstallBorder(p);
}

int32_t BasicPanelUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$PanelUI::getBaseline(c, width, height);
	$var($Border, border, $nc(c)->getBorder());
	if ($instanceOf($AbstractBorder, border)) {
		return $nc(($cast($AbstractBorder, border)))->getBaseline(c, width, height);
	}
	return -1;
}

$Component$BaselineResizeBehavior* BasicPanelUI::getBaselineResizeBehavior($JComponent* c) {
	$PanelUI::getBaselineResizeBehavior(c);
	$var($Border, border, $nc(c)->getBorder());
	if ($instanceOf($AbstractBorder, border)) {
		return $nc(($cast($AbstractBorder, border)))->getBaselineResizeBehavior(c);
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

BasicPanelUI::BasicPanelUI() {
}

$Class* BasicPanelUI::load$($String* name, bool initialize) {
	$loadClass(BasicPanelUI, name, initialize, &_BasicPanelUI_ClassInfo_, allocate$BasicPanelUI);
	return class$;
}

$Class* BasicPanelUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax