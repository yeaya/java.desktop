#ifndef _sun_awt_shell_DefaultShellFolder_h_
#define _sun_awt_shell_DefaultShellFolder_h_
//$ class sun.awt.shell.DefaultShellFolder
//$ extends sun.awt.shell.ShellFolder

#include <java/lang/Array.h>
#include <sun/awt/shell/ShellFolder.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $import DefaultShellFolder : public ::sun::awt::shell::ShellFolder {
	$class(DefaultShellFolder, $NO_CLASS_INIT, ::sun::awt::shell::ShellFolder)
public:
	DefaultShellFolder();
	void init$(::sun::awt::shell::ShellFolder* parent, ::java::io::File* f);
	virtual $String* getDisplayName() override;
	virtual $String* getExecutableType() override;
	virtual $String* getFolderType() override;
	virtual ::sun::awt::shell::ShellFolder* getLinkLocation() override;
	virtual bool isHidden() override;
	virtual bool isLink() override;
	using ::sun::awt::shell::ShellFolder::listFiles;
	virtual $Array<::java::io::File>* listFiles() override;
	virtual $Object* writeReplace() override;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_DefaultShellFolder_h_