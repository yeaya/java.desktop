#ifndef _javax_accessibility_AccessibleExtendedTable_h_
#define _javax_accessibility_AccessibleExtendedTable_h_
//$ interface javax.accessibility.AccessibleExtendedTable
//$ extends javax.accessibility.AccessibleTable

#include <javax/accessibility/AccessibleTable.h>

namespace javax {
	namespace accessibility {

class $import AccessibleExtendedTable : public ::javax::accessibility::AccessibleTable {
	$interface(AccessibleExtendedTable, $NO_CLASS_INIT, ::javax::accessibility::AccessibleTable)
public:
	virtual int32_t getAccessibleColumn(int32_t index) {return 0;}
	virtual int32_t getAccessibleIndex(int32_t r, int32_t c) {return 0;}
	virtual int32_t getAccessibleRow(int32_t index) {return 0;}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleExtendedTable_h_