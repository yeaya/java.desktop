#ifndef _java_awt_FileDialog_h_
#define _java_awt_FileDialog_h_
//$ class java.awt.FileDialog
//$ extends java.awt.Dialog

#include <java/awt/Dialog.h>
#include <java/lang/Array.h>

#pragma push_macro("LOAD")
#undef LOAD
#pragma push_macro("SAVE")
#undef SAVE

namespace java {
	namespace awt {
		class Frame;
	}
}
namespace java {
	namespace io {
		class File;
		class FilenameFilter;
		class ObjectInputStream;
	}
}

namespace java {
	namespace awt {

class $import FileDialog : public ::java::awt::Dialog {
	$class(FileDialog, 0, ::java::awt::Dialog)
public:
	FileDialog();
	using ::java::awt::Dialog::isFocusCycleRoot;
	using ::java::awt::Dialog::add;
	using ::java::awt::Dialog::getMousePosition;
	using ::java::awt::Dialog::list;
	void init$(::java::awt::Frame* parent);
	void init$(::java::awt::Frame* parent, $String* title);
	void init$(::java::awt::Frame* parent, $String* title, int32_t mode);
	void init$(::java::awt::Dialog* parent);
	void init$(::java::awt::Dialog* parent, $String* title);
	void init$(::java::awt::Dialog* parent, $String* title, int32_t mode);
	virtual void addNotify() override;
	virtual $String* constructComponentName() override;
	virtual $String* getDirectory();
	virtual $String* getFile();
	virtual ::java::io::FilenameFilter* getFilenameFilter();
	virtual $Array<::java::io::File>* getFiles();
	virtual int32_t getMode();
	static void initIDs();
	virtual bool isMultipleMode();
	virtual $String* paramString() override;
	virtual bool postsOldMouseEvents() override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::java::awt::Dialog::remove;
	virtual void setDirectory($String* dir);
	virtual void setFile($String* file);
	virtual void setFilenameFilter(::java::io::FilenameFilter* filter);
	void setFiles($Array<::java::io::File>* files);
	virtual void setMode(int32_t mode);
	virtual void setMultipleMode(bool enable);
	virtual void setTitle($String* title) override;
	using ::java::awt::Dialog::show;
	static const int32_t LOAD = 0;
	static const int32_t SAVE = 1;
	int32_t mode = 0;
	$String* dir = nullptr;
	$String* file = nullptr;
	$Array<::java::io::File>* files = nullptr;
	bool multipleMode = false;
	::java::io::FilenameFilter* filter = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0x45E06E8260EF3F56;
};

	} // awt
} // java

#pragma pop_macro("LOAD")
#pragma pop_macro("SAVE")

#endif // _java_awt_FileDialog_h_