#include <javax/swing/JTable$3.h>

#include <javax/swing/JTable.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

namespace javax {
	namespace swing {

$FieldInfo _JTable$3_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$3, this$0)},
	{"val$cm", "Ljavax/swing/table/TableColumnModel;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$3, val$cm)},
	{"val$start", "I", nullptr, $FINAL | $SYNTHETIC, $field(JTable$3, val$start)},
	{"val$end", "I", nullptr, $FINAL | $SYNTHETIC, $field(JTable$3, val$end)},
	{}
};

$MethodInfo _JTable$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTable;IILjavax/swing/table/TableColumnModel;)V", "()V", 0, $method(static_cast<void(JTable$3::*)($JTable*,int32_t,int32_t,$TableColumnModel*)>(&JTable$3::init$))},
	{"getElementCount", "()I", nullptr, $PUBLIC},
	{"getLowerBoundAt", "(I)I", nullptr, $PUBLIC},
	{"getMidPointAt", "(I)I", nullptr, $PUBLIC},
	{"getUpperBoundAt", "(I)I", nullptr, $PUBLIC},
	{"setSizeAt", "(II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTable$3_EnclosingMethodInfo_ = {
	"javax.swing.JTable",
	"accommodateDelta",
	"(II)V"
};

$InnerClassInfo _JTable$3_InnerClassesInfo_[] = {
	{"javax.swing.JTable$3", nullptr, nullptr, 0},
	{"javax.swing.JTable$Resizable3", "javax.swing.JTable", "Resizable3", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JTable$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$3",
	"java.lang.Object",
	"javax.swing.JTable$Resizable3",
	_JTable$3_FieldInfo_,
	_JTable$3_MethodInfo_,
	nullptr,
	&_JTable$3_EnclosingMethodInfo_,
	_JTable$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$3($Class* clazz) {
	return $of($alloc(JTable$3));
}

void JTable$3::init$($JTable* this$0, int32_t val$end, int32_t val$start, $TableColumnModel* val$cm) {
	$set(this, this$0, this$0);
	this->val$end = val$end;
	this->val$start = val$start;
	$set(this, val$cm, val$cm);
}

int32_t JTable$3::getElementCount() {
	return this->val$end - this->val$start;
}

int32_t JTable$3::getLowerBoundAt(int32_t i) {
	return $nc($($nc(this->val$cm)->getColumn(i + this->val$start)))->getMinWidth();
}

int32_t JTable$3::getUpperBoundAt(int32_t i) {
	return $nc($($nc(this->val$cm)->getColumn(i + this->val$start)))->getMaxWidth();
}

int32_t JTable$3::getMidPointAt(int32_t i) {
	return $nc($($nc(this->val$cm)->getColumn(i + this->val$start)))->getWidth();
}

void JTable$3::setSizeAt(int32_t s, int32_t i) {
	$nc($($nc(this->val$cm)->getColumn(i + this->val$start)))->setWidth(s);
}

JTable$3::JTable$3() {
}

$Class* JTable$3::load$($String* name, bool initialize) {
	$loadClass(JTable$3, name, initialize, &_JTable$3_ClassInfo_, allocate$JTable$3);
	return class$;
}

$Class* JTable$3::class$ = nullptr;

	} // swing
} // javax