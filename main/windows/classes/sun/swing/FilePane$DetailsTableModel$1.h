#ifndef _sun_swing_FilePane$DetailsTableModel$1_h_
#define _sun_swing_FilePane$DetailsTableModel$1_h_
//$ class sun.swing.FilePane$DetailsTableModel$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
	}
}
namespace sun {
	namespace swing {
		class FilePane$DetailsTableModel;
	}
}

namespace sun {
	namespace swing {

class FilePane$DetailsTableModel$1 : public ::java::lang::Runnable {
	$class(FilePane$DetailsTableModel$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	FilePane$DetailsTableModel$1();
	void init$(::sun::swing::FilePane$DetailsTableModel* this$1, ::javax::swing::JFileChooser* val$chooser, ::java::io::File* val$f2);
	virtual void run() override;
	::sun::swing::FilePane$DetailsTableModel* this$1 = nullptr;
	::java::io::File* val$f2 = nullptr;
	::javax::swing::JFileChooser* val$chooser = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$DetailsTableModel$1_h_