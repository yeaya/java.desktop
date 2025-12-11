#include <com/apple/laf/AquaLabelUI.h>

#include <com/apple/laf/AquaMnemonicHandler.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef DISABLED_COLOR_KEY

using $AquaMnemonicHandler = ::com::apple::laf::AquaMnemonicHandler;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaLabelUI_FieldInfo_[] = {
	{"aquaLabelUI", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaLabelUI;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaLabelUI, aquaLabelUI)},
	{"DISABLED_COLOR_KEY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaLabelUI, DISABLED_COLOR_KEY)},
	{}
};

$MethodInfo _AquaLabelUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaLabelUI::*)()>(&AquaLabelUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaLabelUI::createUI))},
	{"getDisabledLabelColor", "(Ljavax/swing/JLabel;)Ljava/awt/Color;", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED},
	{"paintDisabledText", "(Ljavax/swing/JLabel;Ljava/awt/Graphics;Ljava/lang/String;II)V", nullptr, $PROTECTED},
	{"paintEnabledText", "(Ljavax/swing/JLabel;Ljava/awt/Graphics;Ljava/lang/String;II)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JLabel;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AquaLabelUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaLabelUI",
	"javax.swing.plaf.basic.BasicLabelUI",
	nullptr,
	_AquaLabelUI_FieldInfo_,
	_AquaLabelUI_MethodInfo_
};

$Object* allocate$AquaLabelUI($Class* clazz) {
	return $of($alloc(AquaLabelUI));
}

$AquaUtils$RecyclableSingleton* AquaLabelUI::aquaLabelUI = nullptr;
$String* AquaLabelUI::DISABLED_COLOR_KEY = nullptr;

void AquaLabelUI::init$() {
	$BasicLabelUI::init$();
}

$ComponentUI* AquaLabelUI::createUI($JComponent* c) {
	$init(AquaLabelUI);
	return $cast($ComponentUI, $nc(AquaLabelUI::aquaLabelUI)->get());
}

void AquaLabelUI::installListeners($JLabel* c) {
	$BasicLabelUI::installListeners(c);
	$AquaUtilControlSize::addSizePropertyListener(c);
}

void AquaLabelUI::uninstallListeners($JLabel* c) {
	$AquaUtilControlSize::removeSizePropertyListener(c);
	$BasicLabelUI::uninstallListeners(c);
}

void AquaLabelUI::paintEnabledText($JLabel* l, $Graphics* g, $String* s, int32_t textX, int32_t textY) {
	int32_t mnemIndex = $nc(l)->getDisplayedMnemonicIndex();
	if ($AquaMnemonicHandler::isMnemonicHidden()) {
		mnemIndex = -1;
	}
	$nc(g)->setColor($(l->getForeground()));
	$SwingUtilities2::drawStringUnderlineCharAt(l, g, s, mnemIndex, textX, textY);
}

void AquaLabelUI::paintDisabledText($JLabel* l, $Graphics* g, $String* s, int32_t textX, int32_t textY) {
	$useLocalCurrentObjectStackCache();
	int32_t accChar = $nc(l)->getDisplayedMnemonicIndex();
	if ($AquaMnemonicHandler::isMnemonicHidden()) {
		accChar = -1;
	}
	$var($Color, background, l->getBackground());
	if ($instanceOf($UIResource, background)) {
		$nc(g)->setColor($(getDisabledLabelColor(l)));
		$SwingUtilities2::drawStringUnderlineCharAt(l, g, s, accChar, textX, textY);
	} else {
		$BasicLabelUI::paintDisabledText(l, g, s, textX, textY);
	}
}

$Color* AquaLabelUI::getDisabledLabelColor($JLabel* label) {
	$useLocalCurrentObjectStackCache();
	$var($Color, fg, $nc(label)->getForeground());
	$var($Object, colorProperty, label->getClientProperty(AquaLabelUI::DISABLED_COLOR_KEY));
	if ($instanceOf($Color, colorProperty)) {
		$var($Color, disabledColor, $cast($Color, colorProperty));
		int32_t var$0 = ($nc(fg)->getRGB() << 8);
		if (var$0 == ($nc(disabledColor)->getRGB() << 8)) {
			return disabledColor;
		}
	}
	int32_t var$1 = $nc(fg)->getRed();
	int32_t var$2 = fg->getGreen();
	int32_t var$3 = fg->getBlue();
	$var($Color, newDisabledColor, $new($Color, var$1, var$2, var$3, fg->getAlpha() / 2));
	label->putClientProperty(AquaLabelUI::DISABLED_COLOR_KEY, newDisabledColor);
	return newDisabledColor;
}

void clinit$AquaLabelUI($Class* class$) {
	$assignStatic(AquaLabelUI::DISABLED_COLOR_KEY, "Label.disabledForegroundColor"_s);
	$assignStatic(AquaLabelUI::aquaLabelUI, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaLabelUI::class$));
}

AquaLabelUI::AquaLabelUI() {
}

$Class* AquaLabelUI::load$($String* name, bool initialize) {
	$loadClass(AquaLabelUI, name, initialize, &_AquaLabelUI_ClassInfo_, clinit$AquaLabelUI, allocate$AquaLabelUI);
	return class$;
}

$Class* AquaLabelUI::class$ = nullptr;

		} // laf
	} // apple
} // com