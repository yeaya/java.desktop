#include <FileFilterDescription$CustomFileFilter.h>

#include <FileFilterDescription.h>
#include <java/io/File.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $FileFilterDescription = ::FileFilterDescription;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

$MethodInfo _FileFilterDescription$CustomFileFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FileFilterDescription$CustomFileFilter::*)()>(&FileFilterDescription$CustomFileFilter::init$))},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FileFilterDescription$CustomFileFilter_InnerClassesInfo_[] = {
	{"FileFilterDescription$CustomFileFilter", "FileFilterDescription", "CustomFileFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FileFilterDescription$CustomFileFilter_ClassInfo_ = {
	$ACC_SUPER,
	"FileFilterDescription$CustomFileFilter",
	"javax.swing.filechooser.FileFilter",
	nullptr,
	nullptr,
	_FileFilterDescription$CustomFileFilter_MethodInfo_,
	nullptr,
	nullptr,
	_FileFilterDescription$CustomFileFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FileFilterDescription"
};

$Object* allocate$FileFilterDescription$CustomFileFilter($Class* clazz) {
	return $of($alloc(FileFilterDescription$CustomFileFilter));
}

void FileFilterDescription$CustomFileFilter::init$() {
	$FileFilter::init$();
}

bool FileFilterDescription$CustomFileFilter::accept($File* f) {
	return false;
}

$String* FileFilterDescription$CustomFileFilter::getDescription() {
	return "CustomFileFilter"_s;
}

FileFilterDescription$CustomFileFilter::FileFilterDescription$CustomFileFilter() {
}

$Class* FileFilterDescription$CustomFileFilter::load$($String* name, bool initialize) {
	$loadClass(FileFilterDescription$CustomFileFilter, name, initialize, &_FileFilterDescription$CustomFileFilter_ClassInfo_, allocate$FileFilterDescription$CustomFileFilter);
	return class$;
}

$Class* FileFilterDescription$CustomFileFilter::class$ = nullptr;