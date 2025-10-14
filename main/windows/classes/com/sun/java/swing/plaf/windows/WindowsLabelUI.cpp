#include <com/sun/java/swing/plaf/windows/WindowsLabelUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef WINDOWS_LABEL_UI_KEY

using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLabelUI_FieldInfo_[] = {
	{"WINDOWS_LABEL_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsLabelUI, WINDOWS_LABEL_UI_KEY)},
	{}
};

$MethodInfo _WindowsLabelUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLabelUI::*)()>(&WindowsLabelUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsLabelUI::createUI))},
	{"paintDisabledText", "(Ljavax/swing/JLabel;Ljava/awt/Graphics;Ljava/lang/String;II)V", nullptr, $PROTECTED},
	{"paintEnabledText", "(Ljavax/swing/JLabel;Ljava/awt/Graphics;Ljava/lang/String;II)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _WindowsLabelUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLabelUI",
	"javax.swing.plaf.basic.BasicLabelUI",
	nullptr,
	_WindowsLabelUI_FieldInfo_,
	_WindowsLabelUI_MethodInfo_
};

$Object* allocate$WindowsLabelUI($Class* clazz) {
	return $of($alloc(WindowsLabelUI));
}

$Object* WindowsLabelUI::WINDOWS_LABEL_UI_KEY = nullptr;

void WindowsLabelUI::init$() {
	$BasicLabelUI::init$();
}

$ComponentUI* WindowsLabelUI::createUI($JComponent* c) {
	$init(WindowsLabelUI);
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(WindowsLabelUI, windowsLabelUI, $cast(WindowsLabelUI, $nc(appContext)->get(WindowsLabelUI::WINDOWS_LABEL_UI_KEY)));
	if (windowsLabelUI == nullptr) {
		$assign(windowsLabelUI, $new(WindowsLabelUI));
		appContext->put(WindowsLabelUI::WINDOWS_LABEL_UI_KEY, windowsLabelUI);
	}
	return windowsLabelUI;
}

void WindowsLabelUI::paintEnabledText($JLabel* l, $Graphics* g, $String* s, int32_t textX, int32_t textY) {
	int32_t mnemonicIndex = $nc(l)->getDisplayedMnemonicIndex();
	if ($WindowsLookAndFeel::isMnemonicHidden() == true) {
		mnemonicIndex = -1;
	}
	$nc(g)->setColor($(l->getForeground()));
	$SwingUtilities2::drawStringUnderlineCharAt(l, g, s, mnemonicIndex, textX, textY);
}

void WindowsLabelUI::paintDisabledText($JLabel* l, $Graphics* g, $String* s, int32_t textX, int32_t textY) {
	int32_t mnemonicIndex = $nc(l)->getDisplayedMnemonicIndex();
	if ($WindowsLookAndFeel::isMnemonicHidden() == true) {
		mnemonicIndex = -1;
	}
	bool var$0 = $instanceOf($Color, $($UIManager::getColor("Label.disabledForeground"_s)));
	if (var$0 && $instanceOf($Color, $($UIManager::getColor("Label.disabledShadow"_s)))) {
		$nc(g)->setColor($($UIManager::getColor("Label.disabledShadow"_s)));
		$SwingUtilities2::drawStringUnderlineCharAt(l, g, s, mnemonicIndex, textX + 1, textY + 1);
		g->setColor($($UIManager::getColor("Label.disabledForeground"_s)));
		$SwingUtilities2::drawStringUnderlineCharAt(l, g, s, mnemonicIndex, textX, textY);
	} else {
		$var($Color, background, l->getBackground());
		$nc(g)->setColor($($nc(background)->brighter()));
		$SwingUtilities2::drawStringUnderlineCharAt(l, g, s, mnemonicIndex, textX + 1, textY + 1);
		g->setColor($($nc(background)->darker()));
		$SwingUtilities2::drawStringUnderlineCharAt(l, g, s, mnemonicIndex, textX, textY);
	}
}

void clinit$WindowsLabelUI($Class* class$) {
	$assignStatic(WindowsLabelUI::WINDOWS_LABEL_UI_KEY, $new($Object));
}

WindowsLabelUI::WindowsLabelUI() {
}

$Class* WindowsLabelUI::load$($String* name, bool initialize) {
	$loadClass(WindowsLabelUI, name, initialize, &_WindowsLabelUI_ClassInfo_, clinit$WindowsLabelUI, allocate$WindowsLabelUI);
	return class$;
}

$Class* WindowsLabelUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com