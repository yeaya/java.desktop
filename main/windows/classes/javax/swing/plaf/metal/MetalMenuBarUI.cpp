#include <javax/swing/plaf/metal/MetalMenuBarUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuBarUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI.h>
#include <javax/swing/plaf/metal/MetalToolBarUI.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $JComponent = ::javax::swing::JComponent;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JToolBar = ::javax::swing::JToolBar;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuBarUI = ::javax::swing::plaf::MenuBarUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicMenuBarUI = ::javax::swing::plaf::basic::BasicMenuBarUI;
using $MetalToolBarUI = ::javax::swing::plaf::metal::MetalToolBarUI;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalMenuBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalMenuBarUI::*)()>(&MetalMenuBarUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalMenuBarUI::createUI))},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MetalMenuBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalMenuBarUI",
	"javax.swing.plaf.basic.BasicMenuBarUI",
	nullptr,
	nullptr,
	_MetalMenuBarUI_MethodInfo_
};

$Object* allocate$MetalMenuBarUI($Class* clazz) {
	return $of($alloc(MetalMenuBarUI));
}

void MetalMenuBarUI::init$() {
	$BasicMenuBarUI::init$();
}

$ComponentUI* MetalMenuBarUI::createUI($JComponent* x) {
	$init(MetalMenuBarUI);
	if (x == nullptr) {
		$throwNew($NullPointerException, "Must pass in a non-null component"_s);
	}
	return $new(MetalMenuBarUI);
}

void MetalMenuBarUI::installUI($JComponent* c) {
	$BasicMenuBarUI::installUI(c);
	$MetalToolBarUI::register$(c);
}

void MetalMenuBarUI::uninstallUI($JComponent* c) {
	$BasicMenuBarUI::uninstallUI(c);
	$MetalToolBarUI::unregister(c);
}

void MetalMenuBarUI::update($Graphics* g, $JComponent* c) {
	bool isOpaque = $nc(c)->isOpaque();
	if (g == nullptr) {
		$throwNew($NullPointerException, "Graphics must be non-null"_s);
	}
	bool var$0 = isOpaque && ($instanceOf($UIResource, $(c->getBackground())));
	if (var$0 && $UIManager::get("MenuBar.gradient"_s) != nullptr) {
		if ($MetalToolBarUI::doesMenuBarBorderToolBar($cast($JMenuBar, c))) {
			$load($JToolBar);
			$var($JToolBar, tb, $cast($JToolBar, $MetalToolBarUI::findRegisteredComponentOfType(c, $JToolBar::class$)));
			bool var$1 = $nc(tb)->isOpaque();
			if (var$1 && $instanceOf($UIResource, $(tb->getBackground()))) {
				$var($Component, var$2, static_cast<$Component*>(c));
				$var($Graphics, var$3, g);
				$var($String, var$4, "MenuBar.gradient"_s);
				int32_t var$5 = c->getWidth();
				int32_t var$6 = c->getHeight();
				$MetalUtils::drawGradient(var$2, var$3, var$4, 0, 0, var$5, var$6 + tb->getHeight(), true);
				paint(g, c);
				return;
			}
		}
		$var($Component, var$7, static_cast<$Component*>(c));
		$var($Graphics, var$8, g);
		$var($String, var$9, "MenuBar.gradient"_s);
		int32_t var$10 = c->getWidth();
		$MetalUtils::drawGradient(var$7, var$8, var$9, 0, 0, var$10, c->getHeight(), true);
		paint(g, c);
	} else {
		$BasicMenuBarUI::update(g, c);
	}
}

MetalMenuBarUI::MetalMenuBarUI() {
}

$Class* MetalMenuBarUI::load$($String* name, bool initialize) {
	$loadClass(MetalMenuBarUI, name, initialize, &_MetalMenuBarUI_ClassInfo_, allocate$MetalMenuBarUI);
	return class$;
}

$Class* MetalMenuBarUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax