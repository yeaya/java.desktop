#include <javax/swing/table/JTableHeader$AccessibleJTableHeader.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef PANEL

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JTable = ::javax::swing::JTable;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry = ::javax::swing::table::JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

namespace javax {
	namespace swing {
		namespace table {

$FieldInfo _JTableHeader$AccessibleJTableHeader_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/table/JTableHeader;", nullptr, $FINAL | $SYNTHETIC, $field(JTableHeader$AccessibleJTableHeader, this$0)},
	{}
};

$MethodInfo _JTableHeader$AccessibleJTableHeader_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/table/JTableHeader;)V", nullptr, $PROTECTED, $method(static_cast<void(JTableHeader$AccessibleJTableHeader::*)($JTableHeader*)>(&JTableHeader$AccessibleJTableHeader::init$))},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTableHeader$AccessibleJTableHeader_InnerClassesInfo_[] = {
	{"javax.swing.table.JTableHeader$AccessibleJTableHeader", "javax.swing.table.JTableHeader", "AccessibleJTableHeader", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{"javax.swing.table.JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry", "javax.swing.table.JTableHeader$AccessibleJTableHeader", "AccessibleJTableHeaderEntry", $PROTECTED},
	{}
};

$ClassInfo _JTableHeader$AccessibleJTableHeader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.table.JTableHeader$AccessibleJTableHeader",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JTableHeader$AccessibleJTableHeader_FieldInfo_,
	_JTableHeader$AccessibleJTableHeader_MethodInfo_,
	nullptr,
	nullptr,
	_JTableHeader$AccessibleJTableHeader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.table.JTableHeader"
};

$Object* allocate$JTableHeader$AccessibleJTableHeader($Class* clazz) {
	return $of($alloc(JTableHeader$AccessibleJTableHeader));
}

void JTableHeader$AccessibleJTableHeader::init$($JTableHeader* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JTableHeader$AccessibleJTableHeader::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PANEL;
}

$Accessible* JTableHeader$AccessibleJTableHeader::getAccessibleAt($Point* p) {
	$useLocalCurrentObjectStackCache();
	int32_t column = 0;
	if ((column = this->this$0->columnAtPoint(p)) != -1) {
		$var($TableColumn, aColumn, $nc(this->this$0->columnModel)->getColumn(column));
		$var($TableCellRenderer, renderer, $nc(aColumn)->getHeaderRenderer());
		if (renderer == nullptr) {
			if (this->this$0->defaultRenderer != nullptr) {
				$assign(renderer, this->this$0->defaultRenderer);
			} else {
				return nullptr;
			}
		}
		$var($JTable, var$0, this->this$0->getTable());
		$var($Component, component, $nc(renderer)->getTableCellRendererComponent(var$0, $(aColumn->getHeaderValue()), false, false, -1, column));
		return $new($JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry, this, column, this->this$0, this->this$0->table);
	} else {
		return nullptr;
	}
}

int32_t JTableHeader$AccessibleJTableHeader::getAccessibleChildrenCount() {
	return $nc(this->this$0->columnModel)->getColumnCount();
}

$Accessible* JTableHeader$AccessibleJTableHeader::getAccessibleChild(int32_t i) {
	$useLocalCurrentObjectStackCache();
	if (i < 0 || i >= getAccessibleChildrenCount()) {
		return nullptr;
	} else {
		$var($TableColumn, aColumn, $nc(this->this$0->columnModel)->getColumn(i));
		$var($TableCellRenderer, renderer, $nc(aColumn)->getHeaderRenderer());
		if (renderer == nullptr) {
			if (this->this$0->defaultRenderer != nullptr) {
				$assign(renderer, this->this$0->defaultRenderer);
			} else {
				return nullptr;
			}
		}
		$var($JTable, var$0, this->this$0->getTable());
		$var($Component, component, $nc(renderer)->getTableCellRendererComponent(var$0, $(aColumn->getHeaderValue()), false, false, -1, i));
		return $new($JTableHeader$AccessibleJTableHeader$AccessibleJTableHeaderEntry, this, i, this->this$0, this->this$0->table);
	}
}

JTableHeader$AccessibleJTableHeader::JTableHeader$AccessibleJTableHeader() {
}

$Class* JTableHeader$AccessibleJTableHeader::load$($String* name, bool initialize) {
	$loadClass(JTableHeader$AccessibleJTableHeader, name, initialize, &_JTableHeader$AccessibleJTableHeader_ClassInfo_, allocate$JTableHeader$AccessibleJTableHeader);
	return class$;
}

$Class* JTableHeader$AccessibleJTableHeader::class$ = nullptr;

		} // table
	} // swing
} // javax