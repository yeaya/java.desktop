#ifndef _bug8032874$4_h_
#define _bug8032874$4_h_
//$ class bug8032874$4
//$ extends javax.swing.RowFilter

#include <javax/swing/RowFilter.h>

namespace javax {
	namespace swing {
		class RowFilter$Entry;
	}
}

class bug8032874$4 : public ::javax::swing::RowFilter {
	$class(bug8032874$4, $NO_CLASS_INIT, ::javax::swing::RowFilter)
public:
	bug8032874$4();
	void init$();
	virtual bool include(::javax::swing::RowFilter$Entry* entry) override;
};

#endif // _bug8032874$4_h_