#include <javax/swing/DefaultRowSorter$Row.h>

#include <javax/swing/DefaultRowSorter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;

namespace javax {
	namespace swing {

$FieldInfo _DefaultRowSorter$Row_FieldInfo_[] = {
	{"sorter", "Ljavax/swing/DefaultRowSorter;", "Ljavax/swing/DefaultRowSorter<**>;", $PRIVATE, $field(DefaultRowSorter$Row, sorter)},
	{"modelIndex", "I", nullptr, 0, $field(DefaultRowSorter$Row, modelIndex)},
	{}
};

$MethodInfo _DefaultRowSorter$Row_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/DefaultRowSorter;I)V", "(Ljavax/swing/DefaultRowSorter<**>;I)V", $PUBLIC, $method(static_cast<void(DefaultRowSorter$Row::*)($DefaultRowSorter*,int32_t)>(&DefaultRowSorter$Row::init$))},
	{"compareTo", "(Ljavax/swing/DefaultRowSorter$Row;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DefaultRowSorter$Row_InnerClassesInfo_[] = {
	{"javax.swing.DefaultRowSorter$Row", "javax.swing.DefaultRowSorter", "Row", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DefaultRowSorter$Row_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.DefaultRowSorter$Row",
	"java.lang.Object",
	"java.lang.Comparable",
	_DefaultRowSorter$Row_FieldInfo_,
	_DefaultRowSorter$Row_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljavax/swing/DefaultRowSorter$Row;>;",
	nullptr,
	_DefaultRowSorter$Row_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.DefaultRowSorter"
};

$Object* allocate$DefaultRowSorter$Row($Class* clazz) {
	return $of($alloc(DefaultRowSorter$Row));
}

void DefaultRowSorter$Row::init$($DefaultRowSorter* sorter, int32_t index) {
	$set(this, sorter, sorter);
	this->modelIndex = index;
}

int32_t DefaultRowSorter$Row::compareTo(DefaultRowSorter$Row* o) {
	return $nc(this->sorter)->compare(this->modelIndex, $nc(o)->modelIndex);
}

int32_t DefaultRowSorter$Row::compareTo(Object$* o) {
	return this->compareTo($cast(DefaultRowSorter$Row, o));
}

DefaultRowSorter$Row::DefaultRowSorter$Row() {
}

$Class* DefaultRowSorter$Row::load$($String* name, bool initialize) {
	$loadClass(DefaultRowSorter$Row, name, initialize, &_DefaultRowSorter$Row_ClassInfo_, allocate$DefaultRowSorter$Row);
	return class$;
}

$Class* DefaultRowSorter$Row::class$ = nullptr;

	} // swing
} // javax