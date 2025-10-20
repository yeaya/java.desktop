#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TableHeaderUI.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI$1.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI$Actions.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI$MouseInputHandler.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef AUTO_RESIZE_OFF
#undef E_RESIZE_CURSOR
#undef FOCUS_TABLE
#undef MAX_VALUE
#undef MOVE_COLUMN_LEFT
#undef MOVE_COLUMN_RIGHT
#undef RESIZE_LEFT
#undef RESIZE_RIGHT
#undef SELECT_COLUMN_TO_LEFT
#undef SELECT_COLUMN_TO_RIGHT
#undef TOGGLE_SORT_ORDER
#undef TRUE
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_FOCUSED

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusListener = ::java::awt::event::FocusListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
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
using $JViewport = ::javax::swing::JViewport;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TableHeaderUI = ::javax::swing::plaf::TableHeaderUI;
using $BasicTableHeaderUI$1 = ::javax::swing::plaf::basic::BasicTableHeaderUI$1;
using $BasicTableHeaderUI$Actions = ::javax::swing::plaf::basic::BasicTableHeaderUI$Actions;
using $BasicTableHeaderUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicTableHeaderUI$MouseInputHandler;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTableHeaderUI_FieldInfo_[] = {
	{"resizeCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE | $STATIC, $staticField(BasicTableHeaderUI, resizeCursor)},
	{"header", "Ljavax/swing/table/JTableHeader;", nullptr, $PROTECTED, $field(BasicTableHeaderUI, header)},
	{"rendererPane", "Ljavax/swing/CellRendererPane;", nullptr, $PROTECTED, $field(BasicTableHeaderUI, rendererPane)},
	{"mouseInputListener", "Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED, $field(BasicTableHeaderUI, mouseInputListener)},
	{"rolloverColumn", "I", nullptr, $PRIVATE, $field(BasicTableHeaderUI, rolloverColumn)},
	{"selectedColumnIndex", "I", nullptr, $PRIVATE, $field(BasicTableHeaderUI, selectedColumnIndex)},
	{"focusListener", "Ljava/awt/event/FocusListener;", nullptr, $PRIVATE | $STATIC, $staticField(BasicTableHeaderUI, focusListener)},
	{}
};

$MethodInfo _BasicTableHeaderUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicTableHeaderUI::*)()>(&BasicTableHeaderUI::init$))},
	{"canResize", "(Ljavax/swing/table/TableColumn;Ljavax/swing/table/JTableHeader;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($TableColumn*,$JTableHeader*)>(&BasicTableHeaderUI::canResize))},
	{"changeColumnWidth", "(Ljavax/swing/table/TableColumn;Ljavax/swing/table/JTableHeader;II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicTableHeaderUI::*)($TableColumn*,$JTableHeader*,int32_t,int32_t)>(&BasicTableHeaderUI::changeColumnWidth))},
	{"createHeaderSize", "(J)Ljava/awt/Dimension;", nullptr, $PRIVATE, $method(static_cast<$Dimension*(BasicTableHeaderUI::*)(int64_t)>(&BasicTableHeaderUI::createHeaderSize))},
	{"createMouseInputListener", "()Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicTableHeaderUI::createUI))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getHeaderHeight", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicTableHeaderUI::*)()>(&BasicTableHeaderUI::getHeaderHeight))},
	{"getHeaderRenderer", "(I)Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(BasicTableHeaderUI::*)(int32_t)>(&BasicTableHeaderUI::getHeaderRenderer))},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getRolloverColumn", "()I", nullptr, $PROTECTED},
	{"getSelectedColumnIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicTableHeaderUI::*)()>(&BasicTableHeaderUI::getSelectedColumnIndex))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicTableHeaderUI::loadActionMap))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintCell", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableHeaderUI::*)($Graphics*,$Rectangle*,int32_t)>(&BasicTableHeaderUI::paintCell))},
	{"rolloverColumnUpdated", "(II)V", nullptr, $PROTECTED},
	{"scrollToColumn", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableHeaderUI::*)(int32_t)>(&BasicTableHeaderUI::scrollToColumn))},
	{"selectColumn", "(I)V", nullptr, 0},
	{"selectColumn", "(IZ)V", nullptr, 0},
	{"selectNextColumn", "(Z)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicTableHeaderUI::*)(bool)>(&BasicTableHeaderUI::selectNextColumn))},
	{"selectPreviousColumn", "(Z)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicTableHeaderUI::*)(bool)>(&BasicTableHeaderUI::selectPreviousColumn))},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateRolloverColumn", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableHeaderUI::*)($MouseEvent*)>(&BasicTableHeaderUI::updateRolloverColumn))},
	{"viewIndexForColumn", "(Ljavax/swing/table/TableColumn;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicTableHeaderUI::*)($TableColumn*)>(&BasicTableHeaderUI::viewIndexForColumn))},
	{}
};

$InnerClassInfo _BasicTableHeaderUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTableHeaderUI$Actions", "javax.swing.plaf.basic.BasicTableHeaderUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicTableHeaderUI$MouseInputHandler", "javax.swing.plaf.basic.BasicTableHeaderUI", "MouseInputHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTableHeaderUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicTableHeaderUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTableHeaderUI",
	"javax.swing.plaf.TableHeaderUI",
	nullptr,
	_BasicTableHeaderUI_FieldInfo_,
	_BasicTableHeaderUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTableHeaderUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTableHeaderUI$Actions,javax.swing.plaf.basic.BasicTableHeaderUI$MouseInputHandler,javax.swing.plaf.basic.BasicTableHeaderUI$1"
};

$Object* allocate$BasicTableHeaderUI($Class* clazz) {
	return $of($alloc(BasicTableHeaderUI));
}

$Cursor* BasicTableHeaderUI::resizeCursor = nullptr;
$FocusListener* BasicTableHeaderUI::focusListener = nullptr;

void BasicTableHeaderUI::init$() {
	$TableHeaderUI::init$();
	this->rolloverColumn = -1;
	this->selectedColumnIndex = 0;
}

$MouseInputListener* BasicTableHeaderUI::createMouseInputListener() {
	return $new($BasicTableHeaderUI$MouseInputHandler, this);
}

$ComponentUI* BasicTableHeaderUI::createUI($JComponent* h) {
	$init(BasicTableHeaderUI);
	return $new(BasicTableHeaderUI);
}

void BasicTableHeaderUI::installUI($JComponent* c) {
	$set(this, header, $cast($JTableHeader, c));
	$set(this, rendererPane, $new($CellRendererPane));
	$nc(this->header)->add(static_cast<$Component*>(this->rendererPane));
	installDefaults();
	installListeners();
	installKeyboardActions();
}

void BasicTableHeaderUI::installDefaults() {
	$LookAndFeel::installColorsAndFont(this->header, "TableHeader.background"_s, "TableHeader.foreground"_s, "TableHeader.font"_s);
	$init($Boolean);
	$LookAndFeel::installProperty(this->header, "opaque"_s, $Boolean::TRUE);
}

void BasicTableHeaderUI::installListeners() {
	$set(this, mouseInputListener, createMouseInputListener());
	$nc(this->header)->addMouseListener(this->mouseInputListener);
	$nc(this->header)->addMouseMotionListener(this->mouseInputListener);
	$nc(this->header)->addFocusListener(BasicTableHeaderUI::focusListener);
}

void BasicTableHeaderUI::installKeyboardActions() {
	$var($InputMap, keyMap, $cast($InputMap, $DefaultLookup::get(this->header, this, "TableHeader.ancestorInputMap"_s)));
	$SwingUtilities::replaceUIInputMap(this->header, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, keyMap);
	$LazyActionMap::installLazyActionMap(this->header, BasicTableHeaderUI::class$, "TableHeader.actionMap"_s);
}

void BasicTableHeaderUI::uninstallUI($JComponent* c) {
	uninstallDefaults();
	uninstallListeners();
	uninstallKeyboardActions();
	$nc(this->header)->remove(static_cast<$Component*>(this->rendererPane));
	$set(this, rendererPane, nullptr);
	$set(this, header, nullptr);
}

void BasicTableHeaderUI::uninstallDefaults() {
}

void BasicTableHeaderUI::uninstallListeners() {
	$nc(this->header)->removeMouseListener(this->mouseInputListener);
	$nc(this->header)->removeMouseMotionListener(this->mouseInputListener);
	$nc(this->header)->removeFocusListener(BasicTableHeaderUI::focusListener);
	$set(this, mouseInputListener, nullptr);
}

void BasicTableHeaderUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIInputMap(this->header, $JComponent::WHEN_FOCUSED, nullptr);
	$SwingUtilities::replaceUIActionMap(this->header, nullptr);
}

void BasicTableHeaderUI::loadActionMap($LazyActionMap* map) {
	$init(BasicTableHeaderUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicTableHeaderUI$Actions);
	$nc(map)->put($$new($BasicTableHeaderUI$Actions, $BasicTableHeaderUI$Actions::TOGGLE_SORT_ORDER));
	map->put($$new($BasicTableHeaderUI$Actions, $BasicTableHeaderUI$Actions::SELECT_COLUMN_TO_LEFT));
	map->put($$new($BasicTableHeaderUI$Actions, $BasicTableHeaderUI$Actions::SELECT_COLUMN_TO_RIGHT));
	map->put($$new($BasicTableHeaderUI$Actions, $BasicTableHeaderUI$Actions::MOVE_COLUMN_LEFT));
	map->put($$new($BasicTableHeaderUI$Actions, $BasicTableHeaderUI$Actions::MOVE_COLUMN_RIGHT));
	map->put($$new($BasicTableHeaderUI$Actions, $BasicTableHeaderUI$Actions::RESIZE_LEFT));
	map->put($$new($BasicTableHeaderUI$Actions, $BasicTableHeaderUI$Actions::RESIZE_RIGHT));
	map->put($$new($BasicTableHeaderUI$Actions, $BasicTableHeaderUI$Actions::FOCUS_TABLE));
}

int32_t BasicTableHeaderUI::getRolloverColumn() {
	return this->rolloverColumn;
}

void BasicTableHeaderUI::rolloverColumnUpdated(int32_t oldColumn, int32_t newColumn) {
}

void BasicTableHeaderUI::updateRolloverColumn($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->header)->getDraggedColumn() == nullptr;
	if (var$0 && $nc(this->header)->contains($($nc(e)->getPoint()))) {
		int32_t col = $nc(this->header)->columnAtPoint($($nc(e)->getPoint()));
		if (col != this->rolloverColumn) {
			int32_t oldRolloverColumn = this->rolloverColumn;
			this->rolloverColumn = col;
			rolloverColumnUpdated(oldRolloverColumn, this->rolloverColumn);
		}
	}
}

int32_t BasicTableHeaderUI::selectNextColumn(bool doIt) {
	int32_t newIndex = getSelectedColumnIndex();
	if (newIndex < $nc($($nc(this->header)->getColumnModel()))->getColumnCount() - 1) {
		++newIndex;
		if (doIt) {
			selectColumn(newIndex);
		}
	}
	return newIndex;
}

int32_t BasicTableHeaderUI::selectPreviousColumn(bool doIt) {
	int32_t newIndex = getSelectedColumnIndex();
	if (newIndex > 0) {
		--newIndex;
		if (doIt) {
			selectColumn(newIndex);
		}
	}
	return newIndex;
}

void BasicTableHeaderUI::selectColumn(int32_t newColIndex) {
	selectColumn(newColIndex, true);
}

void BasicTableHeaderUI::selectColumn(int32_t newColIndex, bool doScroll) {
	$var($Rectangle, repaintRect, $nc(this->header)->getHeaderRect(this->selectedColumnIndex));
	$nc(this->header)->repaint(repaintRect);
	this->selectedColumnIndex = newColIndex;
	$assign(repaintRect, $nc(this->header)->getHeaderRect(newColIndex));
	$nc(this->header)->repaint(repaintRect);
	if (doScroll) {
		scrollToColumn(newColIndex);
	}
	return;
}

void BasicTableHeaderUI::scrollToColumn(int32_t col) {
	$useLocalCurrentObjectStackCache();
	$var($Container, container, nullptr);
	$var($JTable, table, nullptr);
	bool var$1 = ($nc(this->header)->getParent() == nullptr);
	bool var$0 = var$1 || (($assign(container, $nc($($nc(this->header)->getParent()))->getParent())) == nullptr) || !($instanceOf($JScrollPane, container));
	if (var$0 || (($assign(table, $nc(this->header)->getTable())) == nullptr)) {
		return;
	}
	$var($Rectangle, vis, $nc(table)->getVisibleRect());
	$var($Rectangle, cellBounds, table->getCellRect(0, col, true));
	$nc(vis)->x = $nc(cellBounds)->x;
	vis->width = cellBounds->width;
	table->scrollRectToVisible(vis);
}

int32_t BasicTableHeaderUI::getSelectedColumnIndex() {
	int32_t numCols = $nc($($nc(this->header)->getColumnModel()))->getColumnCount();
	if (this->selectedColumnIndex >= numCols && numCols > 0) {
		this->selectedColumnIndex = numCols - 1;
	}
	return this->selectedColumnIndex;
}

bool BasicTableHeaderUI::canResize($TableColumn* column, $JTableHeader* header) {
	$init(BasicTableHeaderUI);
	bool var$0 = (column != nullptr) && $nc(header)->getResizingAllowed();
	return var$0 && column->getResizable();
}

int32_t BasicTableHeaderUI::changeColumnWidth($TableColumn* resizingColumn, $JTableHeader* th, int32_t oldWidth, int32_t newWidth) {
	$useLocalCurrentObjectStackCache();
	$nc(resizingColumn)->setWidth(newWidth);
	$var($Container, container, nullptr);
	$var($JTable, table, nullptr);
	bool var$1 = ($nc(th)->getParent() == nullptr);
	bool var$0 = var$1 || (($assign(container, $nc($($nc(th)->getParent()))->getParent())) == nullptr) || !($instanceOf($JScrollPane, container));
	if (var$0 || (($assign(table, $nc(th)->getTable())) == nullptr)) {
		return 0;
	}
	bool var$2 = !$nc($($nc(container)->getComponentOrientation()))->isLeftToRight();
	if (var$2 && !$nc($($nc(th)->getComponentOrientation()))->isLeftToRight()) {
		$var($JViewport, viewport, $nc(($cast($JScrollPane, container)))->getViewport());
		int32_t viewportWidth = $nc(viewport)->getWidth();
		int32_t diff = newWidth - oldWidth;
		int32_t newHeaderWidth = $nc(table)->getWidth() + diff;
		$var($Dimension, tableSize, table->getSize());
		$nc(tableSize)->width += diff;
		table->setSize(tableSize);
		if ((newHeaderWidth >= viewportWidth) && (table->getAutoResizeMode() == $JTable::AUTO_RESIZE_OFF)) {
			$var($Point, p, viewport->getViewPosition());
			$nc(p)->x = $Math::max(0, $Math::min(newHeaderWidth - viewportWidth, p->x + diff));
			viewport->setViewPosition(p);
			return diff;
		}
	}
	return 0;
}

int32_t BasicTableHeaderUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$TableHeaderUI::getBaseline(c, width, height);
	int32_t baseline = -1;
	$var($TableColumnModel, columnModel, $nc(this->header)->getColumnModel());
	for (int32_t column = 0; column < $nc(columnModel)->getColumnCount(); ++column) {
		$var($TableColumn, aColumn, columnModel->getColumn(column));
		$var($Component, comp, getHeaderRenderer(column));
		$var($Dimension, pref, $nc(comp)->getPreferredSize());
		int32_t columnBaseline = comp->getBaseline($nc(pref)->width, height);
		if (columnBaseline >= 0) {
			if (baseline == -1) {
				baseline = columnBaseline;
			} else if (baseline != columnBaseline) {
				baseline = -1;
				break;
			}
		}
	}
	return baseline;
}

void BasicTableHeaderUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(this->header)->getColumnModel()))->getColumnCount() <= 0) {
		return;
	}
	bool ltr = $nc($($nc(this->header)->getComponentOrientation()))->isLeftToRight();
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	$var($Point, left, $nc(clip)->getLocation());
	$var($Point, right, $new($Point, clip->x + clip->width - 1, clip->y));
	$var($TableColumnModel, cm, $nc(this->header)->getColumnModel());
	int32_t cMin = $nc(this->header)->columnAtPoint(ltr ? left : right);
	int32_t cMax = $nc(this->header)->columnAtPoint(ltr ? right : left);
	if (cMin == -1) {
		cMin = 0;
	}
	if (cMax == -1) {
		cMax = $nc(cm)->getColumnCount() - 1;
	}
	$var($TableColumn, draggedColumn, $nc(this->header)->getDraggedColumn());
	int32_t columnWidth = 0;
	$var($Rectangle, cellRect, $nc(this->header)->getHeaderRect(ltr ? cMin : cMax));
	$var($TableColumn, aColumn, nullptr);
	if (ltr) {
		for (int32_t column = cMin; column <= cMax; ++column) {
			$assign(aColumn, $nc(cm)->getColumn(column));
			columnWidth = $nc(aColumn)->getWidth();
			$nc(cellRect)->width = columnWidth;
			if (aColumn != draggedColumn) {
				paintCell(g, cellRect, column);
			}
			cellRect->x += columnWidth;
		}
	} else {
		for (int32_t column = cMax; column >= cMin; --column) {
			$assign(aColumn, $nc(cm)->getColumn(column));
			columnWidth = $nc(aColumn)->getWidth();
			$nc(cellRect)->width = columnWidth;
			if (aColumn != draggedColumn) {
				paintCell(g, cellRect, column);
			}
			cellRect->x += columnWidth;
		}
	}
	if (draggedColumn != nullptr) {
		int32_t draggedColumnIndex = viewIndexForColumn(draggedColumn);
		$var($Rectangle, draggedCellRect, $nc(this->header)->getHeaderRect(draggedColumnIndex));
		g->setColor($($nc($($nc(this->header)->getParent()))->getBackground()));
		g->fillRect($nc(draggedCellRect)->x, draggedCellRect->y, draggedCellRect->width, draggedCellRect->height);
		$nc(draggedCellRect)->x += $nc(this->header)->getDraggedDistance();
		g->setColor($($nc(this->header)->getBackground()));
		g->fillRect(draggedCellRect->x, draggedCellRect->y, draggedCellRect->width, draggedCellRect->height);
		paintCell(g, draggedCellRect, draggedColumnIndex);
	}
	$nc(this->rendererPane)->removeAll();
}

$Component* BasicTableHeaderUI::getHeaderRenderer(int32_t columnIndex) {
	$useLocalCurrentObjectStackCache();
	$var($TableColumn, aColumn, $nc($($nc(this->header)->getColumnModel()))->getColumn(columnIndex));
	$var($TableCellRenderer, renderer, $nc(aColumn)->getHeaderRenderer());
	if (renderer == nullptr) {
		$assign(renderer, $nc(this->header)->getDefaultRenderer());
	}
	bool var$1 = !$nc(this->header)->isPaintingForPrint();
	bool var$0 = var$1 && (columnIndex == getSelectedColumnIndex());
	bool hasFocus = var$0 && $nc(this->header)->hasFocus();
	$var($JTable, var$2, $nc(this->header)->getTable());
	return $nc(renderer)->getTableCellRendererComponent(var$2, $(aColumn->getHeaderValue()), false, hasFocus, -1, columnIndex);
}

void BasicTableHeaderUI::paintCell($Graphics* g, $Rectangle* cellRect, int32_t columnIndex) {
	$var($Component, component, getHeaderRenderer(columnIndex));
	$nc(this->rendererPane)->paintComponent(g, component, this->header, $nc(cellRect)->x, cellRect->y, cellRect->width, cellRect->height, true);
}

int32_t BasicTableHeaderUI::viewIndexForColumn($TableColumn* aColumn) {
	$var($TableColumnModel, cm, $nc(this->header)->getColumnModel());
	for (int32_t column = 0; column < $nc(cm)->getColumnCount(); ++column) {
		if (cm->getColumn(column) == aColumn) {
			return column;
		}
	}
	return -1;
}

int32_t BasicTableHeaderUI::getHeaderHeight() {
	$useLocalCurrentObjectStackCache();
	int32_t height = 0;
	bool accomodatedDefault = false;
	$var($TableColumnModel, columnModel, $nc(this->header)->getColumnModel());
	for (int32_t column = 0; column < $nc(columnModel)->getColumnCount(); ++column) {
		$var($TableColumn, aColumn, columnModel->getColumn(column));
		bool isDefault = ($nc(aColumn)->getHeaderRenderer() == nullptr);
		if (!isDefault || !accomodatedDefault) {
			$var($Component, comp, getHeaderRenderer(column));
			int32_t rendererHeight = $nc($($nc(comp)->getPreferredSize()))->height;
			height = $Math::max(height, rendererHeight);
			if (isDefault && rendererHeight > 0) {
				$var($Object, headerValue, aColumn->getHeaderValue());
				if (headerValue != nullptr) {
					$assign(headerValue, $of(headerValue)->toString());
					if (headerValue != nullptr && !$of(headerValue)->equals(""_s)) {
						accomodatedDefault = true;
					}
				}
			}
		}
	}
	return height;
}

$Dimension* BasicTableHeaderUI::createHeaderSize(int64_t width) {
	if (width > $Integer::MAX_VALUE) {
		width = $Integer::MAX_VALUE;
	}
	return $new($Dimension, (int32_t)width, getHeaderHeight());
}

$Dimension* BasicTableHeaderUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	int64_t width = 0;
	$var($Enumeration, enumeration, $nc($($nc(this->header)->getColumnModel()))->getColumns());
	while ($nc(enumeration)->hasMoreElements()) {
		$var($TableColumn, aColumn, $cast($TableColumn, enumeration->nextElement()));
		width = width + $nc(aColumn)->getMinWidth();
	}
	return createHeaderSize(width);
}

$Dimension* BasicTableHeaderUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	int64_t width = 0;
	$var($Enumeration, enumeration, $nc($($nc(this->header)->getColumnModel()))->getColumns());
	while ($nc(enumeration)->hasMoreElements()) {
		$var($TableColumn, aColumn, $cast($TableColumn, enumeration->nextElement()));
		width = width + $nc(aColumn)->getPreferredWidth();
	}
	return createHeaderSize(width);
}

$Dimension* BasicTableHeaderUI::getMaximumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	int64_t width = 0;
	$var($Enumeration, enumeration, $nc($($nc(this->header)->getColumnModel()))->getColumns());
	while ($nc(enumeration)->hasMoreElements()) {
		$var($TableColumn, aColumn, $cast($TableColumn, enumeration->nextElement()));
		width = width + $nc(aColumn)->getMaxWidth();
	}
	return createHeaderSize(width);
}

void clinit$BasicTableHeaderUI($Class* class$) {
	$assignStatic(BasicTableHeaderUI::resizeCursor, $Cursor::getPredefinedCursor($Cursor::E_RESIZE_CURSOR));
	$assignStatic(BasicTableHeaderUI::focusListener, $new($BasicTableHeaderUI$1));
}

BasicTableHeaderUI::BasicTableHeaderUI() {
}

$Class* BasicTableHeaderUI::load$($String* name, bool initialize) {
	$loadClass(BasicTableHeaderUI, name, initialize, &_BasicTableHeaderUI_ClassInfo_, clinit$BasicTableHeaderUI, allocate$BasicTableHeaderUI);
	return class$;
}

$Class* BasicTableHeaderUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax