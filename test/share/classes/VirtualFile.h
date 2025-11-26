#ifndef _VirtualFile_h_
#define _VirtualFile_h_
//$ class VirtualFile
//$ extends java.io.File

#include <java/io/File.h>

class VirtualFile : public ::java::io::File {
	$class(VirtualFile, $NO_CLASS_INIT, ::java::io::File)
public:
	VirtualFile();
	void init$($String* path, bool directory);
	virtual bool canWrite() override;
	virtual bool equals(Object$* obj) override;
	virtual bool exists() override;
	virtual $String* getAbsolutePath() override;
	virtual ::java::io::File* getCanonicalFile() override;
	virtual $String* getCanonicalPath() override;
	virtual $String* getName() override;
	virtual $String* getParent() override;
	virtual ::java::io::File* getParentFile() override;
	virtual $String* getPath() override;
	virtual int32_t hashCode() override;
	virtual bool isDirectory() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0;
	$String* path = nullptr;
	bool directory = false;
};

#endif // _VirtualFile_h_