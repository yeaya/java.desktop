#include <javax/swing/PopupFactory$HeavyWeightPopup.h>

#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JWindow.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/Popup$DefaultFrame.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory$HeavyWeightPopup$1.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JSeparator = ::javax::swing::JSeparator;
using $JWindow = ::javax::swing::JWindow;
using $MenuElement = ::javax::swing::MenuElement;
using $Popup = ::javax::swing::Popup;
using $Popup$DefaultFrame = ::javax::swing::Popup$DefaultFrame;
using $PopupFactory = ::javax::swing::PopupFactory;
using $PopupFactory$HeavyWeightPopup$1 = ::javax::swing::PopupFactory$HeavyWeightPopup$1;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

$FieldInfo _PopupFactory$HeavyWeightPopup_FieldInfo_[] = {
	{"heavyWeightPopupCacheKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PopupFactory$HeavyWeightPopup, heavyWeightPopupCacheKey)},
	{"isCacheEnabled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(PopupFactory$HeavyWeightPopup, isCacheEnabled)},
	{}
};

$MethodInfo _PopupFactory$HeavyWeightPopup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PopupFactory$HeavyWeightPopup::*)()>(&PopupFactory$HeavyWeightPopup::init$))},
	{"_dispose", "()V", nullptr, 0},
	{"dispose", "()V", nullptr, 0},
	{"getHeavyWeightPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $STATIC, $method(static_cast<$Popup*(*)($Component*,$Component*,int32_t,int32_t)>(&PopupFactory$HeavyWeightPopup::getHeavyWeightPopup))},
	{"getHeavyWeightPopupCache", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/awt/Window;Ljava/util/List<Ljavax/swing/PopupFactory$HeavyWeightPopup;>;>;", $PRIVATE | $STATIC, $method(static_cast<$Map*(*)()>(&PopupFactory$HeavyWeightPopup::getHeavyWeightPopupCache))},
	{"getRecycledHeavyWeightPopup", "(Ljava/awt/Window;)Ljavax/swing/PopupFactory$HeavyWeightPopup;", nullptr, $PRIVATE | $STATIC, $method(static_cast<PopupFactory$HeavyWeightPopup*(*)($Window*)>(&PopupFactory$HeavyWeightPopup::getRecycledHeavyWeightPopup))},
	{"hide", "()V", nullptr, $PUBLIC},
	{"recycleHeavyWeightPopup", "(Ljavax/swing/PopupFactory$HeavyWeightPopup;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(PopupFactory$HeavyWeightPopup*)>(&PopupFactory$HeavyWeightPopup::recycleHeavyWeightPopup))},
	{"setCacheEnabled", "(Z)V", nullptr, 0},
	{}
};

$InnerClassInfo _PopupFactory$HeavyWeightPopup_InnerClassesInfo_[] = {
	{"javax.swing.PopupFactory$HeavyWeightPopup", "javax.swing.PopupFactory", "HeavyWeightPopup", $PRIVATE | $STATIC},
	{"javax.swing.PopupFactory$HeavyWeightPopup$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PopupFactory$HeavyWeightPopup_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.PopupFactory$HeavyWeightPopup",
	"javax.swing.Popup",
	nullptr,
	_PopupFactory$HeavyWeightPopup_FieldInfo_,
	_PopupFactory$HeavyWeightPopup_MethodInfo_,
	nullptr,
	nullptr,
	_PopupFactory$HeavyWeightPopup_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.PopupFactory"
};

$Object* allocate$PopupFactory$HeavyWeightPopup($Class* clazz) {
	return $of($alloc(PopupFactory$HeavyWeightPopup));
}

$Object* PopupFactory$HeavyWeightPopup::heavyWeightPopupCacheKey = nullptr;

void PopupFactory$HeavyWeightPopup::init$() {
	$Popup::init$();
	this->isCacheEnabled = true;
}

$Popup* PopupFactory$HeavyWeightPopup::getHeavyWeightPopup($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	$init(PopupFactory$HeavyWeightPopup);
	$var($Window, window, (owner != nullptr) ? $SwingUtilities::getWindowAncestor(owner) : ($Window*)nullptr);
	$var(PopupFactory$HeavyWeightPopup, popup, nullptr);
	if (window != nullptr) {
		$assign(popup, getRecycledHeavyWeightPopup(window));
	}
	bool focusPopup = false;
	if (contents != nullptr && contents->isFocusable()) {
		if ($instanceOf($JPopupMenu, contents)) {
			$var($JPopupMenu, jpm, $cast($JPopupMenu, contents));
			$var($ComponentArray, popComps, jpm->getComponents());
			{
				$var($ComponentArray, arr$, popComps);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Component, popComp, arr$->get(i$));
					{
						if (!($instanceOf($MenuElement, popComp)) && !($instanceOf($JSeparator, popComp))) {
							focusPopup = true;
							break;
						}
					}
				}
			}
		}
	}
	if (popup == nullptr || $nc(($cast($JWindow, $($nc(popup)->getComponent()))))->getFocusableWindowState() != focusPopup) {
		if (popup != nullptr) {
			popup->_dispose();
		}
		$assign(popup, $new(PopupFactory$HeavyWeightPopup));
	}
	$nc(popup)->reset(owner, contents, ownerX, ownerY);
	if (focusPopup) {
		$var($JWindow, wnd, $cast($JWindow, popup->getComponent()));
		$nc(wnd)->setFocusableWindowState(true);
		wnd->setName("###focusableSwingPopup###"_s);
	}
	return popup;
}

PopupFactory$HeavyWeightPopup* PopupFactory$HeavyWeightPopup::getRecycledHeavyWeightPopup($Window* w) {
	$init(PopupFactory$HeavyWeightPopup);
	$synchronized(PopupFactory$HeavyWeightPopup::class$) {
		$var($List, cache, nullptr);
		$var($Map, heavyPopupCache, getHeavyWeightPopupCache());
		if ($nc(heavyPopupCache)->containsKey(w)) {
			$assign(cache, $cast($List, heavyPopupCache->get(w)));
		} else {
			return nullptr;
		}
		if ($nc(cache)->size() > 0) {
			$var(PopupFactory$HeavyWeightPopup, r, $cast(PopupFactory$HeavyWeightPopup, cache->get(0)));
			cache->remove(0);
			return r;
		}
		return nullptr;
	}
}

$Map* PopupFactory$HeavyWeightPopup::getHeavyWeightPopupCache() {
	$init(PopupFactory$HeavyWeightPopup);
	$synchronized(PopupFactory$HeavyWeightPopup::class$) {
		$var($Map, cache, $cast($Map, $SwingUtilities::appContextGet(PopupFactory$HeavyWeightPopup::heavyWeightPopupCacheKey)));
		if (cache == nullptr) {
			$assign(cache, $new($HashMap, 2));
			$SwingUtilities::appContextPut(PopupFactory$HeavyWeightPopup::heavyWeightPopupCacheKey, cache);
		}
		return cache;
	}
}

void PopupFactory$HeavyWeightPopup::recycleHeavyWeightPopup(PopupFactory$HeavyWeightPopup* popup) {
	$init(PopupFactory$HeavyWeightPopup);
	$synchronized(PopupFactory$HeavyWeightPopup::class$) {
		$var($List, cache, nullptr);
		$var($Window, window, $SwingUtilities::getWindowAncestor($($nc(popup)->getComponent())));
		$var($Map, heavyPopupCache, getHeavyWeightPopupCache());
		if ($instanceOf($Popup$DefaultFrame, window) || !$nc(window)->isVisible()) {
			$nc(popup)->_dispose();
			return;
		} else if ($nc(heavyPopupCache)->containsKey(window)) {
			$assign(cache, $cast($List, heavyPopupCache->get(window)));
		} else {
			$assign(cache, $new($ArrayList));
			heavyPopupCache->put(window, cache);
			$var($Window, w, window);
			w->addWindowListener($$new($PopupFactory$HeavyWeightPopup$1, w));
		}
		if ($nc(cache)->size() < 5) {
			cache->add(popup);
		} else {
			$nc(popup)->_dispose();
		}
	}
}

void PopupFactory$HeavyWeightPopup::setCacheEnabled(bool enable) {
	this->isCacheEnabled = enable;
}

void PopupFactory$HeavyWeightPopup::hide() {
	$Popup::hide();
	if (this->isCacheEnabled) {
		recycleHeavyWeightPopup(this);
	} else {
		this->_dispose();
	}
}

void PopupFactory$HeavyWeightPopup::dispose() {
}

void PopupFactory$HeavyWeightPopup::_dispose() {
	$Popup::dispose();
}

void clinit$PopupFactory$HeavyWeightPopup($Class* class$) {
	$assignStatic(PopupFactory$HeavyWeightPopup::heavyWeightPopupCacheKey, $new($StringBuffer, "PopupFactory.heavyWeightPopupCache"_s));
}

PopupFactory$HeavyWeightPopup::PopupFactory$HeavyWeightPopup() {
}

$Class* PopupFactory$HeavyWeightPopup::load$($String* name, bool initialize) {
	$loadClass(PopupFactory$HeavyWeightPopup, name, initialize, &_PopupFactory$HeavyWeightPopup_ClassInfo_, clinit$PopupFactory$HeavyWeightPopup, allocate$PopupFactory$HeavyWeightPopup);
	return class$;
}

$Class* PopupFactory$HeavyWeightPopup::class$ = nullptr;

	} // swing
} // javax