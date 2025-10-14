#ifndef _sun_awt_shell_Win32ShellFolder2$FolderDisposer_h_
#define _sun_awt_shell_Win32ShellFolder2$FolderDisposer_h_
//$ class sun.awt.shell.Win32ShellFolder2$FolderDisposer
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace sun {
	namespace awt {
		namespace shell {

class $export Win32ShellFolder2$FolderDisposer : public ::sun::java2d::DisposerRecord {
	$class(Win32ShellFolder2$FolderDisposer, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	Win32ShellFolder2$FolderDisposer();
	void init$();
	virtual void dispose() override;
	int64_t absolutePIDL = 0;
	int64_t pIShellFolder = 0;
	int64_t relativePIDL = 0;
	bool disposed = false;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$FolderDisposer_h_