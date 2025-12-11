#include <javax/swing/JTable$2.h>

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

$FieldInfo _JTable$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$2, this$0)},
	{"val$inverse", "Z", nullptr, $FINAL | $SYNTHETIC, $field(JTable$2, val$inverse)},
	{"val$cm", "Ljavax/swing/table/TableColumnModel;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$2, val$cm)},
	{}
};

$MethodInfo _JTable$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTable;Ljavax/swing/table/TableColumnModel;Z)V", "()V", 0, $method(static_cast<void(JTable$2::*)($JTable*,$TableColumnModel*,bool)>(&JTable$2::init$))},
	{"getElementCount", "()I", nullptr, $PUBLIC},
	{"getLowerBoundAt", "(I)I", nullptr, $PUBLIC},
	{"getMidPointAt", "(I)I", nullptr, $PUBLIC},
	{"getUpperBoundAt", "(I)I", nullptr, $PUBLIC},
	{"setSizeAt", "(II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTable$2_EnclosingMethodInfo_ = {
	"javax.swing.JTable",
	"setWidthsFromPreferredWidths",
	"(Z)V"
};

$InnerClassInfo _JTable$2_InnerClassesInfo_[] = {
	{"javax.swing.JTable$2", nullptr, nullptr, 0},
	{"javax.swing.JTable$Resizable3", "javax.swing.JTable", "Resizable3", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JTable$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$2",
	"java.lang.Object",
	"javax.swing.JTable$Resizable3",
	_JTable$2_FieldInfo_,
	_JTable$2_MethodInfo_,
	nullptr,
	&_JTable$2_EnclosingMethodInfo_,
	_JTable$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$2($Class* clazz) {
	return $of($alloc(JTable$2));
}

void JTable$2::init$($JTable* this$0, $TableColumnModel* val$cm, bool val$inverse) {
	$set(this, this$0, this$0);
	$set(this, val$cm, val$cm);
	this->val$inverse = val$inverse;
}

int32_t JTable$2::getElementCount() {
	return $nc(this->val$cm)->getColumnCount();
}

int32_t JTable$2::getLowerBoundAt(int32_t i) {
	return $nc($($nc(this->val$cm)->getColumn(i)))->getMinWidth();
}

int32_t JTable$2::getUpperBoundAt(int32_t i) {
	return $nc($($nc(this->val$cm)->getColumn(i)))->getMaxWidth();
}

int32_t JTable$2::getMidPointAt(int32_t i) {
	$useLocalCurrentObjectStackCache();
	if (!this->val$inverse) {
		return $nc($($nc(this->val$cm)->getColumn(i)))->getPreferredWidth();
	} else {
		return $nc($($nc(this->val$cm)->getColumn(i)))->getWidth();
	}
}

void JTable$2::setSizeAt(int32_t s, int32_t i) {
	$useLocalCurrentObjectStackCache();
	if (!this->val$inverse) {
		$nc($($nc(this->val$cm)->getColumn(i)))->setWidth(s);
	} else {
		$nc($($nc(this->val$cm)->getColumn(i)))->setPreferredWidth(s);
	}
}

JTable$2::JTable$2() {
}

$Class* JTable$2::load$($String* name, bool initialize) {
	$loadClass(JTable$2, name, initialize, &_JTable$2_ClassInfo_, allocate$JTable$2);
	return class$;
}

$Class* JTable$2::class$ = nullptr;

	} // swing
} // javax