#include <javax/swing/text/TableView$TableCell.h>

#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/TableView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef Y_AXIS

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxView = ::javax::swing::text::BoxView;
using $Element = ::javax::swing::text::Element;
using $TableView = ::javax::swing::text::TableView;
using $TableView$GridCell = ::javax::swing::text::TableView$GridCell;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$CompoundAttribute _TableView$TableCell_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _TableView$TableCell_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/TableView;", nullptr, $FINAL | $SYNTHETIC, $field(TableView$TableCell, this$0)},
	{"row", "I", nullptr, 0, $field(TableView$TableCell, row)},
	{"col", "I", nullptr, 0, $field(TableView$TableCell, col)},
	{}
};

$MethodInfo _TableView$TableCell_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/TableView;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(TableView$TableCell::*)($TableView*,$Element*)>(&TableView$TableCell::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getGridColumn", "()I", nullptr, $PUBLIC},
	{"getGridRow", "()I", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"setGridLocation", "(II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TableView$TableCell_InnerClassesInfo_[] = {
	{"javax.swing.text.TableView$TableCell", "javax.swing.text.TableView", "TableCell", $PUBLIC},
	{"javax.swing.text.TableView$GridCell", "javax.swing.text.TableView", "GridCell", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TableView$TableCell_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.TableView$TableCell",
	"javax.swing.text.BoxView",
	"javax.swing.text.TableView$GridCell",
	_TableView$TableCell_FieldInfo_,
	_TableView$TableCell_MethodInfo_,
	nullptr,
	nullptr,
	_TableView$TableCell_InnerClassesInfo_,
	_TableView$TableCell_Annotations_,
	nullptr,
	nullptr,
	"javax.swing.text.TableView"
};

$Object* allocate$TableView$TableCell($Class* clazz) {
	return $of($alloc(TableView$TableCell));
}

int32_t TableView$TableCell::hashCode() {
	 return this->$BoxView::hashCode();
}

bool TableView$TableCell::equals(Object$* arg0) {
	 return this->$BoxView::equals(arg0);
}

$Object* TableView$TableCell::clone() {
	 return this->$BoxView::clone();
}

$String* TableView$TableCell::toString() {
	 return this->$BoxView::toString();
}

void TableView$TableCell::finalize() {
	this->$BoxView::finalize();
}

void TableView$TableCell::init$($TableView* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$BoxView::init$(elem, $View::Y_AXIS);
}

int32_t TableView$TableCell::getColumnCount() {
	return 1;
}

int32_t TableView$TableCell::getRowCount() {
	return 1;
}

void TableView$TableCell::setGridLocation(int32_t row, int32_t col) {
	this->row = row;
	this->col = col;
}

int32_t TableView$TableCell::getGridRow() {
	return this->row;
}

int32_t TableView$TableCell::getGridColumn() {
	return this->col;
}

TableView$TableCell::TableView$TableCell() {
}

$Class* TableView$TableCell::load$($String* name, bool initialize) {
	$loadClass(TableView$TableCell, name, initialize, &_TableView$TableCell_ClassInfo_, allocate$TableView$TableCell);
	return class$;
}

$Class* TableView$TableCell::class$ = nullptr;

		} // text
	} // swing
} // javax