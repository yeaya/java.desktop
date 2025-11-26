#include <javax/swing/PopupFactory$MediumWeightPopup.h>

#include <java/applet/Applet.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Panel.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory$ContainerPopup.h>
#include <javax/swing/PopupFactory$MediumWeightPopup$MediumWeightComponent.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef CENTER
#undef POPUP_LAYER

using $Applet = ::java::applet::Applet;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Panel = ::java::awt::Panel;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $JComponent = ::javax::swing::JComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JRootPane = ::javax::swing::JRootPane;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $PopupFactory$ContainerPopup = ::javax::swing::PopupFactory$ContainerPopup;
using $PopupFactory$MediumWeightPopup$MediumWeightComponent = ::javax::swing::PopupFactory$MediumWeightPopup$MediumWeightComponent;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

$FieldInfo _PopupFactory$MediumWeightPopup_FieldInfo_[] = {
	{"mediumWeightPopupCacheKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PopupFactory$MediumWeightPopup, mediumWeightPopupCacheKey)},
	{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PRIVATE, $field(PopupFactory$MediumWeightPopup, rootPane)},
	{}
};

$MethodInfo _PopupFactory$MediumWeightPopup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PopupFactory$MediumWeightPopup::*)()>(&PopupFactory$MediumWeightPopup::init$))},
	{"createComponent", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, 0},
	{"getMediumWeightPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $STATIC, $method(static_cast<$Popup*(*)($Component*,$Component*,int32_t,int32_t)>(&PopupFactory$MediumWeightPopup::getMediumWeightPopup))},
	{"getMediumWeightPopupCache", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/swing/PopupFactory$MediumWeightPopup;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&PopupFactory$MediumWeightPopup::getMediumWeightPopupCache))},
	{"getRecycledMediumWeightPopup", "()Ljavax/swing/PopupFactory$MediumWeightPopup;", nullptr, $PRIVATE | $STATIC, $method(static_cast<PopupFactory$MediumWeightPopup*(*)()>(&PopupFactory$MediumWeightPopup::getRecycledMediumWeightPopup))},
	{"hide", "()V", nullptr, $PUBLIC},
	{"recycleMediumWeightPopup", "(Ljavax/swing/PopupFactory$MediumWeightPopup;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(PopupFactory$MediumWeightPopup*)>(&PopupFactory$MediumWeightPopup::recycleMediumWeightPopup))},
	{"reset", "(Ljava/awt/Component;Ljava/awt/Component;II)V", nullptr, 0},
	{"show", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PopupFactory$MediumWeightPopup_InnerClassesInfo_[] = {
	{"javax.swing.PopupFactory$MediumWeightPopup", "javax.swing.PopupFactory", "MediumWeightPopup", $PRIVATE | $STATIC},
	{"javax.swing.PopupFactory$ContainerPopup", "javax.swing.PopupFactory", "ContainerPopup", $PRIVATE | $STATIC},
	{"javax.swing.PopupFactory$MediumWeightPopup$MediumWeightComponent", "javax.swing.PopupFactory$MediumWeightPopup", "MediumWeightComponent", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PopupFactory$MediumWeightPopup_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.PopupFactory$MediumWeightPopup",
	"javax.swing.PopupFactory$ContainerPopup",
	nullptr,
	_PopupFactory$MediumWeightPopup_FieldInfo_,
	_PopupFactory$MediumWeightPopup_MethodInfo_,
	nullptr,
	nullptr,
	_PopupFactory$MediumWeightPopup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.PopupFactory"
};

$Object* allocate$PopupFactory$MediumWeightPopup($Class* clazz) {
	return $of($alloc(PopupFactory$MediumWeightPopup));
}

$Object* PopupFactory$MediumWeightPopup::mediumWeightPopupCacheKey = nullptr;

void PopupFactory$MediumWeightPopup::init$() {
	$PopupFactory$ContainerPopup::init$();
}

$Popup* PopupFactory$MediumWeightPopup::getMediumWeightPopup($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	$init(PopupFactory$MediumWeightPopup);
	$var(PopupFactory$MediumWeightPopup, popup, getRecycledMediumWeightPopup());
	if (popup == nullptr) {
		$assign(popup, $new(PopupFactory$MediumWeightPopup));
	}
	$nc(popup)->reset(owner, contents, ownerX, ownerY);
	bool var$0 = !popup->fitsOnScreen();
	if (var$0 || popup->overlappedByOwnedWindow()) {
		popup->hide();
		return nullptr;
	}
	return popup;
}

$List* PopupFactory$MediumWeightPopup::getMediumWeightPopupCache() {
	$init(PopupFactory$MediumWeightPopup);
	$var($List, cache, $cast($List, $SwingUtilities::appContextGet(PopupFactory$MediumWeightPopup::mediumWeightPopupCacheKey)));
	if (cache == nullptr) {
		$assign(cache, $new($ArrayList));
		$SwingUtilities::appContextPut(PopupFactory$MediumWeightPopup::mediumWeightPopupCacheKey, cache);
	}
	return cache;
}

void PopupFactory$MediumWeightPopup::recycleMediumWeightPopup(PopupFactory$MediumWeightPopup* popup) {
	$init(PopupFactory$MediumWeightPopup);
	$synchronized(PopupFactory$MediumWeightPopup::class$) {
		$var($List, mediumPopupCache, getMediumWeightPopupCache());
		if ($nc(mediumPopupCache)->size() < 5) {
			mediumPopupCache->add(popup);
		}
	}
}

PopupFactory$MediumWeightPopup* PopupFactory$MediumWeightPopup::getRecycledMediumWeightPopup() {
	$init(PopupFactory$MediumWeightPopup);
	$useLocalCurrentObjectStackCache();
	$synchronized(PopupFactory$MediumWeightPopup::class$) {
		$var($List, mediumPopupCache, getMediumWeightPopupCache());
		if ($nc(mediumPopupCache)->size() > 0) {
			$var(PopupFactory$MediumWeightPopup, r, $cast(PopupFactory$MediumWeightPopup, mediumPopupCache->get(0)));
			mediumPopupCache->remove(0);
			return r;
		}
		return nullptr;
	}
}

void PopupFactory$MediumWeightPopup::hide() {
	$PopupFactory$ContainerPopup::hide();
	$nc($($nc(this->rootPane)->getContentPane()))->removeAll();
	recycleMediumWeightPopup(this);
}

void PopupFactory$MediumWeightPopup::show() {
	$useLocalCurrentObjectStackCache();
	$var($Component, component, getComponent());
	$var($Container, parent, nullptr);
	if (this->owner != nullptr) {
		$assign(parent, $nc(this->owner)->getParent());
	}
	while (!($instanceOf($Window, parent) || $instanceOf($Applet, parent)) && (parent != nullptr)) {
		$assign(parent, parent->getParent());
	}
	if ($instanceOf($RootPaneContainer, parent)) {
		$assign(parent, $nc(($cast($RootPaneContainer, parent)))->getLayeredPane());
	}
	$var($Point, p, $SwingUtilities::convertScreenLocationToParent(parent, this->x, this->y));
	$nc(component)->setLocation($nc(p)->x, p->y);
	if ($instanceOf($JLayeredPane, parent)) {
		$init($JLayeredPane);
		$nc(parent)->add(component, $JLayeredPane::POPUP_LAYER, 0);
	} else {
		$nc(parent)->add(component);
	}
	pack();
	component->setVisible(true);
	component->revalidate();
}

$Component* PopupFactory$MediumWeightPopup::createComponent($Component* owner) {
	$var($Panel, component, $new($PopupFactory$MediumWeightPopup$MediumWeightComponent));
	$set(this, rootPane, $new($JRootPane));
	$nc(this->rootPane)->setOpaque(true);
	$init($BorderLayout);
	component->add(static_cast<$Component*>(this->rootPane), $of($BorderLayout::CENTER));
	return component;
}

void PopupFactory$MediumWeightPopup::reset($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	$useLocalCurrentObjectStackCache();
	$PopupFactory$ContainerPopup::reset(owner, contents, ownerX, ownerY);
	$var($Component, component, getComponent());
	$nc(component)->setVisible(false);
	component->setLocation(ownerX, ownerY);
	$init($BorderLayout);
	$nc($($nc(this->rootPane)->getContentPane()))->add(contents, $of($BorderLayout::CENTER));
	pack();
}

void clinit$PopupFactory$MediumWeightPopup($Class* class$) {
	$assignStatic(PopupFactory$MediumWeightPopup::mediumWeightPopupCacheKey, $new($StringBuffer, "PopupFactory.mediumPopupCache"_s));
}

PopupFactory$MediumWeightPopup::PopupFactory$MediumWeightPopup() {
}

$Class* PopupFactory$MediumWeightPopup::load$($String* name, bool initialize) {
	$loadClass(PopupFactory$MediumWeightPopup, name, initialize, &_PopupFactory$MediumWeightPopup_ClassInfo_, clinit$PopupFactory$MediumWeightPopup, allocate$PopupFactory$MediumWeightPopup);
	return class$;
}

$Class* PopupFactory$MediumWeightPopup::class$ = nullptr;

	} // swing
} // javax