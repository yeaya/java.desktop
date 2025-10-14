#include <javax/swing/DefaultRowSorter$FilterEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultRowSorter$ModelWrapper.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/RowFilter$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $DefaultRowSorter$ModelWrapper = ::javax::swing::DefaultRowSorter$ModelWrapper;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;

namespace javax {
	namespace swing {

$FieldInfo _DefaultRowSorter$FilterEntry_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/DefaultRowSorter;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultRowSorter$FilterEntry, this$0)},
	{"modelIndex", "I", nullptr, 0, $field(DefaultRowSorter$FilterEntry, modelIndex)},
	{}
};

$MethodInfo _DefaultRowSorter$FilterEntry_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/DefaultRowSorter;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultRowSorter$FilterEntry::*)($DefaultRowSorter*)>(&DefaultRowSorter$FilterEntry::init$))},
	{"getIdentifier", "()Ljava/lang/Object;", "()TI;", $PUBLIC},
	{"getModel", "()Ljava/lang/Object;", "()TM;", $PUBLIC},
	{"getStringValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getValueCount", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultRowSorter$FilterEntry_InnerClassesInfo_[] = {
	{"javax.swing.DefaultRowSorter$FilterEntry", "javax.swing.DefaultRowSorter", "FilterEntry", $PRIVATE},
	{"javax.swing.RowFilter$Entry", "javax.swing.RowFilter", "Entry", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultRowSorter$FilterEntry_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.DefaultRowSorter$FilterEntry",
	"javax.swing.RowFilter$Entry",
	nullptr,
	_DefaultRowSorter$FilterEntry_FieldInfo_,
	_DefaultRowSorter$FilterEntry_MethodInfo_,
	"Ljavax/swing/RowFilter$Entry<TM;TI;>;",
	nullptr,
	_DefaultRowSorter$FilterEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.DefaultRowSorter"
};

$Object* allocate$DefaultRowSorter$FilterEntry($Class* clazz) {
	return $of($alloc(DefaultRowSorter$FilterEntry));
}

void DefaultRowSorter$FilterEntry::init$($DefaultRowSorter* this$0) {
	$set(this, this$0, this$0);
	$RowFilter$Entry::init$();
}

$Object* DefaultRowSorter$FilterEntry::getModel() {
	return $of($nc($(this->this$0->getModelWrapper()))->getModel());
}

int32_t DefaultRowSorter$FilterEntry::getValueCount() {
	return $nc($(this->this$0->getModelWrapper()))->getColumnCount();
}

$Object* DefaultRowSorter$FilterEntry::getValue(int32_t index) {
	return $of($nc($(this->this$0->getModelWrapper()))->getValueAt(this->modelIndex, index));
}

$String* DefaultRowSorter$FilterEntry::getStringValue(int32_t index) {
	return $nc($(this->this$0->getModelWrapper()))->getStringValueAt(this->modelIndex, index);
}

$Object* DefaultRowSorter$FilterEntry::getIdentifier() {
	return $of($nc($(this->this$0->getModelWrapper()))->getIdentifier(this->modelIndex));
}

DefaultRowSorter$FilterEntry::DefaultRowSorter$FilterEntry() {
}

$Class* DefaultRowSorter$FilterEntry::load$($String* name, bool initialize) {
	$loadClass(DefaultRowSorter$FilterEntry, name, initialize, &_DefaultRowSorter$FilterEntry_ClassInfo_, allocate$DefaultRowSorter$FilterEntry);
	return class$;
}

$Class* DefaultRowSorter$FilterEntry::class$ = nullptr;

	} // swing
} // javax