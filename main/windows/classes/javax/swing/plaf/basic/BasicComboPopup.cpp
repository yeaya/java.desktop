#include <javax/swing/plaf/basic/BasicComboPopup.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseWheelListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/ScrollPaneConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/plaf/basic/BasicComboPopup$1.h>
#include <javax/swing/plaf/basic/BasicComboPopup$AutoScrollActionHandler.h>
#include <javax/swing/plaf/basic/BasicComboPopup$EmptyListModelClass.h>
#include <javax/swing/plaf/basic/BasicComboPopup$Handler.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef BLACK
#undef HORIZONTAL_SCROLLBAR_NEVER
#undef LIST_BORDER
#undef NOBUTTON
#undef SCROLL_DOWN
#undef SCROLL_UP
#undef SINGLE_SELECTION
#undef VERTICAL_SCROLLBAR_AS_NEEDED
#undef Y_AXIS

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $MouseWheelListener = ::java::awt::event::MouseWheelListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $BoxLayout = ::javax::swing::BoxLayout;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $ScrollPaneConstants = ::javax::swing::ScrollPaneConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $LineBorder = ::javax::swing::border::LineBorder;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $BasicComboPopup$1 = ::javax::swing::plaf::basic::BasicComboPopup$1;
using $BasicComboPopup$AutoScrollActionHandler = ::javax::swing::plaf::basic::BasicComboPopup$AutoScrollActionHandler;
using $BasicComboPopup$EmptyListModelClass = ::javax::swing::plaf::basic::BasicComboPopup$EmptyListModelClass;
using $BasicComboPopup$Handler = ::javax::swing::plaf::basic::BasicComboPopup$Handler;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboPopup_FieldInfo_[] = {
	{"EmptyListModel", "Ljavax/swing/ListModel;", "Ljavax/swing/ListModel<Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(BasicComboPopup, EmptyListModel)},
	{"LIST_BORDER", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(BasicComboPopup, LIST_BORDER)},
	{"comboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/Object;>;", $PROTECTED, $field(BasicComboPopup, comboBox)},
	{"list", "Ljavax/swing/JList;", "Ljavax/swing/JList<Ljava/lang/Object;>;", $PROTECTED, $field(BasicComboPopup, list$)},
	{"scroller", "Ljavax/swing/JScrollPane;", nullptr, $PROTECTED, $field(BasicComboPopup, scroller)},
	{"valueIsAdjusting", "Z", nullptr, $PROTECTED, $field(BasicComboPopup, valueIsAdjusting)},
	{"handler", "Ljavax/swing/plaf/basic/BasicComboPopup$Handler;", nullptr, $PRIVATE, $field(BasicComboPopup, handler)},
	{"mouseMotionListener", "Ljava/awt/event/MouseMotionListener;", nullptr, $PROTECTED, $field(BasicComboPopup, mouseMotionListener)},
	{"mouseListener", "Ljava/awt/event/MouseListener;", nullptr, $PROTECTED, $field(BasicComboPopup, mouseListener)},
	{"keyListener", "Ljava/awt/event/KeyListener;", nullptr, $PROTECTED, $field(BasicComboPopup, keyListener)},
	{"listSelectionListener", "Ljavax/swing/event/ListSelectionListener;", nullptr, $PROTECTED, $field(BasicComboPopup, listSelectionListener)},
	{"listMouseListener", "Ljava/awt/event/MouseListener;", nullptr, $PROTECTED, $field(BasicComboPopup, listMouseListener)},
	{"listMouseMotionListener", "Ljava/awt/event/MouseMotionListener;", nullptr, $PROTECTED, $field(BasicComboPopup, listMouseMotionListener)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicComboPopup, propertyChangeListener)},
	{"listDataListener", "Ljavax/swing/event/ListDataListener;", nullptr, $PROTECTED, $field(BasicComboPopup, listDataListener)},
	{"itemListener", "Ljava/awt/event/ItemListener;", nullptr, $PROTECTED, $field(BasicComboPopup, itemListener)},
	{"scrollerMouseWheelListener", "Ljava/awt/event/MouseWheelListener;", nullptr, $PRIVATE, $field(BasicComboPopup, scrollerMouseWheelListener)},
	{"autoscrollTimer", "Ljavax/swing/Timer;", nullptr, $PROTECTED, $field(BasicComboPopup, autoscrollTimer)},
	{"hasEntered", "Z", nullptr, $PROTECTED, $field(BasicComboPopup, hasEntered)},
	{"isAutoScrolling", "Z", nullptr, $PROTECTED, $field(BasicComboPopup, isAutoScrolling)},
	{"scrollDirection", "I", nullptr, $PROTECTED, $field(BasicComboPopup, scrollDirection)},
	{"SCROLL_UP", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicComboPopup, SCROLL_UP)},
	{"SCROLL_DOWN", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicComboPopup, SCROLL_DOWN)},
	{}
};

$MethodInfo _BasicComboPopup_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(BasicComboPopup::*)($JComboBox*)>(&BasicComboPopup::init$))},
	{"autoScrollDown", "()V", nullptr, $PROTECTED},
	{"autoScrollUp", "()V", nullptr, $PROTECTED},
	{"computePopupBounds", "(IIII)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"configureList", "()V", nullptr, $PROTECTED},
	{"configurePopup", "()V", nullptr, $PROTECTED},
	{"configureScroller", "()V", nullptr, $PROTECTED},
	{"convertMouseEvent", "(Ljava/awt/event/MouseEvent;)Ljava/awt/event/MouseEvent;", nullptr, $PROTECTED},
	{"createItemListener", "()Ljava/awt/event/ItemListener;", nullptr, $PROTECTED},
	{"createKeyListener", "()Ljava/awt/event/KeyListener;", nullptr, $PROTECTED},
	{"createList", "()Ljavax/swing/JList;", "()Ljavax/swing/JList<Ljava/lang/Object;>;", $PROTECTED},
	{"createListDataListener", "()Ljavax/swing/event/ListDataListener;", nullptr, $PROTECTED},
	{"createListMouseListener", "()Ljava/awt/event/MouseListener;", nullptr, $PROTECTED},
	{"createListMouseMotionListener", "()Ljava/awt/event/MouseMotionListener;", nullptr, $PROTECTED},
	{"createListSelectionListener", "()Ljavax/swing/event/ListSelectionListener;", nullptr, $PROTECTED},
	{"createMouseListener", "()Ljava/awt/event/MouseListener;", nullptr, $PROTECTED},
	{"createMouseMotionListener", "()Ljava/awt/event/MouseMotionListener;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createScroller", "()Ljavax/swing/JScrollPane;", nullptr, $PROTECTED},
	{"delegateFocus", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{"firePopupMenuCanceled", "()V", nullptr, $PROTECTED},
	{"firePopupMenuWillBecomeInvisible", "()V", nullptr, $PROTECTED},
	{"firePopupMenuWillBecomeVisible", "()V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicComboPopup$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicComboPopup$Handler*(BasicComboPopup::*)()>(&BasicComboPopup::getHandler))},
	{"getKeyListener", "()Ljava/awt/event/KeyListener;", nullptr, $PUBLIC},
	{"getList", "()Ljavax/swing/JList;", "()Ljavax/swing/JList<Ljava/lang/Object;>;", $PUBLIC},
	{"getMouseListener", "()Ljava/awt/event/MouseListener;", nullptr, $PUBLIC},
	{"getMouseMotionListener", "()Ljava/awt/event/MouseMotionListener;", nullptr, $PUBLIC},
	{"getPopupHeightForRowCount", "(I)I", nullptr, $PROTECTED},
	{"getPopupLocation", "()Ljava/awt/Point;", nullptr, $PRIVATE, $method(static_cast<$Point*(BasicComboPopup::*)()>(&BasicComboPopup::getPopupLocation))},
	{"hide", "()V", nullptr, $PUBLIC},
	{"installComboBoxListeners", "()V", nullptr, $PROTECTED},
	{"installComboBoxModelListeners", "(Ljavax/swing/ComboBoxModel;)V", "(Ljavax/swing/ComboBoxModel<*>;)V", $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListListeners", "()V", nullptr, $PROTECTED},
	{"installScrollerListeners", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicComboPopup::*)()>(&BasicComboPopup::installScrollerListeners))},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"*isVisible", "()Z", nullptr, $PUBLIC},
	{"setListSelection", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BasicComboPopup::*)(int32_t)>(&BasicComboPopup::setListSelection))},
	{"show", "()V", nullptr, $PUBLIC},
	{"startAutoScrolling", "(I)V", nullptr, $PROTECTED},
	{"stopAutoScrolling", "()V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"togglePopup", "()V", nullptr, $PROTECTED},
	{"uninstallComboBoxModelListeners", "(Ljavax/swing/ComboBoxModel;)V", "(Ljavax/swing/ComboBoxModel<*>;)V", $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListListeners", "()V", nullptr, 0},
	{"uninstallScrollerListeners", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicComboPopup::*)()>(&BasicComboPopup::uninstallScrollerListeners))},
	{"uninstallingUI", "()V", nullptr, $PUBLIC},
	{"updateListBoxSelectionForEvent", "(Ljava/awt/event/MouseEvent;Z)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicComboPopup_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$Handler", "javax.swing.plaf.basic.BasicComboPopup", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicComboPopup$AutoScrollActionHandler", "javax.swing.plaf.basic.BasicComboPopup", "AutoScrollActionHandler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicComboPopup$PropertyChangeHandler", "javax.swing.plaf.basic.BasicComboPopup", "PropertyChangeHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicComboPopup$ItemHandler", "javax.swing.plaf.basic.BasicComboPopup", "ItemHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicComboPopup$ListMouseMotionHandler", "javax.swing.plaf.basic.BasicComboPopup", "ListMouseMotionHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicComboPopup$ListMouseHandler", "javax.swing.plaf.basic.BasicComboPopup", "ListMouseHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicComboPopup$ListDataHandler", "javax.swing.plaf.basic.BasicComboPopup", "ListDataHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicComboPopup$ListSelectionHandler", "javax.swing.plaf.basic.BasicComboPopup", "ListSelectionHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler", "javax.swing.plaf.basic.BasicComboPopup", "InvocationKeyHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicComboPopup$InvocationMouseMotionHandler", "javax.swing.plaf.basic.BasicComboPopup", "InvocationMouseMotionHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicComboPopup$InvocationMouseHandler", "javax.swing.plaf.basic.BasicComboPopup", "InvocationMouseHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicComboPopup$EmptyListModelClass", "javax.swing.plaf.basic.BasicComboPopup", "EmptyListModelClass", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicComboPopup$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicComboPopup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup",
	"javax.swing.JPopupMenu",
	"javax.swing.plaf.basic.ComboPopup",
	_BasicComboPopup_FieldInfo_,
	_BasicComboPopup_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboPopup_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup$Handler,javax.swing.plaf.basic.BasicComboPopup$AutoScrollActionHandler,javax.swing.plaf.basic.BasicComboPopup$PropertyChangeHandler,javax.swing.plaf.basic.BasicComboPopup$ItemHandler,javax.swing.plaf.basic.BasicComboPopup$ListMouseMotionHandler,javax.swing.plaf.basic.BasicComboPopup$ListMouseHandler,javax.swing.plaf.basic.BasicComboPopup$ListDataHandler,javax.swing.plaf.basic.BasicComboPopup$ListSelectionHandler,javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler,javax.swing.plaf.basic.BasicComboPopup$InvocationMouseMotionHandler,javax.swing.plaf.basic.BasicComboPopup$InvocationMouseHandler,javax.swing.plaf.basic.BasicComboPopup$EmptyListModelClass,javax.swing.plaf.basic.BasicComboPopup$1"
};

$Object* allocate$BasicComboPopup($Class* clazz) {
	return $of($alloc(BasicComboPopup));
}

bool BasicComboPopup::isVisible() {
	 return this->$JPopupMenu::isVisible();
}

$String* BasicComboPopup::toString() {
	 return this->$JPopupMenu::toString();
}

int32_t BasicComboPopup::hashCode() {
	 return this->$JPopupMenu::hashCode();
}

bool BasicComboPopup::equals(Object$* arg0) {
	 return this->$JPopupMenu::equals(arg0);
}

$Object* BasicComboPopup::clone() {
	 return this->$JPopupMenu::clone();
}

void BasicComboPopup::finalize() {
	this->$JPopupMenu::finalize();
}

$ListModel* BasicComboPopup::EmptyListModel = nullptr;
$Border* BasicComboPopup::LIST_BORDER = nullptr;

void BasicComboPopup::show() {
	$nc(this->comboBox)->firePopupMenuWillBecomeVisible();
	setListSelection($nc(this->comboBox)->getSelectedIndex());
	$var($Point, location, getPopupLocation());
	show(this->comboBox, $nc(location)->x, location->y);
}

void BasicComboPopup::hide() {
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, selection, $nc(manager)->getSelectedPath());
	for (int32_t i = 0; i < $nc(selection)->length; ++i) {
		if ($equals(selection->get(i), this)) {
			manager->clearSelectedPath();
			break;
		}
	}
	if ($nc(selection)->length > 0) {
		$nc(this->comboBox)->repaint();
	}
}

$JList* BasicComboPopup::getList() {
	return this->list$;
}

$MouseListener* BasicComboPopup::getMouseListener() {
	if (this->mouseListener == nullptr) {
		$set(this, mouseListener, createMouseListener());
	}
	return this->mouseListener;
}

$MouseMotionListener* BasicComboPopup::getMouseMotionListener() {
	if (this->mouseMotionListener == nullptr) {
		$set(this, mouseMotionListener, createMouseMotionListener());
	}
	return this->mouseMotionListener;
}

$KeyListener* BasicComboPopup::getKeyListener() {
	if (this->keyListener == nullptr) {
		$set(this, keyListener, createKeyListener());
	}
	return this->keyListener;
}

void BasicComboPopup::uninstallingUI() {
	if (this->propertyChangeListener != nullptr) {
		$nc(this->comboBox)->removePropertyChangeListener(this->propertyChangeListener);
	}
	if (this->itemListener != nullptr) {
		$nc(this->comboBox)->removeItemListener(this->itemListener);
	}
	uninstallComboBoxModelListeners($($nc(this->comboBox)->getModel()));
	uninstallKeyboardActions();
	uninstallListListeners();
	uninstallScrollerListeners();
	$nc(this->list$)->setModel(BasicComboPopup::EmptyListModel);
}

void BasicComboPopup::uninstallComboBoxModelListeners($ComboBoxModel* model) {
	if (model != nullptr && this->listDataListener != nullptr) {
		model->removeListDataListener(this->listDataListener);
	}
}

void BasicComboPopup::uninstallKeyboardActions() {
}

void BasicComboPopup::init$($JComboBox* combo) {
	$JPopupMenu::init$();
	this->valueIsAdjusting = false;
	this->hasEntered = false;
	this->isAutoScrolling = false;
	this->scrollDirection = BasicComboPopup::SCROLL_UP;
	setName("ComboPopup.popup"_s);
	$set(this, comboBox, combo);
	setLightWeightPopupEnabled($nc(this->comboBox)->isLightWeightPopupEnabled());
	$set(this, list$, createList());
	$nc(this->list$)->setName("ComboBox.list"_s);
	configureList();
	$set(this, scroller, createScroller());
	$nc(this->scroller)->setName("ComboBox.scrollPane"_s);
	configureScroller();
	configurePopup();
	installComboBoxListeners();
	installKeyboardActions();
}

void BasicComboPopup::firePopupMenuWillBecomeVisible() {
	if (this->scrollerMouseWheelListener != nullptr) {
		$nc(this->comboBox)->addMouseWheelListener(this->scrollerMouseWheelListener);
	}
	$JPopupMenu::firePopupMenuWillBecomeVisible();
}

void BasicComboPopup::firePopupMenuWillBecomeInvisible() {
	if (this->scrollerMouseWheelListener != nullptr) {
		$nc(this->comboBox)->removeMouseWheelListener(this->scrollerMouseWheelListener);
	}
	$JPopupMenu::firePopupMenuWillBecomeInvisible();
	$nc(this->comboBox)->firePopupMenuWillBecomeInvisible();
}

void BasicComboPopup::firePopupMenuCanceled() {
	if (this->scrollerMouseWheelListener != nullptr) {
		$nc(this->comboBox)->removeMouseWheelListener(this->scrollerMouseWheelListener);
	}
	$JPopupMenu::firePopupMenuCanceled();
	$nc(this->comboBox)->firePopupMenuCanceled();
}

$MouseListener* BasicComboPopup::createMouseListener() {
	return getHandler();
}

$MouseMotionListener* BasicComboPopup::createMouseMotionListener() {
	return getHandler();
}

$KeyListener* BasicComboPopup::createKeyListener() {
	return nullptr;
}

$ListSelectionListener* BasicComboPopup::createListSelectionListener() {
	return nullptr;
}

$ListDataListener* BasicComboPopup::createListDataListener() {
	return nullptr;
}

$MouseListener* BasicComboPopup::createListMouseListener() {
	return getHandler();
}

$MouseMotionListener* BasicComboPopup::createListMouseMotionListener() {
	return getHandler();
}

$PropertyChangeListener* BasicComboPopup::createPropertyChangeListener() {
	return getHandler();
}

$ItemListener* BasicComboPopup::createItemListener() {
	return getHandler();
}

$BasicComboPopup$Handler* BasicComboPopup::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicComboPopup$Handler, this));
	}
	return this->handler;
}

$JList* BasicComboPopup::createList() {
	return $new($BasicComboPopup$1, this, $($nc(this->comboBox)->getModel()));
}

void BasicComboPopup::configureList() {
	$useLocalCurrentObjectStackCache();
	$nc(this->list$)->setFont($($nc(this->comboBox)->getFont()));
	$nc(this->list$)->setForeground($($nc(this->comboBox)->getForeground()));
	$nc(this->list$)->setBackground($($nc(this->comboBox)->getBackground()));
	$nc(this->list$)->setSelectionForeground($($UIManager::getColor("ComboBox.selectionForeground"_s)));
	$nc(this->list$)->setSelectionBackground($($UIManager::getColor("ComboBox.selectionBackground"_s)));
	$nc(this->list$)->setBorder(nullptr);
	$nc(this->list$)->setCellRenderer($($nc(this->comboBox)->getRenderer()));
	$nc(this->list$)->setFocusable(false);
	$nc(this->list$)->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
	setListSelection($nc(this->comboBox)->getSelectedIndex());
	installListListeners();
}

void BasicComboPopup::installListListeners() {
	if (($assignField(this, listMouseListener, createListMouseListener())) != nullptr) {
		$nc(this->list$)->addMouseListener(this->listMouseListener);
	}
	if (($assignField(this, listMouseMotionListener, createListMouseMotionListener())) != nullptr) {
		$nc(this->list$)->addMouseMotionListener(this->listMouseMotionListener);
	}
	if (($assignField(this, listSelectionListener, createListSelectionListener())) != nullptr) {
		$nc(this->list$)->addListSelectionListener(this->listSelectionListener);
	}
}

void BasicComboPopup::uninstallListListeners() {
	if (this->listMouseListener != nullptr) {
		$nc(this->list$)->removeMouseListener(this->listMouseListener);
		$set(this, listMouseListener, nullptr);
	}
	if (this->listMouseMotionListener != nullptr) {
		$nc(this->list$)->removeMouseMotionListener(this->listMouseMotionListener);
		$set(this, listMouseMotionListener, nullptr);
	}
	if (this->listSelectionListener != nullptr) {
		$nc(this->list$)->removeListSelectionListener(this->listSelectionListener);
		$set(this, listSelectionListener, nullptr);
	}
	$set(this, handler, nullptr);
}

$JScrollPane* BasicComboPopup::createScroller() {
	$var($JScrollPane, sp, $new($JScrollPane, this->list$, $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED, $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_NEVER));
	sp->setHorizontalScrollBar(nullptr);
	return sp;
}

void BasicComboPopup::configureScroller() {
	$nc(this->scroller)->setFocusable(false);
	$nc($($nc(this->scroller)->getVerticalScrollBar()))->setFocusable(false);
	$nc(this->scroller)->setBorder(nullptr);
	installScrollerListeners();
}

void BasicComboPopup::configurePopup() {
	setLayout($$new($BoxLayout, this, $BoxLayout::Y_AXIS));
	setBorderPainted(true);
	setBorder(BasicComboPopup::LIST_BORDER);
	setOpaque(false);
	add(static_cast<$Component*>(this->scroller));
	setDoubleBuffered(true);
	setFocusable(false);
}

void BasicComboPopup::installScrollerListeners() {
	$set(this, scrollerMouseWheelListener, getHandler());
	if (this->scrollerMouseWheelListener != nullptr) {
		$nc(this->scroller)->addMouseWheelListener(this->scrollerMouseWheelListener);
	}
}

void BasicComboPopup::uninstallScrollerListeners() {
	if (this->scrollerMouseWheelListener != nullptr) {
		$nc(this->scroller)->removeMouseWheelListener(this->scrollerMouseWheelListener);
		$set(this, scrollerMouseWheelListener, nullptr);
	}
}

void BasicComboPopup::installComboBoxListeners() {
	if (($assignField(this, propertyChangeListener, createPropertyChangeListener())) != nullptr) {
		$nc(this->comboBox)->addPropertyChangeListener(this->propertyChangeListener);
	}
	if (($assignField(this, itemListener, createItemListener())) != nullptr) {
		$nc(this->comboBox)->addItemListener(this->itemListener);
	}
	installComboBoxModelListeners($($nc(this->comboBox)->getModel()));
}

void BasicComboPopup::installComboBoxModelListeners($ComboBoxModel* model) {
	if (model != nullptr && ($assignField(this, listDataListener, createListDataListener())) != nullptr) {
		model->addListDataListener(this->listDataListener);
	}
}

void BasicComboPopup::installKeyboardActions() {
}

bool BasicComboPopup::isFocusTraversable() {
	return false;
}

void BasicComboPopup::startAutoScrolling(int32_t direction) {
	$useLocalCurrentObjectStackCache();
	if (this->isAutoScrolling) {
		$nc(this->autoscrollTimer)->stop();
	}
	this->isAutoScrolling = true;
	if (direction == BasicComboPopup::SCROLL_UP) {
		this->scrollDirection = BasicComboPopup::SCROLL_UP;
		$var($Point, convertedPoint, $SwingUtilities::convertPoint(this->scroller, $$new($Point, 1, 1), this->list$));
		int32_t top = $nc(this->list$)->locationToIndex(convertedPoint);
		$nc(this->list$)->setSelectedIndex(top);
		$set(this, autoscrollTimer, $new($Timer, 100, $$new($BasicComboPopup$AutoScrollActionHandler, this, BasicComboPopup::SCROLL_UP)));
	} else if (direction == BasicComboPopup::SCROLL_DOWN) {
		this->scrollDirection = BasicComboPopup::SCROLL_DOWN;
		$var($Dimension, size, $nc(this->scroller)->getSize());
		$var($Point, convertedPoint, $SwingUtilities::convertPoint(this->scroller, $$new($Point, 1, ($nc(size)->height - 1) - 2), this->list$));
		int32_t bottom = $nc(this->list$)->locationToIndex(convertedPoint);
		$nc(this->list$)->setSelectedIndex(bottom);
		$set(this, autoscrollTimer, $new($Timer, 100, $$new($BasicComboPopup$AutoScrollActionHandler, this, BasicComboPopup::SCROLL_DOWN)));
	}
	$nc(this->autoscrollTimer)->start();
}

void BasicComboPopup::stopAutoScrolling() {
	this->isAutoScrolling = false;
	if (this->autoscrollTimer != nullptr) {
		$nc(this->autoscrollTimer)->stop();
		$set(this, autoscrollTimer, nullptr);
	}
}

void BasicComboPopup::autoScrollUp() {
	int32_t index = $nc(this->list$)->getSelectedIndex();
	if (index > 0) {
		$nc(this->list$)->setSelectedIndex(index - 1);
		$nc(this->list$)->ensureIndexIsVisible(index - 1);
	}
}

void BasicComboPopup::autoScrollDown() {
	int32_t index = $nc(this->list$)->getSelectedIndex();
	int32_t lastItem = $nc($($nc(this->list$)->getModel()))->getSize() - 1;
	if (index < lastItem) {
		$nc(this->list$)->setSelectedIndex(index + 1);
		$nc(this->list$)->ensureIndexIsVisible(index + 1);
	}
}

$AccessibleContext* BasicComboPopup::getAccessibleContext() {
	$var($AccessibleContext, context, $JPopupMenu::getAccessibleContext());
	$nc(context)->setAccessibleParent(this->comboBox);
	return context;
}

void BasicComboPopup::delegateFocus($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->comboBox)->isEditable()) {
		$var($Component, comp, $nc($($nc(this->comboBox)->getEditor()))->getEditorComponent());
		if ((!($instanceOf($JComponent, comp))) || $nc(($cast($JComponent, comp)))->isRequestFocusEnabled()) {
			$nc(comp)->requestFocus();
		}
	} else if ($nc(this->comboBox)->isRequestFocusEnabled()) {
		$nc(this->comboBox)->requestFocus();
	}
}

void BasicComboPopup::togglePopup() {
	if (isVisible()) {
		hide();
	} else {
		show();
	}
}

void BasicComboPopup::setListSelection(int32_t selectedIndex) {
	if (selectedIndex == -1) {
		$nc(this->list$)->clearSelection();
	} else {
		$nc(this->list$)->setSelectedIndex(selectedIndex);
		$nc(this->list$)->ensureIndexIsVisible(selectedIndex);
	}
}

$MouseEvent* BasicComboPopup::convertMouseEvent($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, $cast($Component, $nc(e)->getSource()));
	$var($Point, convertedPoint, $SwingUtilities::convertPoint(var$0, $(e->getPoint()), this->list$));
	$var($Component, var$1, $cast($Component, $nc(e)->getSource()));
	int32_t var$2 = e->getID();
	int64_t var$3 = e->getWhen();
	int32_t var$4 = e->getModifiers();
	int32_t var$5 = $nc(convertedPoint)->x;
	int32_t var$6 = convertedPoint->y;
	int32_t var$7 = e->getXOnScreen();
	int32_t var$8 = e->getYOnScreen();
	int32_t var$9 = e->getClickCount();
	$var($MouseEvent, newEvent, $new($MouseEvent, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, e->isPopupTrigger(), $MouseEvent::NOBUTTON));
	$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
	$nc(meAccessor)->setCausedByTouchEvent(newEvent, meAccessor->isCausedByTouchEvent(e));
	return newEvent;
}

int32_t BasicComboPopup::getPopupHeightForRowCount(int32_t maxRowCount) {
	$useLocalCurrentObjectStackCache();
	int32_t minRowCount = $Math::min(maxRowCount, $nc(this->comboBox)->getItemCount());
	int32_t height = 0;
	$var($ListCellRenderer, renderer, $nc(this->list$)->getCellRenderer());
	$var($Object, value, nullptr);
	for (int32_t i = 0; i < minRowCount; ++i) {
		$assign(value, $nc($($nc(this->list$)->getModel()))->getElementAt(i));
		$var($Component, c, $nc(renderer)->getListCellRendererComponent(this->list$, value, i, false, false));
		height += $nc($($nc(c)->getPreferredSize()))->height;
	}
	if (height == 0) {
		height = $nc(this->comboBox)->getHeight();
	}
	$var($Border, border, $nc(this->scroller)->getViewportBorder());
	if (border != nullptr) {
		$var($Insets, insets, border->getBorderInsets(nullptr));
		height += $nc(insets)->top + insets->bottom;
	}
	$assign(border, $nc(this->scroller)->getBorder());
	if (border != nullptr) {
		$var($Insets, insets, border->getBorderInsets(nullptr));
		height += $nc(insets)->top + insets->bottom;
	}
	return height;
}

$Rectangle* BasicComboPopup::computePopupBounds(int32_t px, int32_t py, int32_t pw, int32_t ph) {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	$var($Rectangle, screenBounds, nullptr);
	$var($GraphicsConfiguration, gc, $nc(this->comboBox)->getGraphicsConfiguration());
	$var($Point, p, $new($Point));
	$SwingUtilities::convertPointFromScreen(p, this->comboBox);
	if (gc != nullptr) {
		$var($Insets, screenInsets, $nc(toolkit)->getScreenInsets(gc));
		$assign(screenBounds, gc->getBounds());
		$nc(screenBounds)->width -= ($nc(screenInsets)->left + screenInsets->right);
		screenBounds->height -= (screenInsets->top + screenInsets->bottom);
		screenBounds->x += (p->x + screenInsets->left);
		screenBounds->y += (p->y + screenInsets->top);
	} else {
		$assign(screenBounds, $new($Rectangle, p, $($nc(toolkit)->getScreenSize())));
	}
	int32_t borderHeight = 0;
	$var($Border, popupBorder, getBorder());
	if (popupBorder != nullptr) {
		$var($Insets, borderInsets, popupBorder->getBorderInsets(this));
		borderHeight = $nc(borderInsets)->top + borderInsets->bottom;
		$nc(screenBounds)->width -= (borderInsets->left + borderInsets->right);
		screenBounds->height -= borderHeight;
	}
	$var($Rectangle, rect, $new($Rectangle, px, py, pw, ph));
	if (py + ph > $nc(screenBounds)->y + screenBounds->height) {
		if (ph <= -screenBounds->y - borderHeight) {
			rect->y = -ph - borderHeight;
		} else {
			rect->y = screenBounds->y + $Math::max(0, (screenBounds->height - ph) / 2);
			rect->height = $Math::min(screenBounds->height, ph);
		}
	}
	return rect;
}

$Point* BasicComboPopup::getPopupLocation() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, popupSize, $nc(this->comboBox)->getSize());
	$var($Insets, insets, getInsets());
	$nc(popupSize)->setSize(popupSize->width - ($nc(insets)->right + insets->left), getPopupHeightForRowCount($nc(this->comboBox)->getMaximumRowCount()));
	$var($Rectangle, popupBounds, computePopupBounds(0, $nc($($nc(this->comboBox)->getBounds()))->height, popupSize->width, popupSize->height));
	$var($Dimension, scrollSize, $nc(popupBounds)->getSize());
	$var($Point, popupLocation, popupBounds->getLocation());
	$nc(this->scroller)->setMaximumSize(scrollSize);
	$nc(this->scroller)->setPreferredSize(scrollSize);
	$nc(this->scroller)->setMinimumSize(scrollSize);
	$nc(this->list$)->revalidate();
	return popupLocation;
}

void BasicComboPopup::updateListBoxSelectionForEvent($MouseEvent* anEvent, bool shouldScroll) {
	$useLocalCurrentObjectStackCache();
	$var($Point, location, $nc(anEvent)->getPoint());
	if (this->list$ == nullptr) {
		return;
	}
	int32_t index = $nc(this->list$)->locationToIndex(location);
	if (index == -1) {
		if ($nc(location)->y < 0) {
			index = 0;
		} else {
			index = $nc($($nc(this->comboBox)->getModel()))->getSize() - 1;
		}
	}
	if ($nc(this->list$)->getSelectedIndex() != index) {
		$nc(this->list$)->setSelectedIndex(index);
		if (shouldScroll) {
			$nc(this->list$)->ensureIndexIsVisible(index);
		}
	}
}

void clinit$BasicComboPopup($Class* class$) {
	$assignStatic(BasicComboPopup::EmptyListModel, $new($BasicComboPopup$EmptyListModelClass));
	$init($Color);
	$assignStatic(BasicComboPopup::LIST_BORDER, $new($LineBorder, $Color::BLACK, 1));
}

BasicComboPopup::BasicComboPopup() {
}

$Class* BasicComboPopup::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup, name, initialize, &_BasicComboPopup_ClassInfo_, clinit$BasicComboPopup, allocate$BasicComboPopup);
	return class$;
}

$Class* BasicComboPopup::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax