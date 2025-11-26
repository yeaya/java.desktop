#ifndef _javax_swing_filechooser_FileView_h_
#define _javax_swing_filechooser_FileView_h_
//$ class javax.swing.filechooser.FileView
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace javax {
	namespace swing {
		namespace filechooser {

class $import FileView : public ::java::lang::Object {
	$class(FileView, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FileView();
	void init$();
	virtual $String* getDescription(::java::io::File* f);
	virtual ::javax::swing::Icon* getIcon(::java::io::File* f);
	virtual $String* getName(::java::io::File* f);
	virtual $String* getTypeDescription(::java::io::File* f);
	virtual ::java::lang::Boolean* isTraversable(::java::io::File* f);
};

		} // filechooser
	} // swing
} // javax

#endif // _javax_swing_filechooser_FileView_h_