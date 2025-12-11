#include <javax/accessibility/AccessibleExtendedTable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleExtendedTable_MethodInfo_[] = {
	{"getAccessibleColumn", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleIndex", "(II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleRow", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleExtendedTable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleExtendedTable",
	nullptr,
	"javax.accessibility.AccessibleTable",
	nullptr,
	_AccessibleExtendedTable_MethodInfo_
};

$Object* allocate$AccessibleExtendedTable($Class* clazz) {
	return $of($alloc(AccessibleExtendedTable));
}

$Class* AccessibleExtendedTable::load$($String* name, bool initialize) {
	$loadClass(AccessibleExtendedTable, name, initialize, &_AccessibleExtendedTable_ClassInfo_, allocate$AccessibleExtendedTable);
	return class$;
}

$Class* AccessibleExtendedTable::class$ = nullptr;

	} // accessibility
} // javax