#include <com/sun/java/swing/plaf/windows/WindowsSpinnerUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$GlyphButton.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SpinnerUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicSpinnerUI.h>
#include <jcpp.h>

#undef DISABLED
#undef EP_EDIT
#undef NORMAL
#undef SPNP_DOWN
#undef SPNP_UP

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$GlyphButton = ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JSpinner = ::javax::swing::JSpinner;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SpinnerUI = ::javax::swing::plaf::SpinnerUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicSpinnerUI = ::javax::swing::plaf::basic::BasicSpinnerUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsSpinnerUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsSpinnerUI::*)()>(&WindowsSpinnerUI::init$))},
	{"createNextButton", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"createPreviousButton", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsSpinnerUI::createUI))},
	{"getUIResource", "([Ljava/lang/Object;)Ljavax/swing/plaf/UIResource;", nullptr, $PRIVATE, $method(static_cast<$UIResource*(WindowsSpinnerUI::*)($ObjectArray*)>(&WindowsSpinnerUI::getUIResource))},
	{"getXPState", "(Ljavax/swing/JComponent;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PRIVATE, $method(static_cast<$TMSchema$State*(WindowsSpinnerUI::*)($JComponent*)>(&WindowsSpinnerUI::getXPState))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintXPBackground", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsSpinnerUI::*)($Graphics*,$JComponent*)>(&WindowsSpinnerUI::paintXPBackground))},
	{}
};

$ClassInfo _WindowsSpinnerUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsSpinnerUI",
	"javax.swing.plaf.basic.BasicSpinnerUI",
	nullptr,
	nullptr,
	_WindowsSpinnerUI_MethodInfo_
};

$Object* allocate$WindowsSpinnerUI($Class* clazz) {
	return $of($alloc(WindowsSpinnerUI));
}

void WindowsSpinnerUI::init$() {
	$BasicSpinnerUI::init$();
}

$ComponentUI* WindowsSpinnerUI::createUI($JComponent* c) {
	$init(WindowsSpinnerUI);
	return $new(WindowsSpinnerUI);
}

void WindowsSpinnerUI::paint($Graphics* g, $JComponent* c) {
	if ($XPStyle::getXP() != nullptr) {
		paintXPBackground(g, c);
	}
	$BasicSpinnerUI::paint(g, c);
}

$TMSchema$State* WindowsSpinnerUI::getXPState($JComponent* c) {
	$init($TMSchema$State);
	$TMSchema$State* state = $TMSchema$State::NORMAL;
	if (!$nc(c)->isEnabled()) {
		state = $TMSchema$State::DISABLED;
	}
	return state;
}

void WindowsSpinnerUI::paintXPBackground($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp == nullptr) {
		return;
	}
	$init($TMSchema$Part);
	$var($XPStyle$Skin, skin, $nc(xp)->getSkin(c, $TMSchema$Part::EP_EDIT));
	$TMSchema$State* state = getXPState(c);
	$var($Graphics, var$0, g);
	int32_t var$1 = $nc(c)->getWidth();
	$nc(skin)->paintSkin(var$0, 0, 0, var$1, c->getHeight(), state);
}

$Component* WindowsSpinnerUI::createPreviousButton() {
	$useLocalCurrentObjectStackCache();
	if ($XPStyle::getXP() != nullptr) {
		$init($TMSchema$Part);
		$var($JButton, xpButton, $new($XPStyle$GlyphButton, this->spinner, $TMSchema$Part::SPNP_DOWN));
		$var($Dimension, size, $UIManager::getDimension("Spinner.arrowButtonSize"_s));
		xpButton->setPreferredSize(size);
		xpButton->setRequestFocusEnabled(false);
		installPreviousButtonListeners(xpButton);
		return xpButton;
	}
	return $BasicSpinnerUI::createPreviousButton();
}

$Component* WindowsSpinnerUI::createNextButton() {
	$useLocalCurrentObjectStackCache();
	if ($XPStyle::getXP() != nullptr) {
		$init($TMSchema$Part);
		$var($JButton, xpButton, $new($XPStyle$GlyphButton, this->spinner, $TMSchema$Part::SPNP_UP));
		$var($Dimension, size, $UIManager::getDimension("Spinner.arrowButtonSize"_s));
		xpButton->setPreferredSize(size);
		xpButton->setRequestFocusEnabled(false);
		installNextButtonListeners(xpButton);
		return xpButton;
	}
	return $BasicSpinnerUI::createNextButton();
}

$UIResource* WindowsSpinnerUI::getUIResource($ObjectArray* listeners) {
	for (int32_t counter = 0; counter < $nc(listeners)->length; ++counter) {
		if ($instanceOf($UIResource, listeners->get(counter))) {
			return $cast($UIResource, listeners->get(counter));
		}
	}
	return nullptr;
}

WindowsSpinnerUI::WindowsSpinnerUI() {
}

$Class* WindowsSpinnerUI::load$($String* name, bool initialize) {
	$loadClass(WindowsSpinnerUI, name, initialize, &_WindowsSpinnerUI_ClassInfo_, allocate$WindowsSpinnerUI);
	return class$;
}

$Class* WindowsSpinnerUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com