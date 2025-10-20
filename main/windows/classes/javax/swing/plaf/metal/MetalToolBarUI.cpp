#include <javax/swing/plaf/metal/MetalToolBarUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Point.h>
#include <java/awt/event/ContainerListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolBarUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$DockingListener.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$DragWindow.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalToolBarUI$MetalDockingListener.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Point = ::java::awt::Point;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToolBar = ::javax::swing::JToolBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ToolBarUI = ::javax::swing::plaf::ToolBarUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$DockingListener = ::javax::swing::plaf::basic::BasicToolBarUI$DockingListener;
using $BasicToolBarUI$DragWindow = ::javax::swing::plaf::basic::BasicToolBarUI$DragWindow;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalToolBarUI$MetalDockingListener = ::javax::swing::plaf::metal::MetalToolBarUI$MetalDockingListener;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalToolBarUI_FieldInfo_[] = {
	{"components", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/ref/WeakReference<Ljavax/swing/JComponent;>;>;", $PRIVATE | $STATIC, $staticField(MetalToolBarUI, components)},
	{"contListener", "Ljava/awt/event/ContainerListener;", nullptr, $PROTECTED, $field(MetalToolBarUI, contListener)},
	{"rolloverListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(MetalToolBarUI, rolloverListener)},
	{"nonRolloverBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(MetalToolBarUI, nonRolloverBorder)},
	{"lastMenuBar", "Ljavax/swing/JMenuBar;", nullptr, $PRIVATE, $field(MetalToolBarUI, lastMenuBar)},
	{}
};

$MethodInfo _MetalToolBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalToolBarUI::*)()>(&MetalToolBarUI::init$))},
	{"createContainerListener", "()Ljava/awt/event/ContainerListener;", nullptr, $PROTECTED},
	{"createDockingListener", "()Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createNonRolloverBorder", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED},
	{"createNonRolloverToggleBorder", "()Ljavax/swing/border/Border;", nullptr, $PRIVATE, $method(static_cast<$Border*(MetalToolBarUI::*)()>(&MetalToolBarUI::createNonRolloverToggleBorder))},
	{"createRolloverBorder", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED},
	{"createRolloverListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalToolBarUI::createUI))},
	{"doesMenuBarBorderToolBar", "(Ljavax/swing/JMenuBar;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($JMenuBar*)>(&MetalToolBarUI::doesMenuBarBorderToolBar))},
	{"findRegisteredComponentOfType", "(Ljavax/swing/JComponent;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljavax/swing/JComponent;Ljava/lang/Class<*>;)Ljava/lang/Object;", $STATIC | $SYNCHRONIZED, $method(static_cast<$Object*(*)($JComponent*,$Class*)>(&MetalToolBarUI::findRegisteredComponentOfType))},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"register", "(Ljavax/swing/JComponent;)V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($JComponent*)>(&MetalToolBarUI::register$))},
	{"setBorderToNonRollover", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setDragOffset", "(Ljava/awt/Point;)V", nullptr, $PROTECTED},
	{"setLastMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalToolBarUI::*)($JMenuBar*)>(&MetalToolBarUI::setLastMenuBar))},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"unregister", "(Ljavax/swing/JComponent;)V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($JComponent*)>(&MetalToolBarUI::unregister))},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalToolBarUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalToolBarUI$MetalDockingListener", "javax.swing.plaf.metal.MetalToolBarUI", "MetalDockingListener", $PROTECTED},
	{"javax.swing.plaf.metal.MetalToolBarUI$MetalRolloverListener", "javax.swing.plaf.metal.MetalToolBarUI", "MetalRolloverListener", $PROTECTED},
	{"javax.swing.plaf.metal.MetalToolBarUI$MetalContainerListener", "javax.swing.plaf.metal.MetalToolBarUI", "MetalContainerListener", $PROTECTED},
	{}
};

$ClassInfo _MetalToolBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalToolBarUI",
	"javax.swing.plaf.basic.BasicToolBarUI",
	nullptr,
	_MetalToolBarUI_FieldInfo_,
	_MetalToolBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_MetalToolBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalToolBarUI$MetalDockingListener,javax.swing.plaf.metal.MetalToolBarUI$MetalRolloverListener,javax.swing.plaf.metal.MetalToolBarUI$MetalContainerListener"
};

$Object* allocate$MetalToolBarUI($Class* clazz) {
	return $of($alloc(MetalToolBarUI));
}


$List* MetalToolBarUI::components = nullptr;
$Border* MetalToolBarUI::nonRolloverBorder = nullptr;

void MetalToolBarUI::init$() {
	$BasicToolBarUI::init$();
}

void MetalToolBarUI::register$($JComponent* c) {
	$load(MetalToolBarUI);
	$synchronized(class$) {
		$init(MetalToolBarUI);
		if (c == nullptr) {
			$throwNew($NullPointerException, "JComponent must be non-null"_s);
		}
		$nc(MetalToolBarUI::components)->add($$new($WeakReference, c));
	}
}

void MetalToolBarUI::unregister($JComponent* c) {
	$load(MetalToolBarUI);
	$synchronized(class$) {
		$init(MetalToolBarUI);
		$useLocalCurrentObjectStackCache();
		for (int32_t counter = $nc(MetalToolBarUI::components)->size() - 1; counter >= 0; --counter) {
			$var($JComponent, target, $cast($JComponent, $nc(($cast($WeakReference, $($nc(MetalToolBarUI::components)->get(counter)))))->get()));
			if (target == c || target == nullptr) {
				$nc(MetalToolBarUI::components)->remove(counter);
			}
		}
	}
}

$Object* MetalToolBarUI::findRegisteredComponentOfType($JComponent* from, $Class* target) {
	$load(MetalToolBarUI);
	$synchronized(class$) {
		$init(MetalToolBarUI);
		$useLocalCurrentObjectStackCache();
		$var($JRootPane, rp, $SwingUtilities::getRootPane(from));
		if (rp != nullptr) {
			for (int32_t counter = $nc(MetalToolBarUI::components)->size() - 1; counter >= 0; --counter) {
				$var($Object, component, $nc(($cast($WeakReference, $($nc(MetalToolBarUI::components)->get(counter)))))->get());
				if (component == nullptr) {
					$nc(MetalToolBarUI::components)->remove(counter);
				} else {
					bool var$1 = $nc(target)->isInstance(component);
					if (var$1 && $SwingUtilities::getRootPane($cast($Component, component)) == rp) {
						return $of(component);
					}
				}
			}
		}
		return $of(nullptr);
	}
}

bool MetalToolBarUI::doesMenuBarBorderToolBar($JMenuBar* c) {
	$init(MetalToolBarUI);
	$useLocalCurrentObjectStackCache();
	$load($JToolBar);
	$var($JToolBar, tb, $cast($JToolBar, MetalToolBarUI::findRegisteredComponentOfType(c, $JToolBar::class$)));
	if (tb != nullptr && tb->getOrientation() == $JToolBar::HORIZONTAL) {
		$var($JRootPane, rp, $SwingUtilities::getRootPane(c));
		$var($Point, point, $new($Point, 0, 0));
		$assign(point, $SwingUtilities::convertPoint(c, point, rp));
		int32_t menuX = $nc(point)->x;
		int32_t menuY = point->y;
		point->x = (point->y = 0);
		$assign(point, $SwingUtilities::convertPoint(tb, point, rp));
		bool var$0 = point->x == menuX && menuY + $nc(c)->getHeight() == point->y;
		if (var$0) {
			int32_t var$1 = c->getWidth();
			var$0 = var$1 == tb->getWidth();
		}
		return (var$0);
	}
	return false;
}

$ComponentUI* MetalToolBarUI::createUI($JComponent* c) {
	$init(MetalToolBarUI);
	return $new(MetalToolBarUI);
}

void MetalToolBarUI::installUI($JComponent* c) {
	$BasicToolBarUI::installUI(c);
	register$(c);
}

void MetalToolBarUI::uninstallUI($JComponent* c) {
	$BasicToolBarUI::uninstallUI(c);
	$assignStatic(MetalToolBarUI::nonRolloverBorder, nullptr);
	unregister(c);
}

void MetalToolBarUI::installListeners() {
	$BasicToolBarUI::installListeners();
	$set(this, contListener, createContainerListener());
	if (this->contListener != nullptr) {
		$nc(this->toolBar)->addContainerListener(this->contListener);
	}
	$set(this, rolloverListener, createRolloverListener());
	if (this->rolloverListener != nullptr) {
		$nc(this->toolBar)->addPropertyChangeListener(this->rolloverListener);
	}
}

void MetalToolBarUI::uninstallListeners() {
	$BasicToolBarUI::uninstallListeners();
	if (this->contListener != nullptr) {
		$nc(this->toolBar)->removeContainerListener(this->contListener);
	}
	$set(this, rolloverListener, createRolloverListener());
	if (this->rolloverListener != nullptr) {
		$nc(this->toolBar)->removePropertyChangeListener(this->rolloverListener);
	}
}

$Border* MetalToolBarUI::createRolloverBorder() {
	return $BasicToolBarUI::createRolloverBorder();
}

$Border* MetalToolBarUI::createNonRolloverBorder() {
	return $BasicToolBarUI::createNonRolloverBorder();
}

$Border* MetalToolBarUI::createNonRolloverToggleBorder() {
	return createNonRolloverBorder();
}

void MetalToolBarUI::setBorderToNonRollover($Component* c) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JToggleButton, c) && !($instanceOf($JCheckBox, c))) {
		$var($JToggleButton, b, $cast($JToggleButton, c));
		$var($Border, border, $nc(b)->getBorder());
		$BasicToolBarUI::setBorderToNonRollover(c);
		if ($instanceOf($UIResource, border)) {
			if (MetalToolBarUI::nonRolloverBorder == nullptr) {
				$assignStatic(MetalToolBarUI::nonRolloverBorder, createNonRolloverToggleBorder());
			}
			b->setBorder(MetalToolBarUI::nonRolloverBorder);
		}
	} else {
		$BasicToolBarUI::setBorderToNonRollover(c);
	}
}

$ContainerListener* MetalToolBarUI::createContainerListener() {
	return nullptr;
}

$PropertyChangeListener* MetalToolBarUI::createRolloverListener() {
	return nullptr;
}

$MouseInputListener* MetalToolBarUI::createDockingListener() {
	return $new($MetalToolBarUI$MetalDockingListener, this, this->toolBar);
}

void MetalToolBarUI::setDragOffset($Point* p) {
	if (!$GraphicsEnvironment::isHeadless()) {
		if (this->dragWindow == nullptr) {
			$set(this, dragWindow, createDragWindow(this->toolBar));
		}
		$nc(this->dragWindow)->setOffset(p);
	}
}

void MetalToolBarUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if (g == nullptr) {
		$throwNew($NullPointerException, "graphics must be non-null"_s);
	}
	bool var$2 = $nc(c)->isOpaque();
	bool var$1 = var$2 && ($instanceOf($UIResource, $(c->getBackground())));
	bool var$0 = var$1 && $nc(($cast($JToolBar, c)))->getOrientation() == $JToolBar::HORIZONTAL;
	if (var$0 && $UIManager::get("MenuBar.gradient"_s) != nullptr) {
		$var($JRootPane, rp, $SwingUtilities::getRootPane(c));
		$load($JMenuBar);
		$var($JMenuBar, mb, $cast($JMenuBar, findRegisteredComponentOfType(c, $JMenuBar::class$)));
		bool var$3 = mb != nullptr && mb->isOpaque();
		if (var$3 && ($instanceOf($UIResource, $(mb->getBackground())))) {
			$var($Point, point, $new($Point, 0, 0));
			$assign(point, $SwingUtilities::convertPoint(c, point, rp));
			int32_t x = $nc(point)->x;
			int32_t y = point->y;
			point->x = (point->y = 0);
			$assign(point, $SwingUtilities::convertPoint(mb, point, rp));
			bool var$5 = point->x == x && y == point->y + mb->getHeight();
			if (var$5) {
				int32_t var$6 = mb->getWidth();
				var$5 = var$6 == c->getWidth();
			}
			bool var$4 = var$5;
			if (var$4) {
				$var($Component, var$7, static_cast<$Component*>(c));
				$var($Graphics, var$8, g);
				$var($String, var$9, "MenuBar.gradient"_s);
				int32_t var$10 = -mb->getHeight();
				int32_t var$11 = c->getWidth();
				int32_t var$12 = c->getHeight();
				var$4 = $MetalUtils::drawGradient(var$7, var$8, var$9, 0, var$10, var$11, var$12 + mb->getHeight(), true);
			}
			if (var$4) {
				setLastMenuBar(mb);
				paint(g, c);
				return;
			}
		}
		$var($Component, var$13, static_cast<$Component*>(c));
		$var($Graphics, var$14, g);
		$var($String, var$15, "MenuBar.gradient"_s);
		int32_t var$16 = c->getWidth();
		if ($MetalUtils::drawGradient(var$13, var$14, var$15, 0, 0, var$16, c->getHeight(), true)) {
			setLastMenuBar(nullptr);
			paint(g, c);
			return;
		}
	}
	setLastMenuBar(nullptr);
	$BasicToolBarUI::update(g, c);
}

void MetalToolBarUI::setLastMenuBar($JMenuBar* lastMenuBar) {
	if ($MetalLookAndFeel::usingOcean()) {
		if (this->lastMenuBar != lastMenuBar) {
			if (this->lastMenuBar != nullptr) {
				$nc(this->lastMenuBar)->repaint();
			}
			if (lastMenuBar != nullptr) {
				lastMenuBar->repaint();
			}
			$set(this, lastMenuBar, lastMenuBar);
		}
	}
}

void clinit$MetalToolBarUI($Class* class$) {
	$assignStatic(MetalToolBarUI::components, $new($ArrayList));
}

MetalToolBarUI::MetalToolBarUI() {
}

$Class* MetalToolBarUI::load$($String* name, bool initialize) {
	$loadClass(MetalToolBarUI, name, initialize, &_MetalToolBarUI_ClassInfo_, clinit$MetalToolBarUI, allocate$MetalToolBarUI);
	return class$;
}

$Class* MetalToolBarUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax