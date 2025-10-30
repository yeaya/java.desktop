#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$1.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$2.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DividerLayout.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DragController.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$MouseHandler.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$OneTouchActionHandler.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <sun/swing/DefaultLookup.h>
#include <jcpp.h>

#undef DEFAULT_CURSOR
#undef E_RESIZE_CURSOR
#undef HORIZONTAL_SPLIT
#undef ONE_TOUCH_EXPANDABLE_PROPERTY
#undef ONE_TOUCH_OFFSET
#undef ONE_TOUCH_SIZE
#undef ORIENTATION_PROPERTY
#undef S_RESIZE_CURSOR

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;
using $BasicSplitPaneDivider$1 = ::javax::swing::plaf::basic::BasicSplitPaneDivider$1;
using $BasicSplitPaneDivider$2 = ::javax::swing::plaf::basic::BasicSplitPaneDivider$2;
using $BasicSplitPaneDivider$DividerLayout = ::javax::swing::plaf::basic::BasicSplitPaneDivider$DividerLayout;
using $BasicSplitPaneDivider$DragController = ::javax::swing::plaf::basic::BasicSplitPaneDivider$DragController;
using $BasicSplitPaneDivider$MouseHandler = ::javax::swing::plaf::basic::BasicSplitPaneDivider$MouseHandler;
using $BasicSplitPaneDivider$OneTouchActionHandler = ::javax::swing::plaf::basic::BasicSplitPaneDivider$OneTouchActionHandler;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;
using $DefaultLookup = ::sun::swing::DefaultLookup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneDivider_FieldInfo_[] = {
	{"ONE_TOUCH_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicSplitPaneDivider, ONE_TOUCH_SIZE)},
	{"ONE_TOUCH_OFFSET", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicSplitPaneDivider, ONE_TOUCH_OFFSET)},
	{"dragger", "Ljavax/swing/plaf/basic/BasicSplitPaneDivider$DragController;", nullptr, $PROTECTED, $field(BasicSplitPaneDivider, dragger)},
	{"splitPaneUI", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $PROTECTED, $field(BasicSplitPaneDivider, splitPaneUI)},
	{"dividerSize", "I", nullptr, $PROTECTED, $field(BasicSplitPaneDivider, dividerSize)},
	{"hiddenDivider", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(BasicSplitPaneDivider, hiddenDivider)},
	{"splitPane", "Ljavax/swing/JSplitPane;", nullptr, $PROTECTED, $field(BasicSplitPaneDivider, splitPane)},
	{"mouseHandler", "Ljavax/swing/plaf/basic/BasicSplitPaneDivider$MouseHandler;", nullptr, $PROTECTED, $field(BasicSplitPaneDivider, mouseHandler)},
	{"orientation", "I", nullptr, $PROTECTED, $field(BasicSplitPaneDivider, orientation)},
	{"leftButton", "Ljavax/swing/JButton;", nullptr, $PROTECTED, $field(BasicSplitPaneDivider, leftButton)},
	{"rightButton", "Ljavax/swing/JButton;", nullptr, $PROTECTED, $field(BasicSplitPaneDivider, rightButton)},
	{"border", "Ljavax/swing/border/Border;", nullptr, $PRIVATE, $field(BasicSplitPaneDivider, border)},
	{"mouseOver", "Z", nullptr, $PRIVATE, $field(BasicSplitPaneDivider, mouseOver)},
	{"oneTouchSize", "I", nullptr, $PRIVATE, $field(BasicSplitPaneDivider, oneTouchSize)},
	{"oneTouchOffset", "I", nullptr, $PRIVATE, $field(BasicSplitPaneDivider, oneTouchOffset)},
	{"centerOneTouchButtons", "Z", nullptr, $PRIVATE, $field(BasicSplitPaneDivider, centerOneTouchButtons)},
	{}
};

$MethodInfo _BasicSplitPaneDivider_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSplitPaneDivider::*)($BasicSplitPaneUI*)>(&BasicSplitPaneDivider::init$))},
	{"createLeftOneTouchButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createRightOneTouchButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"dragDividerTo", "(I)V", nullptr, $PROTECTED},
	{"finishDraggingTo", "(I)V", nullptr, $PROTECTED},
	{"getBasicSplitPaneUI", "()Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $PUBLIC},
	{"getBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC},
	{"getDividerSize", "()I", nullptr, $PUBLIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"isMouseOver", "()Z", nullptr, $PUBLIC},
	{"oneTouchExpandableChanged", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"prepareForDragging", "()V", nullptr, $PROTECTED},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"revalidateSplitPane", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicSplitPaneDivider::*)()>(&BasicSplitPaneDivider::revalidateSplitPane))},
	{"setBasicSplitPaneUI", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC},
	{"setDividerSize", "(I)V", nullptr, $PUBLIC},
	{"setMouseOver", "(Z)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSplitPaneDivider_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$OneTouchActionHandler", "javax.swing.plaf.basic.BasicSplitPaneDivider", "OneTouchActionHandler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$DividerLayout", "javax.swing.plaf.basic.BasicSplitPaneDivider", "DividerLayout", $PROTECTED},
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$VerticalDragController", "javax.swing.plaf.basic.BasicSplitPaneDivider", "VerticalDragController", $PROTECTED},
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$DragController", "javax.swing.plaf.basic.BasicSplitPaneDivider", "DragController", $PROTECTED},
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$MouseHandler", "javax.swing.plaf.basic.BasicSplitPaneDivider", "MouseHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicSplitPaneDivider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneDivider",
	"java.awt.Container",
	"java.beans.PropertyChangeListener",
	_BasicSplitPaneDivider_FieldInfo_,
	_BasicSplitPaneDivider_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneDivider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneDivider$OneTouchActionHandler,javax.swing.plaf.basic.BasicSplitPaneDivider$DividerLayout,javax.swing.plaf.basic.BasicSplitPaneDivider$VerticalDragController,javax.swing.plaf.basic.BasicSplitPaneDivider$DragController,javax.swing.plaf.basic.BasicSplitPaneDivider$MouseHandler,javax.swing.plaf.basic.BasicSplitPaneDivider$2,javax.swing.plaf.basic.BasicSplitPaneDivider$1"
};

$Object* allocate$BasicSplitPaneDivider($Class* clazz) {
	return $of($alloc(BasicSplitPaneDivider));
}

$String* BasicSplitPaneDivider::toString() {
	 return this->$Container::toString();
}

int32_t BasicSplitPaneDivider::hashCode() {
	 return this->$Container::hashCode();
}

bool BasicSplitPaneDivider::equals(Object$* arg0) {
	 return this->$Container::equals(arg0);
}

$Object* BasicSplitPaneDivider::clone() {
	 return this->$Container::clone();
}

void BasicSplitPaneDivider::finalize() {
	this->$Container::finalize();
}

void BasicSplitPaneDivider::init$($BasicSplitPaneUI* ui) {
	$useLocalCurrentObjectStackCache();
	$Container::init$();
	this->dividerSize = 0;
	this->oneTouchSize = $DefaultLookup::getInt($($nc(ui)->getSplitPane()), ui, "SplitPane.oneTouchButtonSize"_s, BasicSplitPaneDivider::ONE_TOUCH_SIZE);
	this->oneTouchOffset = $DefaultLookup::getInt($($nc(ui)->getSplitPane()), ui, "SplitPane.oneTouchButtonOffset"_s, BasicSplitPaneDivider::ONE_TOUCH_OFFSET);
	this->centerOneTouchButtons = $DefaultLookup::getBoolean($($nc(ui)->getSplitPane()), ui, "SplitPane.centerOneTouchButtons"_s, true);
	setLayout($$new($BasicSplitPaneDivider$DividerLayout, this));
	setBasicSplitPaneUI(ui);
	this->orientation = $nc(this->splitPane)->getOrientation();
	setCursor((this->orientation == $JSplitPane::HORIZONTAL_SPLIT) ? $($Cursor::getPredefinedCursor($Cursor::E_RESIZE_CURSOR)) : $($Cursor::getPredefinedCursor($Cursor::S_RESIZE_CURSOR)));
	setBackground($($UIManager::getColor("SplitPane.background"_s)));
}

void BasicSplitPaneDivider::revalidateSplitPane() {
	invalidate();
	if (this->splitPane != nullptr) {
		$nc(this->splitPane)->revalidate();
	}
}

void BasicSplitPaneDivider::setBasicSplitPaneUI($BasicSplitPaneUI* newUI) {
	if (this->splitPane != nullptr) {
		$nc(this->splitPane)->removePropertyChangeListener(this);
		if (this->mouseHandler != nullptr) {
			$nc(this->splitPane)->removeMouseListener(this->mouseHandler);
			$nc(this->splitPane)->removeMouseMotionListener(this->mouseHandler);
			removeMouseListener(this->mouseHandler);
			removeMouseMotionListener(this->mouseHandler);
			$set(this, mouseHandler, nullptr);
		}
	}
	$set(this, splitPaneUI, newUI);
	if (newUI != nullptr) {
		$set(this, splitPane, newUI->getSplitPane());
		if (this->splitPane != nullptr) {
			if (this->mouseHandler == nullptr) {
				$set(this, mouseHandler, $new($BasicSplitPaneDivider$MouseHandler, this));
			}
			$nc(this->splitPane)->addMouseListener(this->mouseHandler);
			$nc(this->splitPane)->addMouseMotionListener(this->mouseHandler);
			addMouseListener(this->mouseHandler);
			addMouseMotionListener(this->mouseHandler);
			$nc(this->splitPane)->addPropertyChangeListener(this);
			if ($nc(this->splitPane)->isOneTouchExpandable()) {
				oneTouchExpandableChanged();
			}
		}
	} else {
		$set(this, splitPane, nullptr);
	}
}

$BasicSplitPaneUI* BasicSplitPaneDivider::getBasicSplitPaneUI() {
	return this->splitPaneUI;
}

void BasicSplitPaneDivider::setDividerSize(int32_t newSize) {
	this->dividerSize = newSize;
}

int32_t BasicSplitPaneDivider::getDividerSize() {
	return this->dividerSize;
}

void BasicSplitPaneDivider::setBorder($Border* border) {
	$var($Border, oldBorder, this->border);
	$set(this, border, border);
}

$Border* BasicSplitPaneDivider::getBorder() {
	return this->border;
}

$Insets* BasicSplitPaneDivider::getInsets() {
	$var($Border, border, getBorder());
	if (border != nullptr) {
		return border->getBorderInsets(this);
	}
	return $Container::getInsets();
}

void BasicSplitPaneDivider::setMouseOver(bool mouseOver) {
	this->mouseOver = mouseOver;
}

bool BasicSplitPaneDivider::isMouseOver() {
	return this->mouseOver;
}

$Dimension* BasicSplitPaneDivider::getPreferredSize() {
	if (this->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
		return $new($Dimension, getDividerSize(), 1);
	}
	return $new($Dimension, 1, getDividerSize());
}

$Dimension* BasicSplitPaneDivider::getMinimumSize() {
	return getPreferredSize();
}

void BasicSplitPaneDivider::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($equals($nc(e)->getSource(), this->splitPane)) {
		$init($JSplitPane);
		if (e->getPropertyName() == $JSplitPane::ORIENTATION_PROPERTY) {
			this->orientation = $nc(this->splitPane)->getOrientation();
			setCursor((this->orientation == $JSplitPane::HORIZONTAL_SPLIT) ? $($Cursor::getPredefinedCursor($Cursor::E_RESIZE_CURSOR)) : $($Cursor::getPredefinedCursor($Cursor::S_RESIZE_CURSOR)));
			revalidateSplitPane();
		} else {
			if (e->getPropertyName() == $JSplitPane::ONE_TOUCH_EXPANDABLE_PROPERTY) {
				oneTouchExpandableChanged();
			}
		}
	}
}

void BasicSplitPaneDivider::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$Container::paint(g);
	$var($Border, border, getBorder());
	if (border != nullptr) {
		$var($Dimension, size, getSize());
		border->paintBorder(this, g, 0, 0, $nc(size)->width, size->height);
	}
}

void BasicSplitPaneDivider::oneTouchExpandableChanged() {
	$useLocalCurrentObjectStackCache();
	if (!$DefaultLookup::getBoolean(this->splitPane, this->splitPaneUI, "SplitPane.supportsOneTouchButtons"_s, true)) {
		return;
	}
	if ($nc(this->splitPane)->isOneTouchExpandable() && this->leftButton == nullptr && this->rightButton == nullptr) {
		$set(this, leftButton, createLeftOneTouchButton());
		if (this->leftButton != nullptr) {
			$nc(this->leftButton)->addActionListener($$new($BasicSplitPaneDivider$OneTouchActionHandler, this, true));
		}
		$set(this, rightButton, createRightOneTouchButton());
		if (this->rightButton != nullptr) {
			$nc(this->rightButton)->addActionListener($$new($BasicSplitPaneDivider$OneTouchActionHandler, this, false));
		}
		if (this->leftButton != nullptr && this->rightButton != nullptr) {
			add(static_cast<$Component*>(this->leftButton));
			add(static_cast<$Component*>(this->rightButton));
		}
	}
	revalidateSplitPane();
}

$JButton* BasicSplitPaneDivider::createLeftOneTouchButton() {
	$useLocalCurrentObjectStackCache();
	$var($JButton, b, $new($BasicSplitPaneDivider$1, this));
	b->setMinimumSize($$new($Dimension, this->oneTouchSize, this->oneTouchSize));
	b->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
	b->setFocusPainted(false);
	b->setBorderPainted(false);
	b->setRequestFocusEnabled(false);
	return b;
}

$JButton* BasicSplitPaneDivider::createRightOneTouchButton() {
	$useLocalCurrentObjectStackCache();
	$var($JButton, b, $new($BasicSplitPaneDivider$2, this));
	b->setMinimumSize($$new($Dimension, this->oneTouchSize, this->oneTouchSize));
	b->setCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
	b->setFocusPainted(false);
	b->setBorderPainted(false);
	b->setRequestFocusEnabled(false);
	return b;
}

void BasicSplitPaneDivider::prepareForDragging() {
	$nc(this->splitPaneUI)->startDragging();
}

void BasicSplitPaneDivider::dragDividerTo(int32_t location) {
	$nc(this->splitPaneUI)->dragDividerTo(location);
}

void BasicSplitPaneDivider::finishDraggingTo(int32_t location) {
	$nc(this->splitPaneUI)->finishDraggingTo(location);
}

BasicSplitPaneDivider::BasicSplitPaneDivider() {
}

$Class* BasicSplitPaneDivider::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneDivider, name, initialize, &_BasicSplitPaneDivider_ClassInfo_, allocate$BasicSplitPaneDivider);
	return class$;
}

$Class* BasicSplitPaneDivider::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax