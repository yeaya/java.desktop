#include <com/apple/laf/AquaToolBarUI.h>

#include <com/apple/laf/AquaToolBarUI$ToolBarBorder.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolBarUI.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $AquaToolBarUI$ToolBarBorder = ::com::apple::laf::AquaToolBarUI$ToolBarBorder;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $JToolBar = ::javax::swing::JToolBar;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ToolBarUI = ::javax::swing::plaf::ToolBarUI;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaToolBarUI_FieldInfo_[] = {
	{"toolBarBorder", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaToolBarUI$ToolBarBorder;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaToolBarUI, toolBarBorder)},
	{}
};

$MethodInfo _AquaToolBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaToolBarUI::*)()>(&AquaToolBarUI::init$))},
	{"createFloatingWindow", "(Ljavax/swing/JToolBar;)Ljavax/swing/RootPaneContainer;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaToolBarUI::createUI))},
	{"getToolBarBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&AquaToolBarUI::getToolBarBorder))},
	{"setBorderToNonRollover", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setBorderToNormal", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setBorderToRollover", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _AquaToolBarUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaToolBarUI$ToolBarBorder", "com.apple.laf.AquaToolBarUI", "ToolBarBorder", $STATIC},
	{}
};

$ClassInfo _AquaToolBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaToolBarUI",
	"javax.swing.plaf.basic.BasicToolBarUI",
	nullptr,
	_AquaToolBarUI_FieldInfo_,
	_AquaToolBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaToolBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaToolBarUI$ToolBarBorder"
};

$Object* allocate$AquaToolBarUI($Class* clazz) {
	return $of($alloc(AquaToolBarUI));
}

$AquaUtils$RecyclableSingleton* AquaToolBarUI::toolBarBorder = nullptr;

void AquaToolBarUI::init$() {
	$BasicToolBarUI::init$();
}

$Border* AquaToolBarUI::getToolBarBorder() {
	$init(AquaToolBarUI);
	return $cast($Border, $nc(AquaToolBarUI::toolBarBorder)->get());
}

$ComponentUI* AquaToolBarUI::createUI($JComponent* c) {
	$init(AquaToolBarUI);
	return $new(AquaToolBarUI);
}

void AquaToolBarUI::setBorderToNonRollover($Component* c) {
}

void AquaToolBarUI::setBorderToNormal($Component* c) {
}

void AquaToolBarUI::setBorderToRollover($Component* c) {
}

$RootPaneContainer* AquaToolBarUI::createFloatingWindow($JToolBar* toolbar) {
	$useLocalCurrentObjectStackCache();
	$var($RootPaneContainer, window, $BasicToolBarUI::createFloatingWindow(toolbar));
	$nc($($nc(window)->getRootPane()))->putClientProperty("Window.style"_s, "small"_s);
	return window;
}

void AquaToolBarUI::update($Graphics* g, $JComponent* c) {
	if ($nc(c)->isOpaque()) {
		$AquaUtils::fillRect(g, c);
	}
	paint(g, c);
}

void clinit$AquaToolBarUI($Class* class$) {
	$load($AquaToolBarUI$ToolBarBorder);
	$assignStatic(AquaToolBarUI::toolBarBorder, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaToolBarUI$ToolBarBorder::class$));
}

AquaToolBarUI::AquaToolBarUI() {
}

$Class* AquaToolBarUI::load$($String* name, bool initialize) {
	$loadClass(AquaToolBarUI, name, initialize, &_AquaToolBarUI_ClassInfo_, clinit$AquaToolBarUI, allocate$AquaToolBarUI);
	return class$;
}

$Class* AquaToolBarUI::class$ = nullptr;

		} // laf
	} // apple
} // com