#include <javax/swing/PopupFactory$LightWeightPopup.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory$ContainerPopup.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef CENTER
#undef POPUP_LAYER

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JPanel = ::javax::swing::JPanel;
using $JRootPane = ::javax::swing::JRootPane;
using $Popup = ::javax::swing::Popup;
using $PopupFactory$ContainerPopup = ::javax::swing::PopupFactory$ContainerPopup;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

$FieldInfo _PopupFactory$LightWeightPopup_FieldInfo_[] = {
	{"lightWeightPopupCacheKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PopupFactory$LightWeightPopup, lightWeightPopupCacheKey)},
	{}
};

$MethodInfo _PopupFactory$LightWeightPopup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PopupFactory$LightWeightPopup::*)()>(&PopupFactory$LightWeightPopup::init$))},
	{"createComponent", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, 0},
	{"getLightWeightPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $STATIC, $method(static_cast<$Popup*(*)($Component*,$Component*,int32_t,int32_t)>(&PopupFactory$LightWeightPopup::getLightWeightPopup))},
	{"getLightWeightPopupCache", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/swing/PopupFactory$LightWeightPopup;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&PopupFactory$LightWeightPopup::getLightWeightPopupCache))},
	{"getRecycledLightWeightPopup", "()Ljavax/swing/PopupFactory$LightWeightPopup;", nullptr, $PRIVATE | $STATIC, $method(static_cast<PopupFactory$LightWeightPopup*(*)()>(&PopupFactory$LightWeightPopup::getRecycledLightWeightPopup))},
	{"hide", "()V", nullptr, $PUBLIC},
	{"recycleLightWeightPopup", "(Ljavax/swing/PopupFactory$LightWeightPopup;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(PopupFactory$LightWeightPopup*)>(&PopupFactory$LightWeightPopup::recycleLightWeightPopup))},
	{"reset", "(Ljava/awt/Component;Ljava/awt/Component;II)V", nullptr, 0},
	{"show", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PopupFactory$LightWeightPopup_InnerClassesInfo_[] = {
	{"javax.swing.PopupFactory$LightWeightPopup", "javax.swing.PopupFactory", "LightWeightPopup", $PRIVATE | $STATIC},
	{"javax.swing.PopupFactory$ContainerPopup", "javax.swing.PopupFactory", "ContainerPopup", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PopupFactory$LightWeightPopup_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.PopupFactory$LightWeightPopup",
	"javax.swing.PopupFactory$ContainerPopup",
	nullptr,
	_PopupFactory$LightWeightPopup_FieldInfo_,
	_PopupFactory$LightWeightPopup_MethodInfo_,
	nullptr,
	nullptr,
	_PopupFactory$LightWeightPopup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.PopupFactory"
};

$Object* allocate$PopupFactory$LightWeightPopup($Class* clazz) {
	return $of($alloc(PopupFactory$LightWeightPopup));
}

$Object* PopupFactory$LightWeightPopup::lightWeightPopupCacheKey = nullptr;

void PopupFactory$LightWeightPopup::init$() {
	$PopupFactory$ContainerPopup::init$();
}

$Popup* PopupFactory$LightWeightPopup::getLightWeightPopup($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	$init(PopupFactory$LightWeightPopup);
	$var(PopupFactory$LightWeightPopup, popup, getRecycledLightWeightPopup());
	if (popup == nullptr) {
		$assign(popup, $new(PopupFactory$LightWeightPopup));
	}
	$nc(popup)->reset(owner, contents, ownerX, ownerY);
	bool var$0 = !popup->fitsOnScreen();
	if (var$0 || popup->overlappedByOwnedWindow()) {
		popup->hide();
		return nullptr;
	}
	return popup;
}

$List* PopupFactory$LightWeightPopup::getLightWeightPopupCache() {
	$init(PopupFactory$LightWeightPopup);
	$var($List, cache, $cast($List, $SwingUtilities::appContextGet(PopupFactory$LightWeightPopup::lightWeightPopupCacheKey)));
	if (cache == nullptr) {
		$assign(cache, $new($ArrayList));
		$SwingUtilities::appContextPut(PopupFactory$LightWeightPopup::lightWeightPopupCacheKey, cache);
	}
	return cache;
}

void PopupFactory$LightWeightPopup::recycleLightWeightPopup(PopupFactory$LightWeightPopup* popup) {
	$init(PopupFactory$LightWeightPopup);
	$synchronized(PopupFactory$LightWeightPopup::class$) {
		$var($List, lightPopupCache, getLightWeightPopupCache());
		if ($nc(lightPopupCache)->size() < 5) {
			lightPopupCache->add(popup);
		}
	}
}

PopupFactory$LightWeightPopup* PopupFactory$LightWeightPopup::getRecycledLightWeightPopup() {
	$init(PopupFactory$LightWeightPopup);
	$useLocalCurrentObjectStackCache();
	$synchronized(PopupFactory$LightWeightPopup::class$) {
		$var($List, lightPopupCache, getLightWeightPopupCache());
		if ($nc(lightPopupCache)->size() > 0) {
			$var(PopupFactory$LightWeightPopup, r, $cast(PopupFactory$LightWeightPopup, lightPopupCache->get(0)));
			lightPopupCache->remove(0);
			return r;
		}
		return nullptr;
	}
}

void PopupFactory$LightWeightPopup::hide() {
	$PopupFactory$ContainerPopup::hide();
	$var($Container, component, $cast($Container, getComponent()));
	$nc(component)->removeAll();
	recycleLightWeightPopup(this);
}

void PopupFactory$LightWeightPopup::show() {
	$useLocalCurrentObjectStackCache();
	$var($Container, parent, nullptr);
	if (this->owner != nullptr) {
		$assign(parent, $instanceOf($Container, this->owner) ? $cast($Container, this->owner) : $nc(this->owner)->getParent());
	}
	{
		$var($Container, p, parent);
		for (; p != nullptr; $assign(p, $nc(p)->getParent())) {
			if ($instanceOf($JRootPane, p)) {
				if ($instanceOf($JInternalFrame, $(p->getParent()))) {
					continue;
				}
				$assign(parent, $nc(($cast($JRootPane, p)))->getLayeredPane());
			} else if ($instanceOf($Window, p)) {
				if (parent == nullptr) {
					$assign(parent, p);
				}
				break;
			} else if ($instanceOf($JApplet, p)) {
				break;
			}
		}
	}
	$var($Point, p, $SwingUtilities::convertScreenLocationToParent(parent, this->x, this->y));
	$var($Component, component, getComponent());
	$nc(component)->setLocation(p->x, p->y);
	if ($instanceOf($JLayeredPane, parent)) {
		$init($JLayeredPane);
		$nc(parent)->add(component, $JLayeredPane::POPUP_LAYER, 0);
	} else {
		$nc(parent)->add(component);
	}
	pack();
	component->setVisible(true);
}

$Component* PopupFactory$LightWeightPopup::createComponent($Component* owner) {
	return $new($JPanel, $$new($BorderLayout), true);
}

void PopupFactory$LightWeightPopup::reset($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	$PopupFactory$ContainerPopup::reset(owner, contents, ownerX, ownerY);
	$var($JComponent, component, $cast($JComponent, getComponent()));
	$nc(component)->setVisible(false);
	component->setLocation(ownerX, ownerY);
	component->setOpaque($nc(contents)->isOpaque());
	$init($BorderLayout);
	component->add(contents, $of($BorderLayout::CENTER));
	pack();
}

void clinit$PopupFactory$LightWeightPopup($Class* class$) {
	$assignStatic(PopupFactory$LightWeightPopup::lightWeightPopupCacheKey, $new($StringBuffer, "PopupFactory.lightPopupCache"_s));
}

PopupFactory$LightWeightPopup::PopupFactory$LightWeightPopup() {
}

$Class* PopupFactory$LightWeightPopup::load$($String* name, bool initialize) {
	$loadClass(PopupFactory$LightWeightPopup, name, initialize, &_PopupFactory$LightWeightPopup_ClassInfo_, clinit$PopupFactory$LightWeightPopup, allocate$PopupFactory$LightWeightPopup);
	return class$;
}

$Class* PopupFactory$LightWeightPopup::class$ = nullptr;

	} // swing
} // javax