#include <javax/swing/plaf/basic/BasicTableUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Math.h>
#include <java/util/Enumeration.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable$DropLocation.h>
#include <javax/swing/JTable$PrintMode.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TableUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTableUI$Actions.h>
#include <javax/swing/plaf/basic/BasicTableUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTableUI$TableTransferHandler.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef ADD_TO_SELECTION
#undef BASELINE_COMPONENT_KEY
#undef CANCEL_EDITING
#undef CLEAR_SELECTION
#undef CONSTANT_ASCENT
#undef EXTEND_TO
#undef FIRST_COLUMN
#undef FIRST_COLUMN_EXTEND_SELECTION
#undef FIRST_ROW
#undef FIRST_ROW_EXTEND_SELECTION
#undef FIT_WIDTH
#undef FOCUS_HEADER
#undef GRAY
#undef LAST_COLUMN
#undef LAST_COLUMN_EXTEND_SELECTION
#undef LAST_ROW
#undef LAST_ROW_EXTEND_SELECTION
#undef MAX_VALUE
#undef MOVE_SELECTION_TO
#undef NAME
#undef NEXT_COLUMN
#undef NEXT_COLUMN_CELL
#undef NEXT_COLUMN_CHANGE_LEAD
#undef NEXT_COLUMN_EXTEND_SELECTION
#undef NEXT_ROW
#undef NEXT_ROW_CELL
#undef NEXT_ROW_CHANGE_LEAD
#undef NEXT_ROW_EXTEND_SELECTION
#undef PREVIOUS_COLUMN
#undef PREVIOUS_COLUMN_CELL
#undef PREVIOUS_COLUMN_CHANGE_LEAD
#undef PREVIOUS_COLUMN_EXTEND_SELECTION
#undef PREVIOUS_ROW
#undef PREVIOUS_ROW_CELL
#undef PREVIOUS_ROW_CHANGE_LEAD
#undef PREVIOUS_ROW_EXTEND_SELECTION
#undef SCROLL_DOWN_CHANGE_SELECTION
#undef SCROLL_DOWN_EXTEND_SELECTION
#undef SCROLL_LEFT_CHANGE_SELECTION
#undef SCROLL_LEFT_EXTEND_SELECTION
#undef SCROLL_RIGHT_CHANGE_SELECTION
#undef SCROLL_RIGHT_EXTEND_SELECTION
#undef SCROLL_UP_CHANGE_SELECTION
#undef SCROLL_UP_EXTEND_SELECTION
#undef SELECT_ALL
#undef START_EDITING
#undef TOGGLE_AND_ANCHOR
#undef TRUE
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $FocusListener = ::java::awt::event::FocusListener;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $JTable$DropLocation = ::javax::swing::JTable$DropLocation;
using $JTable$PrintMode = ::javax::swing::JTable$PrintMode;
using $JViewport = ::javax::swing::JViewport;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TableUI = ::javax::swing::plaf::TableUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTableUI$Actions = ::javax::swing::plaf::basic::BasicTableUI$Actions;
using $BasicTableUI$Handler = ::javax::swing::plaf::basic::BasicTableUI$Handler;
using $BasicTableUI$TableTransferHandler = ::javax::swing::plaf::basic::BasicTableUI$TableTransferHandler;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTableUI_FieldInfo_[] = {
	{"BASELINE_COMPONENT_KEY", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI, BASELINE_COMPONENT_KEY)},
	{"table", "Ljavax/swing/JTable;", nullptr, $PROTECTED, $field(BasicTableUI, table)},
	{"rendererPane", "Ljavax/swing/CellRendererPane;", nullptr, $PROTECTED, $field(BasicTableUI, rendererPane)},
	{"keyListener", "Ljava/awt/event/KeyListener;", nullptr, $PROTECTED, $field(BasicTableUI, keyListener)},
	{"focusListener", "Ljava/awt/event/FocusListener;", nullptr, $PROTECTED, $field(BasicTableUI, focusListener)},
	{"mouseInputListener", "Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED, $field(BasicTableUI, mouseInputListener)},
	{"handler", "Ljavax/swing/plaf/basic/BasicTableUI$Handler;", nullptr, $PRIVATE, $field(BasicTableUI, handler)},
	{"isFileList", "Z", nullptr, $PRIVATE, $field(BasicTableUI, isFileList)},
	{"defaultTransferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI, defaultTransferHandler)},
	{}
};

$MethodInfo _BasicTableUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicTableUI::*)()>(&BasicTableUI::init$))},
	{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createKeyListener", "()Ljava/awt/event/KeyListener;", nullptr, $PROTECTED},
	{"createMouseInputListener", "()Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createTableSize", "(J)Ljava/awt/Dimension;", nullptr, $PRIVATE, $method(static_cast<$Dimension*(BasicTableUI::*)(int64_t)>(&BasicTableUI::createTableSize))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicTableUI::createUI))},
	{"extendRect", "(Ljava/awt/Rectangle;Z)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(BasicTableUI::*)($Rectangle*,bool)>(&BasicTableUI::extendRect))},
	{"getAdjustedLead", "(Ljavax/swing/JTable;ZLjavax/swing/ListSelectionModel;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($JTable*,bool,$ListSelectionModel*)>(&BasicTableUI::getAdjustedLead))},
	{"getAdjustedLead", "(Ljavax/swing/JTable;Z)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($JTable*,bool)>(&BasicTableUI::getAdjustedLead))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getHDropLineRect", "(Ljavax/swing/JTable$DropLocation;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(BasicTableUI::*)($JTable$DropLocation*)>(&BasicTableUI::getHDropLineRect))},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicTableUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicTableUI$Handler*(BasicTableUI::*)()>(&BasicTableUI::getHandler))},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getVDropLineRect", "(Ljavax/swing/JTable$DropLocation;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(BasicTableUI::*)($JTable$DropLocation*)>(&BasicTableUI::getVDropLineRect))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installDefaults2", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI::*)()>(&BasicTableUI::installDefaults2))},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicTableUI::loadActionMap))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintCell", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;II)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI::*)($Graphics*,$Rectangle*,int32_t,int32_t)>(&BasicTableUI::paintCell))},
	{"paintCells", "(Ljava/awt/Graphics;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI::*)($Graphics*,int32_t,int32_t,int32_t,int32_t)>(&BasicTableUI::paintCells))},
	{"paintDraggedArea", "(Ljava/awt/Graphics;IILjavax/swing/table/TableColumn;I)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI::*)($Graphics*,int32_t,int32_t,$TableColumn*,int32_t)>(&BasicTableUI::paintDraggedArea))},
	{"paintDropLines", "(Ljava/awt/Graphics;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI::*)($Graphics*)>(&BasicTableUI::paintDropLines))},
	{"paintGrid", "(Ljava/awt/Graphics;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI::*)($Graphics*,int32_t,int32_t,int32_t,int32_t)>(&BasicTableUI::paintGrid))},
	{"pointOutsidePrefSize", "(IILjava/awt/Point;)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicTableUI::*)(int32_t,int32_t,$Point*)>(&BasicTableUI::pointOutsidePrefSize))},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"viewIndexForColumn", "(Ljavax/swing/table/TableColumn;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicTableUI::*)($TableColumn*)>(&BasicTableUI::viewIndexForColumn))},
	{}
};

$InnerClassInfo _BasicTableUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTableUI$TableTransferHandler", "javax.swing.plaf.basic.BasicTableUI", "TableTransferHandler", $STATIC},
	{"javax.swing.plaf.basic.BasicTableUI$Handler", "javax.swing.plaf.basic.BasicTableUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicTableUI$MouseInputHandler", "javax.swing.plaf.basic.BasicTableUI", "MouseInputHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTableUI$FocusHandler", "javax.swing.plaf.basic.BasicTableUI", "FocusHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTableUI$KeyHandler", "javax.swing.plaf.basic.BasicTableUI", "KeyHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTableUI$Actions", "javax.swing.plaf.basic.BasicTableUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicTableUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTableUI",
	"javax.swing.plaf.TableUI",
	nullptr,
	_BasicTableUI_FieldInfo_,
	_BasicTableUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTableUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTableUI$TableTransferHandler,javax.swing.plaf.basic.BasicTableUI$Handler,javax.swing.plaf.basic.BasicTableUI$MouseInputHandler,javax.swing.plaf.basic.BasicTableUI$FocusHandler,javax.swing.plaf.basic.BasicTableUI$KeyHandler,javax.swing.plaf.basic.BasicTableUI$Actions"
};

$Object* allocate$BasicTableUI($Class* clazz) {
	return $of($alloc(BasicTableUI));
}

$StringBuilder* BasicTableUI::BASELINE_COMPONENT_KEY = nullptr;
$TransferHandler* BasicTableUI::defaultTransferHandler = nullptr;

void BasicTableUI::init$() {
	$TableUI::init$();
	this->isFileList = false;
}

bool BasicTableUI::pointOutsidePrefSize(int32_t row, int32_t column, $Point* p) {
	if (!this->isFileList) {
		return false;
	}
	return $SwingUtilities2::pointOutsidePrefSize(this->table, row, column, p);
}

$BasicTableUI$Handler* BasicTableUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicTableUI$Handler, this));
	}
	return this->handler;
}

$KeyListener* BasicTableUI::createKeyListener() {
	return nullptr;
}

$FocusListener* BasicTableUI::createFocusListener() {
	return getHandler();
}

$MouseInputListener* BasicTableUI::createMouseInputListener() {
	return getHandler();
}

$ComponentUI* BasicTableUI::createUI($JComponent* c) {
	$init(BasicTableUI);
	return $new(BasicTableUI);
}

void BasicTableUI::installUI($JComponent* c) {
	$set(this, table, $cast($JTable, c));
	$set(this, rendererPane, $new($CellRendererPane));
	$nc(this->table)->add(static_cast<$Component*>(this->rendererPane));
	installDefaults();
	installDefaults2();
	installListeners();
	installKeyboardActions();
}

void BasicTableUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$LookAndFeel::installColorsAndFont(this->table, "Table.background"_s, "Table.foreground"_s, "Table.font"_s);
	$init($Boolean);
	$LookAndFeel::installProperty(this->table, "opaque"_s, $Boolean::TRUE);
	$var($Color, sbg, $nc(this->table)->getSelectionBackground());
	if (sbg == nullptr || $instanceOf($UIResource, sbg)) {
		$assign(sbg, $UIManager::getColor("Table.selectionBackground"_s));
		$nc(this->table)->setSelectionBackground(sbg != nullptr ? sbg : $($UIManager::getColor("textHighlight"_s)));
	}
	$var($Color, sfg, $nc(this->table)->getSelectionForeground());
	if (sfg == nullptr || $instanceOf($UIResource, sfg)) {
		$assign(sfg, $UIManager::getColor("Table.selectionForeground"_s));
		$nc(this->table)->setSelectionForeground(sfg != nullptr ? sfg : $($UIManager::getColor("textHighlightText"_s)));
	}
	$var($Color, gridColor, $nc(this->table)->getGridColor());
	if (gridColor == nullptr || $instanceOf($UIResource, gridColor)) {
		$assign(gridColor, $UIManager::getColor("Table.gridColor"_s));
		$init($Color);
		$nc(this->table)->setGridColor(gridColor != nullptr ? gridColor : $Color::GRAY);
	}
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this->table));
	if (parent != nullptr) {
		$assign(parent, parent->getParent());
		if (parent != nullptr && $instanceOf($JScrollPane, parent)) {
			$LookAndFeel::installBorder($cast($JScrollPane, parent), "Table.scrollPaneBorder"_s);
		}
	}
	this->isFileList = $nc($Boolean::TRUE)->equals($($nc(this->table)->getClientProperty("Table.isFileList"_s)));
}

void BasicTableUI::installDefaults2() {
	$useLocalCurrentObjectStackCache();
	$var($TransferHandler, th, $nc(this->table)->getTransferHandler());
	if (th == nullptr || $instanceOf($UIResource, th)) {
		$nc(this->table)->setTransferHandler(BasicTableUI::defaultTransferHandler);
		if ($instanceOf($UIResource, $($nc(this->table)->getDropTarget()))) {
			$nc(this->table)->setDropTarget(nullptr);
		}
	}
}

void BasicTableUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	$set(this, focusListener, createFocusListener());
	$set(this, keyListener, createKeyListener());
	$set(this, mouseInputListener, createMouseInputListener());
	$nc(this->table)->addFocusListener(this->focusListener);
	$nc(this->table)->addKeyListener(this->keyListener);
	$nc(this->table)->addMouseListener(this->mouseInputListener);
	$nc(this->table)->addMouseMotionListener(this->mouseInputListener);
	$nc(this->table)->addPropertyChangeListener($(getHandler()));
	if (this->isFileList) {
		$nc($($nc(this->table)->getSelectionModel()))->addListSelectionListener($(getHandler()));
	}
}

void BasicTableUI::installKeyboardActions() {
	$LazyActionMap::installLazyActionMap(this->table, BasicTableUI::class$, "Table.actionMap"_s);
	$var($InputMap, inputMap, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$SwingUtilities::replaceUIInputMap(this->table, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, inputMap);
}

$InputMap* BasicTableUI::getInputMap(int32_t condition) {
	$useLocalCurrentObjectStackCache();
	if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		$var($InputMap, keyMap, $cast($InputMap, $DefaultLookup::get(this->table, this, "Table.ancestorInputMap"_s)));
		$var($InputMap, rtlKeyMap, nullptr);
		bool var$0 = $nc($($nc(this->table)->getComponentOrientation()))->isLeftToRight();
		if (var$0 || (($assign(rtlKeyMap, $cast($InputMap, $DefaultLookup::get(this->table, this, "Table.ancestorInputMap.RightToLeft"_s)))) == nullptr)) {
			return keyMap;
		} else {
			$nc(rtlKeyMap)->setParent(keyMap);
			return rtlKeyMap;
		}
	}
	return nullptr;
}

void BasicTableUI::loadActionMap($LazyActionMap* map) {
	$init(BasicTableUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicTableUI$Actions);
	$nc(map)->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::NEXT_COLUMN, 1, 0, false, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::NEXT_COLUMN_CHANGE_LEAD, 1, 0, false, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::PREVIOUS_COLUMN, -1, 0, false, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::PREVIOUS_COLUMN_CHANGE_LEAD, -1, 0, false, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::NEXT_ROW, 0, 1, false, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::NEXT_ROW_CHANGE_LEAD, 0, 1, false, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::PREVIOUS_ROW, 0, -1, false, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::PREVIOUS_ROW_CHANGE_LEAD, 0, -1, false, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::NEXT_COLUMN_EXTEND_SELECTION, 1, 0, true, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::PREVIOUS_COLUMN_EXTEND_SELECTION, -1, 0, true, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::NEXT_ROW_EXTEND_SELECTION, 0, 1, true, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::PREVIOUS_ROW_EXTEND_SELECTION, 0, -1, true, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::SCROLL_UP_CHANGE_SELECTION, false, false, true, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::SCROLL_DOWN_CHANGE_SELECTION, false, true, true, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::FIRST_COLUMN, false, false, false, true));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::LAST_COLUMN, false, true, false, true));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::SCROLL_UP_EXTEND_SELECTION, true, false, true, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::SCROLL_DOWN_EXTEND_SELECTION, true, true, true, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::FIRST_COLUMN_EXTEND_SELECTION, true, false, false, true));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::LAST_COLUMN_EXTEND_SELECTION, true, true, false, true));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::FIRST_ROW, false, false, true, true));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::LAST_ROW, false, true, true, true));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::FIRST_ROW_EXTEND_SELECTION, true, false, true, true));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::LAST_ROW_EXTEND_SELECTION, true, true, true, true));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::NEXT_COLUMN_CELL, 1, 0, false, true));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::PREVIOUS_COLUMN_CELL, -1, 0, false, true));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::NEXT_ROW_CELL, 0, 1, false, true));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::PREVIOUS_ROW_CELL, 0, -1, false, true));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::SELECT_ALL));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::CLEAR_SELECTION));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::CANCEL_EDITING));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::START_EDITING));
	$init($Action);
	$var($Object, var$0, $nc($($TransferHandler::getCutAction()))->getValue($Action::NAME));
	map->put(var$0, $($TransferHandler::getCutAction()));
	$var($Object, var$1, $nc($($TransferHandler::getCopyAction()))->getValue($Action::NAME));
	map->put(var$1, $($TransferHandler::getCopyAction()));
	$var($Object, var$2, $nc($($TransferHandler::getPasteAction()))->getValue($Action::NAME));
	map->put(var$2, $($TransferHandler::getPasteAction()));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::SCROLL_LEFT_CHANGE_SELECTION, false, false, false, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::SCROLL_RIGHT_CHANGE_SELECTION, false, true, false, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::SCROLL_LEFT_EXTEND_SELECTION, true, false, false, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::SCROLL_RIGHT_EXTEND_SELECTION, true, true, false, false));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::ADD_TO_SELECTION));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::TOGGLE_AND_ANCHOR));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::EXTEND_TO));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::MOVE_SELECTION_TO));
	map->put($$new($BasicTableUI$Actions, $BasicTableUI$Actions::FOCUS_HEADER));
}

void BasicTableUI::uninstallUI($JComponent* c) {
	uninstallDefaults();
	uninstallListeners();
	uninstallKeyboardActions();
	$nc(this->table)->remove(static_cast<$Component*>(this->rendererPane));
	$set(this, rendererPane, nullptr);
	$set(this, table, nullptr);
}

void BasicTableUI::uninstallDefaults() {
	if ($instanceOf($UIResource, $($nc(this->table)->getTransferHandler()))) {
		$nc(this->table)->setTransferHandler(nullptr);
	}
}

void BasicTableUI::uninstallListeners() {
	$useLocalCurrentObjectStackCache();
	$nc(this->table)->removeFocusListener(this->focusListener);
	$nc(this->table)->removeKeyListener(this->keyListener);
	$nc(this->table)->removeMouseListener(this->mouseInputListener);
	$nc(this->table)->removeMouseMotionListener(this->mouseInputListener);
	$nc(this->table)->removePropertyChangeListener($(getHandler()));
	if (this->isFileList) {
		$nc($($nc(this->table)->getSelectionModel()))->removeListSelectionListener($(getHandler()));
	}
	$set(this, focusListener, nullptr);
	$set(this, keyListener, nullptr);
	$set(this, mouseInputListener, nullptr);
	$set(this, handler, nullptr);
}

void BasicTableUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIInputMap(this->table, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, nullptr);
	$SwingUtilities::replaceUIActionMap(this->table, nullptr);
}

int32_t BasicTableUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$TableUI::getBaseline(c, width, height);
	$var($UIDefaults, lafDefaults, $UIManager::getLookAndFeelDefaults());
	$var($Component, renderer, $cast($Component, $nc(lafDefaults)->get(BasicTableUI::BASELINE_COMPONENT_KEY)));
	if (renderer == nullptr) {
		$var($DefaultTableCellRenderer, tcr, $new($DefaultTableCellRenderer));
		$assign(renderer, tcr->getTableCellRendererComponent(this->table, "a"_s, false, false, -1, -1));
		lafDefaults->put(BasicTableUI::BASELINE_COMPONENT_KEY, renderer);
	}
	$nc(renderer)->setFont($($nc(this->table)->getFont()));
	int32_t rowMargin = $nc(this->table)->getRowMargin();
	return renderer->getBaseline($Integer::MAX_VALUE, $nc(this->table)->getRowHeight() - rowMargin) + rowMargin / 2;
}

$Component$BaselineResizeBehavior* BasicTableUI::getBaselineResizeBehavior($JComponent* c) {
	$TableUI::getBaselineResizeBehavior(c);
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
}

$Dimension* BasicTableUI::createTableSize(int64_t width) {
	int32_t height = 0;
	int32_t rowCount = $nc(this->table)->getRowCount();
	if (rowCount > 0 && $nc(this->table)->getColumnCount() > 0) {
		$var($Rectangle, r, $nc(this->table)->getCellRect(rowCount - 1, 0, true));
		height = $nc(r)->y + r->height;
	}
	int64_t tmp = $Math::abs(width);
	if (tmp > $Integer::MAX_VALUE) {
		tmp = $Integer::MAX_VALUE;
	}
	return $new($Dimension, (int32_t)tmp, height);
}

$Dimension* BasicTableUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	int64_t width = 0;
	$var($Enumeration, enumeration, $nc($($nc(this->table)->getColumnModel()))->getColumns());
	while ($nc(enumeration)->hasMoreElements()) {
		$var($TableColumn, aColumn, $cast($TableColumn, enumeration->nextElement()));
		width = width + $nc(aColumn)->getMinWidth();
	}
	return createTableSize(width);
}

$Dimension* BasicTableUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	int64_t width = 0;
	$var($Enumeration, enumeration, $nc($($nc(this->table)->getColumnModel()))->getColumns());
	while ($nc(enumeration)->hasMoreElements()) {
		$var($TableColumn, aColumn, $cast($TableColumn, enumeration->nextElement()));
		width = width + $nc(aColumn)->getPreferredWidth();
	}
	return createTableSize(width);
}

$Dimension* BasicTableUI::getMaximumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	int64_t width = 0;
	$var($Enumeration, enumeration, $nc($($nc(this->table)->getColumnModel()))->getColumns());
	while ($nc(enumeration)->hasMoreElements()) {
		$var($TableColumn, aColumn, $cast($TableColumn, enumeration->nextElement()));
		width = width + $nc(aColumn)->getMaxWidth();
	}
	return createTableSize(width);
}

void BasicTableUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	$var($Rectangle, bounds, $nc(this->table)->getBounds());
	$nc(bounds)->x = (bounds->y = 0);
	bool var$1 = $nc(this->table)->getRowCount() <= 0;
	bool var$0 = var$1 || $nc(this->table)->getColumnCount() <= 0;
	if (var$0 || !bounds->intersects(clip)) {
		paintDropLines(g);
		return;
	}
	bool ltr = $nc($($nc(this->table)->getComponentOrientation()))->isLeftToRight();
	$var($Point, upperLeft, nullptr);
	$var($Point, lowerRight, nullptr);
	$var($Rectangle, visibleBounds, $nc(clip)->intersection(bounds));
	$assign(upperLeft, $nc(visibleBounds)->getLocation());
	$assign(lowerRight, $new($Point, visibleBounds->x + visibleBounds->width - 1, visibleBounds->y + visibleBounds->height - 1));
	int32_t rMin = $nc(this->table)->rowAtPoint(upperLeft);
	int32_t rMax = $nc(this->table)->rowAtPoint(lowerRight);
	if (rMin == -1) {
		rMin = 0;
	}
	if (rMax == -1) {
		rMax = $nc(this->table)->getRowCount() - 1;
	}
	$var($Object, printMode, $nc(this->table)->getClientProperty("Table.printMode"_s));
	$init($JTable$PrintMode);
	if ($equals(printMode, $JTable$PrintMode::FIT_WIDTH)) {
		$assign(upperLeft, clip->getLocation());
		$assign(lowerRight, $new($Point, clip->x + clip->width - 1, clip->y + clip->height - 1));
	}
	int32_t cMin = $nc(this->table)->columnAtPoint(ltr ? upperLeft : lowerRight);
	int32_t cMax = $nc(this->table)->columnAtPoint(ltr ? lowerRight : upperLeft);
	if (cMin == -1) {
		cMin = 0;
	}
	if (cMax == -1) {
		cMax = $nc(this->table)->getColumnCount() - 1;
	}
	$var($Container, comp, $SwingUtilities::getUnwrappedParent(this->table));
	if (comp != nullptr) {
		$assign(comp, comp->getParent());
	}
	if (comp != nullptr && !($instanceOf($JViewport, comp)) && !($instanceOf($JScrollPane, comp))) {
		bool var$2 = rMax != ($nc(this->table)->getRowCount() - 1);
		if (var$2 && ($nc(this->table)->getSelectedRow() == -1)) {
			if (rMax - rMin > 1) {
				rMax = rMax - 1;
			}
		}
	}
	paintGrid(g, rMin, rMax, cMin, cMax);
	paintCells(g, rMin, rMax, cMin, cMax);
	paintDropLines(g);
}

void BasicTableUI::paintDropLines($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($JTable$DropLocation, loc, $nc(this->table)->getDropLocation());
	if (loc == nullptr) {
		return;
	}
	$var($Color, color, $UIManager::getColor("Table.dropLineColor"_s));
	$var($Color, shortColor, $UIManager::getColor("Table.dropLineShortColor"_s));
	if (color == nullptr && shortColor == nullptr) {
		return;
	}
	$var($Rectangle, rect, nullptr);
	$assign(rect, getHDropLineRect(loc));
	if (rect != nullptr) {
		int32_t x = rect->x;
		int32_t w = rect->width;
		if (color != nullptr) {
			extendRect(rect, true);
			$nc(g)->setColor(color);
			g->fillRect(rect->x, rect->y, rect->width, rect->height);
		}
		if (!$nc(loc)->isInsertColumn() && shortColor != nullptr) {
			$nc(g)->setColor(shortColor);
			g->fillRect(x, rect->y, w, rect->height);
		}
	}
	$assign(rect, getVDropLineRect(loc));
	if (rect != nullptr) {
		int32_t y = rect->y;
		int32_t h = rect->height;
		if (color != nullptr) {
			extendRect(rect, false);
			$nc(g)->setColor(color);
			g->fillRect(rect->x, rect->y, rect->width, rect->height);
		}
		if (!$nc(loc)->isInsertRow() && shortColor != nullptr) {
			$nc(g)->setColor(shortColor);
			g->fillRect(rect->x, y, rect->width, h);
		}
	}
}

$Rectangle* BasicTableUI::getHDropLineRect($JTable$DropLocation* loc) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(loc)->isInsertRow()) {
		return nullptr;
	}
	int32_t row = $nc(loc)->getRow();
	int32_t col = loc->getColumn();
	if (col >= $nc(this->table)->getColumnCount()) {
		--col;
	}
	$var($Rectangle, rect, $nc(this->table)->getCellRect(row, col, true));
	if (row >= $nc(this->table)->getRowCount()) {
		--row;
		$var($Rectangle, prevRect, $nc(this->table)->getCellRect(row, col, true));
		$nc(rect)->y = $nc(prevRect)->y + prevRect->height;
	}
	if ($nc(rect)->y == 0) {
		rect->y = -1;
	} else {
		rect->y -= 2;
	}
	$nc(rect)->height = 3;
	return rect;
}

$Rectangle* BasicTableUI::getVDropLineRect($JTable$DropLocation* loc) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(loc)->isInsertColumn()) {
		return nullptr;
	}
	bool ltr = $nc($($nc(this->table)->getComponentOrientation()))->isLeftToRight();
	int32_t col = $nc(loc)->getColumn();
	$var($Rectangle, rect, $nc(this->table)->getCellRect(loc->getRow(), col, true));
	if (col >= $nc(this->table)->getColumnCount()) {
		--col;
		$assign(rect, $nc(this->table)->getCellRect(loc->getRow(), col, true));
		if (ltr) {
			$nc(rect)->x = rect->x + rect->width;
		}
	} else if (!ltr) {
		$nc(rect)->x = rect->x + rect->width;
	}
	if ($nc(rect)->x == 0) {
		rect->x = -1;
	} else {
		rect->x -= 2;
	}
	$nc(rect)->width = 3;
	return rect;
}

$Rectangle* BasicTableUI::extendRect($Rectangle* rect, bool horizontal) {
	if (rect == nullptr) {
		return rect;
	}
	if (horizontal) {
		$nc(rect)->x = 0;
		rect->width = $nc(this->table)->getWidth();
	} else {
		$nc(rect)->y = 0;
		if ($nc(this->table)->getRowCount() != 0) {
			$var($Rectangle, lastRect, $nc(this->table)->getCellRect($nc(this->table)->getRowCount() - 1, 0, true));
			rect->height = $nc(lastRect)->y + lastRect->height;
		} else {
			rect->height = $nc(this->table)->getHeight();
		}
	}
	return rect;
}

void BasicTableUI::paintGrid($Graphics* g, int32_t rMin, int32_t rMax, int32_t cMin, int32_t cMax) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($($nc(this->table)->getGridColor()));
	$var($Rectangle, minCell, $nc(this->table)->getCellRect(rMin, cMin, true));
	$var($Rectangle, maxCell, $nc(this->table)->getCellRect(rMax, cMax, true));
	$var($Rectangle, damagedArea, $nc(minCell)->union$(maxCell));
	if ($nc(this->table)->getShowHorizontalLines()) {
		int32_t tableWidth = $nc(damagedArea)->x + damagedArea->width;
		int32_t y = damagedArea->y;
		for (int32_t row = rMin; row <= rMax; ++row) {
			y += $nc(this->table)->getRowHeight(row);
			$SwingUtilities2::drawHLine(g, damagedArea->x, tableWidth - 1, y - 1);
		}
	}
	if ($nc(this->table)->getShowVerticalLines()) {
		$var($TableColumnModel, cm, $nc(this->table)->getColumnModel());
		int32_t tableHeight = $nc(damagedArea)->y + damagedArea->height;
		int32_t x = 0;
		if ($nc($($nc(this->table)->getComponentOrientation()))->isLeftToRight()) {
			x = damagedArea->x;
			for (int32_t column = cMin; column <= cMax; ++column) {
				int32_t w = $nc($($nc(cm)->getColumn(column)))->getWidth();
				x += w;
				$SwingUtilities2::drawVLine(g, x - 1, 0, tableHeight - 1);
			}
		} else {
			x = damagedArea->x;
			for (int32_t column = cMax; column >= cMin; --column) {
				int32_t w = $nc($($nc(cm)->getColumn(column)))->getWidth();
				x += w;
				$SwingUtilities2::drawVLine(g, x - 1, 0, tableHeight - 1);
			}
		}
	}
}

int32_t BasicTableUI::viewIndexForColumn($TableColumn* aColumn) {
	$var($TableColumnModel, cm, $nc(this->table)->getColumnModel());
	for (int32_t column = 0; column < $nc(cm)->getColumnCount(); ++column) {
		if (cm->getColumn(column) == aColumn) {
			return column;
		}
	}
	return -1;
}

void BasicTableUI::paintCells($Graphics* g, int32_t rMin, int32_t rMax, int32_t cMin, int32_t cMax) {
	$useLocalCurrentObjectStackCache();
	$var($JTableHeader, header, $nc(this->table)->getTableHeader());
	$var($TableColumn, draggedColumn, (header == nullptr) ? ($TableColumn*)nullptr : $nc(header)->getDraggedColumn());
	$var($TableColumnModel, cm, $nc(this->table)->getColumnModel());
	int32_t columnMargin = $nc(cm)->getColumnMargin();
	$var($Rectangle, cellRect, nullptr);
	$var($TableColumn, aColumn, nullptr);
	int32_t columnWidth = 0;
	if ($nc($($nc(this->table)->getComponentOrientation()))->isLeftToRight()) {
		for (int32_t row = rMin; row <= rMax; ++row) {
			$assign(cellRect, $nc(this->table)->getCellRect(row, cMin, false));
			for (int32_t column = cMin; column <= cMax; ++column) {
				$assign(aColumn, cm->getColumn(column));
				columnWidth = $nc(aColumn)->getWidth();
				$nc(cellRect)->width = columnWidth - columnMargin;
				if (aColumn != draggedColumn) {
					paintCell(g, cellRect, row, column);
				}
				cellRect->x += columnWidth;
			}
		}
	} else {
		for (int32_t row = rMin; row <= rMax; ++row) {
			$assign(cellRect, $nc(this->table)->getCellRect(row, cMin, false));
			$assign(aColumn, cm->getColumn(cMin));
			if (aColumn != draggedColumn) {
				columnWidth = $nc(aColumn)->getWidth();
				$nc(cellRect)->width = columnWidth - columnMargin;
				paintCell(g, cellRect, row, cMin);
			}
			for (int32_t column = cMin + 1; column <= cMax; ++column) {
				$assign(aColumn, cm->getColumn(column));
				columnWidth = $nc(aColumn)->getWidth();
				$nc(cellRect)->width = columnWidth - columnMargin;
				cellRect->x -= columnWidth;
				if (aColumn != draggedColumn) {
					paintCell(g, cellRect, row, column);
				}
			}
		}
	}
	if (draggedColumn != nullptr) {
		paintDraggedArea(g, rMin, rMax, draggedColumn, header->getDraggedDistance());
	}
	$nc(this->rendererPane)->removeAll();
}

void BasicTableUI::paintDraggedArea($Graphics* g, int32_t rMin, int32_t rMax, $TableColumn* draggedColumn, int32_t distance) {
	$useLocalCurrentObjectStackCache();
	int32_t draggedColumnIndex = viewIndexForColumn(draggedColumn);
	$var($Rectangle, minCell, $nc(this->table)->getCellRect(rMin, draggedColumnIndex, true));
	$var($Rectangle, maxCell, $nc(this->table)->getCellRect(rMax, draggedColumnIndex, true));
	$var($Rectangle, vacatedColumnRect, $nc(minCell)->union$(maxCell));
	$nc(g)->setColor($($nc($($nc(this->table)->getParent()))->getBackground()));
	g->fillRect($nc(vacatedColumnRect)->x, vacatedColumnRect->y, vacatedColumnRect->width, vacatedColumnRect->height);
	$nc(vacatedColumnRect)->x += distance;
	g->setColor($($nc(this->table)->getBackground()));
	g->fillRect(vacatedColumnRect->x, vacatedColumnRect->y, vacatedColumnRect->width, vacatedColumnRect->height);
	if ($nc(this->table)->getShowVerticalLines()) {
		g->setColor($($nc(this->table)->getGridColor()));
		int32_t x1 = vacatedColumnRect->x;
		int32_t y1 = vacatedColumnRect->y;
		int32_t x2 = x1 + vacatedColumnRect->width - 1;
		int32_t y2 = y1 + vacatedColumnRect->height - 1;
		g->drawLine(x1 - 1, y1, x1 - 1, y2);
		g->drawLine(x2, y1, x2, y2);
	}
	for (int32_t row = rMin; row <= rMax; ++row) {
		$var($Rectangle, r, $nc(this->table)->getCellRect(row, draggedColumnIndex, false));
		$nc(r)->x += distance;
		paintCell(g, r, row, draggedColumnIndex);
		if ($nc(this->table)->getShowHorizontalLines()) {
			g->setColor($($nc(this->table)->getGridColor()));
			$var($Rectangle, rcr, $nc(this->table)->getCellRect(row, draggedColumnIndex, true));
			$nc(rcr)->x += distance;
			int32_t x1 = rcr->x;
			int32_t y1 = rcr->y;
			int32_t x2 = x1 + rcr->width - 1;
			int32_t y2 = y1 + rcr->height - 1;
			g->drawLine(x1, y2, x2, y2);
		}
	}
}

void BasicTableUI::paintCell($Graphics* g, $Rectangle* cellRect, int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = $nc(this->table)->isEditing();
	bool var$0 = var$1 && $nc(this->table)->getEditingRow() == row;
	if (var$0 && $nc(this->table)->getEditingColumn() == column) {
		$var($Component, component, $nc(this->table)->getEditorComponent());
		$nc(component)->setBounds(cellRect);
		component->validate();
	} else {
		$var($TableCellRenderer, renderer, $nc(this->table)->getCellRenderer(row, column));
		$var($Component, component, $nc(this->table)->prepareRenderer(renderer, row, column));
		$nc(this->rendererPane)->paintComponent(g, component, this->table, $nc(cellRect)->x, cellRect->y, cellRect->width, cellRect->height, true);
	}
}

int32_t BasicTableUI::getAdjustedLead($JTable* table, bool row, $ListSelectionModel* model) {
	$init(BasicTableUI);
	int32_t index = $nc(model)->getLeadSelectionIndex();
	int32_t compare = row ? $nc(table)->getRowCount() : table->getColumnCount();
	return index < compare ? index : -1;
}

int32_t BasicTableUI::getAdjustedLead($JTable* table, bool row) {
	$init(BasicTableUI);
	$useLocalCurrentObjectStackCache();
	return row ? getAdjustedLead(table, row, $($nc(table)->getSelectionModel())) : getAdjustedLead(table, row, $($nc($($nc(table)->getColumnModel()))->getSelectionModel()));
}

void clinit$BasicTableUI($Class* class$) {
	$assignStatic(BasicTableUI::BASELINE_COMPONENT_KEY, $new($StringBuilder, "Table.baselineComponent"_s));
	$assignStatic(BasicTableUI::defaultTransferHandler, $new($BasicTableUI$TableTransferHandler));
}

BasicTableUI::BasicTableUI() {
}

$Class* BasicTableUI::load$($String* name, bool initialize) {
	$loadClass(BasicTableUI, name, initialize, &_BasicTableUI_ClassInfo_, clinit$BasicTableUI, allocate$BasicTableUI);
	return class$;
}

$Class* BasicTableUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax