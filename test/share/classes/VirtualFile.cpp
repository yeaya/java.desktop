#include <VirtualFile.h>

#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _VirtualFile_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VirtualFile, serialVersionUID)},
	{"path", "Ljava/lang/String;", nullptr, $PRIVATE, $field(VirtualFile, path)},
	{"directory", "Z", nullptr, $PRIVATE, $field(VirtualFile, directory)},
	{}
};

$MethodInfo _VirtualFile_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(VirtualFile::*)($String*,bool)>(&VirtualFile::init$))},
	{"canWrite", "()Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"exists", "()Z", nullptr, $PUBLIC},
	{"getAbsolutePath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCanonicalFile", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"getCanonicalPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParent", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParentFile", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDirectory", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _VirtualFile_ClassInfo_ = {
	$ACC_SUPER,
	"VirtualFile",
	"java.io.File",
	nullptr,
	_VirtualFile_FieldInfo_,
	_VirtualFile_MethodInfo_
};

$Object* allocate$VirtualFile($Class* clazz) {
	return $of($alloc(VirtualFile));
}

void VirtualFile::init$($String* path, bool directory) {
	$File::init$(path);
	$set(this, path, path);
	this->directory = directory;
}

$File* VirtualFile::getParentFile() {
	int32_t index = $nc(this->path)->lastIndexOf((int32_t)u'/');
	if (index == -1) {
		return nullptr;
	}
	return $new(VirtualFile, $($nc(this->path)->substring(0, index)), true);
}

$File* VirtualFile::getCanonicalFile() {
	return this;
}

$String* VirtualFile::getParent() {
	$var($File, parent_file, getParentFile());
	return parent_file == nullptr ? ($String*)nullptr : $nc(parent_file)->getPath();
}

$String* VirtualFile::getName() {
	int32_t index = $nc(this->path)->lastIndexOf((int32_t)u'/');
	return index == -1 ? this->path : $nc(this->path)->substring(index + 1);
}

$String* VirtualFile::getPath() {
	return this->path;
}

$String* VirtualFile::getAbsolutePath() {
	return this->path;
}

$String* VirtualFile::getCanonicalPath() {
	return this->path;
}

$String* VirtualFile::toString() {
	return this->path;
}

bool VirtualFile::equals(Object$* obj) {
	return $instanceOf(VirtualFile, obj) && $nc(this->path)->equals($($nc($of(obj))->toString()));
}

int32_t VirtualFile::hashCode() {
	return $nc(this->path)->hashCode();
}

bool VirtualFile::canWrite() {
	return true;
}

bool VirtualFile::isDirectory() {
	return this->directory;
}

bool VirtualFile::exists() {
	return true;
}

VirtualFile::VirtualFile() {
}

$Class* VirtualFile::load$($String* name, bool initialize) {
	$loadClass(VirtualFile, name, initialize, &_VirtualFile_ClassInfo_, allocate$VirtualFile);
	return class$;
}

$Class* VirtualFile::class$ = nullptr;