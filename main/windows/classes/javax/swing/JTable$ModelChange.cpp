#include <javax/swing/JTable$ModelChange.h>

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
#include <javax/swing/JTable.h>
#include <javax/swing/event/TableModelEvent.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;
using $TableModel = ::javax::swing::table::TableModel;

namespace javax {
	namespace swing {

$FieldInfo _JTable$ModelChange_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$ModelChange, this$0)},
	{"startModelIndex", "I", nullptr, 0, $field(JTable$ModelChange, startModelIndex)},
	{"endModelIndex", "I", nullptr, 0, $field(JTable$ModelChange, endModelIndex)},
	{"type", "I", nullptr, 0, $field(JTable$ModelChange, type)},
	{"modelRowCount", "I", nullptr, 0, $field(JTable$ModelChange, modelRowCount)},
	{"event", "Ljavax/swing/event/TableModelEvent;", nullptr, 0, $field(JTable$ModelChange, event)},
	{"length", "I", nullptr, 0, $field(JTable$ModelChange, length)},
	{"allRowsChanged", "Z", nullptr, 0, $field(JTable$ModelChange, allRowsChanged)},
	{}
};

$MethodInfo _JTable$ModelChange_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTable;Ljavax/swing/event/TableModelEvent;)V", nullptr, 0, $method(static_cast<void(JTable$ModelChange::*)($JTable*,$TableModelEvent*)>(&JTable$ModelChange::init$))},
	{}
};

$InnerClassInfo _JTable$ModelChange_InnerClassesInfo_[] = {
	{"javax.swing.JTable$ModelChange", "javax.swing.JTable", "ModelChange", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _JTable$ModelChange_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.JTable$ModelChange",
	"java.lang.Object",
	nullptr,
	_JTable$ModelChange_FieldInfo_,
	_JTable$ModelChange_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$ModelChange_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$ModelChange($Class* clazz) {
	return $of($alloc(JTable$ModelChange));
}

void JTable$ModelChange::init$($JTable* this$0, $TableModelEvent* e) {
	$set(this, this$0, this$0);
	this->startModelIndex = $Math::max(0, $nc(e)->getFirstRow());
	this->endModelIndex = $nc(e)->getLastRow();
	this->modelRowCount = $nc($(this$0->getModel()))->getRowCount();
	if (this->endModelIndex < 0) {
		this->endModelIndex = $Math::max(0, this->modelRowCount - 1);
	}
	this->length = this->endModelIndex - this->startModelIndex + 1;
	this->type = e->getType();
	$set(this, event, e);
	this->allRowsChanged = (e->getLastRow() == $Integer::MAX_VALUE);
}

JTable$ModelChange::JTable$ModelChange() {
}

$Class* JTable$ModelChange::load$($String* name, bool initialize) {
	$loadClass(JTable$ModelChange, name, initialize, &_JTable$ModelChange_ClassInfo_, allocate$JTable$ModelChange);
	return class$;
}

$Class* JTable$ModelChange::class$ = nullptr;

	} // swing
} // javax