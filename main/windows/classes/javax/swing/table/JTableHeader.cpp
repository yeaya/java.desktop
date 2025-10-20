#include <javax/swing/table/JTableHeader.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/ToolTipManager.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/TableColumnModelEvent.h>
#include <javax/swing/event/TableColumnModelListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TableHeaderUI.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/DefaultTableColumnModel.h>
#include <javax/swing/table/JTableHeader$AccessibleJTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/swing/table/DefaultTableCellHeaderRenderer.h>
#include <jcpp.h>

#undef AUTO_RESIZE_OFF
#undef NOBUTTON

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ToolTipManager = ::javax::swing::ToolTipManager;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $TableColumnModelEvent = ::javax::swing::event::TableColumnModelEvent;
using $TableColumnModelListener = ::javax::swing::event::TableColumnModelListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TableHeaderUI = ::javax::swing::plaf::TableHeaderUI;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $DefaultTableColumnModel = ::javax::swing::table::DefaultTableColumnModel;
using $JTableHeader$AccessibleJTableHeader = ::javax::swing::table::JTableHeader$AccessibleJTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;
using $DefaultTableCellHeaderRenderer = ::sun::swing::table::DefaultTableCellHeaderRenderer;

namespace javax {
	namespace swing {
		namespace table {

$CompoundAttribute _JTableHeader_MethodAnnotations_getDefaultRenderer12[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$NamedAttribute JTableHeader_Attribute_var$0[] = {
	{"description", 's', "The object governing the way columns appear in the view."},
	{}
};

$CompoundAttribute _JTableHeader_MethodAnnotations_setColumnModel29[] = {
	{"Ljava/beans/BeanProperty;", JTableHeader_Attribute_var$0},
	{}
};

$NamedAttribute JTableHeader_Attribute_var$1[] = {
	{"description", 's', "Whether the user can drag column headers to reorder columns."},
	{}
};

$CompoundAttribute _JTableHeader_MethodAnnotations_setReorderingAllowed33[] = {
	{"Ljava/beans/BeanProperty;", JTableHeader_Attribute_var$1},
	{}
};

$NamedAttribute JTableHeader_Attribute_var$2[] = {
	{"description", 's', "Whether the user can resize columns by dragging between headers."},
	{}
};

$CompoundAttribute _JTableHeader_MethodAnnotations_setResizingAllowed34[] = {
	{"Ljava/beans/BeanProperty;", JTableHeader_Attribute_var$2},
	{}
};

$NamedAttribute JTableHeader_Attribute_var$3[] = {
	{"description", 's', "The table associated with this header."},
	{}
};

$CompoundAttribute _JTableHeader_MethodAnnotations_setTable36[] = {
	{"Ljava/beans/BeanProperty;", JTableHeader_Attribute_var$3},
	{}
};

$FieldInfo _JTableHeader_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTableHeader, uiClassID)},
	{"table", "Ljavax/swing/JTable;", nullptr, $PROTECTED, $field(JTableHeader, table)},
	{"columnModel", "Ljavax/swing/table/TableColumnModel;", nullptr, $PROTECTED, $field(JTableHeader, columnModel)},
	{"reorderingAllowed", "Z", nullptr, $PROTECTED, $field(JTableHeader, reorderingAllowed)},
	{"resizingAllowed", "Z", nullptr, $PROTECTED, $field(JTableHeader, resizingAllowed)},
	{"updateTableInRealTime", "Z", nullptr, $PROTECTED, $field(JTableHeader, updateTableInRealTime)},
	{"resizingColumn", "Ljavax/swing/table/TableColumn;", nullptr, $PROTECTED | $TRANSIENT, $field(JTableHeader, resizingColumn)},
	{"draggedColumn", "Ljavax/swing/table/TableColumn;", nullptr, $PROTECTED | $TRANSIENT, $field(JTableHeader, draggedColumn)},
	{"draggedDistance", "I", nullptr, $PROTECTED | $TRANSIENT, $field(JTableHeader, draggedDistance)},
	{"defaultRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(JTableHeader, defaultRenderer)},
	{"updateInProgress", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(JTableHeader, updateInProgress)},
	{}
};

$MethodInfo _JTableHeader_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTableHeader::*)()>(&JTableHeader::init$))},
	{"<init>", "(Ljavax/swing/table/TableColumnModel;)V", nullptr, $PUBLIC, $method(static_cast<void(JTableHeader::*)($TableColumnModel*)>(&JTableHeader::init$))},
	{"columnAdded", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC},
	{"columnAtPoint", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{"columnMarginChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"columnMoved", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC},
	{"columnRemoved", "(Ljavax/swing/event/TableColumnModelEvent;)V", nullptr, $PUBLIC},
	{"columnSelectionChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{"createDefaultColumnModel", "()Ljavax/swing/table/TableColumnModel;", nullptr, $PROTECTED},
	{"createDefaultRenderer", "()Ljavax/swing/table/TableCellRenderer;", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getColumnModel", "()Ljavax/swing/table/TableColumnModel;", nullptr, $PUBLIC},
	{"getDefaultRenderer", "()Ljavax/swing/table/TableCellRenderer;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTableHeader_MethodAnnotations_getDefaultRenderer12},
	{"getDraggedColumn", "()Ljavax/swing/table/TableColumn;", nullptr, $PUBLIC},
	{"getDraggedDistance", "()I", nullptr, $PUBLIC},
	{"getHeaderRect", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getReorderingAllowed", "()Z", nullptr, $PUBLIC},
	{"getResizingAllowed", "()Z", nullptr, $PUBLIC},
	{"getResizingColumn", "()Ljavax/swing/table/TableColumn;", nullptr, $PUBLIC},
	{"getTable", "()Ljavax/swing/JTable;", nullptr, $PUBLIC},
	{"getToolTipText", "(Ljava/awt/event/MouseEvent;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/TableHeaderUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUpdateTableInRealTime", "()Z", nullptr, $PUBLIC},
	{"getWidthInRightToLeft", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(JTableHeader::*)()>(&JTableHeader::getWidthInRightToLeft))},
	{"initializeLocalVars", "()V", nullptr, $PROTECTED},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"resizeAndRepaint", "()V", nullptr, $PUBLIC},
	{"setColumnModel", "(Ljavax/swing/table/TableColumnModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTableHeader_MethodAnnotations_setColumnModel29},
	{"setDefaultRenderer", "(Ljavax/swing/table/TableCellRenderer;)V", nullptr, $PUBLIC},
	{"setDraggedColumn", "(Ljavax/swing/table/TableColumn;)V", nullptr, $PUBLIC},
	{"setDraggedDistance", "(I)V", nullptr, $PUBLIC},
	{"setReorderingAllowed", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTableHeader_MethodAnnotations_setReorderingAllowed33},
	{"setResizingAllowed", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTableHeader_MethodAnnotations_setResizingAllowed34},
	{"setResizingColumn", "(Ljavax/swing/table/TableColumn;)V", nullptr, $PUBLIC},
	{"setTable", "(Ljavax/swing/JTable;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTableHeader_MethodAnnotations_setTable36},
	{"setUI", "(Ljavax/swing/plaf/TableHeaderUI;)V", nullptr, $PUBLIC},
	{"setUpdateTableInRealTime", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JTableHeader::*)($ObjectOutputStream*)>(&JTableHeader::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JTableHeader_InnerClassesInfo_[] = {
	{"javax.swing.table.JTableHeader$AccessibleJTableHeader", "javax.swing.table.JTableHeader", "AccessibleJTableHeader", $PROTECTED},
	{}
};

$ClassInfo _JTableHeader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.table.JTableHeader",
	"javax.swing.JComponent",
	"javax.swing.event.TableColumnModelListener,javax.accessibility.Accessible",
	_JTableHeader_FieldInfo_,
	_JTableHeader_MethodInfo_,
	nullptr,
	nullptr,
	_JTableHeader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.table.JTableHeader$AccessibleJTableHeader,javax.swing.table.JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry"
};

$Object* allocate$JTableHeader($Class* clazz) {
	return $of($alloc(JTableHeader));
}

$String* JTableHeader::toString() {
	 return this->$JComponent::toString();
}

int32_t JTableHeader::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JTableHeader::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JTableHeader::clone() {
	 return this->$JComponent::clone();
}

void JTableHeader::finalize() {
	this->$JComponent::finalize();
}


$String* JTableHeader::uiClassID = nullptr;

void JTableHeader::init$() {
	JTableHeader::init$(nullptr);
}

void JTableHeader::init$($TableColumnModel* cm$renamed) {
	$var($TableColumnModel, cm, cm$renamed);
	$JComponent::init$();
	if (cm == nullptr) {
		$assign(cm, createDefaultColumnModel());
	}
	setColumnModel(cm);
	initializeLocalVars();
	updateUI();
}

void JTableHeader::setTable($JTable* table) {
	$var($JTable, old, this->table);
	$set(this, table, table);
	firePropertyChange("table"_s, $of(old), $of(table));
}

$JTable* JTableHeader::getTable() {
	return this->table;
}

void JTableHeader::setReorderingAllowed(bool reorderingAllowed) {
	bool old = this->reorderingAllowed;
	this->reorderingAllowed = reorderingAllowed;
	firePropertyChange("reorderingAllowed"_s, old, reorderingAllowed);
}

bool JTableHeader::getReorderingAllowed() {
	return this->reorderingAllowed;
}

void JTableHeader::setResizingAllowed(bool resizingAllowed) {
	bool old = this->resizingAllowed;
	this->resizingAllowed = resizingAllowed;
	firePropertyChange("resizingAllowed"_s, old, resizingAllowed);
}

bool JTableHeader::getResizingAllowed() {
	return this->resizingAllowed;
}

$TableColumn* JTableHeader::getDraggedColumn() {
	return this->draggedColumn;
}

int32_t JTableHeader::getDraggedDistance() {
	return this->draggedDistance;
}

$TableColumn* JTableHeader::getResizingColumn() {
	return this->resizingColumn;
}

void JTableHeader::setUpdateTableInRealTime(bool flag) {
	this->updateTableInRealTime = flag;
}

bool JTableHeader::getUpdateTableInRealTime() {
	return this->updateTableInRealTime;
}

void JTableHeader::setDefaultRenderer($TableCellRenderer* defaultRenderer) {
	$set(this, defaultRenderer, defaultRenderer);
}

$TableCellRenderer* JTableHeader::getDefaultRenderer() {
	return this->defaultRenderer;
}

int32_t JTableHeader::columnAtPoint($Point* point) {
	$useLocalCurrentObjectStackCache();
	int32_t x = $nc(point)->x;
	if (!$nc($(getComponentOrientation()))->isLeftToRight()) {
		x = getWidthInRightToLeft() - x - 1;
	}
	return $nc($(getColumnModel()))->getColumnIndexAtX(x);
}

$Rectangle* JTableHeader::getHeaderRect(int32_t column) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, $new($Rectangle));
	$var($TableColumnModel, cm, getColumnModel());
	r->height = getHeight();
	if (column < 0) {
		if (!$nc($(getComponentOrientation()))->isLeftToRight()) {
			r->x = getWidthInRightToLeft();
		}
	} else if (column >= $nc(cm)->getColumnCount()) {
		if ($nc($(getComponentOrientation()))->isLeftToRight()) {
			r->x = getWidth();
		}
	} else {
		for (int32_t i = 0; i < column; ++i) {
			r->x += $nc($(cm->getColumn(i)))->getWidth();
		}
		if (!$nc($(getComponentOrientation()))->isLeftToRight()) {
			int32_t var$0 = getWidthInRightToLeft() - r->x;
			r->x = var$0 - $nc($(cm->getColumn(column)))->getWidth();
		}
		r->width = $nc($(cm->getColumn(column)))->getWidth();
	}
	return r;
}

$String* JTableHeader::getToolTipText($MouseEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($String, tip, nullptr);
	$var($Point, p, $nc(event)->getPoint());
	int32_t column = 0;
	if ((column = columnAtPoint(p)) != -1) {
		$var($TableColumn, aColumn, $nc(this->columnModel)->getColumn(column));
		$var($TableCellRenderer, renderer, $nc(aColumn)->getHeaderRenderer());
		if (renderer == nullptr) {
			$assign(renderer, this->defaultRenderer);
		}
		$var($JTable, var$0, getTable());
		$var($Component, component, $nc(renderer)->getTableCellRendererComponent(var$0, $(aColumn->getHeaderValue()), false, false, -1, column));
		if ($instanceOf($JComponent, component)) {
			$var($MouseEvent, newEvent, nullptr);
			$var($Rectangle, cellRect, getHeaderRect(column));
			$nc(p)->translate(-$nc(cellRect)->x, -cellRect->y);
			$var($Component, var$1, component);
			int32_t var$2 = event->getID();
			int64_t var$3 = event->getWhen();
			int32_t var$4 = event->getModifiers();
			int32_t var$5 = p->x;
			int32_t var$6 = p->y;
			int32_t var$7 = event->getXOnScreen();
			int32_t var$8 = event->getYOnScreen();
			int32_t var$9 = event->getClickCount();
			$assign(newEvent, $new($MouseEvent, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, event->isPopupTrigger(), $MouseEvent::NOBUTTON));
			$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
			$nc(meAccessor)->setCausedByTouchEvent(newEvent, meAccessor->isCausedByTouchEvent(event));
			$assign(tip, $nc(($cast($JComponent, component)))->getToolTipText(newEvent));
		}
	}
	if (tip == nullptr) {
		$assign(tip, getToolTipText());
	}
	return tip;
}

$Dimension* JTableHeader::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, preferredSize, $JComponent::getPreferredSize());
	if (isPreferredSizeSet() && this->ui != nullptr) {
		$var($Dimension, size, $nc(this->ui)->getPreferredSize(this));
		if (size != nullptr) {
			$nc(preferredSize)->width = size->width;
		}
	}
	return preferredSize;
}

$ComponentUI* JTableHeader::getUI() {
	return $cast($TableHeaderUI, this->ui);
}

void JTableHeader::setUI($TableHeaderUI* ui) {
	if (!$equals(this->ui, ui)) {
		$JComponent::setUI(ui);
		repaint();
	}
}

void JTableHeader::updateUI() {
	$useLocalCurrentObjectStackCache();
	if (!this->updateInProgress) {
		this->updateInProgress = true;
		{
			$var($Throwable, var$0, nullptr);
			try {
				setUI($cast($TableHeaderUI, $($UIManager::getUI(this))));
				$var($TableCellRenderer, renderer, getDefaultRenderer());
				if ($instanceOf($Component, renderer)) {
					$SwingUtilities::updateComponentTreeUI($cast($Component, renderer));
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				this->updateInProgress = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$String* JTableHeader::getUIClassID() {
	return JTableHeader::uiClassID;
}

void JTableHeader::setColumnModel($TableColumnModel* columnModel) {
	if (columnModel == nullptr) {
		$throwNew($IllegalArgumentException, "Cannot set a null ColumnModel"_s);
	}
	$var($TableColumnModel, old, this->columnModel);
	if (columnModel != old) {
		if (old != nullptr) {
			old->removeColumnModelListener(this);
		}
		$set(this, columnModel, columnModel);
		$nc(columnModel)->addColumnModelListener(this);
		firePropertyChange("columnModel"_s, $of(old), $of(columnModel));
		resizeAndRepaint();
	}
}

$TableColumnModel* JTableHeader::getColumnModel() {
	return this->columnModel;
}

void JTableHeader::columnAdded($TableColumnModelEvent* e) {
	resizeAndRepaint();
}

void JTableHeader::columnRemoved($TableColumnModelEvent* e) {
	resizeAndRepaint();
}

void JTableHeader::columnMoved($TableColumnModelEvent* e) {
	repaint();
}

void JTableHeader::columnMarginChanged($ChangeEvent* e) {
	resizeAndRepaint();
}

void JTableHeader::columnSelectionChanged($ListSelectionEvent* e) {
}

$TableColumnModel* JTableHeader::createDefaultColumnModel() {
	return $new($DefaultTableColumnModel);
}

$TableCellRenderer* JTableHeader::createDefaultRenderer() {
	return $new($DefaultTableCellHeaderRenderer);
}

void JTableHeader::initializeLocalVars() {
	$useLocalCurrentObjectStackCache();
	setOpaque(true);
	$set(this, table, nullptr);
	this->reorderingAllowed = true;
	this->resizingAllowed = true;
	$set(this, draggedColumn, nullptr);
	this->draggedDistance = 0;
	$set(this, resizingColumn, nullptr);
	this->updateTableInRealTime = true;
	$var($ToolTipManager, toolTipManager, $ToolTipManager::sharedInstance());
	$nc(toolTipManager)->registerComponent(this);
	setDefaultRenderer($(createDefaultRenderer()));
}

void JTableHeader::resizeAndRepaint() {
	revalidate();
	repaint();
}

void JTableHeader::setDraggedColumn($TableColumn* aColumn) {
	$set(this, draggedColumn, aColumn);
}

void JTableHeader::setDraggedDistance(int32_t distance) {
	this->draggedDistance = distance;
}

void JTableHeader::setResizingColumn($TableColumn* aColumn) {
	$set(this, resizingColumn, aColumn);
}

void JTableHeader::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ((this->ui != nullptr) && ($nc($(getUIClassID()))->equals(JTableHeader::uiClassID))) {
		$nc(this->ui)->installUI(this);
	}
}

int32_t JTableHeader::getWidthInRightToLeft() {
	if ((this->table != nullptr) && ($nc(this->table)->getAutoResizeMode() != $JTable::AUTO_RESIZE_OFF)) {
		return $nc(this->table)->getWidth();
	}
	return $JComponent::getWidth();
}

$String* JTableHeader::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, reorderingAllowedString, this->reorderingAllowed ? "true"_s : "false"_s);
	$var($String, resizingAllowedString, this->resizingAllowed ? "true"_s : "false"_s);
	$var($String, updateTableInRealTimeString, this->updateTableInRealTime ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",draggedDistance="_s, $$str(this->draggedDistance), ",reorderingAllowed="_s, reorderingAllowedString, ",resizingAllowed="_s, resizingAllowedString, ",updateTableInRealTime="_s, updateTableInRealTimeString});
}

$AccessibleContext* JTableHeader::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JTableHeader$AccessibleJTableHeader, this));
	}
	return this->accessibleContext;
}

JTableHeader::JTableHeader() {
}

void clinit$JTableHeader($Class* class$) {
	$assignStatic(JTableHeader::uiClassID, "TableHeaderUI"_s);
}

$Class* JTableHeader::load$($String* name, bool initialize) {
	$loadClass(JTableHeader, name, initialize, &_JTableHeader_ClassInfo_, clinit$JTableHeader, allocate$JTableHeader);
	return class$;
}

$Class* JTableHeader::class$ = nullptr;

		} // table
	} // swing
} // javax