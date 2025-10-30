#include <javax/swing/JTable$AccessibleJTable$AccessibleJTableModelChange.h>

#include <javax/swing/JTable$AccessibleJTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleTableModelChange = ::javax::accessibility::AccessibleTableModelChange;
using $JTable$AccessibleJTable = ::javax::swing::JTable$AccessibleJTable;

namespace javax {
	namespace swing {

$FieldInfo _JTable$AccessibleJTable$AccessibleJTableModelChange_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JTable$AccessibleJTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$AccessibleJTable$AccessibleJTableModelChange, this$1)},
	{"type", "I", nullptr, $PROTECTED, $field(JTable$AccessibleJTable$AccessibleJTableModelChange, type)},
	{"firstRow", "I", nullptr, $PROTECTED, $field(JTable$AccessibleJTable$AccessibleJTableModelChange, firstRow)},
	{"lastRow", "I", nullptr, $PROTECTED, $field(JTable$AccessibleJTable$AccessibleJTableModelChange, lastRow)},
	{"firstColumn", "I", nullptr, $PROTECTED, $field(JTable$AccessibleJTable$AccessibleJTableModelChange, firstColumn)},
	{"lastColumn", "I", nullptr, $PROTECTED, $field(JTable$AccessibleJTable$AccessibleJTableModelChange, lastColumn)},
	{}
};

$MethodInfo _JTable$AccessibleJTable$AccessibleJTableModelChange_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTable$AccessibleJTable;IIIII)V", nullptr, $PROTECTED, $method(static_cast<void(JTable$AccessibleJTable$AccessibleJTableModelChange::*)($JTable$AccessibleJTable*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&JTable$AccessibleJTable$AccessibleJTableModelChange::init$))},
	{"getFirstColumn", "()I", nullptr, $PUBLIC},
	{"getFirstRow", "()I", nullptr, $PUBLIC},
	{"getLastColumn", "()I", nullptr, $PUBLIC},
	{"getLastRow", "()I", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTable$AccessibleJTable$AccessibleJTableModelChange_InnerClassesInfo_[] = {
	{"javax.swing.JTable$AccessibleJTable", "javax.swing.JTable", "AccessibleJTable", $PROTECTED},
	{"javax.swing.JTable$AccessibleJTable$AccessibleJTableModelChange", "javax.swing.JTable$AccessibleJTable", "AccessibleJTableModelChange", $PROTECTED},
	{}
};

$ClassInfo _JTable$AccessibleJTable$AccessibleJTableModelChange_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTable$AccessibleJTable$AccessibleJTableModelChange",
	"java.lang.Object",
	"javax.accessibility.AccessibleTableModelChange",
	_JTable$AccessibleJTable$AccessibleJTableModelChange_FieldInfo_,
	_JTable$AccessibleJTable$AccessibleJTableModelChange_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$AccessibleJTable$AccessibleJTableModelChange_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$AccessibleJTable$AccessibleJTableModelChange($Class* clazz) {
	return $of($alloc(JTable$AccessibleJTable$AccessibleJTableModelChange));
}

void JTable$AccessibleJTable$AccessibleJTableModelChange::init$($JTable$AccessibleJTable* this$1, int32_t type, int32_t firstRow, int32_t lastRow, int32_t firstColumn, int32_t lastColumn) {
	$set(this, this$1, this$1);
	this->type = type;
	this->firstRow = firstRow;
	this->lastRow = lastRow;
	this->firstColumn = firstColumn;
	this->lastColumn = lastColumn;
}

int32_t JTable$AccessibleJTable$AccessibleJTableModelChange::getType() {
	return this->type;
}

int32_t JTable$AccessibleJTable$AccessibleJTableModelChange::getFirstRow() {
	return this->firstRow;
}

int32_t JTable$AccessibleJTable$AccessibleJTableModelChange::getLastRow() {
	return this->lastRow;
}

int32_t JTable$AccessibleJTable$AccessibleJTableModelChange::getFirstColumn() {
	return this->firstColumn;
}

int32_t JTable$AccessibleJTable$AccessibleJTableModelChange::getLastColumn() {
	return this->lastColumn;
}

JTable$AccessibleJTable$AccessibleJTableModelChange::JTable$AccessibleJTable$AccessibleJTableModelChange() {
}

$Class* JTable$AccessibleJTable$AccessibleJTableModelChange::load$($String* name, bool initialize) {
	$loadClass(JTable$AccessibleJTable$AccessibleJTableModelChange, name, initialize, &_JTable$AccessibleJTable$AccessibleJTableModelChange_ClassInfo_, allocate$JTable$AccessibleJTable$AccessibleJTableModelChange);
	return class$;
}

$Class* JTable$AccessibleJTable$AccessibleJTableModelChange::class$ = nullptr;

	} // swing
} // javax