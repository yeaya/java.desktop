#ifndef _sun_awt_shell_ShellFolder_h_
#define _sun_awt_shell_ShellFolder_h_
//$ class sun.awt.shell.ShellFolder
//$ extends java.io.File

#include <java/io/File.h>
#include <java/lang/Array.h>

#pragma push_macro("COLUMN_DATE")
#undef COLUMN_DATE
#pragma push_macro("COLUMN_NAME")
#undef COLUMN_NAME
#pragma push_macro("COLUMN_SIZE")
#undef COLUMN_SIZE
#pragma push_macro("DEFAULT_COMPARATOR")
#undef DEFAULT_COMPARATOR
#pragma push_macro("FILE_COMPARATOR")
#undef FILE_COMPARATOR

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace util {
		class Comparator;
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}
namespace sun {
	namespace awt {
		namespace shell {
			class ShellFolder$Invoker;
			class ShellFolderColumnInfo;
			class ShellFolderManager;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $import ShellFolder : public ::java::io::File {
	$class(ShellFolder, 0, ::java::io::File)
public:
	ShellFolder();
	using ::java::io::File::listFiles;
	void init$(::sun::awt::shell::ShellFolder* parent, $String* pathname);
	virtual bool canRead() override;
	virtual bool canWrite() override;
	virtual int32_t compareTo(::java::io::File* file2) override;
	virtual int32_t compareTo(Object$* file2) override;
	virtual bool createNewFile() override;
	virtual bool delete$() override;
	virtual void deleteOnExit() override;
	virtual bool exists() override;
	static $Object* get($String* key);
	virtual ::java::io::File* getAbsoluteFile() override;
	virtual $String* getDisplayName() {return nullptr;}
	virtual $String* getExecutableType() {return nullptr;}
	static $Object* getFolderColumnValue(::java::io::File* file, int32_t column);
	virtual $Object* getFolderColumnValue(int32_t column);
	static $Array<::sun::awt::shell::ShellFolderColumnInfo>* getFolderColumns(::java::io::File* dir);
	virtual $Array<::sun::awt::shell::ShellFolderColumnInfo>* getFolderColumns();
	virtual $String* getFolderType() {return nullptr;}
	virtual ::java::awt::Image* getIcon(bool getLargeIcon);
	virtual ::java::awt::Image* getIcon(int32_t width, int32_t height);
	virtual ::sun::awt::shell::ShellFolder* getLinkLocation() {return nullptr;}
	static ::java::io::File* getNormalizedFile(::java::io::File* f);
	virtual $String* getParent() override;
	virtual ::java::io::File* getParentFile() override;
	static ::sun::awt::shell::ShellFolder* getShellFolder(::java::io::File* file);
	static $Object* invoke(::java::util::concurrent::Callable* task);
	static $Object* invoke(::java::util::concurrent::Callable* task, $Class* exceptionClass);
	virtual bool isAbsolute() override;
	static bool isComputerNode(::java::io::File* dir);
	virtual bool isDirectory() override;
	virtual bool isFile() override;
	virtual bool isFileSystem();
	static bool isFileSystemRoot(::java::io::File* dir);
	virtual bool isLink() {return false;}
	virtual int64_t lastModified() override;
	virtual int64_t length() override;
	virtual $Array<::java::io::File>* listFiles() override;
	virtual $Array<::java::io::File>* listFiles(bool includeHiddenFiles);
	virtual bool mkdir() override;
	virtual bool mkdirs() override;
	virtual bool renameTo(::java::io::File* dest) override;
	virtual bool setLastModified(int64_t time) override;
	virtual bool setReadOnly() override;
	static void sort(::java::util::List* files);
	virtual void sortChildren(::java::util::List* files);
	virtual $String* toString() override;
	virtual $Object* writeReplace() {return nullptr;}
	static $String* COLUMN_NAME;
	static $String* COLUMN_SIZE;
	static $String* COLUMN_DATE;
	::sun::awt::shell::ShellFolder* parent = nullptr;
	static ::sun::awt::shell::ShellFolderManager* shellFolderManager;
	static ::sun::awt::shell::ShellFolder$Invoker* invoker;
	static ::java::util::Comparator* DEFAULT_COMPARATOR;
	static ::java::util::Comparator* FILE_COMPARATOR;
};

		} // shell
	} // awt
} // sun

#pragma pop_macro("COLUMN_DATE")
#pragma pop_macro("COLUMN_NAME")
#pragma pop_macro("COLUMN_SIZE")
#pragma pop_macro("DEFAULT_COMPARATOR")
#pragma pop_macro("FILE_COMPARATOR")

#endif // _sun_awt_shell_ShellFolder_h_