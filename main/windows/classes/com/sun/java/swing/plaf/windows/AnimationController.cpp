#include <com/sun/java/swing/plaf/windows/AnimationController.h>

#include <com/sun/java/swing/plaf/windows/AnimationController$1.h>
#include <com/sun/java/swing/plaf/windows/AnimationController$AnimationState.h>
#include <com/sun/java/swing/plaf/windows/AnimationController$PartUIClientPropertyKey.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/EnumMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <sun/awt/AppContext.h>
#include <sun/security/action/GetBooleanAction.h>
#include <jcpp.h>

#undef ANIMATION_CONTROLLER_KEY
#undef DEFAULTED
#undef HOT
#undef TP_BUTTON
#undef TRANSITIONDURATIONS
#undef UPDISABLED
#undef UPHOT
#undef UPNORMAL
#undef UPPRESSED
#undef VISTA_ANIMATION_DISABLED

using $AnimationController$1 = ::com::sun::java::swing::plaf::windows::AnimationController$1;
using $AnimationController$AnimationState = ::com::sun::java::swing::plaf::windows::AnimationController$AnimationState;
using $AnimationController$PartUIClientPropertyKey = ::com::sun::java::swing::plaf::windows::AnimationController$PartUIClientPropertyKey;
using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $EnumMap = ::java::util::EnumMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;
using $AppContext = ::sun::awt::AppContext;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _AnimationController_FieldInfo_[] = {
	{"VISTA_ANIMATION_DISABLED", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AnimationController, VISTA_ANIMATION_DISABLED)},
	{"ANIMATION_CONTROLLER_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AnimationController, ANIMATION_CONTROLLER_KEY)},
	{"animationStateMap", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/swing/JComponent;Ljava/util/Map<Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/AnimationController$AnimationState;>;>;", $PRIVATE | $FINAL, $field(AnimationController, animationStateMap)},
	{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE | $FINAL, $field(AnimationController, timer)},
	{}
};

$MethodInfo _AnimationController_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AnimationController::*)()>(&AnimationController::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"dispose", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(AnimationController::*)()>(&AnimationController::dispose))},
	{"getAnimationController", "()Lcom/sun/java/swing/plaf/windows/AnimationController;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<AnimationController*(*)()>(&AnimationController::getAnimationController))},
	{"getState", "(Ljavax/swing/JComponent;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$TMSchema$State*(AnimationController::*)($JComponent*,$TMSchema$Part*)>(&AnimationController::getState))},
	{"normalizeState", "(Lcom/sun/java/swing/plaf/windows/TMSchema$State;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$TMSchema$State*(*)($TMSchema$State*)>(&AnimationController::normalizeState))},
	{"paintSkin", "(Ljavax/swing/JComponent;Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;Ljava/awt/Graphics;IIIILcom/sun/java/swing/plaf/windows/TMSchema$State;)V", nullptr, $STATIC, $method(static_cast<void(*)($JComponent*,$XPStyle$Skin*,$Graphics*,int32_t,int32_t,int32_t,int32_t,$TMSchema$State*)>(&AnimationController::paintSkin))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"putState", "(Ljavax/swing/JComponent;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(AnimationController::*)($JComponent*,$TMSchema$Part*,$TMSchema$State*)>(&AnimationController::putState))},
	{"startAnimation", "(Ljavax/swing/JComponent;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$State;J)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(AnimationController::*)($JComponent*,$TMSchema$Part*,$TMSchema$State*,$TMSchema$State*,int64_t)>(&AnimationController::startAnimation))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"triggerAnimation", "(Ljavax/swing/JComponent;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JComponent*,$TMSchema$Part*,$TMSchema$State*)>(&AnimationController::triggerAnimation))},
	{}
};

$InnerClassInfo _AnimationController_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.AnimationController$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.java.swing.plaf.windows.AnimationController$PartUIClientPropertyKey", "com.sun.java.swing.plaf.windows.AnimationController", "PartUIClientPropertyKey", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.AnimationController$AnimationState", "com.sun.java.swing.plaf.windows.AnimationController", "AnimationState", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AnimationController_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.AnimationController",
	"java.lang.Object",
	"java.awt.event.ActionListener,java.beans.PropertyChangeListener",
	_AnimationController_FieldInfo_,
	_AnimationController_MethodInfo_,
	nullptr,
	nullptr,
	_AnimationController_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.AnimationController$1,com.sun.java.swing.plaf.windows.AnimationController$PartUIClientPropertyKey,com.sun.java.swing.plaf.windows.AnimationController$AnimationState"
};

$Object* allocate$AnimationController($Class* clazz) {
	return $of($alloc(AnimationController));
}

int32_t AnimationController::hashCode() {
	 return this->$ActionListener::hashCode();
}

bool AnimationController::equals(Object$* arg0) {
	 return this->$ActionListener::equals(arg0);
}

$Object* AnimationController::clone() {
	 return this->$ActionListener::clone();
}

$String* AnimationController::toString() {
	 return this->$ActionListener::toString();
}

void AnimationController::finalize() {
	this->$ActionListener::finalize();
}

bool AnimationController::VISTA_ANIMATION_DISABLED = false;
$Object* AnimationController::ANIMATION_CONTROLLER_KEY = nullptr;

AnimationController* AnimationController::getAnimationController() {
	$load(AnimationController);
	$synchronized(class$) {
		$init(AnimationController);
		$useLocalCurrentObjectStackCache();
		$var($AppContext, appContext, $AppContext::getAppContext());
		$var($Object, obj, $nc(appContext)->get(AnimationController::ANIMATION_CONTROLLER_KEY));
		if (obj == nullptr) {
			$assign(obj, $new(AnimationController));
			appContext->put(AnimationController::ANIMATION_CONTROLLER_KEY, obj);
		}
		return $cast(AnimationController, obj);
	}
}

void AnimationController::init$() {
	$set(this, animationStateMap, $new($WeakHashMap));
	$set(this, timer, $new($Timer, 1000 / 30, this));
	$nc(this->timer)->setRepeats(true);
	$nc(this->timer)->setCoalesce(true);
	$UIManager::addPropertyChangeListener(this);
}

void AnimationController::triggerAnimation($JComponent* c, $TMSchema$Part* part, $TMSchema$State* newState) {
	$init(AnimationController);
	$useLocalCurrentObjectStackCache();
	$init($TMSchema$Part);
	if ($instanceOf($JTabbedPane, c) || part == $TMSchema$Part::TP_BUTTON) {
		return;
	}
	$var(AnimationController, controller, AnimationController::getAnimationController());
	$TMSchema$State* oldState = $nc(controller)->getState(c, part);
	if (oldState != newState) {
		controller->putState(c, part, newState);
		$init($TMSchema$State);
		if (newState == $TMSchema$State::DEFAULTED) {
			oldState = $TMSchema$State::HOT;
		}
		if (oldState != nullptr) {
			int64_t duration = 0;
			if (newState == $TMSchema$State::DEFAULTED) {
				duration = 1000;
			} else {
				$var($XPStyle, xp, $XPStyle::getXP());
				int64_t var$0 = 0;
				if (xp != nullptr) {
					$var($Component, var$1, static_cast<$Component*>(c));
					$var($TMSchema$Part, var$2, part);
					$var($TMSchema$State, var$3, normalizeState(oldState));
					$init($TMSchema$Prop);
					var$0 = xp->getThemeTransitionDuration(var$1, var$2, var$3, $(normalizeState(newState)), $TMSchema$Prop::TRANSITIONDURATIONS);
				} else {
					var$0 = 1000;
				}
				duration = var$0;
			}
			controller->startAnimation(c, part, oldState, newState, duration);
		}
	}
}

$TMSchema$State* AnimationController::normalizeState($TMSchema$State* state) {
	$init(AnimationController);
	$TMSchema$State* rv = nullptr;
	$init($AnimationController$1);
	switch ($nc($AnimationController$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->get($nc((state))->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{
			$init($TMSchema$State);
			rv = $TMSchema$State::UPPRESSED;
			break;
		}
	case 4:
		{}
	case 5:
		{}
	case 6:
		{
			$init($TMSchema$State);
			rv = $TMSchema$State::UPDISABLED;
			break;
		}
	case 7:
		{}
	case 8:
		{}
	case 9:
		{
			$init($TMSchema$State);
			rv = $TMSchema$State::UPHOT;
			break;
		}
	case 10:
		{}
	case 11:
		{}
	case 12:
		{
			$init($TMSchema$State);
			rv = $TMSchema$State::UPNORMAL;
			break;
		}
	default:
		{
			rv = state;
			break;
		}
	}
	return rv;
}

$TMSchema$State* AnimationController::getState($JComponent* component, $TMSchema$Part* part) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$TMSchema$State* rv = nullptr;
		$var($Object, tmpObject, $nc(component)->getClientProperty($($AnimationController$PartUIClientPropertyKey::getKey(part))));
		if ($instanceOf($TMSchema$State, tmpObject)) {
			rv = $cast($TMSchema$State, tmpObject);
		}
		return rv;
	}
}

void AnimationController::putState($JComponent* component, $TMSchema$Part* part, $TMSchema$State* state) {
	$synchronized(this) {
		$nc(component)->putClientProperty($($AnimationController$PartUIClientPropertyKey::getKey(part)), state);
	}
}

void AnimationController::startAnimation($JComponent* component, $TMSchema$Part* part, $TMSchema$State* startState, $TMSchema$State* endState, int64_t millis) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		bool isForwardAndReverse = false;
		$init($TMSchema$State);
		if (endState == $TMSchema$State::DEFAULTED) {
			isForwardAndReverse = true;
		}
		$var($Map, map, $cast($Map, $nc(this->animationStateMap)->get(component)));
		if (millis <= 0) {
			if (map != nullptr) {
				map->remove(part);
				if (map->size() == 0) {
					$nc(this->animationStateMap)->remove(component);
				}
			}
			return;
		}
		if (map == nullptr) {
			$load($TMSchema$Part);
			$assign(map, $new($EnumMap, $TMSchema$Part::class$));
			$nc(this->animationStateMap)->put(component, map);
		}
		$nc(map)->put(part, $$new($AnimationController$AnimationState, startState, millis, isForwardAndReverse));
		if (!$nc(this->timer)->isRunning()) {
			$nc(this->timer)->start();
		}
	}
}

void AnimationController::paintSkin($JComponent* component, $XPStyle$Skin* skin, $Graphics* g, int32_t dx, int32_t dy, int32_t dw, int32_t dh, $TMSchema$State* state) {
	$init(AnimationController);
	$useLocalCurrentObjectStackCache();
	if (AnimationController::VISTA_ANIMATION_DISABLED) {
		$nc(skin)->paintSkinRaw(g, dx, dy, dw, dh, state);
		return;
	}
	triggerAnimation(component, $nc(skin)->part, state);
	$var(AnimationController, controller, getAnimationController());
	$synchronized(controller) {
		$var($AnimationController$AnimationState, animationState, nullptr);
		$var($Map, map, $cast($Map, $nc($nc(controller)->animationStateMap)->get(component)));
		if (map != nullptr) {
			$assign(animationState, $cast($AnimationController$AnimationState, map->get($nc(skin)->part)));
		}
		if (animationState != nullptr) {
			animationState->paintSkin(skin, g, dx, dy, dw, dh, state);
		} else {
			$nc(skin)->paintSkinRaw(g, dx, dy, dw, dh, state);
		}
	}
}

void AnimationController::propertyChange($PropertyChangeEvent* e) {
	$synchronized(this) {
		bool var$0 = "lookAndFeel"_s == $nc(e)->getPropertyName();
		if (var$0 && !($instanceOf($WindowsLookAndFeel, $(e->getNewValue())))) {
			dispose();
		}
	}
}

void AnimationController::actionPerformed($ActionEvent* e) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($List, componentsToRemove, nullptr);
		$var($List, partsToRemove, nullptr);
		{
			$var($Iterator, i$, $nc($($nc(this->animationStateMap)->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JComponent, component, $cast($JComponent, i$->next()));
				{
					$nc(component)->repaint();
					if (partsToRemove != nullptr) {
						partsToRemove->clear();
					}
					$var($Map, map, $cast($Map, $nc(this->animationStateMap)->get(component)));
					bool var$0 = !component->isShowing() || map == nullptr;
					if (var$0 || $nc(map)->size() == 0) {
						if (componentsToRemove == nullptr) {
							$assign(componentsToRemove, $new($ArrayList));
						}
						$nc(componentsToRemove)->add(component);
						continue;
					}
					{
						$var($Iterator, i$, $nc($($nc(map)->keySet()))->iterator());
						for (; $nc(i$)->hasNext();) {
							$TMSchema$Part* part = $cast($TMSchema$Part, i$->next());
							{
								if ($nc(($cast($AnimationController$AnimationState, $(map->get(part)))))->isDone()) {
									if (partsToRemove == nullptr) {
										$assign(partsToRemove, $new($ArrayList));
									}
									$nc(partsToRemove)->add(part);
								}
							}
						}
					}
					if (partsToRemove != nullptr) {
						int32_t var$1 = partsToRemove->size();
						if (var$1 == map->size()) {
							if (componentsToRemove == nullptr) {
								$assign(componentsToRemove, $new($ArrayList));
							}
							$nc(componentsToRemove)->add(component);
						} else {
							{
								$var($Iterator, i$, partsToRemove->iterator());
								for (; $nc(i$)->hasNext();) {
									$TMSchema$Part* part = $cast($TMSchema$Part, i$->next());
									{
										map->remove(part);
									}
								}
							}
						}
					}
				}
			}
		}
		if (componentsToRemove != nullptr) {
			{
				$var($Iterator, i$, componentsToRemove->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JComponent, component, $cast($JComponent, i$->next()));
					{
						$nc(this->animationStateMap)->remove(component);
					}
				}
			}
		}
		if ($nc(this->animationStateMap)->size() == 0) {
			$nc(this->timer)->stop();
		}
	}
}

void AnimationController::dispose() {
	$synchronized(this) {
		$nc(this->timer)->stop();
		$UIManager::removePropertyChangeListener(this);
		$synchronized(AnimationController::class$) {
			$nc($($AppContext::getAppContext()))->put(AnimationController::ANIMATION_CONTROLLER_KEY, nullptr);
		}
	}
}

void clinit$AnimationController($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	AnimationController::VISTA_ANIMATION_DISABLED = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "swing.disablevistaanimation"_s)))))))->booleanValue();
	$assignStatic(AnimationController::ANIMATION_CONTROLLER_KEY, $new($StringBuilder, "ANIMATION_CONTROLLER_KEY"_s));
}

AnimationController::AnimationController() {
}

$Class* AnimationController::load$($String* name, bool initialize) {
	$loadClass(AnimationController, name, initialize, &_AnimationController_ClassInfo_, clinit$AnimationController, allocate$AnimationController);
	return class$;
}

$Class* AnimationController::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com