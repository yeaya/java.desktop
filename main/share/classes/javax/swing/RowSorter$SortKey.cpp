#include <javax/swing/RowSorter$SortKey.h>

#include <javax/swing/RowSorter.h>
#include <javax/swing/SortOrder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SortOrder = ::javax::swing::SortOrder;

namespace javax {
	namespace swing {

$FieldInfo _RowSorter$SortKey_FieldInfo_[] = {
	{"column", "I", nullptr, $PRIVATE, $field(RowSorter$SortKey, column)},
	{"sortOrder", "Ljavax/swing/SortOrder;", nullptr, $PRIVATE, $field(RowSorter$SortKey, sortOrder)},
	{}
};

$MethodInfo _RowSorter$SortKey_MethodInfo_[] = {
	{"<init>", "(ILjavax/swing/SortOrder;)V", nullptr, $PUBLIC, $method(static_cast<void(RowSorter$SortKey::*)(int32_t,$SortOrder*)>(&RowSorter$SortKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getColumn", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(RowSorter$SortKey::*)()>(&RowSorter$SortKey::getColumn))},
	{"getSortOrder", "()Ljavax/swing/SortOrder;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SortOrder*(RowSorter$SortKey::*)()>(&RowSorter$SortKey::getSortOrder))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RowSorter$SortKey_InnerClassesInfo_[] = {
	{"javax.swing.RowSorter$SortKey", "javax.swing.RowSorter", "SortKey", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _RowSorter$SortKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.RowSorter$SortKey",
	"java.lang.Object",
	nullptr,
	_RowSorter$SortKey_FieldInfo_,
	_RowSorter$SortKey_MethodInfo_,
	nullptr,
	nullptr,
	_RowSorter$SortKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RowSorter"
};

$Object* allocate$RowSorter$SortKey($Class* clazz) {
	return $of($alloc(RowSorter$SortKey));
}

void RowSorter$SortKey::init$(int32_t column, $SortOrder* sortOrder) {
	if (sortOrder == nullptr) {
		$throwNew($IllegalArgumentException, "sort order must be non-null"_s);
	}
	this->column = column;
	$set(this, sortOrder, sortOrder);
}

int32_t RowSorter$SortKey::getColumn() {
	return this->column;
}

$SortOrder* RowSorter$SortKey::getSortOrder() {
	return this->sortOrder;
}

int32_t RowSorter$SortKey::hashCode() {
	int32_t result = 17;
	result = 37 * result + this->column;
	result = 37 * result + $nc(this->sortOrder)->hashCode();
	return result;
}

bool RowSorter$SortKey::equals(Object$* o) {
	if ($equals(o, this)) {
		return true;
	}
	if ($instanceOf(RowSorter$SortKey, o)) {
		return ($nc(($cast(RowSorter$SortKey, o)))->column == this->column && ($cast(RowSorter$SortKey, o))->sortOrder == this->sortOrder);
	}
	return false;
}

RowSorter$SortKey::RowSorter$SortKey() {
}

$Class* RowSorter$SortKey::load$($String* name, bool initialize) {
	$loadClass(RowSorter$SortKey, name, initialize, &_RowSorter$SortKey_ClassInfo_, allocate$RowSorter$SortKey);
	return class$;
}

$Class* RowSorter$SortKey::class$ = nullptr;

	} // swing
} // javax