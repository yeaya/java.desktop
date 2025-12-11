#include <javax/accessibility/AccessibleTable.h>

#include <javax/accessibility/Accessible.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleTable_MethodInfo_[] = {
	{"getAccessibleAt", "(II)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleCaption", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleColumnCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleColumnDescription", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleColumnExtentAt", "(II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleColumnHeader", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleRowCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleRowDescription", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleRowExtentAt", "(II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleRowHeader", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleSummary", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectedAccessibleColumns", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectedAccessibleRows", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"isAccessibleColumnSelected", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isAccessibleRowSelected", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isAccessibleSelected", "(II)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setAccessibleCaption", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAccessibleColumnDescription", "(ILjavax/accessibility/Accessible;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAccessibleColumnHeader", "(Ljavax/accessibility/AccessibleTable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAccessibleRowDescription", "(ILjavax/accessibility/Accessible;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAccessibleRowHeader", "(Ljavax/accessibility/AccessibleTable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAccessibleSummary", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleTable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleTable",
	nullptr,
	nullptr,
	nullptr,
	_AccessibleTable_MethodInfo_
};

$Object* allocate$AccessibleTable($Class* clazz) {
	return $of($alloc(AccessibleTable));
}

$Class* AccessibleTable::load$($String* name, bool initialize) {
	$loadClass(AccessibleTable, name, initialize, &_AccessibleTable_ClassInfo_, allocate$AccessibleTable);
	return class$;
}

$Class* AccessibleTable::class$ = nullptr;

	} // accessibility
} // javax