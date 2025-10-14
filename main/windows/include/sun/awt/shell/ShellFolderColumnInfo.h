#ifndef _sun_awt_shell_ShellFolderColumnInfo_h_
#define _sun_awt_shell_ShellFolderColumnInfo_h_
//$ class sun.awt.shell.ShellFolderColumnInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Comparator;
	}
}
namespace javax {
	namespace swing {
		class SortOrder;
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $import ShellFolderColumnInfo : public ::java::lang::Object {
	$class(ShellFolderColumnInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ShellFolderColumnInfo();
	void init$($String* title, ::java::lang::Integer* width, ::java::lang::Integer* alignment, bool visible, ::javax::swing::SortOrder* sortOrder, ::java::util::Comparator* comparator, bool compareByColumn);
	void init$($String* title, ::java::lang::Integer* width, ::java::lang::Integer* alignment, bool visible, ::javax::swing::SortOrder* sortOrder, ::java::util::Comparator* comparator);
	void init$($String* title, int32_t width, int32_t alignment, bool visible);
	virtual ::java::lang::Integer* getAlignment();
	virtual ::java::util::Comparator* getComparator();
	virtual ::javax::swing::SortOrder* getSortOrder();
	virtual $String* getTitle();
	virtual ::java::lang::Integer* getWidth();
	virtual bool isCompareByColumn();
	virtual bool isVisible();
	virtual void setAlignment(::java::lang::Integer* alignment);
	virtual void setComparator(::java::util::Comparator* comparator);
	virtual void setCompareByColumn(bool compareByColumn);
	virtual void setSortOrder(::javax::swing::SortOrder* sortOrder);
	virtual void setTitle($String* title);
	virtual void setVisible(bool visible);
	virtual void setWidth(::java::lang::Integer* width);
	$String* title = nullptr;
	::java::lang::Integer* width = nullptr;
	bool visible = false;
	::java::lang::Integer* alignment = nullptr;
	::javax::swing::SortOrder* sortOrder = nullptr;
	::java::util::Comparator* comparator = nullptr;
	bool compareByColumn = false;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_ShellFolderColumnInfo_h_