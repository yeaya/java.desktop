#ifndef _bug8005019$GeneralFilter_h_
#define _bug8005019$GeneralFilter_h_
//$ class bug8005019$GeneralFilter
//$ extends javax.swing.RowFilter

#include <java/lang/Array.h>
#include <javax/swing/RowFilter.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class RowFilter$Entry;
	}
}

class bug8005019$GeneralFilter : public ::javax::swing::RowFilter {
	$class(bug8005019$GeneralFilter, $NO_CLASS_INIT, ::javax::swing::RowFilter)
public:
	bug8005019$GeneralFilter();
	void init$($ints* columns);
	virtual bool include(::javax::swing::RowFilter$Entry* value) override;
	virtual bool include(::javax::swing::RowFilter$Entry* entry, int32_t index);
	$ints* columns = nullptr;
	::java::util::List* excludes = nullptr;
};

#endif // _bug8005019$GeneralFilter_h_