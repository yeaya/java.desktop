#include <javax/swing/plaf/metal/MetalLabelUI.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef METAL_LABEL_UI_KEY

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LabelUI = ::javax::swing::plaf::LabelUI;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;
using $AppContext = ::sun::awt::AppContext;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalLabelUI_FieldInfo_[] = {
	{"metalLabelUI", "Ljavax/swing/plaf/metal/MetalLabelUI;", nullptr, $PROTECTED | $STATIC, $staticField(MetalLabelUI, metalLabelUI)},
	{"METAL_LABEL_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalLabelUI, METAL_LABEL_UI_KEY)},
	{}
};

$MethodInfo _MetalLabelUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalLabelUI::*)()>(&MetalLabelUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalLabelUI::createUI))},
	{"paintDisabledText", "(Ljavax/swing/JLabel;Ljava/awt/Graphics;Ljava/lang/String;II)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MetalLabelUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalLabelUI",
	"javax.swing.plaf.basic.BasicLabelUI",
	nullptr,
	_MetalLabelUI_FieldInfo_,
	_MetalLabelUI_MethodInfo_
};

$Object* allocate$MetalLabelUI($Class* clazz) {
	return $of($alloc(MetalLabelUI));
}

MetalLabelUI* MetalLabelUI::metalLabelUI = nullptr;
$Object* MetalLabelUI::METAL_LABEL_UI_KEY = nullptr;

void MetalLabelUI::init$() {
	$BasicLabelUI::init$();
}

$ComponentUI* MetalLabelUI::createUI($JComponent* c) {
	$init(MetalLabelUI);
	$useLocalCurrentObjectStackCache();
	if ($System::getSecurityManager() != nullptr) {
		$var($AppContext, appContext, $AppContext::getAppContext());
		$var(MetalLabelUI, safeMetalLabelUI, $cast(MetalLabelUI, $nc(appContext)->get(MetalLabelUI::METAL_LABEL_UI_KEY)));
		if (safeMetalLabelUI == nullptr) {
			$assign(safeMetalLabelUI, $new(MetalLabelUI));
			appContext->put(MetalLabelUI::METAL_LABEL_UI_KEY, safeMetalLabelUI);
		}
		return safeMetalLabelUI;
	}
	return MetalLabelUI::metalLabelUI;
}

void MetalLabelUI::paintDisabledText($JLabel* l, $Graphics* g, $String* s, int32_t textX, int32_t textY) {
	int32_t mnemIndex = $nc(l)->getDisplayedMnemonicIndex();
	$nc(g)->setColor($($UIManager::getColor("Label.disabledForeground"_s)));
	$SwingUtilities2::drawStringUnderlineCharAt(l, g, s, mnemIndex, textX, textY);
}

void clinit$MetalLabelUI($Class* class$) {
	$assignStatic(MetalLabelUI::metalLabelUI, $new(MetalLabelUI));
	$assignStatic(MetalLabelUI::METAL_LABEL_UI_KEY, $new($Object));
}

MetalLabelUI::MetalLabelUI() {
}

$Class* MetalLabelUI::load$($String* name, bool initialize) {
	$loadClass(MetalLabelUI, name, initialize, &_MetalLabelUI_ClassInfo_, clinit$MetalLabelUI, allocate$MetalLabelUI);
	return class$;
}

$Class* MetalLabelUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax