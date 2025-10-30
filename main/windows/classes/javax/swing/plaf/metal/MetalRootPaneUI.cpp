#include <javax/swing/plaf/metal/MetalRootPaneUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/RootPaneUI.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI.h>
#include <javax/swing/plaf/metal/MetalRootPaneUI$MetalRootLayout.h>
#include <javax/swing/plaf/metal/MetalRootPaneUI$MouseInputHandler.h>
#include <javax/swing/plaf/metal/MetalTitlePane.h>
#include <jcpp.h>

#undef BORDER_DRAG_THICKNESS
#undef CORNER_DRAG_WIDTH
#undef DEFAULT_CURSOR
#undef E_RESIZE_CURSOR
#undef FRAME_CONTENT_LAYER
#undef NE_RESIZE_CURSOR
#undef NONE
#undef NW_RESIZE_CURSOR
#undef N_RESIZE_CURSOR
#undef SE_RESIZE_CURSOR
#undef SW_RESIZE_CURSOR
#undef S_RESIZE_CURSOR
#undef W_RESIZE_CURSOR

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JRootPane = ::javax::swing::JRootPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $RootPaneUI = ::javax::swing::plaf::RootPaneUI;
using $BasicRootPaneUI = ::javax::swing::plaf::basic::BasicRootPaneUI;
using $MetalRootPaneUI$MetalRootLayout = ::javax::swing::plaf::metal::MetalRootPaneUI$MetalRootLayout;
using $MetalRootPaneUI$MouseInputHandler = ::javax::swing::plaf::metal::MetalRootPaneUI$MouseInputHandler;
using $MetalTitlePane = ::javax::swing::plaf::metal::MetalTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalRootPaneUI_FieldInfo_[] = {
	{"borderKeys", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalRootPaneUI, borderKeys)},
	{"CORNER_DRAG_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetalRootPaneUI, CORNER_DRAG_WIDTH)},
	{"BORDER_DRAG_THICKNESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetalRootPaneUI, BORDER_DRAG_THICKNESS)},
	{"window", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(MetalRootPaneUI, window)},
	{"titlePane", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(MetalRootPaneUI, titlePane)},
	{"mouseInputListener", "Ljavax/swing/event/MouseInputListener;", nullptr, $PRIVATE, $field(MetalRootPaneUI, mouseInputListener)},
	{"layoutManager", "Ljava/awt/LayoutManager;", nullptr, $PRIVATE, $field(MetalRootPaneUI, layoutManager)},
	{"savedOldLayout", "Ljava/awt/LayoutManager;", nullptr, $PRIVATE, $field(MetalRootPaneUI, savedOldLayout)},
	{"root", "Ljavax/swing/JRootPane;", nullptr, $PRIVATE, $field(MetalRootPaneUI, root)},
	{"lastCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE, $field(MetalRootPaneUI, lastCursor)},
	{"cursorMapping", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalRootPaneUI, cursorMapping)},
	{}
};

$MethodInfo _MetalRootPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalRootPaneUI::*)()>(&MetalRootPaneUI::init$))},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PRIVATE, $method(static_cast<$LayoutManager*(MetalRootPaneUI::*)()>(&MetalRootPaneUI::createLayoutManager))},
	{"createTitlePane", "(Ljavax/swing/JRootPane;)Ljavax/swing/JComponent;", nullptr, $PRIVATE, $method(static_cast<$JComponent*(MetalRootPaneUI::*)($JRootPane*)>(&MetalRootPaneUI::createTitlePane))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalRootPaneUI::createUI))},
	{"createWindowMouseInputListener", "(Ljavax/swing/JRootPane;)Ljavax/swing/event/MouseInputListener;", nullptr, $PRIVATE, $method(static_cast<$MouseInputListener*(MetalRootPaneUI::*)($JRootPane*)>(&MetalRootPaneUI::createWindowMouseInputListener))},
	{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PRIVATE, $method(static_cast<$JRootPane*(MetalRootPaneUI::*)()>(&MetalRootPaneUI::getRootPane))},
	{"getTitlePane", "()Ljavax/swing/JComponent;", nullptr, $PRIVATE, $method(static_cast<$JComponent*(MetalRootPaneUI::*)()>(&MetalRootPaneUI::getTitlePane))},
	{"installBorder", "(Ljavax/swing/JRootPane;)V", nullptr, 0},
	{"installClientDecorations", "(Ljavax/swing/JRootPane;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalRootPaneUI::*)($JRootPane*)>(&MetalRootPaneUI::installClientDecorations))},
	{"installLayout", "(Ljavax/swing/JRootPane;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalRootPaneUI::*)($JRootPane*)>(&MetalRootPaneUI::installLayout))},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"installWindowListeners", "(Ljavax/swing/JRootPane;Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalRootPaneUI::*)($JRootPane*,$Component*)>(&MetalRootPaneUI::installWindowListeners))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"setTitlePane", "(Ljavax/swing/JRootPane;Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalRootPaneUI::*)($JRootPane*,$JComponent*)>(&MetalRootPaneUI::setTitlePane))},
	{"uninstallBorder", "(Ljavax/swing/JRootPane;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalRootPaneUI::*)($JRootPane*)>(&MetalRootPaneUI::uninstallBorder))},
	{"uninstallClientDecorations", "(Ljavax/swing/JRootPane;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalRootPaneUI::*)($JRootPane*)>(&MetalRootPaneUI::uninstallClientDecorations))},
	{"uninstallLayout", "(Ljavax/swing/JRootPane;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalRootPaneUI::*)($JRootPane*)>(&MetalRootPaneUI::uninstallLayout))},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallWindowListeners", "(Ljavax/swing/JRootPane;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalRootPaneUI::*)($JRootPane*)>(&MetalRootPaneUI::uninstallWindowListeners))},
	{}
};

$InnerClassInfo _MetalRootPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalRootPaneUI$MouseInputHandler", "javax.swing.plaf.metal.MetalRootPaneUI", "MouseInputHandler", $PRIVATE},
	{"javax.swing.plaf.metal.MetalRootPaneUI$MetalRootLayout", "javax.swing.plaf.metal.MetalRootPaneUI", "MetalRootLayout", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalRootPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalRootPaneUI",
	"javax.swing.plaf.basic.BasicRootPaneUI",
	nullptr,
	_MetalRootPaneUI_FieldInfo_,
	_MetalRootPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_MetalRootPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalRootPaneUI$MouseInputHandler,javax.swing.plaf.metal.MetalRootPaneUI$MetalRootLayout"
};

$Object* allocate$MetalRootPaneUI($Class* clazz) {
	return $of($alloc(MetalRootPaneUI));
}

$StringArray* MetalRootPaneUI::borderKeys = nullptr;
$ints* MetalRootPaneUI::cursorMapping = nullptr;

void MetalRootPaneUI::init$() {
	$BasicRootPaneUI::init$();
	$set(this, lastCursor, $Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR));
}

$ComponentUI* MetalRootPaneUI::createUI($JComponent* c) {
	$init(MetalRootPaneUI);
	return $new(MetalRootPaneUI);
}

void MetalRootPaneUI::installUI($JComponent* c) {
	$BasicRootPaneUI::installUI(c);
	$set(this, root, $cast($JRootPane, c));
	int32_t style = $nc(this->root)->getWindowDecorationStyle();
	if (style != $JRootPane::NONE) {
		installClientDecorations(this->root);
	}
}

void MetalRootPaneUI::uninstallUI($JComponent* c) {
	$BasicRootPaneUI::uninstallUI(c);
	uninstallClientDecorations(this->root);
	$set(this, layoutManager, nullptr);
	$set(this, mouseInputListener, nullptr);
	$set(this, root, nullptr);
}

void MetalRootPaneUI::installBorder($JRootPane* root) {
	int32_t style = $nc(root)->getWindowDecorationStyle();
	if (style == $JRootPane::NONE) {
		$LookAndFeel::uninstallBorder(root);
	} else {
		$LookAndFeel::installBorder(root, $nc(MetalRootPaneUI::borderKeys)->get(style));
	}
}

void MetalRootPaneUI::uninstallBorder($JRootPane* root) {
	$LookAndFeel::uninstallBorder(root);
}

void MetalRootPaneUI::installWindowListeners($JRootPane* root, $Component* parent) {
	if ($instanceOf($Window, parent)) {
		$set(this, window, $cast($Window, parent));
	} else {
		$set(this, window, $SwingUtilities::getWindowAncestor(parent));
	}
	if (this->window != nullptr) {
		if (this->mouseInputListener == nullptr) {
			$set(this, mouseInputListener, createWindowMouseInputListener(root));
		}
		$nc(this->window)->addMouseListener(this->mouseInputListener);
		$nc(this->window)->addMouseMotionListener(this->mouseInputListener);
	}
}

void MetalRootPaneUI::uninstallWindowListeners($JRootPane* root) {
	if (this->window != nullptr) {
		$nc(this->window)->removeMouseListener(this->mouseInputListener);
		$nc(this->window)->removeMouseMotionListener(this->mouseInputListener);
	}
}

void MetalRootPaneUI::installLayout($JRootPane* root) {
	if (this->layoutManager == nullptr) {
		$set(this, layoutManager, createLayoutManager());
	}
	$set(this, savedOldLayout, $nc(root)->getLayout());
	root->setLayout(this->layoutManager);
}

void MetalRootPaneUI::uninstallLayout($JRootPane* root) {
	if (this->savedOldLayout != nullptr) {
		$nc(root)->setLayout(this->savedOldLayout);
		$set(this, savedOldLayout, nullptr);
	}
}

void MetalRootPaneUI::installClientDecorations($JRootPane* root) {
	$useLocalCurrentObjectStackCache();
	installBorder(root);
	$var($JComponent, titlePane, createTitlePane(root));
	setTitlePane(root, titlePane);
	installWindowListeners(root, $($nc(root)->getParent()));
	installLayout(root);
	if (this->window != nullptr) {
		$nc(root)->revalidate();
		root->repaint();
	}
}

void MetalRootPaneUI::uninstallClientDecorations($JRootPane* root) {
	uninstallBorder(root);
	uninstallWindowListeners(root);
	setTitlePane(root, nullptr);
	uninstallLayout(root);
	int32_t style = $nc(root)->getWindowDecorationStyle();
	if (style == $JRootPane::NONE) {
		root->repaint();
		root->revalidate();
	}
	if (this->window != nullptr) {
		$nc(this->window)->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
	}
	$set(this, window, nullptr);
}

$JComponent* MetalRootPaneUI::createTitlePane($JRootPane* root) {
	return $new($MetalTitlePane, root, this);
}

$MouseInputListener* MetalRootPaneUI::createWindowMouseInputListener($JRootPane* root) {
	return $new($MetalRootPaneUI$MouseInputHandler, this);
}

$LayoutManager* MetalRootPaneUI::createLayoutManager() {
	return $new($MetalRootPaneUI$MetalRootLayout);
}

void MetalRootPaneUI::setTitlePane($JRootPane* root, $JComponent* titlePane) {
	$useLocalCurrentObjectStackCache();
	$var($JLayeredPane, layeredPane, $nc(root)->getLayeredPane());
	$var($JComponent, oldTitlePane, getTitlePane());
	if (oldTitlePane != nullptr) {
		oldTitlePane->setVisible(false);
		$nc(layeredPane)->remove(static_cast<$Component*>(oldTitlePane));
	}
	if (titlePane != nullptr) {
		$init($JLayeredPane);
		$nc(layeredPane)->add(static_cast<$Component*>(titlePane), $of($JLayeredPane::FRAME_CONTENT_LAYER));
		titlePane->setVisible(true);
	}
	$set(this, titlePane, titlePane);
}

$JComponent* MetalRootPaneUI::getTitlePane() {
	return this->titlePane;
}

$JRootPane* MetalRootPaneUI::getRootPane() {
	return this->root;
}

void MetalRootPaneUI::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$BasicRootPaneUI::propertyChange(e);
	$var($String, propertyName, $nc(e)->getPropertyName());
	if (propertyName == nullptr) {
		return;
	}
	if ($nc(propertyName)->equals("windowDecorationStyle"_s)) {
		$var($JRootPane, root, $cast($JRootPane, e->getSource()));
		int32_t style = $nc(root)->getWindowDecorationStyle();
		uninstallClientDecorations(root);
		if (style != $JRootPane::NONE) {
			installClientDecorations(root);
		}
	} else if (propertyName->equals("ancestor"_s)) {
		uninstallWindowListeners(this->root);
		if ($nc(($cast($JRootPane, $(e->getSource()))))->getWindowDecorationStyle() != $JRootPane::NONE) {
			installWindowListeners(this->root, $($nc(this->root)->getParent()));
		}
	}
	return;
}

void clinit$MetalRootPaneUI($Class* class$) {
	$assignStatic(MetalRootPaneUI::borderKeys, $new($StringArray, {
		($String*)nullptr,
		"RootPane.frameBorder"_s,
		"RootPane.plainDialogBorder"_s,
		"RootPane.informationDialogBorder"_s,
		"RootPane.errorDialogBorder"_s,
		"RootPane.colorChooserDialogBorder"_s,
		"RootPane.fileChooserDialogBorder"_s,
		"RootPane.questionDialogBorder"_s,
		"RootPane.warningDialogBorder"_s
	}));
	$assignStatic(MetalRootPaneUI::cursorMapping, $new($ints, {
		$Cursor::NW_RESIZE_CURSOR,
		$Cursor::NW_RESIZE_CURSOR,
		$Cursor::N_RESIZE_CURSOR,
		$Cursor::NE_RESIZE_CURSOR,
		$Cursor::NE_RESIZE_CURSOR,
		$Cursor::NW_RESIZE_CURSOR,
		0,
		0,
		0,
		$Cursor::NE_RESIZE_CURSOR,
		$Cursor::W_RESIZE_CURSOR,
		0,
		0,
		0,
		$Cursor::E_RESIZE_CURSOR,
		$Cursor::SW_RESIZE_CURSOR,
		0,
		0,
		0,
		$Cursor::SE_RESIZE_CURSOR,
		$Cursor::SW_RESIZE_CURSOR,
		$Cursor::SW_RESIZE_CURSOR,
		$Cursor::S_RESIZE_CURSOR,
		$Cursor::SE_RESIZE_CURSOR,
		$Cursor::SE_RESIZE_CURSOR
	}));
}

MetalRootPaneUI::MetalRootPaneUI() {
}

$Class* MetalRootPaneUI::load$($String* name, bool initialize) {
	$loadClass(MetalRootPaneUI, name, initialize, &_MetalRootPaneUI_ClassInfo_, clinit$MetalRootPaneUI, allocate$MetalRootPaneUI);
	return class$;
}

$Class* MetalRootPaneUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax