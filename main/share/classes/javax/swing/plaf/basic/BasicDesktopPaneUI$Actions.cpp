#include <javax/swing/plaf/basic/BasicDesktopPaneUI$Actions.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/event/ActionEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/SortingFocusTraversalPolicy.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef CLOSE
#undef DOWN
#undef ESCAPE
#undef LEFT
#undef MAXIMIZE
#undef MINIMIZE
#undef MOVE
#undef MOVE_RESIZE_INCREMENT
#undef NAVIGATE_NEXT
#undef NAVIGATE_PREVIOUS
#undef NEXT_FRAME
#undef PREVIOUS_FRAME
#undef RESIZE
#undef RESTORE
#undef RIGHT
#undef SHRINK_DOWN
#undef SHRINK_LEFT
#undef SHRINK_RIGHT
#undef SHRINK_UP
#undef UP

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $SortingFocusTraversalPolicy = ::javax::swing::SortingFocusTraversalPolicy;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicDesktopPaneUI$Actions_FieldInfo_[] = {
	{"CLOSE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, CLOSE)},
	{"ESCAPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, ESCAPE)},
	{"MAXIMIZE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, MAXIMIZE)},
	{"MINIMIZE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, MINIMIZE)},
	{"MOVE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, MOVE)},
	{"RESIZE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, RESIZE)},
	{"RESTORE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, RESTORE)},
	{"LEFT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, LEFT)},
	{"RIGHT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, RIGHT)},
	{"UP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, UP)},
	{"DOWN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, DOWN)},
	{"SHRINK_LEFT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, SHRINK_LEFT)},
	{"SHRINK_RIGHT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, SHRINK_RIGHT)},
	{"SHRINK_UP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, SHRINK_UP)},
	{"SHRINK_DOWN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, SHRINK_DOWN)},
	{"NEXT_FRAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, NEXT_FRAME)},
	{"PREVIOUS_FRAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, PREVIOUS_FRAME)},
	{"NAVIGATE_NEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, NAVIGATE_NEXT)},
	{"NAVIGATE_PREVIOUS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, NAVIGATE_PREVIOUS)},
	{"MOVE_RESIZE_INCREMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicDesktopPaneUI$Actions, MOVE_RESIZE_INCREMENT)},
	{"moving", "Z", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, moving)},
	{"resizing", "Z", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, resizing)},
	{"sourceFrame", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, sourceFrame)},
	{"focusOwner", "Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $staticField(BasicDesktopPaneUI$Actions, focusOwner)},
	{}
};

$MethodInfo _BasicDesktopPaneUI$Actions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicDesktopPaneUI$Actions::*)()>(&BasicDesktopPaneUI$Actions::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicDesktopPaneUI$Actions::*)($String*)>(&BasicDesktopPaneUI$Actions::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"setState", "(Ljavax/swing/JDesktopPane;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicDesktopPaneUI$Actions::*)($JDesktopPane*,$String*)>(&BasicDesktopPaneUI$Actions::setState))},
	{}
};

$InnerClassInfo _BasicDesktopPaneUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$Actions", "javax.swing.plaf.basic.BasicDesktopPaneUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicDesktopPaneUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicDesktopPaneUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicDesktopPaneUI$Actions_FieldInfo_,
	_BasicDesktopPaneUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDesktopPaneUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDesktopPaneUI"
};

$Object* allocate$BasicDesktopPaneUI$Actions($Class* clazz) {
	return $of($alloc(BasicDesktopPaneUI$Actions));
}

$String* BasicDesktopPaneUI$Actions::CLOSE = nullptr;
$String* BasicDesktopPaneUI$Actions::ESCAPE = nullptr;
$String* BasicDesktopPaneUI$Actions::MAXIMIZE = nullptr;
$String* BasicDesktopPaneUI$Actions::MINIMIZE = nullptr;
$String* BasicDesktopPaneUI$Actions::MOVE = nullptr;
$String* BasicDesktopPaneUI$Actions::RESIZE = nullptr;
$String* BasicDesktopPaneUI$Actions::RESTORE = nullptr;
$String* BasicDesktopPaneUI$Actions::LEFT = nullptr;
$String* BasicDesktopPaneUI$Actions::RIGHT = nullptr;
$String* BasicDesktopPaneUI$Actions::UP = nullptr;
$String* BasicDesktopPaneUI$Actions::DOWN = nullptr;
$String* BasicDesktopPaneUI$Actions::SHRINK_LEFT = nullptr;
$String* BasicDesktopPaneUI$Actions::SHRINK_RIGHT = nullptr;
$String* BasicDesktopPaneUI$Actions::SHRINK_UP = nullptr;
$String* BasicDesktopPaneUI$Actions::SHRINK_DOWN = nullptr;
$String* BasicDesktopPaneUI$Actions::NEXT_FRAME = nullptr;
$String* BasicDesktopPaneUI$Actions::PREVIOUS_FRAME = nullptr;
$String* BasicDesktopPaneUI$Actions::NAVIGATE_NEXT = nullptr;
$String* BasicDesktopPaneUI$Actions::NAVIGATE_PREVIOUS = nullptr;
bool BasicDesktopPaneUI$Actions::moving = false;
bool BasicDesktopPaneUI$Actions::resizing = false;
$JInternalFrame* BasicDesktopPaneUI$Actions::sourceFrame = nullptr;
$Component* BasicDesktopPaneUI$Actions::focusOwner = nullptr;

void BasicDesktopPaneUI$Actions::init$() {
	$UIAction::init$(nullptr);
}

void BasicDesktopPaneUI$Actions::init$($String* name) {
	$UIAction::init$(name);
}

void BasicDesktopPaneUI$Actions::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JDesktopPane, dp, $cast($JDesktopPane, $nc(e)->getSource()));
	$var($String, key, getName());
	if (BasicDesktopPaneUI$Actions::CLOSE == key || BasicDesktopPaneUI$Actions::MAXIMIZE == key || BasicDesktopPaneUI$Actions::MINIMIZE == key || BasicDesktopPaneUI$Actions::RESTORE == key) {
		setState(dp, key);
	} else if (BasicDesktopPaneUI$Actions::ESCAPE == key) {
		if (BasicDesktopPaneUI$Actions::sourceFrame == $nc(dp)->getSelectedFrame() && BasicDesktopPaneUI$Actions::focusOwner != nullptr) {
			$nc(BasicDesktopPaneUI$Actions::focusOwner)->requestFocus();
		}
		BasicDesktopPaneUI$Actions::moving = false;
		BasicDesktopPaneUI$Actions::resizing = false;
		$assignStatic(BasicDesktopPaneUI$Actions::sourceFrame, nullptr);
		$assignStatic(BasicDesktopPaneUI$Actions::focusOwner, nullptr);
	} else if (BasicDesktopPaneUI$Actions::MOVE == key || BasicDesktopPaneUI$Actions::RESIZE == key) {
		$assignStatic(BasicDesktopPaneUI$Actions::sourceFrame, $nc(dp)->getSelectedFrame());
		if (BasicDesktopPaneUI$Actions::sourceFrame == nullptr) {
			return;
		}
		BasicDesktopPaneUI$Actions::moving = (key == BasicDesktopPaneUI$Actions::MOVE) ? true : false;
		BasicDesktopPaneUI$Actions::resizing = (key == BasicDesktopPaneUI$Actions::RESIZE) ? true : false;
		$assignStatic(BasicDesktopPaneUI$Actions::focusOwner, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
		if (!$SwingUtilities::isDescendingFrom(BasicDesktopPaneUI$Actions::focusOwner, BasicDesktopPaneUI$Actions::sourceFrame)) {
			$assignStatic(BasicDesktopPaneUI$Actions::focusOwner, nullptr);
		}
		$nc(BasicDesktopPaneUI$Actions::sourceFrame)->requestFocus();
	} else if (BasicDesktopPaneUI$Actions::LEFT == key || BasicDesktopPaneUI$Actions::RIGHT == key || BasicDesktopPaneUI$Actions::UP == key || BasicDesktopPaneUI$Actions::DOWN == key || BasicDesktopPaneUI$Actions::SHRINK_RIGHT == key || BasicDesktopPaneUI$Actions::SHRINK_LEFT == key || BasicDesktopPaneUI$Actions::SHRINK_UP == key || BasicDesktopPaneUI$Actions::SHRINK_DOWN == key) {
		$var($JInternalFrame, c, $nc(dp)->getSelectedFrame());
		if (BasicDesktopPaneUI$Actions::sourceFrame == nullptr || c != BasicDesktopPaneUI$Actions::sourceFrame || !$equals($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner(), BasicDesktopPaneUI$Actions::sourceFrame)) {
			return;
		}
		$var($Insets, minOnScreenInsets, $UIManager::getInsets("Desktop.minOnScreenInsets"_s));
		$var($Dimension, size, $nc(c)->getSize());
		$var($Dimension, minSize, c->getMinimumSize());
		int32_t dpWidth = dp->getWidth();
		int32_t dpHeight = dp->getHeight();
		int32_t delta = 0;
		$var($Point, loc, c->getLocation());
		if (BasicDesktopPaneUI$Actions::LEFT == key) {
			if (BasicDesktopPaneUI$Actions::moving) {
				c->setLocation($nc(loc)->x + $nc(size)->width - this->MOVE_RESIZE_INCREMENT < $nc(minOnScreenInsets)->right ? -$nc(size)->width + $nc(minOnScreenInsets)->right : $nc(loc)->x - this->MOVE_RESIZE_INCREMENT, loc->y);
			} else if (BasicDesktopPaneUI$Actions::resizing) {
				c->setLocation($nc(loc)->x - this->MOVE_RESIZE_INCREMENT, loc->y);
				c->setSize($nc(size)->width + this->MOVE_RESIZE_INCREMENT, size->height);
			}
		} else if (BasicDesktopPaneUI$Actions::RIGHT == key) {
			if (BasicDesktopPaneUI$Actions::moving) {
				c->setLocation($nc(loc)->x + this->MOVE_RESIZE_INCREMENT > dpWidth - $nc(minOnScreenInsets)->left ? dpWidth - $nc(minOnScreenInsets)->left : $nc(loc)->x + this->MOVE_RESIZE_INCREMENT, loc->y);
			} else if (BasicDesktopPaneUI$Actions::resizing) {
				c->setSize($nc(size)->width + this->MOVE_RESIZE_INCREMENT, size->height);
			}
		} else if (BasicDesktopPaneUI$Actions::UP == key) {
			if (BasicDesktopPaneUI$Actions::moving) {
				c->setLocation($nc(loc)->x, loc->y + $nc(size)->height - this->MOVE_RESIZE_INCREMENT < $nc(minOnScreenInsets)->bottom ? -$nc(size)->height + $nc(minOnScreenInsets)->bottom : loc->y - this->MOVE_RESIZE_INCREMENT);
			} else if (BasicDesktopPaneUI$Actions::resizing) {
				c->setLocation($nc(loc)->x, loc->y - this->MOVE_RESIZE_INCREMENT);
				c->setSize($nc(size)->width, size->height + this->MOVE_RESIZE_INCREMENT);
			}
		} else if (BasicDesktopPaneUI$Actions::DOWN == key) {
			if (BasicDesktopPaneUI$Actions::moving) {
				c->setLocation($nc(loc)->x, loc->y + this->MOVE_RESIZE_INCREMENT > dpHeight - $nc(minOnScreenInsets)->top ? dpHeight - $nc(minOnScreenInsets)->top : loc->y + this->MOVE_RESIZE_INCREMENT);
			} else if (BasicDesktopPaneUI$Actions::resizing) {
				c->setSize($nc(size)->width, size->height + this->MOVE_RESIZE_INCREMENT);
			}
		} else if (BasicDesktopPaneUI$Actions::SHRINK_LEFT == key && BasicDesktopPaneUI$Actions::resizing) {
			if ($nc(minSize)->width < ($nc(size)->width - this->MOVE_RESIZE_INCREMENT)) {
				delta = this->MOVE_RESIZE_INCREMENT;
			} else {
				delta = size->width - minSize->width;
			}
			if ($nc(loc)->x + $nc(size)->width - delta < $nc(minOnScreenInsets)->left) {
				delta = loc->x + size->width - minOnScreenInsets->left;
			}
			c->setSize($nc(size)->width - delta, size->height);
		} else if (BasicDesktopPaneUI$Actions::SHRINK_RIGHT == key && BasicDesktopPaneUI$Actions::resizing) {
			if ($nc(minSize)->width < ($nc(size)->width - this->MOVE_RESIZE_INCREMENT)) {
				delta = this->MOVE_RESIZE_INCREMENT;
			} else {
				delta = size->width - minSize->width;
			}
			if ($nc(loc)->x + delta > dpWidth - $nc(minOnScreenInsets)->right) {
				delta = (dpWidth - minOnScreenInsets->right) - loc->x;
			}
			c->setLocation($nc(loc)->x + delta, loc->y);
			c->setSize($nc(size)->width - delta, size->height);
		} else if (BasicDesktopPaneUI$Actions::SHRINK_UP == key && BasicDesktopPaneUI$Actions::resizing) {
			if ($nc(minSize)->height < ($nc(size)->height - this->MOVE_RESIZE_INCREMENT)) {
				delta = this->MOVE_RESIZE_INCREMENT;
			} else {
				delta = size->height - minSize->height;
			}
			if ($nc(loc)->y + $nc(size)->height - delta < $nc(minOnScreenInsets)->bottom) {
				delta = loc->y + size->height - minOnScreenInsets->bottom;
			}
			c->setSize($nc(size)->width, size->height - delta);
		} else if (BasicDesktopPaneUI$Actions::SHRINK_DOWN == key && BasicDesktopPaneUI$Actions::resizing) {
			if ($nc(minSize)->height < ($nc(size)->height - this->MOVE_RESIZE_INCREMENT)) {
				delta = this->MOVE_RESIZE_INCREMENT;
			} else {
				delta = size->height - minSize->height;
			}
			if ($nc(loc)->y + delta > dpHeight - $nc(minOnScreenInsets)->top) {
				delta = (dpHeight - minOnScreenInsets->top) - loc->y;
			}
			c->setLocation($nc(loc)->x, loc->y + delta);
			c->setSize($nc(size)->width, size->height - delta);
		}
	} else if (BasicDesktopPaneUI$Actions::NEXT_FRAME == key || BasicDesktopPaneUI$Actions::PREVIOUS_FRAME == key) {
		$nc(dp)->selectFrame((key == BasicDesktopPaneUI$Actions::NEXT_FRAME) ? true : false);
	} else if (BasicDesktopPaneUI$Actions::NAVIGATE_NEXT == key || BasicDesktopPaneUI$Actions::NAVIGATE_PREVIOUS == key) {
		bool moveForward = true;
		if (BasicDesktopPaneUI$Actions::NAVIGATE_PREVIOUS == key) {
			moveForward = false;
		}
		$var($Container, cycleRoot, $nc(dp)->getFocusCycleRootAncestor());
		if (cycleRoot != nullptr) {
			$var($FocusTraversalPolicy, policy, cycleRoot->getFocusTraversalPolicy());
			if (policy != nullptr && $instanceOf($SortingFocusTraversalPolicy, policy)) {
				$var($SortingFocusTraversalPolicy, sPolicy, $cast($SortingFocusTraversalPolicy, policy));
				bool idc = sPolicy->getImplicitDownCycleTraversal();
				{
					$var($Throwable, var$0, nullptr);
					try {
						sPolicy->setImplicitDownCycleTraversal(false);
						if (moveForward) {
							$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->focusNextComponent(dp);
						} else {
							$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->focusPreviousComponent(dp);
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						sPolicy->setImplicitDownCycleTraversal(idc);
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
	}
}

void BasicDesktopPaneUI$Actions::setState($JDesktopPane* dp, $String* state) {
	$useLocalCurrentObjectStackCache();
	if (state == BasicDesktopPaneUI$Actions::CLOSE) {
		$var($JInternalFrame, f, $nc(dp)->getSelectedFrame());
		if (f == nullptr) {
			return;
		}
		$nc(f)->doDefaultCloseAction();
	} else if (state == BasicDesktopPaneUI$Actions::MAXIMIZE) {
		$var($JInternalFrame, f, $nc(dp)->getSelectedFrame());
		if (f == nullptr) {
			return;
		}
		if (!$nc(f)->isMaximum()) {
			if (f->isIcon()) {
				try {
					f->setIcon(false);
					f->setMaximum(true);
				} catch ($PropertyVetoException& pve) {
				}
			} else {
				try {
					f->setMaximum(true);
				} catch ($PropertyVetoException& pve) {
				}
			}
		}
	} else if (state == BasicDesktopPaneUI$Actions::MINIMIZE) {
		$var($JInternalFrame, f, $nc(dp)->getSelectedFrame());
		if (f == nullptr) {
			return;
		}
		if (!$nc(f)->isIcon()) {
			try {
				f->setIcon(true);
			} catch ($PropertyVetoException& pve) {
			}
		}
	} else if (state == BasicDesktopPaneUI$Actions::RESTORE) {
		$var($JInternalFrame, f, $nc(dp)->getSelectedFrame());
		if (f == nullptr) {
			return;
		}
		try {
			if ($nc(f)->isIcon()) {
				f->setIcon(false);
			} else if (f->isMaximum()) {
				f->setMaximum(false);
			}
			$nc(f)->setSelected(true);
		} catch ($PropertyVetoException& pve) {
		}
	}
}

bool BasicDesktopPaneUI$Actions::accept(Object$* sender) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JDesktopPane, sender)) {
		$var($JDesktopPane, dp, $cast($JDesktopPane, sender));
		$var($String, action, getName());
		if (action == BasicDesktopPaneUI$Actions::NEXT_FRAME || action == BasicDesktopPaneUI$Actions::PREVIOUS_FRAME) {
			return true;
		}
		$var($JInternalFrame, iFrame, $nc(dp)->getSelectedFrame());
		if (iFrame == nullptr) {
			return false;
		} else if (action == BasicDesktopPaneUI$Actions::CLOSE) {
			return $nc(iFrame)->isClosable();
		} else if (action == BasicDesktopPaneUI$Actions::MINIMIZE) {
			return $nc(iFrame)->isIconifiable();
		} else if (action == BasicDesktopPaneUI$Actions::MAXIMIZE) {
			return $nc(iFrame)->isMaximizable();
		}
		return true;
	}
	return false;
}

void clinit$BasicDesktopPaneUI$Actions($Class* class$) {
	$assignStatic(BasicDesktopPaneUI$Actions::CLOSE, "close"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::ESCAPE, "escape"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::MAXIMIZE, "maximize"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::MINIMIZE, "minimize"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::MOVE, "move"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::RESIZE, "resize"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::RESTORE, "restore"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::LEFT, "left"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::RIGHT, "right"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::UP, "up"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::DOWN, "down"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::SHRINK_LEFT, "shrinkLeft"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::SHRINK_RIGHT, "shrinkRight"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::SHRINK_UP, "shrinkUp"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::SHRINK_DOWN, "shrinkDown"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::NEXT_FRAME, "selectNextFrame"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::PREVIOUS_FRAME, "selectPreviousFrame"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::NAVIGATE_NEXT, "navigateNext"_s);
	$assignStatic(BasicDesktopPaneUI$Actions::NAVIGATE_PREVIOUS, "navigatePrevious"_s);
	BasicDesktopPaneUI$Actions::moving = false;
	BasicDesktopPaneUI$Actions::resizing = false;
	$assignStatic(BasicDesktopPaneUI$Actions::sourceFrame, nullptr);
	$assignStatic(BasicDesktopPaneUI$Actions::focusOwner, nullptr);
}

BasicDesktopPaneUI$Actions::BasicDesktopPaneUI$Actions() {
}

$Class* BasicDesktopPaneUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicDesktopPaneUI$Actions, name, initialize, &_BasicDesktopPaneUI$Actions_ClassInfo_, clinit$BasicDesktopPaneUI$Actions, allocate$BasicDesktopPaneUI$Actions);
	return class$;
}

$Class* BasicDesktopPaneUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax