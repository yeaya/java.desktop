#include <javax/swing/ToolTipManager.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionAdapter.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/lang/Math.h>
#include <java/util/EventObject.h>
#include <java/util/Objects.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/JWindow.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/ToolTipManager$1.h>
#include <javax/swing/ToolTipManager$AccessibilityKeyListener.h>
#include <javax/swing/ToolTipManager$MoveBeforeEnterListener.h>
#include <javax/swing/ToolTipManager$insideTimerAction.h>
#include <javax/swing/ToolTipManager$outsideTimerAction.h>
#include <javax/swing/ToolTipManager$stillInsideTimerAction.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/MenuKeyListener.h>
#include <jcpp.h>

#undef CTRL_MASK
#undef LIGHT_WEIGHT_POPUP
#undef MEDIUM_WEIGHT_POPUP
#undef TOOL_TIP_MANAGER_KEY
#undef VK_ESCAPE
#undef VK_F1

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusListener = ::java::awt::event::FocusListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionAdapter = ::java::awt::event::MouseMotionAdapter;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JToolTip = ::javax::swing::JToolTip;
using $JWindow = ::javax::swing::JWindow;
using $KeyStroke = ::javax::swing::KeyStroke;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $ToolTipManager$1 = ::javax::swing::ToolTipManager$1;
using $ToolTipManager$AccessibilityKeyListener = ::javax::swing::ToolTipManager$AccessibilityKeyListener;
using $ToolTipManager$MoveBeforeEnterListener = ::javax::swing::ToolTipManager$MoveBeforeEnterListener;
using $ToolTipManager$insideTimerAction = ::javax::swing::ToolTipManager$insideTimerAction;
using $ToolTipManager$outsideTimerAction = ::javax::swing::ToolTipManager$outsideTimerAction;
using $ToolTipManager$stillInsideTimerAction = ::javax::swing::ToolTipManager$stillInsideTimerAction;
using $UIManager = ::javax::swing::UIManager;
using $MenuKeyListener = ::javax::swing::event::MenuKeyListener;

namespace javax {
	namespace swing {

$FieldInfo _ToolTipManager_FieldInfo_[] = {
	{"enterTimer", "Ljavax/swing/Timer;", nullptr, 0, $field(ToolTipManager, enterTimer)},
	{"exitTimer", "Ljavax/swing/Timer;", nullptr, 0, $field(ToolTipManager, exitTimer)},
	{"insideTimer", "Ljavax/swing/Timer;", nullptr, 0, $field(ToolTipManager, insideTimer)},
	{"toolTipText", "Ljava/lang/String;", nullptr, 0, $field(ToolTipManager, toolTipText)},
	{"preferredLocation", "Ljava/awt/Point;", nullptr, 0, $field(ToolTipManager, preferredLocation)},
	{"insideComponent", "Ljavax/swing/JComponent;", nullptr, 0, $field(ToolTipManager, insideComponent)},
	{"mouseEvent", "Ljava/awt/event/MouseEvent;", nullptr, 0, $field(ToolTipManager, mouseEvent)},
	{"showImmediately", "Z", nullptr, 0, $field(ToolTipManager, showImmediately)},
	{"TOOL_TIP_MANAGER_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToolTipManager, TOOL_TIP_MANAGER_KEY)},
	{"tipWindow", "Ljavax/swing/Popup;", nullptr, $TRANSIENT, $field(ToolTipManager, tipWindow)},
	{"window", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(ToolTipManager, window)},
	{"tip", "Ljavax/swing/JToolTip;", nullptr, 0, $field(ToolTipManager, tip)},
	{"popupRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(ToolTipManager, popupRect)},
	{"popupFrameRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(ToolTipManager, popupFrameRect)},
	{"enabled", "Z", nullptr, 0, $field(ToolTipManager, enabled)},
	{"tipShowing", "Z", nullptr, $PRIVATE, $field(ToolTipManager, tipShowing)},
	{"focusChangeListener", "Ljava/awt/event/FocusListener;", nullptr, $PRIVATE, $field(ToolTipManager, focusChangeListener)},
	{"moveBeforeEnterListener", "Ljava/awt/event/MouseMotionListener;", nullptr, $PRIVATE, $field(ToolTipManager, moveBeforeEnterListener)},
	{"accessibilityKeyListener", "Ljava/awt/event/KeyListener;", nullptr, $PRIVATE, $field(ToolTipManager, accessibilityKeyListener)},
	{"postTip", "Ljavax/swing/KeyStroke;", nullptr, $PRIVATE, $field(ToolTipManager, postTip)},
	{"hideTip", "Ljavax/swing/KeyStroke;", nullptr, $PRIVATE, $field(ToolTipManager, hideTip)},
	{"lightWeightPopupEnabled", "Z", nullptr, $PROTECTED, $field(ToolTipManager, lightWeightPopupEnabled)},
	{"heavyWeightPopupEnabled", "Z", nullptr, $PROTECTED, $field(ToolTipManager, heavyWeightPopupEnabled)},
	{}
};

$MethodInfo _ToolTipManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ToolTipManager::*)()>(&ToolTipManager::init$))},
	{"checkForTipChange", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolTipManager::*)($MouseEvent*)>(&ToolTipManager::checkForTipChange))},
	{"createFocusChangeListener", "()Ljava/awt/event/FocusListener;", nullptr, $PRIVATE, $method(static_cast<$FocusListener*(ToolTipManager::*)()>(&ToolTipManager::createFocusChangeListener))},
	{"frameForComponent", "(Ljava/awt/Component;)Ljava/awt/Frame;", nullptr, $STATIC, $method(static_cast<$Frame*(*)($Component*)>(&ToolTipManager::frameForComponent))},
	{"getDismissDelay", "()I", nullptr, $PUBLIC},
	{"getDrawingGC", "(Ljava/awt/Point;)Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE, $method(static_cast<$GraphicsConfiguration*(ToolTipManager::*)($Point*)>(&ToolTipManager::getDrawingGC))},
	{"getHeightAdjust", "(Ljava/awt/Rectangle;Ljava/awt/Rectangle;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ToolTipManager::*)($Rectangle*,$Rectangle*)>(&ToolTipManager::getHeightAdjust))},
	{"getInitialDelay", "()I", nullptr, $PUBLIC},
	{"getPopupFitHeight", "(Ljava/awt/Rectangle;Ljava/awt/Component;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ToolTipManager::*)($Rectangle*,$Component*)>(&ToolTipManager::getPopupFitHeight))},
	{"getPopupFitWidth", "(Ljava/awt/Rectangle;Ljava/awt/Component;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ToolTipManager::*)($Rectangle*,$Component*)>(&ToolTipManager::getPopupFitWidth))},
	{"getReshowDelay", "()I", nullptr, $PUBLIC},
	{"getWidthAdjust", "(Ljava/awt/Rectangle;Ljava/awt/Rectangle;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ToolTipManager::*)($Rectangle*,$Rectangle*)>(&ToolTipManager::getWidthAdjust))},
	{"hide", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolTipManager::*)($JComponent*)>(&ToolTipManager::hide))},
	{"hideTipWindow", "()V", nullptr, 0},
	{"initiateToolTip", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolTipManager::*)($MouseEvent*)>(&ToolTipManager::initiateToolTip))},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"isLightWeightPopupEnabled", "()Z", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"registerComponent", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"setDismissDelay", "(I)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setInitialDelay", "(I)V", nullptr, $PUBLIC},
	{"setLightWeightPopupEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setReshowDelay", "(I)V", nullptr, $PUBLIC},
	{"sharedInstance", "()Ljavax/swing/ToolTipManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ToolTipManager*(*)()>(&ToolTipManager::sharedInstance))},
	{"show", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolTipManager::*)($JComponent*)>(&ToolTipManager::show))},
	{"showTipWindow", "()V", nullptr, 0},
	{"unregisterComponent", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ToolTipManager_InnerClassesInfo_[] = {
	{"javax.swing.ToolTipManager$AccessibilityKeyListener", "javax.swing.ToolTipManager", "AccessibilityKeyListener", $PRIVATE},
	{"javax.swing.ToolTipManager$MoveBeforeEnterListener", "javax.swing.ToolTipManager", "MoveBeforeEnterListener", $PRIVATE},
	{"javax.swing.ToolTipManager$stillInsideTimerAction", "javax.swing.ToolTipManager", "stillInsideTimerAction", $PROTECTED},
	{"javax.swing.ToolTipManager$outsideTimerAction", "javax.swing.ToolTipManager", "outsideTimerAction", $PROTECTED},
	{"javax.swing.ToolTipManager$insideTimerAction", "javax.swing.ToolTipManager", "insideTimerAction", $PROTECTED},
	{"javax.swing.ToolTipManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ToolTipManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ToolTipManager",
	"java.awt.event.MouseAdapter",
	nullptr,
	_ToolTipManager_FieldInfo_,
	_ToolTipManager_MethodInfo_,
	nullptr,
	nullptr,
	_ToolTipManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.ToolTipManager$AccessibilityKeyListener,javax.swing.ToolTipManager$MoveBeforeEnterListener,javax.swing.ToolTipManager$stillInsideTimerAction,javax.swing.ToolTipManager$outsideTimerAction,javax.swing.ToolTipManager$insideTimerAction,javax.swing.ToolTipManager$1"
};

$Object* allocate$ToolTipManager($Class* clazz) {
	return $of($alloc(ToolTipManager));
}

$Object* ToolTipManager::TOOL_TIP_MANAGER_KEY = nullptr;

void ToolTipManager::init$() {
	$useLocalCurrentObjectStackCache();
	$MouseAdapter::init$();
	$set(this, popupRect, nullptr);
	$set(this, popupFrameRect, nullptr);
	this->enabled = true;
	this->tipShowing = false;
	$set(this, focusChangeListener, nullptr);
	$set(this, moveBeforeEnterListener, nullptr);
	$set(this, accessibilityKeyListener, nullptr);
	this->lightWeightPopupEnabled = true;
	this->heavyWeightPopupEnabled = false;
	$set(this, enterTimer, $new($Timer, 750, $$new($ToolTipManager$insideTimerAction, this)));
	$nc(this->enterTimer)->setRepeats(false);
	$set(this, exitTimer, $new($Timer, 500, $$new($ToolTipManager$outsideTimerAction, this)));
	$nc(this->exitTimer)->setRepeats(false);
	$set(this, insideTimer, $new($Timer, 4000, $$new($ToolTipManager$stillInsideTimerAction, this)));
	$nc(this->insideTimer)->setRepeats(false);
	$set(this, moveBeforeEnterListener, $new($ToolTipManager$MoveBeforeEnterListener, this));
	$set(this, accessibilityKeyListener, $new($ToolTipManager$AccessibilityKeyListener, this));
	$set(this, postTip, $KeyStroke::getKeyStroke($KeyEvent::VK_F1, $InputEvent::CTRL_MASK));
	$set(this, hideTip, $KeyStroke::getKeyStroke($KeyEvent::VK_ESCAPE, 0));
}

void ToolTipManager::setEnabled(bool flag) {
	this->enabled = flag;
	if (!flag) {
		hideTipWindow();
	}
}

bool ToolTipManager::isEnabled() {
	return this->enabled;
}

void ToolTipManager::setLightWeightPopupEnabled(bool aFlag) {
	this->lightWeightPopupEnabled = aFlag;
}

bool ToolTipManager::isLightWeightPopupEnabled() {
	return this->lightWeightPopupEnabled;
}

void ToolTipManager::setInitialDelay(int32_t milliseconds) {
	$nc(this->enterTimer)->setInitialDelay(milliseconds);
}

int32_t ToolTipManager::getInitialDelay() {
	return $nc(this->enterTimer)->getInitialDelay();
}

void ToolTipManager::setDismissDelay(int32_t milliseconds) {
	$nc(this->insideTimer)->setInitialDelay(milliseconds);
}

int32_t ToolTipManager::getDismissDelay() {
	return $nc(this->insideTimer)->getInitialDelay();
}

void ToolTipManager::setReshowDelay(int32_t milliseconds) {
	$nc(this->exitTimer)->setInitialDelay(milliseconds);
}

int32_t ToolTipManager::getReshowDelay() {
	return $nc(this->exitTimer)->getInitialDelay();
}

$GraphicsConfiguration* ToolTipManager::getDrawingGC($Point* toFind) {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsEnvironment, env, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($GraphicsDeviceArray, devices, $nc(env)->getScreenDevices());
	{
		$var($GraphicsDeviceArray, arr$, devices);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($GraphicsDevice, device, arr$->get(i$));
			{
				$var($GraphicsConfiguration, config, $nc(device)->getDefaultConfiguration());
				$var($Rectangle, rect, $nc(config)->getBounds());
				if ($nc(rect)->contains(toFind)) {
					return config;
				}
			}
		}
	}
	return nullptr;
}

void ToolTipManager::showTipWindow() {
	$useLocalCurrentObjectStackCache();
	if (this->insideComponent == nullptr || !$nc(this->insideComponent)->isShowing()) {
		return;
	}
	$var($String, mode, $UIManager::getString("ToolTipManager.enableToolTipMode"_s));
	if ("activeApplication"_s->equals(mode)) {
		$var($KeyboardFocusManager, kfm, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
		if ($nc(kfm)->getFocusedWindow() == nullptr) {
			return;
		}
	}
	if (this->enabled) {
		$var($Dimension, size, nullptr);
		$var($Point, screenLocation, $nc(this->insideComponent)->getLocationOnScreen());
		$var($Point, location, nullptr);
		$var($Point, toFind, nullptr);
		if (this->preferredLocation != nullptr) {
			$assign(toFind, $new($Point, $nc(screenLocation)->x + $nc(this->preferredLocation)->x, screenLocation->y + $nc(this->preferredLocation)->y));
		} else {
			$assign(toFind, $nc(this->mouseEvent)->getLocationOnScreen());
		}
		$var($GraphicsConfiguration, gc, getDrawingGC(toFind));
		if (gc == nullptr) {
			$assign(toFind, $nc(this->mouseEvent)->getLocationOnScreen());
			$assign(gc, getDrawingGC(toFind));
			if (gc == nullptr) {
				$assign(gc, $nc(this->insideComponent)->getGraphicsConfiguration());
			}
		}
		$var($Rectangle, sBounds, $nc(gc)->getBounds());
		$var($Insets, screenInsets, $nc($($Toolkit::getDefaultToolkit()))->getScreenInsets(gc));
		$nc(sBounds)->x += $nc(screenInsets)->left;
		sBounds->y += screenInsets->top;
		sBounds->width -= (screenInsets->left + screenInsets->right);
		sBounds->height -= (screenInsets->top + screenInsets->bottom);
		bool leftToRight = $SwingUtilities::isLeftToRight(this->insideComponent);
		hideTipWindow();
		$set(this, tip, $nc(this->insideComponent)->createToolTip());
		$nc(this->tip)->setTipText(this->toolTipText);
		$assign(size, $nc(this->tip)->getPreferredSize());
		if (this->preferredLocation != nullptr) {
			$assign(location, toFind);
			if (!leftToRight) {
				$nc(location)->x -= $nc(size)->width;
			}
		} else {
			int32_t var$0 = $nc(screenLocation)->x + $nc(this->mouseEvent)->getX();
			$assign(location, $new($Point, var$0, screenLocation->y + $nc(this->mouseEvent)->getY() + 20));
			if (!leftToRight) {
				if (location->x - $nc(size)->width >= 0) {
					location->x -= size->width;
				}
			}
		}
		if (this->popupRect == nullptr) {
			$set(this, popupRect, $new($Rectangle));
		}
		$nc(this->popupRect)->setBounds($nc(location)->x, location->y, $nc(size)->width, size->height);
		if ($nc(location)->x < sBounds->x) {
			location->x = sBounds->x;
		} else if (location->x - sBounds->x + $nc(size)->width > sBounds->width) {
			location->x = sBounds->x + $Math::max(0, sBounds->width - size->width);
		}
		if ($nc(location)->y < sBounds->y) {
			location->y = sBounds->y;
		} else if (location->y - sBounds->y + $nc(size)->height > sBounds->height) {
			location->y = sBounds->y + $Math::max(0, sBounds->height - size->height);
		}
		$var($PopupFactory, popupFactory, $PopupFactory::getSharedInstance());
		if (this->lightWeightPopupEnabled) {
			int32_t y = getPopupFitHeight(this->popupRect, this->insideComponent);
			int32_t x = getPopupFitWidth(this->popupRect, this->insideComponent);
			if (x > 0 || y > 0) {
				$nc(popupFactory)->setPopupType($PopupFactory::MEDIUM_WEIGHT_POPUP);
			} else {
				$nc(popupFactory)->setPopupType($PopupFactory::LIGHT_WEIGHT_POPUP);
			}
		} else {
			$nc(popupFactory)->setPopupType($PopupFactory::MEDIUM_WEIGHT_POPUP);
		}
		$set(this, tipWindow, $nc(popupFactory)->getPopup(this->insideComponent, this->tip, $nc(location)->x, location->y));
		popupFactory->setPopupType($PopupFactory::LIGHT_WEIGHT_POPUP);
		$nc(this->tipWindow)->show();
		$var($Window, componentWindow, $SwingUtilities::windowForComponent(this->insideComponent));
		$set(this, window, $SwingUtilities::windowForComponent(this->tip));
		if (this->window != nullptr && this->window != componentWindow) {
			$nc(this->window)->addMouseListener(this);
		} else {
			$set(this, window, nullptr);
		}
		$nc(this->insideTimer)->start();
		this->tipShowing = true;
	}
}

void ToolTipManager::hideTipWindow() {
	if (this->tipWindow != nullptr) {
		if (this->window != nullptr) {
			$nc(this->window)->removeMouseListener(this);
			$set(this, window, nullptr);
		}
		$nc(this->tipWindow)->hide();
		$set(this, tipWindow, nullptr);
		this->tipShowing = false;
		$set(this, tip, nullptr);
		$nc(this->insideTimer)->stop();
	}
}

ToolTipManager* ToolTipManager::sharedInstance() {
	$init(ToolTipManager);
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $SwingUtilities::appContextGet(ToolTipManager::TOOL_TIP_MANAGER_KEY));
	if ($instanceOf(ToolTipManager, value)) {
		return $cast(ToolTipManager, value);
	}
	$var(ToolTipManager, manager, $new(ToolTipManager));
	$SwingUtilities::appContextPut(ToolTipManager::TOOL_TIP_MANAGER_KEY, manager);
	return manager;
}

void ToolTipManager::registerComponent($JComponent* component) {
	$nc(component)->removeMouseListener(this);
	component->addMouseListener(this);
	component->removeMouseMotionListener(this->moveBeforeEnterListener);
	component->addMouseMotionListener(this->moveBeforeEnterListener);
	if ($instanceOf($JMenuItem, component)) {
		$nc(($cast($JMenuItem, component)))->removeMenuKeyListener($cast($MenuKeyListener, this->accessibilityKeyListener));
		($cast($JMenuItem, component))->addMenuKeyListener($cast($MenuKeyListener, this->accessibilityKeyListener));
	} else {
		component->removeKeyListener(this->accessibilityKeyListener);
		component->addKeyListener(this->accessibilityKeyListener);
	}
}

void ToolTipManager::unregisterComponent($JComponent* component) {
	$nc(component)->removeMouseListener(this);
	component->removeMouseMotionListener(this->moveBeforeEnterListener);
	if ($instanceOf($JMenuItem, component)) {
		$nc(($cast($JMenuItem, component)))->removeMenuKeyListener($cast($MenuKeyListener, this->accessibilityKeyListener));
	} else {
		component->removeKeyListener(this->accessibilityKeyListener);
	}
}

void ToolTipManager::mouseEntered($MouseEvent* event) {
	initiateToolTip(event);
}

void ToolTipManager::initiateToolTip($MouseEvent* event) {
	$useLocalCurrentObjectStackCache();
	if ($equals($nc(event)->getSource(), this->window)) {
		return;
	}
	$var($JComponent, component, $cast($JComponent, $nc(event)->getSource()));
	$nc(component)->removeMouseMotionListener(this->moveBeforeEnterListener);
	$nc(this->exitTimer)->stop();
	$var($Point, location, event->getPoint());
	bool var$0 = $nc(location)->x < 0 || $nc(location)->x >= component->getWidth() || $nc(location)->y < 0;
	if (var$0 || $nc(location)->y >= component->getHeight()) {
		return;
	}
	if (this->insideComponent != nullptr) {
		$nc(this->enterTimer)->stop();
	}
	component->removeMouseMotionListener(this);
	component->addMouseMotionListener(this);
	bool sameComponent = (this->insideComponent == component);
	$set(this, insideComponent, component);
	if (this->tipWindow != nullptr) {
		$set(this, mouseEvent, event);
		if (this->showImmediately) {
			$var($String, newToolTipText, component->getToolTipText(event));
			$var($Point, newPreferredLocation, component->getToolTipLocation(event));
			bool sameLoc = (this->preferredLocation != nullptr) ? $nc(this->preferredLocation)->equals(newPreferredLocation) : (newPreferredLocation == nullptr);
			if (!sameComponent || !$Objects::equals(this->toolTipText, newToolTipText) || !sameLoc) {
				$set(this, toolTipText, newToolTipText);
				$set(this, preferredLocation, newPreferredLocation);
				showTipWindow();
			}
		} else {
			$nc(this->enterTimer)->start();
		}
	}
}

void ToolTipManager::mouseExited($MouseEvent* event) {
	$useLocalCurrentObjectStackCache();
	bool shouldHide = true;
	if (this->insideComponent == nullptr) {
	}
	if (this->window != nullptr && $equals($nc(event)->getSource(), this->window) && this->insideComponent != nullptr) {
		$var($Container, insideComponentWindow, $nc(this->insideComponent)->getTopLevelAncestor());
		if (insideComponentWindow != nullptr) {
			$var($Point, location, event->getPoint());
			$SwingUtilities::convertPointToScreen(location, this->window);
			$nc(location)->x -= insideComponentWindow->getX();
			location->y -= insideComponentWindow->getY();
			$assign(location, $SwingUtilities::convertPoint(nullptr, location, this->insideComponent));
			bool var$0 = location->x >= 0 && location->x < $nc(this->insideComponent)->getWidth() && location->y >= 0;
			if (var$0 && location->y < $nc(this->insideComponent)->getHeight()) {
				shouldHide = false;
			} else {
				shouldHide = true;
			}
		}
	} else if ($equals(event->getSource(), this->insideComponent) && this->tipWindow != nullptr) {
		$var($Window, win, $SwingUtilities::getWindowAncestor(this->insideComponent));
		if (win != nullptr) {
			$var($Point, location, $SwingUtilities::convertPoint(this->insideComponent, $(event->getPoint()), win));
			$var($Rectangle, bounds, $nc($($nc(this->insideComponent)->getTopLevelAncestor()))->getBounds());
			$nc(location)->x += $nc(bounds)->x;
			location->y += bounds->y;
			$var($Point, loc, $new($Point, 0, 0));
			$SwingUtilities::convertPointToScreen(loc, this->tip);
			bounds->x = loc->x;
			bounds->y = loc->y;
			bounds->width = $nc(this->tip)->getWidth();
			bounds->height = $nc(this->tip)->getHeight();
			if (location->x >= bounds->x && location->x < (bounds->x + bounds->width) && location->y >= bounds->y && location->y < (bounds->y + bounds->height)) {
				shouldHide = false;
			} else {
				shouldHide = true;
			}
		}
	}
	if (shouldHide) {
		$nc(this->enterTimer)->stop();
		if (this->insideComponent != nullptr) {
			$nc(this->insideComponent)->removeMouseMotionListener(this);
		}
		$set(this, insideComponent, nullptr);
		$set(this, toolTipText, nullptr);
		$set(this, mouseEvent, nullptr);
		hideTipWindow();
		$nc(this->exitTimer)->restart();
	}
}

void ToolTipManager::mousePressed($MouseEvent* event) {
	hideTipWindow();
	$nc(this->enterTimer)->stop();
	this->showImmediately = false;
	$set(this, insideComponent, nullptr);
	$set(this, mouseEvent, nullptr);
}

void ToolTipManager::mouseDragged($MouseEvent* event) {
}

void ToolTipManager::mouseMoved($MouseEvent* event) {
	if (this->tipShowing) {
		checkForTipChange(event);
	} else if (this->showImmediately) {
		$var($JComponent, component, $cast($JComponent, $nc(event)->getSource()));
		$set(this, toolTipText, $nc(component)->getToolTipText(event));
		if (this->toolTipText != nullptr) {
			$set(this, preferredLocation, component->getToolTipLocation(event));
			$set(this, mouseEvent, event);
			$set(this, insideComponent, component);
			$nc(this->exitTimer)->stop();
			showTipWindow();
		}
	} else {
		$set(this, insideComponent, $cast($JComponent, $nc(event)->getSource()));
		$set(this, mouseEvent, event);
		$set(this, toolTipText, nullptr);
		$nc(this->enterTimer)->restart();
	}
}

void ToolTipManager::checkForTipChange($MouseEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, component, $cast($JComponent, $nc(event)->getSource()));
	$var($String, newText, $nc(component)->getToolTipText(event));
	$var($Point, newPreferredLocation, component->getToolTipLocation(event));
	if (newText != nullptr || newPreferredLocation != nullptr) {
		$set(this, mouseEvent, event);
		bool var$0 = ((newText != nullptr && newText->equals(this->toolTipText)) || newText == nullptr);
		if (var$0 && ((newPreferredLocation != nullptr && newPreferredLocation->equals(this->preferredLocation)) || newPreferredLocation == nullptr)) {
			if (this->tipWindow != nullptr) {
				$nc(this->insideTimer)->restart();
			} else {
				$nc(this->enterTimer)->restart();
			}
		} else {
			$set(this, toolTipText, newText);
			$set(this, preferredLocation, newPreferredLocation);
			if (this->showImmediately) {
				hideTipWindow();
				showTipWindow();
				$nc(this->exitTimer)->stop();
			} else {
				$nc(this->enterTimer)->restart();
			}
		}
	} else {
		$set(this, toolTipText, nullptr);
		$set(this, preferredLocation, nullptr);
		$set(this, mouseEvent, nullptr);
		$set(this, insideComponent, nullptr);
		hideTipWindow();
		$nc(this->enterTimer)->stop();
		$nc(this->exitTimer)->restart();
	}
}

$Frame* ToolTipManager::frameForComponent($Component* component$renamed) {
	$init(ToolTipManager);
	$var($Component, component, component$renamed);
	while (!($instanceOf($Frame, component))) {
		$assign(component, $nc(component)->getParent());
	}
	return $cast($Frame, component);
}

$FocusListener* ToolTipManager::createFocusChangeListener() {
	return $new($ToolTipManager$1, this);
}

int32_t ToolTipManager::getPopupFitWidth($Rectangle* popupRectInScreen, $Component* invoker) {
	$useLocalCurrentObjectStackCache();
	if (invoker != nullptr) {
		$var($Container, parent, nullptr);
		for ($assign(parent, invoker->getParent()); parent != nullptr; $assign(parent, $nc(parent)->getParent())) {
			if ($instanceOf($JFrame, parent) || $instanceOf($JDialog, parent) || $instanceOf($JWindow, parent)) {
				return getWidthAdjust($(parent->getBounds()), popupRectInScreen);
			} else if ($instanceOf($JApplet, parent) || $instanceOf($JInternalFrame, parent)) {
				if (this->popupFrameRect == nullptr) {
					$set(this, popupFrameRect, $new($Rectangle));
				}
				$var($Point, p, parent->getLocationOnScreen());
				int32_t var$0 = $nc(p)->x;
				int32_t var$1 = p->y;
				int32_t var$2 = $nc($(parent->getBounds()))->width;
				$nc(this->popupFrameRect)->setBounds(var$0, var$1, var$2, $nc($(parent->getBounds()))->height);
				return getWidthAdjust(this->popupFrameRect, popupRectInScreen);
			}
		}
	}
	return 0;
}

int32_t ToolTipManager::getPopupFitHeight($Rectangle* popupRectInScreen, $Component* invoker) {
	$useLocalCurrentObjectStackCache();
	if (invoker != nullptr) {
		$var($Container, parent, nullptr);
		for ($assign(parent, invoker->getParent()); parent != nullptr; $assign(parent, $nc(parent)->getParent())) {
			if ($instanceOf($JFrame, parent) || $instanceOf($JDialog, parent) || $instanceOf($JWindow, parent)) {
				return getHeightAdjust($(parent->getBounds()), popupRectInScreen);
			} else if ($instanceOf($JApplet, parent) || $instanceOf($JInternalFrame, parent)) {
				if (this->popupFrameRect == nullptr) {
					$set(this, popupFrameRect, $new($Rectangle));
				}
				$var($Point, p, parent->getLocationOnScreen());
				int32_t var$0 = $nc(p)->x;
				int32_t var$1 = p->y;
				int32_t var$2 = $nc($(parent->getBounds()))->width;
				$nc(this->popupFrameRect)->setBounds(var$0, var$1, var$2, $nc($(parent->getBounds()))->height);
				return getHeightAdjust(this->popupFrameRect, popupRectInScreen);
			}
		}
	}
	return 0;
}

int32_t ToolTipManager::getHeightAdjust($Rectangle* a, $Rectangle* b) {
	if ($nc(b)->y >= $nc(a)->y && (b->y + b->height) <= (a->y + a->height)) {
		return 0;
	} else {
		return (((b->y + b->height) - (a->y + a->height)) + 5);
	}
}

int32_t ToolTipManager::getWidthAdjust($Rectangle* a, $Rectangle* b) {
	if ($nc(b)->x >= $nc(a)->x && (b->x + b->width) <= (a->x + a->width)) {
		return 0;
	} else {
		return (((b->x + b->width) - (a->x + a->width)) + 5);
	}
}

void ToolTipManager::show($JComponent* source) {
	if (this->tipWindow != nullptr) {
		hideTipWindow();
		$set(this, insideComponent, nullptr);
	} else {
		hideTipWindow();
		$nc(this->enterTimer)->stop();
		$nc(this->exitTimer)->stop();
		$nc(this->insideTimer)->stop();
		$set(this, insideComponent, source);
		if (this->insideComponent != nullptr) {
			$set(this, toolTipText, $nc(this->insideComponent)->getToolTipText());
			$set(this, preferredLocation, $new($Point, 10, $nc(this->insideComponent)->getHeight() + 10));
			showTipWindow();
			if (this->focusChangeListener == nullptr) {
				$set(this, focusChangeListener, createFocusChangeListener());
			}
			$nc(this->insideComponent)->addFocusListener(this->focusChangeListener);
		}
	}
}

void ToolTipManager::hide($JComponent* source) {
	hideTipWindow();
	$nc(source)->removeFocusListener(this->focusChangeListener);
	$set(this, preferredLocation, nullptr);
	$set(this, insideComponent, nullptr);
}

void clinit$ToolTipManager($Class* class$) {
	$assignStatic(ToolTipManager::TOOL_TIP_MANAGER_KEY, $new($Object));
}

ToolTipManager::ToolTipManager() {
}

$Class* ToolTipManager::load$($String* name, bool initialize) {
	$loadClass(ToolTipManager, name, initialize, &_ToolTipManager_ClassInfo_, clinit$ToolTipManager, allocate$ToolTipManager);
	return class$;
}

$Class* ToolTipManager::class$ = nullptr;

	} // swing
} // javax