#ifndef _sun_swing_FilePane$DelayedSelectionUpdater_h_
#define _sun_swing_FilePane$DelayedSelectionUpdater_h_
//$ class sun.swing.FilePane$DelayedSelectionUpdater
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace sun {
	namespace swing {
		class FilePane;
	}
}

namespace sun {
	namespace swing {

class FilePane$DelayedSelectionUpdater : public ::java::lang::Runnable {
	$class(FilePane$DelayedSelectionUpdater, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	FilePane$DelayedSelectionUpdater();
	void init$(::sun::swing::FilePane* this$0);
	void init$(::sun::swing::FilePane* this$0, ::java::io::File* editFile);
	virtual void run() override;
	::sun::swing::FilePane* this$0 = nullptr;
	::java::io::File* editFile = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$DelayedSelectionUpdater_h_