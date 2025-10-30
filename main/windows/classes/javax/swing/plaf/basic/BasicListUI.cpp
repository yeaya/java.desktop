#include <javax/swing/plaf/basic/BasicListUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/geom/Point2D.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Math.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList$DropLocation.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ListUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicListUI$Actions.h>
#include <javax/swing/plaf/basic/BasicListUI$Handler.h>
#include <javax/swing/plaf/basic/BasicListUI$ListTransferHandler.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef ADD_TO_SELECTION
#undef BASELINE_COMPONENT_KEY
#undef CHANGE_LEAD
#undef CHANGE_SELECTION
#undef CLEAR_SELECTION
#undef CONSTANT_ASCENT
#undef DROP_LINE_THICKNESS
#undef EXTEND_SELECTION
#undef EXTEND_TO
#undef HORIZONTAL_WRAP
#undef MAX_VALUE
#undef MOVE_SELECTION_TO
#undef NAME
#undef SCROLL_DOWN
#undef SCROLL_DOWN_CHANGE_LEAD
#undef SCROLL_DOWN_EXTEND
#undef SCROLL_UP
#undef SCROLL_UP_CHANGE_LEAD
#undef SCROLL_UP_EXTEND
#undef SELECT_ALL
#undef SELECT_FIRST_ROW
#undef SELECT_FIRST_ROW_CHANGE_LEAD
#undef SELECT_FIRST_ROW_EXTEND
#undef SELECT_LAST_ROW
#undef SELECT_LAST_ROW_CHANGE_LEAD
#undef SELECT_LAST_ROW_EXTEND
#undef SELECT_NEXT_COLUMN
#undef SELECT_NEXT_COLUMN_CHANGE_LEAD
#undef SELECT_NEXT_COLUMN_EXTEND
#undef SELECT_NEXT_ROW
#undef SELECT_NEXT_ROW_CHANGE_LEAD
#undef SELECT_NEXT_ROW_EXTEND
#undef SELECT_PREVIOUS_COLUMN
#undef SELECT_PREVIOUS_COLUMN_CHANGE_LEAD
#undef SELECT_PREVIOUS_COLUMN_EXTEND
#undef SELECT_PREVIOUS_ROW
#undef SELECT_PREVIOUS_ROW_CHANGE_LEAD
#undef SELECT_PREVIOUS_ROW_EXTEND
#undef TOGGLE_AND_ANCHOR
#undef TRUE
#undef VERTICAL
#undef VERTICAL_WRAP
#undef WHEN_FOCUSED

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $FocusListener = ::java::awt::event::FocusListener;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $Point2D = ::java::awt::geom::Point2D;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JList$DropLocation = ::javax::swing::JList$DropLocation;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ListUI = ::javax::swing::plaf::ListUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicListUI$Actions = ::javax::swing::plaf::basic::BasicListUI$Actions;
using $BasicListUI$Handler = ::javax::swing::plaf::basic::BasicListUI$Handler;
using $BasicListUI$ListTransferHandler = ::javax::swing::plaf::basic::BasicListUI$ListTransferHandler;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicListUI_FieldInfo_[] = {
	{"BASELINE_COMPONENT_KEY", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI, BASELINE_COMPONENT_KEY)},
	{"list", "Ljavax/swing/JList;", "Ljavax/swing/JList<Ljava/lang/Object;>;", $PROTECTED, $field(BasicListUI, list)},
	{"rendererPane", "Ljavax/swing/CellRendererPane;", nullptr, $PROTECTED, $field(BasicListUI, rendererPane)},
	{"focusListener", "Ljava/awt/event/FocusListener;", nullptr, $PROTECTED, $field(BasicListUI, focusListener)},
	{"mouseInputListener", "Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED, $field(BasicListUI, mouseInputListener)},
	{"listSelectionListener", "Ljavax/swing/event/ListSelectionListener;", nullptr, $PROTECTED, $field(BasicListUI, listSelectionListener)},
	{"listDataListener", "Ljavax/swing/event/ListDataListener;", nullptr, $PROTECTED, $field(BasicListUI, listDataListener)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicListUI, propertyChangeListener)},
	{"handler", "Ljavax/swing/plaf/basic/BasicListUI$Handler;", nullptr, $PRIVATE, $field(BasicListUI, handler)},
	{"cellHeights", "[I", nullptr, $PROTECTED, $field(BasicListUI, cellHeights)},
	{"cellHeight", "I", nullptr, $PROTECTED, $field(BasicListUI, cellHeight)},
	{"cellWidth", "I", nullptr, $PROTECTED, $field(BasicListUI, cellWidth)},
	{"updateLayoutStateNeeded", "I", nullptr, $PROTECTED, $field(BasicListUI, updateLayoutStateNeeded)},
	{"listHeight", "I", nullptr, $PRIVATE, $field(BasicListUI, listHeight)},
	{"listWidth", "I", nullptr, $PRIVATE, $field(BasicListUI, listWidth)},
	{"layoutOrientation", "I", nullptr, $PRIVATE, $field(BasicListUI, layoutOrientation)},
	{"columnCount", "I", nullptr, $PRIVATE, $field(BasicListUI, columnCount)},
	{"preferredHeight", "I", nullptr, $PRIVATE, $field(BasicListUI, preferredHeight)},
	{"rowsPerColumn", "I", nullptr, $PRIVATE, $field(BasicListUI, rowsPerColumn)},
	{"timeFactor", "J", nullptr, $PRIVATE, $field(BasicListUI, timeFactor)},
	{"isFileList", "Z", nullptr, $PRIVATE, $field(BasicListUI, isFileList)},
	{"isLeftToRight", "Z", nullptr, $PRIVATE, $field(BasicListUI, isLeftToRight)},
	{"modelChanged", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicListUI, modelChanged)},
	{"selectionModelChanged", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicListUI, selectionModelChanged)},
	{"fontChanged", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicListUI, fontChanged)},
	{"fixedCellWidthChanged", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicListUI, fixedCellWidthChanged)},
	{"fixedCellHeightChanged", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicListUI, fixedCellHeightChanged)},
	{"prototypeCellValueChanged", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicListUI, prototypeCellValueChanged)},
	{"cellRendererChanged", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicListUI, cellRendererChanged)},
	{"layoutOrientationChanged", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicListUI, layoutOrientationChanged)},
	{"heightChanged", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicListUI, heightChanged)},
	{"widthChanged", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicListUI, widthChanged)},
	{"componentOrientationChanged", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicListUI, componentOrientationChanged)},
	{"DROP_LINE_THICKNESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicListUI, DROP_LINE_THICKNESS)},
	{"CHANGE_LEAD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicListUI, CHANGE_LEAD)},
	{"CHANGE_SELECTION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicListUI, CHANGE_SELECTION)},
	{"EXTEND_SELECTION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicListUI, EXTEND_SELECTION)},
	{"defaultTransferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI, defaultTransferHandler)},
	{}
};

$MethodInfo _BasicListUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicListUI::*)()>(&BasicListUI::init$))},
	{"adjustIndex", "(ILjavax/swing/JList;)I", "(ILjavax/swing/JList<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$JList*)>(&BasicListUI::adjustIndex))},
	{"convertLocationToColumn", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicListUI::*)(int32_t,int32_t)>(&BasicListUI::convertLocationToColumn))},
	{"convertLocationToModel", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicListUI::*)(int32_t,int32_t)>(&BasicListUI::convertLocationToModel))},
	{"convertLocationToRow", "(IIZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicListUI::*)(int32_t,int32_t,bool)>(&BasicListUI::convertLocationToRow))},
	{"convertLocationToRowInColumn", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicListUI::*)(int32_t,int32_t)>(&BasicListUI::convertLocationToRowInColumn))},
	{"convertModelToColumn", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicListUI::*)(int32_t)>(&BasicListUI::convertModelToColumn))},
	{"convertModelToRow", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicListUI::*)(int32_t)>(&BasicListUI::convertModelToRow))},
	{"convertRowToY", "(I)I", nullptr, $PROTECTED},
	{"convertYToRow", "(I)I", nullptr, $PROTECTED},
	{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createListDataListener", "()Ljavax/swing/event/ListDataListener;", nullptr, $PROTECTED},
	{"createListSelectionListener", "()Ljavax/swing/event/ListSelectionListener;", nullptr, $PROTECTED},
	{"createMouseInputListener", "()Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicListUI::createUI))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getCellBounds", "(Ljavax/swing/JList;II)Ljava/awt/Rectangle;", "(Ljavax/swing/JList<*>;II)Ljava/awt/Rectangle;", $PUBLIC},
	{"getCellBounds", "(Ljavax/swing/JList;I)Ljava/awt/Rectangle;", "(Ljavax/swing/JList<*>;I)Ljava/awt/Rectangle;", $PRIVATE, $method(static_cast<$Rectangle*(BasicListUI::*)($JList*,int32_t)>(&BasicListUI::getCellBounds))},
	{"getDropLineRect", "(Ljavax/swing/JList$DropLocation;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(BasicListUI::*)($JList$DropLocation*)>(&BasicListUI::getDropLineRect))},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicListUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicListUI$Handler*(BasicListUI::*)()>(&BasicListUI::getHandler))},
	{"getHeight", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicListUI::*)(int32_t,int32_t)>(&BasicListUI::getHeight))},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getModelIndex", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicListUI::*)(int32_t,int32_t)>(&BasicListUI::getModelIndex))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getRowCount", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicListUI::*)(int32_t)>(&BasicListUI::getRowCount))},
	{"getRowHeight", "(I)I", nullptr, $PROTECTED},
	{"indexToLocation", "(Ljavax/swing/JList;I)Ljava/awt/Point;", "(Ljavax/swing/JList<*>;I)Ljava/awt/Point;", $PUBLIC},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicListUI::loadActionMap))},
	{"locationToIndex", "(Ljavax/swing/JList;Ljava/awt/Point;)I", "(Ljavax/swing/JList<*>;Ljava/awt/Point;)I", $PUBLIC},
	{"maybeUpdateLayoutState", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintCell", "(Ljava/awt/Graphics;ILjava/awt/Rectangle;Ljavax/swing/ListCellRenderer;Ljavax/swing/ListModel;Ljavax/swing/ListSelectionModel;I)V", "(Ljava/awt/Graphics;ILjava/awt/Rectangle;Ljavax/swing/ListCellRenderer<Ljava/lang/Object;>;Ljavax/swing/ListModel<Ljava/lang/Object;>;Ljavax/swing/ListSelectionModel;I)V", $PROTECTED},
	{"paintDropLine", "(Ljava/awt/Graphics;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicListUI::*)($Graphics*)>(&BasicListUI::paintDropLine))},
	{"paintImpl", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicListUI::*)($Graphics*,$JComponent*)>(&BasicListUI::paintImpl))},
	{"redrawList", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicListUI::*)()>(&BasicListUI::redrawList))},
	{"selectNextIndex", "()V", nullptr, $PROTECTED},
	{"selectPreviousIndex", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateHorizontalLayoutState", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(BasicListUI::*)(int32_t,int32_t)>(&BasicListUI::updateHorizontalLayoutState))},
	{"updateIsFileList", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicListUI::*)()>(&BasicListUI::updateIsFileList))},
	{"updateLayoutState", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicListUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicListUI$ListTransferHandler", "javax.swing.plaf.basic.BasicListUI", "ListTransferHandler", $STATIC},
	{"javax.swing.plaf.basic.BasicListUI$Handler", "javax.swing.plaf.basic.BasicListUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicListUI$Actions", "javax.swing.plaf.basic.BasicListUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicListUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicListUI", "PropertyChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicListUI$ListDataHandler", "javax.swing.plaf.basic.BasicListUI", "ListDataHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicListUI$ListSelectionHandler", "javax.swing.plaf.basic.BasicListUI", "ListSelectionHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicListUI$FocusHandler", "javax.swing.plaf.basic.BasicListUI", "FocusHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicListUI$MouseInputHandler", "javax.swing.plaf.basic.BasicListUI", "MouseInputHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicListUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicListUI",
	"javax.swing.plaf.ListUI",
	nullptr,
	_BasicListUI_FieldInfo_,
	_BasicListUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicListUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicListUI$ListTransferHandler,javax.swing.plaf.basic.BasicListUI$Handler,javax.swing.plaf.basic.BasicListUI$Actions,javax.swing.plaf.basic.BasicListUI$PropertyChangeHandler,javax.swing.plaf.basic.BasicListUI$ListDataHandler,javax.swing.plaf.basic.BasicListUI$ListSelectionHandler,javax.swing.plaf.basic.BasicListUI$FocusHandler,javax.swing.plaf.basic.BasicListUI$MouseInputHandler"
};

$Object* allocate$BasicListUI($Class* clazz) {
	return $of($alloc(BasicListUI));
}

$StringBuilder* BasicListUI::BASELINE_COMPONENT_KEY = nullptr;
$TransferHandler* BasicListUI::defaultTransferHandler = nullptr;

void BasicListUI::init$() {
	$ListUI::init$();
	$set(this, list, nullptr);
	$set(this, cellHeights, nullptr);
	this->cellHeight = -1;
	this->cellWidth = -1;
	this->updateLayoutStateNeeded = BasicListUI::modelChanged;
	this->timeFactor = 1000;
	this->isFileList = false;
	this->isLeftToRight = true;
}

void BasicListUI::loadActionMap($LazyActionMap* map) {
	$init(BasicListUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicListUI$Actions);
	$nc(map)->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_PREVIOUS_COLUMN));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_PREVIOUS_COLUMN_EXTEND));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_PREVIOUS_COLUMN_CHANGE_LEAD));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_NEXT_COLUMN));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_NEXT_COLUMN_EXTEND));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_NEXT_COLUMN_CHANGE_LEAD));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_PREVIOUS_ROW));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_PREVIOUS_ROW_EXTEND));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_PREVIOUS_ROW_CHANGE_LEAD));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_NEXT_ROW));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_NEXT_ROW_EXTEND));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_NEXT_ROW_CHANGE_LEAD));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_FIRST_ROW));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_FIRST_ROW_EXTEND));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_FIRST_ROW_CHANGE_LEAD));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_LAST_ROW));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_LAST_ROW_EXTEND));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_LAST_ROW_CHANGE_LEAD));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SCROLL_UP));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SCROLL_UP_EXTEND));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SCROLL_UP_CHANGE_LEAD));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SCROLL_DOWN));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SCROLL_DOWN_EXTEND));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SCROLL_DOWN_CHANGE_LEAD));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::SELECT_ALL));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::CLEAR_SELECTION));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::ADD_TO_SELECTION));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::TOGGLE_AND_ANCHOR));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::EXTEND_TO));
	map->put($$new($BasicListUI$Actions, $BasicListUI$Actions::MOVE_SELECTION_TO));
	$init($Action);
	$var($Object, var$0, $nc($($TransferHandler::getCutAction()))->getValue($Action::NAME));
	map->put(var$0, $($TransferHandler::getCutAction()));
	$var($Object, var$1, $nc($($TransferHandler::getCopyAction()))->getValue($Action::NAME));
	map->put(var$1, $($TransferHandler::getCopyAction()));
	$var($Object, var$2, $nc($($TransferHandler::getPasteAction()))->getValue($Action::NAME));
	map->put(var$2, $($TransferHandler::getPasteAction()));
}

void BasicListUI::paintCell($Graphics* g, int32_t row, $Rectangle* rowBounds, $ListCellRenderer* cellRenderer, $ListModel* dataModel, $ListSelectionModel* selModel, int32_t leadIndex) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $nc(dataModel)->getElementAt(row));
	bool cellHasFocus = $nc(this->list)->hasFocus() && (row == leadIndex);
	bool isSelected = $nc(selModel)->isSelectedIndex(row);
	$var($Component, rendererComponent, $nc(cellRenderer)->getListCellRendererComponent(this->list, value, row, isSelected, cellHasFocus));
	int32_t cx = $nc(rowBounds)->x;
	int32_t cy = rowBounds->y;
	int32_t cw = rowBounds->width;
	int32_t ch = rowBounds->height;
	if (this->isFileList) {
		int32_t w = $Math::min(cw, $nc($($nc(rendererComponent)->getPreferredSize()))->width + 4);
		if (!this->isLeftToRight) {
			cx += (cw - w);
		}
		cw = w;
	}
	$nc(this->rendererPane)->paintComponent(g, rendererComponent, this->list, cx, cy, cw, ch, true);
}

void BasicListUI::paint($Graphics* g, $JComponent* c) {
	$var($Shape, clip, $nc(g)->getClip());
	paintImpl(g, c);
	g->setClip(clip);
	paintDropLine(g);
}

void BasicListUI::paintImpl($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	switch (this->layoutOrientation) {
	case $JList::VERTICAL_WRAP:
		{
			if ($nc(this->list)->getHeight() != this->listHeight) {
				this->updateLayoutStateNeeded |= BasicListUI::heightChanged;
				redrawList();
			}
			break;
		}
	case $JList::HORIZONTAL_WRAP:
		{
			if ($nc(this->list)->getWidth() != this->listWidth) {
				this->updateLayoutStateNeeded |= BasicListUI::widthChanged;
				redrawList();
			}
			break;
		}
	default:
		{
			break;
		}
	}
	maybeUpdateLayoutState();
	$var($ListCellRenderer, renderer, $nc(this->list)->getCellRenderer());
	$var($ListModel, dataModel, $nc(this->list)->getModel());
	$var($ListSelectionModel, selModel, $nc(this->list)->getSelectionModel());
	int32_t size = 0;
	if ((renderer == nullptr) || (size = $nc(dataModel)->getSize()) == 0) {
		return;
	}
	$var($Rectangle, paintBounds, $nc(g)->getClipBounds());
	int32_t startColumn = 0;
	int32_t endColumn = 0;
	if ($nc($($nc(c)->getComponentOrientation()))->isLeftToRight()) {
		startColumn = convertLocationToColumn($nc(paintBounds)->x, paintBounds->y);
		endColumn = convertLocationToColumn($nc(paintBounds)->x + paintBounds->width, paintBounds->y);
	} else {
		startColumn = convertLocationToColumn($nc(paintBounds)->x + paintBounds->width, paintBounds->y);
		endColumn = convertLocationToColumn($nc(paintBounds)->x, paintBounds->y);
	}
	int32_t maxY = $nc(paintBounds)->y + paintBounds->height;
	int32_t leadIndex = adjustIndex($nc(this->list)->getLeadSelectionIndex(), this->list);
	int32_t rowIncrement = (this->layoutOrientation == $JList::HORIZONTAL_WRAP) ? this->columnCount : 1;
	for (int32_t colCounter = startColumn; colCounter <= endColumn; ++colCounter) {
		int32_t row = convertLocationToRowInColumn(paintBounds->y, colCounter);
		int32_t rowCount = getRowCount(colCounter);
		int32_t index = getModelIndex(colCounter, row);
		$var($Rectangle, rowBounds, getCellBounds(this->list, index, index));
		if (rowBounds == nullptr) {
			return;
		}
		while (row < rowCount && $nc(rowBounds)->y < maxY && index < size) {
			rowBounds->height = getHeight(colCounter, row);
			g->setClip(rowBounds->x, rowBounds->y, rowBounds->width, rowBounds->height);
			g->clipRect(paintBounds->x, paintBounds->y, paintBounds->width, paintBounds->height);
			paintCell(g, index, rowBounds, renderer, dataModel, selModel, leadIndex);
			rowBounds->y += rowBounds->height;
			index += rowIncrement;
			++row;
		}
	}
	$nc(this->rendererPane)->removeAll();
}

void BasicListUI::paintDropLine($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($JList$DropLocation, loc, $nc(this->list)->getDropLocation());
	if (loc == nullptr || !$nc(loc)->isInsert()) {
		return;
	}
	$var($Color, c, $DefaultLookup::getColor(this->list, this, "List.dropLineColor"_s, nullptr));
	if (c != nullptr) {
		$nc(g)->setColor(c);
		$var($Rectangle, rect, getDropLineRect(loc));
		g->fillRect($nc(rect)->x, rect->y, rect->width, rect->height);
	}
}

$Rectangle* BasicListUI::getDropLineRect($JList$DropLocation* loc) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc($($nc(this->list)->getModel()))->getSize();
	if (size == 0) {
		$var($Insets, insets, $nc(this->list)->getInsets());
		if (this->layoutOrientation == $JList::HORIZONTAL_WRAP) {
			if (this->isLeftToRight) {
				return $new($Rectangle, $nc(insets)->left, insets->top, BasicListUI::DROP_LINE_THICKNESS, 20);
			} else {
				return $new($Rectangle, $nc(this->list)->getWidth() - BasicListUI::DROP_LINE_THICKNESS - $nc(insets)->right, insets->top, BasicListUI::DROP_LINE_THICKNESS, 20);
			}
		} else {
			return $new($Rectangle, $nc(insets)->left, insets->top, $nc(this->list)->getWidth() - insets->left - insets->right, BasicListUI::DROP_LINE_THICKNESS);
		}
	}
	$var($Rectangle, rect, nullptr);
	int32_t index = $nc(loc)->getIndex();
	bool decr = false;
	if (this->layoutOrientation == $JList::HORIZONTAL_WRAP) {
		if (index == size) {
			decr = true;
		} else {
			bool var$2 = index != 0;
			if (var$2) {
				int32_t var$3 = convertModelToRow(index);
				var$2 = var$3 != convertModelToRow(index - 1);
			}
			if (var$2) {
				$var($Rectangle, prev, getCellBounds(this->list, index - 1));
				$var($Rectangle, me, getCellBounds(this->list, index));
				$var($Point, p, loc->getDropPoint());
				if (this->isLeftToRight) {
					double var$4 = $Point2D::distance((double)($nc(prev)->x + prev->width), (double)(prev->y + $cast(int32_t, (prev->height / 2.0))), (double)$nc(p)->x, (double)p->y);
					decr = var$4 < $Point2D::distance((double)$nc(me)->x, (double)(me->y + $cast(int32_t, (me->height / 2.0))), (double)$nc(p)->x, (double)p->y);
				} else {
					double var$5 = $Point2D::distance((double)$nc(prev)->x, (double)(prev->y + $cast(int32_t, (prev->height / 2.0))), (double)$nc(p)->x, (double)p->y);
					decr = var$5 < $Point2D::distance((double)($nc(me)->x + me->width), (double)(me->y + $cast(int32_t, ($nc(prev)->height / 2.0))), (double)$nc(p)->x, (double)p->y);
				}
			}
		}
		if (decr) {
			--index;
			$assign(rect, getCellBounds(this->list, index));
			if (this->isLeftToRight) {
				$nc(rect)->x += rect->width;
			} else {
				$nc(rect)->x -= BasicListUI::DROP_LINE_THICKNESS;
			}
		} else {
			$assign(rect, getCellBounds(this->list, index));
			if (!this->isLeftToRight) {
				$nc(rect)->x += rect->width - BasicListUI::DROP_LINE_THICKNESS;
			}
		}
		if ($nc(rect)->x >= $nc(this->list)->getWidth()) {
			rect->x = $nc(this->list)->getWidth() - BasicListUI::DROP_LINE_THICKNESS;
		} else if (rect->x < 0) {
			rect->x = 0;
		}
		$nc(rect)->width = BasicListUI::DROP_LINE_THICKNESS;
	} else if (this->layoutOrientation == $JList::VERTICAL_WRAP) {
		if (index == size) {
			--index;
			$assign(rect, getCellBounds(this->list, index));
			$nc(rect)->y += rect->height;
		} else {
			bool var$8 = index != 0;
			if (var$8) {
				int32_t var$9 = convertModelToColumn(index);
				var$8 = var$9 != convertModelToColumn(index - 1);
			}
			if (var$8) {
				$var($Rectangle, prev, getCellBounds(this->list, index - 1));
				$var($Rectangle, me, getCellBounds(this->list, index));
				$var($Point, p, loc->getDropPoint());
				double var$10 = $Point2D::distance((double)($nc(prev)->x + $cast(int32_t, (prev->width / 2.0))), (double)(prev->y + prev->height), (double)$nc(p)->x, (double)p->y);
				if (var$10 < $Point2D::distance((double)($nc(me)->x + $cast(int32_t, (me->width / 2.0))), (double)me->y, (double)$nc(p)->x, (double)p->y)) {
					--index;
					$assign(rect, getCellBounds(this->list, index));
					$nc(rect)->y += rect->height;
				} else {
					$assign(rect, getCellBounds(this->list, index));
				}
			} else {
				$assign(rect, getCellBounds(this->list, index));
			}
		}
		if ($nc(rect)->y >= $nc(this->list)->getHeight()) {
			rect->y = $nc(this->list)->getHeight() - BasicListUI::DROP_LINE_THICKNESS;
		}
		$nc(rect)->height = BasicListUI::DROP_LINE_THICKNESS;
	} else {
		if (index == size) {
			--index;
			$assign(rect, getCellBounds(this->list, index));
			$nc(rect)->y += rect->height;
		} else {
			$assign(rect, getCellBounds(this->list, index));
		}
		if ($nc(rect)->y >= $nc(this->list)->getHeight()) {
			rect->y = $nc(this->list)->getHeight() - BasicListUI::DROP_LINE_THICKNESS;
		}
		$nc(rect)->height = BasicListUI::DROP_LINE_THICKNESS;
	}
	return rect;
}

int32_t BasicListUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$ListUI::getBaseline(c, width, height);
	int32_t rowHeight = $nc(this->list)->getFixedCellHeight();
	$var($UIDefaults, lafDefaults, $UIManager::getLookAndFeelDefaults());
	$var($Component, renderer, $cast($Component, $nc(lafDefaults)->get(BasicListUI::BASELINE_COMPONENT_KEY)));
	if (renderer == nullptr) {
		$var($ListCellRenderer, lcr, $cast($ListCellRenderer, $UIManager::get("List.cellRenderer"_s)));
		if (lcr == nullptr) {
			$assign(lcr, $new($DefaultListCellRenderer));
		}
		$assign(renderer, $nc(lcr)->getListCellRendererComponent(this->list, "a"_s, -1, false, false));
		lafDefaults->put(BasicListUI::BASELINE_COMPONENT_KEY, renderer);
	}
	$nc(renderer)->setFont($($nc(this->list)->getFont()));
	if (rowHeight == -1) {
		rowHeight = $nc($(renderer->getPreferredSize()))->height;
	}
	int32_t var$0 = renderer->getBaseline($Integer::MAX_VALUE, rowHeight);
	return var$0 + $nc($($nc(this->list)->getInsets()))->top;
}

$Component$BaselineResizeBehavior* BasicListUI::getBaselineResizeBehavior($JComponent* c) {
	$ListUI::getBaselineResizeBehavior(c);
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
}

$Dimension* BasicListUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	maybeUpdateLayoutState();
	int32_t lastRow = $nc($($nc(this->list)->getModel()))->getSize() - 1;
	if (lastRow < 0) {
		return $new($Dimension, 0, 0);
	}
	$var($Insets, insets, $nc(this->list)->getInsets());
	int32_t width = this->cellWidth * this->columnCount + $nc(insets)->left + insets->right;
	int32_t height = 0;
	if (this->layoutOrientation != $JList::VERTICAL) {
		height = this->preferredHeight;
	} else {
		$var($Rectangle, bounds, getCellBounds(this->list, lastRow));
		if (bounds != nullptr) {
			height = bounds->y + bounds->height + insets->bottom;
		} else {
			height = 0;
		}
	}
	return $new($Dimension, width, height);
}

void BasicListUI::selectPreviousIndex() {
	int32_t s = $nc(this->list)->getSelectedIndex();
	if (s > 0) {
		s -= 1;
		$nc(this->list)->setSelectedIndex(s);
		$nc(this->list)->ensureIndexIsVisible(s);
	}
}

void BasicListUI::selectNextIndex() {
	int32_t s = $nc(this->list)->getSelectedIndex();
	if ((s + 1) < $nc($($nc(this->list)->getModel()))->getSize()) {
		s += 1;
		$nc(this->list)->setSelectedIndex(s);
		$nc(this->list)->ensureIndexIsVisible(s);
	}
}

void BasicListUI::installKeyboardActions() {
	$var($InputMap, inputMap, getInputMap($JComponent::WHEN_FOCUSED));
	$SwingUtilities::replaceUIInputMap(this->list, $JComponent::WHEN_FOCUSED, inputMap);
	$LazyActionMap::installLazyActionMap(this->list, BasicListUI::class$, "List.actionMap"_s);
}

$InputMap* BasicListUI::getInputMap(int32_t condition) {
	$useLocalCurrentObjectStackCache();
	if (condition == $JComponent::WHEN_FOCUSED) {
		$var($InputMap, keyMap, $cast($InputMap, $DefaultLookup::get(this->list, this, "List.focusInputMap"_s)));
		$var($InputMap, rtlKeyMap, nullptr);
		if (this->isLeftToRight || (($assign(rtlKeyMap, $cast($InputMap, $DefaultLookup::get(this->list, this, "List.focusInputMap.RightToLeft"_s)))) == nullptr)) {
			return keyMap;
		} else {
			$nc(rtlKeyMap)->setParent(keyMap);
			return rtlKeyMap;
		}
	}
	return nullptr;
}

void BasicListUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIActionMap(this->list, nullptr);
	$SwingUtilities::replaceUIInputMap(this->list, $JComponent::WHEN_FOCUSED, nullptr);
}

void BasicListUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	$var($TransferHandler, th, $nc(this->list)->getTransferHandler());
	if (th == nullptr || $instanceOf($UIResource, th)) {
		$nc(this->list)->setTransferHandler(BasicListUI::defaultTransferHandler);
		if ($instanceOf($UIResource, $($nc(this->list)->getDropTarget()))) {
			$nc(this->list)->setDropTarget(nullptr);
		}
	}
	$set(this, focusListener, createFocusListener());
	$set(this, mouseInputListener, createMouseInputListener());
	$set(this, propertyChangeListener, createPropertyChangeListener());
	$set(this, listSelectionListener, createListSelectionListener());
	$set(this, listDataListener, createListDataListener());
	$nc(this->list)->addFocusListener(this->focusListener);
	$nc(this->list)->addMouseListener(this->mouseInputListener);
	$nc(this->list)->addMouseMotionListener(this->mouseInputListener);
	$nc(this->list)->addPropertyChangeListener(this->propertyChangeListener);
	$nc(this->list)->addKeyListener($(getHandler()));
	$var($ListModel, model, $nc(this->list)->getModel());
	if (model != nullptr) {
		model->addListDataListener(this->listDataListener);
	}
	$var($ListSelectionModel, selectionModel, $nc(this->list)->getSelectionModel());
	if (selectionModel != nullptr) {
		selectionModel->addListSelectionListener(this->listSelectionListener);
	}
}

void BasicListUI::uninstallListeners() {
	$useLocalCurrentObjectStackCache();
	$nc(this->list)->removeFocusListener(this->focusListener);
	$nc(this->list)->removeMouseListener(this->mouseInputListener);
	$nc(this->list)->removeMouseMotionListener(this->mouseInputListener);
	$nc(this->list)->removePropertyChangeListener(this->propertyChangeListener);
	$nc(this->list)->removeKeyListener($(getHandler()));
	$var($ListModel, model, $nc(this->list)->getModel());
	if (model != nullptr) {
		model->removeListDataListener(this->listDataListener);
	}
	$var($ListSelectionModel, selectionModel, $nc(this->list)->getSelectionModel());
	if (selectionModel != nullptr) {
		selectionModel->removeListSelectionListener(this->listSelectionListener);
	}
	$set(this, focusListener, nullptr);
	$set(this, mouseInputListener, nullptr);
	$set(this, listSelectionListener, nullptr);
	$set(this, listDataListener, nullptr);
	$set(this, propertyChangeListener, nullptr);
	$set(this, handler, nullptr);
}

void BasicListUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$nc(this->list)->setLayout(nullptr);
	$LookAndFeel::installBorder(this->list, "List.border"_s);
	$LookAndFeel::installColorsAndFont(this->list, "List.background"_s, "List.foreground"_s, "List.font"_s);
	$init($Boolean);
	$LookAndFeel::installProperty(this->list, "opaque"_s, $Boolean::TRUE);
	if ($nc(this->list)->getCellRenderer() == nullptr) {
		$var($ListCellRenderer, tmp, ($cast($ListCellRenderer, $UIManager::get("List.cellRenderer"_s))));
		$nc(this->list)->setCellRenderer(tmp);
	}
	$var($Color, sbg, $nc(this->list)->getSelectionBackground());
	if (sbg == nullptr || $instanceOf($UIResource, sbg)) {
		$nc(this->list)->setSelectionBackground($($UIManager::getColor("List.selectionBackground"_s)));
	}
	$var($Color, sfg, $nc(this->list)->getSelectionForeground());
	if (sfg == nullptr || $instanceOf($UIResource, sfg)) {
		$nc(this->list)->setSelectionForeground($($UIManager::getColor("List.selectionForeground"_s)));
	}
	$var($Long, l, $cast($Long, $UIManager::get("List.timeFactor"_s)));
	this->timeFactor = (l != nullptr) ? $nc(l)->longValue() : (int64_t)1000;
	updateIsFileList();
}

void BasicListUI::updateIsFileList() {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	bool b = $nc($Boolean::TRUE)->equals($($nc(this->list)->getClientProperty("List.isFileList"_s)));
	if (b != this->isFileList) {
		this->isFileList = b;
		$var($Font, oldFont, $nc(this->list)->getFont());
		if (oldFont == nullptr || $instanceOf($UIResource, oldFont)) {
			$var($Font, newFont, $UIManager::getFont(b ? $of("FileChooser.listFont"_s) : $of("List.font"_s)));
			if (newFont != nullptr && newFont != oldFont) {
				$nc(this->list)->setFont(newFont);
			}
		}
	}
}

void BasicListUI::uninstallDefaults() {
	$useLocalCurrentObjectStackCache();
	$LookAndFeel::uninstallBorder(this->list);
	if ($instanceOf($UIResource, $($nc(this->list)->getFont()))) {
		$nc(this->list)->setFont(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->list)->getForeground()))) {
		$nc(this->list)->setForeground(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->list)->getBackground()))) {
		$nc(this->list)->setBackground(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->list)->getSelectionBackground()))) {
		$nc(this->list)->setSelectionBackground(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->list)->getSelectionForeground()))) {
		$nc(this->list)->setSelectionForeground(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->list)->getCellRenderer()))) {
		$nc(this->list)->setCellRenderer(nullptr);
	}
	if ($instanceOf($UIResource, $($nc(this->list)->getTransferHandler()))) {
		$nc(this->list)->setTransferHandler(nullptr);
	}
}

void BasicListUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JList, tmp, $cast($JList, c));
	$set(this, list, tmp);
	this->layoutOrientation = $nc(this->list)->getLayoutOrientation();
	$set(this, rendererPane, $new($CellRendererPane));
	$nc(this->list)->add(static_cast<$Component*>(this->rendererPane));
	this->columnCount = 1;
	this->updateLayoutStateNeeded = BasicListUI::modelChanged;
	this->isLeftToRight = $nc($($nc(this->list)->getComponentOrientation()))->isLeftToRight();
	installDefaults();
	installListeners();
	installKeyboardActions();
}

void BasicListUI::uninstallUI($JComponent* c) {
	uninstallListeners();
	uninstallDefaults();
	uninstallKeyboardActions();
	this->cellWidth = (this->cellHeight = -1);
	$set(this, cellHeights, nullptr);
	this->listWidth = (this->listHeight = -1);
	$nc(this->list)->remove(static_cast<$Component*>(this->rendererPane));
	$set(this, rendererPane, nullptr);
	$set(this, list, nullptr);
}

$ComponentUI* BasicListUI::createUI($JComponent* list) {
	$init(BasicListUI);
	return $new(BasicListUI);
}

int32_t BasicListUI::locationToIndex($JList* list, $Point* location) {
	maybeUpdateLayoutState();
	return convertLocationToModel($nc(location)->x, location->y);
}

$Point* BasicListUI::indexToLocation($JList* list, int32_t index) {
	maybeUpdateLayoutState();
	$var($Rectangle, rect, getCellBounds(list, index, index));
	if (rect != nullptr) {
		return $new($Point, rect->x, rect->y);
	}
	return nullptr;
}

$Rectangle* BasicListUI::getCellBounds($JList* list, int32_t index1, int32_t index2) {
	$useLocalCurrentObjectStackCache();
	maybeUpdateLayoutState();
	int32_t minIndex = $Math::min(index1, index2);
	int32_t maxIndex = $Math::max(index1, index2);
	if (minIndex >= $nc($($nc(list)->getModel()))->getSize()) {
		return nullptr;
	}
	$var($Rectangle, minBounds, getCellBounds(list, minIndex));
	if (minBounds == nullptr) {
		return nullptr;
	}
	if (minIndex == maxIndex) {
		return minBounds;
	}
	$var($Rectangle, maxBounds, getCellBounds(list, maxIndex));
	if (maxBounds != nullptr) {
		if (this->layoutOrientation == $JList::HORIZONTAL_WRAP) {
			int32_t minRow = convertModelToRow(minIndex);
			int32_t maxRow = convertModelToRow(maxIndex);
			if (minRow != maxRow) {
				$nc(minBounds)->x = 0;
				minBounds->width = $nc(list)->getWidth();
			}
		} else if ($nc(minBounds)->x != maxBounds->x) {
			minBounds->y = 0;
			minBounds->height = $nc(list)->getHeight();
		}
		$nc(minBounds)->add(maxBounds);
	}
	return minBounds;
}

$Rectangle* BasicListUI::getCellBounds($JList* list, int32_t index) {
	maybeUpdateLayoutState();
	int32_t row = convertModelToRow(index);
	int32_t column = convertModelToColumn(index);
	if (row == -1 || column == -1) {
		return nullptr;
	}
	$var($Insets, insets, $nc(list)->getInsets());
	int32_t x = 0;
	int32_t w = this->cellWidth;
	int32_t y = $nc(insets)->top;
	int32_t h = 0;
	switch (this->layoutOrientation) {
	case $JList::VERTICAL_WRAP:
		{}
	case $JList::HORIZONTAL_WRAP:
		{
			if (this->isLeftToRight) {
				x = insets->left + column * this->cellWidth;
			} else {
				x = list->getWidth() - insets->right - (column + 1) * this->cellWidth;
			}
			y += this->cellHeight * row;
			h = this->cellHeight;
			break;
		}
	default:
		{
			x = insets->left;
			if (this->cellHeights == nullptr) {
				y += (this->cellHeight * row);
			} else if (row >= $nc(this->cellHeights)->length) {
				y = 0;
			} else {
				for (int32_t i = 0; i < row; ++i) {
					y += $nc(this->cellHeights)->get(i);
				}
			}
			w = list->getWidth() - (insets->left + insets->right);
			h = getRowHeight(index);
			break;
		}
	}
	return $new($Rectangle, x, y, w, h);
}

int32_t BasicListUI::getRowHeight(int32_t row) {
	return getHeight(0, row);
}

int32_t BasicListUI::convertYToRow(int32_t y0) {
	return convertLocationToRow(0, y0, false);
}

int32_t BasicListUI::convertRowToY(int32_t row) {
	if (row >= getRowCount(0) || row < 0) {
		return -1;
	}
	$var($Rectangle, bounds, getCellBounds(this->list, row, row));
	return $nc(bounds)->y;
}

int32_t BasicListUI::getHeight(int32_t column, int32_t row) {
	if (column < 0 || column > this->columnCount || row < 0) {
		return -1;
	}
	if (this->layoutOrientation != $JList::VERTICAL) {
		return this->cellHeight;
	}
	if (row >= $nc($($nc(this->list)->getModel()))->getSize()) {
		return -1;
	}
	return (this->cellHeights == nullptr) ? this->cellHeight : ((row < $nc(this->cellHeights)->length) ? $nc(this->cellHeights)->get(row) : -1);
}

int32_t BasicListUI::convertLocationToRow(int32_t x, int32_t y0, bool closest) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc($($nc(this->list)->getModel()))->getSize();
	if (size <= 0) {
		return -1;
	}
	$var($Insets, insets, $nc(this->list)->getInsets());
	if (this->cellHeights == nullptr) {
		int32_t row = (this->cellHeight == 0) ? 0 : ($div((y0 - $nc(insets)->top), this->cellHeight));
		if (closest) {
			if (row < 0) {
				row = 0;
			} else if (row >= size) {
				row = size - 1;
			}
		}
		return row;
	} else if (size > $nc(this->cellHeights)->length) {
		return -1;
	} else {
		int32_t y = $nc(insets)->top;
		int32_t row = 0;
		if (closest && y0 < y) {
			return 0;
		}
		int32_t i = 0;
		for (i = 0; i < size; ++i) {
			if ((y0 >= y) && (y0 < y + $nc(this->cellHeights)->get(i))) {
				return row;
			}
			y += $nc(this->cellHeights)->get(i);
			row += 1;
		}
		return i - 1;
	}
}

int32_t BasicListUI::convertLocationToRowInColumn(int32_t y, int32_t column) {
	int32_t x = 0;
	if (this->layoutOrientation != $JList::VERTICAL) {
		if (this->isLeftToRight) {
			x = column * this->cellWidth;
		} else {
			int32_t var$0 = $nc(this->list)->getWidth() - (column + 1) * this->cellWidth;
			x = var$0 - $nc($($nc(this->list)->getInsets()))->right;
		}
	}
	return convertLocationToRow(x, y, true);
}

int32_t BasicListUI::convertLocationToModel(int32_t x, int32_t y) {
	int32_t row = convertLocationToRow(x, y, true);
	int32_t column = convertLocationToColumn(x, y);
	if (row >= 0 && column >= 0) {
		return getModelIndex(column, row);
	}
	return -1;
}

int32_t BasicListUI::getRowCount(int32_t column) {
	$useLocalCurrentObjectStackCache();
	if (column < 0 || column >= this->columnCount) {
		return -1;
	}
	if (this->layoutOrientation == $JList::VERTICAL || (column == 0 && this->columnCount == 1)) {
		return $nc($($nc(this->list)->getModel()))->getSize();
	}
	if (column >= this->columnCount) {
		return -1;
	}
	if (this->layoutOrientation == $JList::VERTICAL_WRAP) {
		if (column < (this->columnCount - 1)) {
			return this->rowsPerColumn;
		}
		return $nc($($nc(this->list)->getModel()))->getSize() - (this->columnCount - 1) * this->rowsPerColumn;
	}
	int32_t diff = this->columnCount - (this->columnCount * this->rowsPerColumn - $nc($($nc(this->list)->getModel()))->getSize());
	if (column >= diff) {
		return $Math::max(0, this->rowsPerColumn - 1);
	}
	return this->rowsPerColumn;
}

int32_t BasicListUI::getModelIndex(int32_t column, int32_t row) {
	$useLocalCurrentObjectStackCache();
	switch (this->layoutOrientation) {
	case $JList::VERTICAL_WRAP:
		{
			int32_t var$0 = $nc($($nc(this->list)->getModel()))->getSize() - 1;
			return $Math::min(var$0, this->rowsPerColumn * column + $Math::min(row, this->rowsPerColumn - 1));
		}
	case $JList::HORIZONTAL_WRAP:
		{
			return $Math::min($nc($($nc(this->list)->getModel()))->getSize() - 1, row * this->columnCount + column);
		}
	default:
		{
			return row;
		}
	}
}

int32_t BasicListUI::convertLocationToColumn(int32_t x, int32_t y) {
	if (this->cellWidth > 0) {
		if (this->layoutOrientation == $JList::VERTICAL) {
			return 0;
		}
		$var($Insets, insets, $nc(this->list)->getInsets());
		int32_t col = 0;
		if (this->isLeftToRight) {
			col = $div((x - $nc(insets)->left), this->cellWidth);
		} else {
			col = $div(($nc(this->list)->getWidth() - x - $nc(insets)->right - 1), this->cellWidth);
		}
		if (col < 0) {
			return 0;
		} else if (col >= this->columnCount) {
			return this->columnCount - 1;
		}
		return col;
	}
	return 0;
}

int32_t BasicListUI::convertModelToRow(int32_t index) {
	int32_t size = $nc($($nc(this->list)->getModel()))->getSize();
	if ((index < 0) || (index >= size)) {
		return -1;
	}
	if (this->layoutOrientation != $JList::VERTICAL && this->columnCount > 1 && this->rowsPerColumn > 0) {
		if (this->layoutOrientation == $JList::VERTICAL_WRAP) {
			return $mod(index, this->rowsPerColumn);
		}
		return $div(index, this->columnCount);
	}
	return index;
}

int32_t BasicListUI::convertModelToColumn(int32_t index) {
	int32_t size = $nc($($nc(this->list)->getModel()))->getSize();
	if ((index < 0) || (index >= size)) {
		return -1;
	}
	if (this->layoutOrientation != $JList::VERTICAL && this->rowsPerColumn > 0 && this->columnCount > 1) {
		if (this->layoutOrientation == $JList::VERTICAL_WRAP) {
			return $div(index, this->rowsPerColumn);
		}
		return $mod(index, this->columnCount);
	}
	return 0;
}

void BasicListUI::maybeUpdateLayoutState() {
	if (this->updateLayoutStateNeeded != 0) {
		updateLayoutState();
		this->updateLayoutStateNeeded = 0;
	}
}

void BasicListUI::updateLayoutState() {
	$useLocalCurrentObjectStackCache();
	int32_t fixedCellHeight = $nc(this->list)->getFixedCellHeight();
	int32_t fixedCellWidth = $nc(this->list)->getFixedCellWidth();
	this->cellWidth = (fixedCellWidth != -1) ? fixedCellWidth : -1;
	if (fixedCellHeight != -1) {
		this->cellHeight = fixedCellHeight;
		$set(this, cellHeights, nullptr);
	} else {
		this->cellHeight = -1;
		$set(this, cellHeights, $new($ints, $nc($($nc(this->list)->getModel()))->getSize()));
	}
	if ((fixedCellWidth == -1) || (fixedCellHeight == -1)) {
		$var($ListModel, dataModel, $nc(this->list)->getModel());
		int32_t dataModelSize = $nc(dataModel)->getSize();
		$var($ListCellRenderer, renderer, $nc(this->list)->getCellRenderer());
		if (renderer != nullptr) {
			for (int32_t index = 0; index < dataModelSize; ++index) {
				$var($Object, value, dataModel->getElementAt(index));
				$var($Component, c, renderer->getListCellRendererComponent(this->list, value, index, false, false));
				$nc(this->rendererPane)->add(c);
				$var($Dimension, cellSize, $nc(c)->getPreferredSize());
				if (fixedCellWidth == -1) {
					this->cellWidth = $Math::max($nc(cellSize)->width, this->cellWidth);
				}
				if (fixedCellHeight == -1) {
					$nc(this->cellHeights)->set(index, $nc(cellSize)->height);
				}
			}
		} else {
			if (this->cellWidth == -1) {
				this->cellWidth = 0;
			}
			if (this->cellHeights == nullptr) {
				$set(this, cellHeights, $new($ints, dataModelSize));
			}
			for (int32_t index = 0; index < dataModelSize; ++index) {
				$nc(this->cellHeights)->set(index, 0);
			}
		}
	}
	this->columnCount = 1;
	if (this->layoutOrientation != $JList::VERTICAL) {
		updateHorizontalLayoutState(fixedCellWidth, fixedCellHeight);
	}
}

void BasicListUI::updateHorizontalLayoutState(int32_t fixedCellWidth, int32_t fixedCellHeight) {
	$useLocalCurrentObjectStackCache();
	int32_t visRows = $nc(this->list)->getVisibleRowCount();
	int32_t dataModelSize = $nc($($nc(this->list)->getModel()))->getSize();
	$var($Insets, insets, $nc(this->list)->getInsets());
	this->listHeight = $nc(this->list)->getHeight();
	this->listWidth = $nc(this->list)->getWidth();
	if (dataModelSize == 0) {
		this->rowsPerColumn = (this->columnCount = 0);
		this->preferredHeight = $nc(insets)->top + insets->bottom;
		return;
	}
	int32_t height = 0;
	if (fixedCellHeight != -1) {
		height = fixedCellHeight;
	} else {
		int32_t maxHeight = 0;
		if ($nc(this->cellHeights)->length > 0) {
			maxHeight = $nc(this->cellHeights)->get($nc(this->cellHeights)->length - 1);
			for (int32_t counter = $nc(this->cellHeights)->length - 2; counter >= 0; --counter) {
				maxHeight = $Math::max(maxHeight, $nc(this->cellHeights)->get(counter));
			}
		}
		height = (this->cellHeight = maxHeight);
		$set(this, cellHeights, nullptr);
	}
	this->rowsPerColumn = dataModelSize;
	if (visRows > 0) {
		this->rowsPerColumn = visRows;
		this->columnCount = $Math::max(1, $div(dataModelSize, this->rowsPerColumn));
		if (dataModelSize > 0 && dataModelSize > this->rowsPerColumn && $mod(dataModelSize, this->rowsPerColumn) != 0) {
			++this->columnCount;
		}
		if (this->layoutOrientation == $JList::HORIZONTAL_WRAP) {
			this->rowsPerColumn = ($div(dataModelSize, this->columnCount));
			if ($mod(dataModelSize, this->columnCount) > 0) {
				++this->rowsPerColumn;
			}
		}
	} else if (this->layoutOrientation == $JList::VERTICAL_WRAP && height != 0) {
		this->rowsPerColumn = $Math::max(1, $div((this->listHeight - $nc(insets)->top - insets->bottom), height));
		this->columnCount = $Math::max(1, $div(dataModelSize, this->rowsPerColumn));
		if (dataModelSize > 0 && dataModelSize > this->rowsPerColumn && $mod(dataModelSize, this->rowsPerColumn) != 0) {
			++this->columnCount;
		}
	} else if (this->layoutOrientation == $JList::HORIZONTAL_WRAP && this->cellWidth > 0 && this->listWidth > 0) {
		this->columnCount = $Math::max(1, $div((this->listWidth - $nc(insets)->left - insets->right), this->cellWidth));
		this->rowsPerColumn = $div(dataModelSize, this->columnCount);
		if ($mod(dataModelSize, this->columnCount) > 0) {
			++this->rowsPerColumn;
		}
	}
	this->preferredHeight = this->rowsPerColumn * this->cellHeight + $nc(insets)->top + insets->bottom;
}

$BasicListUI$Handler* BasicListUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicListUI$Handler, this));
	}
	return this->handler;
}

$MouseInputListener* BasicListUI::createMouseInputListener() {
	return getHandler();
}

$FocusListener* BasicListUI::createFocusListener() {
	return getHandler();
}

$ListSelectionListener* BasicListUI::createListSelectionListener() {
	return getHandler();
}

void BasicListUI::redrawList() {
	$nc(this->list)->revalidate();
	$nc(this->list)->repaint();
}

$ListDataListener* BasicListUI::createListDataListener() {
	return getHandler();
}

$PropertyChangeListener* BasicListUI::createPropertyChangeListener() {
	return getHandler();
}

int32_t BasicListUI::adjustIndex(int32_t index, $JList* list) {
	$init(BasicListUI);
	return index < $nc($($nc(list)->getModel()))->getSize() ? index : -1;
}

void clinit$BasicListUI($Class* class$) {
	$assignStatic(BasicListUI::BASELINE_COMPONENT_KEY, $new($StringBuilder, "List.baselineComponent"_s));
	$assignStatic(BasicListUI::defaultTransferHandler, $new($BasicListUI$ListTransferHandler));
}

BasicListUI::BasicListUI() {
}

$Class* BasicListUI::load$($String* name, bool initialize) {
	$loadClass(BasicListUI, name, initialize, &_BasicListUI_ClassInfo_, clinit$BasicListUI, allocate$BasicListUI);
	return class$;
}

$Class* BasicListUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax