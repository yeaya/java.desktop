#include <javax/swing/table/TableColumn.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/event/SwingPropertyChangeSupport.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn$1.h>
#include <jcpp.h>

#undef CELL_RENDERER_PROPERTY
#undef CENTER
#undef COLUMN_WIDTH_PROPERTY
#undef HEADER_RENDERER_PROPERTY
#undef HEADER_VALUE_PROPERTY
#undef MAX_VALUE

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $SwingPropertyChangeSupport = ::javax::swing::event::SwingPropertyChangeSupport;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn$1 = ::javax::swing::table::TableColumn$1;

namespace javax {
	namespace swing {
		namespace table {

$CompoundAttribute _TableColumn_FieldAnnotations_resizedPostingDisableCount[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_disableResizedPosting6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_enableResizedPosting7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute TableColumn_Attribute_var$0[] = {
	{"description", 's', "The editor to use for cell values."},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_setCellEditor24[] = {
	{"Ljava/beans/BeanProperty;", TableColumn_Attribute_var$0},
	{}
};

$NamedAttribute TableColumn_Attribute_var$1[] = {
	{"description", 's', "The renderer to use for cell values."},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_setCellRenderer25[] = {
	{"Ljava/beans/BeanProperty;", TableColumn_Attribute_var$1},
	{}
};

$NamedAttribute TableColumn_Attribute_var$2[] = {
	{"description", 's', "The header renderer."},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_setHeaderRenderer26[] = {
	{"Ljava/beans/BeanProperty;", TableColumn_Attribute_var$2},
	{}
};

$NamedAttribute TableColumn_Attribute_var$3[] = {
	{"description", 's', "The text to be used by the header renderer."},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_setHeaderValue27[] = {
	{"Ljava/beans/BeanProperty;", TableColumn_Attribute_var$3},
	{}
};

$NamedAttribute TableColumn_Attribute_var$4[] = {
	{"description", 's', "A unique identifier for this column."},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_setIdentifier28[] = {
	{"Ljava/beans/BeanProperty;", TableColumn_Attribute_var$4},
	{}
};

$NamedAttribute TableColumn_Attribute_var$5[] = {
	{"description", 's', "The maximum width of the column."},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_setMaxWidth29[] = {
	{"Ljava/beans/BeanProperty;", TableColumn_Attribute_var$5},
	{}
};

$NamedAttribute TableColumn_Attribute_var$6[] = {
	{"description", 's', "The minimum width of the column."},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_setMinWidth30[] = {
	{"Ljava/beans/BeanProperty;", TableColumn_Attribute_var$6},
	{}
};

$NamedAttribute TableColumn_Attribute_var$7[] = {
	{"description", 's', "The model index."},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_setModelIndex31[] = {
	{"Ljava/beans/BeanProperty;", TableColumn_Attribute_var$7},
	{}
};

$NamedAttribute TableColumn_Attribute_var$8[] = {
	{"description", 's', "The preferred width of the column."},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_setPreferredWidth32[] = {
	{"Ljava/beans/BeanProperty;", TableColumn_Attribute_var$8},
	{}
};

$NamedAttribute TableColumn_Attribute_var$9[] = {
	{"description", 's', "Whether or not this column can be resized."},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_setResizable33[] = {
	{"Ljava/beans/BeanProperty;", TableColumn_Attribute_var$9},
	{}
};

$NamedAttribute TableColumn_Attribute_var$10[] = {
	{"description", 's', "The width of the column."},
	{}
};

$CompoundAttribute _TableColumn_MethodAnnotations_setWidth34[] = {
	{"Ljava/beans/BeanProperty;", TableColumn_Attribute_var$10},
	{}
};

$FieldInfo _TableColumn_FieldInfo_[] = {
	{"COLUMN_WIDTH_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TableColumn, COLUMN_WIDTH_PROPERTY)},
	{"HEADER_VALUE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TableColumn, HEADER_VALUE_PROPERTY)},
	{"HEADER_RENDERER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TableColumn, HEADER_RENDERER_PROPERTY)},
	{"CELL_RENDERER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TableColumn, CELL_RENDERER_PROPERTY)},
	{"modelIndex", "I", nullptr, $PROTECTED, $field(TableColumn, modelIndex)},
	{"identifier", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(TableColumn, identifier)},
	{"width", "I", nullptr, $PROTECTED, $field(TableColumn, width)},
	{"minWidth", "I", nullptr, $PROTECTED, $field(TableColumn, minWidth)},
	{"preferredWidth", "I", nullptr, $PRIVATE, $field(TableColumn, preferredWidth)},
	{"maxWidth", "I", nullptr, $PROTECTED, $field(TableColumn, maxWidth)},
	{"headerRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PROTECTED, $field(TableColumn, headerRenderer)},
	{"headerValue", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(TableColumn, headerValue)},
	{"cellRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PROTECTED, $field(TableColumn, cellRenderer)},
	{"cellEditor", "Ljavax/swing/table/TableCellEditor;", nullptr, $PROTECTED, $field(TableColumn, cellEditor)},
	{"isResizable", "Z", nullptr, $PROTECTED, $field(TableColumn, isResizable)},
	{"resizedPostingDisableCount", "I", nullptr, $PROTECTED | $TRANSIENT | $DEPRECATED, $field(TableColumn, resizedPostingDisableCount), _TableColumn_FieldAnnotations_resizedPostingDisableCount},
	{"changeSupport", "Ljavax/swing/event/SwingPropertyChangeSupport;", nullptr, $PRIVATE, $field(TableColumn, changeSupport)},
	{}
};

$MethodInfo _TableColumn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TableColumn::*)()>(&TableColumn::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(TableColumn::*)(int32_t)>(&TableColumn::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(TableColumn::*)(int32_t,int32_t)>(&TableColumn::init$))},
	{"<init>", "(IILjavax/swing/table/TableCellRenderer;Ljavax/swing/table/TableCellEditor;)V", nullptr, $PUBLIC, $method(static_cast<void(TableColumn::*)(int32_t,int32_t,$TableCellRenderer*,$TableCellEditor*)>(&TableColumn::init$))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"createDefaultHeaderRenderer", "()Ljavax/swing/table/TableCellRenderer;", nullptr, $PROTECTED},
	{"disableResizedPosting", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_disableResizedPosting6},
	{"enableResizedPosting", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_enableResizedPosting7},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(TableColumn::*)($String*,Object$*,Object$*)>(&TableColumn::firePropertyChange))},
	{"firePropertyChange", "(Ljava/lang/String;II)V", nullptr, $PRIVATE, $method(static_cast<void(TableColumn::*)($String*,int32_t,int32_t)>(&TableColumn::firePropertyChange))},
	{"firePropertyChange", "(Ljava/lang/String;ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(TableColumn::*)($String*,bool,bool)>(&TableColumn::firePropertyChange))},
	{"getCellEditor", "()Ljavax/swing/table/TableCellEditor;", nullptr, $PUBLIC},
	{"getCellRenderer", "()Ljavax/swing/table/TableCellRenderer;", nullptr, $PUBLIC},
	{"getHeaderRenderer", "()Ljavax/swing/table/TableCellRenderer;", nullptr, $PUBLIC},
	{"getHeaderValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getIdentifier", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getMaxWidth", "()I", nullptr, $PUBLIC},
	{"getMinWidth", "()I", nullptr, $PUBLIC},
	{"getModelIndex", "()I", nullptr, $PUBLIC},
	{"getPreferredWidth", "()I", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getResizable", "()Z", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setCellEditor", "(Ljavax/swing/table/TableCellEditor;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_setCellEditor24},
	{"setCellRenderer", "(Ljavax/swing/table/TableCellRenderer;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_setCellRenderer25},
	{"setHeaderRenderer", "(Ljavax/swing/table/TableCellRenderer;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_setHeaderRenderer26},
	{"setHeaderValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_setHeaderValue27},
	{"setIdentifier", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_setIdentifier28},
	{"setMaxWidth", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_setMaxWidth29},
	{"setMinWidth", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_setMinWidth30},
	{"setModelIndex", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_setModelIndex31},
	{"setPreferredWidth", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_setPreferredWidth32},
	{"setResizable", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_setResizable33},
	{"setWidth", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TableColumn_MethodAnnotations_setWidth34},
	{"sizeWidthToFit", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TableColumn_InnerClassesInfo_[] = {
	{"javax.swing.table.TableColumn$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TableColumn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.table.TableColumn",
	"java.lang.Object",
	"java.io.Serializable",
	_TableColumn_FieldInfo_,
	_TableColumn_MethodInfo_,
	nullptr,
	nullptr,
	_TableColumn_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.table.TableColumn$1"
};

$Object* allocate$TableColumn($Class* clazz) {
	return $of($alloc(TableColumn));
}


$String* TableColumn::COLUMN_WIDTH_PROPERTY = nullptr;

$String* TableColumn::HEADER_VALUE_PROPERTY = nullptr;

$String* TableColumn::HEADER_RENDERER_PROPERTY = nullptr;

$String* TableColumn::CELL_RENDERER_PROPERTY = nullptr;

void TableColumn::init$() {
	TableColumn::init$(0);
}

void TableColumn::init$(int32_t modelIndex) {
	TableColumn::init$(modelIndex, 75, nullptr, nullptr);
}

void TableColumn::init$(int32_t modelIndex, int32_t width) {
	TableColumn::init$(modelIndex, width, nullptr, nullptr);
}

void TableColumn::init$(int32_t modelIndex, int32_t width, $TableCellRenderer* cellRenderer, $TableCellEditor* cellEditor) {
	this->modelIndex = modelIndex;
	this->preferredWidth = (this->width = $Math::max(width, 0));
	$set(this, cellRenderer, cellRenderer);
	$set(this, cellEditor, cellEditor);
	this->minWidth = $Math::min(15, this->width);
	this->maxWidth = $Integer::MAX_VALUE;
	this->isResizable = true;
	this->resizedPostingDisableCount = 0;
	$set(this, headerValue, nullptr);
}

void TableColumn::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (this->changeSupport != nullptr) {
		$nc(this->changeSupport)->firePropertyChange(propertyName, oldValue, newValue);
	}
}

void TableColumn::firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue) {
	$useLocalCurrentObjectStackCache();
	if (oldValue != newValue) {
		$var($String, var$0, propertyName);
		$var($Object, var$1, $of($Integer::valueOf(oldValue)));
		firePropertyChange(var$0, var$1, $($of($Integer::valueOf(newValue))));
	}
}

void TableColumn::firePropertyChange($String* propertyName, bool oldValue, bool newValue) {
	$useLocalCurrentObjectStackCache();
	if (oldValue != newValue) {
		$var($String, var$0, propertyName);
		$var($Object, var$1, $of($Boolean::valueOf(oldValue)));
		firePropertyChange(var$0, var$1, $($of($Boolean::valueOf(newValue))));
	}
}

void TableColumn::setModelIndex(int32_t modelIndex) {
	int32_t old = this->modelIndex;
	this->modelIndex = modelIndex;
	firePropertyChange("modelIndex"_s, old, modelIndex);
}

int32_t TableColumn::getModelIndex() {
	return this->modelIndex;
}

void TableColumn::setIdentifier(Object$* identifier) {
	$var($Object, old, this->identifier);
	$set(this, identifier, identifier);
	firePropertyChange("identifier"_s, old, identifier);
}

$Object* TableColumn::getIdentifier() {
	return $of((this->identifier != nullptr) ? this->identifier : getHeaderValue());
}

void TableColumn::setHeaderValue(Object$* headerValue) {
	$var($Object, old, this->headerValue);
	$set(this, headerValue, headerValue);
	firePropertyChange("headerValue"_s, old, headerValue);
}

$Object* TableColumn::getHeaderValue() {
	return $of(this->headerValue);
}

void TableColumn::setHeaderRenderer($TableCellRenderer* headerRenderer) {
	$var($TableCellRenderer, old, this->headerRenderer);
	$set(this, headerRenderer, headerRenderer);
	firePropertyChange("headerRenderer"_s, $of(old), $of(headerRenderer));
}

$TableCellRenderer* TableColumn::getHeaderRenderer() {
	return this->headerRenderer;
}

void TableColumn::setCellRenderer($TableCellRenderer* cellRenderer) {
	$var($TableCellRenderer, old, this->cellRenderer);
	$set(this, cellRenderer, cellRenderer);
	firePropertyChange("cellRenderer"_s, $of(old), $of(cellRenderer));
}

$TableCellRenderer* TableColumn::getCellRenderer() {
	return this->cellRenderer;
}

void TableColumn::setCellEditor($TableCellEditor* cellEditor) {
	$var($TableCellEditor, old, this->cellEditor);
	$set(this, cellEditor, cellEditor);
	firePropertyChange("cellEditor"_s, $of(old), $of(cellEditor));
}

$TableCellEditor* TableColumn::getCellEditor() {
	return this->cellEditor;
}

void TableColumn::setWidth(int32_t width) {
	int32_t old = this->width;
	this->width = $Math::min($Math::max(width, this->minWidth), this->maxWidth);
	firePropertyChange("width"_s, old, this->width);
}

int32_t TableColumn::getWidth() {
	return this->width;
}

void TableColumn::setPreferredWidth(int32_t preferredWidth) {
	int32_t old = this->preferredWidth;
	this->preferredWidth = $Math::min($Math::max(preferredWidth, this->minWidth), this->maxWidth);
	firePropertyChange("preferredWidth"_s, old, this->preferredWidth);
}

int32_t TableColumn::getPreferredWidth() {
	return this->preferredWidth;
}

void TableColumn::setMinWidth(int32_t minWidth) {
	int32_t old = this->minWidth;
	this->minWidth = $Math::max($Math::min(minWidth, this->maxWidth), 0);
	if (this->width < this->minWidth) {
		setWidth(this->minWidth);
	}
	if (this->preferredWidth < this->minWidth) {
		setPreferredWidth(this->minWidth);
	}
	firePropertyChange("minWidth"_s, old, this->minWidth);
}

int32_t TableColumn::getMinWidth() {
	return this->minWidth;
}

void TableColumn::setMaxWidth(int32_t maxWidth) {
	int32_t old = this->maxWidth;
	this->maxWidth = $Math::max(this->minWidth, maxWidth);
	if (this->width > this->maxWidth) {
		setWidth(this->maxWidth);
	}
	if (this->preferredWidth > this->maxWidth) {
		setPreferredWidth(this->maxWidth);
	}
	firePropertyChange("maxWidth"_s, old, this->maxWidth);
}

int32_t TableColumn::getMaxWidth() {
	return this->maxWidth;
}

void TableColumn::setResizable(bool isResizable) {
	bool old = this->isResizable;
	this->isResizable = isResizable;
	firePropertyChange("isResizable"_s, old, this->isResizable);
}

bool TableColumn::getResizable() {
	return this->isResizable;
}

void TableColumn::sizeWidthToFit() {
	$useLocalCurrentObjectStackCache();
	if (this->headerRenderer == nullptr) {
		return;
	}
	$var($Component, c, $nc(this->headerRenderer)->getTableCellRendererComponent(nullptr, $(getHeaderValue()), false, false, 0, 0));
	setMinWidth($nc($($nc(c)->getMinimumSize()))->width);
	setMaxWidth($nc($($nc(c)->getMaximumSize()))->width);
	setPreferredWidth($nc($($nc(c)->getPreferredSize()))->width);
	setWidth(getPreferredWidth());
}

void TableColumn::disableResizedPosting() {
	++this->resizedPostingDisableCount;
}

void TableColumn::enableResizedPosting() {
	--this->resizedPostingDisableCount;
}

void TableColumn::addPropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			$set(this, changeSupport, $new($SwingPropertyChangeSupport, this));
		}
		$nc(this->changeSupport)->addPropertyChangeListener(listener);
	}
}

void TableColumn::removePropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->changeSupport != nullptr) {
			$nc(this->changeSupport)->removePropertyChangeListener(listener);
		}
	}
}

$PropertyChangeListenerArray* TableColumn::getPropertyChangeListeners() {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			return $new($PropertyChangeListenerArray, 0);
		}
		return $nc(this->changeSupport)->getPropertyChangeListeners();
	}
}

$TableCellRenderer* TableColumn::createDefaultHeaderRenderer() {
	$var($DefaultTableCellRenderer, label, $new($TableColumn$1, this));
	label->setHorizontalAlignment($JLabel::CENTER);
	return label;
}

TableColumn::TableColumn() {
}

void clinit$TableColumn($Class* class$) {
	$assignStatic(TableColumn::COLUMN_WIDTH_PROPERTY, "columWidth"_s);
	$assignStatic(TableColumn::HEADER_VALUE_PROPERTY, "headerValue"_s);
	$assignStatic(TableColumn::HEADER_RENDERER_PROPERTY, "headerRenderer"_s);
	$assignStatic(TableColumn::CELL_RENDERER_PROPERTY, "cellRenderer"_s);
}

$Class* TableColumn::load$($String* name, bool initialize) {
	$loadClass(TableColumn, name, initialize, &_TableColumn_ClassInfo_, clinit$TableColumn, allocate$TableColumn);
	return class$;
}

$Class* TableColumn::class$ = nullptr;

		} // table
	} // swing
} // javax