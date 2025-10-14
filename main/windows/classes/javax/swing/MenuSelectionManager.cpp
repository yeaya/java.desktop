#include <javax/swing/MenuSelectionManager.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <java/util/Vector.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef BUTTON2_MASK
#undef BUTTON3_MASK
#undef DEBUG
#undef MENU_SELECTION_MANAGER_KEY
#undef MENU_SELECTION_MANAGER_LISTENER_KEY
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef NOBUTTON
#undef TRACE
#undef VERBOSE

using $EventListenerArray = $Array<::java::util::EventListener>;
using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $Vector = ::java::util::Vector;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $MenuElement = ::javax::swing::MenuElement;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;
using $AppContext = ::sun::awt::AppContext;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$FieldInfo _MenuSelectionManager_FieldInfo_[] = {
	{"selection", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/MenuElement;>;", $PRIVATE, $field(MenuSelectionManager, selection)},
	{"TRACE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuSelectionManager, TRACE)},
	{"VERBOSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuSelectionManager, VERBOSE)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuSelectionManager, DEBUG)},
	{"MENU_SELECTION_MANAGER_KEY", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MenuSelectionManager, MENU_SELECTION_MANAGER_KEY)},
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(MenuSelectionManager, changeEvent)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(MenuSelectionManager, listenerList)},
	{}
};

$MethodInfo _MenuSelectionManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MenuSelectionManager::*)()>(&MenuSelectionManager::init$))},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"clearSelectedPath", "()V", nullptr, $PUBLIC},
	{"componentForPoint", "(Ljava/awt/Component;Ljava/awt/Point;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"defaultManager", "()Ljavax/swing/MenuSelectionManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MenuSelectionManager*(*)()>(&MenuSelectionManager::defaultManager))},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC},
	{"getSelectedPath", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC},
	{"isComponentPartOfCurrentMenu", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"isComponentPartOfCurrentMenu", "(Ljavax/swing/MenuElement;Ljava/awt/Component;)Z", nullptr, $PRIVATE, $method(static_cast<bool(MenuSelectionManager::*)($MenuElement*,$Component*)>(&MenuSelectionManager::isComponentPartOfCurrentMenu))},
	{"printMenuElementArray", "([Ljavax/swing/MenuElement;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuSelectionManager::*)($MenuElementArray*)>(&MenuSelectionManager::printMenuElementArray))},
	{"printMenuElementArray", "([Ljavax/swing/MenuElement;Z)V", nullptr, $PRIVATE, $method(static_cast<void(MenuSelectionManager::*)($MenuElementArray*,bool)>(&MenuSelectionManager::printMenuElementArray))},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"setSelectedPath", "([Ljavax/swing/MenuElement;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MenuSelectionManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.MenuSelectionManager",
	"java.lang.Object",
	nullptr,
	_MenuSelectionManager_FieldInfo_,
	_MenuSelectionManager_MethodInfo_
};

$Object* allocate$MenuSelectionManager($Class* clazz) {
	return $of($alloc(MenuSelectionManager));
}

$StringBuilder* MenuSelectionManager::MENU_SELECTION_MANAGER_KEY = nullptr;

void MenuSelectionManager::init$() {
	$set(this, selection, $new($Vector));
	$set(this, changeEvent, nullptr);
	$set(this, listenerList, $new($EventListenerList));
}

MenuSelectionManager* MenuSelectionManager::defaultManager() {
	$init(MenuSelectionManager);
	$synchronized(MenuSelectionManager::MENU_SELECTION_MANAGER_KEY) {
		$var($AppContext, context, $AppContext::getAppContext());
		$var(MenuSelectionManager, msm, $cast(MenuSelectionManager, $nc(context)->get(MenuSelectionManager::MENU_SELECTION_MANAGER_KEY)));
		if (msm == nullptr) {
			$assign(msm, $new(MenuSelectionManager));
			context->put(MenuSelectionManager::MENU_SELECTION_MANAGER_KEY, msm);
			$init($SwingUtilities2);
			$var($Object, o, context->get($SwingUtilities2::MENU_SELECTION_MANAGER_LISTENER_KEY));
			if (o != nullptr && $instanceOf($ChangeListener, o)) {
				msm->addChangeListener($cast($ChangeListener, o));
			}
		}
		return msm;
	}
}

void MenuSelectionManager::setSelectedPath($MenuElementArray* path$renamed) {
	$var($MenuElementArray, path, path$renamed);
	int32_t i = 0;
	int32_t c = 0;
	int32_t currentSelectionCount = $nc(this->selection)->size();
	int32_t firstDifference = 0;
	if (path == nullptr) {
		$assign(path, $new($MenuElementArray, 0));
	}
	for (i = 0, c = $nc(path)->length; i < c; ++i) {
		if (i < currentSelectionCount && $equals($nc(this->selection)->elementAt(i), path->get(i))) {
			++firstDifference;
		} else {
			break;
		}
	}
	for (i = currentSelectionCount - 1; i >= firstDifference; --i) {
		$var($MenuElement, me, $cast($MenuElement, $nc(this->selection)->elementAt(i)));
		$nc(this->selection)->removeElementAt(i);
		$nc(me)->menuSelectionChanged(false);
	}
	for (i = firstDifference, c = path->length; i < c; ++i) {
		if (path->get(i) != nullptr) {
			$nc(this->selection)->addElement(path->get(i));
			$nc(path->get(i))->menuSelectionChanged(true);
		}
	}
	fireStateChanged();
}

$MenuElementArray* MenuSelectionManager::getSelectedPath() {
	$var($MenuElementArray, res, $new($MenuElementArray, $nc(this->selection)->size()));
	int32_t i = 0;
	int32_t c = 0;
	for (i = 0, c = $nc(this->selection)->size(); i < c; ++i) {
		res->set(i, $cast($MenuElement, $($nc(this->selection)->elementAt(i))));
	}
	return res;
}

void MenuSelectionManager::clearSelectedPath() {
	if ($nc(this->selection)->size() > 0) {
		setSelectedPath(nullptr);
	}
}

void MenuSelectionManager::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void MenuSelectionManager::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* MenuSelectionManager::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void MenuSelectionManager::fireStateChanged() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ChangeListener);
		if ($equals(listeners->get(i), $ChangeListener::class$)) {
			if (this->changeEvent == nullptr) {
				$set(this, changeEvent, $new($ChangeEvent, this));
			}
			$nc(($cast($ChangeListener, listeners->get(i + 1))))->stateChanged(this->changeEvent);
		}
	}
}

void MenuSelectionManager::processMouseEvent($MouseEvent* event) {
	int32_t screenX = 0;
	int32_t screenY = 0;
	$var($Point, p, nullptr);
	int32_t i = 0;
	int32_t c = 0;
	int32_t j = 0;
	int32_t d = 0;
	$var($Component, mc, nullptr);
	$var($Rectangle, r2, nullptr);
	int32_t cWidth = 0;
	int32_t cHeight = 0;
	$var($MenuElement, menuElement, nullptr);
	$var($MenuElementArray, subElements, nullptr);
	$var($MenuElementArray, path, nullptr);
	int32_t selectionSize = 0;
	$assign(p, $nc(event)->getPoint());
	$var($Component, source, event->getComponent());
	if ((source != nullptr) && !source->isShowing()) {
		return;
	}
	int32_t type = event->getID();
	int32_t modifiers = event->getModifiers();
	if ((type == $MouseEvent::MOUSE_ENTERED || type == $MouseEvent::MOUSE_EXITED) && (((int32_t)(modifiers & (uint32_t)(($InputEvent::BUTTON1_MASK | $InputEvent::BUTTON2_MASK) | $InputEvent::BUTTON3_MASK))) != 0)) {
		return;
	}
	if (source != nullptr) {
		$SwingUtilities::convertPointToScreen(p, source);
	}
	screenX = $nc(p)->x;
	screenY = p->y;
	$var($Vector, tmp, $cast($Vector, $nc(this->selection)->clone()));
	selectionSize = $nc(tmp)->size();
	bool success = false;
	for (i = selectionSize - 1; i >= 0 && success == false; --i) {
		$assign(menuElement, $cast($MenuElement, tmp->elementAt(i)));
		$assign(subElements, $nc(menuElement)->getSubElements());
		$assign(path, nullptr);
		for (j = 0, d = $nc(subElements)->length; j < d && success == false; ++j) {
			if (subElements->get(j) == nullptr) {
				continue;
			}
			$assign(mc, $nc(subElements->get(j))->getComponent());
			if (!$nc(mc)->isShowing()) {
				continue;
			}
			if ($instanceOf($JComponent, mc)) {
				cWidth = $nc(mc)->getWidth();
				cHeight = mc->getHeight();
			} else {
				$assign(r2, $nc(mc)->getBounds());
				cWidth = $nc(r2)->width;
				cHeight = r2->height;
			}
			p->x = screenX;
			p->y = screenY;
			$SwingUtilities::convertPointFromScreen(p, mc);
			if (p->x >= 0 && p->x < cWidth && p->y >= 0 && p->y < cHeight) {
				int32_t k = 0;
				if (path == nullptr) {
					$assign(path, $new($MenuElementArray, i + 2));
					for (k = 0; k <= i; ++k) {
						path->set(k, $cast($MenuElement, $(tmp->elementAt(k))));
					}
				}
				$nc(path)->set(i + 1, subElements->get(j));
				$var($MenuElementArray, currentSelection, getSelectedPath());
				if ($nc(currentSelection)->get(currentSelection->length - 1) != path->get(i + 1) && (currentSelection->length < 2 || $nc(currentSelection)->get(currentSelection->length - 2) != path->get(i + 1))) {
					$var($Component, oldMC, $nc(currentSelection->get(currentSelection->length - 1))->getComponent());
					$var($Component, var$0, oldMC);
					int64_t var$1 = event->getWhen();
					int32_t var$2 = event->getModifiers();
					int32_t var$3 = p->x;
					int32_t var$4 = p->y;
					int32_t var$5 = event->getXOnScreen();
					int32_t var$6 = event->getYOnScreen();
					int32_t var$7 = event->getClickCount();
					$var($MouseEvent, exitEvent, $new($MouseEvent, var$0, $MouseEvent::MOUSE_EXITED, var$1, var$2, var$3, var$4, var$5, var$6, var$7, event->isPopupTrigger(), $MouseEvent::NOBUTTON));
					$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
					$nc(meAccessor)->setCausedByTouchEvent(exitEvent, meAccessor->isCausedByTouchEvent(event));
					$nc(currentSelection->get(currentSelection->length - 1))->processMouseEvent(exitEvent, path, this);
					$var($Component, var$8, mc);
					int64_t var$9 = event->getWhen();
					int32_t var$10 = event->getModifiers();
					int32_t var$11 = p->x;
					int32_t var$12 = p->y;
					int32_t var$13 = event->getXOnScreen();
					int32_t var$14 = event->getYOnScreen();
					int32_t var$15 = event->getClickCount();
					$var($MouseEvent, enterEvent, $new($MouseEvent, var$8, $MouseEvent::MOUSE_ENTERED, var$9, var$10, var$11, var$12, var$13, var$14, var$15, event->isPopupTrigger(), $MouseEvent::NOBUTTON));
					meAccessor->setCausedByTouchEvent(enterEvent, meAccessor->isCausedByTouchEvent(event));
					$nc(subElements->get(j))->processMouseEvent(enterEvent, path, this);
				}
				$var($Component, var$16, mc);
				int32_t var$17 = event->getID();
				int64_t var$18 = event->getWhen();
				int32_t var$19 = event->getModifiers();
				int32_t var$20 = p->x;
				int32_t var$21 = p->y;
				int32_t var$22 = event->getXOnScreen();
				int32_t var$23 = event->getYOnScreen();
				int32_t var$24 = event->getClickCount();
				$var($MouseEvent, mouseEvent, $new($MouseEvent, var$16, var$17, var$18, var$19, var$20, var$21, var$22, var$23, var$24, event->isPopupTrigger(), $MouseEvent::NOBUTTON));
				$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
				$nc(meAccessor)->setCausedByTouchEvent(mouseEvent, meAccessor->isCausedByTouchEvent(event));
				$nc(subElements->get(j))->processMouseEvent(mouseEvent, path, this);
				success = true;
				event->consume();
			}
		}
	}
}

void MenuSelectionManager::printMenuElementArray($MenuElementArray* path) {
	printMenuElementArray(path, false);
}

void MenuSelectionManager::printMenuElementArray($MenuElementArray* path, bool dumpStack) {
	$init($System);
	$nc($System::out)->println("Path is("_s);
	int32_t i = 0;
	int32_t j = 0;
	for (i = 0, j = $nc(path)->length; i < j; ++i) {
		for (int32_t k = 0; k <= i; ++k) {
			$nc($System::out)->print("  "_s);
		}
		$var($MenuElement, me, path->get(i));
		if ($instanceOf($JMenuItem, me)) {
			$nc($System::out)->println($$str({$($nc(($cast($JMenuItem, me)))->getText()), ", "_s}));
		} else if ($instanceOf($JMenuBar, me)) {
			$nc($System::out)->println("JMenuBar, "_s);
		} else if ($instanceOf($JPopupMenu, me)) {
			$nc($System::out)->println("JPopupMenu, "_s);
		} else if (me == nullptr) {
			$nc($System::out)->println("NULL , "_s);
		} else {
			$nc($System::out)->println($$str({""_s, me, ", "_s}));
		}
	}
	$nc($System::out)->println(")"_s);
	if (dumpStack == true) {
		$Thread::dumpStack();
	}
}

$Component* MenuSelectionManager::componentForPoint($Component* source, $Point* sourcePoint) {
	int32_t screenX = 0;
	int32_t screenY = 0;
	$var($Point, p, sourcePoint);
	int32_t i = 0;
	int32_t c = 0;
	int32_t j = 0;
	int32_t d = 0;
	$var($Component, mc, nullptr);
	$var($Rectangle, r2, nullptr);
	int32_t cWidth = 0;
	int32_t cHeight = 0;
	$var($MenuElement, menuElement, nullptr);
	$var($MenuElementArray, subElements, nullptr);
	int32_t selectionSize = 0;
	$SwingUtilities::convertPointToScreen(p, source);
	screenX = $nc(p)->x;
	screenY = p->y;
	$var($Vector, tmp, $cast($Vector, $nc(this->selection)->clone()));
	selectionSize = $nc(tmp)->size();
	for (i = selectionSize - 1; i >= 0; --i) {
		$assign(menuElement, $cast($MenuElement, tmp->elementAt(i)));
		$assign(subElements, $nc(menuElement)->getSubElements());
		for (j = 0, d = $nc(subElements)->length; j < d; ++j) {
			if (subElements->get(j) == nullptr) {
				continue;
			}
			$assign(mc, $nc(subElements->get(j))->getComponent());
			if (!$nc(mc)->isShowing()) {
				continue;
			}
			if ($instanceOf($JComponent, mc)) {
				cWidth = $nc(mc)->getWidth();
				cHeight = mc->getHeight();
			} else {
				$assign(r2, $nc(mc)->getBounds());
				cWidth = $nc(r2)->width;
				cHeight = r2->height;
			}
			p->x = screenX;
			p->y = screenY;
			$SwingUtilities::convertPointFromScreen(p, mc);
			if (p->x >= 0 && p->x < cWidth && p->y >= 0 && p->y < cHeight) {
				return mc;
			}
		}
	}
	return nullptr;
}

void MenuSelectionManager::processKeyEvent($KeyEvent* e) {
	$var($MenuElementArray, sel2, $new($MenuElementArray, 0));
	$assign(sel2, $fcast($MenuElementArray, $nc(this->selection)->toArray(sel2)));
	int32_t selSize = $nc(sel2)->length;
	$var($MenuElementArray, path, nullptr);
	if (selSize < 1) {
		return;
	}
	for (int32_t i = selSize - 1; i >= 0; --i) {
		$var($MenuElement, elem, sel2->get(i));
		$var($MenuElementArray, subs, $nc(elem)->getSubElements());
		$assign(path, nullptr);
		for (int32_t j = 0; j < $nc(subs)->length; ++j) {
			bool var$0 = subs->get(j) == nullptr || !$nc($($nc(subs->get(j))->getComponent()))->isShowing();
			if (var$0 || !$nc($($nc(subs->get(j))->getComponent()))->isEnabled()) {
				continue;
			}
			if (path == nullptr) {
				$assign(path, $new($MenuElementArray, i + 2));
				$System::arraycopy(sel2, 0, path, 0, i + 1);
			}
			path->set(i + 1, subs->get(j));
			$nc(subs->get(j))->processKeyEvent(e, path, this);
			if ($nc(e)->isConsumed()) {
				return;
			}
		}
	}
	$assign(path, $new($MenuElementArray, 1));
	path->set(0, sel2->get(0));
	$nc(path->get(0))->processKeyEvent(e, path, this);
	if ($nc(e)->isConsumed()) {
		return;
	}
}

bool MenuSelectionManager::isComponentPartOfCurrentMenu($Component* c) {
	if ($nc(this->selection)->size() > 0) {
		$var($MenuElement, me, $cast($MenuElement, $nc(this->selection)->elementAt(0)));
		return isComponentPartOfCurrentMenu(me, c);
	} else {
		return false;
	}
}

bool MenuSelectionManager::isComponentPartOfCurrentMenu($MenuElement* root, $Component* c) {
	$var($MenuElementArray, children, nullptr);
	int32_t i = 0;
	int32_t d = 0;
	if (root == nullptr) {
		return false;
	}
	if ($nc(root)->getComponent() == c) {
		return true;
	} else {
		$assign(children, root->getSubElements());
		for (i = 0, d = $nc(children)->length; i < d; ++i) {
			if (isComponentPartOfCurrentMenu(children->get(i), c)) {
				return true;
			}
		}
	}
	return false;
}

void clinit$MenuSelectionManager($Class* class$) {
	$assignStatic(MenuSelectionManager::MENU_SELECTION_MANAGER_KEY, $new($StringBuilder, "javax.swing.MenuSelectionManager"_s));
}

MenuSelectionManager::MenuSelectionManager() {
}

$Class* MenuSelectionManager::load$($String* name, bool initialize) {
	$loadClass(MenuSelectionManager, name, initialize, &_MenuSelectionManager_ClassInfo_, clinit$MenuSelectionManager, allocate$MenuSelectionManager);
	return class$;
}

$Class* MenuSelectionManager::class$ = nullptr;

	} // swing
} // javax