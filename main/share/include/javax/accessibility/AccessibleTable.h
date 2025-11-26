#ifndef _javax_accessibility_AccessibleTable_h_
#define _javax_accessibility_AccessibleTable_h_
//$ interface javax.accessibility.AccessibleTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace accessibility {
		class Accessible;
	}
}

namespace javax {
	namespace accessibility {

class $import AccessibleTable : public ::java::lang::Object {
	$interface(AccessibleTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::accessibility::Accessible* getAccessibleAt(int32_t r, int32_t c) {return nullptr;}
	virtual ::javax::accessibility::Accessible* getAccessibleCaption() {return nullptr;}
	virtual int32_t getAccessibleColumnCount() {return 0;}
	virtual ::javax::accessibility::Accessible* getAccessibleColumnDescription(int32_t c) {return nullptr;}
	virtual int32_t getAccessibleColumnExtentAt(int32_t r, int32_t c) {return 0;}
	virtual ::javax::accessibility::AccessibleTable* getAccessibleColumnHeader() {return nullptr;}
	virtual int32_t getAccessibleRowCount() {return 0;}
	virtual ::javax::accessibility::Accessible* getAccessibleRowDescription(int32_t r) {return nullptr;}
	virtual int32_t getAccessibleRowExtentAt(int32_t r, int32_t c) {return 0;}
	virtual ::javax::accessibility::AccessibleTable* getAccessibleRowHeader() {return nullptr;}
	virtual ::javax::accessibility::Accessible* getAccessibleSummary() {return nullptr;}
	virtual $ints* getSelectedAccessibleColumns() {return nullptr;}
	virtual $ints* getSelectedAccessibleRows() {return nullptr;}
	virtual bool isAccessibleColumnSelected(int32_t c) {return false;}
	virtual bool isAccessibleRowSelected(int32_t r) {return false;}
	virtual bool isAccessibleSelected(int32_t r, int32_t c) {return false;}
	virtual void setAccessibleCaption(::javax::accessibility::Accessible* a) {}
	virtual void setAccessibleColumnDescription(int32_t c, ::javax::accessibility::Accessible* a) {}
	virtual void setAccessibleColumnHeader(::javax::accessibility::AccessibleTable* table) {}
	virtual void setAccessibleRowDescription(int32_t r, ::javax::accessibility::Accessible* a) {}
	virtual void setAccessibleRowHeader(::javax::accessibility::AccessibleTable* table) {}
	virtual void setAccessibleSummary(::javax::accessibility::Accessible* a) {}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleTable_h_